%to generate 1D CSEM fields
clear;
close all
clc
z   = [-1d6    0        1000    2000    2100 ];   % Layer top depths (the first value is not used)
rho = [1d13    0.3      1       100     1    ];   % Layer resistivities  (ohm-m)
mu=4*pi*1e-7;


f   = [.1 .3 .7];                       % Frequency (Hz)
zTx = 975;                     % Depth of transmitter (m)
r   = linspace(100,20000,150);  % Ranges to receivers   (m) 
zRx = 1000*ones(size(r));      % Depth of receivers   (m) 
% Note that the receiver depth needs to be in same model layer as transmitter.   

% Convert resistivity to conductivity:
%
sig = 1./rho;
% the first row contains the horizontal conductivities, the second row the
% vertical conductivities

%normal call
tic
[Er,Eb,Hr,Hb,Ez,Hz] = get_CSEM1D_FD_FHT_aniso_hed(f,r,zRx,zTx,z,[sig;sig],'kk201Hankel.mat',1);
toc

%MEX call
tic
[Er,Eb,Hr,Hb,Ez,Hz] = get_CSEM1D_FD_FHT_aniso_hed_mex(f,r,zRx,zTx,z,[sig;sig],'kk201Hankel.mat',1);
toc

%first the inline fields
figure
subplot (3,2,1)
semilogy(r/1e3,abs(Ez),'.r')
title ('Inline Ez amp')
subplot (3,2,2)
plot (r/1e3,180/pi*unwrap(angle(Ez)),'.r');
hold all
title ('Inline Ez phase')

subplot (3,2,3)
semilogy(r/1e3,abs(Er),'.r')
title ('Inline Er amp')
subplot (3,2,4)
plot (r/1e3,180/pi*unwrap(angle(Er)),'.r');
title('Inline Er phase')

subplot (3,2,5)
semilogy(r/1e3,abs(Hb*mu),'.r')
title ('Inline B azim amp')
xlabel ('Range in km')
subplot (3,2,6)
plot (r/1e3,180/pi*unwrap(angle(Hb)),'.r');
title ('Inline B azim phase')
xlabel ('Range in km')

%next the broadside fields
figure
subplot (3,2,1)
semilogy(r/1e3,abs(mu*Hz),'.r')
title ('Broadside Bz amp')
subplot (3,2,2)
plot (r/1e3,180/pi*unwrap(angle(Hz)),'.r');
title ('Broadside Bz phase')

subplot (3,2,3)
semilogy(r/1e3,abs(mu*Hr),'.r')
title ('Broadside Br amp')
subplot (3,2,4)
plot (r/1e3,180/pi*unwrap(angle(Hr)),'.r');
title('Broadside Br phase')

subplot (3,2,5)
semilogy(r/1e3,abs(Eb),'.r')
hold all
title ('Broadside E azim amp')
xlabel ('Range in km')
subplot (3,2,6)
plot (r/1e3,180/pi*unwrap(angle(Eb)),'.r');
title ('Broadside E azim phase')
xlabel ('Range in km')