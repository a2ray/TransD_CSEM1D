%to generate 1D CSEM fields
clear;
close all
clc
z   = [-1d6    0        1000    2000    2100 ];   % Layer top depths (the first value is not used)
rho = [1d13    0.3      1       100     1    ];   % Layer resistivities  (ohm-m)
mu=4*pi*1e-7;


f   = [.1 .3 .7];                       % Frequency (Hz)
zTx = 975;                     % Depth of transmitter (m)
r   = linspace(100,20000,50);  % Ranges to receivers   (m) 
zRx = 1000*ones(size(r));      % Depth of receivers   (m) 
% Note that the receiver depth needs to be in same model layer as transmitter.   
RxAzim=40; TxDip=40;
% Convert resistivity to conductivity:
%
sig = [1./rho;1./rho];
filterName = 'kk201Hankel.mat';
lUseLaggedConv = 1;
coder_f = coder.typeof(f,[1 10],[0 1]);%vector of 10 frequencies max
coder_r = coder.typeof(r,[1 200],[0 1]);%200 receivers max
coder_zRx = coder.typeof(zRx,[1 200],[0 1]);
%coder_zTx = coder.typeof(zTx,[1 1],[0 0]);%1 transmitter depth
coder_z = coder.typeof(z,[1 200],[0 1]);%80 interfaces max
coder_sig = coder.typeof(sig,[2 200],[0 1]);%200 horiz and vert resists



mexcfg = coder.config('mex');
mexcfg.DynamicMemoryAllocation = 'AllVariableSizeArrays';

codegen -config mexcfg -o get_CSEM1D_FD_FHT_aniso_hed_ved_mex -report get_CSEM1D_FD_FHT_aniso_hed_ved.m ...
    -args {coder_f,coder_r,coder_zRx,zTx,coder_z,coder_sig,filterName,lUseLaggedConv,RxAzim,TxDip}