/*
 * exp.c
 *
 * Code generation for function 'exp'
 *
 * C source code generated on: Sun Mar 16 16:41:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "exp.h"

/* Function Definitions */
void b_exp(emxArray_real_T *x)
{
  int32_T i22;
  int32_T k;
  i22 = x->size[1];
  for (k = 0; k < i22; k++) {
    x->data[(int32_T)(1.0 + (real_T)k) - 1] = muDoubleScalarExp(x->data[(int32_T)
      (1.0 + (real_T)k) - 1]);
  }
}

void c_exp(creal_T *x)
{
  real_T r;
  real_T x_im;
  real_T b_x_im;
  r = muDoubleScalarExp(x->re / 2.0);
  x_im = x->im;
  b_x_im = x->im;
  x->re = r * (r * muDoubleScalarCos(x_im));
  x->im = r * (r * muDoubleScalarSin(b_x_im));
}

/* End of code generation (exp.c) */
