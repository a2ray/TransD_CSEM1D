/*
 * get_CSEM1D_FD_FHT_aniso_hed_ved.c
 *
 * Code generation for function 'get_CSEM1D_FD_FHT_aniso_hed_ved'
 *
 * C source code generated on: Sun Mar 16 16:41:31 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_emxutil.h"
#include "exp.h"
#include "diff.h"
#include "rdivide.h"
#include "sqrt.h"
#include "log10.h"
#include "sind.h"
#include "cosd.h"
#include "log.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_mexutil.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_ved_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 67, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo b_emlrtRSI = { 163, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo c_emlrtRSI = { 66, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo d_emlrtRSI = { 86, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo e_emlrtRSI = { 87, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo f_emlrtRSI = { 91, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo g_emlrtRSI = { 92, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo h_emlrtRSI = { 94, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo i_emlrtRSI = { 129, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo j_emlrtRSI = { 147, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo k_emlrtRSI = { 134, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo l_emlrtRSI = { 149, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo m_emlrtRSI = { 133, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo n_emlrtRSI = { 151, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo o_emlrtRSI = { 132, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo p_emlrtRSI = { 153, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo q_emlrtRSI = { 131, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo r_emlrtRSI = { 155, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo s_emlrtRSI = { 130, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo t_emlrtRSI = { 157, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo u_emlrtRSI = { 166, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo v_emlrtRSI = { 42, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo w_emlrtRSI = { 158, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo x_emlrtRSI = { 160, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo y_emlrtRSI = { 169, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo ab_emlrtRSI = { 194, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo bb_emlrtRSI = { 207, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo cb_emlrtRSI = { 218, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo db_emlrtRSI = { 225, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo eb_emlrtRSI = { 228, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo fb_emlrtRSI = { 42, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo gb_emlrtRSI = { 134, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo hb_emlrtRSI = { 138, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo ib_emlrtRSI = { 185, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo lb_emlrtRSI = { 16, "max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo mb_emlrtRSI = { 18, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo nb_emlrtRSI = { 38, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo ob_emlrtRSI = { 73, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo pb_emlrtRSI = { 88, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo qb_emlrtRSI = { 192, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo rb_emlrtRSI = { 219, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo sb_emlrtRSI = { 16, "min",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/min.m" };

static emlrtRSInfo vb_emlrtRSI = { 79, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo wb_emlrtRSI = { 280, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo xb_emlrtRSI = { 288, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo yb_emlrtRSI = { 401, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ac_emlrtRSI = { 21, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo bc_emlrtRSI = { 200, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo cc_emlrtRSI = { 203, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo dc_emlrtRSI = { 204, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo ec_emlrtRSI = { 207, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo fc_emlrtRSI = { 210, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo gc_emlrtRSI = { 213, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo hc_emlrtRSI = { 214, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo ic_emlrtRSI = { 221, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo jc_emlrtRSI = { 228, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo kc_emlrtRSI = { 241, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo lc_emlrtRSI = { 242, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo mc_emlrtRSI = { 247, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo nc_emlrtRSI = { 248, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRSInfo oc_emlrtRSI = { 1, "mrdivide",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/mrdivide.p" };

static emlrtRSInfo pc_emlrtRSI = { 15, "rdivide",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo uc_emlrtRSI = { 11, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo vc_emlrtRSI = { 14, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo wc_emlrtRSI = { 26, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo xc_emlrtRSI = { 39, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo yc_emlrtRSI = { 41, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo ad_emlrtRSI = { 65, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo bd_emlrtRSI = { 252, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo cd_emlrtRSI = { 261, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo dd_emlrtRSI = { 272, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo ed_emlrtRSI = { 284, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo fd_emlrtRSI = { 301, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtMCInfo emlrtMCI = { 67, 9, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtMCInfo b_emlrtMCI = { 163, 14, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtMCInfo c_emlrtMCI = { 69, 9, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtMCInfo d_emlrtMCI = { 225, 1, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtMCInfo g_emlrtMCI = { 41, 9, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo h_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo i_emlrtMCI = { 74, 9, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo j_emlrtMCI = { 73, 19, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo k_emlrtMCI = { 402, 5, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtMCInfo l_emlrtMCI = { 401, 15, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtMCInfo m_emlrtMCI = { 234, 17, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtMCInfo n_emlrtMCI = { 235, 17, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtMCInfo s_emlrtMCI = { 14, 5, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo t_emlrtMCI = { 65, 1, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo u_emlrtMCI = { 261, 9, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo emlrtRTEI = { 159, 1, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRTEInfo b_emlrtRTEI = { 2, 32, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 281, 1, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRTEInfo d_emlrtRTEI = { 98, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 101, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 104, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 107, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 110, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 113, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 122, 9, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 85, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 85, 17, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 158, 1, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRTEInfo n_emlrtRTEI = { 27, 5, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo o_emlrtRTEI = { 1, 20, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo p_emlrtRTEI = { 145, 5, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo r_emlrtRTEI = { 179, 11, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 111, 5, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo t_emlrtRTEI = { 200, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 203, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 204, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 206, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 213, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 214, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 221, 13, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 228, 13, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 33, 6, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 17, 9, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 297, 36, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 301, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtRTEInfo ib_emlrtRTEI = { 303, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtDCInfo emlrtDCI = { 98, 40, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  4 };

static emlrtDCInfo b_emlrtDCI = { 101, 40, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  4 };

static emlrtDCInfo c_emlrtDCI = { 104, 40, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  4 };

static emlrtDCInfo d_emlrtDCI = { 107, 40, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  4 };

static emlrtDCInfo e_emlrtDCI = { 110, 40, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  4 };

static emlrtDCInfo f_emlrtDCI = { 113, 40, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  4 };

static emlrtBCInfo emlrtBCI = { -1, -1, 121, 19, "zRx",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 122, 27, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  4 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 125, 17, "freqs",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 147, 48, "HzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 147, 72, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtRTEInfo ob_emlrtRTEI = { 134, 22, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo e_emlrtBCI = { -1, -1, 134, 41, "EzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 149, 48, "EzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 149, 75, "EzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo emlrtECI = { 1, 149, 39, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo h_emlrtBCI = { -1, -1, 149, 120, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtRTEInfo pb_emlrtRTEI = { 133, 22, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo i_emlrtBCI = { -1, -1, 133, 41, "HbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 151, 48, "HbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 151, 75, "HbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 151, 102, "HbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo b_emlrtECI = { 1, 151, 39, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo m_emlrtBCI = { -1, -1, 151, 149, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 151, 169, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtRTEInfo qb_emlrtRTEI = { 132, 22, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo o_emlrtBCI = { -1, -1, 132, 41, "HrK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 153, 48, "HrK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 153, 71, "HrK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo c_emlrtECI = { 1, 153, 43, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo r_emlrtBCI = { -1, -1, 153, 110, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 153, 120, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtRTEInfo rb_emlrtRTEI = { 131, 22, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo t_emlrtBCI = { -1, -1, 131, 41, "EbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 155, 48, "EbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 155, 71, "EbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo d_emlrtECI = { 1, 155, 43, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo w_emlrtBCI = { -1, -1, 155, 110, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 155, 120, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtRTEInfo sb_emlrtRTEI = { 130, 22, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo y_emlrtBCI = { -1, -1, 130, 41, "ErK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 157, 41, "ErK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 157, 68, "ErK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 157, 95, "ErK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo e_emlrtECI = { 1, 157, 32, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo db_emlrtBCI = { -1, -1, 157, 142, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 157, 162, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 147, 20, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 147, 24, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo f_emlrtECI = { -1, 147, 13, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 149, 20, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 149, 24, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo g_emlrtECI = { -1, 149, 13, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 151, 20, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 151, 24, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo h_emlrtECI = { -1, 151, 13, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 153, 20, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 153, 24, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo i_emlrtECI = { -1, 153, 13, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 155, 20, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 155, 24, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo j_emlrtECI = { -1, 155, 13, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 157, 20, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 157, 24, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo k_emlrtECI = { -1, 157, 13, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 168, 18, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 169, 24, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 170, 22, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 171, 18, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 172, 18, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 173, 22, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 147, 53, "HzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 149, 59, "EzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 149, 84, "EzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 151, 59, "HbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 151, 86, "HbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 151, 111, "HbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 153, 59, "HrK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 153, 80, "HrK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 155, 59, "EbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 155, 80, "EbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 157, 52, "ErK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 157, 79, "ErK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 157, 104, "ErK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 129, 72, "lambda",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 130, 21, "ErK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 131, 21, "EbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 132, 21, "HrK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 133, 21, "HbK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 135, 21, "HzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 135, 27, "HzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 134, 21, "EzK",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo l_emlrtECI = { 2, 204, 15, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtECInfo m_emlrtECI = { -1, 207, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtECInfo n_emlrtECI = { -1, 210, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo tc_emlrtBCI = { 0, MAX_int32_T, 213, 16, "pzI(1:end-1)",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 213, 10, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { 0, MAX_int32_T, 213, 31, "pzI(2:end)",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 213, 25, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo o_emlrtECI = { 2, 213, 10, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 213, 39, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 213, 54, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo p_emlrtECI = { 2, 213, 39, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 214, 17, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { 0, MAX_int32_T, 214, 34, "pzII(2:end)",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 214, 27, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo q_emlrtECI = { 2, 214, 10, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 214, 48, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 214, 56, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo r_emlrtECI = { 2, 214, 41, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 215, 17, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 215, 27, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo s_emlrtECI = { 2, 215, 10, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 215, 48, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 215, 56, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo t_emlrtECI = { 2, 215, 41, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 243, 28, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 249, 25, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 249, 47, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 252, 32, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 252, 42, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 259, 60, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 275, 60, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 279, 62, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 280, 60, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 207, 17, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 210, 18, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 207, 5, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 210, 5, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 242, 51, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 248, 63, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 324, 36, "d",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 324, 28, "pz",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 323, 20, "r",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 322, 60, "d",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 322, 52, "pz",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtRTEInfo ub_emlrtRTEI = { 321, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 315, 36, "d",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 315, 28, "pz",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 314, 20, "r",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 313, 57, "d",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtECInfo u_emlrtECI = { -1, 305, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 305, 5, "d",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 304, 5, "d",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 313, 49, "pz",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtRTEInfo vb_emlrtRTEI = { 312, 5, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m"
};

static emlrtBCInfo le_emlrtBCI = { -1, -1, 305, 19, "dz",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo me_emlrtBCI = { 0, MAX_int32_T, 305, 24, "dz(2:end)",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 306, 5, "d",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 322, 18, "r",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 313, 17, "r",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 363, 65, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 362, 40, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 359, 61, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 358, 41, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 355, 61, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 354, 41, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 351, 61, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 350, 40, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 347, 64, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 346, 41, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 343, 60, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 342, 41, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo df_emlrtBCI = { -1, -1, 339, 64, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ef_emlrtBCI = { -1, -1, 338, 41, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo ff_emlrtBCI = { -1, -1, 335, 60, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo gf_emlrtBCI = { -1, -1, 334, 41, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 332, 3, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 332, 3, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  1 };

static emlrtBCInfo if_emlrtBCI = { -1, -1, 332, 17, "z",
  "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 332, 17, "get_CSEM1D_FD_FHT_aniso_hed_ved",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed_ved.m",
  1 };

/* Function Declarations */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_creal_T *y);
static void beep(emlrtMCInfo *location);
static void disp(const mxArray *b, emlrtMCInfo *location);
static void display(const mxArray *b, emlrtMCInfo *location);
static int32_T div_s32_floor(int32_T numerator, int32_T denominator);
static void eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y);
static void eml_sort_idx(const emxArray_real_T *x, emxArray_int32_T *idx);
static void emlrt_marshallIn(const mxArray *PPV, const char_T *identifier,
  emxArray_creal_T *y);
static const mxArray *emlrt_marshallOut(emxArray_real_T *u);
static void getCSEM1DKernels_aniso_hed(real_T krho, real_T f, real_T zRx, real_T
  zTx, emxArray_real_T *z, const emxArray_real_T *sig, creal_T ErKernels[3],
  creal_T EbKernels[2], creal_T HrKernels[2], creal_T HbKernels[3], creal_T
  EzKernels[2], creal_T *HzKernels);
static void get_curly_R(const creal_T Rs_u, const creal_T Rs_d, const creal_T pz,
  real_T zR, const emxArray_real_T *z, real_T iTxLayer, real_T omega, creal_T
  *finRA, creal_T *finRD, creal_T *finRB, creal_T *finRC);
static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_creal_T *ret);
static const mxArray *spline(const mxArray *b, const mxArray *c, const mxArray
  *d, emlrtMCInfo *location);
static void stacks(const emxArray_creal_T *pz, real_T iTxLayer, const
                   emxArray_creal_T *r, const emxArray_real_T *z, real_T omega,
                   creal_T *Rupperstack, creal_T *Rlowerstack);

/* Function Definitions */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_creal_T *y)
{
  m_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void beep(emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 0, NULL, "beep", TRUE,
                        location);
}

static void disp(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "disp", TRUE,
                        location);
}

static void display(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "display", TRUE,
                        location);
}

static int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  int32_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(0, emlrtRootTLSGlobal);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if ((uint32_T)quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > (uint32_T)0) {
        tempAbsQuotient++;
      }
    }

    if ((uint32_T)quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static void eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m4;
  int32_T j;
  emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > x->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error(TRUE);
    emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
  if (k <= x->size[1]) {
  } else {
    emlrtPushRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    error(b_y, &s_emlrtMCI);
    emlrtPopRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
  }

  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &fb_emlrtRTEI);
  j = 0;
  emlrtPushRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > x->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error(TRUE);
    emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

static void eml_sort_idx(const emxArray_real_T *x, emxArray_int32_T *idx)
{
  uint32_T uv1[2];
  int32_T k;
  boolean_T overflow;
  emxArray_int32_T *idx0;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  for (k = 0; k < 2; k++) {
    uv1[k] = (uint32_T)x->size[k];
  }

  k = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity((emxArray__common *)idx, k, (int32_T)sizeof(int32_T),
                    &n_emlrtRTEI);
  if (x->size[1] == 0) {
    emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  } else {
    emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      check_forloop_overflow_error(TRUE);
      emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 1; k <= x->size[1]; k++) {
      idx->data[k - 1] = k;
    }

    emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
    if (1 > x->size[1] - 1) {
      overflow = FALSE;
    } else {
      overflow = (x->size[1] - 1 > 2147483645);
    }

    if (overflow) {
      emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      check_forloop_overflow_error(TRUE);
      emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 1; k <= x->size[1] - 1; k += 2) {
      if ((x->data[k - 1] <= x->data[k]) || muDoubleScalarIsNaN(x->data[k])) {
        overflow = TRUE;
      } else {
        overflow = FALSE;
      }

      if (overflow) {
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }

    emxInit_int32_T(&idx0, 1, &p_emlrtRTEI, TRUE);
    k = idx0->size[0];
    idx0->size[0] = x->size[1];
    emxEnsureCapacity((emxArray__common *)idx0, k, (int32_T)sizeof(int32_T),
                      &o_emlrtRTEI);
    i = x->size[1];
    for (k = 0; k < i; k++) {
      idx0->data[k] = 1;
    }

    i = 2;
    while (i < x->size[1]) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < x->size[1] + 1; pEnd = qEnd + i) {
        p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > x->size[1] + 1) {
          qEnd = x->size[1] + 1;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if ((x->data[idx->data[p - 1] - 1] <= x->data[idx->data[q] - 1]) ||
              muDoubleScalarIsNaN(x->data[idx->data[q] - 1])) {
            overflow = TRUE;
          } else {
            overflow = FALSE;
          }

          if (overflow) {
            idx0->data[k] = idx->data[p - 1];
            p++;
            if (p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                idx0->data[k] = idx->data[q];
                q++;
              }
            }
          } else {
            idx0->data[k] = idx->data[q];
            q++;
            if (q + 1 == qEnd) {
              while (p < pEnd) {
                k++;
                idx0->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }

          k++;
        }

        emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
        for (k = 0; k + 1 <= kEnd; k++) {
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&idx0);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void emlrt_marshallIn(const mxArray *PPV, const char_T *identifier,
  emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(PPV), &thisId, y);
  emlrtDestroyArray(&PPV);
}

static const mxArray *emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m6;
  real_T (*pData)[];
  int32_T i16;
  int32_T i;
  y = NULL;
  m6 = mxCreateNumericArray(2, u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m6);
  i16 = 0;
  for (i = 0; i < u->size[1]; i++) {
    (*pData)[i16] = u->data[u->size[0] * i];
    i16++;
  }

  emlrtAssign(&y, m6);
  return y;
}

