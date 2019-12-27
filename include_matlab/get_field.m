function [Er,Eb,Hr,Hb,Ez,Hz] = get_field(S,x)
%S containes the info needed to compute the field
%x is the 1D model

ModelRho = [S.rho(1,:),10.^x.rhoh;S.rho(2,:),10.^x.rhov];            
    if S.RxAz ~= 0 || S.TxDip ~=0
        [Er,Eb,Hr,Hb,Ez,Hz] = get_CSEM1D_FD_FHT_aniso_hed_ved_mex(S.f,S.r,S.zRx,S.zTx,[S.z,x.z],1./ModelRho,'kk201Hankel.mat',1,S.RxAz,S.TxDip);
    else
        [Er,Eb,Hr,Hb,Ez,Hz] = get_CSEM1D_FD_FHT_aniso_hed_mex(S.f,S.r,S.zRx,S.zTx,[S.z,x.z],1./ModelRho,'kk201Hankel.mat',1);
    end
end    
