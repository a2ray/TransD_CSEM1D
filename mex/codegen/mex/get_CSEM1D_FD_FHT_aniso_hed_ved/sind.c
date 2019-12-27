/*
 * sind.c
 *
 * Code generation for function 'sind'
 *
 * C source code generated on: Sun Mar 16 16:41:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "sind.h"

/* Function Definitions */
void sind(real_T *x)
{
  real_T b_x;
  real_T absx;
  int8_T n;
  if (!((!muDoubleScalarIsInf(*x)) && (!muDoubleScalarIsNaN(*x)))) {
    b_x = rtNaN;
  } else {
    b_x = muDoubleScalarRem(*x, 360.0);
    absx = muDoubleScalarAbs(b_x);
    if (absx > 180.0) {
      if (b_x > 0.0) {
        b_x -= 360.0;
      } else {
        b_x += 360.0;
      }

      absx = muDoubleScalarAbs(b_x);
    }

    if (absx <= 45.0) {
      b_x *= 0.017453292519943295;
      n = 0;
    } else if (absx <= 135.0) {
      if (b_x > 0.0) {
        b_x = 0.017453292519943295 * (b_x - 90.0);
        n = 1;
      } else {
        b_x = 0.017453292519943295 * (b_x + 90.0);
        n = -1;
      }
    } else if (b_x > 0.0) {
      b_x = 0.017453292519943295 * (b_x - 180.0);
      n = 2;
    } else {
      b_x = 0.017453292519943295 * (b_x + 180.0);
      n = -2;
    }

    if (n == 0) {
      b_x = muDoubleScalarSin(b_x);
    } else if (n == 1) {
      b_x = muDoubleScalarCos(b_x);
    } else if (n == -1) {
      b_x = -muDoubleScalarCos(b_x);
    } else {
      b_x = -muDoubleScalarSin(b_x);
    }
  }

  *x = b_x;
}

/* End of code generation (sind.c) */