static void getCSEM1DKernels_aniso_hed(real_T krho, real_T f, real_T zRx, real_T
  zTx, emxArray_real_T *z, const emxArray_real_T *sig, creal_T ErKernels[3],
  creal_T EbKernels[2], creal_T HrKernels[2], creal_T HbKernels[3], creal_T
  EzKernels[2], creal_T *HzKernels)
{
  int32_T i;
  int32_T i4;
  int32_T k;
  int32_T loop_ub;
  emxArray_creal_T *epsc;
  real_T omega;
  real_T re;
  real_T ai;
  real_T y;
  emxArray_creal_T *pzI;
  emxArray_creal_T *pzII;
  emxArray_creal_T *b_epsc;
  emxArray_creal_T *c_epsc;
  emxArray_creal_T *rTM;
  int32_T b_pzII[2];
  int32_T b_rTM[2];
  emxArray_boolean_T *b_index;
  emxArray_int32_T *ii;
  emxArray_int32_T *r9;
  int32_T i5;
  int32_T n;
  int32_T iv15[2];
  int32_T iv16[2];
  int32_T i6;
  int32_T idx;
  emxArray_creal_T *b_pzI;
  emxArray_int32_T *r10;
  int32_T iv17[2];
  int32_T iv18[2];
  emxArray_int32_T *r11;
  emxArray_creal_T *c_pzI;
  emxArray_int32_T *r12;
  emxArray_int32_T *r13;
  emxArray_creal_T *rTE;
  emxArray_creal_T *d_epsc;
  int32_T iv19[2];
  emxArray_creal_T *e_epsc;
  emxArray_int32_T *r14;
  int32_T iv20[2];
  real_T epsc_re;
  real_T pzII_re;
  real_T s;
  emxArray_int32_T *r15;
  emxArray_creal_T *r16;
  emxArray_creal_T *f_epsc;
  int32_T iv21[2];
  emxArray_creal_T *g_epsc;
  emxArray_int32_T *r17;
  int32_T iv22[2];
  emxArray_creal_T *r18;
  emxArray_int32_T *r19;
  emxArray_creal_T *r20;
  emxArray_creal_T *c_rTM;
  emxArray_creal_T *r21;
  const mxArray *b_y;
  const mxArray *m2;
  boolean_T exitg2;
  boolean_T guard2 = FALSE;
  const mxArray *c_y;
  emxArray_int32_T *r22;
  emxArray_int32_T *b_ii;
  emxArray_real_T *iTxLayer;
  const mxArray *d_y;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  const mxArray *e_y;
  emxArray_int32_T *r23;
  emxArray_int32_T *c_ii;
  emxArray_real_T *iRxLayer;
  const mxArray *f_y;
  static const int32_T iv23[2] = { 1, 78 };

  char_T cv13[78];
  static const char_T cv14[78] = { 'E', 'r', 'r', 'o', 'r', ',', ' ', 't', 'r',
    'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ' ', 'a', 'n', 'd', ' ', 'r',
    'e', 'c', 'e', 'i', 'v', 'e', 'r', ' ', 'n', 'e', 'e', 'd', ' ', 't', 'o',
    ' ', 'b', 'e', ' ', 'l', 'o', 'c', 'a', 't', 'e', 'd', ' ', 'i', 'n', ' ',
    't', 'h', 'e', ' ', 's', 'a', 'm', 'e', ' ', 'l', 'a', 'y', 'e', 'r', '!',
    ' ', 'S', 't', 'o', 'p', 'p', 'i', 'n', 'g' };

  creal_T Rs_d;
  creal_T gC_TM;
  creal_T d_pzI;
  creal_T curlyRD;
  creal_T gA_TM;
  real_T br;
  real_T bi;
  real_T brm;
  real_T gA_TE_re;
  real_T gA_TE_im;
  creal_T curlyRB;
  creal_T b_curlyRD;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /* sig(1,:) contains the horizontal conductivities */
  /* sig(2,:) contains the vertical conductivities */
  /* a codegen debug */
  for (i = 0; i < 3; i++) {
    ErKernels[i].re = 0.0;
    ErKernels[i].im = 1.0;
  }

  for (i = 0; i < 2; i++) {
    EbKernels[i].re = 0.0;
    EbKernels[i].im = 1.0;
    EzKernels[i].re = 0.0;
    EzKernels[i].im = 1.0;
    HrKernels[i].re = 0.0;
    HrKernels[i].im = 1.0;
  }

  for (i = 0; i < 3; i++) {
    HbKernels[i].re = 0.0;
    HbKernels[i].im = 1.0;
  }

  HzKernels->re = 0.0;
  HzKernels->im = 1.0;

  /*  set the origin to zTx=0 */
  i4 = z->size[0] * z->size[1];
  z->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)z, i4, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  i = z->size[0];
  k = z->size[1];
  loop_ub = i * k;
  for (i4 = 0; i4 < loop_ub; i4++) {
    z->data[i4] -= zTx;
  }

  emxInit_creal_T(&epsc, 2, &t_emlrtRTEI, TRUE);
  zRx -= zTx;

  /*  will need these variables */
  /* won't need */
  /* global omega    */
  omega = 6.2831853071795862 * f;
  emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  i4 = epsc->size[0] * epsc->size[1];
  epsc->size[0] = 2;
  epsc->size[1] = sig->size[1];
  emxEnsureCapacity((emxArray__common *)epsc, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  loop_ub = sig->size[0] * sig->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    re = 0.0 * sig->data[i4];
    ai = sig->data[i4];
    if (ai == 0.0) {
      re /= omega;
      y = 0.0;
    } else if (re == 0.0) {
      re = 0.0;
      y = ai / omega;
    } else {
      re /= omega;
      y = ai / omega;
    }

    epsc->data[i4].re = 8.854E-12 + re;
    epsc->data[i4].im = y;
  }

  emxInit_creal_T(&pzI, 2, &u_emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);

  /*  prho=krho/omega */
  emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  y = krho / omega;
  y *= y;
  loop_ub = epsc->size[1];
  i4 = pzI->size[0] * pzI->size[1];
  pzI->size[0] = 1;
  pzI->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)pzI, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    pzI->data[pzI->size[0] * i4].re = 1.2566370614359173E-6 * epsc->data
      [epsc->size[0] * i4].re - y;
    pzI->data[pzI->size[0] * i4].im = 1.2566370614359173E-6 * epsc->data
      [epsc->size[0] * i4].im;
  }

  emxInit_creal_T(&pzII, 2, &v_emlrtRTEI, TRUE);
  b_sqrt(pzI);
  emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  loop_ub = epsc->size[1];
  i4 = pzII->size[0] * pzII->size[1];
  pzII->size[0] = 1;
  pzII->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)pzII, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    pzII->data[pzII->size[0] * i4].re = 1.2566370614359173E-6 * epsc->data
      [epsc->size[0] * i4].re;
    pzII->data[pzII->size[0] * i4].im = 1.2566370614359173E-6 * epsc->data
      [epsc->size[0] * i4].im;
  }

  emxInit_creal_T(&b_epsc, 2, &r_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  y = krho / omega;
  y *= y;
  loop_ub = epsc->size[1];
  i4 = b_epsc->size[0] * b_epsc->size[1];
  b_epsc->size[0] = 1;
  b_epsc->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_epsc, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_epsc->data[b_epsc->size[0] * i4] = epsc->data[epsc->size[0] * i4];
  }

  emxInit_creal_T(&c_epsc, 2, &r_emlrtRTEI, TRUE);
  loop_ub = epsc->size[1];
  i4 = c_epsc->size[0] * c_epsc->size[1];
  c_epsc->size[0] = 1;
  c_epsc->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_epsc, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_epsc->data[c_epsc->size[0] * i4] = epsc->data[1 + epsc->size[0] * i4];
  }

  emxInit_creal_T(&rTM, 2, &y_emlrtRTEI, TRUE);
  rdivide(b_epsc, c_epsc, rTM);
  i4 = rTM->size[0] * rTM->size[1];
  rTM->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)rTM, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  i = rTM->size[0];
  k = rTM->size[1];
  loop_ub = i * k;
  emxFree_creal_T(&c_epsc);
  emxFree_creal_T(&b_epsc);
  for (i4 = 0; i4 < loop_ub; i4++) {
    rTM->data[i4].re *= y;
    rTM->data[i4].im *= y;
  }

  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  for (i4 = 0; i4 < 2; i4++) {
    b_pzII[i4] = pzII->size[i4];
  }

  for (i4 = 0; i4 < 2; i4++) {
    b_rTM[i4] = rTM->size[i4];
  }

  emlrtSizeEqCheck2DFastR2012b(b_pzII, b_rTM, &l_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  i4 = pzII->size[0] * pzII->size[1];
  pzII->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)pzII, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  k = pzII->size[0];
  i = pzII->size[1];
  loop_ub = k * i;
  for (i4 = 0; i4 < loop_ub; i4++) {
    pzII->data[i4].re -= rTM->data[i4].re;
    pzII->data[i4].im -= rTM->data[i4].im;
  }

  emxInit_boolean_T(&b_index, 2, &w_emlrtRTEI, TRUE);
  b_sqrt(pzII);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);

  /* sanity check for wavenumber */
  i4 = b_index->size[0] * b_index->size[1];
  b_index->size[0] = 1;
  b_index->size[1] = pzI->size[1];
  emxEnsureCapacity((emxArray__common *)b_index, i4, (int32_T)sizeof(boolean_T),
                    &r_emlrtRTEI);
  loop_ub = pzI->size[0] * pzI->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_index->data[i4] = (pzI->data[i4].im < 0.0);
  }

  b_emxInit_int32_T(&ii, 2, &cb_emlrtRTEI, TRUE);
  b_emxInit_int32_T(&r9, 2, &r_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  eml_li_find(b_index, ii);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  eml_li_find(b_index, r9);
  i4 = rTM->size[0] * rTM->size[1];
  rTM->size[0] = 1;
  rTM->size[1] = r9->size[1];
  emxEnsureCapacity((emxArray__common *)rTM, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  loop_ub = r9->size[0] * r9->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    i5 = pzI->size[1];
    n = r9->data[i4];
    rTM->data[i4].re = -pzI->data[emlrtDynamicBoundsCheckFastR2012b(n, 1, i5,
      &sd_emlrtBCI, emlrtRootTLSGlobal) - 1].re;
    i5 = pzI->size[1];
    n = r9->data[i4];
    rTM->data[i4].im = -pzI->data[emlrtDynamicBoundsCheckFastR2012b(n, 1, i5,
      &sd_emlrtBCI, emlrtRootTLSGlobal) - 1].im;
  }

  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  i4 = ii->size[1];
  i5 = rTM->size[1];
  emlrtSizeEqCheck1DFastR2012b(i4, i5, &m_emlrtECI, emlrtRootTLSGlobal);
  i = pzI->size[1];
  loop_ub = rTM->size[0] * rTM->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    i5 = ii->data[i4];
    pzI->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i, &ud_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = rTM->data[i4];
  }

  i4 = b_index->size[0] * b_index->size[1];
  b_index->size[0] = 1;
  b_index->size[1] = pzII->size[1];
  emxEnsureCapacity((emxArray__common *)b_index, i4, (int32_T)sizeof(boolean_T),
                    &r_emlrtRTEI);
  loop_ub = pzII->size[0] * pzII->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_index->data[i4] = (pzII->data[i4].im < 0.0);
  }

  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  eml_li_find(b_index, ii);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  eml_li_find(b_index, r9);
  i4 = rTM->size[0] * rTM->size[1];
  rTM->size[0] = 1;
  rTM->size[1] = r9->size[1];
  emxEnsureCapacity((emxArray__common *)rTM, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  loop_ub = r9->size[0] * r9->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    i5 = pzII->size[1];
    n = r9->data[i4];
    rTM->data[i4].re = -pzII->data[emlrtDynamicBoundsCheckFastR2012b(n, 1, i5,
      &td_emlrtBCI, emlrtRootTLSGlobal) - 1].re;
    i5 = pzII->size[1];
    n = r9->data[i4];
    rTM->data[i4].im = -pzII->data[emlrtDynamicBoundsCheckFastR2012b(n, 1, i5,
      &td_emlrtBCI, emlrtRootTLSGlobal) - 1].im;
  }

  emxFree_int32_T(&r9);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  i4 = ii->size[1];
  i5 = rTM->size[1];
  emlrtSizeEqCheck1DFastR2012b(i4, i5, &n_emlrtECI, emlrtRootTLSGlobal);
  k = pzII->size[1];
  loop_ub = rTM->size[0] * rTM->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    i5 = ii->data[i4];
    pzII->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, k, &vd_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = rTM->data[i4];
  }

  /*  reflection coefficients (downward) for an interface: pzI for TE, pzII for TM    */
  i4 = pzI->size[1];
  emlrtDynamicBoundsCheckFastR2012b(i4, 0, MAX_int32_T, &tc_emlrtBCI,
    emlrtRootTLSGlobal);
  if (1.0 > (real_T)pzI->size[1] - 1.0) {
    loop_ub = 0;
  } else {
    i4 = pzI->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &uc_emlrtBCI, emlrtRootTLSGlobal);
    i4 = pzI->size[1];
    i5 = (int32_T)((real_T)pzI->size[1] - 1.0);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &uc_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  i4 = pzI->size[1];
  emlrtDynamicBoundsCheckFastR2012b(i4, 0, MAX_int32_T, &vc_emlrtBCI,
    emlrtRootTLSGlobal);
  if (2 > pzI->size[1]) {
    i4 = 1;
    i5 = 1;
  } else {
    i4 = 2;
    i5 = pzI->size[1];
    n = pzI->size[1];
    i5 = emlrtDynamicBoundsCheckFastR2012b(n, 1, i5, &wc_emlrtBCI,
      emlrtRootTLSGlobal) + 1;
  }

  iv15[0] = 1;
  iv15[1] = loop_ub;
  iv16[0] = 1;
  iv16[1] = i5 - i4;
  emlrtSizeEqCheck2DFastR2012b(iv15, iv16, &o_emlrtECI, emlrtRootTLSGlobal);
  if (1 > pzI->size[1] - 1) {
    k = 0;
  } else {
    n = pzI->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, n, &xc_emlrtBCI, emlrtRootTLSGlobal);
    n = pzI->size[1];
    i6 = pzI->size[1] - 1;
    k = emlrtDynamicBoundsCheckFastR2012b(i6, 1, n, &xc_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  if (2 > pzI->size[1]) {
    n = 1;
    i6 = 1;
  } else {
    n = 2;
    i6 = pzI->size[1];
    idx = pzI->size[1];
    i6 = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i6, &yc_emlrtBCI,
      emlrtRootTLSGlobal) + 1;
  }

  emxInit_creal_T(&b_pzI, 2, &r_emlrtRTEI, TRUE);
  emxInit_int32_T(&r10, 1, &r_emlrtRTEI, TRUE);
  iv17[0] = 1;
  iv17[1] = k;
  iv18[0] = 1;
  iv18[1] = i6 - n;
  emlrtSizeEqCheck2DFastR2012b(iv17, iv18, &p_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  idx = r10->size[0];
  r10->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)r10, idx, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  for (idx = 0; idx < loop_ub; idx++) {
    r10->data[idx] = 1 + idx;
  }

  emxInit_int32_T(&r11, 1, &r_emlrtRTEI, TRUE);
  idx = r11->size[0];
  r11->size[0] = i5 - i4;
  emxEnsureCapacity((emxArray__common *)r11, idx, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  loop_ub = i5 - i4;
  for (i5 = 0; i5 < loop_ub; i5++) {
    r11->data[i5] = i4 + i5;
  }

  i4 = b_pzI->size[0] * b_pzI->size[1];
  b_pzI->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)b_pzI, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  i = r10->size[0];
  i4 = b_pzI->size[0] * b_pzI->size[1];
  b_pzI->size[1] = i;
  emxEnsureCapacity((emxArray__common *)b_pzI, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  loop_ub = r10->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_pzI->data[i4].re = pzI->data[r10->data[i4] - 1].re - pzI->data[r11->
      data[i4] - 1].re;
    b_pzI->data[i4].im = pzI->data[r10->data[i4] - 1].im - pzI->data[r11->
      data[i4] - 1].im;
  }

  emxFree_int32_T(&r11);
  emxFree_int32_T(&r10);
  emxInit_creal_T(&c_pzI, 2, &r_emlrtRTEI, TRUE);
  emxInit_int32_T(&r12, 1, &r_emlrtRTEI, TRUE);
  i4 = r12->size[0];
  r12->size[0] = k;
  emxEnsureCapacity((emxArray__common *)r12, i4, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  for (i4 = 0; i4 < k; i4++) {
    r12->data[i4] = 1 + i4;
  }

  emxInit_int32_T(&r13, 1, &r_emlrtRTEI, TRUE);
  i4 = r13->size[0];
  r13->size[0] = i6 - n;
  emxEnsureCapacity((emxArray__common *)r13, i4, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  loop_ub = i6 - n;
  for (i4 = 0; i4 < loop_ub; i4++) {
    r13->data[i4] = n + i4;
  }

  i4 = c_pzI->size[0] * c_pzI->size[1];
  c_pzI->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)c_pzI, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  i = r12->size[0];
  i4 = c_pzI->size[0] * c_pzI->size[1];
  c_pzI->size[1] = i;
  emxEnsureCapacity((emxArray__common *)c_pzI, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  loop_ub = r12->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_pzI->data[i4].re = pzI->data[r12->data[i4] - 1].re + pzI->data[r13->
      data[i4] - 1].re;
    c_pzI->data[i4].im = pzI->data[r12->data[i4] - 1].im + pzI->data[r13->
      data[i4] - 1].im;
  }

  emxFree_int32_T(&r13);
  emxFree_int32_T(&r12);
  emxInit_creal_T(&rTE, 2, &x_emlrtRTEI, TRUE);
  rdivide(b_pzI, c_pzI, rTE);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emxFree_creal_T(&c_pzI);
  emxFree_creal_T(&b_pzI);
  if (1 > epsc->size[1] - 1) {
    loop_ub = 0;
  } else {
    i4 = epsc->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &ad_emlrtBCI, emlrtRootTLSGlobal);
    i4 = epsc->size[1];
    i5 = epsc->size[1] - 1;
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &ad_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  i4 = pzII->size[1];
  emlrtDynamicBoundsCheckFastR2012b(i4, 0, MAX_int32_T, &bd_emlrtBCI,
    emlrtRootTLSGlobal);
  if (2 > pzII->size[1]) {
    i4 = 1;
    i5 = 1;
  } else {
    i4 = 2;
    i5 = pzII->size[1];
    n = pzII->size[1];
    i5 = emlrtDynamicBoundsCheckFastR2012b(n, 1, i5, &cd_emlrtBCI,
      emlrtRootTLSGlobal) + 1;
  }

  emxInit_creal_T(&d_epsc, 2, &r_emlrtRTEI, TRUE);
  n = d_epsc->size[0] * d_epsc->size[1];
  d_epsc->size[0] = 1;
  d_epsc->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)d_epsc, n, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    d_epsc->data[d_epsc->size[0] * n] = epsc->data[epsc->size[0] * n];
  }

  for (n = 0; n < 2; n++) {
    b_pzII[n] = d_epsc->size[n];
  }

  emxFree_creal_T(&d_epsc);
  iv19[0] = 1;
  iv19[1] = i5 - i4;
  emlrtSizeEqCheck2DFastR2012b(b_pzII, iv19, &q_emlrtECI, emlrtRootTLSGlobal);
  if (2 > epsc->size[1]) {
    n = 0;
    i6 = 0;
  } else {
    n = 1;
    i6 = epsc->size[1];
    idx = epsc->size[1];
    i6 = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i6, &dd_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  if (1 > pzII->size[1] - 1) {
    k = 0;
  } else {
    idx = pzII->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, idx, &ed_emlrtBCI,
      emlrtRootTLSGlobal);
    idx = pzII->size[1];
    i = pzII->size[1] - 1;
    k = emlrtDynamicBoundsCheckFastR2012b(i, 1, idx, &ed_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&e_epsc, 2, &r_emlrtRTEI, TRUE);
  idx = e_epsc->size[0] * e_epsc->size[1];
  e_epsc->size[0] = 1;
  e_epsc->size[1] = i6 - n;
  emxEnsureCapacity((emxArray__common *)e_epsc, idx, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  i = i6 - n;
  for (idx = 0; idx < i; idx++) {
    e_epsc->data[e_epsc->size[0] * idx] = epsc->data[epsc->size[0] * (n + idx)];
  }

  for (idx = 0; idx < 2; idx++) {
    b_pzII[idx] = e_epsc->size[idx];
  }

  emxFree_creal_T(&e_epsc);
  emxInit_int32_T(&r14, 1, &r_emlrtRTEI, TRUE);
  iv20[0] = 1;
  iv20[1] = k;
  emlrtSizeEqCheck2DFastR2012b(b_pzII, iv20, &r_emlrtECI, emlrtRootTLSGlobal);
  idx = r14->size[0];
  r14->size[0] = i5 - i4;
  emxEnsureCapacity((emxArray__common *)r14, idx, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  i = i5 - i4;
  for (i5 = 0; i5 < i; i5++) {
    r14->data[i5] = i4 + i5;
  }

  i4 = rTM->size[0] * rTM->size[1];
  rTM->size[0] = 1;
  rTM->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)rTM, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    epsc_re = epsc->data[epsc->size[0] * i4].re;
    y = epsc->data[epsc->size[0] * i4].im;
    pzII_re = pzII->data[r14->data[i4] - 1].re;
    s = pzII->data[r14->data[i4] - 1].im;
    rTM->data[rTM->size[0] * i4].re = epsc_re * pzII_re - y * s;
    rTM->data[rTM->size[0] * i4].im = epsc_re * s + y * pzII_re;
  }

  emxFree_int32_T(&r14);
  emxInit_int32_T(&r15, 1, &r_emlrtRTEI, TRUE);
  i4 = r15->size[0];
  r15->size[0] = k;
  emxEnsureCapacity((emxArray__common *)r15, i4, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  for (i4 = 0; i4 < k; i4++) {
    r15->data[i4] = 1 + i4;
  }

  emxInit_creal_T(&r16, 2, &r_emlrtRTEI, TRUE);
  i4 = r16->size[0] * r16->size[1];
  r16->size[0] = 1;
  r16->size[1] = i6 - n;
  emxEnsureCapacity((emxArray__common *)r16, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  loop_ub = i6 - n;
  for (i4 = 0; i4 < loop_ub; i4++) {
    epsc_re = epsc->data[epsc->size[0] * (n + i4)].re;
    y = epsc->data[epsc->size[0] * (n + i4)].im;
    pzII_re = pzII->data[r15->data[i4] - 1].re;
    s = pzII->data[r15->data[i4] - 1].im;
    r16->data[r16->size[0] * i4].re = epsc_re * pzII_re - y * s;
    r16->data[r16->size[0] * i4].im = epsc_re * s + y * pzII_re;
  }

  emxFree_int32_T(&r15);
  for (i4 = 0; i4 < 2; i4++) {
    b_rTM[i4] = rTM->size[i4];
  }

  for (i4 = 0; i4 < 2; i4++) {
    iv15[i4] = r16->size[i4];
  }

  emlrtSizeEqCheck2DFastR2012b(b_rTM, iv15, &q_emlrtECI, emlrtRootTLSGlobal);
  if (1 > epsc->size[1] - 1) {
    loop_ub = 0;
  } else {
    i4 = epsc->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &fd_emlrtBCI, emlrtRootTLSGlobal);
    i4 = epsc->size[1];
    i5 = epsc->size[1] - 1;
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &fd_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  if (2 > pzII->size[1]) {
    i4 = 1;
    i5 = 1;
  } else {
    i4 = 2;
    i5 = pzII->size[1];
    n = pzII->size[1];
    i5 = emlrtDynamicBoundsCheckFastR2012b(n, 1, i5, &gd_emlrtBCI,
      emlrtRootTLSGlobal) + 1;
  }

  emxInit_creal_T(&f_epsc, 2, &r_emlrtRTEI, TRUE);
  n = f_epsc->size[0] * f_epsc->size[1];
  f_epsc->size[0] = 1;
  f_epsc->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)f_epsc, n, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    f_epsc->data[f_epsc->size[0] * n] = epsc->data[epsc->size[0] * n];
  }

  for (n = 0; n < 2; n++) {
    b_pzII[n] = f_epsc->size[n];
  }

  emxFree_creal_T(&f_epsc);
  iv21[0] = 1;
  iv21[1] = i5 - i4;
  emlrtSizeEqCheck2DFastR2012b(b_pzII, iv21, &s_emlrtECI, emlrtRootTLSGlobal);
  if (2 > epsc->size[1]) {
    n = 0;
    i6 = 0;
  } else {
    n = 1;
    i6 = epsc->size[1];
    idx = epsc->size[1];
    i6 = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i6, &hd_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  if (1 > pzII->size[1] - 1) {
    k = 0;
  } else {
    idx = pzII->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, idx, &id_emlrtBCI,
      emlrtRootTLSGlobal);
    idx = pzII->size[1];
    i = pzII->size[1] - 1;
    k = emlrtDynamicBoundsCheckFastR2012b(i, 1, idx, &id_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emxInit_creal_T(&g_epsc, 2, &r_emlrtRTEI, TRUE);
  idx = g_epsc->size[0] * g_epsc->size[1];
  g_epsc->size[0] = 1;
  g_epsc->size[1] = i6 - n;
  emxEnsureCapacity((emxArray__common *)g_epsc, idx, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  i = i6 - n;
  for (idx = 0; idx < i; idx++) {
    g_epsc->data[g_epsc->size[0] * idx] = epsc->data[epsc->size[0] * (n + idx)];
  }

  for (idx = 0; idx < 2; idx++) {
    b_pzII[idx] = g_epsc->size[idx];
  }

  emxFree_creal_T(&g_epsc);
  emxInit_int32_T(&r17, 1, &r_emlrtRTEI, TRUE);
  iv22[0] = 1;
  iv22[1] = k;
  emlrtSizeEqCheck2DFastR2012b(b_pzII, iv22, &t_emlrtECI, emlrtRootTLSGlobal);
  idx = r17->size[0];
  r17->size[0] = i5 - i4;
  emxEnsureCapacity((emxArray__common *)r17, idx, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  i = i5 - i4;
  for (i5 = 0; i5 < i; i5++) {
    r17->data[i5] = i4 + i5;
  }

  emxInit_creal_T(&r18, 2, &r_emlrtRTEI, TRUE);
  i4 = r18->size[0] * r18->size[1];
  r18->size[0] = 1;
  r18->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)r18, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  for (i4 = 0; i4 < loop_ub; i4++) {
    epsc_re = epsc->data[epsc->size[0] * i4].re;
    y = epsc->data[epsc->size[0] * i4].im;
    pzII_re = pzII->data[r17->data[i4] - 1].re;
    s = pzII->data[r17->data[i4] - 1].im;
    r18->data[r18->size[0] * i4].re = epsc_re * pzII_re - y * s;
    r18->data[r18->size[0] * i4].im = epsc_re * s + y * pzII_re;
  }

  emxFree_int32_T(&r17);
  emxInit_int32_T(&r19, 1, &r_emlrtRTEI, TRUE);
  i4 = r19->size[0];
  r19->size[0] = k;
  emxEnsureCapacity((emxArray__common *)r19, i4, (int32_T)sizeof(int32_T),
                    &r_emlrtRTEI);
  for (i4 = 0; i4 < k; i4++) {
    r19->data[i4] = 1 + i4;
  }

  emxInit_creal_T(&r20, 2, &r_emlrtRTEI, TRUE);
  i4 = r20->size[0] * r20->size[1];
  r20->size[0] = 1;
  r20->size[1] = i6 - n;
  emxEnsureCapacity((emxArray__common *)r20, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  loop_ub = i6 - n;
  for (i4 = 0; i4 < loop_ub; i4++) {
    epsc_re = epsc->data[epsc->size[0] * (n + i4)].re;
    y = epsc->data[epsc->size[0] * (n + i4)].im;
    pzII_re = pzII->data[r19->data[i4] - 1].re;
    s = pzII->data[r19->data[i4] - 1].im;
    r20->data[r20->size[0] * i4].re = epsc_re * pzII_re - y * s;
    r20->data[r20->size[0] * i4].im = epsc_re * s + y * pzII_re;
  }

  emxFree_int32_T(&r19);
  for (i4 = 0; i4 < 2; i4++) {
    iv15[i4] = r18->size[i4];
  }

  for (i4 = 0; i4 < 2; i4++) {
    iv16[i4] = r20->size[i4];
  }

  emxInit_creal_T(&c_rTM, 2, &r_emlrtRTEI, TRUE);
  emlrtSizeEqCheck2DFastR2012b(iv15, iv16, &s_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  i4 = c_rTM->size[0] * c_rTM->size[1];
  c_rTM->size[0] = 1;
  c_rTM->size[1] = rTM->size[1];
  emxEnsureCapacity((emxArray__common *)c_rTM, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  loop_ub = rTM->size[0] * rTM->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_rTM->data[i4].re = rTM->data[i4].re - r16->data[i4].re;
    c_rTM->data[i4].im = rTM->data[i4].im - r16->data[i4].im;
  }

  emxFree_creal_T(&r16);
  emxInit_creal_T(&r21, 2, &r_emlrtRTEI, TRUE);
  i4 = r21->size[0] * r21->size[1];
  r21->size[0] = 1;
  r21->size[1] = r18->size[1];
  emxEnsureCapacity((emxArray__common *)r21, i4, (int32_T)sizeof(creal_T),
                    &r_emlrtRTEI);
  loop_ub = r18->size[0] * r18->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    r21->data[i4].re = r18->data[i4].re + r20->data[i4].re;
    r21->data[i4].im = r18->data[i4].im + r20->data[i4].im;
  }

  emxFree_creal_T(&r20);
  emxFree_creal_T(&r18);
  rdivide(c_rTM, r21, rTM);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);

  /*          % Find the layer containing the transmitter: */
  /* for codegen, hardcoding */
  /*     iTxLayer =2;iRxLayer =2; */
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  i4 = b_index->size[0] * b_index->size[1];
  b_index->size[0] = 1;
  b_index->size[1] = z->size[1];
  emxEnsureCapacity((emxArray__common *)b_index, i4, (int32_T)sizeof(boolean_T),
                    &r_emlrtRTEI);
  loop_ub = z->size[0] * z->size[1];
  emxFree_creal_T(&r21);
  emxFree_creal_T(&c_rTM);
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_index->data[i4] = (z->data[i4] < 0.0);
  }

  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  k = muIntScalarMin_sint32(1, b_index->size[1]);
  if (k <= b_index->size[1]) {
  } else {
    emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m2 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m2);
    error(b_y, &t_emlrtMCI);
    emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  }

  idx = 0;
  i4 = ii->size[0] * ii->size[1];
  ii->size[0] = 1;
  ii->size[1] = k;
  emxEnsureCapacity((emxArray__common *)ii, i4, (int32_T)sizeof(int32_T),
                    &s_emlrtRTEI);
  emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  i = b_index->size[1];
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (i > 0)) {
    guard2 = FALSE;
    if (b_index->data[i - 1]) {
      idx++;
      ii->data[idx - 1] = i;
      if (idx >= k) {
        exitg2 = TRUE;
      } else {
        guard2 = TRUE;
      }
    } else {
      guard2 = TRUE;
    }

    if (guard2 == TRUE) {
      i--;
    }
  }

  if (idx <= k) {
  } else {
    emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m2 = mxCreateString("Assertion failed.");
    emlrtAssign(&c_y, m2);
    error(c_y, &u_emlrtMCI);
    emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (k == 1) {
    if (idx == 0) {
      i4 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i4, (int32_T)sizeof(int32_T),
                        &r_emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      loop_ub = -1;
    } else {
      loop_ub = 0;
    }

    emxInit_int32_T(&r22, 1, &r_emlrtRTEI, TRUE);
    i4 = r22->size[0];
    r22->size[0] = loop_ub + 1;
    emxEnsureCapacity((emxArray__common *)r22, i4, (int32_T)sizeof(int32_T),
                      &r_emlrtRTEI);
    i4 = 0;
    while (i4 <= loop_ub) {
      r22->data[0] = 1;
      i4 = 1;
    }

    b_emxInit_int32_T(&b_ii, 2, &r_emlrtRTEI, TRUE);
    i = r22->size[0];
    i4 = b_ii->size[0] * b_ii->size[1];
    b_ii->size[0] = 1;
    b_ii->size[1] = i;
    emxEnsureCapacity((emxArray__common *)b_ii, i4, (int32_T)sizeof(int32_T),
                      &r_emlrtRTEI);
    for (i4 = 0; i4 < i; i4++) {
      i5 = 0;
      while (i5 <= 0) {
        b_ii->data[b_ii->size[0] * i4] = ii->data[r22->data[i4] - 1];
        i5 = 1;
      }
    }

    emxFree_int32_T(&r22);
    i4 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = b_ii->size[1];
    emxEnsureCapacity((emxArray__common *)ii, i4, (int32_T)sizeof(int32_T),
                      &r_emlrtRTEI);
    loop_ub = b_ii->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      ii->data[ii->size[0] * i4] = b_ii->data[b_ii->size[0] * i4];
    }

    emxFree_int32_T(&b_ii);
    emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
    n = ii->size[1];
    i4 = ii->size[1];
    i4 += (i4 < 0);
    if (i4 >= 0) {
      i = (int32_T)((uint32_T)i4 >> 1);
    } else {
      i = ~(int32_T)((uint32_T)~i4 >> 1);
    }

    emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 1; k <= i; k++) {
      idx = ii->data[k - 1];
      ii->data[k - 1] = ii->data[n - k];
      ii->data[n - k] = idx;
    }

    emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_real_T(&iTxLayer, 2, &ab_emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  i4 = iTxLayer->size[0] * iTxLayer->size[1];
  iTxLayer->size[0] = 1;
  iTxLayer->size[1] = ii->size[1];
  emxEnsureCapacity((emxArray__common *)iTxLayer, i4, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  loop_ub = ii->size[0] * ii->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    iTxLayer->data[i4] = ii->data[i4];
  }

  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  if (iTxLayer->size[1] == 0) {
    i4 = iTxLayer->size[0] * iTxLayer->size[1];
    iTxLayer->size[0] = 1;
    iTxLayer->size[1] = 1;
    emxEnsureCapacity((emxArray__common *)iTxLayer, i4, (int32_T)sizeof(real_T),
                      &r_emlrtRTEI);
    iTxLayer->data[0] = z->size[1];

    /*  in the last layer */
  }

  /*  Find the layer containing the receiver: */
  /*  */
  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  i4 = b_index->size[0] * b_index->size[1];
  b_index->size[0] = 1;
  b_index->size[1] = z->size[1];
  emxEnsureCapacity((emxArray__common *)b_index, i4, (int32_T)sizeof(boolean_T),
                    &r_emlrtRTEI);
  loop_ub = z->size[0] * z->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_index->data[i4] = (z->data[i4] < zRx);
  }

  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  k = muIntScalarMin_sint32(1, b_index->size[1]);
  if (k <= b_index->size[1]) {
  } else {
    emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
    d_y = NULL;
    m2 = mxCreateString("Assertion failed.");
    emlrtAssign(&d_y, m2);
    error(d_y, &t_emlrtMCI);
    emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  }

  idx = 0;
  i4 = ii->size[0] * ii->size[1];
  ii->size[0] = 1;
  ii->size[1] = k;
  emxEnsureCapacity((emxArray__common *)ii, i4, (int32_T)sizeof(int32_T),
                    &s_emlrtRTEI);
  emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  i = b_index->size[1];
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i > 0)) {
    guard1 = FALSE;
    if (b_index->data[i - 1]) {
      idx++;
      ii->data[idx - 1] = i;
      if (idx >= k) {
        exitg1 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      i--;
    }
  }

  emxFree_boolean_T(&b_index);
  if (idx <= k) {
  } else {
    emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m2 = mxCreateString("Assertion failed.");
    emlrtAssign(&e_y, m2);
    error(e_y, &u_emlrtMCI);
    emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (k == 1) {
    if (idx == 0) {
      i4 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i4, (int32_T)sizeof(int32_T),
                        &r_emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      loop_ub = -1;
    } else {
      loop_ub = 0;
    }

    emxInit_int32_T(&r23, 1, &r_emlrtRTEI, TRUE);
    i4 = r23->size[0];
    r23->size[0] = loop_ub + 1;
    emxEnsureCapacity((emxArray__common *)r23, i4, (int32_T)sizeof(int32_T),
                      &r_emlrtRTEI);
    i4 = 0;
    while (i4 <= loop_ub) {
      r23->data[0] = 1;
      i4 = 1;
    }

    b_emxInit_int32_T(&c_ii, 2, &r_emlrtRTEI, TRUE);
    i = r23->size[0];
    i4 = c_ii->size[0] * c_ii->size[1];
    c_ii->size[0] = 1;
    c_ii->size[1] = i;
    emxEnsureCapacity((emxArray__common *)c_ii, i4, (int32_T)sizeof(int32_T),
                      &r_emlrtRTEI);
    for (i4 = 0; i4 < i; i4++) {
      i5 = 0;
      while (i5 <= 0) {
        c_ii->data[c_ii->size[0] * i4] = ii->data[r23->data[i4] - 1];
        i5 = 1;
      }
    }

    emxFree_int32_T(&r23);
    i4 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = c_ii->size[1];
    emxEnsureCapacity((emxArray__common *)ii, i4, (int32_T)sizeof(int32_T),
                      &r_emlrtRTEI);
    loop_ub = c_ii->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      ii->data[ii->size[0] * i4] = c_ii->data[c_ii->size[0] * i4];
    }

    emxFree_int32_T(&c_ii);
    emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
    n = ii->size[1];
    i4 = ii->size[1];
    i4 += (i4 < 0);
    if (i4 >= 0) {
      i = (int32_T)((uint32_T)i4 >> 1);
    } else {
      i = ~(int32_T)((uint32_T)~i4 >> 1);
    }

    emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 1; k <= i; k++) {
      idx = ii->data[k - 1];
      ii->data[k - 1] = ii->data[n - k];
      ii->data[n - k] = idx;
    }

    emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_real_T(&iRxLayer, 2, &bb_emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  i4 = iRxLayer->size[0] * iRxLayer->size[1];
  iRxLayer->size[0] = 1;
  iRxLayer->size[1] = ii->size[1];
  emxEnsureCapacity((emxArray__common *)iRxLayer, i4, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  loop_ub = ii->size[0] * ii->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    iRxLayer->data[i4] = ii->data[i4];
  }

  emxFree_int32_T(&ii);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  if (iRxLayer->size[1] == 0) {
    i4 = iRxLayer->size[0] * iRxLayer->size[1];
    iRxLayer->size[0] = 1;
    iRxLayer->size[1] = 1;
    emxEnsureCapacity((emxArray__common *)iRxLayer, i4, (int32_T)sizeof(real_T),
                      &r_emlrtRTEI);
    iRxLayer->data[0] = z->size[1];

    /*  in the last layer */
  }

  if (iTxLayer->data[0] != iRxLayer->data[0]) {
    beep(&m_emlrtMCI);
    f_y = NULL;
    m2 = mxCreateCharArray(2, iv23);
    memcpy(&cv13[0], &cv14[0], 78U * sizeof(char_T));
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 78, m2, cv13);
    emlrtAssign(&f_y, m2);
    disp(f_y, &n_emlrtMCI);
  } else {
    /*  kernels */
    /*  TE mode, pzI */
    emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
    stacks(pzI, iTxLayer->data[0], rTE, z, omega, &gC_TM, &Rs_d);
    emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
    i4 = pzI->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    d_pzI = pzI->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &wd_emlrtBCI,
      emlrtRootTLSGlobal) - 1];
    get_curly_R(gC_TM, Rs_d, d_pzI, zRx, z, iTxLayer->data[0], omega, &gA_TM,
                &curlyRD, &gC_TM, &Rs_d);
    emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
    i4 = pzI->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &jd_emlrtBCI,
      emlrtRootTLSGlobal);
    br = pzI->data[(int32_T)iTxLayer->data[0] - 1].re;
    bi = pzI->data[(int32_T)iTxLayer->data[0] - 1].im;
    if (bi == 0.0) {
      re = 1.2566370614359173E-6 / br;
      y = 0.0;
    } else if (br == 0.0) {
      re = 0.0;
      y = -(1.2566370614359173E-6 / bi);
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        re = (1.2566370614359173E-6 + s * 0.0) / y;
        y = (0.0 - s * 1.2566370614359173E-6) / y;
      } else if (y == brm) {
        if (br > 0.0) {
          y = 0.5;
        } else {
          y = -0.5;
        }

        if (bi > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }

        re = 1.2566370614359173E-6 * y / brm;
        y = (-0.0 - 1.2566370614359173E-6 * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        re = s * 1.2566370614359173E-6 / y;
        y = (s * 0.0 - 1.2566370614359173E-6) / y;
      }
    }

    gA_TE_re = re * gA_TM.re - y * gA_TM.im;
    gA_TE_im = re * gA_TM.im + y * gA_TM.re;

    /* [Rs_uH,Rs_dH]     = stacks(pzI,iTxLayer,-rTE,z); */
    /*  TM mode, pzII */
    emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
    stacks(pzII, iTxLayer->data[0], rTM, z, omega, &gC_TM, &Rs_d);
    emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    i4 = pzII->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    d_pzI = pzII->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &xd_emlrtBCI,
      emlrtRootTLSGlobal) - 1];
    get_curly_R(gC_TM, Rs_d, d_pzI, zRx, z, iTxLayer->data[0], omega, &gA_TM,
                &b_curlyRD, &curlyRB, &Rs_d);
    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    i4 = pzII->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &kd_emlrtBCI,
      emlrtRootTLSGlobal);
    i4 = epsc->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &ld_emlrtBCI,
      emlrtRootTLSGlobal);
    re = pzII->data[(int32_T)iTxLayer->data[0] - 1].re;
    ai = pzII->data[(int32_T)iTxLayer->data[0] - 1].im;
    br = epsc->data[epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].re;
    bi = epsc->data[epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        pzII_re = re / br;
        s = 0.0;
      } else if (re == 0.0) {
        pzII_re = 0.0;
        s = ai / br;
      } else {
        pzII_re = re / br;
        s = ai / br;
      }
    } else if (br == 0.0) {
      if (re == 0.0) {
        pzII_re = ai / bi;
        s = 0.0;
      } else if (ai == 0.0) {
        pzII_re = 0.0;
        s = -(re / bi);
      } else {
        pzII_re = ai / bi;
        s = -(re / bi);
      }
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        pzII_re = (re + s * ai) / y;
        s = (ai - s * re) / y;
      } else if (y == brm) {
        if (br > 0.0) {
          y = 0.5;
        } else {
          y = -0.5;
        }

        if (bi > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }

        pzII_re = (re * y + ai * s) / brm;
        s = (ai * y - re * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        pzII_re = (s * re + ai) / y;
        s = (s * ai - re) / y;
      }
    }

    y = gA_TM.re;
    re = gA_TM.im;
    gA_TM.re = pzII_re * gA_TM.re - s * gA_TM.im;
    gA_TM.im = pzII_re * re + s * y;
    i4 = epsc->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &md_emlrtBCI,
      emlrtRootTLSGlobal);
    i4 = pzII->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &nd_emlrtBCI,
      emlrtRootTLSGlobal);
    re = epsc->data[epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].re;
    ai = epsc->data[epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].im;
    br = pzII->data[(int32_T)iTxLayer->data[0] - 1].re;
    bi = pzII->data[(int32_T)iTxLayer->data[0] - 1].im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        epsc_re = re / br;
        y = 0.0;
      } else if (re == 0.0) {
        epsc_re = 0.0;
        y = ai / br;
      } else {
        epsc_re = re / br;
        y = ai / br;
      }
    } else if (br == 0.0) {
      if (re == 0.0) {
        epsc_re = ai / bi;
        y = 0.0;
      } else if (ai == 0.0) {
        epsc_re = 0.0;
        y = -(re / bi);
      } else {
        epsc_re = ai / bi;
        y = -(re / bi);
      }
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        epsc_re = (re + s * ai) / y;
        y = (ai - s * re) / y;
      } else if (y == brm) {
        if (br > 0.0) {
          y = 0.5;
        } else {
          y = -0.5;
        }

        if (bi > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }

        epsc_re = (re * y + ai * s) / brm;
        y = (ai * y - re * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        epsc_re = (s * re + ai) / y;
        y = (s * ai - re) / y;
      }
    }

    gC_TM.re = epsc_re * Rs_d.re - y * Rs_d.im;
    gC_TM.im = epsc_re * Rs_d.im + y * Rs_d.re;

    /* [Rs_uH,Rs_dH]     = stacks(pzII,iTxLayer,-rTM,z); */
    /*  Kernels according to Loseth, without the bessel functions multiplied */
    /* Er */
    i4 = epsc->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &od_emlrtBCI,
      emlrtRootTLSGlobal);
    re = -krho * gA_TM.re;
    ai = -krho * gA_TM.im;
    if (ai == 0.0) {
      y = re / 4.0;
      re = 0.0;
    } else if (re == 0.0) {
      y = 0.0;
      re = ai / 4.0;
    } else {
      y = re / 4.0;
      re = ai / 4.0;
    }

    if (re == 0.0) {
      ErKernels[0].re = y / 3.1415926535897931;
      ErKernels[0].im = 0.0;
    } else if (y == 0.0) {
      ErKernels[0].re = 0.0;
      ErKernels[0].im = re / 3.1415926535897931;
    } else {
      ErKernels[0].re = y / 3.1415926535897931;
      ErKernels[0].im = re / 3.1415926535897931;
    }

    re = -(gA_TE_re - gA_TM.re);
    ai = -(gA_TE_im - gA_TM.im);
    if (ai == 0.0) {
      re /= 4.0;
      y = 0.0;
    } else if (re == 0.0) {
      re = 0.0;
      y = ai / 4.0;
    } else {
      re /= 4.0;
      y = ai / 4.0;
    }

    if (y == 0.0) {
      ErKernels[1].re = re / 3.1415926535897931;
      ErKernels[1].im = 0.0;
    } else if (re == 0.0) {
      ErKernels[1].re = 0.0;
      ErKernels[1].im = y / 3.1415926535897931;
    } else {
      ErKernels[1].re = re / 3.1415926535897931;
      ErKernels[1].im = y / 3.1415926535897931;
    }

    y = krho * krho * curlyRB.re;
    re = krho * krho * curlyRB.im;
    epsc_re = y * 0.0 - re;
    re = y + re * 0.0;
    br = 12.566370614359172 * omega * epsc->data[1 + epsc->size[0] * ((int32_T)
      iTxLayer->data[0] - 1)].re;
    bi = 12.566370614359172 * omega * epsc->data[1 + epsc->size[0] * ((int32_T)
      iTxLayer->data[0] - 1)].im;
    if (bi == 0.0) {
      if (re == 0.0) {
        ErKernels[2].re = epsc_re / br;
        ErKernels[2].im = 0.0;
      } else if (epsc_re == 0.0) {
        ErKernels[2].re = 0.0;
        ErKernels[2].im = re / br;
      } else {
        ErKernels[2].re = epsc_re / br;
        ErKernels[2].im = re / br;
      }
    } else if (br == 0.0) {
      if (epsc_re == 0.0) {
        ErKernels[2].re = re / bi;
        ErKernels[2].im = 0.0;
      } else if (re == 0.0) {
        ErKernels[2].re = 0.0;
        ErKernels[2].im = -(epsc_re / bi);
      } else {
        ErKernels[2].re = re / bi;
        ErKernels[2].im = -(epsc_re / bi);
      }
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        ErKernels[2].re = (epsc_re + s * re) / y;
        ErKernels[2].im = (re - s * epsc_re) / y;
      } else if (y == brm) {
        if (br > 0.0) {
          y = 0.5;
        } else {
          y = -0.5;
        }

        if (bi > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }

        ErKernels[2].re = (epsc_re * y + re * s) / brm;
        ErKernels[2].im = (re * y - epsc_re * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        ErKernels[2].re = (s * epsc_re + re) / y;
        ErKernels[2].im = (s * re - epsc_re) / y;
      }
    }

    /* Eb */
    re = krho * gA_TE_re;
    ai = krho * gA_TE_im;
    if (ai == 0.0) {
      y = re / 4.0;
      re = 0.0;
    } else if (re == 0.0) {
      y = 0.0;
      re = ai / 4.0;
    } else {
      y = re / 4.0;
      re = ai / 4.0;
    }

    if (re == 0.0) {
      EbKernels[0].re = y / 3.1415926535897931;
      EbKernels[0].im = 0.0;
    } else if (y == 0.0) {
      EbKernels[0].re = 0.0;
      EbKernels[0].im = re / 3.1415926535897931;
    } else {
      EbKernels[0].re = y / 3.1415926535897931;
      EbKernels[0].im = re / 3.1415926535897931;
    }

    re = -(gA_TE_re - gA_TM.re);
    ai = -(gA_TE_im - gA_TM.im);
    if (ai == 0.0) {
      re /= 4.0;
      y = 0.0;
    } else if (re == 0.0) {
      re = 0.0;
      y = ai / 4.0;
    } else {
      re /= 4.0;
      y = ai / 4.0;
    }

    if (y == 0.0) {
      EbKernels[1].re = re / 3.1415926535897931;
      EbKernels[1].im = 0.0;
    } else if (re == 0.0) {
      EbKernels[1].re = 0.0;
      EbKernels[1].im = y / 3.1415926535897931;
    } else {
      EbKernels[1].re = re / 3.1415926535897931;
      EbKernels[1].im = y / 3.1415926535897931;
    }

    /* Hr */
    re = -krho * curlyRD.re;
    ai = -krho * curlyRD.im;
    if (ai == 0.0) {
      y = re / 4.0;
      re = 0.0;
    } else if (re == 0.0) {
      y = 0.0;
      re = ai / 4.0;
    } else {
      y = re / 4.0;
      re = ai / 4.0;
    }

    if (re == 0.0) {
      HrKernels[0].re = y / 3.1415926535897931;
      HrKernels[0].im = 0.0;
    } else if (y == 0.0) {
      HrKernels[0].re = 0.0;
      HrKernels[0].im = re / 3.1415926535897931;
    } else {
      HrKernels[0].re = y / 3.1415926535897931;
      HrKernels[0].im = re / 3.1415926535897931;
    }

    re = curlyRD.re - b_curlyRD.re;
    ai = curlyRD.im - b_curlyRD.im;
    if (ai == 0.0) {
      re /= 4.0;
      y = 0.0;
    } else if (re == 0.0) {
      re = 0.0;
      y = ai / 4.0;
    } else {
      re /= 4.0;
      y = ai / 4.0;
    }

    if (y == 0.0) {
      HrKernels[1].re = re / 3.1415926535897931;
      HrKernels[1].im = 0.0;
    } else if (re == 0.0) {
      HrKernels[1].re = 0.0;
      HrKernels[1].im = y / 3.1415926535897931;
    } else {
      HrKernels[1].re = re / 3.1415926535897931;
      HrKernels[1].im = y / 3.1415926535897931;
    }

    /* Hb */
    i4 = epsc->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &pd_emlrtBCI,
      emlrtRootTLSGlobal);
    re = -krho * b_curlyRD.re;
    ai = -krho * b_curlyRD.im;
    if (ai == 0.0) {
      y = re / 4.0;
      re = 0.0;
    } else if (re == 0.0) {
      y = 0.0;
      re = ai / 4.0;
    } else {
      y = re / 4.0;
      re = ai / 4.0;
    }

    if (re == 0.0) {
      HbKernels[0].re = y / 3.1415926535897931;
      HbKernels[0].im = 0.0;
    } else if (y == 0.0) {
      HbKernels[0].re = 0.0;
      HbKernels[0].im = re / 3.1415926535897931;
    } else {
      HbKernels[0].re = y / 3.1415926535897931;
      HbKernels[0].im = re / 3.1415926535897931;
    }

    re = -(curlyRD.re - b_curlyRD.re);
    ai = -(curlyRD.im - b_curlyRD.im);
    if (ai == 0.0) {
      re /= 4.0;
      y = 0.0;
    } else if (re == 0.0) {
      re = 0.0;
      y = ai / 4.0;
    } else {
      re /= 4.0;
      y = ai / 4.0;
    }

    if (y == 0.0) {
      HbKernels[1].re = re / 3.1415926535897931;
      HbKernels[1].im = 0.0;
    } else if (re == 0.0) {
      HbKernels[1].re = 0.0;
      HbKernels[1].im = y / 3.1415926535897931;
    } else {
      HbKernels[1].re = re / 3.1415926535897931;
      HbKernels[1].im = y / 3.1415926535897931;
    }

    y = krho * krho * gC_TM.re;
    re = krho * krho * gC_TM.im;
    epsc_re = y * 0.0 - re;
    re = y + re * 0.0;
    br = 12.566370614359172 * omega * epsc->data[1 + epsc->size[0] * ((int32_T)
      iTxLayer->data[0] - 1)].re;
    bi = 12.566370614359172 * omega * epsc->data[1 + epsc->size[0] * ((int32_T)
      iTxLayer->data[0] - 1)].im;
    if (bi == 0.0) {
      if (re == 0.0) {
        HbKernels[2].re = epsc_re / br;
        HbKernels[2].im = 0.0;
      } else if (epsc_re == 0.0) {
        HbKernels[2].re = 0.0;
        HbKernels[2].im = re / br;
      } else {
        HbKernels[2].re = epsc_re / br;
        HbKernels[2].im = re / br;
      }
    } else if (br == 0.0) {
      if (epsc_re == 0.0) {
        HbKernels[2].re = re / bi;
        HbKernels[2].im = 0.0;
      } else if (re == 0.0) {
        HbKernels[2].re = 0.0;
        HbKernels[2].im = -(epsc_re / bi);
      } else {
        HbKernels[2].re = re / bi;
        HbKernels[2].im = -(epsc_re / bi);
      }
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        HbKernels[2].re = (epsc_re + s * re) / y;
        HbKernels[2].im = (re - s * epsc_re) / y;
      } else if (y == brm) {
        if (br > 0.0) {
          y = 0.5;
        } else {
          y = -0.5;
        }

        if (bi > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }

        HbKernels[2].re = (epsc_re * y + re * s) / brm;
        HbKernels[2].im = (re * y - epsc_re * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        HbKernels[2].re = (s * epsc_re + re) / y;
        HbKernels[2].im = (s * re - epsc_re) / y;
      }
    }

    /* Ez */
    i4 = epsc->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &qd_emlrtBCI,
      emlrtRootTLSGlobal);
    i4 = epsc->size[1];
    i5 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &rd_emlrtBCI,
      emlrtRootTLSGlobal);
    epsc_re = epsc->data[1 + epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].
      re * epsc->data[1 + epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].re -
      epsc->data[1 + epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].im *
      epsc->data[1 + epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].im;
    y = epsc->data[1 + epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].re *
      epsc->data[1 + epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].im +
      epsc->data[1 + epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].im *
      epsc->data[1 + epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].re;
    re = -muDoubleScalarPower(krho, 3.0) * gC_TM.re;
    ai = -muDoubleScalarPower(krho, 3.0) * gC_TM.im;
    br = 12.566370614359172 * (omega * omega) * epsc_re;
    bi = 12.566370614359172 * (omega * omega) * y;
    if (bi == 0.0) {
      if (ai == 0.0) {
        EzKernels[0].re = re / br;
        EzKernels[0].im = 0.0;
      } else if (re == 0.0) {
        EzKernels[0].re = 0.0;
        EzKernels[0].im = ai / br;
      } else {
        EzKernels[0].re = re / br;
        EzKernels[0].im = ai / br;
      }
    } else if (br == 0.0) {
      if (re == 0.0) {
        EzKernels[0].re = ai / bi;
        EzKernels[0].im = 0.0;
      } else if (ai == 0.0) {
        EzKernels[0].re = 0.0;
        EzKernels[0].im = -(re / bi);
      } else {
        EzKernels[0].re = ai / bi;
        EzKernels[0].im = -(re / bi);
      }
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        EzKernels[0].re = (re + s * ai) / y;
        EzKernels[0].im = (ai - s * re) / y;
      } else if (y == brm) {
        if (br > 0.0) {
          y = 0.5;
        } else {
          y = -0.5;
        }

        if (bi > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }

        EzKernels[0].re = (re * y + ai * s) / brm;
        EzKernels[0].im = (ai * y - re * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        EzKernels[0].re = (s * re + ai) / y;
        EzKernels[0].im = (s * ai - re) / y;
      }
    }

    y = krho * krho * b_curlyRD.re;
    re = krho * krho * b_curlyRD.im;
    epsc_re = y * 0.0 - re;
    re = y + re * 0.0;
    br = 12.566370614359172 * omega * epsc->data[1 + epsc->size[0] * ((int32_T)
      iTxLayer->data[0] - 1)].re;
    bi = 12.566370614359172 * omega * epsc->data[1 + epsc->size[0] * ((int32_T)
      iTxLayer->data[0] - 1)].im;
    if (bi == 0.0) {
      if (re == 0.0) {
        EzKernels[1].re = epsc_re / br;
        EzKernels[1].im = 0.0;
      } else if (epsc_re == 0.0) {
        EzKernels[1].re = 0.0;
        EzKernels[1].im = re / br;
      } else {
        EzKernels[1].re = epsc_re / br;
        EzKernels[1].im = re / br;
      }
    } else if (br == 0.0) {
      if (epsc_re == 0.0) {
        EzKernels[1].re = re / bi;
        EzKernels[1].im = 0.0;
      } else if (re == 0.0) {
        EzKernels[1].re = 0.0;
        EzKernels[1].im = -(epsc_re / bi);
      } else {
        EzKernels[1].re = re / bi;
        EzKernels[1].im = -(epsc_re / bi);
      }
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        EzKernels[1].re = (epsc_re + s * re) / y;
        EzKernels[1].im = (re - s * epsc_re) / y;
      } else if (y == brm) {
        if (br > 0.0) {
          y = 0.5;
        } else {
          y = -0.5;
        }

        if (bi > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }

        EzKernels[1].re = (epsc_re * y + re * s) / brm;
        EzKernels[1].im = (re * y - epsc_re * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        EzKernels[1].re = (s * epsc_re + re) / y;
        EzKernels[1].im = (s * re - epsc_re) / y;
      }
    }

    /*  needs multiplication by 1i/omega/epsc(2,iTxLayer) after hankel  */
    /*  transform (done here) */
    /* Hz */
    y = krho * krho * gA_TE_re;
    re = krho * krho * gA_TE_im;
    epsc_re = y * 0.0 - re;
    re = y + re * 0.0;
    br = omega * 1.2566370614359173E-6 * 4.0 * 3.1415926535897931;
    if (re == 0.0) {
      HzKernels->re = epsc_re / br;
      HzKernels->im = 0.0;
    } else if (epsc_re == 0.0) {
      HzKernels->re = 0.0;
      HzKernels->im = re / br;
    } else {
      HzKernels->re = epsc_re / br;
      HzKernels->im = re / br;
    }

    /*  needs multiplication by 1i/omega/mu after hankel  */
    /*  transform (done here) */
    /*  we're done now */
  }

  emxFree_real_T(&iRxLayer);
  emxFree_real_T(&iTxLayer);
  emxFree_creal_T(&rTM);
  emxFree_creal_T(&rTE);
  emxFree_creal_T(&pzII);
  emxFree_creal_T(&pzI);
  emxFree_creal_T(&epsc);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void get_curly_R(const creal_T Rs_u, const creal_T Rs_d, const creal_T pz,
  real_T zR, const emxArray_real_T *z, real_T iTxLayer, real_T omega, creal_T
  *finRA, creal_T *finRD, creal_T *finRB, creal_T *finRC)
{
  int32_T i12;
  int32_T i13;
  int32_T i14;
  int32_T i15;
  real_T d;
  real_T re;
  real_T im;
  creal_T y;
  creal_T b_y;
  creal_T c_y;
  creal_T d_y;
  real_T r;
  real_T b_r;
  real_T b_re;
  real_T c_r;
  real_T d_r;
  real_T r_re;
  real_T r_im;

  /* global omega */
  i12 = z->size[1];
  i13 = (int32_T)emlrtIntegerCheckFastR2012b(iTxLayer + 1.0, &h_emlrtDCI,
    emlrtRootTLSGlobal);
  i14 = z->size[1];
  i15 = (int32_T)emlrtIntegerCheckFastR2012b(iTxLayer, &i_emlrtDCI,
    emlrtRootTLSGlobal);
  d = z->data[emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &hf_emlrtBCI,
    emlrtRootTLSGlobal) - 1] - z->data[emlrtDynamicBoundsCheckFastR2012b(i15, 1,
    i14, &if_emlrtBCI, emlrtRootTLSGlobal) - 1];
  if (zR >= 0.0) {
    i12 = z->size[1];
    i13 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &gf_emlrtBCI,
      emlrtRootTLSGlobal);
    i12 = z->size[1];
    i13 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &ff_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    y.re = zR * (re * pz.re - im * pz.im);
    y.im = zR * (re * pz.im + im * pz.re);
    c_exp(&y);
    re = omega * -0.0;
    im = -omega;
    b_y.re = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.re - im * pz.im));
    b_y.im = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.im + im * pz.re));
    c_exp(&b_y);
    re = omega * 0.0;
    im = omega;
    c_y.re = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.re -
      im * pz.im);
    c_y.im = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.im +
      im * pz.re);
    c_exp(&c_y);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y.re = d * (re * pz.re - im * pz.im);
    d_y.im = d * (re * pz.im + im * pz.re);
    c_exp(&d_y);
    re = 1.0 + (b_y.re * Rs_u.re - b_y.im * Rs_u.im);
    im = b_y.re * Rs_u.im + b_y.im * Rs_u.re;
    r = y.re + (c_y.re * Rs_d.re - c_y.im * Rs_d.im);
    b_r = y.im + (c_y.re * Rs_d.im + c_y.im * Rs_d.re);
    b_re = re * r - im * b_r;
    im = re * b_r + im * r;
    r = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    b_r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    c_r = 1.0 - (r * d_y.re - b_r * d_y.im);
    d_r = 0.0 - (r * d_y.im + b_r * d_y.re);
    if (d_r == 0.0) {
      if (im == 0.0) {
        finRA->re = b_re / c_r;
        finRA->im = 0.0;
      } else if (b_re == 0.0) {
        finRA->re = 0.0;
        finRA->im = im / c_r;
      } else {
        finRA->re = b_re / c_r;
        finRA->im = im / c_r;
      }
    } else if (c_r == 0.0) {
      if (b_re == 0.0) {
        finRA->re = im / d_r;
        finRA->im = 0.0;
      } else if (im == 0.0) {
        finRA->re = 0.0;
        finRA->im = -(b_re / d_r);
      } else {
        finRA->re = im / d_r;
        finRA->im = -(b_re / d_r);
      }
    } else {
      re = muDoubleScalarAbs(c_r);
      r = muDoubleScalarAbs(d_r);
      if (re > r) {
        b_r = d_r / c_r;
        r = c_r + b_r * d_r;
        finRA->re = (b_re + b_r * im) / r;
        finRA->im = (im - b_r * b_re) / r;
      } else if (r == re) {
        if (c_r > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (d_r > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRA->re = (b_re * b_r + im * r) / re;
        finRA->im = (im * b_r - b_re * r) / re;
      } else {
        b_r = c_r / d_r;
        r = d_r + b_r * c_r;
        finRA->re = (b_r * b_re + im) / r;
        finRA->im = (b_r * im - b_re) / r;
      }
    }

    i12 = z->size[1];
    i13 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &ef_emlrtBCI,
      emlrtRootTLSGlobal);
    i12 = z->size[1];
    i13 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &df_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    y.re = zR * (re * pz.re - im * pz.im);
    y.im = zR * (re * pz.im + im * pz.re);
    c_exp(&y);
    re = omega * -0.0;
    im = -omega;
    b_y.re = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.re - im * pz.im));
    b_y.im = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.im + im * pz.re));
    c_exp(&b_y);
    re = omega * 0.0;
    im = omega;
    c_y.re = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.re -
      im * pz.im);
    c_y.im = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.im +
      im * pz.re);
    c_exp(&c_y);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y.re = d * (re * pz.re - im * pz.im);
    d_y.im = d * (re * pz.im + im * pz.re);
    c_exp(&d_y);
    re = 1.0 - (b_y.re * -Rs_u.re - b_y.im * -Rs_u.im);
    im = 0.0 - (b_y.re * -Rs_u.im + b_y.im * -Rs_u.re);
    r = y.re + (c_y.re * -Rs_d.re - c_y.im * -Rs_d.im);
    b_r = y.im + (c_y.re * -Rs_d.im + c_y.im * -Rs_d.re);
    b_re = re * r - im * b_r;
    im = re * b_r + im * r;
    r = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    b_r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    c_r = 1.0 - (r * d_y.re - b_r * d_y.im);
    d_r = 0.0 - (r * d_y.im + b_r * d_y.re);
    if (d_r == 0.0) {
      if (im == 0.0) {
        finRD->re = b_re / c_r;
        finRD->im = 0.0;
      } else if (b_re == 0.0) {
        finRD->re = 0.0;
        finRD->im = im / c_r;
      } else {
        finRD->re = b_re / c_r;
        finRD->im = im / c_r;
      }
    } else if (c_r == 0.0) {
      if (b_re == 0.0) {
        finRD->re = im / d_r;
        finRD->im = 0.0;
      } else if (im == 0.0) {
        finRD->re = 0.0;
        finRD->im = -(b_re / d_r);
      } else {
        finRD->re = im / d_r;
        finRD->im = -(b_re / d_r);
      }
    } else {
      re = muDoubleScalarAbs(c_r);
      r = muDoubleScalarAbs(d_r);
      if (re > r) {
        b_r = d_r / c_r;
        r = c_r + b_r * d_r;
        finRD->re = (b_re + b_r * im) / r;
        finRD->im = (im - b_r * b_re) / r;
      } else if (r == re) {
        if (c_r > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (d_r > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRD->re = (b_re * b_r + im * r) / re;
        finRD->im = (im * b_r - b_re * r) / re;
      } else {
        b_r = c_r / d_r;
        r = d_r + b_r * c_r;
        finRD->re = (b_r * b_re + im) / r;
        finRD->im = (b_r * im - b_re) / r;
      }
    }

    i12 = z->size[1];
    i13 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &cf_emlrtBCI,
      emlrtRootTLSGlobal);
    i12 = z->size[1];
    i13 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &bf_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    y.re = zR * (re * pz.re - im * pz.im);
    y.im = zR * (re * pz.im + im * pz.re);
    c_exp(&y);
    re = omega * -0.0;
    im = -omega;
    b_y.re = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.re - im * pz.im));
    b_y.im = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.im + im * pz.re));
    c_exp(&b_y);
    re = omega * 0.0;
    im = omega;
    c_y.re = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.re -
      im * pz.im);
    c_y.im = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.im +
      im * pz.re);
    c_exp(&c_y);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y.re = d * (re * pz.re - im * pz.im);
    d_y.im = d * (re * pz.im + im * pz.re);
    c_exp(&d_y);
    re = 1.0 - (b_y.re * Rs_u.re - b_y.im * Rs_u.im);
    im = 0.0 - (b_y.re * Rs_u.im + b_y.im * Rs_u.re);
    r = y.re + (c_y.re * Rs_d.re - c_y.im * Rs_d.im);
    b_r = y.im + (c_y.re * Rs_d.im + c_y.im * Rs_d.re);
    b_re = re * r - im * b_r;
    im = re * b_r + im * r;
    r = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    b_r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    c_r = 1.0 - (r * d_y.re - b_r * d_y.im);
    d_r = 0.0 - (r * d_y.im + b_r * d_y.re);
    if (d_r == 0.0) {
      if (im == 0.0) {
        finRB->re = b_re / c_r;
        finRB->im = 0.0;
      } else if (b_re == 0.0) {
        finRB->re = 0.0;
        finRB->im = im / c_r;
      } else {
        finRB->re = b_re / c_r;
        finRB->im = im / c_r;
      }
    } else if (c_r == 0.0) {
      if (b_re == 0.0) {
        finRB->re = im / d_r;
        finRB->im = 0.0;
      } else if (im == 0.0) {
        finRB->re = 0.0;
        finRB->im = -(b_re / d_r);
      } else {
        finRB->re = im / d_r;
        finRB->im = -(b_re / d_r);
      }
    } else {
      re = muDoubleScalarAbs(c_r);
      r = muDoubleScalarAbs(d_r);
      if (re > r) {
        b_r = d_r / c_r;
        r = c_r + b_r * d_r;
        finRB->re = (b_re + b_r * im) / r;
        finRB->im = (im - b_r * b_re) / r;
      } else if (r == re) {
        if (c_r > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (d_r > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRB->re = (b_re * b_r + im * r) / re;
        finRB->im = (im * b_r - b_re * r) / re;
      } else {
        b_r = c_r / d_r;
        r = d_r + b_r * c_r;
        finRB->re = (b_r * b_re + im) / r;
        finRB->im = (b_r * im - b_re) / r;
      }
    }

    i12 = z->size[1];
    i13 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &af_emlrtBCI,
      emlrtRootTLSGlobal);
    i12 = z->size[1];
    i13 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &ye_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    y.re = zR * (re * pz.re - im * pz.im);
    y.im = zR * (re * pz.im + im * pz.re);
    c_exp(&y);
    re = omega * -0.0;
    im = -omega;
    b_y.re = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.re - im * pz.im));
    b_y.im = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.im + im * pz.re));
    c_exp(&b_y);
    re = omega * 0.0;
    im = omega;
    c_y.re = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.re -
      im * pz.im);
    c_y.im = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.im +
      im * pz.re);
    c_exp(&c_y);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y.re = d * (re * pz.re - im * pz.im);
    d_y.im = d * (re * pz.im + im * pz.re);
    c_exp(&d_y);
    re = 1.0 + (b_y.re * -Rs_u.re - b_y.im * -Rs_u.im);
    im = b_y.re * -Rs_u.im + b_y.im * -Rs_u.re;
    r = y.re + (c_y.re * -Rs_d.re - c_y.im * -Rs_d.im);
    b_r = y.im + (c_y.re * -Rs_d.im + c_y.im * -Rs_d.re);
    b_re = re * r - im * b_r;
    im = re * b_r + im * r;
    r = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    b_r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    c_r = 1.0 - (r * d_y.re - b_r * d_y.im);
    d_r = 0.0 - (r * d_y.im + b_r * d_y.re);
    if (d_r == 0.0) {
      if (im == 0.0) {
        finRC->re = b_re / c_r;
        finRC->im = 0.0;
      } else if (b_re == 0.0) {
        finRC->re = 0.0;
        finRC->im = im / c_r;
      } else {
        finRC->re = b_re / c_r;
        finRC->im = im / c_r;
      }
    } else if (c_r == 0.0) {
      if (b_re == 0.0) {
        finRC->re = im / d_r;
        finRC->im = 0.0;
      } else if (im == 0.0) {
        finRC->re = 0.0;
        finRC->im = -(b_re / d_r);
      } else {
        finRC->re = im / d_r;
        finRC->im = -(b_re / d_r);
      }
    } else {
      re = muDoubleScalarAbs(c_r);
      r = muDoubleScalarAbs(d_r);
      if (re > r) {
        b_r = d_r / c_r;
        d = c_r + b_r * d_r;
        finRC->re = (b_re + b_r * im) / d;
        finRC->im = (im - b_r * b_re) / d;
      } else if (r == re) {
        if (c_r > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (d_r > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRC->re = (b_re * b_r + im * r) / re;
        finRC->im = (im * b_r - b_re * r) / re;
      } else {
        b_r = c_r / d_r;
        d = d_r + b_r * c_r;
        finRC->re = (b_r * b_re + im) / d;
        finRC->im = (b_r * im - b_re) / d;
      }
    }
  } else {
    i12 = z->size[1];
    i13 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &xe_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    y.re = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.re - im *
      pz.im));
    y.im = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.im + im *
      pz.re));
    r = muDoubleScalarExp(y.re / 2.0);
    re = omega * -0.0;
    im = -omega;
    b_y.im = zR * (re * pz.im + im * pz.re);
    d_r = muDoubleScalarExp(zR * (re * pz.re - im * pz.im) / 2.0);
    i12 = z->size[1];
    i13 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &we_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * -0.0;
    im = -omega;
    c_y.re = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.re - im *
      pz.im);
    c_y.im = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.im + im *
      pz.re);
    b_r = muDoubleScalarExp(c_y.re / 2.0);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y.im = d * (re * pz.im + im * pz.re);
    c_r = muDoubleScalarExp(d * (re * pz.re - im * pz.im) / 2.0);
    r_re = r * (r * muDoubleScalarCos(y.im));
    r_im = r * (r * muDoubleScalarSin(y.im));
    r = b_r * (b_r * muDoubleScalarCos(c_y.im));
    b_r *= b_r * muDoubleScalarSin(c_y.im);
    re = 1.0 + (r_re * Rs_d.re - r_im * Rs_d.im);
    im = r_re * Rs_d.im + r_im * Rs_d.re;
    r_re = d_r * (d_r * muDoubleScalarCos(b_y.im)) + (r * Rs_u.re - b_r *
      Rs_u.im);
    r_im = d_r * (d_r * muDoubleScalarSin(b_y.im)) + (r * Rs_u.im + b_r *
      Rs_u.re);
    b_re = re * r_re - im * r_im;
    im = re * r_im + im * r_re;
    r = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    b_r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    r_re = c_r * (c_r * muDoubleScalarCos(d_y.im));
    r_im = c_r * (c_r * muDoubleScalarSin(d_y.im));
    c_r = 1.0 - (r * r_re - b_r * r_im);
    d_r = 0.0 - (r * r_im + b_r * r_re);
    if (d_r == 0.0) {
      if (im == 0.0) {
        finRA->re = b_re / c_r;
        finRA->im = 0.0;
      } else if (b_re == 0.0) {
        finRA->re = 0.0;
        finRA->im = im / c_r;
      } else {
        finRA->re = b_re / c_r;
        finRA->im = im / c_r;
      }
    } else if (c_r == 0.0) {
      if (b_re == 0.0) {
        finRA->re = im / d_r;
        finRA->im = 0.0;
      } else if (im == 0.0) {
        finRA->re = 0.0;
        finRA->im = -(b_re / d_r);
      } else {
        finRA->re = im / d_r;
        finRA->im = -(b_re / d_r);
      }
    } else {
      re = muDoubleScalarAbs(c_r);
      r = muDoubleScalarAbs(d_r);
      if (re > r) {
        b_r = d_r / c_r;
        r = c_r + b_r * d_r;
        finRA->re = (b_re + b_r * im) / r;
        finRA->im = (im - b_r * b_re) / r;
      } else if (r == re) {
        if (c_r > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (d_r > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRA->re = (b_re * b_r + im * r) / re;
        finRA->im = (im * b_r - b_re * r) / re;
      } else {
        b_r = c_r / d_r;
        r = d_r + b_r * c_r;
        finRA->re = (b_r * b_re + im) / r;
        finRA->im = (b_r * im - b_re) / r;
      }
    }

    i12 = z->size[1];
    i13 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &ve_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    y.re = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.re - im *
      pz.im));
    y.im = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.im + im *
      pz.re));
    r = muDoubleScalarExp(y.re / 2.0);
    re = omega * -0.0;
    im = -omega;
    b_y.im = zR * (re * pz.im + im * pz.re);
    d_r = muDoubleScalarExp(zR * (re * pz.re - im * pz.im) / 2.0);
    i12 = z->size[1];
    i13 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &ue_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * -0.0;
    im = -omega;
    c_y.re = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.re - im *
      pz.im);
    c_y.im = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.im + im *
      pz.re);
    b_r = muDoubleScalarExp(c_y.re / 2.0);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y.im = d * (re * pz.im + im * pz.re);
    c_r = muDoubleScalarExp(d * (re * pz.re - im * pz.im) / 2.0);
    r_re = r * (r * muDoubleScalarCos(y.im));
    r_im = r * (r * muDoubleScalarSin(y.im));
    r = b_r * (b_r * muDoubleScalarCos(c_y.im));
    b_r *= b_r * muDoubleScalarSin(c_y.im);
    re = -1.0 + (r_re * -Rs_d.re - r_im * -Rs_d.im);
    im = r_re * -Rs_d.im + r_im * -Rs_d.re;
    r_re = d_r * (d_r * muDoubleScalarCos(b_y.im)) + (r * -Rs_u.re - b_r *
      -Rs_u.im);
    r_im = d_r * (d_r * muDoubleScalarSin(b_y.im)) + (r * -Rs_u.im + b_r *
      -Rs_u.re);
    b_re = re * r_re - im * r_im;
    im = re * r_im + im * r_re;
    r = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    b_r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    r_re = c_r * (c_r * muDoubleScalarCos(d_y.im));
    r_im = c_r * (c_r * muDoubleScalarSin(d_y.im));
    c_r = 1.0 - (r * r_re - b_r * r_im);
    d_r = 0.0 - (r * r_im + b_r * r_re);
    if (d_r == 0.0) {
      if (im == 0.0) {
        finRD->re = b_re / c_r;
        finRD->im = 0.0;
      } else if (b_re == 0.0) {
        finRD->re = 0.0;
        finRD->im = im / c_r;
      } else {
        finRD->re = b_re / c_r;
        finRD->im = im / c_r;
      }
    } else if (c_r == 0.0) {
      if (b_re == 0.0) {
        finRD->re = im / d_r;
        finRD->im = 0.0;
      } else if (im == 0.0) {
        finRD->re = 0.0;
        finRD->im = -(b_re / d_r);
      } else {
        finRD->re = im / d_r;
        finRD->im = -(b_re / d_r);
      }
    } else {
      re = muDoubleScalarAbs(c_r);
      r = muDoubleScalarAbs(d_r);
      if (re > r) {
        b_r = d_r / c_r;
        r = c_r + b_r * d_r;
        finRD->re = (b_re + b_r * im) / r;
        finRD->im = (im - b_r * b_re) / r;
      } else if (r == re) {
        if (c_r > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (d_r > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRD->re = (b_re * b_r + im * r) / re;
        finRD->im = (im * b_r - b_re * r) / re;
      } else {
        b_r = c_r / d_r;
        r = d_r + b_r * c_r;
        finRD->re = (b_r * b_re + im) / r;
        finRD->im = (b_r * im - b_re) / r;
      }
    }

    i12 = z->size[1];
    i13 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &te_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    y.re = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.re - im *
      pz.im));
    y.im = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.im + im *
      pz.re));
    r = muDoubleScalarExp(y.re / 2.0);
    re = omega * -0.0;
    im = -omega;
    b_y.im = zR * (re * pz.im + im * pz.re);
    d_r = muDoubleScalarExp(zR * (re * pz.re - im * pz.im) / 2.0);
    i12 = z->size[1];
    i13 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &se_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * -0.0;
    im = -omega;
    c_y.re = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.re - im *
      pz.im);
    c_y.im = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.im + im *
      pz.re);
    b_r = muDoubleScalarExp(c_y.re / 2.0);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y.im = d * (re * pz.im + im * pz.re);
    c_r = muDoubleScalarExp(d * (re * pz.re - im * pz.im) / 2.0);
    r_re = r * (r * muDoubleScalarCos(y.im));
    r_im = r * (r * muDoubleScalarSin(y.im));
    r = b_r * (b_r * muDoubleScalarCos(c_y.im));
    b_r *= b_r * muDoubleScalarSin(c_y.im);
    re = -1.0 + (r_re * Rs_d.re - r_im * Rs_d.im);
    im = r_re * Rs_d.im + r_im * Rs_d.re;
    r_re = d_r * (d_r * muDoubleScalarCos(b_y.im)) + (r * Rs_u.re - b_r *
      Rs_u.im);
    r_im = d_r * (d_r * muDoubleScalarSin(b_y.im)) + (r * Rs_u.im + b_r *
      Rs_u.re);
    b_re = re * r_re - im * r_im;
    im = re * r_im + im * r_re;
    r = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    b_r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    r_re = c_r * (c_r * muDoubleScalarCos(d_y.im));
    r_im = c_r * (c_r * muDoubleScalarSin(d_y.im));
    c_r = 1.0 - (r * r_re - b_r * r_im);
    d_r = 0.0 - (r * r_im + b_r * r_re);
    if (d_r == 0.0) {
      if (im == 0.0) {
        finRB->re = b_re / c_r;
        finRB->im = 0.0;
      } else if (b_re == 0.0) {
        finRB->re = 0.0;
        finRB->im = im / c_r;
      } else {
        finRB->re = b_re / c_r;
        finRB->im = im / c_r;
      }
    } else if (c_r == 0.0) {
      if (b_re == 0.0) {
        finRB->re = im / d_r;
        finRB->im = 0.0;
      } else if (im == 0.0) {
        finRB->re = 0.0;
        finRB->im = -(b_re / d_r);
      } else {
        finRB->re = im / d_r;
        finRB->im = -(b_re / d_r);
      }
    } else {
      re = muDoubleScalarAbs(c_r);
      r = muDoubleScalarAbs(d_r);
      if (re > r) {
        b_r = d_r / c_r;
        r = c_r + b_r * d_r;
        finRB->re = (b_re + b_r * im) / r;
        finRB->im = (im - b_r * b_re) / r;
      } else if (r == re) {
        if (c_r > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (d_r > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRB->re = (b_re * b_r + im * r) / re;
        finRB->im = (im * b_r - b_re * r) / re;
      } else {
        b_r = c_r / d_r;
        r = d_r + b_r * c_r;
        finRB->re = (b_r * b_re + im) / r;
        finRB->im = (b_r * im - b_re) / r;
      }
    }

    i12 = z->size[1];
    i13 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &re_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    y.re = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.re - im *
      pz.im));
    y.im = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.im + im *
      pz.re));
    r = muDoubleScalarExp(y.re / 2.0);
    re = omega * -0.0;
    im = -omega;
    b_y.im = zR * (re * pz.im + im * pz.re);
    d_r = muDoubleScalarExp(zR * (re * pz.re - im * pz.im) / 2.0);
    i12 = z->size[1];
    i13 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &qe_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * -0.0;
    im = -omega;
    c_y.re = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.re - im *
      pz.im);
    c_y.im = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.im + im *
      pz.re);
    b_r = muDoubleScalarExp(c_y.re / 2.0);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y.im = d * (re * pz.im + im * pz.re);
    c_r = muDoubleScalarExp(d * (re * pz.re - im * pz.im) / 2.0);
    r_re = r * (r * muDoubleScalarCos(y.im));
    r_im = r * (r * muDoubleScalarSin(y.im));
    r = b_r * (b_r * muDoubleScalarCos(c_y.im));
    b_r *= b_r * muDoubleScalarSin(c_y.im);
    re = 1.0 + (r_re * -Rs_d.re - r_im * -Rs_d.im);
    im = r_re * -Rs_d.im + r_im * -Rs_d.re;
    r_re = d_r * (d_r * muDoubleScalarCos(b_y.im)) + (r * -Rs_u.re - b_r *
      -Rs_u.im);
    r_im = d_r * (d_r * muDoubleScalarSin(b_y.im)) + (r * -Rs_u.im + b_r *
      -Rs_u.re);
    b_re = re * r_re - im * r_im;
    im = re * r_im + im * r_re;
    r = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    b_r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    r_re = c_r * (c_r * muDoubleScalarCos(d_y.im));
    r_im = c_r * (c_r * muDoubleScalarSin(d_y.im));
    c_r = 1.0 - (r * r_re - b_r * r_im);
    d_r = 0.0 - (r * r_im + b_r * r_re);
    if (d_r == 0.0) {
      if (im == 0.0) {
        finRC->re = b_re / c_r;
        finRC->im = 0.0;
      } else if (b_re == 0.0) {
        finRC->re = 0.0;
        finRC->im = im / c_r;
      } else {
        finRC->re = b_re / c_r;
        finRC->im = im / c_r;
      }
    } else if (c_r == 0.0) {
      if (b_re == 0.0) {
        finRC->re = im / d_r;
        finRC->im = 0.0;
      } else if (im == 0.0) {
        finRC->re = 0.0;
        finRC->im = -(b_re / d_r);
      } else {
        finRC->re = im / d_r;
        finRC->im = -(b_re / d_r);
      }
    } else {
      re = muDoubleScalarAbs(c_r);
      r = muDoubleScalarAbs(d_r);
      if (re > r) {
        b_r = d_r / c_r;
        d = c_r + b_r * d_r;
        finRC->re = (b_re + b_r * im) / d;
        finRC->im = (im - b_r * b_re) / d;
      } else if (r == re) {
        if (c_r > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (d_r > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRC->re = (b_re * b_r + im * r) / re;
        finRC->im = (im * b_r - b_re * r) / re;
      } else {
        b_r = c_r / d_r;
        d = d_r + b_r * c_r;
        finRC->re = (b_r * b_re + im) / d;
        finRC->im = (b_r * im - b_re) / d;
      }
    }
  }
}

