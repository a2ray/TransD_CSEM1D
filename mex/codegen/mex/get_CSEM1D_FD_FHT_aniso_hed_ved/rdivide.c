/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 * C source code generated on: Sun Mar 16 16:41:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "rdivide.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_emxutil.h"
#include "diff.h"
#include "isequal.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo rc_emlrtRSI = { 13, "rdivide",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo o_emlrtMCI = { 14, 5, "rdivide",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo p_emlrtMCI = { 13, 15, "rdivide",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 1, 14, "rdivide",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Definitions */
void rdivide(const emxArray_creal_T *x, const emxArray_creal_T *y,
             emxArray_creal_T *z)
{
  real_T b_x[2];
  int32_T i;
  real_T b_y[2];
  const mxArray *c_y;
  static const int32_T iv24[2] = { 1, 15 };

  const mxArray *m3;
  char_T cv15[15];
  static const char_T cv16[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T loop_ub;
  real_T x_re;
  real_T x_im;
  real_T y_re;
  real_T y_im;
  real_T brm;
  real_T bim;
  real_T s;
  for (i = 0; i < 2; i++) {
    b_x[i] = x->size[i];
  }

  for (i = 0; i < 2; i++) {
    b_y[i] = y->size[i];
  }

  if (isequal(b_x, b_y)) {
  } else {
    emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m3 = mxCreateCharArray(2, iv24);
    for (i = 0; i < 15; i++) {
      cv15[i] = cv16[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 15, m3, cv15);
    emlrtAssign(&c_y, m3);
    error(b_message(c_y, &o_emlrtMCI), &p_emlrtMCI);
    emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  }

  i = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = x->size[1];
  emxEnsureCapacity((emxArray__common *)z, i, (int32_T)sizeof(creal_T),
                    &eb_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    x_re = x->data[i].re;
    x_im = x->data[i].im;
    y_re = y->data[i].re;
    y_im = y->data[i].im;
    if (y_im == 0.0) {
      if (x_im == 0.0) {
        z->data[i].re = x_re / y_re;
        z->data[i].im = 0.0;
      } else if (x_re == 0.0) {
        z->data[i].re = 0.0;
        z->data[i].im = x_im / y_re;
      } else {
        z->data[i].re = x_re / y_re;
        z->data[i].im = x_im / y_re;
      }
    } else if (y_re == 0.0) {
      if (x_re == 0.0) {
        z->data[i].re = x_im / y_im;
        z->data[i].im = 0.0;
      } else if (x_im == 0.0) {
        z->data[i].re = 0.0;
        z->data[i].im = -(x_re / y_im);
      } else {
        z->data[i].re = x_im / y_im;
        z->data[i].im = -(x_re / y_im);
      }
    } else {
      brm = muDoubleScalarAbs(y_re);
      bim = muDoubleScalarAbs(y_im);
      if (brm > bim) {
        s = y_im / y_re;
        bim = y_re + s * y_im;
        z->data[i].re = (x_re + s * x_im) / bim;
        z->data[i].im = (x_im - s * x_re) / bim;
      } else if (bim == brm) {
        if (y_re > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }

        if (y_im > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        z->data[i].re = (x_re * s + x_im * bim) / brm;
        z->data[i].im = (x_im * s - x_re * bim) / brm;
      } else {
        s = y_re / y_im;
        bim = y_im + s * y_re;
        z->data[i].re = (s * x_re + x_im) / bim;
        z->data[i].im = (s * x_im - x_re) / bim;
      }
    }
  }
}

/* End of code generation (rdivide.c) */
