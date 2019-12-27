/*
 * get_CSEM1D_FD_FHT_aniso_hed_ved_mexutil.c
 *
 * Code generation for function 'get_CSEM1D_FD_FHT_aniso_hed_ved_mexutil'
 *
 * C source code generated on: Sun Mar 16 16:41:31 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_mexutil.h"

/* Function Definitions */
const mxArray *b_emlrt_marshallOut(emxArray_creal_T *u)
{
  const mxArray *y;
  const mxArray *m7;
  y = NULL;
  m7 = mxCreateNumericArray(2, u->size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m7, (void *)u->data, 8);
  emlrtAssign(&y, m7);
  return y;
}

const mxArray *b_message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m11;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m11, 1, &pArray,
    "message", TRUE, location);
}

void error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

/* End of code generation (get_CSEM1D_FD_FHT_aniso_hed_ved_mexutil.c) */
