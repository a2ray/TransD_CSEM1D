/*
 * get_CSEM1D_FD_FHT_aniso_hed_ved_mex.c
 *
 * Code generation for function 'get_CSEM1D_FD_FHT_aniso_hed_ved'
 *
 * C source code generated on: Sun Mar 16 16:41:32 2014
 *
 */

/* Include files */
#include "mex.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_api.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_initialize.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_terminate.h"

/* Function Declarations */
static void get_CSEM1D_FD_FHT_aniso_hed_ved_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "get_CSEM1D_FD_FHT_aniso_hed_ved", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void get_CSEM1D_FD_FHT_aniso_hed_ved_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *outputs[6];
  mxArray *inputs[10];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  /* Module initialization. */
  get_CSEM1D_FD_FHT_aniso_hed_ved_initialize(&emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 10, mxCHAR_CLASS, 31, "get_CSEM1D_FD_FHT_aniso_hed_ved");
  } else if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 31, "get_CSEM1D_FD_FHT_aniso_hed_ved");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  get_CSEM1D_FD_FHT_aniso_hed_ved_api((const mxArray**)inputs, (const mxArray**)outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  get_CSEM1D_FD_FHT_aniso_hed_ved_terminate();
}

void get_CSEM1D_FD_FHT_aniso_hed_ved_atexit_wrapper(void)
{
   get_CSEM1D_FD_FHT_aniso_hed_ved_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(get_CSEM1D_FD_FHT_aniso_hed_ved_atexit_wrapper);
  /* Dispatch the entry-point. */
  get_CSEM1D_FD_FHT_aniso_hed_ved_mexFunction(nlhs, plhs, nrhs, prhs);
}

mxArray *emlrtMexFcnProperties(void)
{
  const char *mexProperties[] = {
    "Version",
    "ResolvedFunctions",
    "EntryPoints"};
  const char *epProperties[] = {
    "Name",
    "NumberOfInputs",
    "NumberOfOutputs",
    "ConstantInputs"};
  mxArray *xResult = mxCreateStructMatrix(1,1,3,mexProperties);
  mxArray *xEntryPoints = mxCreateStructMatrix(1,1,4,epProperties);
  mxArray *xInputs = NULL;
  xInputs = mxCreateLogicalMatrix(1, 10);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("get_CSEM1D_FD_FHT_aniso_hed_ved"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(10));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(6));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.1.0.604 (R2013a)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);

  return xResult;
}
/* End of code generation (get_CSEM1D_FD_FHT_aniso_hed_ved_mex.c) */
