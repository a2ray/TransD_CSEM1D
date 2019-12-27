function plot_rjmcmc_HVk_processed(pdf_matrixH,pdf_matrixV,intfcCount,meanModelH,meanModelV,medianModelH,medianModelV,kTracker,S,truth,isotropic,normalize)

%stuff needed for plotting processed histograms in the correct ranges
zFixed = S.z;
nBins=size(pdf_matrixH,1);%depth bins
bits = size(pdf_matrixH,2);%rho bins 
edges = [S.rhMin:(S.rhMax-S.rhMin)/(bits):S.rhMax];
rho_int = edges(2)-edges(1);
depth_int  = (S.zMax-zFixed(end))/nBins;

%whether to normalize at each depth
if strcmp(normalize,'normalize')
    for ii = 1:nBins
        pdf_matrixH(ii,:) = pdf_matrixH(ii,:)/max(pdf_matrixH(ii,:));
        pdf_matrixV(ii,:) = pdf_matrixV(ii,:)/max(pdf_matrixV(ii,:));
    end
end    

for i=1:nBins
    
    %find 5 and 95% confidence intervals
    [~,confidH(i,1)]=ismember (0,cumsum(pdf_matrixH(i,:))/sum(pdf_matrixH(i,:))>= 0.05,'legacy');
    [~,confidH(i,2)]=ismember (0,cumsum(pdf_matrixH(i,:))/sum(pdf_matrixH(i,:))>= 0.95,'legacy');
    [~,confidV(i,1)]=ismember (0,cumsum(pdf_matrixV(i,:))/sum(pdf_matrixV(i,:))>= 0.05,'legacy');
    [~,confidV(i,2)]=ismember (0,cumsum(pdf_matrixV(i,:))/sum(pdf_matrixV(i,:))>= 0.95,'legacy');
    %find median model
%      medianModelH(i) = median(histcellH{i});
%      medianModelV(i) = median(histcellV{i});
      [~,maxH(i)]     = max(pdf_matrixH(i,:));
      [~,maxV(i)]     = max(pdf_matrixV(i,:));
%     meanModelH(i)   = mean(histcellH{i});
%     meanModelV(i)   = mean(histcellV{i});
%     modeModelH(i)   = mode(histcellH{i});
%     modeModelV(i)   = mode(histcellV{i});
    
end

nPlotCols = 2; nextPlotCol = 1;
confidH=confidH+1;confidV=confidV+1;%an ismember thing
if (strcmp(isotropic,'anisotropic'))
%     pdf_matrixV = pdf_matrixH;
%     confidV     = confidH;
    nPlotCols = 3;
end    
%plot grids
figure

subplot (1,nPlotCols,nextPlotCol)
pcolor(edges,zFixed(end)+(0:nBins)*depth_int,[pdf_matrixH,pdf_matrixH(:,end);pdf_matrixH(end,:),pdf_matrixH(end,end)])
shading flat
set (gca,'yticklabel',[])
set (gca,'ydir','reverse','layer','top')
title ('Horizontal resistivity','fontsize',11)
xlabel ('Log_{10} (ohm-m)','fontsize',11)
ylabel ('Depth (m)','fontsize',11);
hold on
  plot(edges(1)+confidH(:,1)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'-k','linewidth',2)
  plot(edges(1)+confidH(:,1)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'--y','linewidth',1)
  plot(edges(1)+confidH(:,2)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'-k','linewidth',2)
  plot(edges(1)+confidH(:,2)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'--y','linewidth',1)
  %plot(edges(1)+rho_int/2+(maxH-1)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'--c')
%  plot(medianModelH,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'--r')
% %  plot(modeModelH,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'.-r')
%   plot(meanModelH,  zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'-.k')
plot_model (S,truth,'H')
%caxis(h);
depthlim=ylim;
h1=colorbar;
nextPlotCol = nextPlotCol + 1;

