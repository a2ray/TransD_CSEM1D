/*
 * diff.h
 *
 * Code generation for function 'diff'
 *
 * C source code generated on: Sun Mar 16 16:41:10 2014
 *
 */

#ifndef __DIFF_H__
#define __DIFF_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_types.h"

/* Function Declarations */
extern void check_forloop_overflow_error(boolean_T overflow);
extern void diff(const emxArray_real_T *x, emxArray_real_T *y);
#endif
/* End of code generation (diff.h) */
