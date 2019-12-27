function plot_model_field(S,s)
    figure
    set(gcf, 'Units','inches', 'Position',[0 0 12 5])
    
    nPlotCols = 4;
    if (S.isotropic)
        nPlotCols = 3;
    end    
    
    %subplot handles
    h = ones(1,nPlotCols);
    for jj=1:nPlotCols
        h(jj) = subplot(1,nPlotCols,jj);
    end    
    
    for ii=1:length(s)
        x = s{ii};
        %plot model x
            subplot(h(1))
            plot_model(S,x,'H')
            set(gca,'ydir','reverse','fontsize',12)
            hold all
            box on
        if (~S.isotropic)
            subplot(h(2))
            plot_model(S,x,'V')
            set(gca,'ydir','reverse','fontsize',12)
            hold all
            box on
        end    
        
        %tic
        [Er,Eb,Hr,Hb,Ez,Hz] = get_field(S,x);
        %toc
        %plot the amp response
        subplot (h(nPlotCols-1));
        plot (S.r/1e3,abs((Er)),'-','markersize',5)
        for ii=1:length(S.f)
            textlabel{ii} = strcat(num2str(S.f(ii)),' Hz');
        end    
        legend (textlabel);
        legend('boxoff')
        set (gca,'yscale','log')
        hold all

        %plot the phase responses
        unwrappedPhase = 180/pi*unwrap(angle(Er));
        %these are hacks
%         if unwrappedPhase(1,1) >0
%             unwrappedPhase(:,1) = unwrappedPhase(:,1) - 360; 
%         end    
        subplot (h(nPlotCols));
        plot (S.r/1e3,unwrappedPhase,'-','markersize',5)
        hold all
    end
    
    if isfield(S,'data')
    %get the error bars
        
        if size(S.sd,2) == 1
            %should there be a square root of 2 here?? NOOO later for plot
            S.sd = S.sd*abs(S.data);
        end
        S.sd(isnan(S.data))=NaN;
        %phase errors
         err = S.sd(:,1:length(S.f));
         If = imag(S.data(:,1:length(S.f)));
         Rf = real(S.data(:,1:length(S.f)));
         dPhi_Er = err./sqrt(Rf.^2+If.^2);

        %plot amplitude errors - 2 sigma
        subplot (h(nPlotCols - 1));
        errorbar(S.r'*ones(1,length(S.f))/1e3,abs(S.data(:,1:length(S.f))),2*sqrt(2)*S.sd(:,1:length(S.f)),'.','color','k');
        textlabel = cell(length(S.f),1);
        set (gca,'yscale','log','fontsize',12)
        title ('E_r Amp','fontsize',12)
        ylabel ('V/A-m^2','fontsize',12)
        xlabel ('Range in Km')
        hold all
        
        %plot phase errors - 2 sigma
        unwrapppedDataPhase = 180/pi*unwrap(angle(S.data(:,1:length(S.f))));
%      hack
%      unwrapppedDataPhase(:,1) = unwrapppedDataPhase(:,1)-360;
        subplot (h(nPlotCols));
        errorbar (S.r'*ones(1,length(S.f))/1e3,unwrapppedDataPhase,2*180/pi*dPhi_Er(:,1:length(S.f)),'.','color','k')
        legend('boxoff')
        title ('E_r Phase','fontsize',12)
        ylabel ('Degrees','fontsize',12)
        xlabel ('Range in Km','fontsize',12)
        set (gca,'fontsize',12)
        hold all

    end    
    
    subplot (h(1))
    set (gca,'xlim',[S.rhMin S.rhMax],'ylim',[0 S.zMax])
    g = get(gca,'ytick');
    set (gca,'yticklabel',sprintf('%2.1f|',g/1000))
    xlabel ('Log_{10}(ohm-m)')
    ylabel ('Depth in km');
    title ('Model')
    if (~S.isotropic)
        subplot (h(2))
        set (gca,'xlim',[S.rhMin S.rhMax],'ylim',[0 S.zMax])
        title ('Vertical Rho')
        xlabel ('Log_{10}(ohm-m)')
    end    
    
    subplot (h(nPlotCols-1))
    set (gca,'xlim',[min(S.r)-500 max(S.r)+500]/1e3)
    subplot(h(nPlotCols))
    set (gca,'xlim',[min(S.r)-500 max(S.r)+500]/1e3)
            
%      for ii=1:nPlotCols
%           
%          subPos = get(h(ii), 'pos');
%          subPos(4)=subPos(4)- 0.2;
%          %subPos(3)=subPos(3)- 0.03;
%          subPos(2)=subPos(2)+0.03;
%          %subPos(1)=subPos(1)-0.02;
%          set(h(ii),'pos',subPos)
%          subplot (h(ii))
%             
%          
%      end
    
end


