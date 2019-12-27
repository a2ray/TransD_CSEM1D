/*
 * isequal.c
 *
 * Code generation for function 'isequal'
 *
 * C source code generated on: Sun Mar 16 16:41:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "isequal.h"

/* Function Definitions */
boolean_T isequal(const real_T varargin_1[2], const real_T varargin_2[2])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  p = FALSE;
  b_p = TRUE;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 2)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = FALSE;
      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  if (!b_p) {
  } else {
    p = TRUE;
  }

  return p;
}

/* End of code generation (isequal.c) */