if (strcmp(isotropic,'anisotropic'))
    subplot (1,nPlotCols,nextPlotCol)
    pcolor(edges,zFixed(end)+(0:nBins)*depth_int,[pdf_matrixV,pdf_matrixV(:,end);pdf_matrixV(end,:),pdf_matrixV(end,end)])
    shading flat
    set (gca,'yticklabel',[])
    set (gca,'ydir','reverse','layer','top')
    title ('Vertical resistivity','fontsize',11)
    xlabel ('Log_{10} (ohm-m)','fontsize',11)
    ylabel ('Depth (m)','fontsize',11);
    hold on
    plot(edges(1)+confidV(:,1)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'-k','linewidth',2)
    plot(edges(1)+confidV(:,1)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'--y','linewidth',1)
    plot(edges(1)+confidV(:,2)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'-k','linewidth',2)
    plot(edges(1)+confidV(:,2)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'--y','linewidth',1)
    %plot(edges(1)+rho_int/2+(maxV-1)*rho_int,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'--c')
    %  plot(medianModelV,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'--r')
    % %  plot(modeModelV,zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'.-r')
    %   plot(meanModelV,  zFixed(end)+depth_int/2+(0:nBins-1)*depth_int,'-.k')
    plot_model (S,truth,'V')
    %caxis(h);
    ylim(depthlim);

    nextPlotCol = nextPlotCol+1;
end
    
set(h1, 'Position', [.02 .11 .01 .8150])
%set(get(h1,'xlabel'),'String', 'PDF','fontsize',11,'interpreter','tex');

%find the median and mean models
medianModel.rhov=medianModelV';
medianModel.rhoh=medianModelH';
zz=zFixed(end)+depth_int/2+(0:nBins-1)*depth_int;
medianModel.z=zz(2:end) - depth_int/2;

meanModel.rhov=meanModelV';
meanModel.rhoh=meanModelH';
meanModel.z=zz(2:end) - depth_int/2;

%freezeColors
%histogram of interfaces
nBins=size(intfcCount,1);%this time with S.zMin as there are no interfaces prior to this
depth_int  = (S.zMax-S.zMin)/nBins;
subplot (1,nPlotCols,nextPlotCol)
kBins=[S.zMin+(0:nBins)*depth_int];
colormap ('jet');
area([kBins(1):depth_int:kBins(end-1)]+0.5*(depth_int),intfcCount,'facecolor',[0.5 0.5 0.5]);
view (90,90)
xlim(depthlim);
ylabel ({'Interface probability'},'fontsize',11);
yl=[0 4*(S.zMax-S.zMin)^-1]; ylim(yl);
%set(gca,'Ytick',[0:max(yl)/2:max(yl)],'YTickLabel',sprintf('%0.4f|',[0:max(yl)/2:max(yl)]))
set(gca,'ytick',[max(ylim)/4 max(ylim)*3/4],'yticklabel',sprintf('%0.5f|',[max(ylim)/4 max(ylim)*3/4]));
hold all
plot (kBins,(S.zMax-S.zMin)^-1*ones(length(kBins),1),'--k')
set(gca, 'fontsize',11)
title ('Interface depth')

set(gcf, 'Units','inches', 'Position',[0 0 12 6])
%colormap(flipud(colormap ('bone')))

%plot hist of number of layers
figure
[a,b]=hist(kTracker,S.kMin:S.kMax);
bh=bar(b,a/sum(a)/(b(2)-b(1)),1);
set (bh,'facecolor',[0.5 0.5 0.5],'edgecolor','none')
hold on 
plot ([0 max(b)],(S.kMax-S.kMin+1)^-1*ones(1,2),'--k')
xlabel ('Number of interfaces','fontsize',11)
xlim([S.kMin,S.kMax])
ylim([0,10*(S.kMax-S.kMin+1)^-1])
set(gca, 'fontsize',11)
ylabel ('Interface no. probability','fontsize',11)
set(gcf, 'Units','inches', 'Position',[0 0 4 3])
end
