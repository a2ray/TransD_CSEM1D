/*
 * get_CSEM1D_FD_FHT_aniso_hed_ved_initialize.c
 *
 * Code generation for function 'get_CSEM1D_FD_FHT_aniso_hed_ved_initialize'
 *
 * C source code generated on: Sun Mar 16 16:41:31 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_initialize.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_data.h"

/* Function Definitions */
void get_CSEM1D_FD_FHT_aniso_hed_ved_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (get_CSEM1D_FD_FHT_aniso_hed_ved_initialize.c) */
