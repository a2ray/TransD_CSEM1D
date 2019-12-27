/*
 * log.c
 *
 * Code generation for function 'log'
 *
 * C source code generated on: Sun Mar 16 16:41:10 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed.h"
#include "log.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_data.h"

/* Variable Definitions */
static emlrtRSInfo wb_emlrtRSI = { 14, "log",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elfun/log.m" };

/* Function Declarations */
static void eml_error(void);

/* Function Definitions */
static void eml_error(void)
{
  static char_T cv15[3][1] = { { 'l' }, { 'o' }, { 'g' } };

  emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &kb_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 3, cv15);
  emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
}

void b_log(real_T *x)
{
  if (*x < 0.0) {
    emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
    eml_error();
    emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  }

  *x = muDoubleScalarLog(*x);
}

/* End of code generation (log.c) */
