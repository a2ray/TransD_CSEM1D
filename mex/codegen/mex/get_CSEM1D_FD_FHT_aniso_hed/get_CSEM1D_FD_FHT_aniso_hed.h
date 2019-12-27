/*
 * get_CSEM1D_FD_FHT_aniso_hed.h
 *
 * Code generation for function 'get_CSEM1D_FD_FHT_aniso_hed'
 *
 * C source code generated on: Sun Mar 16 16:41:10 2014
 *
 */

#ifndef __GET_CSEM1D_FD_FHT_ANISO_HED_H__
#define __GET_CSEM1D_FD_FHT_ANISO_HED_H__
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
extern void get_CSEM1D_FD_FHT_aniso_hed(const emxArray_real_T *freqs, const emxArray_real_T *rRx, const emxArray_real_T *zRx, real_T zTx, const emxArray_real_T *z, const emxArray_real_T *sig, const char_T filterName[15], real_T lUseLaggedConv, emxArray_creal_T *Er, emxArray_creal_T *Eb, emxArray_creal_T *Hr, emxArray_creal_T *Hb, emxArray_creal_T *Ez, emxArray_creal_T *Hz);
#endif
/* End of code generation (get_CSEM1D_FD_FHT_aniso_hed.h) */
