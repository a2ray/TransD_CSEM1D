function PT_RJMCMC_loadstate(filename,loadState)
    
    %*** You need to specify these ***
    
    %data, frequencies used, depth of Rx, Tx, Azimuth, etc.
    S_0 = load ('misfit_parameters_canonical_ANISO.mat'); 
    %number of iterations
    N=500; 
    %Acceptance ratios in MCMC chains calculated every so many steps
    ARwindow = 500;%keep it to 500e3
    %save every so many steps
    saveWindow = 500;%keep it to 1e4
    %number of parallel chains (and temperatures)
    nTemps = 12;
    %inverse temperature B ladder
    B = logspace(-log10(2.5),0,12);
    %probability of swapping every count of the MCMC chain
    pSwap = 1;
    %step sizes in model space in log10 resistivity, decreasing temperature
    %for update
    UstepSize = [0.02 0.01 0.01 0.01 0.01 0.008 0.007 0.007 0.006 0.006 0.006 0.006];
    %for birth / death
    BstepSize = [0.6  0.55   0.5   0.4 0.5  0.5   0.4   0.4   0.4   0.4   0.4   0.4];
    %step sizes in model space depth in m, decreasing temperature
    %for move interface
    MstepSize = [25   15    15    15  15   12    12    10    10    8     8     7];
    
    %*** Shouldn't need to modify below this ***
    
    if length(UstepSize) ~= nTemps || ...
        length(BstepSize) ~= nTemps || ...
        length(MstepSize) ~= nTemps
        beep
        disp('less steps sizes than nTemps')
        return
    end
    
    
    if nargin~=2
        rng('default')
    else 
        RandStream.setGlobalStream(loadState.Stream)
    end
    
    AR = cell(nTemps,1);
    AR(:) = {cell(fix(N/ARwindow),1)};%Acceptance ratios
    DummyAR.uAR = 0; DummyAR.bAR = 0; DummyAR.dAR = 0; DummyAR.mAR = 0; 
    DummyAR.TotalAR = 0;
    DummyAR.evalCount = 0;
    DummyAR.swapRate = 0;
    
    samples = cell(nTemps,1);
    samples(:) = {cell(N,1)};
    
    kTracker = cell(nTemps,1);
    kTracker(:) = {zeros(N,1)};
    
    en = zeros(N,2,nTemps);% Chi^2 and RMS errors
    
    swapCount = cell(nTemps,1);
    swapCount(:) = {zeros(N,1)};
    
    Dist  = cell(nTemps,1);
    Dist(:) = {zeros(N,1)};
    
    count = 0; 
    S = cell(nTemps,1);
    S(:) = {S_0};
    
    %initialize stuff and start point
    for ii=1:nTemps
        %status file for each chain
        fid(ii) = fopen([filename,'_',num2str(ii),'_status'], 'w');
        fclose (fid(ii));
        
        AR{ii}(:) = {DummyAR};
        ConvStat{ii}.uA = 0; ConvStat{ii}.bA = 0; ConvStat{ii}.dA = 0; ConvStat{ii}.mA = 0;
        ConvStat{ii}.uc = 0; ConvStat{ii}.bc = 0; ConvStat{ii}.dc = 0; ConvStat{ii}.mc = 0;
        ConvStat{ii}.evalCount = 0;