static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_creal_T *ret)
{
  int32_T iv27[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv28[2];
  for (i = 0; i < 2; i++) {
    iv27[i] = -1;
    bv0[i] = TRUE;
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 2U,
    iv27, bv0, iv28);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv28[0];
  ret->size[1] = iv28[1];
  emxEnsureCapacity((emxArray__common *)ret, i, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, TRUE);
  emlrtDestroyArray(&src);
}

static const mxArray *spline(const mxArray *b, const mxArray *c, const mxArray
  *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m9;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m9, 3, pArrays, "spline",
    TRUE, location);
}

static void stacks(const emxArray_creal_T *pz, real_T iTxLayer, const
                   emxArray_creal_T *r, const emxArray_real_T *z, real_T omega,
                   creal_T *Rupperstack, creal_T *Rlowerstack)
{
  emxArray_real_T *dz;
  emxArray_real_T *d;
  int32_T i7;
  int32_T unnamed_idx_1;
  int32_T i8;
  int32_T i9;
  int32_T i10;
  emxArray_int32_T *r24;
  int32_T i11;
  emxArray_int32_T *r25;
  real_T br;
  real_T re;
  real_T im;
  real_T b_r;
  real_T y_re;
  real_T y_im;
  real_T c_r;
  real_T r_re;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&dz, 2, &hb_emlrtRTEI, TRUE);
  emxInit_real_T(&d, 2, &ib_emlrtRTEI, TRUE);

  /* subfunctions */
  /*  to recursively calculate up/down stack reflectivities in the source layer */
  /*  this can be used for either mode (TE/TM)   */
  /* global omega */
  /*  The last and first layer thicknesses are infinite */
  emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  diff(z, dz);
  emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  i7 = d->size[0] * d->size[1];
  d->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)d, i7, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  unnamed_idx_1 = z->size[1];
  i7 = d->size[0] * d->size[1];
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity((emxArray__common *)d, i7, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  unnamed_idx_1 = z->size[1];
  for (i7 = 0; i7 < unnamed_idx_1; i7++) {
    d->data[i7] = 0.0;
  }

  unnamed_idx_1 = z->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &je_emlrtBCI,
    emlrtRootTLSGlobal);
  d->data[0] = 1.0;
  i7 = dz->size[0] * dz->size[1];
  i7 = emlrtDynamicBoundsCheckFastR2012b(i7, 0, MAX_int32_T, &me_emlrtBCI,
    emlrtRootTLSGlobal);
  if (2 > i7) {
    i8 = 0;
    i7 = 0;
  } else {
    i9 = dz->size[0] * dz->size[1];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, i9, &le_emlrtBCI, emlrtRootTLSGlobal);
    i8 = 1;
    i7 = emlrtDynamicBoundsCheckFastR2012b(i7, 1, i9, &le_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  if (2 > z->size[1] - 1) {
    i9 = 0;
    i10 = 0;
  } else {
    i9 = d->size[1];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, i9, &ie_emlrtBCI, emlrtRootTLSGlobal);
    i9 = 1;
    i10 = d->size[1];
    unnamed_idx_1 = z->size[1] - 1;
    i10 = emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i10, &ie_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emxInit_int32_T(&r24, 1, &gb_emlrtRTEI, TRUE);
  unnamed_idx_1 = i10 - i9;
  i11 = i7 - i8;
  emlrtSizeEqCheck1DFastR2012b(unnamed_idx_1, i11, &u_emlrtECI,
    emlrtRootTLSGlobal);
  unnamed_idx_1 = r24->size[0];
  r24->size[0] = i10 - i9;
  emxEnsureCapacity((emxArray__common *)r24, unnamed_idx_1, (int32_T)sizeof
                    (int32_T), &gb_emlrtRTEI);
  unnamed_idx_1 = i10 - i9;
  for (i10 = 0; i10 < unnamed_idx_1; i10++) {
    r24->data[i10] = (i9 + i10) + 1;
  }

  emxInit_int32_T(&r25, 1, &gb_emlrtRTEI, TRUE);
  i9 = r25->size[0];
  r25->size[0] = i7 - i8;
  emxEnsureCapacity((emxArray__common *)r25, i9, (int32_T)sizeof(int32_T),
                    &gb_emlrtRTEI);
  unnamed_idx_1 = i7 - i8;
  for (i7 = 0; i7 < unnamed_idx_1; i7++) {
    r25->data[i7] = (i8 + i7) + 1;
  }

  unnamed_idx_1 = r25->size[0];
  for (i7 = 0; i7 < unnamed_idx_1; i7++) {
    d->data[r24->data[i7] - 1] = dz->data[r25->data[i7] - 1];
  }

  emxFree_int32_T(&r25);
  emxFree_int32_T(&r24);
  emxFree_real_T(&dz);
  i7 = d->size[1];
  i9 = z->size[1];
  d->data[emlrtDynamicBoundsCheckFastR2012b(i9, 1, i7, &ne_emlrtBCI,
    emlrtRootTLSGlobal) - 1] = 1.0;

  /*  Capital R is for a stack    */
  /*  Starting from the bottom up, for Rs_down     */
  Rlowerstack->re = 0.0;
  Rlowerstack->im = 0.0;
  i7 = (int32_T)-(iTxLayer + (-1.0 - ((real_T)z->size[1] - 1.0)));
  emlrtForLoopVectorCheckR2012b((real_T)z->size[1] - 1.0, -1.0, iTxLayer,
    mxDOUBLE_CLASS, i7, &vb_emlrtRTEI, emlrtRootTLSGlobal);
  unnamed_idx_1 = 0;
  while (unnamed_idx_1 <= i7 - 1) {
    br = ((real_T)z->size[1] - 1.0) + -(real_T)unnamed_idx_1;
    i9 = pz->size[1];
    i8 = (int32_T)(br + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i8, 1, i9, &ke_emlrtBCI,
      emlrtRootTLSGlobal);
    i9 = d->size[1];
    i8 = (int32_T)(br + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i8, 1, i9, &he_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega * 2.0;
    b_r = re * pz->data[(int32_T)(br + 1.0) - 1].re - im * pz->data[(int32_T)(br
      + 1.0) - 1].im;
    im = re * pz->data[(int32_T)(br + 1.0) - 1].im + im * pz->data[(int32_T)(br
      + 1.0) - 1].re;
    y_re = d->data[(int32_T)(br + 1.0) - 1] * b_r;
    y_im = d->data[(int32_T)(br + 1.0) - 1] * im;
    c_r = muDoubleScalarExp(y_re / 2.0);
    i9 = r->size[1];
    i8 = (int32_T)br;
    emlrtDynamicBoundsCheckFastR2012b(i8, 1, i9, &ge_emlrtBCI,
      emlrtRootTLSGlobal);
    i9 = pz->size[1];
    i8 = (int32_T)(br + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i8, 1, i9, &fe_emlrtBCI,
      emlrtRootTLSGlobal);
    i9 = d->size[1];
    i8 = (int32_T)(br + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i8, 1, i9, &ee_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega * 2.0;
    b_r = re * pz->data[(int32_T)(br + 1.0) - 1].re - im * pz->data[(int32_T)(br
      + 1.0) - 1].im;
    im = re * pz->data[(int32_T)(br + 1.0) - 1].im + im * pz->data[(int32_T)(br
      + 1.0) - 1].re;
    y_re = d->data[(int32_T)(br + 1.0) - 1] * b_r;
    re = d->data[(int32_T)(br + 1.0) - 1] * im;
    b_r = muDoubleScalarExp(y_re / 2.0);
    r_re = c_r * (c_r * muDoubleScalarCos(y_im));
    c_r *= c_r * muDoubleScalarSin(y_im);
    i9 = r->size[1];
    i8 = (int32_T)br;
    y_re = r->data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i9, &pe_emlrtBCI,
      emlrtRootTLSGlobal) - 1].re + (Rlowerstack->re * r_re - Rlowerstack->im *
      c_r);
    i9 = r->size[1];
    i8 = (int32_T)br;
    y_im = r->data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i9, &pe_emlrtBCI,
      emlrtRootTLSGlobal) - 1].im + (Rlowerstack->re * c_r + Rlowerstack->im *
      r_re);
    r_re = r->data[(int32_T)br - 1].re * Rlowerstack->re - r->data[(int32_T)br -
      1].im * Rlowerstack->im;
    c_r = r->data[(int32_T)br - 1].re * Rlowerstack->im + r->data[(int32_T)br -
      1].im * Rlowerstack->re;
    im = b_r * (b_r * muDoubleScalarCos(re));
    re = b_r * (b_r * muDoubleScalarSin(re));
    br = 1.0 + (r_re * im - c_r * re);
    im = r_re * re + c_r * im;
    if (im == 0.0) {
      if (y_im == 0.0) {
        Rlowerstack->re = y_re / br;
        Rlowerstack->im = 0.0;
      } else if (y_re == 0.0) {
        Rlowerstack->re = 0.0;
        Rlowerstack->im = y_im / br;
      } else {
        Rlowerstack->re = y_re / br;
        Rlowerstack->im = y_im / br;
      }
    } else if (br == 0.0) {
      if (y_re == 0.0) {
        Rlowerstack->re = y_im / im;
        Rlowerstack->im = 0.0;
      } else if (y_im == 0.0) {
        Rlowerstack->re = 0.0;
        Rlowerstack->im = -(y_re / im);
      } else {
        Rlowerstack->re = y_im / im;
        Rlowerstack->im = -(y_re / im);
      }
    } else {
      c_r = muDoubleScalarAbs(br);
      re = muDoubleScalarAbs(im);
      if (c_r > re) {
        b_r = im / br;
        re = br + b_r * im;
        Rlowerstack->re = (y_re + b_r * y_im) / re;
        Rlowerstack->im = (y_im - b_r * y_re) / re;
      } else if (re == c_r) {
        if (br > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (im > 0.0) {
          re = 0.5;
        } else {
          re = -0.5;
        }

        Rlowerstack->re = (y_re * b_r + y_im * re) / c_r;
        Rlowerstack->im = (y_im * b_r - y_re * re) / c_r;
      } else {
        b_r = br / im;
        re = im + b_r * br;
        Rlowerstack->re = (b_r * y_re + y_im) / re;
        Rlowerstack->im = (b_r * y_im - y_re) / re;
      }
    }

    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  Rupperstack->re = 0.0;
  Rupperstack->im = 0.0;

  /*  Starting from the top down for Rs_up */
  emlrtForLoopVectorCheckR2012b(2.0, 1.0, iTxLayer, mxDOUBLE_CLASS, (int32_T)
    (iTxLayer + -1.0), &ub_emlrtRTEI, emlrtRootTLSGlobal);
  unnamed_idx_1 = 0;
  while (unnamed_idx_1 <= (int32_T)(iTxLayer + -1.0) - 1) {
    i7 = pz->size[1];
    i9 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i9, 1, i7, &de_emlrtBCI,
      emlrtRootTLSGlobal);
    i7 = d->size[1];
    i9 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i9, 1, i7, &ce_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega * 2.0;
    b_r = re * pz->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].re -
      im * pz->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].im;
    im = re * pz->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].im +
      im * pz->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].re;
    y_re = d->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1] * b_r;
    y_im = d->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1] * im;
    c_r = muDoubleScalarExp(y_re / 2.0);
    i7 = r->size[1];
    i9 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i9, 1, i7, &be_emlrtBCI,
      emlrtRootTLSGlobal);
    i7 = pz->size[1];
    i9 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i9, 1, i7, &ae_emlrtBCI,
      emlrtRootTLSGlobal);
    i7 = d->size[1];
    i9 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i9, 1, i7, &yd_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega * 2.0;
    b_r = re * pz->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].re -
      im * pz->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].im;
    im = re * pz->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].im +
      im * pz->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].re;
    y_re = d->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1] * b_r;
    re = d->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1] * im;
    b_r = muDoubleScalarExp(y_re / 2.0);
    r_re = c_r * (c_r * muDoubleScalarCos(y_im));
    c_r *= c_r * muDoubleScalarSin(y_im);
    i7 = r->size[1];
    i9 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    y_re = -r->data[emlrtDynamicBoundsCheckFastR2012b(i9, 1, i7, &oe_emlrtBCI,
      emlrtRootTLSGlobal) - 1].re + (Rupperstack->re * r_re - Rupperstack->im *
      c_r);
    i7 = r->size[1];
    i9 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    y_im = -r->data[emlrtDynamicBoundsCheckFastR2012b(i9, 1, i7, &oe_emlrtBCI,
      emlrtRootTLSGlobal) - 1].im + (Rupperstack->re * c_r + Rupperstack->im *
      r_re);
    r_re = r->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].re *
      Rupperstack->re - r->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) -
      1].im * Rupperstack->im;
    c_r = r->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) - 1].re *
      Rupperstack->im + r->data[(int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0) -
      1].im * Rupperstack->re;
    im = b_r * (b_r * muDoubleScalarCos(re));
    re = b_r * (b_r * muDoubleScalarSin(re));
    br = 1.0 - (r_re * im - c_r * re);
    im = 0.0 - (r_re * re + c_r * im);
    if (im == 0.0) {
      if (y_im == 0.0) {
        Rupperstack->re = y_re / br;
        Rupperstack->im = 0.0;
      } else if (y_re == 0.0) {
        Rupperstack->re = 0.0;
        Rupperstack->im = y_im / br;
      } else {
        Rupperstack->re = y_re / br;
        Rupperstack->im = y_im / br;
      }
    } else if (br == 0.0) {
      if (y_re == 0.0) {
        Rupperstack->re = y_im / im;
        Rupperstack->im = 0.0;
      } else if (y_im == 0.0) {
        Rupperstack->re = 0.0;
        Rupperstack->im = -(y_re / im);
      } else {
        Rupperstack->re = y_im / im;
        Rupperstack->im = -(y_re / im);
      }
    } else {
      c_r = muDoubleScalarAbs(br);
      re = muDoubleScalarAbs(im);
      if (c_r > re) {
        b_r = im / br;
        re = br + b_r * im;
        Rupperstack->re = (y_re + b_r * y_im) / re;
        Rupperstack->im = (y_im - b_r * y_re) / re;
      } else if (re == c_r) {
        if (br > 0.0) {
          b_r = 0.5;
        } else {
          b_r = -0.5;
        }

        if (im > 0.0) {
          re = 0.5;
        } else {
          re = -0.5;
        }

        Rupperstack->re = (y_re * b_r + y_im * re) / c_r;
        Rupperstack->im = (y_im * b_r - y_re * re) / c_r;
      } else {
        b_r = br / im;
        re = im + b_r * br;
        Rupperstack->re = (b_r * y_re + y_im) / re;
        Rupperstack->im = (b_r * y_im - y_re) / re;
      }
    }

    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&d);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

