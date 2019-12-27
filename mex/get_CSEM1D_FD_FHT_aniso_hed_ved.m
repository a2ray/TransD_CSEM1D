%#codegen
function [Er,Eb,Hr,Hb,Ez,Hz] = get_CSEM1D_FD_FHT_aniso_hed_ved(freqs,rRx,zRx,zTx,z,sig,filterName,...
                                       lUseLaggedConv,RxAzim,TxDip)
%
% Returns 1D CSEM fields due to an arbitrarily oriented electric dipole
%
% ***Bessel function integrals are evaluated using the digital filter
%    method (aka the Fast Hankel Transform) and lagged convolution***
% 
% In this code, I've only tested out the lagged convolution method which
% requires that all receivers be at the same depth
%
% Returns the inline horizontal electric field from a frequency domain
% horizontal electric dipole in an arbitrary N-layered medium. 
%
% Inputs:
%
% freqs  - Vector of frequencies (Hz)   
% rRx    - Vector of ranges from transmitter to receivers (m, positive).
% zRx    - Vector of depths of receivers (m), relative to where 0 is defined
%          in the model layer top-depths in z.
% zTx    - Depth of transmitter (m)
% z      - Layer top-depths (m). First value is ignored. Also 0 is anywhere 
%          you want it to be, this code makes no model assumptions other 
%          than that the values in z need to be increasing.
% sig    - Conductivity of each layer (s/m).  z,sig need to include all
%          layers of the model. **This code makes no assumptions about air 
%          or sea layers.  
% filterName     - Name of filter to use
%                 ('kk51Hankel.mat', 'kk101Hankel.mat', 'kk201Hankel.mat', , 'wa801Hankel.mat')
% lUseLaggedConv - Optional. Set to true if you want to use the lagged
%                  convolution + spline interpolation speed up when computing
%                  response for many receivers.
% RxAzim - Receiver azimuth from the dipole clockwise in degrees
%
% TxDip - Transmitter dip, +ve below horizontal in degrees
%
%
% Note that the code currently requires both the transmitter and receiver
% to be in the same layer. Also, if the transmitter and/or receiver are
% positioned on a boundary, they are assumed to reside in the upper layer.
% For example if they are on the seafloor, then the upper sea layer is
% used. For land EM modeling, you should nudge the transmitter and
% receiver a few cm into the earth (ie, zTx = 0.1 m), otherwise you'll be
% telling the code to inject a 1 amp source current into the air, which i'm
% told is quite difficult to do!
% 
% Outputs: All components of the CSEM field due to an arbitrarilty oriented electric dipole, 
% in cylindrical co-ordinates, as described in Lars Loseth's PhD thesis (2007) 
%
%
% Written by:
%
% Kerry Key and Anandaroop Ray
% Scripps Institution of Oceanography
%
% History:
%
% May 2011  - implemented
%--------------------------------------------------------------------------
coder.extrinsic ('beep','display','disp','spline','ppval')

    if lUseLaggedConv == 1 && length(rRx) == 1
        lUseLaggedConv = 0;
    end
    if length(unique(zRx)) > 1 && lUseLaggedConv==1
        beep;
        lUseLaggedConv = 0;
        display('Warning, not using lagged convolution since the receivers are not all at the same depth.')
    end    