%         x{ii} = true_model;
%         k{ii} = length(x{ii}.z);
        if nargin~=2
            k{ii} = 1;
            x{ii}.z = S_0.zMin + (S_0.zMax-S_0.zMin)*rand;
            x{ii}.rhov = S_0.rvMin + (S_0.rvMax-S_0.rvMin)*rand(1,k{ii}+1);
            if S{ii}.isotropic
                x{ii}.rhoh = x{ii}.rhov;
            else
                x{ii}.rhoh = S_0.rhMin + (S_0.rhMax-S_0.rhMin)*rand(1,k{ii}+1);
            end    
        else
            loadedMod = loadState.x{ii};
            k{ii} = length(loadedMod.z);
            x{ii} = loadedMod;
        end    
            
        oldMisfit{ii} = csem_misfit(x{ii},S_0);
        S{ii}.rSD1 = UstepSize(ii);
        S{ii}.rSD2 = BstepSize(ii);
        S{ii}.MoveSd = MstepSize(ii);
    end
    
    %start MCMC
    while count<N
        count = count +1;
        %see if swap
        if rand<pSwap
            
            %then swap ALL chains
            [p,q] = determinPerm(nTemps);  
            for iTemp = 1: nTemps
              %twoInts = randperm(nTemps,2);
              first = p(iTemp); second = q(iTemp);

               %now find swap probability according to likelihoods
               logAlphaSwap = (oldMisfit{first}(1) - oldMisfit{second}(1))*(B(first) - B(second)); 
               if log(rand)<logAlphaSwap
                  %sprintf ('%d %d\n',first, second)
                  temp_x      = x{first};
                  temp_k      = k{first};
                  temp_misfit = oldMisfit{first};

                  x{first}          = x{second};
                  k{first}          = k{second};
                  oldMisfit{first}  = oldMisfit{second};

                  x{second}         = temp_x;
                  k{second}         = temp_k;
                  oldMisfit{second} = temp_misfit;

                  jump_dist         = find_distance(x{first},x{second},S_0);%any S will do
                  Dist{first}(count)  = Dist{first}(count) + jump_dist;
                  Dist{second}(count) = Dist{second}(count) + jump_dist;

                  swapCount{first}(count) = 1;
                  swapCount{second}(count) = 1;
               end
            
            end% iTemp 
        
        end%if pswap
        
        %start parallel tempering
        %one step 
        for jj=1:nTemps
            if count==1;
                fid(jj) = fopen([filename,'_',num2str(jj),'_status'], 'a');
            end
            
            %[x{jj},oldMisfit{jj},accepted{jj},Dist{jj}(count)] = MCMCstep(x{jj},oldMisfit{jj},accepted{jj},S{jj},B(jj));
            [x{jj},k{jj},oldMisfit{jj},ConvStat{jj},dTrav] = RJ_MCMC_step(x{jj},k{jj},oldMisfit{jj},ConvStat{jj},S{jj},B(jj),count);
            Dist{jj}(count) = Dist{jj}(count) + dTrav;
            samples{jj}{count} = x{jj};
            kTracker{jj}(count)= k{jj};
            en(count,:,jj)      = oldMisfit{jj};
            
            if mod(count,ARwindow) == 0
                 idx = count/ARwindow;
                 AR{jj}{idx}.uAR = ConvStat{jj}.uA/ConvStat{jj}.uc*100; AR{jj}{idx}.bAR = ConvStat{jj}.bA/ConvStat{jj}.bc*100;
                 AR{jj}{idx}.dAR = ConvStat{jj}.dA/ConvStat{jj}.dc*100; AR{jj}{idx}.mAR = ConvStat{jj}.mA/ConvStat{jj}.mc*100;
                 AR{jj}{idx}.TotalAR = (ConvStat{jj}.uA + ConvStat{jj}.bA + ConvStat{jj}.dA + ConvStat{jj}.mA)/ARwindow*100;
                 AR{jj}{idx}.evalCount = ConvStat{jj}.evalCount;
                 AR{jj}{idx}.swapRate  = sum(swapCount{jj}(count-ARwindow+1:count));
                 ConvStat{jj}.uA = 0; ConvStat{jj}.bA = 0; ConvStat{jj}.dA = 0; ConvStat{jj}.mA = 0;
                 ConvStat{jj}.uc = 0; ConvStat{jj}.bc = 0; ConvStat{jj}.dc = 0; ConvStat{jj}.mc = 0;
                 fprintf(fid(jj),'\nTotal AR: %2.2f Distance: %2.3f Swaps: %3d in %3d steps\n',AR{jj}{idx}.TotalAR,sum(Dist{jj}(count-ARwindow+1:count)),AR{jj}{idx}.swapRate,ARwindow);
                 fprintf(fid(jj),'Birth: %2.2f Death: %2.2f Move: %2.2f Update: %2.2f\n\n',AR{jj}{idx}.bAR,AR{jj}{idx}.dAR,AR{jj}{idx}.mAR,AR{jj}{idx}.uAR);
            end
            fprintf(fid(jj),'File: %s %2d Step %4d Intfcs: %2d SE:%8g  RMS:%2.3f\n',...
                    filename,jj,count,k{jj},en(count,:,jj));
        end%one step    
        
        %see if time to save
        if mod(count,saveWindow)==0
           for ll = 1:nTemps
            loadState.x{ll} = x{ll};   
            loadState.Stream = RandStream.getGlobalStream;   
            s_ll = samples{ll}; k_ll = kTracker{ll}; en_ll = en(:,:,ll); D_ll = Dist{ll}; AR_ll = AR{ll}; S_ll=S{ll}; 
            save ([filename,'_',num2str(ll)],'s_ll','k_ll','en_ll','D_ll', 'AR_ll','S_ll','loadState')
          end
          save ([filename,'_swaps'],'swapCount') 
        end    
               
    end
    %save (filename)
