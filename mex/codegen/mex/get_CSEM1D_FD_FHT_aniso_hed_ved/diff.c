/*
 * diff.c
 *
 * Code generation for function 'diff'
 *
 * C source code generated on: Sun Mar 16 16:41:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "diff.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_emxutil.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_mexutil.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_data.h"

/* Variable Definitions */
static emlrtRSInfo kb_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo gd_emlrtRSI = { 44, "diff",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/diff.m" };

static emlrtRSInfo kd_emlrtRSI = { 98, "diff",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/diff.m" };

static emlrtRSInfo ld_emlrtRSI = { 100, "diff",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/diff.m" };

static emlrtMCInfo e_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo v_emlrtMCI = { 45, 9, "diff",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/diff.m" };

static emlrtMCInfo w_emlrtMCI = { 44, 19, "diff",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/diff.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 1, 14, "diff",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/diff.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 70, 1, "diff",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/diff.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 71, 1, "diff",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/diff.m" };

/* Function Declarations */
static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);

/* Function Definitions */
static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m10;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m10, 2, pArrays,
    "message", TRUE, location);
}

void check_forloop_overflow_error(boolean_T overflow)
{
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 34 };

  const mxArray *m1;
  char_T cv8[34];
  int32_T i;
  static const char_T cv9[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 23 };

  char_T cv10[23];
  static const char_T cv11[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  if (!overflow) {
  } else {
    emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m1 = mxCreateCharArray(2, iv13);
    for (i = 0; i < 34; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m1, cv8);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = mxCreateCharArray(2, iv14);
    for (i = 0; i < 23; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m1, cv10);
    emlrtAssign(&b_y, m1);
    error(message(y, b_y, &e_emlrtMCI), &f_emlrtMCI);
    emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
  }
}

void diff(const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T iyLead;
  int32_T orderForDim;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv25[2] = { 1, 36 };

  const mxArray *m5;
  char_T cv17[36];
  static const char_T cv18[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emxArray_real_T *work;
  emxArray_real_T *b_y1;
  int32_T m;
  real_T tmp1;
  real_T tmp2;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (x->size[1] == 0) {
    iyLead = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)y, iyLead, (int32_T)sizeof(real_T),
                      &jb_emlrtRTEI);
  } else {
    orderForDim = muIntScalarMin_sint32(x->size[1] - 1, 1);
    if (orderForDim < 1) {
      iyLead = y->size[0] * y->size[1];
      y->size[0] = 0;
      y->size[1] = 0;
      emxEnsureCapacity((emxArray__common *)y, iyLead, (int32_T)sizeof(real_T),
                        &jb_emlrtRTEI);
    } else {
      overflow = (x->size[1] != 1);
      if (overflow) {
      } else {
        emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
        b_y = NULL;
        m5 = mxCreateCharArray(2, iv25);
        for (orderForDim = 0; orderForDim < 36; orderForDim++) {
          cv17[orderForDim] = cv18[orderForDim];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m5, cv17);
        emlrtAssign(&b_y, m5);
        error(b_message(b_y, &v_emlrtMCI), &w_emlrtMCI);
        emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
      }

      b_emxInit_real_T(&work, 1, &kb_emlrtRTEI, TRUE);
      emxInit_real_T(&b_y1, 2, &lb_emlrtRTEI, TRUE);
      orderForDim = x->size[1] - 1;
      iyLead = work->size[0];
      work->size[0] = 1;
      emxEnsureCapacity((emxArray__common *)work, iyLead, (int32_T)sizeof(real_T),
                        &kb_emlrtRTEI);
      iyLead = b_y1->size[0] * b_y1->size[1];
      b_y1->size[0] = 1;
      b_y1->size[1] = orderForDim;
      emxEnsureCapacity((emxArray__common *)b_y1, iyLead, (int32_T)sizeof(real_T),
                        &lb_emlrtRTEI);
      orderForDim = 1;
      iyLead = 0;
      work->data[0] = x->data[0];
      emlrtPushRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
      if (2 > x->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[1] > 2147483646);
      }

      if (overflow) {
        emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error(TRUE);
        emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&kd_emlrtRSI, emlrtRootTLSGlobal);
      for (m = 2; m <= x->size[1]; m++) {
        tmp1 = x->data[orderForDim];
        emlrtPushRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ld_emlrtRSI, emlrtRootTLSGlobal);
        tmp2 = work->data[0];
        work->data[0] = tmp1;
        tmp1 -= tmp2;
        orderForDim++;
        b_y1->data[iyLead] = tmp1;
        iyLead++;
      }

      emxFree_real_T(&work);
      iyLead = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = b_y1->size[1];
      emxEnsureCapacity((emxArray__common *)y, iyLead, (int32_T)sizeof(real_T),
                        &jb_emlrtRTEI);
      orderForDim = b_y1->size[0] * b_y1->size[1];
      for (iyLead = 0; iyLead < orderForDim; iyLead++) {
        y->data[iyLead] = b_y1->data[iyLead];
      }

      emxFree_real_T(&b_y1);
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (diff.c) */
