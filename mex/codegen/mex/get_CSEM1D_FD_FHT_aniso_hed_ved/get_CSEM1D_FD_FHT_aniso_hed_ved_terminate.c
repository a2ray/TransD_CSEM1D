/*
 * get_CSEM1D_FD_FHT_aniso_hed_ved_terminate.c
 *
 * Code generation for function 'get_CSEM1D_FD_FHT_aniso_hed_ved_terminate'
 *
 * C source code generated on: Sun Mar 16 16:41:31 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_terminate.h"

/* Function Definitions */
void get_CSEM1D_FD_FHT_aniso_hed_ved_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void get_CSEM1D_FD_FHT_aniso_hed_ved_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (get_CSEM1D_FD_FHT_aniso_hed_ved_terminate.c) */