end


%get field for 1D model x 
function [Er,Eb,Hr,Hb,Ez,Hz] = get_field(S,x)
    ModelRho = [S.rho(1,:),10.^x.rhoh;S.rho(2,:),10.^x.rhov];            
    if S.RxAz ~= 0 || S.TxDip ~=0
        [Er,Eb,Hr,Hb,Ez,Hz] = get_CSEM1D_FD_FHT_aniso_hed_ved_mex(S.f,S.r,S.zRx,S.zTx,[S.z,x.z],1./ModelRho,'kk201Hankel.mat',1,S.RxAz,S.TxDip);
    else
        [Er,Eb,Hr,Hb,Ez,Hz] = get_CSEM1D_FD_FHT_aniso_hed_mex(S.f,S.r,S.zRx,S.zTx,[S.z,x.z],1./ModelRho,'kk201Hankel.mat',1);
    end
end   

%CSEM misfit function
function misfit = csem_misfit (x,S)

misfit = zeros(1,2);%for chi2 and RMS

%data usually ordered as [Er,Hb,Ez,Eb,Hr,Hz];
data = S.data;
%get the fields
[Er,Eb,Hr,Hb,Ez,Hz] = get_field(S,x);
replica             = [Er,Hb,Ez,Eb,Hr,Hz];

if size(S.sd,2) == 1 
    errbar  = sqrt(2)*S.sd*abs(data); %for a synthetic noisefloor
else
    errbar  = sqrt(2)*S.sd; %for real data
end

nF = length(S.f);
nRx = size(data,1); 
nData = nRx*nF*6;%6 field components;

%find out which components need to be included
if ~S.components(1) %no Er
    data(:,1:nF) = 0;
    replica(:,1:nF) = 0;
    nData = nData - nF*nRx;
end

if ~S.components(2) %no Hb
    data(:,nF+1:2*nF) = 0;
    replica(:,nF+1:2*nF) = 0;
    nData = nData - nF*nRx;
end

if ~S.components(3) %no Ez
    data(:,2*nF+1:3*nF) = 0;
    replica(:,2*nF+1:3*nF) = 0;
    nData = nData - nF*nRx;
end

if ~S.components(4) %no Eb
    data(:,3*nF+1:4*nF) = 0;
    replica(:,3*nF+1:4*nF) = 0;
    nData = nData - nF*nRx;
end

if ~S.components(5) %no Hr
    data(:,4*nF+1:5*nF) = 0;
    replica(:,4*nF+1:5*nF) = 0;
    nData = nData - nF*nRx;
end

if ~S.components(6) %no Hz
    data(:,5*nF+1:6*nF) = 0;
    replica(:,5*nF+1:6*nF) = 0;
    nData = nData - nF*nRx;
end

m = (data(:) - replica(:))./errbar(:);
%only look at NaNs in the data
nData = nData - sum(isnan(data(:)));
m(isnan(m))=0;

misfit = [m'*m, sqrt(m'*m/nData)];
end

%This is for fixed dimension MCMC, which is commented out in the main
%program - either use this or RJ_MCMC_step in main program, not both
function [x,oldMisfit,accepted,Dist] = MCMCstep(x,oldMisfit,accepted,S,B)
    priorViolate=0;
    Dist = 0;
    xNew = x;
    k = length(x.z);    
    xNew.rhov = x.rhov + S.rSD1*randn(1,k+1);