%
% Load the digital filter weights:
%
    Filter.J0 = [   1.5020099e-03  -1.0381698e-02   3.6840860e-02  -8.9903380e-02   1.7082287e-01  -2.7115750e-01   3.7649328e-01  -4.7220779e-01   5.4778211e-01  -5.9823517e-01   6.2345792e-01  -6.2650437e-01   6.1197225e-01  -5.8470174e-01   5.4911056e-01  -5.0878862e-01   4.6652106e-01  -4.2426479e-01   3.8339539e-01  -3.4472345e-01   3.0876891e-01  -2.7570439e-01   2.4562331e-01  -2.1839207e-01   1.9393194e-01  -1.7198163e-01   1.5242270e-01  -1.3494946e-01   1.1946763e-01  -1.0565871e-01   9.3482356e-02  -8.2612525e-02   7.3077764e-02  -6.4536481e-02   5.7096311e-02  -5.0384860e-02   4.4599557e-02  -3.9316995e-02   3.4838545e-02  -3.0664946e-02   2.7221072e-02  -2.3901586e-02   2.1281567e-02  -1.8612485e-02   1.6655386e-02  -1.4472420e-02   1.3057748e-02  -1.1226286e-02   1.0266819e-02  -8.6738022e-03   8.1103369e-03  -6.6573628e-03   6.4551190e-03  -5.0524015e-03   5.1989014e-03  -3.7597430e-03   4.2640545e-03  -2.6994966e-03   3.5928001e-03  -1.8061291e-03   3.1436471e-03  -1.0244200e-03   2.8888298e-03  -3.0605071e-04   2.8125907e-03   3.9337862e-04   2.9102041e-03   1.1170885e-03   3.1876763e-03   1.9097806e-03   3.6621020e-03   2.8203784e-03   4.3626886e-03   3.9050025e-03   5.3324923e-03   5.2303399e-03   6.6309348e-03   6.8775541e-03   8.3371690e-03   8.9468565e-03   1.0554327e-02   1.1562766e-02   1.3414536e-02   1.4879837e-02   1.7084241e-02   1.9088093e-02   2.1768514e-02   2.4416121e-02   2.7711234e-02   3.1127164e-02   3.5184140e-02   3.9497913e-02   4.4449762e-02   4.9758433e-02   5.5667457e-02   6.1949790e-02   6.8682065e-02   7.5616744e-02   8.2584984e-02   8.9193635e-02   9.4874687e-02   9.8891682e-02   1.0004295e-01   9.7016844e-02   8.7789596e-02   7.0509768e-02   4.2778853e-02   3.5584533e-03  -4.7210453e-02  -1.0489788e-01  -1.6020950e-01  -1.9459782e-01  -1.8490775e-01  -1.0754165e-01   3.6037727e-02   1.9759013e-01   2.6132313e-01   1.1713997e-01  -1.8758779e-01  -3.0238115e-01   4.8163136e-02   3.6399530e-01  -1.4910233e-01  -2.6373490e-01   4.0362662e-01  -3.1409795e-01   1.8179369e-01  -9.0738718e-02   4.2946488e-02  -2.0586136e-02   1.0392667e-02  -5.6117848e-03   3.2402026e-03  -1.9858724e-03   1.2807317e-03  -8.6253792e-04   6.0296591e-04  -4.3548937e-04   3.2375892e-04  -2.4698212e-04   1.9279062e-04  -1.5357912e-04   1.2453788e-04  -1.0255126e-04   8.5558482e-05  -7.2170928e-05   6.1436863e-05  -5.2693349e-05   4.5471255e-05  -3.9433284e-05   3.4332971e-05  -2.9987212e-05   2.6257657e-05  -2.3037978e-05   2.0245071e-05  -1.7812926e-05   1.5688306e-05  -1.3827679e-05   1.2195005e-05  -1.0760111e-05   9.4974858e-06  -8.3853711e-06   7.4050613e-06  -6.5403683e-06   5.7772102e-06  -5.1032933e-06   4.5078641e-06  -3.9815112e-06   3.5159993e-06  -3.1041250e-06   2.7395854e-06  -2.4168588e-06   2.1310948e-06  -1.8780186e-06   1.6538488e-06  -1.4552319e-06   1.2791891e-06  -1.1230742e-06   9.8453631e-07  -8.6148574e-07   7.5206243e-07  -6.5460810e-07   5.6764452e-07  -4.8985885e-07   4.2009674e-07  -3.5736213e-07   3.0082216e-07  -2.4981510e-07   2.0385823e-07  -1.6265189e-07   1.2607417e-07  -9.4158418e-08   6.7043911e-08  -4.4891091e-08   2.7761326e-08  -1.5480404e-08   7.5327300e-09  -3.0524770e-09   9.5877856e-10  -2.0575286e-10   2.2414417e-11]';
    Filter.J1 = [   4.7827871e-10  -2.9784176e-09   9.7723833e-09  -2.2382341e-08   4.0446774e-08  -6.1734816e-08   8.3293912e-08  -1.0249454e-07   1.1780780e-07  -1.2870061e-07   1.3559243e-07  -1.3921011e-07   1.4065746e-07  -1.4074882e-07   1.4051721e-07  -1.4040747e-07   1.4127886e-07  -1.4315596e-07   1.4689283e-07  -1.5210917e-07   1.5989802e-07  -1.6940918e-07   1.8227089e-07  -1.9695857e-07   2.1603952e-07  -2.3691321e-07   2.6369843e-07  -2.9202021e-07   3.2852445e-07  -3.6589095e-07   4.1487501e-07  -4.6327137e-07   5.2852697e-07  -5.9034984e-07   6.7710212e-07  -7.5512943e-07   8.7062473e-07  -9.6788531e-07   1.1222658e-06  -1.2417228e-06   1.4493467e-06  -1.5932457e-06   1.8747046e-06  -2.0433320e-06   2.4285695e-06  -2.6179926e-06   3.1511730e-06  -3.3492412e-06   4.0964187e-06  -4.2758276e-06   5.3371198e-06  -5.4435424e-06   6.9725767e-06  -6.9045563e-06   9.1397025e-06  -8.7148373e-06   1.2029591e-05  -1.0927977e-05   1.5912527e-05  -1.3582560e-05   2.1176227e-05  -1.6678206e-05   2.8384979e-05  -2.0132088e-05   3.8372045e-05  -2.3702184e-05   5.2385309e-05  -2.6854374e-05   7.2318582e-05  -2.8535362e-05   1.0108123e-04  -2.6788478e-05   1.4319185e-04  -1.8108424e-05   2.0573562e-04   3.6361649e-06   2.9991265e-04   4.8993332e-05   4.4354734e-04   1.3589102e-04   6.6515824e-04   2.9451992e-04   1.0105554e-03   5.7533965e-04   1.5535077e-03   1.0621193e-03   2.4128970e-03   1.8929698e-03   3.7800178e-03   3.2937343e-03   5.9612180e-03   5.6295935e-03   9.4422527e-03   9.4810228e-03   1.4979159e-02   1.5745093e-02   2.3708966e-02   2.5740591e-02   3.7232783e-02   4.1225009e-02   5.7507103e-02   6.4044643e-02   8.6091797e-02   9.4717140e-02   1.2172497e-01   1.2853597e-01   1.5450777e-01   1.4755964e-01   1.5621399e-01   1.1147621e-01   7.7489831e-02  -2.7628267e-02  -1.0198730e-01  -2.2039890e-01  -2.1185763e-01  -1.6052415e-01   9.1649026e-02   2.3792824e-01   2.6075778e-01  -1.5662188e-01  -2.8932082e-01   1.3148519e-02   4.2691303e-01  -4.0005050e-01   1.1513789e-01   9.3748244e-02  -1.6037231e-01   1.5071858e-01  -1.2120369e-01   9.4110656e-02  -7.3742238e-02   5.9038568e-02  -4.8288118e-02   4.0197054e-02  -3.3919788e-02   2.8918247e-02  -2.4845272e-02   2.1470450e-02  -1.8635828e-02   1.6229579e-02  -1.4170085e-02   1.2396084e-02  -1.0860414e-02   9.5259444e-03  -8.3628577e-03   7.3468030e-03  -6.4576043e-03   5.6783440e-03  -4.9946949e-03   4.3944258e-03  -3.8670264e-03   3.4034180e-03  -2.9957261e-03   2.6370977e-03  -2.3215540e-03   2.0438677e-03  -1.7994617e-03   1.5843227e-03  -1.3949289e-03   1.2281870e-03  -1.0813787e-03   9.5211407e-04  -8.3829103e-04   7.3806018e-04  -6.4979407e-04   5.7206023e-04  -5.0359765e-04   4.4329604e-04  -3.9017773e-04   3.4338167e-04  -3.0214942e-04   2.6581281e-04  -2.3378310e-04   2.0554144e-04  -1.8063040e-04   1.5864668e-04  -1.3923451e-04   1.2208003e-04  -1.0690622e-04   9.3468580e-05  -8.1551329e-05   7.0964175e-05  -6.1539592e-05   5.3130609e-05  -4.5609106e-05   3.8864649e-05  -3.2803856e-05   2.7350297e-05  -2.2444816e-05   1.8046076e-05  -1.4130827e-05   1.0693107e-05  -7.7412053e-06   5.2910576e-06  -3.3552268e-06   1.9282956e-06  -9.7253713e-07   4.1100808e-07  -1.3553176e-07   3.0748588e-08  -3.5668195e-09]';
    Filter.base = [   4.1185887e-06   4.6623078e-06   5.2778064e-06   5.9745606e-06   6.7632974e-06   7.6561600e-06   8.6668947e-06   9.8110623e-06   1.1106278e-05   1.2572483e-05   1.4232251e-05   1.6111134e-05   1.8238059e-05   2.0645772e-05   2.3371342e-05   2.6456730e-05   2.9949438e-05   3.3903239e-05   3.8379005e-05   4.3445642e-05   4.9181157e-05   5.5673850e-05   6.3023682e-05   7.1343808e-05   8.0762323e-05   9.1424231e-05   1.0349368e-04   1.1715649e-04   1.3262301e-04   1.5013135e-04   1.6995107e-04   1.9238731e-04   2.1778548e-04   2.4653662e-04   2.7908337e-04   3.1592681e-04   3.5763416e-04   4.0484754e-04   4.5829384e-04   5.1879590e-04   5.8728520e-04   6.6481616e-04   7.5258245e-04   8.5193528e-04   9.6440425e-04   1.0917209e-03   1.2358454e-03   1.3989966e-03   1.5836864e-03   1.7927581e-03   2.0294306e-03   2.2973477e-03   2.6006340e-03   2.9439590e-03   3.3326083e-03   3.7725655e-03   4.2706040e-03   4.8343916e-03   5.4726080e-03   6.1950791e-03   7.0129278e-03   7.9387456e-03   8.9867860e-03   1.0173184e-02   1.1516206e-02   1.3036528e-02   1.4757557e-02   1.6705789e-02   1.8911218e-02   2.1407799e-02   2.4233968e-02   2.7433236e-02   3.1054859e-02   3.5154593e-02   3.9795557e-02   4.5049202e-02   5.0996412e-02   5.7728748e-02   6.5349859e-02   7.3977077e-02   8.3743226e-02   9.4798660e-02   1.0731359e-01   1.2148069e-01   1.3751806e-01   1.5567263e-01   1.7622389e-01   1.9948824e-01   2.2582385e-01   2.5563618e-01   2.8938422e-01   3.2758753e-01   3.7083428e-01   4.1979029e-01   4.7520927e-01   5.3794444e-01   6.0896164e-01   6.8935424e-01   7.8035994e-01   8.8337984e-01   1.0000000e+00   1.1320159e+00   1.2814599e+00   1.4506330e+00   1.6421396e+00   1.8589280e+00   2.1043360e+00   2.3821418e+00   2.6966223e+00   3.0526193e+00   3.4556135e+00   3.9118093e+00   4.4282302e+00   5.0128269e+00   5.6745996e+00   6.4237368e+00   7.2717720e+00   8.2317613e+00   9.3184844e+00   1.0548672e+01   1.1941264e+01   1.3517701e+01   1.5302252e+01   1.7322392e+01   1.9609223e+01   2.2197951e+01   2.5128433e+01   2.8445785e+01   3.2201080e+01   3.6452134e+01   4.1264394e+01   4.6711949e+01   5.2878668e+01   5.9859491e+01   6.7761894e+01   7.6707539e+01   8.6834152e+01   9.8297638e+01   1.1127449e+02   1.2596448e+02   1.4259380e+02   1.6141844e+02   1.8272824e+02   2.0685126e+02   2.3415891e+02   2.6507161e+02   3.0006526e+02   3.3967864e+02   3.8452161e+02   4.3528457e+02   4.9274904e+02   5.5779973e+02   6.3143815e+02   7.1479801e+02   8.0916269e+02   9.1598501e+02   1.0369096e+03   1.1737981e+03   1.3287581e+03   1.5041752e+03   1.7027502e+03   1.9275403e+03   2.1820062e+03   2.4700656e+03   2.7961535e+03   3.1652901e+03   3.5831587e+03   4.0561925e+03   4.5916743e+03   5.1978481e+03   5.8840466e+03   6.6608341e+03   7.5401699e+03   8.5355920e+03   9.6624257e+03   1.0938019e+04   1.2382011e+04   1.4016633e+04   1.5867051e+04   1.7961754e+04   2.0332991e+04   2.3017268e+04   2.6055913e+04   2.9495707e+04   3.3389608e+04   3.7797566e+04   4.2787445e+04   4.8436067e+04   5.4830397e+04   6.2068879e+04   7.0262956e+04   7.9538782e+04   9.0039163e+04   1.0192576e+05   1.1538158e+05   1.3061378e+05   1.4785687e+05   1.6737633e+05   1.8947266e+05   2.1448605e+05   2.4280162e+05];

