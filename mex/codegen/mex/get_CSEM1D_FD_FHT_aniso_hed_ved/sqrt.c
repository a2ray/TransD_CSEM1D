/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 * C source code generated on: Sun Mar 16 16:41:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "sqrt.h"

/* Function Definitions */
void b_sqrt(emxArray_creal_T *x)
{
  int32_T i23;
  int32_T k;
  real_T absxi;
  real_T absxr;
  i23 = x->size[1];
  for (k = 0; k < i23; k++) {
    if (x->data[(int32_T)(1.0 + (real_T)k) - 1].im == 0.0) {
      if (x->data[(int32_T)(1.0 + (real_T)k) - 1].re < 0.0) {
        absxi = 0.0;
        absxr = muDoubleScalarSqrt(muDoubleScalarAbs(x->data[(int32_T)(1.0 +
          (real_T)k) - 1].re));
      } else {
        absxi = muDoubleScalarSqrt(x->data[(int32_T)(1.0 + (real_T)k) - 1].re);
        absxr = 0.0;
      }
    } else if (x->data[(int32_T)(1.0 + (real_T)k) - 1].re == 0.0) {
      if (x->data[(int32_T)(1.0 + (real_T)k) - 1].im < 0.0) {
        absxi = muDoubleScalarSqrt(-x->data[(int32_T)(1.0 + (real_T)k) - 1].im /
          2.0);
        absxr = -absxi;
      } else {
        absxi = muDoubleScalarSqrt(x->data[(int32_T)(1.0 + (real_T)k) - 1].im /
          2.0);
        absxr = absxi;
      }
    } else if (muDoubleScalarIsNaN(x->data[(int32_T)(1.0 + (real_T)k) - 1].re) ||
               muDoubleScalarIsNaN(x->data[(int32_T)(1.0 + (real_T)k) - 1].im))
    {
      absxi = rtNaN;
      absxr = rtNaN;
    } else if (muDoubleScalarIsInf(x->data[(int32_T)(1.0 + (real_T)k) - 1].im))
    {
      absxi = rtInf;
      absxr = x->data[(int32_T)(1.0 + (real_T)k) - 1].im;
    } else if (muDoubleScalarIsInf(x->data[(int32_T)(1.0 + (real_T)k) - 1].re))
    {
      if (x->data[(int32_T)(1.0 + (real_T)k) - 1].re < 0.0) {
        absxi = 0.0;
        absxr = rtInf;
      } else {
        absxi = rtInf;
        absxr = 0.0;
      }
    } else {
      absxr = muDoubleScalarAbs(x->data[(int32_T)(1.0 + (real_T)k) - 1].re);
      absxi = muDoubleScalarAbs(x->data[(int32_T)(1.0 + (real_T)k) - 1].im);
      if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
      {
        absxr *= 0.5;
        absxi *= 0.5;
        absxi = muDoubleScalarHypot(absxr, absxi);
        if (absxi > absxr) {
          absxi = muDoubleScalarSqrt(absxi) * muDoubleScalarSqrt(1.0 + absxr /
            absxi);
        } else {
          absxi = muDoubleScalarSqrt(absxi) * 1.4142135623730951;
        }
      } else {
        absxi = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, absxi) + absxr) *
          0.5);
      }

      if (x->data[(int32_T)(1.0 + (real_T)k) - 1].re > 0.0) {
        absxr = 0.5 * (x->data[(int32_T)(1.0 + (real_T)k) - 1].im / absxi);
      } else {
        if (x->data[(int32_T)(1.0 + (real_T)k) - 1].im < 0.0) {
          absxr = -absxi;
        } else {
          absxr = absxi;
        }

        absxi = 0.5 * (x->data[(int32_T)(1.0 + (real_T)k) - 1].im / absxr);
      }
    }

    x->data[(int32_T)(1.0 + (real_T)k) - 1].re = absxi;
    x->data[(int32_T)(1.0 + (real_T)k) - 1].im = absxr;
  }
}

/* End of code generation (sqrt.c) */