%      layer = randi(k+1);
%      xNew.rhov(layer) = x.rhov(layer) + S.rSD1*randn;
    %is isotropic
    xNew.rhoh = xNew.rhov;
        
    if  any(xNew.rhov < S.rvMin) || any(xNew.rhov > S.rvMax)
        priorViolate=1;
    end
    
    if ~priorViolate
     newMisfit = csem_misfit(xNew,S);
     logalpha = -B*(newMisfit(1) - oldMisfit(1))/2;
    else
        logalpha = -Inf;
    end

    if log(rand)<logalpha
       Dist = find_distance(x,xNew,S);
       x=xNew;
       oldMisfit = newMisfit;
       accepted  = accepted +1;
    end
end
%RJ MCMC moves

function [pertNorm,xNew,priorViolate]=birth(k,x,S)
    xNew.z   = zeros(1,k+1) +NaN;%fills a new model with NaNs
    xNew.rhoh = zeros(1,k+1+1) +NaN;
    xNew.rhov = zeros(1,k+1+1) +NaN;
    pertNorm=0;
    %propose a new layer interface, at a non-existent interface location
    %thickness & location checks
    priorViolate=1;
    while(priorViolate)    
        zProp = S.zMin + rand*(S.zMax-S.zMin);
        if ismember (zProp,x.z(1:k),'legacy')
            return
        end
        %see which interface zProp should lie under
        [~,pos]=ismember(0,(x.z(1:k)>=zProp),'legacy');
    
        if pos==0 %iface above shallowest
            if x.z(pos+1)-zProp < S.hMin 
                continue
            elseif zProp-S.zMin < S.hMin
                continue
            end    
         elseif pos==k %iface below deepest
            if zProp-x.z(k) < S.hMin
                continue
            end
         else %iface somewhere in between existing ones   
            if zProp-x.z(pos) < S.hMin  || ...
               x.z(pos+1)-zProp < S.hMin
               continue
            end
        end
         %checks passed
         priorViolate=0;
    end    
       
    mu       = [x.rhoh(pos+1),x.rhov(pos+1)];
    normDraw = randn(1,2);
    if S.isotropic%just to make sure no priorviolation takes place
	normDraw(1) = normDraw(2);%and pertnorm is isotropic
	mu(1) = mu(2); 
    end
    newRho   = mu + normDraw*[S.rSD2 0;0 S.rSD2];
    if  newRho(1) < S.rhMin || newRho(1)>S.rhMax || ...
        newRho(2) < S.rvMin || newRho(2)>S.rvMax    
        priorViolate=1;
        return %exit from this function with priorViolate=1
    end
    %positions for copying old values into new model vector
    xNew.z(pos+1)=zProp;
    xNew.z(isnan(xNew.z))=x.z;
    if rand<0.5
        pos=pos+1;
    end 
    xNew.rhoh(pos+1)=newRho(1);
    xNew.rhoh(isnan(xNew.rhoh))=x.rhoh;
    xNew.rhov(pos+1)=newRho(2);
    xNew.rhov(isnan(xNew.rhov))=x.rhov;
    %now actually get the model pert norm sq
    pertNorm=sum((normDraw).^2);
end

function [xNew,priorViolate] = move (x,k,S)
    
    %pick an interface between 1 and current k to move
    l = randi(k);
    zProp = x.z(l) + S.MoveSd*randn;
    if zProp<S.zMin || zProp>S.zMax
        xNew=x;
        priorViolate=1;
        return; %outside bounds of z
    end
    
    priorViolate = 0;%checks passed!!
    %See where we are
    [~,pos]=ismember(0,(x.z(1:k)>=zProp),'legacy');
    if pos==l || pos == l-1
        %things are fine, nothing needs to be shifted
        xNew=x;
        xNew.z(l)=zProp;
        return;
    else %move the interface depth and properties
        x.z(l)  = [];%remove the interface
        k=k-1;
        if rand<0.5
            l=l+1;
        end
        %delete rho either above or below this interface
        %keep a copy of deleted value to move
        temp_rhoh    = x.rhoh(l); 
        x.rhoh(l) = [];
        temp_rhov    = x.rhov(l); 
        x.rhov(l) = [];
        %now birth the interface at zProp
        xNew.z   = zeros(1,k+1) +NaN;%fills a new model with NaNs
        xNew.rhoh = zeros(1,k+1+1) +NaN;
        xNew.rhov = zeros(1,k+1+1) +NaN;
        
        [~,pos]=ismember(0,(x.z(1:k)>=zProp),'legacy');
        %find where we are again just to be safe
        xNew.z(pos+1)=zProp;
        xNew.z(isnan(xNew.z))=x.z;
        
        if rand<0.5
            pos=pos+1;
        end 
        xNew.rhoh(pos+1)=temp_rhoh;
        xNew.rhoh(isnan(xNew.rhoh))=x.rhoh;
        xNew.rhov(pos+1)=temp_rhov;
        xNew.rhov(isnan(xNew.rhov))=x.rhov;

        k=k+1;%not that this matters, we're not returning it.
        
    end    
            
