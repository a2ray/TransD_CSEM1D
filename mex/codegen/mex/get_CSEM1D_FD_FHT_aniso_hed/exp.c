/*
 * exp.c
 *
 * Code generation for function 'exp'
 *
 * C source code generated on: Sun Mar 16 16:41:10 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed.h"
#include "exp.h"

/* Function Definitions */
void b_exp(emxArray_real_T *x)
{
  int32_T i20;
  int32_T k;
  i20 = x->size[1];
  for (k = 0; k < i20; k++) {
    x->data[(int32_T)(1.0 + (real_T)k) - 1] = muDoubleScalarExp(x->data[(int32_T)
      (1.0 + (real_T)k) - 1]);
  }
}

/* End of code generation (exp.c) */
