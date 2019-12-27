/*
 * log10.c
 *
 * Code generation for function 'log10'
 *
 * C source code generated on: Sun Mar 16 16:41:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "log10.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_data.h"

/* Variable Definitions */
static emlrtRSInfo md_emlrtRSI = { 14, "log10",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elfun/log10.m" };

/* Function Declarations */
static void b_eml_error(void);

/* Function Definitions */
static void b_eml_error(void)
{
  static char_T cv19[5][1] = { { 'l' }, { 'o' }, { 'g' }, { '1' }, { '0' } };

  emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &tb_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 5, cv19);
  emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
}

void b_log10(emxArray_real_T *x)
{
  int32_T k;
  int32_T i24;
  for (k = 0; k < x->size[1]; k++) {
    if (x->data[(int32_T)(1.0 + (real_T)k) - 1] < 0.0) {
      emlrtPushRtStackR2012b(&md_emlrtRSI, emlrtRootTLSGlobal);
      b_eml_error();
      emlrtPopRtStackR2012b(&md_emlrtRSI, emlrtRootTLSGlobal);
    }
  }

  i24 = x->size[1];
  for (k = 0; k < i24; k++) {
    x->data[(int32_T)(1.0 + (real_T)k) - 1] = muDoubleScalarLog10(x->data
      [(int32_T)(1.0 + (real_T)k) - 1]);
  }
}

/* End of code generation (log10.c) */
