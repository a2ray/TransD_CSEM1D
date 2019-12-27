MATLAB="/Applications/MATLAB_R2013a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/anray/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for get_CSEM1D_FD_FHT_aniso_hed_ved" > get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "CC=$CC" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "CFLAGS=$CFLAGS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "CLIBS=$CLIBS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "CXX=$CXX" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "CXXLIBS=$CXXLIBS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "LD=$LD" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "LDFLAGS=$LDFLAGS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "Arch=$Arch" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo OMPFLAGS= >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo OMPLINKFLAGS= >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "EMC_COMPILER=" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
echo "EMC_CONFIG=optim" >> get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mki
"/Applications/MATLAB_R2013a.app/bin/maci64/gmake" -B -f get_CSEM1D_FD_FHT_aniso_hed_ved_mex.mk