end

function [pertNorm,xNew] = death (x,k,S)
    xNew=x;
    %pick an interface to delete
    l = ceil(rand*(k));
    if S.isotropic%just to make sure H V perturbations are same
	x.rhoh(l)   = x.rhov(l);
	x.rhoh(l+1) = x.rhoh(l+1);
    end	
    %these are the perturbations
    pertNorm = sum(([x.rhoh(l)-x.rhoh(l+1),x.rhov(l)-x.rhov(l+1)]/S.rSD2).^2);
    xNew.z(l)  = [];
    if rand<0.5
        l=l+1;
    end    
    xNew.rhoh(l)= [];
    xNew.rhov(l)= [];
    end

function [xNew,priorViolate]=rhoUpdate(k,x,S,smallFlag)
    if strcmp(smallFlag,'small')
        S.rSD1 = S.rSD1/S.localFac;
    end    
    xNew=x;
    priorViolate = 0;
    muH       = [x.rhoh];
    muV       = [x.rhov];
    normDrawH = randn(1,k+1);
    normDrawV = randn(1,k+1);
    newRhoH   = muH + normDrawH*(S.rSD1*eye(k+1));
    newRhoV   = muV + normDrawV*(S.rSD1*eye(k+1));
    if S.isotropic%just to make sure no priorviolation takes place
	newRhoH = newRhoV;
    end
    if  any(newRhoH < S.rhMin) || any(newRhoH>S.rhMax) || ...
        any(newRhoV < S.rvMin) || any(newRhoV>S.rvMax)    
        priorViolate=1;
        return %exit from this function with priorViolate=1
    end
    xNew.rhoh=newRhoH;
    xNew.rhov=newRhoV;
end

%end RJMCMC moves

%Distance in a step calculators
function dist = find_distance(x1,x2,S)

    b1=binAvg(x1,S);
    b2=binAvg(x2,S);
    
    if S.isotropic
        b1=b1(1:end/2);
        b2=b2(1:end/2);
    end
    
    dist = sqrt(sum((b1-b2).^2));

end

function binnedAvgModel = binAvg(x,S)
    
    %arbitrary number of bins
    nBins=100;
    depth_int  = (S.zMax-S.z(end))/nBins;
    binCount = zeros(nBins,1);
    
    histcellH = zeros(nBins,1);
    histcellV = zeros(nBins,1);

    if x.z(end)<S.zMax
       x.z = [x.z,S.zMax];
    end

    binIndex=1;

    for jj=1:length(x.z)
        while x.z(jj) >= S.z(end)+ depth_int*binIndex
                binCount(binIndex) = binCount(binIndex) +1;
                %c = binCount(binIndex);
                histcellH(binIndex) = histcellH(binIndex)+x.rhoh(jj);
                histcellV(binIndex) = histcellV(binIndex)+x.rhov(jj);
                binIndex = binIndex +1;
        end
        if binIndex <= nBins
            binCount(binIndex) = binCount(binIndex) +1;
            %c = binCount(binIndex);
            histcellH(binIndex) = histcellH(binIndex)+x.rhoh(jj);
            histcellV(binIndex) = histcellV(binIndex)+x.rhov(jj);
        end    
    end
    binnedAvgModel = [histcellH./binCount;histcellV./binCount];
end

%end distance calculation functions

function [p,q] = determinPerm(n)
%returns index pairs p,q form strictly upper triangular matrix
    k = randperm(n/2*(n-1));
    q = floor(sqrt(8*(k-1) + 1)/2 + 3/2);
    p = k - (q-1).*(q-2)/2;
%[k;p;q]'
end

