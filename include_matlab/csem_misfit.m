function misfit = csem_misfit (x,S)
%returns chi2/2 and RMS misfit for the model x, data in S

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
