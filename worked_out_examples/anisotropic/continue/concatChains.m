function concatChains(fname,nChains,nContinues)

    s = []; k = []; en = [];  
    for ii = 1:nChains
        for jj = 1:nContinues
            load ([fname,'_',num2str(ii)]); 
            s = [s;s_ll];
            k = [k;k_ll];
            en = [en;en_ll];
        end
    end

end