%
% Initialize output E structure:
%
    Er    = 1i*zeros(length(rRx),length(freqs));
    Eb=Er;Hr=Er;Hb=Er;Ez=Er;Hz=Er;
% Get lagged convulition setup:
    %for codegen 
    lambdaR = 1;rR=1;
    rMax   = max(rRx);
    rMin   = min(rRx);
    lamMin = Filter.base(1)/rMax;
    lamMax = Filter.base(end)/rMin;
    filterSpacing = Filter.base(2) / Filter.base(1); % the filters are spaced by a multiplicative factor 
    nLambda       = ceil(log(lamMax/lamMin)/log(filterSpacing))+1;
    lambdaR       = exp(log(lamMin):log(filterSpacing):log(lamMin)+log(filterSpacing)*(nLambda-1));
    nExtra        = nLambda - length(Filter.base);
    rR            = rMax*exp(-[0:nExtra]*log(filterSpacing)); % ranges corresponding to lambdaR plus nExtra 1 lags in convolution:
    %define EH(k) here for lagged convolution
    
    %1st 2 rows are J0 and J1 from HED, next is J1 from VED
    ErK     = 1i*zeros(3*length(freqs),length(lambdaR));
    
    %1st 2 rows are J0 and J1 from HED
    EbK     = 1i*zeros(2*length(freqs),length(lambdaR));
    
    %1st 2 rows are J0 and J1 from HED
    HrK     = 1i*zeros(2*length(freqs),length(lambdaR));
    
    %1st 2 rows are J0 and J1 from HED, next is J1 from VED
    HbK     = 1i*zeros(3*length(freqs),length(lambdaR));
    
    %1st row is J0 from VED, next is J1 from HED
    EzK     = 1i*zeros(2*length(freqs),length(lambdaR));
    
    %1st row is J1 from HED
    HzK     = 1i*zeros(1*length(freqs),length(lambdaR));

    