void get_CSEM1D_FD_FHT_aniso_hed_ved(const emxArray_real_T *freqs, const
  emxArray_real_T *rRx, const emxArray_real_T *zRx, real_T zTx, const
  emxArray_real_T *z, const emxArray_real_T *sig, const char_T filterName[15],
  real_T lUseLaggedConv, real_T RxAzim, real_T TxDip, emxArray_creal_T *Er,
  emxArray_creal_T *Eb, emxArray_creal_T *Hr, emxArray_creal_T *Hb,
  emxArray_creal_T *Ez, emxArray_creal_T *Hz)
{
  emxArray_int32_T *idx;
  uint8_T uv0[2];
  int32_T i0;
  emxArray_real_T *lambdaR;
  int32_T k;
  int32_T b_k;
  int32_T i;
  int32_T nInf;
  int32_T nb;
  int32_T khi;
  real_T x;
  int32_T exitg3;
  real_T ndbl;
  int32_T exponent;
  boolean_T n_too_large;
  const mxArray *y;
  const mxArray *m0;
  emxArray_int32_T *r0;
  emxArray_real_T *b_lambdaR;
  int32_T i1;
  boolean_T b0;
  const mxArray *b_y;
  static const int32_T iv0[2] = { 1, 88 };

  char_T cv0[88];
  static const char_T cv1[88] = { 'W', 'a', 'r', 'n', 'i', 'n', 'g', ',', ' ',
    'n', 'o', 't', ' ', 'u', 's', 'i', 'n', 'g', ' ', 'l', 'a', 'g', 'g', 'e',
    'd', ' ', 'c', 'o', 'n', 'v', 'o', 'l', 'u', 't', 'i', 'o', 'n', ' ', 's',
    'i', 'n', 'c', 'e', ' ', 't', 'h', 'e', ' ', 'r', 'e', 'c', 'e', 'i', 'v',
    'e', 'r', 's', ' ', 'a', 'r', 'e', ' ', 'n', 'o', 't', ' ', 'a', 'l', 'l',
    ' ', 'a', 't', ' ', 't', 'h', 'e', ' ', 's', 'a', 'm', 'e', ' ', 'd', 'e',
    'p', 't', 'h', '.' };

  real_T Filter_J0[201];
  real_T Filter_J1[201];
  real_T iShift[201];
  static const real_T dv0[201] = { 0.0015020099, -0.010381698, 0.03684086,
    -0.08990338, 0.17082287, -0.2711575, 0.37649328, -0.47220779, 0.54778211,
    -0.59823517, 0.62345792, -0.62650437, 0.61197225, -0.58470174, 0.54911056,
    -0.50878862, 0.46652106, -0.42426479, 0.38339539, -0.34472345, 0.30876891,
    -0.27570439, 0.24562331, -0.21839207, 0.19393194, -0.17198163, 0.1524227,
    -0.13494946, 0.11946763, -0.10565871, 0.093482356, -0.082612525, 0.073077764,
    -0.064536481, 0.057096311, -0.05038486, 0.044599557, -0.039316995,
    0.034838545, -0.030664946, 0.027221072, -0.023901586, 0.021281567,
    -0.018612485, 0.016655386, -0.01447242, 0.013057748, -0.011226286,
    0.010266819, -0.0086738022, 0.0081103369, -0.0066573628, 0.006455119,
    -0.0050524015, 0.0051989014, -0.003759743, 0.0042640545, -0.0026994966,
    0.0035928001, -0.0018061291, 0.0031436471, -0.00102442, 0.0028888298,
    -0.00030605071, 0.0028125907, 0.00039337862, 0.0029102041, 0.0011170885,
    0.0031876763, 0.0019097806, 0.003662102, 0.0028203784, 0.0043626886,
    0.0039050025, 0.0053324923, 0.0052303399, 0.0066309348, 0.0068775541,
    0.008337169, 0.0089468565, 0.010554327, 0.011562766, 0.013414536,
    0.014879837, 0.017084241, 0.019088093, 0.021768514, 0.024416121, 0.027711234,
    0.031127164, 0.03518414, 0.039497913, 0.044449762, 0.049758433, 0.055667457,
    0.06194979, 0.068682065, 0.075616744, 0.082584984, 0.089193635, 0.094874687,
    0.098891682, 0.10004295, 0.097016844, 0.087789596, 0.070509768, 0.042778853,
    0.0035584533, -0.047210453, -0.10489788, -0.1602095, -0.19459782,
    -0.18490775, -0.10754165, 0.036037727, 0.19759013, 0.26132313, 0.11713997,
    -0.18758779, -0.30238115, 0.048163136, 0.3639953, -0.14910233, -0.2637349,
    0.40362662, -0.31409795, 0.18179369, -0.090738718, 0.042946488, -0.020586136,
    0.010392667, -0.0056117848, 0.0032402026, -0.0019858724, 0.0012807317,
    -0.00086253792, 0.00060296591, -0.00043548937, 0.00032375892, -0.00024698212,
    0.00019279062, -0.00015357912, 0.00012453788, -0.00010255126, 8.5558482E-5,
    -7.2170928E-5, 6.1436863E-5, -5.2693349E-5, 4.5471255E-5, -3.9433284E-5,
    3.4332971E-5, -2.9987212E-5, 2.6257657E-5, -2.3037978E-5, 2.0245071E-5,
    -1.7812926E-5, 1.5688306E-5, -1.3827679E-5, 1.2195005E-5, -1.0760111E-5,
    9.4974858E-6, -8.3853711E-6, 7.4050613E-6, -6.5403683E-6, 5.7772102E-6,
    -5.1032933E-6, 4.5078641E-6, -3.9815112E-6, 3.5159993E-6, -3.104125E-6,
    2.7395854E-6, -2.4168588E-6, 2.1310948E-6, -1.8780186E-6, 1.6538488E-6,
    -1.4552319E-6, 1.2791891E-6, -1.1230742E-6, 9.8453631E-7, -8.6148574E-7,
    7.5206243E-7, -6.546081E-7, 5.6764452E-7, -4.8985885E-7, 4.2009674E-7,
    -3.5736213E-7, 3.0082216E-7, -2.498151E-7, 2.0385823E-7, -1.6265189E-7,
    1.2607417E-7, -9.4158418E-8, 6.7043911E-8, -4.4891091E-8, 2.7761326E-8,
    -1.5480404E-8, 7.53273E-9, -3.052477E-9, 9.5877856E-10, -2.0575286E-10,
    2.2414417E-11 };

  static const real_T dv1[201] = { 4.7827871E-10, -2.9784176E-9, 9.7723833E-9,
    -2.2382341E-8, 4.0446774E-8, -6.1734816E-8, 8.3293912E-8, -1.0249454E-7,
    1.178078E-7, -1.2870061E-7, 1.3559243E-7, -1.3921011E-7, 1.4065746E-7,
    -1.4074882E-7, 1.4051721E-7, -1.4040747E-7, 1.4127886E-7, -1.4315596E-7,
    1.4689283E-7, -1.5210917E-7, 1.5989802E-7, -1.6940918E-7, 1.8227089E-7,
    -1.9695857E-7, 2.1603952E-7, -2.3691321E-7, 2.6369843E-7, -2.9202021E-7,
    3.2852445E-7, -3.6589095E-7, 4.1487501E-7, -4.6327137E-7, 5.2852697E-7,
    -5.9034984E-7, 6.7710212E-7, -7.5512943E-7, 8.7062473E-7, -9.6788531E-7,
    1.1222658E-6, -1.2417228E-6, 1.4493467E-6, -1.5932457E-6, 1.8747046E-6,
    -2.043332E-6, 2.4285695E-6, -2.6179926E-6, 3.151173E-6, -3.3492412E-6,
    4.0964187E-6, -4.2758276E-6, 5.3371198E-6, -5.4435424E-6, 6.9725767E-6,
    -6.9045563E-6, 9.1397025E-6, -8.7148373E-6, 1.2029591E-5, -1.0927977E-5,
    1.5912527E-5, -1.358256E-5, 2.1176227E-5, -1.6678206E-5, 2.8384979E-5,
    -2.0132088E-5, 3.8372045E-5, -2.3702184E-5, 5.2385309E-5, -2.6854374E-5,
    7.2318582E-5, -2.8535362E-5, 0.00010108123, -2.6788478E-5, 0.00014319185,
    -1.8108424E-5, 0.00020573562, 3.6361649E-6, 0.00029991265, 4.8993332E-5,
    0.00044354734, 0.00013589102, 0.00066515824, 0.00029451992, 0.0010105554,
    0.00057533965, 0.0015535077, 0.0010621193, 0.002412897, 0.0018929698,
    0.0037800178, 0.0032937343, 0.005961218, 0.0056295935, 0.0094422527,
    0.0094810228, 0.014979159, 0.015745093, 0.023708966, 0.025740591,
    0.037232783, 0.041225009, 0.057507103, 0.064044643, 0.086091797, 0.09471714,
    0.12172497, 0.12853597, 0.15450777, 0.14755964, 0.15621399, 0.11147621,
    0.077489831, -0.027628267, -0.1019873, -0.2203989, -0.21185763, -0.16052415,
    0.091649026, 0.23792824, 0.26075778, -0.15662188, -0.28932082, 0.013148519,
    0.42691303, -0.4000505, 0.11513789, 0.093748244, -0.16037231, 0.15071858,
    -0.12120369, 0.094110656, -0.073742238, 0.059038568, -0.048288118,
    0.040197054, -0.033919788, 0.028918247, -0.024845272, 0.02147045,
    -0.018635828, 0.016229579, -0.014170085, 0.012396084, -0.010860414,
    0.0095259444, -0.0083628577, 0.007346803, -0.0064576043, 0.005678344,
    -0.0049946949, 0.0043944258, -0.0038670264, 0.003403418, -0.0029957261,
    0.0026370977, -0.002321554, 0.0020438677, -0.0017994617, 0.0015843227,
    -0.0013949289, 0.001228187, -0.0010813787, 0.00095211407, -0.00083829103,
    0.00073806018, -0.00064979407, 0.00057206023, -0.00050359765, 0.00044329604,
    -0.00039017773, 0.00034338167, -0.00030214942, 0.00026581281, -0.0002337831,
    0.00020554144, -0.0001806304, 0.00015864668, -0.00013923451, 0.00012208003,
    -0.00010690622, 9.346858E-5, -8.1551329E-5, 7.0964175E-5, -6.1539592E-5,
    5.3130609E-5, -4.5609106E-5, 3.8864649E-5, -3.2803856E-5, 2.7350297E-5,
    -2.2444816E-5, 1.8046076E-5, -1.4130827E-5, 1.0693107E-5, -7.7412053E-6,
    5.2910576E-6, -3.3552268E-6, 1.9282956E-6, -9.7253713E-7, 4.1100808E-7,
    -1.3553176E-7, 3.0748588E-8, -3.5668195E-9 };

  static const real_T dv2[201] = { 4.1185887E-6, 4.6623078E-6, 5.2778064E-6,
    5.9745606E-6, 6.7632974E-6, 7.65616E-6, 8.6668947E-6, 9.8110623E-6,
    1.1106278E-5, 1.2572483E-5, 1.4232251E-5, 1.6111134E-5, 1.8238059E-5,
    2.0645772E-5, 2.3371342E-5, 2.645673E-5, 2.9949438E-5, 3.3903239E-5,
    3.8379005E-5, 4.3445642E-5, 4.9181157E-5, 5.567385E-5, 6.3023682E-5,
    7.1343808E-5, 8.0762323E-5, 9.1424231E-5, 0.00010349368, 0.00011715649,
    0.00013262301, 0.00015013135, 0.00016995107, 0.00019238731, 0.00021778548,
    0.00024653662, 0.00027908337, 0.00031592681, 0.00035763416, 0.00040484754,
    0.00045829384, 0.0005187959, 0.0005872852, 0.00066481616, 0.00075258245,
    0.00085193528, 0.00096440425, 0.0010917209, 0.0012358454, 0.0013989966,
    0.0015836864, 0.0017927581, 0.0020294306, 0.0022973477, 0.002600634,
    0.002943959, 0.0033326083, 0.0037725655, 0.004270604, 0.0048343916,
    0.005472608, 0.0061950791, 0.0070129278, 0.0079387456, 0.008986786,
    0.010173184, 0.011516206, 0.013036528, 0.014757557, 0.016705789, 0.018911218,
    0.021407799, 0.024233968, 0.027433236, 0.031054859, 0.035154593, 0.039795557,
    0.045049202, 0.050996412, 0.057728748, 0.065349859, 0.073977077, 0.083743226,
    0.09479866, 0.10731359, 0.12148069, 0.13751806, 0.15567263, 0.17622389,
    0.19948824, 0.22582385, 0.25563618, 0.28938422, 0.32758753, 0.37083428,
    0.41979029, 0.47520927, 0.53794444, 0.60896164, 0.68935424, 0.78035994,
    0.88337984, 1.0, 1.1320159, 1.2814599, 1.450633, 1.6421396, 1.858928,
    2.104336, 2.3821418, 2.6966223, 3.0526193, 3.4556135, 3.9118093, 4.4282302,
    5.0128269, 5.6745996, 6.4237368, 7.271772, 8.2317613, 9.3184844, 10.548672,
    11.941264, 13.517701, 15.302252, 17.322392, 19.609223, 22.197951, 25.128433,
    28.445785, 32.20108, 36.452134, 41.264394, 46.711949, 52.878668, 59.859491,
    67.761894, 76.707539, 86.834152, 98.297638, 111.27449, 125.96448, 142.5938,
    161.41844, 182.72824, 206.85126, 234.15891, 265.07161, 300.06526, 339.67864,
    384.52161, 435.28457, 492.74904, 557.79973, 631.43815, 714.79801, 809.16269,
    915.98501, 1036.9096, 1173.7981, 1328.7581, 1504.1752, 1702.7502, 1927.5403,
    2182.0062, 2470.0656, 2796.1535, 3165.2901, 3583.1587, 4056.1925, 4591.6743,
    5197.8481, 5884.0466, 6660.8341, 7540.1699, 8535.592, 9662.4257, 10938.019,
    12382.011, 14016.633, 15867.051, 17961.754, 20332.991, 23017.268, 26055.913,
    29495.707, 33389.608, 37797.566, 42787.445, 48436.067, 54830.397, 62068.879,
    70262.956, 79538.782, 90039.163, 101925.76, 115381.58, 130613.78, 147856.87,
    167376.33, 189472.66, 214486.05, 242801.62 };

  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 36 };

  char_T cv2[36];
  static const char_T cv3[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *d_y;
  static const int32_T iv2[2] = { 1, 39 };

  char_T cv4[39];
  static const char_T cv5[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T mtmp;
  boolean_T exitg2;
  const mxArray *e_y;
  static const int32_T iv3[2] = { 1, 36 };

  const mxArray *f_y;
  static const int32_T iv4[2] = { 1, 39 };

  boolean_T exitg1;
  real_T lamMin;
  real_T filterSpacing;
  real_T B;
  real_T nLambda;
  real_T csb;
  real_T d;
  real_T cst;
  real_T apnd;
  real_T cdiff;
  real_T absa;
  real_T b_absa;
  const mxArray *g_y;
  static const int32_T iv5[2] = { 1, 21 };

  char_T cv6[21];
  static const char_T cv7[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *h_y;
  static const int32_T iv6[2] = { 1, 21 };

  emxArray_real_T *rR;
  emxArray_creal_T *ErK;
  emxArray_creal_T *EbK;
  emxArray_creal_T *HrK;
  emxArray_creal_T *HbK;
  emxArray_creal_T *EzK;
  emxArray_creal_T *HzK;
  emxArray_creal_T *eyBase;
  emxArray_real_T *b_z;
  creal_T Hzk;
  creal_T Ezk[2];
  creal_T Hbk[3];
  creal_T Hrk[2];
  creal_T Ebk[2];
  creal_T Erk[3];
  int32_T i2;
  int32_T irR;
  emxArray_creal_T *r1;
  emxArray_creal_T *r2;
  emxArray_creal_T *r3;
  emxArray_int32_T *r4;
  emxArray_creal_T *r5;
  emxArray_creal_T *b_cst;
  emxArray_creal_T *r6;
  emxArray_creal_T *r7;
  emxArray_creal_T *b_HrK;
  emxArray_creal_T *c_cst;
  emxArray_creal_T *b_EbK;
  emxArray_creal_T *d_cst;
  emxArray_creal_T *r8;
  creal_T b_Filter_J1[201];
  int32_T iv7[2];
  int32_T i3;
  real_T b_Filter_J0[402];
  creal_T c_Filter_J0[402];
  int32_T iv8[2];
  real_T b_csb[603];
  creal_T c_csb[603];
  int32_T iv9[2];
  real_T d_Filter_J0[402];
  int32_T iv10[2];
  real_T e_Filter_J0[402];
  int32_T iv11[2];
  real_T d_csb[603];
  int32_T iv12[2];
  emxArray_creal_T *b_eyBase;
  const mxArray *PPV = NULL;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /*  */
  /*  Returns 1D CSEM fields due to an arbitrarily oriented electric dipole */
  /*  */
  /*  ***Bessel function integrals are evaluated using the digital filter */
  /*     method (aka the Fast Hankel Transform) and lagged convolution*** */
  /*   */
  /*  In this code, I've only tested out the lagged convolution method which */
  /*  requires that all receivers be at the same depth */
  /*  */
  /*  Returns the inline horizontal electric field from a frequency domain */
  /*  horizontal electric dipole in an arbitrary N-layered medium.  */
  /*  */
  /*  Inputs: */
  /*  */
  /*  freqs  - Vector of frequencies (Hz)    */
  /*  rRx    - Vector of ranges from transmitter to receivers (m, positive). */
  /*  zRx    - Vector of depths of receivers (m), relative to where 0 is defined */
  /*           in the model layer top-depths in z. */
  /*  zTx    - Depth of transmitter (m) */
  /*  z      - Layer top-depths (m). First value is ignored. Also 0 is anywhere  */
  /*           you want it to be, this code makes no model assumptions other  */
  /*           than that the values in z need to be increasing. */
  /*  sig    - Conductivity of each layer (s/m).  z,sig need to include all */
  /*           layers of the model. **This code makes no assumptions about air  */
  /*           or sea layers.   */
  /*  filterName     - Name of filter to use */
  /*                  ('kk51Hankel.mat', 'kk101Hankel.mat', 'kk201Hankel.mat', , 'wa801Hankel.mat') */
  /*  lUseLaggedConv - Optional. Set to true if you want to use the lagged */
  /*                   convolution + spline interpolation speed up when computing */
  /*                   response for many receivers. */
  /*  RxAzim - Receiver azimuth from the dipole clockwise in degrees */
  /*  */
  /*  TxDip - Transmitter dip, +ve below horizontal in degrees */
  /*  */
  /*  */
  /*  Note that the code currently requires both the transmitter and receiver */
  /*  to be in the same layer. Also, if the transmitter and/or receiver are */
  /*  positioned on a boundary, they are assumed to reside in the upper layer. */
  /*  For example if they are on the seafloor, then the upper sea layer is */
  /*  used. For land EM modeling, you should nudge the transmitter and */
  /*  receiver a few cm into the earth (ie, zTx = 0.1 m), otherwise you'll be */
  /*  telling the code to inject a 1 amp source current into the air, which i'm */
  /*  told is quite difficult to do! */
  /*   */
  /*  Outputs: All components of the CSEM field due to an arbitrarilty oriented electric dipole,  */
  /*  in cylindrical co-ordinates, as described in Lars Loseth's PhD thesis (2007)  */
  /*  */
  /*  */
  /*  Written by: */
  /*  */
  /*  Kerry Key and Anandaroop Ray */
  /*  Scripps Institution of Oceanography */
  /*  */
  /*  History: */
  /*  */
  /*  May 2011  - implemented */
  /* -------------------------------------------------------------------------- */
  if ((lUseLaggedConv == 1.0) && (rRx->size[1] == 1)) {
    lUseLaggedConv = 0.0;
  }

  b_emxInit_int32_T(&idx, 2, &m_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  eml_sort_idx(zRx, idx);
  emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 2; i0++) {
    uv0[i0] = (uint8_T)zRx->size[i0];
  }

  emxInit_real_T(&lambdaR, 2, &k_emlrtRTEI, TRUE);
  i0 = lambdaR->size[0] * lambdaR->size[1];
  lambdaR->size[0] = 1;
  lambdaR->size[1] = uv0[1];
  emxEnsureCapacity((emxArray__common *)lambdaR, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k + 1 <= zRx->size[1]; k++) {
    lambdaR->data[k] = zRx->data[idx->data[k] - 1];
  }

  emxFree_int32_T(&idx);
  k = 0;
  while ((k + 1 <= zRx->size[1]) && muDoubleScalarIsInf(lambdaR->data[k]) &&
         (lambdaR->data[k] < 0.0)) {
    k++;
  }

  b_k = k;
  k = zRx->size[1];
  while ((k >= 1) && muDoubleScalarIsNaN(lambdaR->data[k - 1])) {
    k--;
  }

  i = zRx->size[1] - k;
  while ((k >= 1) && muDoubleScalarIsInf(lambdaR->data[k - 1]) && (lambdaR->
          data[k - 1] > 0.0)) {
    k--;
  }

  nInf = (zRx->size[1] - k) - i;
  nb = 0;
  if (b_k > 0) {
    nb = 1;
    emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  }

  khi = (b_k + k) - b_k;
  while (b_k + 1 <= khi) {
    x = lambdaR->data[b_k];
    do {
      exitg3 = 0;
      b_k++;
      if (b_k + 1 > khi) {
        exitg3 = 1;
      } else {
        ndbl = muDoubleScalarAbs(x / 2.0);
        if ((!muDoubleScalarIsInf(ndbl)) && (!muDoubleScalarIsNaN(ndbl))) {
          if (ndbl <= 2.2250738585072014E-308) {
            ndbl = 4.94065645841247E-324;
          } else {
            frexp(ndbl, &exponent);
            ndbl = ldexp(1.0, exponent - 53);
          }
        } else {
          ndbl = rtNaN;
        }

        if ((muDoubleScalarAbs(x - lambdaR->data[b_k]) < ndbl) ||
            (muDoubleScalarIsInf(lambdaR->data[b_k]) && muDoubleScalarIsInf(x) &&
             ((lambdaR->data[b_k] > 0.0) == (x > 0.0)))) {
          n_too_large = TRUE;
        } else {
          n_too_large = FALSE;
        }

        if (!n_too_large) {
          exitg3 = 1;
        }
      }
    } while (exitg3 == 0);

    nb++;
    lambdaR->data[nb - 1] = x;
    emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (nInf > 0) {
    nb++;
    lambdaR->data[nb - 1] = lambdaR->data[khi];
    emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  }

  b_k = khi + nInf;
  emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  for (khi = 1; khi <= i; khi++) {
    nb++;
    lambdaR->data[nb - 1] = lambdaR->data[(b_k + khi) - 1];
  }

  if (nb <= zRx->size[1]) {
  } else {
    emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m0 = mxCreateString("Assertion failed.");
    emlrtAssign(&y, m0);
    error(y, &d_emlrtMCI);
    emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > nb) {
    khi = 0;
  } else {
    khi = nb;
  }

  emxInit_int32_T(&r0, 1, &b_emlrtRTEI, TRUE);
  i0 = r0->size[0];
  r0->size[0] = khi;
  emxEnsureCapacity((emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < khi; i0++) {
    r0->data[i0] = 1 + i0;
  }

  emxInit_real_T(&b_lambdaR, 2, &b_emlrtRTEI, TRUE);
  khi = r0->size[0];
  i0 = b_lambdaR->size[0] * b_lambdaR->size[1];
  b_lambdaR->size[0] = 1;
  b_lambdaR->size[1] = khi;
  emxEnsureCapacity((emxArray__common *)b_lambdaR, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < khi; i0++) {
    i1 = 0;
    while (i1 <= 0) {
      b_lambdaR->data[b_lambdaR->size[0] * i0] = lambdaR->data[r0->data[i0] - 1];
      i1 = 1;
    }
  }

  emxFree_int32_T(&r0);
  i0 = lambdaR->size[0] * lambdaR->size[1];
  lambdaR->size[0] = 1;
  lambdaR->size[1] = b_lambdaR->size[1];
  emxEnsureCapacity((emxArray__common *)lambdaR, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  khi = b_lambdaR->size[1];
  for (i0 = 0; i0 < khi; i0++) {
    lambdaR->data[lambdaR->size[0] * i0] = b_lambdaR->data[b_lambdaR->size[0] *
      i0];
  }

  emxFree_real_T(&b_lambdaR);
  emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    b0 = FALSE;
  } else {
    b0 = (nb > 2147483646);
  }

  if (b0) {
    emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error(TRUE);
    emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  if ((lambdaR->size[1] > 1) && (lUseLaggedConv == 1.0)) {
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    beep(&emlrtMCI);
    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m0 = mxCreateCharArray(2, iv0);
    memcpy(&cv0[0], &cv1[0], 88U * sizeof(char_T));
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 88, m0, cv0);
    emlrtAssign(&b_y, m0);
    display(b_y, &c_emlrtMCI);
  }

  /*  */
  /*  Load the digital filter weights: */
  /*  */
  for (i = 0; i < 201; i++) {
    Filter_J0[i] = dv0[i];
    Filter_J1[i] = dv1[i];
    iShift[i] = dv2[i];
  }

  /*  */
  /*  Initialize output E structure: */
  /*  */
  /*  Get lagged convulition setup: */
  /* for codegen  */
  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  if ((rRx->size[1] == 1) || (rRx->size[1] != 1)) {
    n_too_large = TRUE;
  } else {
    n_too_large = FALSE;
  }

  if (n_too_large) {
  } else {
    emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m0 = mxCreateCharArray(2, iv1);
    for (i = 0; i < 36; i++) {
      cv2[i] = cv3[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m0, cv2);
    emlrtAssign(&c_y, m0);
    error(b_message(c_y, &g_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (rRx->size[1] > 0) {
  } else {
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    d_y = NULL;
    m0 = mxCreateCharArray(2, iv2);
    for (i = 0; i < 39; i++) {
      cv4[i] = cv5[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m0, cv4);
    emlrtAssign(&d_y, m0);
    error(b_message(d_y, &i_emlrtMCI), &j_emlrtMCI);
    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  khi = 1;
  mtmp = rRx->data[0];
  if (rRx->size[1] > 1) {
    if (muDoubleScalarIsNaN(mtmp)) {
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      nInf = 2;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (nInf <= rRx->size[1])) {
        khi = nInf;
        if (!muDoubleScalarIsNaN(rRx->data[nInf - 1])) {
          mtmp = rRx->data[nInf - 1];
          exitg2 = TRUE;
        } else {
          nInf++;
        }
      }
    }

    if (khi < rRx->size[1]) {
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      while (khi + 1 <= rRx->size[1]) {
        if (rRx->data[khi] > mtmp) {
          mtmp = rRx->data[khi];
        }

        khi++;
      }
    }
  }

  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  if ((rRx->size[1] == 1) || (rRx->size[1] != 1)) {
    n_too_large = TRUE;
  } else {
    n_too_large = FALSE;
  }

  if (n_too_large) {
  } else {
    emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m0 = mxCreateCharArray(2, iv3);
    for (i = 0; i < 36; i++) {
      cv2[i] = cv3[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m0, cv2);
    emlrtAssign(&e_y, m0);
    error(b_message(e_y, &g_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (rRx->size[1] > 0) {
  } else {
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    f_y = NULL;
    m0 = mxCreateCharArray(2, iv4);
    for (i = 0; i < 39; i++) {
      cv4[i] = cv5[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m0, cv4);
    emlrtAssign(&f_y, m0);
    error(b_message(f_y, &i_emlrtMCI), &j_emlrtMCI);
    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  khi = 1;
  ndbl = rRx->data[0];
  if (rRx->size[1] > 1) {
    if (muDoubleScalarIsNaN(ndbl)) {
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      nInf = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (nInf <= rRx->size[1])) {
        khi = nInf;
        if (!muDoubleScalarIsNaN(rRx->data[nInf - 1])) {
          ndbl = rRx->data[nInf - 1];
          exitg1 = TRUE;
        } else {
          nInf++;
        }
      }
    }

    if (khi < rRx->size[1]) {
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      while (khi + 1 <= rRx->size[1]) {
        if (rRx->data[khi] < ndbl) {
          ndbl = rRx->data[khi];
        }

        khi++;
      }
    }
  }

  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  lamMin = iShift[0] / mtmp;
  filterSpacing = iShift[1] / iShift[0];

  /*  the filters are spaced by a multiplicative factor  */
  emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  ndbl = iShift[200] / ndbl / lamMin;
  b_log(&ndbl);
  B = filterSpacing;
  b_log(&B);
  ndbl /= B;
  x = muDoubleScalarCeil(ndbl);
  nLambda = muDoubleScalarCeil(ndbl) + 1.0;
  emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  ndbl = filterSpacing;
  b_log(&ndbl);
  csb = lamMin;
  b_log(&csb);
  d = filterSpacing;
  b_log(&d);
  b_log(&lamMin);
  B = lamMin + ndbl * ((x + 1.0) - 1.0);
  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  if (muDoubleScalarIsNaN(csb) || muDoubleScalarIsNaN(d) || muDoubleScalarIsNaN
      (B)) {
    nInf = 0;
    cst = rtNaN;
    apnd = B;
    n_too_large = FALSE;
  } else if ((d == 0.0) || ((csb < B) && (d < 0.0)) || ((B < csb) && (d > 0.0)))
  {
    nInf = -1;
    cst = csb;
    apnd = B;
    n_too_large = FALSE;
  } else if (muDoubleScalarIsInf(csb) || muDoubleScalarIsInf(B)) {
    nInf = 0;
    cst = rtNaN;
    apnd = B;
    if (muDoubleScalarIsInf(d) || (csb == B)) {
      n_too_large = TRUE;
    } else {
      n_too_large = FALSE;
    }

    n_too_large = !n_too_large;
  } else if (muDoubleScalarIsInf(d)) {
    nInf = 0;
    cst = csb;
    apnd = B;
    n_too_large = FALSE;
  } else {
    cst = csb;
    ndbl = muDoubleScalarFloor((B - csb) / d + 0.5);
    apnd = csb + ndbl * d;
    if (d > 0.0) {
      cdiff = apnd - B;
    } else {
      cdiff = B - apnd;
    }

    absa = muDoubleScalarAbs(csb);
    lamMin = muDoubleScalarAbs(B);
    if (absa > lamMin) {
      b_absa = absa;
    } else {
      b_absa = lamMin;
    }

    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * b_absa) {
      ndbl++;
      apnd = B;
    } else if (cdiff > 0.0) {
      apnd = csb + (ndbl - 1.0) * d;
    } else {
      ndbl++;
    }

    n_too_large = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      nInf = (int32_T)ndbl - 1;
    } else {
      nInf = -1;
    }
  }

  emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  if (!n_too_large) {
  } else {
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m0 = mxCreateCharArray(2, iv5);
    for (i = 0; i < 21; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
    emlrtAssign(&g_y, m0);
    error(b_message(g_y, &k_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  i0 = lambdaR->size[0] * lambdaR->size[1];
  lambdaR->size[0] = 1;
  lambdaR->size[1] = nInf + 1;
  emxEnsureCapacity((emxArray__common *)lambdaR, i0, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  if (nInf + 1 > 0) {
    lambdaR->data[0] = cst;
    if (nInf + 1 > 1) {
      lambdaR->data[nInf] = apnd;
      i0 = nInf + (nInf < 0);
      if (i0 >= 0) {
        khi = (int32_T)((uint32_T)i0 >> 1);
      } else {
        khi = ~(int32_T)((uint32_T)~i0 >> 1);
      }

      emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 1; k < khi; k++) {
        ndbl = (real_T)k * d;
        lambdaR->data[k] = cst + ndbl;
        lambdaR->data[nInf - k] = apnd - ndbl;
      }

      if (khi << 1 == nInf) {
        lambdaR->data[khi] = (cst + apnd) / 2.0;
      } else {
        ndbl = (real_T)khi * d;
        lambdaR->data[khi] = cst + ndbl;
        lambdaR->data[khi + 1] = apnd - ndbl;
      }
    }
  }

  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  b_exp(lambdaR);
  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  if (muDoubleScalarIsNaN((x + 1.0) - 201.0)) {
    nInf = 0;
    cst = rtNaN;
    apnd = nLambda - 201.0;
    n_too_large = FALSE;
  } else if (nLambda - 201.0 < 0.0) {
    nInf = -1;
    cst = 0.0;
    apnd = nLambda - 201.0;
    n_too_large = FALSE;
  } else if (muDoubleScalarIsInf((x + 1.0) - 201.0)) {
    nInf = 0;
    cst = rtNaN;
    apnd = nLambda - 201.0;
    n_too_large = !(0.0 == nLambda - 201.0);
  } else {
    cst = 0.0;
    ndbl = muDoubleScalarFloor(((x + 1.0) - 201.0) + 0.5);
    apnd = ndbl;
    cdiff = ndbl - (nLambda - 201.0);
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarAbs
        (nLambda - 201.0)) {
      ndbl++;
      apnd = nLambda - 201.0;
    } else if (cdiff > 0.0) {
      apnd = ndbl - 1.0;
    } else {
      ndbl++;
    }

    n_too_large = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      nInf = (int32_T)ndbl - 1;
    } else {
      nInf = -1;
    }
  }

  emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  if (!n_too_large) {
  } else {
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    h_y = NULL;
    m0 = mxCreateCharArray(2, iv6);
    for (i = 0; i < 21; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
    emlrtAssign(&h_y, m0);
    error(b_message(h_y, &k_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_real_T(&rR, 2, &l_emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  i0 = rR->size[0] * rR->size[1];
  rR->size[0] = 1;
  rR->size[1] = nInf + 1;
  emxEnsureCapacity((emxArray__common *)rR, i0, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  if (nInf + 1 > 0) {
    rR->data[0] = cst;
    if (nInf + 1 > 1) {
      rR->data[nInf] = apnd;
      i0 = nInf + (nInf < 0);
      if (i0 >= 0) {
        khi = (int32_T)((uint32_T)i0 >> 1);
      } else {
        khi = ~(int32_T)((uint32_T)~i0 >> 1);
      }

      emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 1; k < khi; k++) {
        rR->data[k] = cst + (real_T)k;
        rR->data[nInf - k] = apnd - (real_T)k;
      }

      if (khi << 1 == nInf) {
        rR->data[khi] = (cst + apnd) / 2.0;
      } else {
        rR->data[khi] = cst + (real_T)khi;
        rR->data[khi + 1] = apnd - (real_T)khi;
      }
    }
  }

  emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
  b_log(&filterSpacing);
  i0 = rR->size[0] * rR->size[1];
  rR->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)rR, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  khi = rR->size[0];
  nInf = rR->size[1];
  khi *= nInf;
  for (i0 = 0; i0 < khi; i0++) {
    rR->data[i0] = -rR->data[i0] * filterSpacing;
  }

  b_exp(rR);
  i0 = rR->size[0] * rR->size[1];
  rR->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)rR, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  khi = rR->size[0];
  nInf = rR->size[1];
  khi *= nInf;
  for (i0 = 0; i0 < khi; i0++) {
    rR->data[i0] *= mtmp;
  }

  emxInit_creal_T(&ErK, 2, &d_emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);

  /*  ranges corresponding to lambdaR plus nExtra 1 lags in convolution: */
  /* define EH(k) here for lagged convolution */
  /* 1st 2 rows are J0 and J1 from HED, next is J1 from VED */
  nInf = 3 * freqs->size[1];
  i0 = lambdaR->size[1];
  emlrtNonNegativeCheckFastR2012b(i0, &emlrtDCI, emlrtRootTLSGlobal);
  i0 = ErK->size[0] * ErK->size[1];
  ErK->size[0] = nInf;
  emxEnsureCapacity((emxArray__common *)ErK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = lambdaR->size[1];
  i0 = ErK->size[0] * ErK->size[1];
  ErK->size[1] = khi;
  emxEnsureCapacity((emxArray__common *)ErK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = nInf * lambdaR->size[1];
  for (i0 = 0; i0 < khi; i0++) {
    ErK->data[i0].re = 0.0;
    ErK->data[i0].im = 0.0;
  }

  emxInit_creal_T(&EbK, 2, &e_emlrtRTEI, TRUE);

  /* 1st 2 rows are J0 and J1 from HED */
  nInf = freqs->size[1] << 1;
  i0 = lambdaR->size[1];
  emlrtNonNegativeCheckFastR2012b(i0, &b_emlrtDCI, emlrtRootTLSGlobal);
  i0 = EbK->size[0] * EbK->size[1];
  EbK->size[0] = nInf;
  emxEnsureCapacity((emxArray__common *)EbK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = lambdaR->size[1];
  i0 = EbK->size[0] * EbK->size[1];
  EbK->size[1] = khi;
  emxEnsureCapacity((emxArray__common *)EbK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = nInf * lambdaR->size[1];
  for (i0 = 0; i0 < khi; i0++) {
    EbK->data[i0].re = 0.0;
    EbK->data[i0].im = 0.0;
  }

  emxInit_creal_T(&HrK, 2, &f_emlrtRTEI, TRUE);

  /* 1st 2 rows are J0 and J1 from HED */
  nInf = freqs->size[1] << 1;
  i0 = lambdaR->size[1];
  emlrtNonNegativeCheckFastR2012b(i0, &c_emlrtDCI, emlrtRootTLSGlobal);
  i0 = HrK->size[0] * HrK->size[1];
  HrK->size[0] = nInf;
  emxEnsureCapacity((emxArray__common *)HrK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = lambdaR->size[1];
  i0 = HrK->size[0] * HrK->size[1];
  HrK->size[1] = khi;
  emxEnsureCapacity((emxArray__common *)HrK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = nInf * lambdaR->size[1];
  for (i0 = 0; i0 < khi; i0++) {
    HrK->data[i0].re = 0.0;
    HrK->data[i0].im = 0.0;
  }

  emxInit_creal_T(&HbK, 2, &g_emlrtRTEI, TRUE);

  /* 1st 2 rows are J0 and J1 from HED, next is J1 from VED */
  nInf = 3 * freqs->size[1];
  i0 = lambdaR->size[1];
  emlrtNonNegativeCheckFastR2012b(i0, &d_emlrtDCI, emlrtRootTLSGlobal);
  i0 = HbK->size[0] * HbK->size[1];
  HbK->size[0] = nInf;
  emxEnsureCapacity((emxArray__common *)HbK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = lambdaR->size[1];
  i0 = HbK->size[0] * HbK->size[1];
  HbK->size[1] = khi;
  emxEnsureCapacity((emxArray__common *)HbK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = nInf * lambdaR->size[1];
  for (i0 = 0; i0 < khi; i0++) {
    HbK->data[i0].re = 0.0;
    HbK->data[i0].im = 0.0;
  }

  emxInit_creal_T(&EzK, 2, &h_emlrtRTEI, TRUE);

  /* 1st row is J0 from VED, next is J1 from HED */
  nInf = freqs->size[1] << 1;
  i0 = lambdaR->size[1];
  emlrtNonNegativeCheckFastR2012b(i0, &e_emlrtDCI, emlrtRootTLSGlobal);
  i0 = EzK->size[0] * EzK->size[1];
  EzK->size[0] = nInf;
  emxEnsureCapacity((emxArray__common *)EzK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = lambdaR->size[1];
  i0 = EzK->size[0] * EzK->size[1];
  EzK->size[1] = khi;
  emxEnsureCapacity((emxArray__common *)EzK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = nInf * lambdaR->size[1];
  for (i0 = 0; i0 < khi; i0++) {
    EzK->data[i0].re = 0.0;
    EzK->data[i0].im = 0.0;
  }

  emxInit_creal_T(&HzK, 2, &i_emlrtRTEI, TRUE);

  /* 1st row is J1 from HED */
  i0 = lambdaR->size[1];
  emlrtNonNegativeCheckFastR2012b(i0, &f_emlrtDCI, emlrtRootTLSGlobal);
  khi = freqs->size[1];
  i0 = HzK->size[0] * HzK->size[1];
  HzK->size[0] = khi;
  emxEnsureCapacity((emxArray__common *)HzK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = lambdaR->size[1];
  i0 = HzK->size[0] * HzK->size[1];
  HzK->size[1] = khi;
  emxEnsureCapacity((emxArray__common *)HzK, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = freqs->size[1] * lambdaR->size[1];
  for (i0 = 0; i0 < khi; i0++) {
    HzK->data[i0].re = 0.0;
    HzK->data[i0].im = 0.0;
  }

  emxInit_creal_T(&eyBase, 2, &j_emlrtRTEI, TRUE);

  /*  Now compute the CSEM responses using the FHT method: */
  i0 = zRx->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, emlrtRootTLSGlobal);
  nInf = 6 * freqs->size[1];
  i0 = rR->size[1];
  emlrtNonNegativeCheckFastR2012b(i0, &g_emlrtDCI, emlrtRootTLSGlobal);
  khi = rR->size[1];
  i0 = eyBase->size[0] * eyBase->size[1];
  eyBase->size[0] = khi;
  emxEnsureCapacity((emxArray__common *)eyBase, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  i0 = eyBase->size[0] * eyBase->size[1];
  eyBase->size[1] = nInf;
  emxEnsureCapacity((emxArray__common *)eyBase, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = rR->size[1] * nInf;
  for (i0 = 0; i0 < khi; i0++) {
    eyBase->data[i0].re = 0.0;
    eyBase->data[i0].im = 0.0;
  }

  /*  Get the kernels for all lambdas */
  k = 1;
  emxInit_real_T(&b_z, 2, &b_emlrtRTEI, TRUE);
  while (k - 1 <= freqs->size[1] - 1) {
    i0 = freqs->size[1];
    i1 = (int32_T)(1.0 + (real_T)(k - 1));
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, emlrtRootTLSGlobal);
    i = 0;
    while (i <= lambdaR->size[1] - 1) {
      /* EyKR(1:2,i) = getCSEM1DKernels_aniso_hed(lambda(i),f,zRxEval,zTx,z,sig); */
      /* all components of the EH field */
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      i0 = b_z->size[0] * b_z->size[1];
      b_z->size[0] = 1;
      b_z->size[1] = z->size[1];
      emxEnsureCapacity((emxArray__common *)b_z, i0, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      khi = z->size[0] * z->size[1];
      for (i0 = 0; i0 < khi; i0++) {
        b_z->data[i0] = z->data[i0];
      }

      i0 = lambdaR->size[1];
      i1 = (int32_T)(1.0 + (real_T)i);
      getCSEM1DKernels_aniso_hed(lambdaR->data[emlrtDynamicBoundsCheckFastR2012b
                                 (i1, 1, i0, &lc_emlrtBCI, emlrtRootTLSGlobal) -
        1], freqs->data[k - 1], zRx->data[0], zTx, b_z, sig, Erk, Ebk, Hrk, Hbk,
        Ezk, &Hzk);
      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      i0 = 3 * k;
      if (i0 == 3 * k) {
      } else {
        emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &sb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
      }

      khi = ErK->size[0];
      nInf = ErK->size[1];
      i1 = (int32_T)(1.0 + (real_T)i);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, nInf, &y_emlrtBCI,
        emlrtRootTLSGlobal);
      for (i1 = 0; i1 < 3; i1++) {
        i2 = (int32_T)((real_T)i0 + (-2.0 + (real_T)i1));
        ErK->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, khi, &mc_emlrtBCI,
                    emlrtRootTLSGlobal) + ErK->size[0] * ((int32_T)(1.0 +
          (real_T)i) - 1)) - 1] = Erk[i1];
      }

      i0 = k << 1;
      if (i0 == k << 1) {
      } else {
        emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &rb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      }

      khi = EbK->size[0];
      nInf = EbK->size[1];
      i1 = (int32_T)(1.0 + (real_T)i);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, nInf, &t_emlrtBCI,
        emlrtRootTLSGlobal);
      for (i1 = 0; i1 < 2; i1++) {
        i2 = (int32_T)((real_T)i0 + (-1.0 + (real_T)i1));
        EbK->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, khi, &nc_emlrtBCI,
                    emlrtRootTLSGlobal) + EbK->size[0] * ((int32_T)(1.0 +
          (real_T)i) - 1)) - 1] = Ebk[i1];
      }

      i0 = k << 1;
      if (i0 == k << 1) {
      } else {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &qb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }

      khi = HrK->size[0];
      nInf = HrK->size[1];
      i1 = (int32_T)(1.0 + (real_T)i);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, nInf, &o_emlrtBCI,
        emlrtRootTLSGlobal);
      for (i1 = 0; i1 < 2; i1++) {
        i2 = (int32_T)((real_T)i0 + (-1.0 + (real_T)i1));
        HrK->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, khi, &oc_emlrtBCI,
                    emlrtRootTLSGlobal) + HrK->size[0] * ((int32_T)(1.0 +
          (real_T)i) - 1)) - 1] = Hrk[i1];
      }

      i0 = 3 * k;
      if (i0 == 3 * k) {
      } else {
        emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &pb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
      }

      khi = HbK->size[0];
      nInf = HbK->size[1];
      i1 = (int32_T)(1.0 + (real_T)i);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, nInf, &i_emlrtBCI,
        emlrtRootTLSGlobal);
      for (i1 = 0; i1 < 3; i1++) {
        i2 = (int32_T)((real_T)i0 + (-2.0 + (real_T)i1));
        HbK->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, khi, &pc_emlrtBCI,
                    emlrtRootTLSGlobal) + HbK->size[0] * ((int32_T)(1.0 +
          (real_T)i) - 1)) - 1] = Hbk[i1];
      }

      i0 = k << 1;
      if (i0 == k << 1) {
      } else {
        emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ob_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      }

      khi = EzK->size[0];
      nInf = EzK->size[1];
      i1 = (int32_T)(1.0 + (real_T)i);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, nInf, &e_emlrtBCI,
        emlrtRootTLSGlobal);
      for (i1 = 0; i1 < 2; i1++) {
        i2 = (int32_T)((real_T)i0 + (-1.0 + (real_T)i1));
        EzK->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, khi, &sc_emlrtBCI,
                    emlrtRootTLSGlobal) + EzK->size[0] * ((int32_T)(1.0 +
          (real_T)i) - 1)) - 1] = Ezk[i1];
      }

      i0 = HzK->size[0];
      i1 = HzK->size[1];
      i2 = (int32_T)(1.0 + (real_T)i);
      HzK->data[(emlrtDynamicBoundsCheckFastR2012b(k, 1, i0, &qc_emlrtBCI,
                  emlrtRootTLSGlobal) + HzK->size[0] *
                 (emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &rc_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = Hzk;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&b_z);

  /*  loop over frequencies */
  /* Rx Azimuths and Tx Dips */
  cst = TxDip;
  cosd(&cst);

  /* needed for all HED terms */
  apnd = TxDip;
  sind(&apnd);

  /* needed for all VED terms */
  csb = RxAzim;
  cosd(&csb);

  /* needs to be multiplied into all HED/VED terms inside the loop */
  nLambda = RxAzim;
  sind(&nLambda);

  /* can be multiplied into all non-VED terms outside the loop */
  /*  Extract results for all rR ranges: */
  irR = 0;
  emxInit_creal_T(&r1, 2, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&r2, 2, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&r3, 2, &b_emlrtRTEI, TRUE);
  emxInit_int32_T(&r4, 1, &b_emlrtRTEI, TRUE);
  b_emxInit_creal_T(&r5, 1, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&b_cst, 2, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&r6, 2, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&r7, 2, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&b_HrK, 2, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&c_cst, 2, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&b_EbK, 2, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&d_cst, 2, &b_emlrtRTEI, TRUE);
  emxInit_creal_T(&r8, 2, &b_emlrtRTEI, TRUE);
  while (irR <= rR->size[1] - 1) {
    for (i0 = 0; i0 < 201; i0++) {
      iShift[i0] = ((1.0 + (real_T)i0) + (1.0 + (real_T)irR)) - 1.0;
    }

    /* for Hz */
    if (1 > freqs->size[1]) {
      khi = 0;
    } else {
      i0 = HzK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &c_emlrtBCI,
        emlrtRootTLSGlobal);
      i0 = HzK->size[0];
      i1 = freqs->size[1];
      khi = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    nInf = 5 * freqs->size[1] + 1;
    i0 = 6 * freqs->size[1];
    if (nInf > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = eyBase->size[1];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &gb_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      i2 = eyBase->size[1];
      i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, i2, &gb_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i2 = eyBase->size[0];
    b_k = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(b_k, 1, i2, &fb_emlrtBCI,
      emlrtRootTLSGlobal);
    i2 = r4->size[0];
    r4->size[0] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)r4, i2, (int32_T)sizeof(int32_T),
                      &b_emlrtRTEI);
    nInf = i0 - i1;
    for (i0 = 0; i0 < nInf; i0++) {
      r4->data[i0] = i1 + i0;
    }

    emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    for (i0 = 0; i0 < 201; i0++) {
      i1 = HzK->size[1];
      i2 = (int32_T)iShift[i0];
      emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &xb_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i0 = rR->size[1];
    i1 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &d_emlrtBCI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    i0 = b_cst->size[0] * b_cst->size[1];
    b_cst->size[0] = khi;
    b_cst->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)b_cst, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 201; i0++) {
      for (i1 = 0; i1 < khi; i1++) {
        b_cst->data[i1 + b_cst->size[0] * i0].re = cst * HzK->data[i1 +
          HzK->size[0] * ((int32_T)iShift[i0] - 1)].re;
        b_cst->data[i1 + b_cst->size[0] * i0].im = cst * HzK->data[i1 +
          HzK->size[0] * ((int32_T)iShift[i0] - 1)].im;
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      b_Filter_J1[i0].re = Filter_J1[i0];
      b_Filter_J1[i0].im = 0.0;
    }

    lamMin = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    i0 = r5->size[0];
    r5->size[0] = b_cst->size[0];
    emxEnsureCapacity((emxArray__common *)r5, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = b_cst->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      cdiff = 0.0;
      absa = 0.0;
      for (i1 = 0; i1 < 201; i1++) {
        B = b_cst->data[i0 + b_cst->size[0] * i1].re * b_Filter_J1[i1].re -
          b_cst->data[i0 + b_cst->size[0] * i1].im * 0.0;
        ndbl = b_cst->data[i0 + b_cst->size[0] * i1].re * 0.0 + b_cst->data[i0 +
          b_cst->size[0] * i1].im * b_Filter_J1[i1].re;
        cdiff += B;
        absa += ndbl;
      }

      if (absa == 0.0) {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = 0.0;
      } else if (cdiff == 0.0) {
        r5->data[i0].re = 0.0;
        r5->data[i0].im = absa / lamMin;
      } else {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = absa / lamMin;
      }
    }

    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    iv7[0] = 1;
    iv7[1] = r4->size[0];
    emlrtSubAssignSizeCheckR2012b(iv7, 2, *(int32_T (*)[1])r5->size, 1,
      &f_emlrtECI, emlrtRootTLSGlobal);
    khi = r4->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      i1 = 0;
      while (i1 <= 0) {
        eyBase->data[((int32_T)(1.0 + (real_T)irR) + eyBase->size[0] * r4->
                      data[i0]) - 1] = r5->data[i0];
        i1 = 1;
      }
    }

    /* for Ez */
    nInf = (freqs->size[1] << 1) - 1;
    if (1 > nInf) {
      i0 = 1;
      i1 = -1;
    } else {
      i0 = EzK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &f_emlrtBCI,
        emlrtRootTLSGlobal);
      i0 = 2;
      i1 = EzK->size[0];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &f_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
    }

    i2 = freqs->size[1] << 1;
    if (2 > i2) {
      b_k = 1;
      exponent = 1;
      i2 = 0;
    } else {
      b_k = EzK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, b_k, &g_emlrtBCI,
        emlrtRootTLSGlobal);
      b_k = 2;
      exponent = 2;
      nb = EzK->size[0];
      i2 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, nb, &g_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    for (nb = 0; nb < 201; nb++) {
      i3 = EzK->size[1];
      nInf = (int32_T)iShift[nb];
      emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i3, &yb_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    nb = r1->size[0] * r1->size[1];
    r1->size[0] = div_s32_floor(i1, i0) + 1;
    r1->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)r1, nb, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (nb = 0; nb < 201; nb++) {
      khi = div_s32_floor(i1, i0);
      for (i3 = 0; i3 <= khi; i3++) {
        r1->data[i3 + r1->size[0] * nb].re = apnd * EzK->data[i0 * i3 +
          EzK->size[0] * ((int32_T)iShift[nb] - 1)].re;
        r1->data[i3 + r1->size[0] * nb].im = apnd * EzK->data[i0 * i3 +
          EzK->size[0] * ((int32_T)iShift[nb] - 1)].im;
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      i1 = EzK->size[1];
      nb = (int32_T)iShift[i0];
      emlrtDynamicBoundsCheckFastR2012b(nb, 1, i1, &ac_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i0 = r2->size[0] * r2->size[1];
    r2->size[0] = div_s32_floor(i2 - b_k, exponent) + 1;
    r2->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)r2, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 201; i0++) {
      khi = div_s32_floor(i2 - b_k, exponent);
      for (i1 = 0; i1 <= khi; i1++) {
        r2->data[i1 + r2->size[0] * i0].re = cst * EzK->data[((b_k + exponent *
          i1) + EzK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].re;
        r2->data[i1 + r2->size[0] * i0].im = cst * EzK->data[((b_k + exponent *
          i1) + EzK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].im;
      }
    }

    i0 = r1->size[0];
    i1 = r2->size[0];
    emlrtDimSizeEqCheckFastR2012b(i0, i1, &emlrtECI, emlrtRootTLSGlobal);
    nInf = (freqs->size[1] << 2) + 1;
    i0 = 5 * freqs->size[1];
    if (nInf > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = eyBase->size[1];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &ib_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      i2 = eyBase->size[1];
      i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, i2, &ib_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i2 = eyBase->size[0];
    b_k = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(b_k, 1, i2, &hb_emlrtBCI,
      emlrtRootTLSGlobal);
    i2 = r4->size[0];
    r4->size[0] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)r4, i2, (int32_T)sizeof(int32_T),
                      &b_emlrtRTEI);
    khi = i0 - i1;
    for (i0 = 0; i0 < khi; i0++) {
      r4->data[i0] = i1 + i0;
    }

    emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    i0 = rR->size[1];
    i1 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &h_emlrtBCI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    memcpy(&b_Filter_J0[0], &Filter_J0[0], 201U * sizeof(real_T));
    for (i0 = 0; i0 < 201; i0++) {
      b_Filter_J0[i0 + 201] = csb * Filter_J1[i0];
    }

    i0 = r6->size[0] * r6->size[1];
    r6->size[0] = r1->size[0];
    r6->size[1] = 402;
    emxEnsureCapacity((emxArray__common *)r6, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 201; i0++) {
      khi = r1->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        r6->data[i1 + r6->size[0] * i0] = r1->data[i1 + r1->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      khi = r2->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        r6->data[i1 + r6->size[0] * (i0 + 201)] = r2->data[i1 + r2->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 402; i0++) {
      c_Filter_J0[i0].re = b_Filter_J0[i0];
      c_Filter_J0[i0].im = 0.0;
    }

    lamMin = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    i0 = r5->size[0];
    r5->size[0] = r6->size[0];
    emxEnsureCapacity((emxArray__common *)r5, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = r6->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      cdiff = 0.0;
      absa = 0.0;
      for (i1 = 0; i1 < 402; i1++) {
        B = r6->data[i0 + r6->size[0] * i1].re * c_Filter_J0[i1].re - r6->
          data[i0 + r6->size[0] * i1].im * 0.0;
        ndbl = r6->data[i0 + r6->size[0] * i1].re * 0.0 + r6->data[i0 + r6->
          size[0] * i1].im * c_Filter_J0[i1].re;
        cdiff += B;
        absa += ndbl;
      }

      if (absa == 0.0) {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = 0.0;
      } else if (cdiff == 0.0) {
        r5->data[i0].re = 0.0;
        r5->data[i0].im = absa / lamMin;
      } else {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = absa / lamMin;
      }
    }

    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    iv8[0] = 1;
    iv8[1] = r4->size[0];
    emlrtSubAssignSizeCheckR2012b(iv8, 2, *(int32_T (*)[1])r5->size, 1,
      &g_emlrtECI, emlrtRootTLSGlobal);
    khi = r4->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      i1 = 0;
      while (i1 <= 0) {
        eyBase->data[((int32_T)(1.0 + (real_T)irR) + eyBase->size[0] * r4->
                      data[i0]) - 1] = r5->data[i0];
        i1 = 1;
      }
    }

    /* for Hb */
    nInf = 3 * freqs->size[1] - 2;
    if (1 > nInf) {
      i0 = 1;
      i1 = -1;
    } else {
      i0 = HbK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &j_emlrtBCI,
        emlrtRootTLSGlobal);
      i0 = 3;
      i1 = HbK->size[0];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &j_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
    }

    nInf = 3 * freqs->size[1] - 1;
    if (2 > nInf) {
      i2 = 1;
      b_k = 1;
      exponent = 0;
    } else {
      i2 = HbK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, i2, &k_emlrtBCI,
        emlrtRootTLSGlobal);
      i2 = 2;
      b_k = 3;
      exponent = HbK->size[0];
      exponent = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, exponent,
        &k_emlrtBCI, emlrtRootTLSGlobal);
    }

    nb = 3 * freqs->size[1];
    if (3 > nb) {
      i3 = 1;
      nInf = 1;
      nb = 0;
    } else {
      i3 = HbK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(3, 1, i3, &l_emlrtBCI,
        emlrtRootTLSGlobal);
      i3 = 3;
      nInf = 3;
      k = HbK->size[0];
      nb = emlrtDynamicBoundsCheckFastR2012b(nb, 1, k, &l_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    for (k = 0; k < 201; k++) {
      i = HbK->size[1];
      khi = (int32_T)iShift[k];
      emlrtDynamicBoundsCheckFastR2012b(khi, 1, i, &bc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    k = r1->size[0] * r1->size[1];
    r1->size[0] = div_s32_floor(i1, i0) + 1;
    r1->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)r1, k, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (k = 0; k < 201; k++) {
      khi = div_s32_floor(i1, i0);
      for (i = 0; i <= khi; i++) {
        r1->data[i + r1->size[0] * k].re = cst * HbK->data[i0 * i + HbK->size[0]
          * ((int32_T)iShift[k] - 1)].re;
        r1->data[i + r1->size[0] * k].im = cst * HbK->data[i0 * i + HbK->size[0]
          * ((int32_T)iShift[k] - 1)].im;
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      i1 = HbK->size[1];
      k = (int32_T)iShift[i0];
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i1, &cc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i0 = r2->size[0] * r2->size[1];
    r2->size[0] = div_s32_floor(exponent - i2, b_k) + 1;
    r2->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)r2, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 201; i0++) {
      khi = div_s32_floor(exponent - i2, b_k);
      for (i1 = 0; i1 <= khi; i1++) {
        r2->data[i1 + r2->size[0] * i0].re = cst * HbK->data[((i2 + b_k * i1) +
          HbK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].re;
        r2->data[i1 + r2->size[0] * i0].im = cst * HbK->data[((i2 + b_k * i1) +
          HbK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].im;
      }
    }

    i0 = r1->size[0];
    i1 = r2->size[0];
    emlrtDimSizeEqCheckFastR2012b(i0, i1, &b_emlrtECI, emlrtRootTLSGlobal);
    for (i0 = 0; i0 < 201; i0++) {
      i1 = HbK->size[1];
      i2 = (int32_T)iShift[i0];
      emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &dc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i0 = r3->size[0] * r3->size[1];
    r3->size[0] = div_s32_floor(nb - i3, nInf) + 1;
    r3->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)r3, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 201; i0++) {
      khi = div_s32_floor(nb - i3, nInf);
      for (i1 = 0; i1 <= khi; i1++) {
        r3->data[i1 + r3->size[0] * i0].re = apnd * HbK->data[((i3 + nInf * i1)
          + HbK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].re;
        r3->data[i1 + r3->size[0] * i0].im = apnd * HbK->data[((i3 + nInf * i1)
          + HbK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].im;
      }
    }

    i0 = r1->size[0];
    i1 = r3->size[0];
    emlrtDimSizeEqCheckFastR2012b(i0, i1, &b_emlrtECI, emlrtRootTLSGlobal);
    nInf = 3 * freqs->size[1] + 1;
    i0 = freqs->size[1] << 2;
    if (nInf > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = eyBase->size[1];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &kb_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      i2 = eyBase->size[1];
      i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, i2, &kb_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i2 = eyBase->size[0];
    b_k = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(b_k, 1, i2, &jb_emlrtBCI,
      emlrtRootTLSGlobal);
    i2 = r4->size[0];
    r4->size[0] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)r4, i2, (int32_T)sizeof(int32_T),
                      &b_emlrtRTEI);
    khi = i0 - i1;
    for (i0 = 0; i0 < khi; i0++) {
      r4->data[i0] = i1 + i0;
    }

    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    i0 = rR->size[1];
    i1 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &m_emlrtBCI, emlrtRootTLSGlobal);
    i0 = rR->size[1];
    i1 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &n_emlrtBCI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    ndbl = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    for (i0 = 0; i0 < 201; i0++) {
      b_csb[i0] = csb * Filter_J0[i0];
    }

    for (i0 = 0; i0 < 201; i0++) {
      b_csb[i0 + 201] = csb * Filter_J1[i0] / ndbl;
    }

    memcpy(&b_csb[402], &Filter_J1[0], 201U * sizeof(real_T));
    i0 = r7->size[0] * r7->size[1];
    r7->size[0] = r1->size[0];
    r7->size[1] = 603;
    emxEnsureCapacity((emxArray__common *)r7, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 201; i0++) {
      khi = r1->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        r7->data[i1 + r7->size[0] * i0] = r1->data[i1 + r1->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      khi = r2->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        r7->data[i1 + r7->size[0] * (i0 + 201)] = r2->data[i1 + r2->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      khi = r3->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        r7->data[i1 + r7->size[0] * (i0 + 402)] = r3->data[i1 + r3->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 603; i0++) {
      c_csb[i0].re = b_csb[i0];
      c_csb[i0].im = 0.0;
    }

    lamMin = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    i0 = r5->size[0];
    r5->size[0] = r7->size[0];
    emxEnsureCapacity((emxArray__common *)r5, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = r7->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      cdiff = 0.0;
      absa = 0.0;
      for (i1 = 0; i1 < 603; i1++) {
        B = r7->data[i0 + r7->size[0] * i1].re * c_csb[i1].re - r7->data[i0 +
          r7->size[0] * i1].im * 0.0;
        ndbl = r7->data[i0 + r7->size[0] * i1].re * 0.0 + r7->data[i0 + r7->
          size[0] * i1].im * c_csb[i1].re;
        cdiff += B;
        absa += ndbl;
      }

      if (absa == 0.0) {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = 0.0;
      } else if (cdiff == 0.0) {
        r5->data[i0].re = 0.0;
        r5->data[i0].im = absa / lamMin;
      } else {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = absa / lamMin;
      }
    }

    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    iv9[0] = 1;
    iv9[1] = r4->size[0];
    emlrtSubAssignSizeCheckR2012b(iv9, 2, *(int32_T (*)[1])r5->size, 1,
      &h_emlrtECI, emlrtRootTLSGlobal);
    khi = r4->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      i1 = 0;
      while (i1 <= 0) {
        eyBase->data[((int32_T)(1.0 + (real_T)irR) + eyBase->size[0] * r4->
                      data[i0]) - 1] = r5->data[i0];
        i1 = 1;
      }
    }

    /* for Hr */
    nInf = (freqs->size[1] << 1) - 1;
    if (1 > nInf) {
      i0 = 1;
      i1 = -1;
    } else {
      i0 = HrK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &p_emlrtBCI,
        emlrtRootTLSGlobal);
      i0 = 2;
      i1 = HrK->size[0];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &p_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
    }

    i2 = freqs->size[1] << 1;
    if (2 > i2) {
      b_k = 1;
      exponent = 1;
      i2 = 0;
    } else {
      b_k = HrK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, b_k, &q_emlrtBCI,
        emlrtRootTLSGlobal);
      b_k = 2;
      exponent = 2;
      nb = HrK->size[0];
      i2 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, nb, &q_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    for (nb = 0; nb < 201; nb++) {
      i3 = HrK->size[1];
      nInf = (int32_T)iShift[nb];
      emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i3, &ec_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    for (nb = 0; nb < 201; nb++) {
      i3 = HrK->size[1];
      nInf = (int32_T)iShift[nb];
      emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i3, &fc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    nb = div_s32_floor(i1, i0) + 1;
    i3 = div_s32_floor(i2 - b_k, exponent) + 1;
    emlrtDimSizeEqCheckFastR2012b(nb, i3, &c_emlrtECI, emlrtRootTLSGlobal);
    nInf = (freqs->size[1] << 1) + 1;
    nb = 3 * freqs->size[1];
    if (nInf > nb) {
      i3 = 0;
      nb = 0;
    } else {
      i3 = eyBase->size[1];
      i3 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i3, &mb_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      nInf = eyBase->size[1];
      nb = emlrtDynamicBoundsCheckFastR2012b(nb, 1, nInf, &mb_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    nInf = eyBase->size[0];
    k = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(k, 1, nInf, &lb_emlrtBCI,
      emlrtRootTLSGlobal);
    nInf = r4->size[0];
    r4->size[0] = nb - i3;
    emxEnsureCapacity((emxArray__common *)r4, nInf, (int32_T)sizeof(int32_T),
                      &b_emlrtRTEI);
    khi = nb - i3;
    for (nb = 0; nb < khi; nb++) {
      r4->data[nb] = i3 + nb;
    }

    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    nb = rR->size[1];
    i3 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, nb, &r_emlrtBCI, emlrtRootTLSGlobal);
    nb = rR->size[1];
    i3 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, nb, &s_emlrtBCI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    nb = b_HrK->size[0] * b_HrK->size[1];
    b_HrK->size[0] = div_s32_floor(i1, i0) + 1;
    b_HrK->size[1] = 402;
    emxEnsureCapacity((emxArray__common *)b_HrK, nb, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (nb = 0; nb < 201; nb++) {
      khi = div_s32_floor(i1, i0);
      for (i3 = 0; i3 <= khi; i3++) {
        b_HrK->data[i3 + b_HrK->size[0] * nb] = HrK->data[i0 * i3 + HrK->size[0]
          * ((int32_T)iShift[nb] - 1)];
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      khi = div_s32_floor(i2 - b_k, exponent);
      for (i1 = 0; i1 <= khi; i1++) {
        b_HrK->data[i1 + b_HrK->size[0] * (i0 + 201)] = HrK->data[((b_k +
          exponent * i1) + HrK->size[0] * ((int32_T)iShift[i0] - 1)) - 1];
      }
    }

    ndbl = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    memcpy(&d_Filter_J0[0], &Filter_J0[0], 201U * sizeof(real_T));
    for (i0 = 0; i0 < 201; i0++) {
      d_Filter_J0[i0 + 201] = Filter_J1[i0] / ndbl;
    }

    i0 = c_cst->size[0] * c_cst->size[1];
    c_cst->size[0] = b_HrK->size[0];
    c_cst->size[1] = 402;
    emxEnsureCapacity((emxArray__common *)c_cst, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 402; i0++) {
      khi = b_HrK->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        c_cst->data[i1 + c_cst->size[0] * i0].re = cst * b_HrK->data[i1 +
          b_HrK->size[0] * i0].re;
        c_cst->data[i1 + c_cst->size[0] * i0].im = cst * b_HrK->data[i1 +
          b_HrK->size[0] * i0].im;
      }
    }

    for (i0 = 0; i0 < 402; i0++) {
      c_Filter_J0[i0].re = d_Filter_J0[i0];
      c_Filter_J0[i0].im = 0.0;
    }

    lamMin = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    i0 = r5->size[0];
    r5->size[0] = c_cst->size[0];
    emxEnsureCapacity((emxArray__common *)r5, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = c_cst->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      cdiff = 0.0;
      absa = 0.0;
      for (i1 = 0; i1 < 402; i1++) {
        B = c_cst->data[i0 + c_cst->size[0] * i1].re * c_Filter_J0[i1].re -
          c_cst->data[i0 + c_cst->size[0] * i1].im * 0.0;
        ndbl = c_cst->data[i0 + c_cst->size[0] * i1].re * 0.0 + c_cst->data[i0 +
          c_cst->size[0] * i1].im * c_Filter_J0[i1].re;
        cdiff += B;
        absa += ndbl;
      }

      if (absa == 0.0) {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = 0.0;
      } else if (cdiff == 0.0) {
        r5->data[i0].re = 0.0;
        r5->data[i0].im = absa / lamMin;
      } else {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = absa / lamMin;
      }
    }

    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    iv10[0] = 1;
    iv10[1] = r4->size[0];
    emlrtSubAssignSizeCheckR2012b(iv10, 2, *(int32_T (*)[1])r5->size, 1,
      &i_emlrtECI, emlrtRootTLSGlobal);
    khi = r4->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      i1 = 0;
      while (i1 <= 0) {
        eyBase->data[((int32_T)(1.0 + (real_T)irR) + eyBase->size[0] * r4->
                      data[i0]) - 1] = r5->data[i0];
        i1 = 1;
      }
    }

    /* for Eb */
    nInf = (freqs->size[1] << 1) - 1;
    if (1 > nInf) {
      i0 = 1;
      i1 = -1;
    } else {
      i0 = EbK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &u_emlrtBCI,
        emlrtRootTLSGlobal);
      i0 = 2;
      i1 = EbK->size[0];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &u_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
    }

    i2 = freqs->size[1] << 1;
    if (2 > i2) {
      b_k = 1;
      exponent = 1;
      i2 = 0;
    } else {
      b_k = EbK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, b_k, &v_emlrtBCI,
        emlrtRootTLSGlobal);
      b_k = 2;
      exponent = 2;
      nb = EbK->size[0];
      i2 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, nb, &v_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    for (nb = 0; nb < 201; nb++) {
      i3 = EbK->size[1];
      nInf = (int32_T)iShift[nb];
      emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i3, &gc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    for (nb = 0; nb < 201; nb++) {
      i3 = EbK->size[1];
      nInf = (int32_T)iShift[nb];
      emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i3, &hc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    nb = div_s32_floor(i1, i0) + 1;
    i3 = div_s32_floor(i2 - b_k, exponent) + 1;
    emlrtDimSizeEqCheckFastR2012b(nb, i3, &d_emlrtECI, emlrtRootTLSGlobal);
    nb = freqs->size[1] << 1;
    if (freqs->size[1] + 1 > nb) {
      i3 = 0;
      nb = 0;
    } else {
      i3 = eyBase->size[1];
      nInf = freqs->size[1] + 1;
      i3 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i3, &ob_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      nInf = eyBase->size[1];
      nb = emlrtDynamicBoundsCheckFastR2012b(nb, 1, nInf, &ob_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    nInf = eyBase->size[0];
    k = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(k, 1, nInf, &nb_emlrtBCI,
      emlrtRootTLSGlobal);
    nInf = r4->size[0];
    r4->size[0] = nb - i3;
    emxEnsureCapacity((emxArray__common *)r4, nInf, (int32_T)sizeof(int32_T),
                      &b_emlrtRTEI);
    khi = nb - i3;
    for (nb = 0; nb < khi; nb++) {
      r4->data[nb] = i3 + nb;
    }

    emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    nb = rR->size[1];
    i3 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, nb, &w_emlrtBCI, emlrtRootTLSGlobal);
    nb = rR->size[1];
    i3 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, nb, &x_emlrtBCI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    nb = b_EbK->size[0] * b_EbK->size[1];
    b_EbK->size[0] = div_s32_floor(i1, i0) + 1;
    b_EbK->size[1] = 402;
    emxEnsureCapacity((emxArray__common *)b_EbK, nb, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (nb = 0; nb < 201; nb++) {
      khi = div_s32_floor(i1, i0);
      for (i3 = 0; i3 <= khi; i3++) {
        b_EbK->data[i3 + b_EbK->size[0] * nb] = EbK->data[i0 * i3 + EbK->size[0]
          * ((int32_T)iShift[nb] - 1)];
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      khi = div_s32_floor(i2 - b_k, exponent);
      for (i1 = 0; i1 <= khi; i1++) {
        b_EbK->data[i1 + b_EbK->size[0] * (i0 + 201)] = EbK->data[((b_k +
          exponent * i1) + EbK->size[0] * ((int32_T)iShift[i0] - 1)) - 1];
      }
    }

    ndbl = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    memcpy(&e_Filter_J0[0], &Filter_J0[0], 201U * sizeof(real_T));
    for (i0 = 0; i0 < 201; i0++) {
      e_Filter_J0[i0 + 201] = Filter_J1[i0] / ndbl;
    }

    i0 = d_cst->size[0] * d_cst->size[1];
    d_cst->size[0] = b_EbK->size[0];
    d_cst->size[1] = 402;
    emxEnsureCapacity((emxArray__common *)d_cst, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 402; i0++) {
      khi = b_EbK->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        d_cst->data[i1 + d_cst->size[0] * i0].re = cst * b_EbK->data[i1 +
          b_EbK->size[0] * i0].re;
        d_cst->data[i1 + d_cst->size[0] * i0].im = cst * b_EbK->data[i1 +
          b_EbK->size[0] * i0].im;
      }
    }

    for (i0 = 0; i0 < 402; i0++) {
      c_Filter_J0[i0].re = e_Filter_J0[i0];
      c_Filter_J0[i0].im = 0.0;
    }

    lamMin = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    i0 = r5->size[0];
    r5->size[0] = d_cst->size[0];
    emxEnsureCapacity((emxArray__common *)r5, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = d_cst->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      cdiff = 0.0;
      absa = 0.0;
      for (i1 = 0; i1 < 402; i1++) {
        B = d_cst->data[i0 + d_cst->size[0] * i1].re * c_Filter_J0[i1].re -
          d_cst->data[i0 + d_cst->size[0] * i1].im * 0.0;
        ndbl = d_cst->data[i0 + d_cst->size[0] * i1].re * 0.0 + d_cst->data[i0 +
          d_cst->size[0] * i1].im * c_Filter_J0[i1].re;
        cdiff += B;
        absa += ndbl;
      }

      if (absa == 0.0) {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = 0.0;
      } else if (cdiff == 0.0) {
        r5->data[i0].re = 0.0;
        r5->data[i0].im = absa / lamMin;
      } else {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = absa / lamMin;
      }
    }

    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    iv11[0] = 1;
    iv11[1] = r4->size[0];
    emlrtSubAssignSizeCheckR2012b(iv11, 2, *(int32_T (*)[1])r5->size, 1,
      &j_emlrtECI, emlrtRootTLSGlobal);
    khi = r4->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      i1 = 0;
      while (i1 <= 0) {
        eyBase->data[((int32_T)(1.0 + (real_T)irR) + eyBase->size[0] * r4->
                      data[i0]) - 1] = r5->data[i0];
        i1 = 1;
      }
    }

    /* for Er */
    nInf = 3 * freqs->size[1] - 2;
    if (1 > nInf) {
      i0 = 1;
      i1 = -1;
    } else {
      i0 = ErK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &ab_emlrtBCI,
        emlrtRootTLSGlobal);
      i0 = 3;
      i1 = ErK->size[0];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &ab_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
    }

    nInf = 3 * freqs->size[1] - 1;
    if (2 > nInf) {
      i2 = 1;
      b_k = 1;
      exponent = 0;
    } else {
      i2 = ErK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(2, 1, i2, &bb_emlrtBCI,
        emlrtRootTLSGlobal);
      i2 = 2;
      b_k = 3;
      exponent = ErK->size[0];
      exponent = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, exponent,
        &bb_emlrtBCI, emlrtRootTLSGlobal);
    }

    nb = 3 * freqs->size[1];
    if (3 > nb) {
      i3 = 1;
      nInf = 1;
      nb = 0;
    } else {
      i3 = ErK->size[0];
      emlrtDynamicBoundsCheckFastR2012b(3, 1, i3, &cb_emlrtBCI,
        emlrtRootTLSGlobal);
      i3 = 3;
      nInf = 3;
      k = ErK->size[0];
      nb = emlrtDynamicBoundsCheckFastR2012b(nb, 1, k, &cb_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    for (k = 0; k < 201; k++) {
      i = ErK->size[1];
      khi = (int32_T)iShift[k];
      emlrtDynamicBoundsCheckFastR2012b(khi, 1, i, &ic_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    k = r1->size[0] * r1->size[1];
    r1->size[0] = div_s32_floor(i1, i0) + 1;
    r1->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)r1, k, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (k = 0; k < 201; k++) {
      khi = div_s32_floor(i1, i0);
      for (i = 0; i <= khi; i++) {
        r1->data[i + r1->size[0] * k].re = cst * ErK->data[i0 * i + ErK->size[0]
          * ((int32_T)iShift[k] - 1)].re;
        r1->data[i + r1->size[0] * k].im = cst * ErK->data[i0 * i + ErK->size[0]
          * ((int32_T)iShift[k] - 1)].im;
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      i1 = ErK->size[1];
      k = (int32_T)iShift[i0];
      emlrtDynamicBoundsCheckFastR2012b(k, 1, i1, &jc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i0 = r2->size[0] * r2->size[1];
    r2->size[0] = div_s32_floor(exponent - i2, b_k) + 1;
    r2->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)r2, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 201; i0++) {
      khi = div_s32_floor(exponent - i2, b_k);
      for (i1 = 0; i1 <= khi; i1++) {
        r2->data[i1 + r2->size[0] * i0].re = cst * ErK->data[((i2 + b_k * i1) +
          ErK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].re;
        r2->data[i1 + r2->size[0] * i0].im = cst * ErK->data[((i2 + b_k * i1) +
          ErK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].im;
      }
    }

    i0 = r1->size[0];
    i1 = r2->size[0];
    emlrtDimSizeEqCheckFastR2012b(i0, i1, &e_emlrtECI, emlrtRootTLSGlobal);
    for (i0 = 0; i0 < 201; i0++) {
      i1 = ErK->size[1];
      i2 = (int32_T)iShift[i0];
      emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &kc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i0 = r3->size[0] * r3->size[1];
    r3->size[0] = div_s32_floor(nb - i3, nInf) + 1;
    r3->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)r3, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 201; i0++) {
      khi = div_s32_floor(nb - i3, nInf);
      for (i1 = 0; i1 <= khi; i1++) {
        r3->data[i1 + r3->size[0] * i0].re = apnd * ErK->data[((i3 + nInf * i1)
          + ErK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].re;
        r3->data[i1 + r3->size[0] * i0].im = apnd * ErK->data[((i3 + nInf * i1)
          + ErK->size[0] * ((int32_T)iShift[i0] - 1)) - 1].im;
      }
    }

    i0 = r1->size[0];
    i1 = r3->size[0];
    emlrtDimSizeEqCheckFastR2012b(i0, i1, &e_emlrtECI, emlrtRootTLSGlobal);
    if (1 > freqs->size[1]) {
      khi = 0;
    } else {
      i0 = eyBase->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &qb_emlrtBCI,
        emlrtRootTLSGlobal);
      i0 = eyBase->size[1];
      i1 = freqs->size[1];
      khi = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &qb_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    i0 = eyBase->size[0];
    i1 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &pb_emlrtBCI,
      emlrtRootTLSGlobal);
    i0 = r4->size[0];
    r4->size[0] = khi;
    emxEnsureCapacity((emxArray__common *)r4, i0, (int32_T)sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < khi; i0++) {
      r4->data[i0] = i0;
    }

    emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    i0 = rR->size[1];
    i1 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &db_emlrtBCI,
      emlrtRootTLSGlobal);
    i0 = rR->size[1];
    i1 = (int32_T)(1.0 + (real_T)irR);
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &eb_emlrtBCI,
      emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    ndbl = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    for (i0 = 0; i0 < 201; i0++) {
      d_csb[i0] = csb * Filter_J0[i0];
    }

    for (i0 = 0; i0 < 201; i0++) {
      d_csb[i0 + 201] = csb * Filter_J1[i0] / ndbl;
    }

    memcpy(&d_csb[402], &Filter_J1[0], 201U * sizeof(real_T));
    i0 = r8->size[0] * r8->size[1];
    r8->size[0] = r1->size[0];
    r8->size[1] = 603;
    emxEnsureCapacity((emxArray__common *)r8, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 201; i0++) {
      khi = r1->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        r8->data[i1 + r8->size[0] * i0] = r1->data[i1 + r1->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      khi = r2->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        r8->data[i1 + r8->size[0] * (i0 + 201)] = r2->data[i1 + r2->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 201; i0++) {
      khi = r3->size[0];
      for (i1 = 0; i1 < khi; i1++) {
        r8->data[i1 + r8->size[0] * (i0 + 402)] = r3->data[i1 + r3->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 603; i0++) {
      c_csb[i0].re = d_csb[i0];
      c_csb[i0].im = 0.0;
    }

    lamMin = rR->data[(int32_T)(1.0 + (real_T)irR) - 1];
    i0 = r5->size[0];
    r5->size[0] = r8->size[0];
    emxEnsureCapacity((emxArray__common *)r5, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = r8->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      cdiff = 0.0;
      absa = 0.0;
      for (i1 = 0; i1 < 603; i1++) {
        B = r8->data[i0 + r8->size[0] * i1].re * c_csb[i1].re - r8->data[i0 +
          r8->size[0] * i1].im * 0.0;
        ndbl = r8->data[i0 + r8->size[0] * i1].re * 0.0 + r8->data[i0 + r8->
          size[0] * i1].im * c_csb[i1].re;
        cdiff += B;
        absa += ndbl;
      }

      if (absa == 0.0) {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = 0.0;
      } else if (cdiff == 0.0) {
        r5->data[i0].re = 0.0;
        r5->data[i0].im = absa / lamMin;
      } else {
        r5->data[i0].re = cdiff / lamMin;
        r5->data[i0].im = absa / lamMin;
      }
    }

    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    iv12[0] = 1;
    iv12[1] = r4->size[0];
    emlrtSubAssignSizeCheckR2012b(iv12, 2, *(int32_T (*)[1])r5->size, 1,
      &k_emlrtECI, emlrtRootTLSGlobal);
    khi = r4->size[0];
    for (i0 = 0; i0 < khi; i0++) {
      i1 = 0;
      while (i1 <= 0) {
        eyBase->data[((int32_T)(1.0 + (real_T)irR) + eyBase->size[0] * r4->
                      data[i0]) - 1] = r5->data[i0];
        i1 = 1;
      }
    }

    irR++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_creal_T(&r8);
  emxFree_creal_T(&d_cst);
  emxFree_creal_T(&b_EbK);
  emxFree_creal_T(&c_cst);
  emxFree_creal_T(&b_HrK);
  emxFree_creal_T(&r7);
  emxFree_creal_T(&r6);
  emxFree_creal_T(&b_cst);
  emxFree_creal_T(&r5);
  emxFree_int32_T(&r4);
  emxFree_creal_T(&r3);
  emxFree_creal_T(&r2);
  emxFree_creal_T(&r1);
  emxFree_creal_T(&HzK);
  emxFree_creal_T(&EzK);
  emxFree_creal_T(&HbK);
  emxFree_creal_T(&HrK);
  emxFree_creal_T(&EbK);

  /*  Compute spline coefficients: */
  /* PP=spline(log10(rR) ,eyBase'); */
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  i0 = lambdaR->size[0] * lambdaR->size[1];
  lambdaR->size[0] = 1;
  lambdaR->size[1] = rRx->size[1];
  emxEnsureCapacity((emxArray__common *)lambdaR, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  khi = rRx->size[0] * rRx->size[1];
  for (i0 = 0; i0 < khi; i0++) {
    lambdaR->data[i0] = rRx->data[i0];
  }

  emxInit_creal_T(&b_eyBase, 2, &b_emlrtRTEI, TRUE);
  b_log10(lambdaR);
  b_log10(rR);
  i0 = b_eyBase->size[0] * b_eyBase->size[1];
  b_eyBase->size[0] = eyBase->size[1];
  b_eyBase->size[1] = eyBase->size[0];
  emxEnsureCapacity((emxArray__common *)b_eyBase, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = eyBase->size[0];
  for (i0 = 0; i0 < khi; i0++) {
    nInf = eyBase->size[1];
    for (i1 = 0; i1 < nInf; i1++) {
      b_eyBase->data[i1 + b_eyBase->size[0] * i0].re = eyBase->data[i0 +
        eyBase->size[0] * i1].re;
      b_eyBase->data[i1 + b_eyBase->size[0] * i0].im = -eyBase->data[i0 +
        eyBase->size[0] * i1].im;
    }
  }

  emxFree_creal_T(&eyBase);
  emlrtAssign(&PPV, spline(emlrt_marshallOut(rR), b_emlrt_marshallOut(b_eyBase),
    emlrt_marshallOut(lambdaR), &b_emlrtMCI));
  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);

  /*  PPV = ppval(PP,log10(rRx)); */
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrt_marshallIn(emlrtAlias(PPV), "PPV", ErK);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emxFree_creal_T(&b_eyBase);
  emxFree_real_T(&rR);
  emxFree_real_T(&lambdaR);
  if (1 > freqs->size[1]) {
    khi = 0;
  } else {
    i0 = ErK->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &rb_emlrtBCI, emlrtRootTLSGlobal);
    i0 = ErK->size[0];
    i1 = freqs->size[1];
    khi = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &rb_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  nInf = ErK->size[1];
  i0 = Er->size[0] * Er->size[1];
  Er->size[0] = nInf;
  Er->size[1] = khi;
  emxEnsureCapacity((emxArray__common *)Er, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < khi; i0++) {
    for (i1 = 0; i1 < nInf; i1++) {
      Er->data[i1 + Er->size[0] * i0].re = ErK->data[i0 + ErK->size[0] * i1].re;
      Er->data[i1 + Er->size[0] * i0].im = -ErK->data[i0 + ErK->size[0] * i1].im;
    }
  }

  i0 = freqs->size[1] << 1;
  if (freqs->size[1] + 1 > i0) {
    i1 = 0;
    i0 = 0;
  } else {
    i1 = ErK->size[0];
    i2 = freqs->size[1] + 1;
    i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &sb_emlrtBCI,
      emlrtRootTLSGlobal) - 1;
    i2 = ErK->size[0];
    i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, i2, &sb_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  khi = ErK->size[1];
  i2 = Eb->size[0] * Eb->size[1];
  Eb->size[0] = khi;
  Eb->size[1] = i0 - i1;
  emxEnsureCapacity((emxArray__common *)Eb, i2, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  nInf = i0 - i1;
  for (i0 = 0; i0 < nInf; i0++) {
    for (i2 = 0; i2 < khi; i2++) {
      ndbl = ErK->data[(i1 + i0) + ErK->size[0] * i2].re;
      B = -ErK->data[(i1 + i0) + ErK->size[0] * i2].im;
      Eb->data[i2 + Eb->size[0] * i0].re = nLambda * ndbl;
      Eb->data[i2 + Eb->size[0] * i0].im = nLambda * B;
    }
  }

  nInf = (freqs->size[1] << 1) + 1;
  i0 = 3 * freqs->size[1];
  if (nInf > i0) {
    i1 = 0;
    i0 = 0;
  } else {
    i1 = ErK->size[0];
    i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &tb_emlrtBCI,
      emlrtRootTLSGlobal) - 1;
    i2 = ErK->size[0];
    i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, i2, &tb_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  khi = ErK->size[1];
  i2 = Hr->size[0] * Hr->size[1];
  Hr->size[0] = khi;
  Hr->size[1] = i0 - i1;
  emxEnsureCapacity((emxArray__common *)Hr, i2, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  nInf = i0 - i1;
  for (i0 = 0; i0 < nInf; i0++) {
    for (i2 = 0; i2 < khi; i2++) {
      ndbl = ErK->data[(i1 + i0) + ErK->size[0] * i2].re;
      B = -ErK->data[(i1 + i0) + ErK->size[0] * i2].im;
      Hr->data[i2 + Hr->size[0] * i0].re = nLambda * ndbl;
      Hr->data[i2 + Hr->size[0] * i0].im = nLambda * B;
    }
  }

  nInf = 3 * freqs->size[1] + 1;
  i0 = freqs->size[1] << 2;
  if (nInf > i0) {
    i1 = 0;
    i0 = 0;
  } else {
    i1 = ErK->size[0];
    i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &ub_emlrtBCI,
      emlrtRootTLSGlobal) - 1;
    i2 = ErK->size[0];
    i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, i2, &ub_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  khi = ErK->size[1];
  i2 = Hb->size[0] * Hb->size[1];
  Hb->size[0] = khi;
  Hb->size[1] = i0 - i1;
  emxEnsureCapacity((emxArray__common *)Hb, i2, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  nInf = i0 - i1;
  for (i0 = 0; i0 < nInf; i0++) {
    for (i2 = 0; i2 < khi; i2++) {
      Hb->data[i2 + Hb->size[0] * i0].re = ErK->data[(i1 + i0) + ErK->size[0] *
        i2].re;
      Hb->data[i2 + Hb->size[0] * i0].im = -ErK->data[(i1 + i0) + ErK->size[0] *
        i2].im;
    }
  }

  nInf = (freqs->size[1] << 2) + 1;
  i0 = 5 * freqs->size[1];
  if (nInf > i0) {
    i1 = 0;
    i0 = 0;
  } else {
    i1 = ErK->size[0];
    i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &vb_emlrtBCI,
      emlrtRootTLSGlobal) - 1;
    i2 = ErK->size[0];
    i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, i2, &vb_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  khi = ErK->size[1];
  i2 = Ez->size[0] * Ez->size[1];
  Ez->size[0] = khi;
  Ez->size[1] = i0 - i1;
  emxEnsureCapacity((emxArray__common *)Ez, i2, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  nInf = i0 - i1;
  for (i0 = 0; i0 < nInf; i0++) {
    for (i2 = 0; i2 < khi; i2++) {
      Ez->data[i2 + Ez->size[0] * i0].re = ErK->data[(i1 + i0) + ErK->size[0] *
        i2].re;
      Ez->data[i2 + Ez->size[0] * i0].im = -ErK->data[(i1 + i0) + ErK->size[0] *
        i2].im;
    }
  }

  nInf = 5 * freqs->size[1] + 1;
  i0 = 6 * freqs->size[1];
  if (nInf > i0) {
    i1 = 0;
    i0 = 0;
  } else {
    i1 = ErK->size[0];
    i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &wb_emlrtBCI,
      emlrtRootTLSGlobal) - 1;
    i2 = ErK->size[0];
    i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, i2, &wb_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  khi = ErK->size[1];
  i2 = Hz->size[0] * Hz->size[1];
  Hz->size[0] = khi;
  Hz->size[1] = i0 - i1;
  emxEnsureCapacity((emxArray__common *)Hz, i2, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  nInf = i0 - i1;
  for (i0 = 0; i0 < nInf; i0++) {
    for (i2 = 0; i2 < khi; i2++) {
      ndbl = ErK->data[(i1 + i0) + ErK->size[0] * i2].re;
      B = -ErK->data[(i1 + i0) + ErK->size[0] * i2].im;
      Hz->data[i2 + Hz->size[0] * i0].re = nLambda * ndbl;
      Hz->data[i2 + Hz->size[0] * i0].im = nLambda * B;
    }
  }

  emxFree_creal_T(&ErK);

  /*  and we're done */
  emlrtDestroyArray(&PPV);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (get_CSEM1D_FD_FHT_aniso_hed_ved.c) */