%RJ MCMC main step
function [x,k,oldMisfit,ConvStat,Dist] = RJ_MCMC_step (x,k,oldMisfit,ConvStat,S,B,count)
        del=[S.rhMax-S.rhMin];
        Dist = 0;
        if mod(count,2)% 1 for odd count ... that is every even step
            ConvStat.uc=ConvStat.uc+1;
            [xNew,priorViolate]=rhoUpdate(k,x,S,'large');%always large in PT
                if ~priorViolate
                    newMisfit = csem_misfit(xNew,S);
                    ConvStat.evalCount = ConvStat.evalCount +1;
                    logalpha = -(newMisfit(1) - oldMisfit(1))*B;
                else
                    logalpha=-Inf;
                end    
                if log(rand)<logalpha %accept model
                    %k remains the same
                    Dist = find_distance(x,xNew,S);
                    x=xNew;
                    oldMisfit = newMisfit;
                    ConvStat.uA  = ConvStat.uA +1;
                
                end
       else % ... every odd step   
            %roll the dice
            dart=rand();
            %CDF=[1/4,2/4,3/4,1];%birth, death, move intrf
            %CDF=[3/8,6/8,7/8,1];removing pesky nothing count
            CDF=[2.5/8,5/8,8/8];
            [~,pos]=ismember(0,(CDF>=dart),'legacy');
            pos=pos+1;%we know where it fell now
            priorViolate=0;
            switch pos
                case 1 %birth
                    ConvStat.bc=ConvStat.bc+1;
                    if k==S.kMax
                        priorViolate=1; %no birth allowed
                    end
                    if(~priorViolate)
                        [pertNorm,xNew,priorViolate]=birth(k,x,S);
                    end    
                    %calculate acceptance probability
                    if (~priorViolate)
                        newMisfit = csem_misfit(xNew,S);
                        ConvStat.evalCount = ConvStat.evalCount+1;
                        %just priorR times propR
                        logalpha  = 2*log(S.rSD2)+log(2*pi)-2*log(del)+(pertNorm/2);
                        if S.isotropic%then priorR times propR is sqrtd 
                            logalpha = 0.5*logalpha;
                        end
                        %insert likelihood to get alpha
                        logalpha  = logalpha -(newMisfit(1) - oldMisfit(1))*B; 
                    else
                        logalpha=-Inf;%prior has been violated so reject model
                    end    
                    if log(rand)<logalpha %accept model
                        k=k+1;
                        Dist = find_distance(x,xNew,S);
                        x=xNew;
                        oldMisfit = newMisfit;
                        ConvStat.bA = ConvStat.bA +1;	
                    end

                case 2 %death
                    ConvStat.dc=ConvStat.dc+1;
                    if (k==S.kMin)
                        priorViolate=1; %no death at kMin
                    end
                    if (~priorViolate)
                        [pertNorm,xNew] = death (x,k,S);
                        %compute acceptance
                        newMisfit = csem_misfit(xNew,S);
                        ConvStat.evalCount = ConvStat.evalCount +1;
                        %just priorR times propR
                        logalpha = -2*log(S.rSD2)-log(2*pi)+2*log(del)-(pertNorm/2);
                        if S.isotropic%then priorR times propR is sqrtd 
                            logalpha = 0.5*logalpha;
                        end
                        %insert likelihood to get alpha
                        logalpha  = logalpha -(newMisfit(1) - oldMisfit(1))*B;
                    else
                        logalpha=-Inf;
                    end    
                    if log(rand)<logalpha %accept model
                        k=k-1;
                        Dist = find_distance(x,xNew,S);
                        x=xNew;
                        oldMisfit = newMisfit;
                        ConvStat.dA = ConvStat.dA +1;
                    
                    end
                case 3%move
                    ConvStat.mc=ConvStat.mc+1;
                    [xNew,priorViolate] = move (x,k,S);
                    if ~priorViolate
                        newMisfit = csem_misfit(xNew,S);
                        ConvStat.evalCount = ConvStat.evalCount +1;
                        logalpha = -(newMisfit(1) - oldMisfit(1))*B;
                    else
                        logalpha=-Inf;
                    end    
                    if log(rand)<logalpha %accept model
                        %k remains the same
                        Dist = find_distance(x,xNew,S);
                        x=xNew;
                        oldMisfit = newMisfit;
                        ConvStat.mA = ConvStat.mA +1;
                    
                    end
            end
        end%end even/odd rjmcmc step
end
%end RJ MCMC step