% Now compute the CSEM responses using the FHT method:
       
        nF = length (freqs);
        
        lambda = lambdaR;
        zRxEval = zRx(1);  
        eyBase = 1i*zeros(length(rR),6*nF);
        % Get the kernels for all lambdas
        for iFreq = 1:nF 
            f = freqs(iFreq);
            for i = 1:length(lambda)   
                %EyKR(1:2,i) = getCSEM1DKernels_aniso_hed(lambda(i),f,zRxEval,zTx,z,sig);
                %all components of the EH field
                [Erk,Ebk,Hrk,Hbk,Ezk,Hzk] = getCSEM1DKernels_aniso_hed(lambda(i),f,zRxEval,zTx,z,sig);
                ErK((3*iFreq-2):3*iFreq,i) = Erk;
                EbK((2*iFreq-1):2*iFreq,i) = Ebk;
                HrK((2*iFreq-1):2*iFreq,i) = Hrk;
                HbK((3*iFreq-2):3*iFreq,i) = Hbk;
                EzK((2*iFreq-1):2*iFreq,i) = Ezk;
                HzK(iFreq,i)               = Hzk;
            end
        end % loop over frequencies
        %Rx Azimuths and Tx Dips
        cst = cosd(TxDip);%needed for all HED terms
        sit = sind(TxDip);%needed for all VED terms
        csb = cosd(RxAzim);%needs to be multiplied into all HED/VED terms inside the loop
        sib = sind(RxAzim);%can be multiplied into all non-VED terms outside the loop
        % Extract results for all rR ranges:
        for irR = 1:length(rR);
            iShift = [1:length(Filter.base)]+irR-1;
            %for Hz
            eyBase(irR,5*nF+1:6*nF) = (cst*HzK(1:nF,iShift)*Filter.J1)/rR(irR);
            %for Ez
            eyBase(irR,4*nF+1:5*nF)= ([sit*EzK(1:2:2*nF-1,iShift),cst*EzK(2:2:2*nF,iShift)]*[Filter.J0;csb*Filter.J1])/rR(irR);
            %for Hb
            eyBase(irR,3*nF+1:4*nF)= ([cst*HbK(1:3:3*nF-2,iShift),cst*HbK(2:3:3*nF-1,iShift),sit*HbK(3:3:3*nF,iShift)]*[csb*Filter.J0;csb*Filter.J1/rR(irR);Filter.J1])/rR(irR);
            %for Hr
            eyBase(irR,2*nF+1:3*nF)= (cst*[HrK(1:2:2*nF-1,iShift),HrK(2:2:2*nF,iShift)]*[Filter.J0;Filter.J1/rR(irR)])/rR(irR);
            %for Eb
            eyBase(irR,1*nF+1:2*nF)= (cst*[EbK(1:2:2*nF-1,iShift),EbK(2:2:2*nF,iShift)]*[Filter.J0;Filter.J1/rR(irR)])/rR(irR);
            %for Er
            eyBase(irR,1:nF)= ([cst*ErK(1:3:3*nF-2,iShift),cst*ErK(2:3:3*nF-1,iShift),sit*ErK(3:3:3*nF,iShift)]*[csb*Filter.J0;csb*Filter.J1/rR(irR);Filter.J1])/rR(irR);

        end

        % Compute spline coefficients:
         %PP=spline(log10(rR) ,eyBase');
         PPV=spline(log10(rR) ,eyBase',log10(rRx));
         EH = 1i*zeros(6*nF,length(rRx));
        % PPV = ppval(PP,log10(rRx));
         EH = PPV;
         
         Er = EH(1:nF,:)';
         Eb = sib*EH(  nF+1:2*nF,:)';
         Hr = sib*EH(2*nF+1:3*nF,:)';
         Hb = EH(3*nF+1:4*nF,:)';
         Ez = EH(4*nF+1:5*nF,:)';
         Hz = sib*EH(5*nF+1:6*nF,:)';
 
% and we're done
end

function [ErKernels,EbKernels,HrKernels,HbKernels,EzKernels,HzKernels]...
        = getCSEM1DKernels_aniso_hed(krho,f,zRx,zTx,z,sig)
%sig(1,:) contains the horizontal conductivities
%sig(2,:) contains the vertical conductivities
coder.extrinsic ('beep','disp');
%a codegen debug
ErKernels         = [1i; 1i; 1i];
EbKernels         = [1i; 1i];
EzKernels         = [1i;  1i];
HrKernels         = [1i; 1i];
HbKernels         = [1i; 1i; 1i];
HzKernels         = [1i];

% set the origin to zTx=0
    z       = z-zTx;
    zRx     = zRx-zTx;
    zTx     = 0;
% will need these variables
    mu      = 4*pi*10^-7;
    eps0    = 8.854e-12;%won't need
    %global omega   
    omega = 2*pi*f;
    epsc    = eps0 + 1i*sig/omega;

% prho=krho/omega
    pzI=sqrt(mu*epsc(1,:) - (krho/omega)^2);
    pzII=sqrt(mu*epsc(1,:) - epsc(1,:)./epsc(2,:)*(krho/omega)^2);
    %sanity check for wavenumber
    index=imag(pzI)<0;
    pzI(index)=-pzI(index);
    
    index=imag(pzII)<0;
    pzII(index)=-pzII(index);
    
% reflection coefficients (downward) for an interface: pzI for TE, pzII for TM   
    rTE=(pzI(1:end-1) - pzI(2:end))./(pzI(1:end-1) + pzI(2:end));
    rTM=(epsc(1,1:end-1).*pzII(2:end) - epsc(1,2:end).*pzII(1:end-1))./...
        (epsc(1,1:end-1).*pzII(2:end) + epsc(1,2:end).*pzII(1:end-1));
    
%         % Find the layer containing the transmitter:
    %for codegen, hardcoding
%    iTxLayer =2;iRxLayer =2;

            iTxLayer = find(z<zTx,1,'last');
            if isempty(iTxLayer)
                iTxLayer = length(z); % in the last layer
            end    
        iTxLayer =iTxLayer(1);
        % Find the layer containing the receiver:
        %
            iRxLayer = find(z<zRx,1,'last');
            if isempty(iRxLayer)
                iRxLayer = length(z); % in the last layer
            end
        iRxLayer =iRxLayer(1);
            if iTxLayer ~= iRxLayer
                beep
                disp('Error, transmitter and receiver need to be located in the same layer! Stopping')
                return
            end  

% kernels
% TE mode, pzI
    [Rs_u,Rs_d]       = stacks(pzI,iTxLayer,rTE,z,omega);
    [curlyRA,curlyRD,~,~] = get_curly_R(Rs_u,Rs_d,pzI(iTxLayer),zRx,z,iTxLayer,omega);
    gA_TE             = mu/pzI(iTxLayer)*curlyRA;
    gD_TE             = curlyRD;        
    %[Rs_uH,Rs_dH]     = stacks(pzI,iTxLayer,-rTE,z);
% TM mode, pzII
    [Rs_u,Rs_d]       = stacks(pzII,iTxLayer,rTM,z,omega);
    [curlyRA,curlyRD,curlyRB,curlyRC] = get_curly_R(Rs_u,Rs_d,pzII(iTxLayer),zRx,z,iTxLayer,omega);
    gA_TM             = pzII(iTxLayer)/epsc(1,iTxLayer)*curlyRA;
    gD_TM             = curlyRD;
    gB_TM             = curlyRB;
    gC_TM             = epsc(1,iTxLayer)/pzII(iTxLayer)*curlyRC;
    %[Rs_uH,Rs_dH]     = stacks(pzII,iTxLayer,-rTM,z);
% Kernels according to Loseth, without the bessel functions multiplied
        
    %Er
    J0                = -krho*gA_TM/4/pi;
    J1                = -(gA_TE - gA_TM)/4/pi;
    J1V               = krho^2*gB_TM*1i/(4*pi*omega*epsc(2,iTxLayer));
    ErKernels         = [J0; J1 ; J1V];
    
    %Eb
    J0                = krho*gA_TE/4/pi;
    J1                = -(gA_TE - gA_TM)/4/pi;
    EbKernels         = [J0; J1];
    
    %Hr
    J0                = -krho*gD_TE/4/pi;
    J1                = (gD_TE - gD_TM)/4/pi;
    HrKernels         = [J0; J1];
    
    %Hb
    J0                = -krho*gD_TM/4/pi;
    J1                = -(gD_TE - gD_TM)/4/pi;
    J1V               = krho^2*gC_TM*1i/(4*pi*omega*epsc(2,iTxLayer));
    HbKernels         = [J0; J1 ; J1V];
    
    %Ez
    J0V               = -krho^3*gC_TM*1/(4*pi*omega^2*epsc(2,iTxLayer)^2);
    J1                = krho^2*gD_TM*1i/(4*pi*omega*epsc(2,iTxLayer));
    EzKernels         = [J0V; J1];
    % needs multiplication by 1i/omega/epsc(2,iTxLayer) after hankel 
    % transform (done here)
    
    %Hz
    HzKernels         = krho^2*gA_TE*1i/(omega*mu*4*pi);
    % needs multiplication by 1i/omega/mu after hankel 
    % transform (done here)
    
% we're done now
end    

%subfunctions

% to recursively calculate up/down stack reflectivities in the source layer
% this can be used for either mode (TE/TM)  
function [Rupperstack,Rlowerstack]=stacks(pz,iTxLayer,r,z,omega)
    %global omega
% The last and first layer thicknesses are infinite
    
    dz          = diff(z);
    nz          = length(z);
    d           = zeros (1,nz);
    d(1)        = 1d60;
    d(2:nz-1)   = dz(2:end); 
    d(nz)       = 1d60;

% Capital R is for a stack   

% Starting from the bottom up, for Rs_down    
    Rlowerstack=0*1i;
    for k   = (nz-1):-1:iTxLayer
        Rs_d = (r(k) + Rlowerstack*exp(2i*omega*pz(k+1)*d(k+1)))/...
              (1 + r(k)*Rlowerstack*...
              exp(2i*omega*pz(k+1)*d(k+1)));
        Rlowerstack=Rs_d;
    end
    
    Rupperstack=0*1i;
% Starting from the top down for Rs_up
    for k   = 2:iTxLayer
        Rs_u = (-r(k-1) + Rupperstack*exp(2i*omega*pz(k-1)*d(k-1)))/...
              (1 - r(k-1)*Rupperstack*...
              exp(2i*omega*pz(k-1)*d(k-1)));
        Rupperstack=Rs_u;
    end
end

function [finRA,finRD,finRB,finRC] = get_curly_R(Rs_u,Rs_d,pz,zR,z,iTxLayer,omega)
    %global omega

d=z(iTxLayer+1)-z(iTxLayer);
    if (zR>=0)
        finRA = (1 + exp(-1i*omega*pz*2*z(iTxLayer))*Rs_u)*...
                (exp(1i*omega*pz*zR) + exp( 1i*omega*pz*(2*z(iTxLayer+1) - zR))*Rs_d)/...
                (1 - Rs_u*Rs_d*exp(2i*omega*pz*(d)));
        
        finRD = (1 - exp(-1i*omega*pz*2*z(iTxLayer))*(-Rs_u))*...
                    (exp(1i*omega*pz*zR) + exp( 1i*omega*pz*(2*z(iTxLayer+1) - zR))*(-Rs_d))/...
                    (1 - Rs_u*Rs_d*exp(2i*omega*pz*(d)));
        
        finRB = (1 - exp(-1i*omega*pz*2*z(iTxLayer))*Rs_u)*...
                (exp(1i*omega*pz*zR) + exp( 1i*omega*pz*(2*z(iTxLayer+1) - zR))*Rs_d)/...
                (1 - Rs_u*Rs_d*exp(2i*omega*pz*(d)));
            
        finRC = (1 + exp(-1i*omega*pz*2*z(iTxLayer))*(-Rs_u))*...
                    (exp(1i*omega*pz*zR) + exp( 1i*omega*pz*(2*z(iTxLayer+1) - zR))*(-Rs_d))/...
                    (1 - Rs_u*Rs_d*exp(2i*omega*pz*(d)));            
    else
        finRA = (1 + exp(1i*omega*pz*2*z(iTxLayer+1))*Rs_d)*...
                (exp(-1i*omega*pz*zR) + exp(-1i*omega*pz*(2*z(iTxLayer) - zR))*Rs_u)/...
                (1 - Rs_u*Rs_d*exp(2i*omega*pz*(d)));
        
        finRD = (-1 + exp(1i*omega*pz*2*z(iTxLayer+1))*(-Rs_d))*...
                (exp(-1i*omega*pz*zR) + exp(-1i*omega*pz*(2*z(iTxLayer) - zR))*(-Rs_u))/...
                (1 - Rs_u*Rs_d*exp(2i*omega*pz*(d)));
        
        finRB = (-1 + exp(1i*omega*pz*2*z(iTxLayer+1))*Rs_d)*...
                (exp(-1i*omega*pz*zR) + exp(-1i*omega*pz*(2*z(iTxLayer) - zR))*Rs_u)/...
                (1 - Rs_u*Rs_d*exp(2i*omega*pz*(d)));
            
        finRC = (1 + exp(1i*omega*pz*2*z(iTxLayer+1))*(-Rs_d))*...
                    (exp(-1i*omega*pz*zR) + exp(-1i*omega*pz*(2*z(iTxLayer) - zR))*(-Rs_u))/...
                    (1 - Rs_u*Rs_d*exp(2i*omega*pz*(d)));        
    end
    

end