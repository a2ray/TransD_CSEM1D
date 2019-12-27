/*
 * get_CSEM1D_FD_FHT_aniso_hed.c
 *
 * Code generation for function 'get_CSEM1D_FD_FHT_aniso_hed'
 *
 * C source code generated on: Sun Mar 16 16:41:10 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "get_CSEM1D_FD_FHT_aniso_hed.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_emxutil.h"
#include "diff.h"
#include "rdivide.h"
#include "sqrt.h"
#include "log10.h"
#include "exp.h"
#include "log.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_mexutil.h"
#include "get_CSEM1D_FD_FHT_aniso_hed_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 69, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo b_emlrtRSI = { 151, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo c_emlrtRSI = { 68, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo d_emlrtRSI = { 92, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo e_emlrtRSI = { 93, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo f_emlrtRSI = { 97, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo g_emlrtRSI = { 98, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo h_emlrtRSI = { 100, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo i_emlrtRSI = { 131, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo j_emlrtRSI = { 132, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo k_emlrtRSI = { 145, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo l_emlrtRSI = { 146, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo m_emlrtRSI = { 186, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo n_emlrtRSI = { 191, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo o_emlrtRSI = { 192, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo p_emlrtRSI = { 193, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo q_emlrtRSI = { 194, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo r_emlrtRSI = { 199, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo s_emlrtRSI = { 200, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo t_emlrtRSI = { 201, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo u_emlrtRSI = { 202, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo v_emlrtRSI = { 203, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo w_emlrtRSI = { 204, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo x_emlrtRSI = { 154, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo y_emlrtRSI = { 42, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo ab_emlrtRSI = { 158, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo bb_emlrtRSI = { 160, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo cb_emlrtRSI = { 169, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo db_emlrtRSI = { 194, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo eb_emlrtRSI = { 207, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo fb_emlrtRSI = { 218, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo gb_emlrtRSI = { 225, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo hb_emlrtRSI = { 228, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRSInfo ib_emlrtRSI = { 42, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo jb_emlrtRSI = { 134, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo kb_emlrtRSI = { 138, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo lb_emlrtRSI = { 185, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRSInfo ob_emlrtRSI = { 16, "max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo pb_emlrtRSI = { 18, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo qb_emlrtRSI = { 38, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo rb_emlrtRSI = { 73, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo sb_emlrtRSI = { 88, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo tb_emlrtRSI = { 192, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo ub_emlrtRSI = { 219, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo vb_emlrtRSI = { 16, "min",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/min.m" };

static emlrtRSInfo yb_emlrtRSI = { 79, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ac_emlrtRSI = { 280, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo bc_emlrtRSI = { 288, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo cc_emlrtRSI = { 401, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo dc_emlrtRSI = { 21, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ec_emlrtRSI = { 248, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo fc_emlrtRSI = { 251, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo gc_emlrtRSI = { 252, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo hc_emlrtRSI = { 255, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo ic_emlrtRSI = { 258, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo jc_emlrtRSI = { 261, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo kc_emlrtRSI = { 262, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo lc_emlrtRSI = { 269, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo mc_emlrtRSI = { 276, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo nc_emlrtRSI = { 289, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo oc_emlrtRSI = { 290, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo pc_emlrtRSI = { 295, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo qc_emlrtRSI = { 296, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo rc_emlrtRSI = { 1, "mrdivide",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/mrdivide.p" };

static emlrtRSInfo sc_emlrtRSI = { 15, "rdivide",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo xc_emlrtRSI = { 11, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo yc_emlrtRSI = { 14, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo ad_emlrtRSI = { 26, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo bd_emlrtRSI = { 39, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo cd_emlrtRSI = { 41, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo dd_emlrtRSI = { 65, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo ed_emlrtRSI = { 252, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo fd_emlrtRSI = { 261, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo gd_emlrtRSI = { 272, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo hd_emlrtRSI = { 284, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo id_emlrtRSI = { 342, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRSInfo qd_emlrtRSI = { 21, "mtimes",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtRSInfo rd_emlrtRSI = { 84, "mtimes",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtRSInfo sd_emlrtRSI = { 89, "mtimes",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtMCInfo emlrtMCI = { 69, 9, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtMCInfo b_emlrtMCI = { 151, 18, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtMCInfo c_emlrtMCI = { 71, 9, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

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

static emlrtMCInfo m_emlrtMCI = { 282, 17, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtMCInfo n_emlrtMCI = { 283, 17, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtMCInfo s_emlrtMCI = { 14, 5, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo t_emlrtMCI = { 65, 1, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo u_emlrtMCI = { 261, 9, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo ab_emlrtMCI = { 85, 13, "mtimes",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtMCInfo bb_emlrtMCI = { 84, 23, "mtimes",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtMCInfo cb_emlrtMCI = { 90, 13, "mtimes",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtMCInfo db_emlrtMCI = { 89, 23, "mtimes",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/mtimes.m" };

static emlrtRTEInfo emlrtRTEI = { 159, 1, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRTEInfo b_emlrtRTEI = { 2, 32, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo c_emlrtRTEI = { 281, 1, "colon",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRTEInfo d_emlrtRTEI = { 90, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo e_emlrtRTEI = { 90, 17, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo f_emlrtRTEI = { 102, 9, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo g_emlrtRTEI = { 124, 13, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo h_emlrtRTEI = { 158, 1, "unique",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/ops/unique.m" };

static emlrtRTEInfo i_emlrtRTEI = { 27, 5, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo j_emlrtRTEI = { 1, 20, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo k_emlrtRTEI = { 145, 5, "eml_sort_idx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_sort_idx.m" };

static emlrtRTEInfo m_emlrtRTEI = { 227, 11, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo n_emlrtRTEI = { 111, 5, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo o_emlrtRTEI = { 248, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo p_emlrtRTEI = { 251, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo q_emlrtRTEI = { 252, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo r_emlrtRTEI = { 254, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo s_emlrtRTEI = { 261, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo t_emlrtRTEI = { 262, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo u_emlrtRTEI = { 269, 13, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo v_emlrtRTEI = { 276, 13, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo w_emlrtRTEI = { 33, 6, "find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo ab_emlrtRTEI = { 17, 9, "eml_li_find",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 338, 36, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 342, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtRTEInfo db_emlrtRTEI = { 344, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtDCInfo emlrtDCI = { 102, 43, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  4 };

static emlrtBCInfo emlrtBCI = { -1, -1, 123, 23, "zRx",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 124, 31, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  4 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 127, 21, "freqs",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtRTEInfo jb_emlrtRTEI = { 132, 26, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 132, 45, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 133, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 133, 55, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 133, 21, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 134, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 134, 55, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo b_emlrtECI = { -1, 134, 21, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 135, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 135, 55, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo c_emlrtECI = { -1, 135, 21, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 145, 50, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 145, 82, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 146, 45, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 146, 68, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo d_emlrtECI = { 1, 146, 40, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 146, 109, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 146, 119, "rR",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 145, 24, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 145, 28, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo e_emlrtECI = { -1, 145, 17, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 146, 24, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 146, 28, "eyBase",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo f_emlrtECI = { -1, 146, 17, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 156, 22, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 157, 24, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 158, 22, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 159, 22, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 160, 22, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 161, 22, "EH",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 164, 21, "freqs",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 171, 31, "rRx",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 172, 31, "zRx",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 187, 35, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 191, 36, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 191, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo g_emlrtECI = { -1, 191, 21, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 192, 36, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 192, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo h_emlrtECI = { -1, 192, 21, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 193, 36, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 193, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo i_emlrtECI = { -1, 193, 21, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 194, 36, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 194, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo j_emlrtECI = { -1, 194, 21, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 199, 43, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 199, 64, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 200, 43, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 200, 64, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 201, 43, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 201, 64, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 202, 43, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 202, 64, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 203, 43, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 204, 43, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 145, 63, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 146, 56, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 146, 77, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 131, 76, "lambda",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 199, 24, "Er",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 199, 28, "Er",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 200, 24, "Eb",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 200, 28, "Eb",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 201, 24, "Hr",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 201, 28, "Hr",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 202, 24, "Hb",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 202, 28, "Hb",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 203, 24, "Ez",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 203, 28, "Ez",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 204, 24, "Hz",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 204, 28, "Hz",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 132, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 187, 30, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 136, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 136, 36, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 137, 25, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 137, 36, "EHK",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo k_emlrtECI = { 2, 252, 15, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtECInfo l_emlrtECI = { -1, 255, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtECInfo m_emlrtECI = { -1, 258, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo tc_emlrtBCI = { 0, MAX_int32_T, 261, 16, "pzI(1:end-1)",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 261, 10, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { 0, MAX_int32_T, 261, 31, "pzI(2:end)",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 261, 25, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo n_emlrtECI = { 2, 261, 10, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 261, 39, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 261, 54, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo o_emlrtECI = { 2, 261, 39, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 262, 17, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { 0, MAX_int32_T, 262, 34, "pzII(2:end)",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 262, 27, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo p_emlrtECI = { 2, 262, 10, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 262, 48, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 262, 56, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo q_emlrtECI = { 2, 262, 41, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 263, 17, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 263, 27, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo r_emlrtECI = { 2, 263, 10, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 263, 48, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 263, 56, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo s_emlrtECI = { 2, 263, 41, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 291, 28, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 297, 25, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 297, 47, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 322, 60, "epsc",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 255, 17, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 258, 18, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 255, 5, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 258, 5, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 290, 47, "pzI",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 296, 47, "pzII",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 365, 36, "d",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 365, 28, "pz",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 364, 20, "r",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 363, 60, "d",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 363, 52, "pz",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtRTEInfo lb_emlrtRTEI = { 362, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 356, 36, "d",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 356, 28, "pz",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 355, 20, "r",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 354, 57, "d",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtECInfo t_emlrtECI = { -1, 346, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 346, 5, "d",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 345, 5, "d",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 354, 49, "pz",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtRTEInfo mb_emlrtRTEI = { 353, 5, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m" };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 346, 19, "dz",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo he_emlrtBCI = { 0, MAX_int32_T, 346, 24, "dz(2:end)",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 347, 5, "d",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 363, 18, "r",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 354, 17, "r",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo le_emlrtBCI = { -1, -1, 388, 61, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 387, 41, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 384, 61, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 383, 40, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 380, 64, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 379, 41, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 376, 60, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 375, 41, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 373, 3, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 373, 3, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  1 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 373, 17, "z",
  "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 373, 17, "get_CSEM1D_FD_FHT_aniso_hed",
  "/Users/anray/Documents/MATLAB/PT/RJ_MCMC/mex/get_CSEM1D_FD_FHT_aniso_hed.m",
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
  zTx, emxArray_real_T *z, const emxArray_real_T *sig, creal_T ErKernels[2],
  creal_T EbKernels[2], creal_T HrKernels[2], creal_T HbKernels[2], creal_T
  *EzKernels, creal_T *HzKernels);
static void get_curly_R(const creal_T Rs_u, const creal_T Rs_d, const creal_T pz,
  real_T zR, const emxArray_real_T *z, real_T iTxLayer, real_T omega, creal_T
  *finRA, creal_T *finRD);
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
  emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > x->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error(TRUE);
    emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  if (k <= x->size[1]) {
  } else {
    emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m4 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    error(b_y, &s_emlrtMCI);
    emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  }

  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &ab_emlrtRTEI);
  j = 0;
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > x->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error(TRUE);
    emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
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
                    &i_emlrtRTEI);
  if (x->size[1] == 0) {
    emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
  } else {
    emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      check_forloop_overflow_error(TRUE);
      emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 1; k <= x->size[1]; k++) {
      idx->data[k - 1] = k;
    }

    emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
    if (1 > x->size[1] - 1) {
      overflow = FALSE;
    } else {
      overflow = (x->size[1] - 1 > 2147483645);
    }

    if (overflow) {
      emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      check_forloop_overflow_error(TRUE);
      emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
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

    emxInit_int32_T(&idx0, 1, &k_emlrtRTEI, TRUE);
    k = idx0->size[0];
    idx0->size[0] = x->size[1];
    emxEnsureCapacity((emxArray__common *)idx0, k, (int32_T)sizeof(int32_T),
                      &j_emlrtRTEI);
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

        emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
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
  int32_T i14;
  int32_T i;
  y = NULL;
  m6 = mxCreateNumericArray(2, u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m6);
  i14 = 0;
  for (i = 0; i < u->size[1]; i++) {
    (*pData)[i14] = u->data[u->size[0] * i];
    i14++;
  }

  emlrtAssign(&y, m6);
  return y;
}

static void getCSEM1DKernels_aniso_hed(real_T krho, real_T f, real_T zRx, real_T
  zTx, emxArray_real_T *z, const emxArray_real_T *sig, creal_T ErKernels[2],
  creal_T EbKernels[2], creal_T HrKernels[2], creal_T HbKernels[2], creal_T
  *EzKernels, creal_T *HzKernels)
{
  int32_T i;
  int32_T i2;
  int32_T k;
  int32_T loop_ub;
  emxArray_creal_T *epsc;
  real_T omega;
  real_T ar;
  real_T ai;
  real_T br;
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
  emxArray_int32_T *r4;
  int32_T i3;
  int32_T n;
  int32_T iv37[2];
  int32_T iv38[2];
  int32_T i4;
  int32_T idx;
  emxArray_creal_T *b_pzI;
  emxArray_int32_T *r5;
  int32_T iv39[2];
  int32_T iv40[2];
  emxArray_int32_T *r6;
  emxArray_creal_T *c_pzI;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_creal_T *rTE;
  emxArray_creal_T *d_epsc;
  int32_T iv41[2];
  emxArray_creal_T *e_epsc;
  emxArray_int32_T *r9;
  int32_T iv42[2];
  real_T pzII_re;
  real_T s;
  emxArray_int32_T *r10;
  emxArray_creal_T *r11;
  emxArray_creal_T *f_epsc;
  int32_T iv43[2];
  emxArray_creal_T *g_epsc;
  emxArray_int32_T *r12;
  int32_T iv44[2];
  emxArray_creal_T *r13;
  emxArray_int32_T *r14;
  emxArray_creal_T *r15;
  emxArray_creal_T *c_rTM;
  emxArray_creal_T *r16;
  const mxArray *b_y;
  const mxArray *m2;
  boolean_T exitg2;
  boolean_T guard2 = FALSE;
  const mxArray *c_y;
  emxArray_int32_T *r17;
  emxArray_int32_T *b_ii;
  emxArray_real_T *iTxLayer;
  const mxArray *d_y;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  const mxArray *e_y;
  emxArray_int32_T *r18;
  emxArray_int32_T *c_ii;
  emxArray_real_T *iRxLayer;
  const mxArray *f_y;
  static const int32_T iv45[2] = { 1, 78 };

  char_T cv16[78];
  static const char_T cv17[78] = { 'E', 'r', 'r', 'o', 'r', ',', ' ', 't', 'r',
    'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ' ', 'a', 'n', 'd', ' ', 'r',
    'e', 'c', 'e', 'i', 'v', 'e', 'r', ' ', 'n', 'e', 'e', 'd', ' ', 't', 'o',
    ' ', 'b', 'e', ' ', 'l', 'o', 'c', 'a', 't', 'e', 'd', ' ', 'i', 'n', ' ',
    't', 'h', 'e', ' ', 's', 'a', 'm', 'e', ' ', 'l', 'a', 'y', 'e', 'r', '!',
    ' ', 'S', 't', 'o', 'p', 'p', 'i', 'n', 'g' };

  creal_T Rs_d;
  creal_T gA_TM;
  creal_T d_pzI;
  creal_T curlyRD;
  real_T bi;
  real_T brm;
  real_T gA_TE_re;
  real_T gA_TE_im;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /* sig(1,:) contains the horizontal conductivities */
  /* sig(2,:) contains the vertical conductivities */
  /* a codegen debug */
  EzKernels->re = 0.0;
  EzKernels->im = 1.0;
  for (i = 0; i < 2; i++) {
    ErKernels[i].re = 0.0;
    ErKernels[i].im = 1.0;
    EbKernels[i].re = 0.0;
    EbKernels[i].im = 1.0;
    HrKernels[i].re = 0.0;
    HrKernels[i].im = 1.0;
    HbKernels[i].re = 0.0;
    HbKernels[i].im = 1.0;
  }

  HzKernels->re = 0.0;
  HzKernels->im = 1.0;

  /*  set the origin to zTx=0 */
  i2 = z->size[0] * z->size[1];
  z->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)z, i2, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  i = z->size[0];
  k = z->size[1];
  loop_ub = i * k;
  for (i2 = 0; i2 < loop_ub; i2++) {
    z->data[i2] -= zTx;
  }

  emxInit_creal_T(&epsc, 2, &o_emlrtRTEI, TRUE);
  zRx -= zTx;

  /*  will need these variables */
  /* won't need */
  /* global omega    */
  omega = 6.2831853071795862 * f;
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  i2 = epsc->size[0] * epsc->size[1];
  epsc->size[0] = 2;
  epsc->size[1] = sig->size[1];
  emxEnsureCapacity((emxArray__common *)epsc, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  loop_ub = sig->size[0] * sig->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    ar = 0.0 * sig->data[i2];
    ai = sig->data[i2];
    if (ai == 0.0) {
      br = ar / omega;
      y = 0.0;
    } else if (ar == 0.0) {
      br = 0.0;
      y = ai / omega;
    } else {
      br = ar / omega;
      y = ai / omega;
    }

    epsc->data[i2].re = 8.854E-12 + br;
    epsc->data[i2].im = y;
  }

  emxInit_creal_T(&pzI, 2, &p_emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);

  /*  prho=krho/omega */
  emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  y = krho / omega;
  y *= y;
  loop_ub = epsc->size[1];
  i2 = pzI->size[0] * pzI->size[1];
  pzI->size[0] = 1;
  pzI->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)pzI, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    pzI->data[pzI->size[0] * i2].re = 1.2566370614359173E-6 * epsc->data
      [epsc->size[0] * i2].re - y;
    pzI->data[pzI->size[0] * i2].im = 1.2566370614359173E-6 * epsc->data
      [epsc->size[0] * i2].im;
  }

  emxInit_creal_T(&pzII, 2, &q_emlrtRTEI, TRUE);
  b_sqrt(pzI);
  emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
  loop_ub = epsc->size[1];
  i2 = pzII->size[0] * pzII->size[1];
  pzII->size[0] = 1;
  pzII->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)pzII, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    pzII->data[pzII->size[0] * i2].re = 1.2566370614359173E-6 * epsc->data
      [epsc->size[0] * i2].re;
    pzII->data[pzII->size[0] * i2].im = 1.2566370614359173E-6 * epsc->data
      [epsc->size[0] * i2].im;
  }

  emxInit_creal_T(&b_epsc, 2, &m_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  y = krho / omega;
  y *= y;
  loop_ub = epsc->size[1];
  i2 = b_epsc->size[0] * b_epsc->size[1];
  b_epsc->size[0] = 1;
  b_epsc->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_epsc, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_epsc->data[b_epsc->size[0] * i2] = epsc->data[epsc->size[0] * i2];
  }

  emxInit_creal_T(&c_epsc, 2, &m_emlrtRTEI, TRUE);
  loop_ub = epsc->size[1];
  i2 = c_epsc->size[0] * c_epsc->size[1];
  c_epsc->size[0] = 1;
  c_epsc->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_epsc, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    c_epsc->data[c_epsc->size[0] * i2] = epsc->data[1 + epsc->size[0] * i2];
  }

  emxInit_creal_T(&rTM, 2, &t_emlrtRTEI, TRUE);
  rdivide(b_epsc, c_epsc, rTM);
  i2 = rTM->size[0] * rTM->size[1];
  rTM->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)rTM, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  i = rTM->size[0];
  k = rTM->size[1];
  loop_ub = i * k;
  emxFree_creal_T(&c_epsc);
  emxFree_creal_T(&b_epsc);
  for (i2 = 0; i2 < loop_ub; i2++) {
    rTM->data[i2].re *= y;
    rTM->data[i2].im *= y;
  }

  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  for (i2 = 0; i2 < 2; i2++) {
    b_pzII[i2] = pzII->size[i2];
  }

  for (i2 = 0; i2 < 2; i2++) {
    b_rTM[i2] = rTM->size[i2];
  }

  emlrtSizeEqCheck2DFastR2012b(b_pzII, b_rTM, &k_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  i2 = pzII->size[0] * pzII->size[1];
  pzII->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)pzII, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  k = pzII->size[0];
  i = pzII->size[1];
  loop_ub = k * i;
  for (i2 = 0; i2 < loop_ub; i2++) {
    pzII->data[i2].re -= rTM->data[i2].re;
    pzII->data[i2].im -= rTM->data[i2].im;
  }

  emxInit_boolean_T(&b_index, 2, &r_emlrtRTEI, TRUE);
  b_sqrt(pzII);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);

  /* sanity check for wavenumber */
  i2 = b_index->size[0] * b_index->size[1];
  b_index->size[0] = 1;
  b_index->size[1] = pzI->size[1];
  emxEnsureCapacity((emxArray__common *)b_index, i2, (int32_T)sizeof(boolean_T),
                    &m_emlrtRTEI);
  loop_ub = pzI->size[0] * pzI->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_index->data[i2] = (pzI->data[i2].im < 0.0);
  }

  b_emxInit_int32_T(&ii, 2, &w_emlrtRTEI, TRUE);
  b_emxInit_int32_T(&r4, 2, &m_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  eml_li_find(b_index, ii);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  eml_li_find(b_index, r4);
  i2 = rTM->size[0] * rTM->size[1];
  rTM->size[0] = 1;
  rTM->size[1] = r4->size[1];
  emxEnsureCapacity((emxArray__common *)rTM, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  loop_ub = r4->size[0] * r4->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    i3 = pzI->size[1];
    n = r4->data[i2];
    rTM->data[i2].re = -pzI->data[emlrtDynamicBoundsCheckFastR2012b(n, 1, i3,
      &nd_emlrtBCI, emlrtRootTLSGlobal) - 1].re;
    i3 = pzI->size[1];
    n = r4->data[i2];
    rTM->data[i2].im = -pzI->data[emlrtDynamicBoundsCheckFastR2012b(n, 1, i3,
      &nd_emlrtBCI, emlrtRootTLSGlobal) - 1].im;
  }

  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  i2 = ii->size[1];
  i3 = rTM->size[1];
  emlrtSizeEqCheck1DFastR2012b(i2, i3, &l_emlrtECI, emlrtRootTLSGlobal);
  i = pzI->size[1];
  loop_ub = rTM->size[0] * rTM->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    i3 = ii->data[i2];
    pzI->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i, &pd_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = rTM->data[i2];
  }

  i2 = b_index->size[0] * b_index->size[1];
  b_index->size[0] = 1;
  b_index->size[1] = pzII->size[1];
  emxEnsureCapacity((emxArray__common *)b_index, i2, (int32_T)sizeof(boolean_T),
                    &m_emlrtRTEI);
  loop_ub = pzII->size[0] * pzII->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_index->data[i2] = (pzII->data[i2].im < 0.0);
  }

  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  eml_li_find(b_index, ii);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  eml_li_find(b_index, r4);
  i2 = rTM->size[0] * rTM->size[1];
  rTM->size[0] = 1;
  rTM->size[1] = r4->size[1];
  emxEnsureCapacity((emxArray__common *)rTM, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  loop_ub = r4->size[0] * r4->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    i3 = pzII->size[1];
    n = r4->data[i2];
    rTM->data[i2].re = -pzII->data[emlrtDynamicBoundsCheckFastR2012b(n, 1, i3,
      &od_emlrtBCI, emlrtRootTLSGlobal) - 1].re;
    i3 = pzII->size[1];
    n = r4->data[i2];
    rTM->data[i2].im = -pzII->data[emlrtDynamicBoundsCheckFastR2012b(n, 1, i3,
      &od_emlrtBCI, emlrtRootTLSGlobal) - 1].im;
  }

  emxFree_int32_T(&r4);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  i2 = ii->size[1];
  i3 = rTM->size[1];
  emlrtSizeEqCheck1DFastR2012b(i2, i3, &m_emlrtECI, emlrtRootTLSGlobal);
  k = pzII->size[1];
  loop_ub = rTM->size[0] * rTM->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    i3 = ii->data[i2];
    pzII->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, k, &qd_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = rTM->data[i2];
  }

  /*  reflection coefficients (downward) for an interface: pzI for TE, pzII for TM    */
  i2 = pzI->size[1];
  emlrtDynamicBoundsCheckFastR2012b(i2, 0, MAX_int32_T, &tc_emlrtBCI,
    emlrtRootTLSGlobal);
  if (1.0 > (real_T)pzI->size[1] - 1.0) {
    loop_ub = 0;
  } else {
    i2 = pzI->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &uc_emlrtBCI, emlrtRootTLSGlobal);
    i2 = pzI->size[1];
    i3 = (int32_T)((real_T)pzI->size[1] - 1.0);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &uc_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  i2 = pzI->size[1];
  emlrtDynamicBoundsCheckFastR2012b(i2, 0, MAX_int32_T, &vc_emlrtBCI,
    emlrtRootTLSGlobal);
  if (2 > pzI->size[1]) {
    i2 = 1;
    i3 = 1;
  } else {
    i2 = 2;
    i3 = pzI->size[1];
    n = pzI->size[1];
    i3 = emlrtDynamicBoundsCheckFastR2012b(n, 1, i3, &wc_emlrtBCI,
      emlrtRootTLSGlobal) + 1;
  }

  iv37[0] = 1;
  iv37[1] = loop_ub;
  iv38[0] = 1;
  iv38[1] = i3 - i2;
  emlrtSizeEqCheck2DFastR2012b(iv37, iv38, &n_emlrtECI, emlrtRootTLSGlobal);
  if (1 > pzI->size[1] - 1) {
    k = 0;
  } else {
    n = pzI->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, n, &xc_emlrtBCI, emlrtRootTLSGlobal);
    n = pzI->size[1];
    i4 = pzI->size[1] - 1;
    k = emlrtDynamicBoundsCheckFastR2012b(i4, 1, n, &xc_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  if (2 > pzI->size[1]) {
    n = 1;
    i4 = 1;
  } else {
    n = 2;
    i4 = pzI->size[1];
    idx = pzI->size[1];
    i4 = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i4, &yc_emlrtBCI,
      emlrtRootTLSGlobal) + 1;
  }

  emxInit_creal_T(&b_pzI, 2, &m_emlrtRTEI, TRUE);
  emxInit_int32_T(&r5, 1, &m_emlrtRTEI, TRUE);
  iv39[0] = 1;
  iv39[1] = k;
  iv40[0] = 1;
  iv40[1] = i4 - n;
  emlrtSizeEqCheck2DFastR2012b(iv39, iv40, &o_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  idx = r5->size[0];
  r5->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)r5, idx, (int32_T)sizeof(int32_T),
                    &m_emlrtRTEI);
  for (idx = 0; idx < loop_ub; idx++) {
    r5->data[idx] = 1 + idx;
  }

  emxInit_int32_T(&r6, 1, &m_emlrtRTEI, TRUE);
  idx = r6->size[0];
  r6->size[0] = i3 - i2;
  emxEnsureCapacity((emxArray__common *)r6, idx, (int32_T)sizeof(int32_T),
                    &m_emlrtRTEI);
  loop_ub = i3 - i2;
  for (i3 = 0; i3 < loop_ub; i3++) {
    r6->data[i3] = i2 + i3;
  }

  i2 = b_pzI->size[0] * b_pzI->size[1];
  b_pzI->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)b_pzI, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  i = r5->size[0];
  i2 = b_pzI->size[0] * b_pzI->size[1];
  b_pzI->size[1] = i;
  emxEnsureCapacity((emxArray__common *)b_pzI, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  loop_ub = r5->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_pzI->data[i2].re = pzI->data[r5->data[i2] - 1].re - pzI->data[r6->data[i2]
      - 1].re;
    b_pzI->data[i2].im = pzI->data[r5->data[i2] - 1].im - pzI->data[r6->data[i2]
      - 1].im;
  }

  emxFree_int32_T(&r6);
  emxFree_int32_T(&r5);
  emxInit_creal_T(&c_pzI, 2, &m_emlrtRTEI, TRUE);
  emxInit_int32_T(&r7, 1, &m_emlrtRTEI, TRUE);
  i2 = r7->size[0];
  r7->size[0] = k;
  emxEnsureCapacity((emxArray__common *)r7, i2, (int32_T)sizeof(int32_T),
                    &m_emlrtRTEI);
  for (i2 = 0; i2 < k; i2++) {
    r7->data[i2] = 1 + i2;
  }

  emxInit_int32_T(&r8, 1, &m_emlrtRTEI, TRUE);
  i2 = r8->size[0];
  r8->size[0] = i4 - n;
  emxEnsureCapacity((emxArray__common *)r8, i2, (int32_T)sizeof(int32_T),
                    &m_emlrtRTEI);
  loop_ub = i4 - n;
  for (i2 = 0; i2 < loop_ub; i2++) {
    r8->data[i2] = n + i2;
  }

  i2 = c_pzI->size[0] * c_pzI->size[1];
  c_pzI->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)c_pzI, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  i = r7->size[0];
  i2 = c_pzI->size[0] * c_pzI->size[1];
  c_pzI->size[1] = i;
  emxEnsureCapacity((emxArray__common *)c_pzI, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  loop_ub = r7->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    c_pzI->data[i2].re = pzI->data[r7->data[i2] - 1].re + pzI->data[r8->data[i2]
      - 1].re;
    c_pzI->data[i2].im = pzI->data[r7->data[i2] - 1].im + pzI->data[r8->data[i2]
      - 1].im;
  }

  emxFree_int32_T(&r8);
  emxFree_int32_T(&r7);
  emxInit_creal_T(&rTE, 2, &s_emlrtRTEI, TRUE);
  rdivide(b_pzI, c_pzI, rTE);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  emxFree_creal_T(&c_pzI);
  emxFree_creal_T(&b_pzI);
  if (1 > epsc->size[1] - 1) {
    loop_ub = 0;
  } else {
    i2 = epsc->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &ad_emlrtBCI, emlrtRootTLSGlobal);
    i2 = epsc->size[1];
    i3 = epsc->size[1] - 1;
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &ad_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  i2 = pzII->size[1];
  emlrtDynamicBoundsCheckFastR2012b(i2, 0, MAX_int32_T, &bd_emlrtBCI,
    emlrtRootTLSGlobal);
  if (2 > pzII->size[1]) {
    i2 = 1;
    i3 = 1;
  } else {
    i2 = 2;
    i3 = pzII->size[1];
    n = pzII->size[1];
    i3 = emlrtDynamicBoundsCheckFastR2012b(n, 1, i3, &cd_emlrtBCI,
      emlrtRootTLSGlobal) + 1;
  }

  emxInit_creal_T(&d_epsc, 2, &m_emlrtRTEI, TRUE);
  n = d_epsc->size[0] * d_epsc->size[1];
  d_epsc->size[0] = 1;
  d_epsc->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)d_epsc, n, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    d_epsc->data[d_epsc->size[0] * n] = epsc->data[epsc->size[0] * n];
  }

  for (n = 0; n < 2; n++) {
    b_pzII[n] = d_epsc->size[n];
  }

  emxFree_creal_T(&d_epsc);
  iv41[0] = 1;
  iv41[1] = i3 - i2;
  emlrtSizeEqCheck2DFastR2012b(b_pzII, iv41, &p_emlrtECI, emlrtRootTLSGlobal);
  if (2 > epsc->size[1]) {
    n = 0;
    i4 = 0;
  } else {
    n = 1;
    i4 = epsc->size[1];
    idx = epsc->size[1];
    i4 = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i4, &dd_emlrtBCI,
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

  emxInit_creal_T(&e_epsc, 2, &m_emlrtRTEI, TRUE);
  idx = e_epsc->size[0] * e_epsc->size[1];
  e_epsc->size[0] = 1;
  e_epsc->size[1] = i4 - n;
  emxEnsureCapacity((emxArray__common *)e_epsc, idx, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  i = i4 - n;
  for (idx = 0; idx < i; idx++) {
    e_epsc->data[e_epsc->size[0] * idx] = epsc->data[epsc->size[0] * (n + idx)];
  }

  for (idx = 0; idx < 2; idx++) {
    b_pzII[idx] = e_epsc->size[idx];
  }

  emxFree_creal_T(&e_epsc);
  emxInit_int32_T(&r9, 1, &m_emlrtRTEI, TRUE);
  iv42[0] = 1;
  iv42[1] = k;
  emlrtSizeEqCheck2DFastR2012b(b_pzII, iv42, &q_emlrtECI, emlrtRootTLSGlobal);
  idx = r9->size[0];
  r9->size[0] = i3 - i2;
  emxEnsureCapacity((emxArray__common *)r9, idx, (int32_T)sizeof(int32_T),
                    &m_emlrtRTEI);
  i = i3 - i2;
  for (i3 = 0; i3 < i; i3++) {
    r9->data[i3] = i2 + i3;
  }

  i2 = rTM->size[0] * rTM->size[1];
  rTM->size[0] = 1;
  rTM->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)rTM, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    y = epsc->data[epsc->size[0] * i2].re;
    br = epsc->data[epsc->size[0] * i2].im;
    pzII_re = pzII->data[r9->data[i2] - 1].re;
    s = pzII->data[r9->data[i2] - 1].im;
    rTM->data[rTM->size[0] * i2].re = y * pzII_re - br * s;
    rTM->data[rTM->size[0] * i2].im = y * s + br * pzII_re;
  }

  emxFree_int32_T(&r9);
  emxInit_int32_T(&r10, 1, &m_emlrtRTEI, TRUE);
  i2 = r10->size[0];
  r10->size[0] = k;
  emxEnsureCapacity((emxArray__common *)r10, i2, (int32_T)sizeof(int32_T),
                    &m_emlrtRTEI);
  for (i2 = 0; i2 < k; i2++) {
    r10->data[i2] = 1 + i2;
  }

  emxInit_creal_T(&r11, 2, &m_emlrtRTEI, TRUE);
  i2 = r11->size[0] * r11->size[1];
  r11->size[0] = 1;
  r11->size[1] = i4 - n;
  emxEnsureCapacity((emxArray__common *)r11, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  loop_ub = i4 - n;
  for (i2 = 0; i2 < loop_ub; i2++) {
    y = epsc->data[epsc->size[0] * (n + i2)].re;
    br = epsc->data[epsc->size[0] * (n + i2)].im;
    pzII_re = pzII->data[r10->data[i2] - 1].re;
    s = pzII->data[r10->data[i2] - 1].im;
    r11->data[r11->size[0] * i2].re = y * pzII_re - br * s;
    r11->data[r11->size[0] * i2].im = y * s + br * pzII_re;
  }

  emxFree_int32_T(&r10);
  for (i2 = 0; i2 < 2; i2++) {
    b_rTM[i2] = rTM->size[i2];
  }

  for (i2 = 0; i2 < 2; i2++) {
    iv37[i2] = r11->size[i2];
  }

  emlrtSizeEqCheck2DFastR2012b(b_rTM, iv37, &p_emlrtECI, emlrtRootTLSGlobal);
  if (1 > epsc->size[1] - 1) {
    loop_ub = 0;
  } else {
    i2 = epsc->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &fd_emlrtBCI, emlrtRootTLSGlobal);
    i2 = epsc->size[1];
    i3 = epsc->size[1] - 1;
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &fd_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  if (2 > pzII->size[1]) {
    i2 = 1;
    i3 = 1;
  } else {
    i2 = 2;
    i3 = pzII->size[1];
    n = pzII->size[1];
    i3 = emlrtDynamicBoundsCheckFastR2012b(n, 1, i3, &gd_emlrtBCI,
      emlrtRootTLSGlobal) + 1;
  }

  emxInit_creal_T(&f_epsc, 2, &m_emlrtRTEI, TRUE);
  n = f_epsc->size[0] * f_epsc->size[1];
  f_epsc->size[0] = 1;
  f_epsc->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)f_epsc, n, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  for (n = 0; n < loop_ub; n++) {
    f_epsc->data[f_epsc->size[0] * n] = epsc->data[epsc->size[0] * n];
  }

  for (n = 0; n < 2; n++) {
    b_pzII[n] = f_epsc->size[n];
  }

  emxFree_creal_T(&f_epsc);
  iv43[0] = 1;
  iv43[1] = i3 - i2;
  emlrtSizeEqCheck2DFastR2012b(b_pzII, iv43, &r_emlrtECI, emlrtRootTLSGlobal);
  if (2 > epsc->size[1]) {
    n = 0;
    i4 = 0;
  } else {
    n = 1;
    i4 = epsc->size[1];
    idx = epsc->size[1];
    i4 = emlrtDynamicBoundsCheckFastR2012b(idx, 1, i4, &hd_emlrtBCI,
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

  emxInit_creal_T(&g_epsc, 2, &m_emlrtRTEI, TRUE);
  idx = g_epsc->size[0] * g_epsc->size[1];
  g_epsc->size[0] = 1;
  g_epsc->size[1] = i4 - n;
  emxEnsureCapacity((emxArray__common *)g_epsc, idx, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  i = i4 - n;
  for (idx = 0; idx < i; idx++) {
    g_epsc->data[g_epsc->size[0] * idx] = epsc->data[epsc->size[0] * (n + idx)];
  }

  for (idx = 0; idx < 2; idx++) {
    b_pzII[idx] = g_epsc->size[idx];
  }

  emxFree_creal_T(&g_epsc);
  emxInit_int32_T(&r12, 1, &m_emlrtRTEI, TRUE);
  iv44[0] = 1;
  iv44[1] = k;
  emlrtSizeEqCheck2DFastR2012b(b_pzII, iv44, &s_emlrtECI, emlrtRootTLSGlobal);
  idx = r12->size[0];
  r12->size[0] = i3 - i2;
  emxEnsureCapacity((emxArray__common *)r12, idx, (int32_T)sizeof(int32_T),
                    &m_emlrtRTEI);
  i = i3 - i2;
  for (i3 = 0; i3 < i; i3++) {
    r12->data[i3] = i2 + i3;
  }

  emxInit_creal_T(&r13, 2, &m_emlrtRTEI, TRUE);
  i2 = r13->size[0] * r13->size[1];
  r13->size[0] = 1;
  r13->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)r13, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    y = epsc->data[epsc->size[0] * i2].re;
    br = epsc->data[epsc->size[0] * i2].im;
    pzII_re = pzII->data[r12->data[i2] - 1].re;
    s = pzII->data[r12->data[i2] - 1].im;
    r13->data[r13->size[0] * i2].re = y * pzII_re - br * s;
    r13->data[r13->size[0] * i2].im = y * s + br * pzII_re;
  }

  emxFree_int32_T(&r12);
  emxInit_int32_T(&r14, 1, &m_emlrtRTEI, TRUE);
  i2 = r14->size[0];
  r14->size[0] = k;
  emxEnsureCapacity((emxArray__common *)r14, i2, (int32_T)sizeof(int32_T),
                    &m_emlrtRTEI);
  for (i2 = 0; i2 < k; i2++) {
    r14->data[i2] = 1 + i2;
  }

  emxInit_creal_T(&r15, 2, &m_emlrtRTEI, TRUE);
  i2 = r15->size[0] * r15->size[1];
  r15->size[0] = 1;
  r15->size[1] = i4 - n;
  emxEnsureCapacity((emxArray__common *)r15, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  loop_ub = i4 - n;
  for (i2 = 0; i2 < loop_ub; i2++) {
    y = epsc->data[epsc->size[0] * (n + i2)].re;
    br = epsc->data[epsc->size[0] * (n + i2)].im;
    pzII_re = pzII->data[r14->data[i2] - 1].re;
    s = pzII->data[r14->data[i2] - 1].im;
    r15->data[r15->size[0] * i2].re = y * pzII_re - br * s;
    r15->data[r15->size[0] * i2].im = y * s + br * pzII_re;
  }

  emxFree_int32_T(&r14);
  for (i2 = 0; i2 < 2; i2++) {
    iv37[i2] = r13->size[i2];
  }

  for (i2 = 0; i2 < 2; i2++) {
    iv38[i2] = r15->size[i2];
  }

  emxInit_creal_T(&c_rTM, 2, &m_emlrtRTEI, TRUE);
  emlrtSizeEqCheck2DFastR2012b(iv37, iv38, &r_emlrtECI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  i2 = c_rTM->size[0] * c_rTM->size[1];
  c_rTM->size[0] = 1;
  c_rTM->size[1] = rTM->size[1];
  emxEnsureCapacity((emxArray__common *)c_rTM, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  loop_ub = rTM->size[0] * rTM->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    c_rTM->data[i2].re = rTM->data[i2].re - r11->data[i2].re;
    c_rTM->data[i2].im = rTM->data[i2].im - r11->data[i2].im;
  }

  emxFree_creal_T(&r11);
  emxInit_creal_T(&r16, 2, &m_emlrtRTEI, TRUE);
  i2 = r16->size[0] * r16->size[1];
  r16->size[0] = 1;
  r16->size[1] = r13->size[1];
  emxEnsureCapacity((emxArray__common *)r16, i2, (int32_T)sizeof(creal_T),
                    &m_emlrtRTEI);
  loop_ub = r13->size[0] * r13->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    r16->data[i2].re = r13->data[i2].re + r15->data[i2].re;
    r16->data[i2].im = r13->data[i2].im + r15->data[i2].im;
  }

  emxFree_creal_T(&r15);
  emxFree_creal_T(&r13);
  rdivide(c_rTM, r16, rTM);
  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);

  /*          % Find the layer containing the transmitter: */
  /* for codegen, hardcoding */
  /*     iTxLayer =2;iRxLayer =2; */
  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  i2 = b_index->size[0] * b_index->size[1];
  b_index->size[0] = 1;
  b_index->size[1] = z->size[1];
  emxEnsureCapacity((emxArray__common *)b_index, i2, (int32_T)sizeof(boolean_T),
                    &m_emlrtRTEI);
  loop_ub = z->size[0] * z->size[1];
  emxFree_creal_T(&r16);
  emxFree_creal_T(&c_rTM);
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_index->data[i2] = (z->data[i2] < 0.0);
  }

  emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  k = muIntScalarMin_sint32(1, b_index->size[1]);
  if (k <= b_index->size[1]) {
  } else {
    emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m2 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m2);
    error(b_y, &t_emlrtMCI);
    emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  }

  idx = 0;
  i2 = ii->size[0] * ii->size[1];
  ii->size[0] = 1;
  ii->size[1] = k;
  emxEnsureCapacity((emxArray__common *)ii, i2, (int32_T)sizeof(int32_T),
                    &n_emlrtRTEI);
  emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m2 = mxCreateString("Assertion failed.");
    emlrtAssign(&c_y, m2);
    error(c_y, &u_emlrtMCI);
    emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (k == 1) {
    if (idx == 0) {
      i2 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i2, (int32_T)sizeof(int32_T),
                        &m_emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      loop_ub = -1;
    } else {
      loop_ub = 0;
    }

    emxInit_int32_T(&r17, 1, &m_emlrtRTEI, TRUE);
    i2 = r17->size[0];
    r17->size[0] = loop_ub + 1;
    emxEnsureCapacity((emxArray__common *)r17, i2, (int32_T)sizeof(int32_T),
                      &m_emlrtRTEI);
    i2 = 0;
    while (i2 <= loop_ub) {
      r17->data[0] = 1;
      i2 = 1;
    }

    b_emxInit_int32_T(&b_ii, 2, &m_emlrtRTEI, TRUE);
    i = r17->size[0];
    i2 = b_ii->size[0] * b_ii->size[1];
    b_ii->size[0] = 1;
    b_ii->size[1] = i;
    emxEnsureCapacity((emxArray__common *)b_ii, i2, (int32_T)sizeof(int32_T),
                      &m_emlrtRTEI);
    for (i2 = 0; i2 < i; i2++) {
      i3 = 0;
      while (i3 <= 0) {
        b_ii->data[b_ii->size[0] * i2] = ii->data[r17->data[i2] - 1];
        i3 = 1;
      }
    }

    emxFree_int32_T(&r17);
    i2 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = b_ii->size[1];
    emxEnsureCapacity((emxArray__common *)ii, i2, (int32_T)sizeof(int32_T),
                      &m_emlrtRTEI);
    loop_ub = b_ii->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      ii->data[ii->size[0] * i2] = b_ii->data[b_ii->size[0] * i2];
    }

    emxFree_int32_T(&b_ii);
    emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
    n = ii->size[1];
    i2 = ii->size[1];
    i2 += (i2 < 0);
    if (i2 >= 0) {
      i = (int32_T)((uint32_T)i2 >> 1);
    } else {
      i = ~(int32_T)((uint32_T)~i2 >> 1);
    }

    emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 1; k <= i; k++) {
      idx = ii->data[k - 1];
      ii->data[k - 1] = ii->data[n - k];
      ii->data[n - k] = idx;
    }

    emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_real_T(&iTxLayer, 2, &u_emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  i2 = iTxLayer->size[0] * iTxLayer->size[1];
  iTxLayer->size[0] = 1;
  iTxLayer->size[1] = ii->size[1];
  emxEnsureCapacity((emxArray__common *)iTxLayer, i2, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  loop_ub = ii->size[0] * ii->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    iTxLayer->data[i2] = ii->data[i2];
  }

  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  if (iTxLayer->size[1] == 0) {
    i2 = iTxLayer->size[0] * iTxLayer->size[1];
    iTxLayer->size[0] = 1;
    iTxLayer->size[1] = 1;
    emxEnsureCapacity((emxArray__common *)iTxLayer, i2, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    iTxLayer->data[0] = z->size[1];

    /*  in the last layer */
  }

  /*  Find the layer containing the receiver: */
  /*  */
  emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  i2 = b_index->size[0] * b_index->size[1];
  b_index->size[0] = 1;
  b_index->size[1] = z->size[1];
  emxEnsureCapacity((emxArray__common *)b_index, i2, (int32_T)sizeof(boolean_T),
                    &m_emlrtRTEI);
  loop_ub = z->size[0] * z->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_index->data[i2] = (z->data[i2] < zRx);
  }

  emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  k = muIntScalarMin_sint32(1, b_index->size[1]);
  if (k <= b_index->size[1]) {
  } else {
    emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
    d_y = NULL;
    m2 = mxCreateString("Assertion failed.");
    emlrtAssign(&d_y, m2);
    error(d_y, &t_emlrtMCI);
    emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  }

  idx = 0;
  i2 = ii->size[0] * ii->size[1];
  ii->size[0] = 1;
  ii->size[1] = k;
  emxEnsureCapacity((emxArray__common *)ii, i2, (int32_T)sizeof(int32_T),
                    &n_emlrtRTEI);
  emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
    e_y = NULL;
    m2 = mxCreateString("Assertion failed.");
    emlrtAssign(&e_y, m2);
    error(e_y, &u_emlrtMCI);
    emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (k == 1) {
    if (idx == 0) {
      i2 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i2, (int32_T)sizeof(int32_T),
                        &m_emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      loop_ub = -1;
    } else {
      loop_ub = 0;
    }

    emxInit_int32_T(&r18, 1, &m_emlrtRTEI, TRUE);
    i2 = r18->size[0];
    r18->size[0] = loop_ub + 1;
    emxEnsureCapacity((emxArray__common *)r18, i2, (int32_T)sizeof(int32_T),
                      &m_emlrtRTEI);
    i2 = 0;
    while (i2 <= loop_ub) {
      r18->data[0] = 1;
      i2 = 1;
    }

    b_emxInit_int32_T(&c_ii, 2, &m_emlrtRTEI, TRUE);
    i = r18->size[0];
    i2 = c_ii->size[0] * c_ii->size[1];
    c_ii->size[0] = 1;
    c_ii->size[1] = i;
    emxEnsureCapacity((emxArray__common *)c_ii, i2, (int32_T)sizeof(int32_T),
                      &m_emlrtRTEI);
    for (i2 = 0; i2 < i; i2++) {
      i3 = 0;
      while (i3 <= 0) {
        c_ii->data[c_ii->size[0] * i2] = ii->data[r18->data[i2] - 1];
        i3 = 1;
      }
    }

    emxFree_int32_T(&r18);
    i2 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = c_ii->size[1];
    emxEnsureCapacity((emxArray__common *)ii, i2, (int32_T)sizeof(int32_T),
                      &m_emlrtRTEI);
    loop_ub = c_ii->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      ii->data[ii->size[0] * i2] = c_ii->data[c_ii->size[0] * i2];
    }

    emxFree_int32_T(&c_ii);
    emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
    n = ii->size[1];
    i2 = ii->size[1];
    i2 += (i2 < 0);
    if (i2 >= 0) {
      i = (int32_T)((uint32_T)i2 >> 1);
    } else {
      i = ~(int32_T)((uint32_T)~i2 >> 1);
    }

    emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
    for (k = 1; k <= i; k++) {
      idx = ii->data[k - 1];
      ii->data[k - 1] = ii->data[n - k];
      ii->data[n - k] = idx;
    }

    emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxInit_real_T(&iRxLayer, 2, &v_emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  i2 = iRxLayer->size[0] * iRxLayer->size[1];
  iRxLayer->size[0] = 1;
  iRxLayer->size[1] = ii->size[1];
  emxEnsureCapacity((emxArray__common *)iRxLayer, i2, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  loop_ub = ii->size[0] * ii->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    iRxLayer->data[i2] = ii->data[i2];
  }

  emxFree_int32_T(&ii);
  emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  if (iRxLayer->size[1] == 0) {
    i2 = iRxLayer->size[0] * iRxLayer->size[1];
    iRxLayer->size[0] = 1;
    iRxLayer->size[1] = 1;
    emxEnsureCapacity((emxArray__common *)iRxLayer, i2, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    iRxLayer->data[0] = z->size[1];

    /*  in the last layer */
  }

  if (iTxLayer->data[0] != iRxLayer->data[0]) {
    beep(&m_emlrtMCI);
    f_y = NULL;
    m2 = mxCreateCharArray(2, iv45);
    memcpy(&cv16[0], &cv17[0], 78U * sizeof(char_T));
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 78, m2, cv16);
    emlrtAssign(&f_y, m2);
    disp(f_y, &n_emlrtMCI);
  } else {
    /*  kernels */
    /*  TE mode, pzI */
    emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    stacks(pzI, iTxLayer->data[0], rTE, z, omega, &gA_TM, &Rs_d);
    emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    i2 = pzI->size[1];
    i3 = (int32_T)iTxLayer->data[0];
    d_pzI = pzI->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &rd_emlrtBCI,
      emlrtRootTLSGlobal) - 1];
    get_curly_R(gA_TM, Rs_d, d_pzI, zRx, z, iTxLayer->data[0], omega, &gA_TM,
                &curlyRD);
    emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    i2 = pzI->size[1];
    i3 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &jd_emlrtBCI,
      emlrtRootTLSGlobal);
    br = pzI->data[(int32_T)iTxLayer->data[0] - 1].re;
    bi = pzI->data[(int32_T)iTxLayer->data[0] - 1].im;
    if (bi == 0.0) {
      br = 1.2566370614359173E-6 / br;
      y = 0.0;
    } else if (br == 0.0) {
      br = 0.0;
      y = -(1.2566370614359173E-6 / bi);
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        br = (1.2566370614359173E-6 + s * 0.0) / y;
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

        br = 1.2566370614359173E-6 * y / brm;
        y = (-0.0 - 1.2566370614359173E-6 * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        br = s * 1.2566370614359173E-6 / y;
        y = (s * 0.0 - 1.2566370614359173E-6) / y;
      }
    }

    gA_TE_re = br * gA_TM.re - y * gA_TM.im;
    gA_TE_im = br * gA_TM.im + y * gA_TM.re;

    /* [Rs_uH,Rs_dH]     = stacks(pzI,iTxLayer,-rTE,z); */
    /*  TM mode, pzII */
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    stacks(pzII, iTxLayer->data[0], rTM, z, omega, &gA_TM, &Rs_d);
    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
    i2 = pzII->size[1];
    i3 = (int32_T)iTxLayer->data[0];
    d_pzI = pzII->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &sd_emlrtBCI,
      emlrtRootTLSGlobal) - 1];
    get_curly_R(gA_TM, Rs_d, d_pzI, zRx, z, iTxLayer->data[0], omega, &gA_TM,
                &Rs_d);
    emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
    i2 = pzII->size[1];
    i3 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &kd_emlrtBCI,
      emlrtRootTLSGlobal);
    i2 = epsc->size[1];
    i3 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &ld_emlrtBCI,
      emlrtRootTLSGlobal);
    ar = pzII->data[(int32_T)iTxLayer->data[0] - 1].re;
    ai = pzII->data[(int32_T)iTxLayer->data[0] - 1].im;
    br = epsc->data[epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].re;
    bi = epsc->data[epsc->size[0] * ((int32_T)iTxLayer->data[0] - 1)].im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        pzII_re = ar / br;
        s = 0.0;
      } else if (ar == 0.0) {
        pzII_re = 0.0;
        s = ai / br;
      } else {
        pzII_re = ar / br;
        s = ai / br;
      }
    } else if (br == 0.0) {
      if (ar == 0.0) {
        pzII_re = ai / bi;
        s = 0.0;
      } else if (ai == 0.0) {
        pzII_re = 0.0;
        s = -(ar / bi);
      } else {
        pzII_re = ai / bi;
        s = -(ar / bi);
      }
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        pzII_re = (ar + s * ai) / y;
        s = (ai - s * ar) / y;
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

        pzII_re = (ar * y + ai * s) / brm;
        s = (ai * y - ar * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        pzII_re = (s * ar + ai) / y;
        s = (s * ai - ar) / y;
      }
    }

    y = gA_TM.re;
    br = gA_TM.im;
    gA_TM.re = pzII_re * gA_TM.re - s * gA_TM.im;
    gA_TM.im = pzII_re * br + s * y;

    /* [Rs_uH,Rs_dH]     = stacks(pzII,iTxLayer,-rTM,z); */
    /*  Kernels according to Loseth, without the bessel functions multiplied */
    /* Er */
    ar = -krho * gA_TM.re;
    ai = -krho * gA_TM.im;
    if (ai == 0.0) {
      y = ar / 4.0;
      ar = 0.0;
    } else if (ar == 0.0) {
      y = 0.0;
      ar = ai / 4.0;
    } else {
      y = ar / 4.0;
      ar = ai / 4.0;
    }

    if (ar == 0.0) {
      ErKernels[0].re = y / 3.1415926535897931;
      ErKernels[0].im = 0.0;
    } else if (y == 0.0) {
      ErKernels[0].re = 0.0;
      ErKernels[0].im = ar / 3.1415926535897931;
    } else {
      ErKernels[0].re = y / 3.1415926535897931;
      ErKernels[0].im = ar / 3.1415926535897931;
    }

    ar = -(gA_TE_re - gA_TM.re);
    ai = -(gA_TE_im - gA_TM.im);
    if (ai == 0.0) {
      br = ar / 4.0;
      y = 0.0;
    } else if (ar == 0.0) {
      br = 0.0;
      y = ai / 4.0;
    } else {
      br = ar / 4.0;
      y = ai / 4.0;
    }

    if (y == 0.0) {
      ErKernels[1].re = br / 3.1415926535897931;
      ErKernels[1].im = 0.0;
    } else if (br == 0.0) {
      ErKernels[1].re = 0.0;
      ErKernels[1].im = y / 3.1415926535897931;
    } else {
      ErKernels[1].re = br / 3.1415926535897931;
      ErKernels[1].im = y / 3.1415926535897931;
    }

    /* Eb */
    ar = krho * gA_TE_re;
    ai = krho * gA_TE_im;
    if (ai == 0.0) {
      y = ar / 4.0;
      ar = 0.0;
    } else if (ar == 0.0) {
      y = 0.0;
      ar = ai / 4.0;
    } else {
      y = ar / 4.0;
      ar = ai / 4.0;
    }

    if (ar == 0.0) {
      EbKernels[0].re = y / 3.1415926535897931;
      EbKernels[0].im = 0.0;
    } else if (y == 0.0) {
      EbKernels[0].re = 0.0;
      EbKernels[0].im = ar / 3.1415926535897931;
    } else {
      EbKernels[0].re = y / 3.1415926535897931;
      EbKernels[0].im = ar / 3.1415926535897931;
    }

    ar = -(gA_TE_re - gA_TM.re);
    ai = -(gA_TE_im - gA_TM.im);
    if (ai == 0.0) {
      br = ar / 4.0;
      y = 0.0;
    } else if (ar == 0.0) {
      br = 0.0;
      y = ai / 4.0;
    } else {
      br = ar / 4.0;
      y = ai / 4.0;
    }

    if (y == 0.0) {
      EbKernels[1].re = br / 3.1415926535897931;
      EbKernels[1].im = 0.0;
    } else if (br == 0.0) {
      EbKernels[1].re = 0.0;
      EbKernels[1].im = y / 3.1415926535897931;
    } else {
      EbKernels[1].re = br / 3.1415926535897931;
      EbKernels[1].im = y / 3.1415926535897931;
    }

    /* Hr */
    ar = -krho * curlyRD.re;
    ai = -krho * curlyRD.im;
    if (ai == 0.0) {
      y = ar / 4.0;
      ar = 0.0;
    } else if (ar == 0.0) {
      y = 0.0;
      ar = ai / 4.0;
    } else {
      y = ar / 4.0;
      ar = ai / 4.0;
    }

    if (ar == 0.0) {
      HrKernels[0].re = y / 3.1415926535897931;
      HrKernels[0].im = 0.0;
    } else if (y == 0.0) {
      HrKernels[0].re = 0.0;
      HrKernels[0].im = ar / 3.1415926535897931;
    } else {
      HrKernels[0].re = y / 3.1415926535897931;
      HrKernels[0].im = ar / 3.1415926535897931;
    }

    ar = curlyRD.re - Rs_d.re;
    ai = curlyRD.im - Rs_d.im;
    if (ai == 0.0) {
      br = ar / 4.0;
      y = 0.0;
    } else if (ar == 0.0) {
      br = 0.0;
      y = ai / 4.0;
    } else {
      br = ar / 4.0;
      y = ai / 4.0;
    }

    if (y == 0.0) {
      HrKernels[1].re = br / 3.1415926535897931;
      HrKernels[1].im = 0.0;
    } else if (br == 0.0) {
      HrKernels[1].re = 0.0;
      HrKernels[1].im = y / 3.1415926535897931;
    } else {
      HrKernels[1].re = br / 3.1415926535897931;
      HrKernels[1].im = y / 3.1415926535897931;
    }

    /* Hb */
    ar = -krho * Rs_d.re;
    ai = -krho * Rs_d.im;
    if (ai == 0.0) {
      y = ar / 4.0;
      ar = 0.0;
    } else if (ar == 0.0) {
      y = 0.0;
      ar = ai / 4.0;
    } else {
      y = ar / 4.0;
      ar = ai / 4.0;
    }

    if (ar == 0.0) {
      HbKernels[0].re = y / 3.1415926535897931;
      HbKernels[0].im = 0.0;
    } else if (y == 0.0) {
      HbKernels[0].re = 0.0;
      HbKernels[0].im = ar / 3.1415926535897931;
    } else {
      HbKernels[0].re = y / 3.1415926535897931;
      HbKernels[0].im = ar / 3.1415926535897931;
    }

    ar = -(curlyRD.re - Rs_d.re);
    ai = -(curlyRD.im - Rs_d.im);
    if (ai == 0.0) {
      br = ar / 4.0;
      y = 0.0;
    } else if (ar == 0.0) {
      br = 0.0;
      y = ai / 4.0;
    } else {
      br = ar / 4.0;
      y = ai / 4.0;
    }

    if (y == 0.0) {
      HbKernels[1].re = br / 3.1415926535897931;
      HbKernels[1].im = 0.0;
    } else if (br == 0.0) {
      HbKernels[1].re = 0.0;
      HbKernels[1].im = y / 3.1415926535897931;
    } else {
      HbKernels[1].re = br / 3.1415926535897931;
      HbKernels[1].im = y / 3.1415926535897931;
    }

    /* Ez */
    i2 = epsc->size[1];
    i3 = (int32_T)iTxLayer->data[0];
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &md_emlrtBCI,
      emlrtRootTLSGlobal);
    y = krho * krho * Rs_d.re;
    ar = krho * krho * Rs_d.im;
    ai = y * 0.0 - ar;
    ar = y + ar * 0.0;
    br = 12.566370614359172 * omega * epsc->data[1 + epsc->size[0] * ((int32_T)
      iTxLayer->data[0] - 1)].re;
    bi = 12.566370614359172 * omega * epsc->data[1 + epsc->size[0] * ((int32_T)
      iTxLayer->data[0] - 1)].im;
    if (bi == 0.0) {
      if (ar == 0.0) {
        EzKernels->re = ai / br;
        EzKernels->im = 0.0;
      } else if (ai == 0.0) {
        EzKernels->re = 0.0;
        EzKernels->im = ar / br;
      } else {
        EzKernels->re = ai / br;
        EzKernels->im = ar / br;
      }
    } else if (br == 0.0) {
      if (ai == 0.0) {
        EzKernels->re = ar / bi;
        EzKernels->im = 0.0;
      } else if (ar == 0.0) {
        EzKernels->re = 0.0;
        EzKernels->im = -(ai / bi);
      } else {
        EzKernels->re = ar / bi;
        EzKernels->im = -(ai / bi);
      }
    } else {
      brm = muDoubleScalarAbs(br);
      y = muDoubleScalarAbs(bi);
      if (brm > y) {
        s = bi / br;
        y = br + s * bi;
        EzKernels->re = (ai + s * ar) / y;
        EzKernels->im = (ar - s * ai) / y;
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

        EzKernels->re = (ai * y + ar * s) / brm;
        EzKernels->im = (ar * y - ai * s) / brm;
      } else {
        s = br / bi;
        y = bi + s * br;
        EzKernels->re = (s * ai + ar) / y;
        EzKernels->im = (s * ar - ai) / y;
      }
    }

    /*  needs multiplication by 1i/omega/epsc(2,iTxLayer) after hankel  */
    /*  transform (done here) */
    /* Hz */
    y = krho * krho * gA_TE_re;
    ar = krho * krho * gA_TE_im;
    ai = y * 0.0 - ar;
    ar = y + ar * 0.0;
    br = omega * 1.2566370614359173E-6 * 4.0 * 3.1415926535897931;
    if (ar == 0.0) {
      HzKernels->re = ai / br;
      HzKernels->im = 0.0;
    } else if (ai == 0.0) {
      HzKernels->re = 0.0;
      HzKernels->im = ar / br;
    } else {
      HzKernels->re = ai / br;
      HzKernels->im = ar / br;
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
  *finRA, creal_T *finRD)
{
  int32_T i10;
  int32_T i11;
  int32_T i12;
  int32_T i13;
  real_T d;
  real_T re;
  real_T im;
  real_T r;
  real_T y_im;
  real_T b_r;
  real_T b_y_im;
  real_T c_r;
  real_T c_y_im;
  real_T d_y_im;
  real_T d_r;
  real_T r_re;
  real_T b_r_re;

  /* global omega */
  i10 = z->size[1];
  i11 = (int32_T)emlrtIntegerCheckFastR2012b(iTxLayer + 1.0, &c_emlrtDCI,
    emlrtRootTLSGlobal);
  i12 = z->size[1];
  i13 = (int32_T)emlrtIntegerCheckFastR2012b(iTxLayer, &d_emlrtDCI,
    emlrtRootTLSGlobal);
  d = z->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &te_emlrtBCI,
    emlrtRootTLSGlobal) - 1] - z->data[emlrtDynamicBoundsCheckFastR2012b(i13, 1,
    i12, &ue_emlrtBCI, emlrtRootTLSGlobal) - 1];
  if (zR >= 0.0) {
    i10 = z->size[1];
    i11 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &se_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * -0.0;
    im = -omega;
    r = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.re - im * pz.im));
    y_im = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.im + im * pz.re));
    b_r = muDoubleScalarExp(r / 2.0);
    re = omega * 0.0;
    im = omega;
    b_y_im = zR * (re * pz.im + im * pz.re);
    c_r = muDoubleScalarExp(zR * (re * pz.re - im * pz.im) / 2.0);
    i10 = z->size[1];
    i11 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &re_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    r = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.re - im *
      pz.im);
    c_y_im = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.im +
      im * pz.re);
    r = muDoubleScalarExp(r / 2.0);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y_im = d * (re * pz.im + im * pz.re);
    d_r = muDoubleScalarExp(d * (re * pz.re - im * pz.im) / 2.0);
    r_re = b_r * (b_r * muDoubleScalarCos(y_im));
    y_im = b_r * (b_r * muDoubleScalarSin(y_im));
    b_r_re = r * (r * muDoubleScalarCos(c_y_im));
    r *= r * muDoubleScalarSin(c_y_im);
    re = 1.0 + (r_re * Rs_u.re - y_im * Rs_u.im);
    im = r_re * Rs_u.im + y_im * Rs_u.re;
    r_re = c_r * (c_r * muDoubleScalarCos(b_y_im)) + (b_r_re * Rs_d.re - r *
      Rs_d.im);
    y_im = c_r * (c_r * muDoubleScalarSin(b_y_im)) + (b_r_re * Rs_d.im + r *
      Rs_d.re);
    b_y_im = re * r_re - im * y_im;
    im = re * y_im + im * r_re;
    b_r_re = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    r_re = d_r * (d_r * muDoubleScalarCos(d_y_im));
    y_im = d_r * (d_r * muDoubleScalarSin(d_y_im));
    c_y_im = 1.0 - (b_r_re * r_re - r * y_im);
    y_im = 0.0 - (b_r_re * y_im + r * r_re);
    if (y_im == 0.0) {
      if (im == 0.0) {
        finRA->re = b_y_im / c_y_im;
        finRA->im = 0.0;
      } else if (b_y_im == 0.0) {
        finRA->re = 0.0;
        finRA->im = im / c_y_im;
      } else {
        finRA->re = b_y_im / c_y_im;
        finRA->im = im / c_y_im;
      }
    } else if (c_y_im == 0.0) {
      if (b_y_im == 0.0) {
        finRA->re = im / y_im;
        finRA->im = 0.0;
      } else if (im == 0.0) {
        finRA->re = 0.0;
        finRA->im = -(b_y_im / y_im);
      } else {
        finRA->re = im / y_im;
        finRA->im = -(b_y_im / y_im);
      }
    } else {
      b_r = muDoubleScalarAbs(c_y_im);
      r = muDoubleScalarAbs(y_im);
      if (b_r > r) {
        b_r_re = y_im / c_y_im;
        r = c_y_im + b_r_re * y_im;
        finRA->re = (b_y_im + b_r_re * im) / r;
        finRA->im = (im - b_r_re * b_y_im) / r;
      } else if (r == b_r) {
        if (c_y_im > 0.0) {
          b_r_re = 0.5;
        } else {
          b_r_re = -0.5;
        }

        if (y_im > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRA->re = (b_y_im * b_r_re + im * r) / b_r;
        finRA->im = (im * b_r_re - b_y_im * r) / b_r;
      } else {
        b_r_re = c_y_im / y_im;
        r = y_im + b_r_re * c_y_im;
        finRA->re = (b_r_re * b_y_im + im) / r;
        finRA->im = (b_r_re * im - b_y_im) / r;
      }
    }

    i10 = z->size[1];
    i11 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &qe_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * -0.0;
    im = -omega;
    r = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.re - im * pz.im));
    y_im = z->data[(int32_T)iTxLayer - 1] * (2.0 * (re * pz.im + im * pz.re));
    b_r = muDoubleScalarExp(r / 2.0);
    re = omega * 0.0;
    im = omega;
    b_y_im = zR * (re * pz.im + im * pz.re);
    c_r = muDoubleScalarExp(zR * (re * pz.re - im * pz.im) / 2.0);
    i10 = z->size[1];
    i11 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &pe_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    r = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.re - im *
      pz.im);
    c_y_im = (2.0 * z->data[(int32_T)(iTxLayer + 1.0) - 1] - zR) * (re * pz.im +
      im * pz.re);
    r = muDoubleScalarExp(r / 2.0);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y_im = d * (re * pz.im + im * pz.re);
    d_r = muDoubleScalarExp(d * (re * pz.re - im * pz.im) / 2.0);
    r_re = b_r * (b_r * muDoubleScalarCos(y_im));
    y_im = b_r * (b_r * muDoubleScalarSin(y_im));
    b_r_re = r * (r * muDoubleScalarCos(c_y_im));
    r *= r * muDoubleScalarSin(c_y_im);
    re = 1.0 - (r_re * -Rs_u.re - y_im * -Rs_u.im);
    im = 0.0 - (r_re * -Rs_u.im + y_im * -Rs_u.re);
    r_re = c_r * (c_r * muDoubleScalarCos(b_y_im)) + (b_r_re * -Rs_d.re - r *
      -Rs_d.im);
    y_im = c_r * (c_r * muDoubleScalarSin(b_y_im)) + (b_r_re * -Rs_d.im + r *
      -Rs_d.re);
    b_y_im = re * r_re - im * y_im;
    im = re * y_im + im * r_re;
    b_r_re = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    r_re = d_r * (d_r * muDoubleScalarCos(d_y_im));
    y_im = d_r * (d_r * muDoubleScalarSin(d_y_im));
    c_y_im = 1.0 - (b_r_re * r_re - r * y_im);
    y_im = 0.0 - (b_r_re * y_im + r * r_re);
    if (y_im == 0.0) {
      if (im == 0.0) {
        finRD->re = b_y_im / c_y_im;
        finRD->im = 0.0;
      } else if (b_y_im == 0.0) {
        finRD->re = 0.0;
        finRD->im = im / c_y_im;
      } else {
        finRD->re = b_y_im / c_y_im;
        finRD->im = im / c_y_im;
      }
    } else if (c_y_im == 0.0) {
      if (b_y_im == 0.0) {
        finRD->re = im / y_im;
        finRD->im = 0.0;
      } else if (im == 0.0) {
        finRD->re = 0.0;
        finRD->im = -(b_y_im / y_im);
      } else {
        finRD->re = im / y_im;
        finRD->im = -(b_y_im / y_im);
      }
    } else {
      b_r = muDoubleScalarAbs(c_y_im);
      r = muDoubleScalarAbs(y_im);
      if (b_r > r) {
        b_r_re = y_im / c_y_im;
        d = c_y_im + b_r_re * y_im;
        finRD->re = (b_y_im + b_r_re * im) / d;
        finRD->im = (im - b_r_re * b_y_im) / d;
      } else if (r == b_r) {
        if (c_y_im > 0.0) {
          b_r_re = 0.5;
        } else {
          b_r_re = -0.5;
        }

        if (y_im > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRD->re = (b_y_im * b_r_re + im * r) / b_r;
        finRD->im = (im * b_r_re - b_y_im * r) / b_r;
      } else {
        b_r_re = c_y_im / y_im;
        d = y_im + b_r_re * c_y_im;
        finRD->re = (b_r_re * b_y_im + im) / d;
        finRD->im = (b_r_re * im - b_y_im) / d;
      }
    }
  } else {
    i10 = z->size[1];
    i11 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &oe_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    r = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.re - im * pz.im));
    y_im = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.im + im *
      pz.re));
    b_r = muDoubleScalarExp(r / 2.0);
    re = omega * -0.0;
    im = -omega;
    b_y_im = zR * (re * pz.im + im * pz.re);
    c_r = muDoubleScalarExp(zR * (re * pz.re - im * pz.im) / 2.0);
    i10 = z->size[1];
    i11 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &ne_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * -0.0;
    im = -omega;
    r = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.re - im * pz.im);
    c_y_im = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.im + im *
      pz.re);
    r = muDoubleScalarExp(r / 2.0);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y_im = d * (re * pz.im + im * pz.re);
    d_r = muDoubleScalarExp(d * (re * pz.re - im * pz.im) / 2.0);
    r_re = b_r * (b_r * muDoubleScalarCos(y_im));
    y_im = b_r * (b_r * muDoubleScalarSin(y_im));
    b_r_re = r * (r * muDoubleScalarCos(c_y_im));
    r *= r * muDoubleScalarSin(c_y_im);
    re = 1.0 + (r_re * Rs_d.re - y_im * Rs_d.im);
    im = r_re * Rs_d.im + y_im * Rs_d.re;
    r_re = c_r * (c_r * muDoubleScalarCos(b_y_im)) + (b_r_re * Rs_u.re - r *
      Rs_u.im);
    y_im = c_r * (c_r * muDoubleScalarSin(b_y_im)) + (b_r_re * Rs_u.im + r *
      Rs_u.re);
    b_y_im = re * r_re - im * y_im;
    im = re * y_im + im * r_re;
    b_r_re = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    r_re = d_r * (d_r * muDoubleScalarCos(d_y_im));
    y_im = d_r * (d_r * muDoubleScalarSin(d_y_im));
    c_y_im = 1.0 - (b_r_re * r_re - r * y_im);
    y_im = 0.0 - (b_r_re * y_im + r * r_re);
    if (y_im == 0.0) {
      if (im == 0.0) {
        finRA->re = b_y_im / c_y_im;
        finRA->im = 0.0;
      } else if (b_y_im == 0.0) {
        finRA->re = 0.0;
        finRA->im = im / c_y_im;
      } else {
        finRA->re = b_y_im / c_y_im;
        finRA->im = im / c_y_im;
      }
    } else if (c_y_im == 0.0) {
      if (b_y_im == 0.0) {
        finRA->re = im / y_im;
        finRA->im = 0.0;
      } else if (im == 0.0) {
        finRA->re = 0.0;
        finRA->im = -(b_y_im / y_im);
      } else {
        finRA->re = im / y_im;
        finRA->im = -(b_y_im / y_im);
      }
    } else {
      b_r = muDoubleScalarAbs(c_y_im);
      r = muDoubleScalarAbs(y_im);
      if (b_r > r) {
        b_r_re = y_im / c_y_im;
        r = c_y_im + b_r_re * y_im;
        finRA->re = (b_y_im + b_r_re * im) / r;
        finRA->im = (im - b_r_re * b_y_im) / r;
      } else if (r == b_r) {
        if (c_y_im > 0.0) {
          b_r_re = 0.5;
        } else {
          b_r_re = -0.5;
        }

        if (y_im > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRA->re = (b_y_im * b_r_re + im * r) / b_r;
        finRA->im = (im * b_r_re - b_y_im * r) / b_r;
      } else {
        b_r_re = c_y_im / y_im;
        r = y_im + b_r_re * c_y_im;
        finRA->re = (b_r_re * b_y_im + im) / r;
        finRA->im = (b_r_re * im - b_y_im) / r;
      }
    }

    i10 = z->size[1];
    i11 = (int32_T)(iTxLayer + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &me_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * 0.0;
    im = omega;
    r = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.re - im * pz.im));
    y_im = z->data[(int32_T)(iTxLayer + 1.0) - 1] * (2.0 * (re * pz.im + im *
      pz.re));
    b_r = muDoubleScalarExp(r / 2.0);
    re = omega * -0.0;
    im = -omega;
    b_y_im = zR * (re * pz.im + im * pz.re);
    c_r = muDoubleScalarExp(zR * (re * pz.re - im * pz.im) / 2.0);
    i10 = z->size[1];
    i11 = (int32_T)iTxLayer;
    emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &le_emlrtBCI,
      emlrtRootTLSGlobal);
    re = omega * -0.0;
    im = -omega;
    r = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.re - im * pz.im);
    c_y_im = (2.0 * z->data[(int32_T)iTxLayer - 1] - zR) * (re * pz.im + im *
      pz.re);
    r = muDoubleScalarExp(r / 2.0);
    re = omega * 0.0;
    im = omega * 2.0;
    d_y_im = d * (re * pz.im + im * pz.re);
    d_r = muDoubleScalarExp(d * (re * pz.re - im * pz.im) / 2.0);
    r_re = b_r * (b_r * muDoubleScalarCos(y_im));
    y_im = b_r * (b_r * muDoubleScalarSin(y_im));
    b_r_re = r * (r * muDoubleScalarCos(c_y_im));
    r *= r * muDoubleScalarSin(c_y_im);
    re = -1.0 + (r_re * -Rs_d.re - y_im * -Rs_d.im);
    im = r_re * -Rs_d.im + y_im * -Rs_d.re;
    r_re = c_r * (c_r * muDoubleScalarCos(b_y_im)) + (b_r_re * -Rs_u.re - r *
      -Rs_u.im);
    y_im = c_r * (c_r * muDoubleScalarSin(b_y_im)) + (b_r_re * -Rs_u.im + r *
      -Rs_u.re);
    b_y_im = re * r_re - im * y_im;
    im = re * y_im + im * r_re;
    b_r_re = Rs_u.re * Rs_d.re - Rs_u.im * Rs_d.im;
    r = Rs_u.re * Rs_d.im + Rs_u.im * Rs_d.re;
    r_re = d_r * (d_r * muDoubleScalarCos(d_y_im));
    y_im = d_r * (d_r * muDoubleScalarSin(d_y_im));
    c_y_im = 1.0 - (b_r_re * r_re - r * y_im);
    y_im = 0.0 - (b_r_re * y_im + r * r_re);
    if (y_im == 0.0) {
      if (im == 0.0) {
        finRD->re = b_y_im / c_y_im;
        finRD->im = 0.0;
      } else if (b_y_im == 0.0) {
        finRD->re = 0.0;
        finRD->im = im / c_y_im;
      } else {
        finRD->re = b_y_im / c_y_im;
        finRD->im = im / c_y_im;
      }
    } else if (c_y_im == 0.0) {
      if (b_y_im == 0.0) {
        finRD->re = im / y_im;
        finRD->im = 0.0;
      } else if (im == 0.0) {
        finRD->re = 0.0;
        finRD->im = -(b_y_im / y_im);
      } else {
        finRD->re = im / y_im;
        finRD->im = -(b_y_im / y_im);
      }
    } else {
      b_r = muDoubleScalarAbs(c_y_im);
      r = muDoubleScalarAbs(y_im);
      if (b_r > r) {
        b_r_re = y_im / c_y_im;
        d = c_y_im + b_r_re * y_im;
        finRD->re = (b_y_im + b_r_re * im) / d;
        finRD->im = (im - b_r_re * b_y_im) / d;
      } else if (r == b_r) {
        if (c_y_im > 0.0) {
          b_r_re = 0.5;
        } else {
          b_r_re = -0.5;
        }

        if (y_im > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        finRD->re = (b_y_im * b_r_re + im * r) / b_r;
        finRD->im = (im * b_r_re - b_y_im * r) / b_r;
      } else {
        b_r_re = c_y_im / y_im;
        d = y_im + b_r_re * c_y_im;
        finRD->re = (b_r_re * b_y_im + im) / d;
        finRD->im = (b_r_re * im - b_y_im) / d;
      }
    }
  }
}

static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_creal_T *ret)
{
  int32_T iv49[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv50[2];
  for (i = 0; i < 2; i++) {
    iv49[i] = -1;
    bv0[i] = TRUE;
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 2U,
    iv49, bv0, iv50);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv50[0];
  ret->size[1] = iv50[1];
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
  int32_T i5;
  int32_T unnamed_idx_1;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  emxArray_int32_T *r19;
  int32_T i9;
  emxArray_int32_T *r20;
  real_T br;
  real_T re;
  real_T im;
  real_T b_r;
  real_T y_re;
  real_T y_im;
  real_T c_r;
  real_T r_re;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&dz, 2, &cb_emlrtRTEI, TRUE);
  emxInit_real_T(&d, 2, &db_emlrtRTEI, TRUE);

  /* subfunctions */
  /*  to recursively calculate up/down stack reflectivities in the source layer */
  /*  this can be used for either mode (TE/TM)   */
  /* global omega */
  /*  The last and first layer thicknesses are infinite */
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  diff(z, dz);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  i5 = d->size[0] * d->size[1];
  d->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)d, i5, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  unnamed_idx_1 = z->size[1];
  i5 = d->size[0] * d->size[1];
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity((emxArray__common *)d, i5, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  unnamed_idx_1 = z->size[1];
  for (i5 = 0; i5 < unnamed_idx_1; i5++) {
    d->data[i5] = 0.0;
  }

  unnamed_idx_1 = z->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &ee_emlrtBCI,
    emlrtRootTLSGlobal);
  d->data[0] = 1.0;
  i5 = dz->size[0] * dz->size[1];
  i5 = emlrtDynamicBoundsCheckFastR2012b(i5, 0, MAX_int32_T, &he_emlrtBCI,
    emlrtRootTLSGlobal);
  if (2 > i5) {
    i6 = 0;
    i5 = 0;
  } else {
    i7 = dz->size[0] * dz->size[1];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, i7, &ge_emlrtBCI, emlrtRootTLSGlobal);
    i6 = 1;
    i5 = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i7, &ge_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  if (2 > z->size[1] - 1) {
    i7 = 0;
    i8 = 0;
  } else {
    i7 = d->size[1];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, i7, &de_emlrtBCI, emlrtRootTLSGlobal);
    i7 = 1;
    i8 = d->size[1];
    unnamed_idx_1 = z->size[1] - 1;
    i8 = emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i8, &de_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emxInit_int32_T(&r19, 1, &bb_emlrtRTEI, TRUE);
  unnamed_idx_1 = i8 - i7;
  i9 = i5 - i6;
  emlrtSizeEqCheck1DFastR2012b(unnamed_idx_1, i9, &t_emlrtECI,
    emlrtRootTLSGlobal);
  unnamed_idx_1 = r19->size[0];
  r19->size[0] = i8 - i7;
  emxEnsureCapacity((emxArray__common *)r19, unnamed_idx_1, (int32_T)sizeof
                    (int32_T), &bb_emlrtRTEI);
  unnamed_idx_1 = i8 - i7;
  for (i8 = 0; i8 < unnamed_idx_1; i8++) {
    r19->data[i8] = (i7 + i8) + 1;
  }

  emxInit_int32_T(&r20, 1, &bb_emlrtRTEI, TRUE);
  i7 = r20->size[0];
  r20->size[0] = i5 - i6;
  emxEnsureCapacity((emxArray__common *)r20, i7, (int32_T)sizeof(int32_T),
                    &bb_emlrtRTEI);
  unnamed_idx_1 = i5 - i6;
  for (i5 = 0; i5 < unnamed_idx_1; i5++) {
    r20->data[i5] = (i6 + i5) + 1;
  }

  unnamed_idx_1 = r20->size[0];
  for (i5 = 0; i5 < unnamed_idx_1; i5++) {
    d->data[r19->data[i5] - 1] = dz->data[r20->data[i5] - 1];
  }

  emxFree_int32_T(&r20);
  emxFree_int32_T(&r19);
  emxFree_real_T(&dz);
  i5 = d->size[1];
  i7 = z->size[1];
  d->data[emlrtDynamicBoundsCheckFastR2012b(i7, 1, i5, &ie_emlrtBCI,
    emlrtRootTLSGlobal) - 1] = 1.0;

  /*  Capital R is for a stack    */
  /*  Starting from the bottom up, for Rs_down     */
  Rlowerstack->re = 0.0;
  Rlowerstack->im = 0.0;
  i5 = (int32_T)-(iTxLayer + (-1.0 - ((real_T)z->size[1] - 1.0)));
  emlrtForLoopVectorCheckR2012b((real_T)z->size[1] - 1.0, -1.0, iTxLayer,
    mxDOUBLE_CLASS, i5, &mb_emlrtRTEI, emlrtRootTLSGlobal);
  unnamed_idx_1 = 0;
  while (unnamed_idx_1 <= i5 - 1) {
    br = ((real_T)z->size[1] - 1.0) + -(real_T)unnamed_idx_1;
    i7 = pz->size[1];
    i6 = (int32_T)(br + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i6, 1, i7, &fe_emlrtBCI,
      emlrtRootTLSGlobal);
    i7 = d->size[1];
    i6 = (int32_T)(br + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i6, 1, i7, &ce_emlrtBCI,
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
    i7 = r->size[1];
    i6 = (int32_T)br;
    emlrtDynamicBoundsCheckFastR2012b(i6, 1, i7, &be_emlrtBCI,
      emlrtRootTLSGlobal);
    i7 = pz->size[1];
    i6 = (int32_T)(br + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i6, 1, i7, &ae_emlrtBCI,
      emlrtRootTLSGlobal);
    i7 = d->size[1];
    i6 = (int32_T)(br + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i6, 1, i7, &yd_emlrtBCI,
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
    i7 = r->size[1];
    i6 = (int32_T)br;
    y_re = r->data[emlrtDynamicBoundsCheckFastR2012b(i6, 1, i7, &ke_emlrtBCI,
      emlrtRootTLSGlobal) - 1].re + (Rlowerstack->re * r_re - Rlowerstack->im *
      c_r);
    i7 = r->size[1];
    i6 = (int32_T)br;
    y_im = r->data[emlrtDynamicBoundsCheckFastR2012b(i6, 1, i7, &ke_emlrtBCI,
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
    (iTxLayer + -1.0), &lb_emlrtRTEI, emlrtRootTLSGlobal);
  unnamed_idx_1 = 0;
  while (unnamed_idx_1 <= (int32_T)(iTxLayer + -1.0) - 1) {
    i5 = pz->size[1];
    i7 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i7, 1, i5, &xd_emlrtBCI,
      emlrtRootTLSGlobal);
    i5 = d->size[1];
    i7 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i7, 1, i5, &wd_emlrtBCI,
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
    i5 = r->size[1];
    i7 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i7, 1, i5, &vd_emlrtBCI,
      emlrtRootTLSGlobal);
    i5 = pz->size[1];
    i7 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i7, 1, i5, &ud_emlrtBCI,
      emlrtRootTLSGlobal);
    i5 = d->size[1];
    i7 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i7, 1, i5, &td_emlrtBCI,
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
    i5 = r->size[1];
    i7 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    y_re = -r->data[emlrtDynamicBoundsCheckFastR2012b(i7, 1, i5, &je_emlrtBCI,
      emlrtRootTLSGlobal) - 1].re + (Rupperstack->re * r_re - Rupperstack->im *
      c_r);
    i5 = r->size[1];
    i7 = (int32_T)((2.0 + (real_T)unnamed_idx_1) - 1.0);
    y_im = -r->data[emlrtDynamicBoundsCheckFastR2012b(i7, 1, i5, &je_emlrtBCI,
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

void get_CSEM1D_FD_FHT_aniso_hed(const emxArray_real_T *freqs, const
  emxArray_real_T *rRx, const emxArray_real_T *zRx, real_T zTx, const
  emxArray_real_T *z, const emxArray_real_T *sig, const char_T filterName[15],
  real_T lUseLaggedConv, emxArray_creal_T *Er, emxArray_creal_T *Eb,
  emxArray_creal_T *Hr, emxArray_creal_T *Hb, emxArray_creal_T *Ez,
  emxArray_creal_T *Hz)
{
  emxArray_int32_T *idx;
  uint8_T uv0[2];
  int32_T i0;
  emxArray_real_T *lambdaR;
  int32_T k;
  int32_T b_k;
  int32_T nNaN;
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
  int32_T loop_ub;
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
  real_T Filter_base[201];
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

  emxArray_real_T *rR;
  emxArray_creal_T *EHK;
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
  real_T a;
  real_T d;
  real_T apnd;
  real_T cdiff;
  real_T absa;
  real_T absb;
  real_T b_absa;
  const mxArray *g_y;
  static const int32_T iv5[2] = { 1, 21 };

  char_T cv6[21];
  static const char_T cv7[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *h_y;
  static const int32_T iv6[2] = { 1, 21 };

  emxArray_int32_T *r1;
  emxArray_creal_T *eyBase;
  emxArray_real_T *b_z;
  creal_T HzK;
  creal_T EzK;
  creal_T HbK[2];
  creal_T HrK[2];
  creal_T EbK[2];
  creal_T ErK[2];
  int32_T iv7[1];
  static const int32_T iv8[1] = { 2 };

  int32_T iv9[1];
  int32_T iv10[1];
  emxArray_creal_T *r2;
  emxArray_creal_T *b_EHK;
  emxArray_creal_T *c_EHK;
  real_T lambda[201];
  creal_T b_Filter_J1[201];
  int32_T iv11[2];
  real_T b_Filter_J0[402];
  creal_T c_Filter_J0[402];
  int32_T iv12[2];
  emxArray_creal_T *b_eyBase;
  const mxArray *PPV = NULL;
  emxArray_creal_T *r3;
  emxArray_real_T *c_z;
  emxArray_creal_T *d_EHK;
  emxArray_creal_T *e_EHK;
  emxArray_creal_T *f_EHK;
  emxArray_creal_T *g_EHK;
  emxArray_creal_T *h_EHK;
  emxArray_creal_T *i_EHK;
  emxArray_creal_T *j_EHK;
  emxArray_creal_T *k_EHK;
  emxArray_creal_T *l_EHK;
  emxArray_creal_T *m_EHK;
  int32_T iv13[2];
  int32_T iv14[2];
  const mxArray *i_y;
  static const int32_T iv15[2] = { 1, 45 };

  char_T cv8[45];
  static const char_T cv9[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *j_y;
  static const int32_T iv16[2] = { 1, 21 };

  static const char_T cv10[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *k_y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *l_y;
  static const int32_T iv18[2] = { 1, 21 };

  const mxArray *m_y;
  static const int32_T iv19[2] = { 1, 45 };

  const mxArray *n_y;
  static const int32_T iv20[2] = { 1, 21 };

  const mxArray *o_y;
  static const int32_T iv21[2] = { 1, 45 };

  const mxArray *p_y;
  static const int32_T iv22[2] = { 1, 21 };

  const mxArray *q_y;
  static const int32_T iv23[2] = { 1, 45 };

  const mxArray *r_y;
  static const int32_T iv24[2] = { 1, 21 };

  const mxArray *s_y;
  static const int32_T iv25[2] = { 1, 45 };

  const mxArray *t_y;
  static const int32_T iv26[2] = { 1, 21 };

  const mxArray *u_y;
  static const int32_T iv27[2] = { 1, 45 };

  const mxArray *v_y;
  static const int32_T iv28[2] = { 1, 21 };

  const mxArray *w_y;
  static const int32_T iv29[2] = { 1, 45 };

  const mxArray *x_y;
  static const int32_T iv30[2] = { 1, 21 };

  const mxArray *y_y;
  static const int32_T iv31[2] = { 1, 45 };

  const mxArray *ab_y;
  static const int32_T iv32[2] = { 1, 21 };

  const mxArray *bb_y;
  static const int32_T iv33[2] = { 1, 45 };

  const mxArray *cb_y;
  static const int32_T iv34[2] = { 1, 21 };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /*  */
  /*  Returns 1D CSEM fields due to an HED */
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
  /*  Outputs: All components of the CSEM field due to an HED,  */
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
  /*   */
  /* -------------------------------------------------------------------------- */
  /*  */
  /*  Check for optional lSpline input: */
  /*  */
  /*      if ~exist('lUseLaggedConv','var') */
  /*          lUseLaggedConv = false; */
  /*      end */
  if ((lUseLaggedConv == 1.0) && (rRx->size[1] == 1)) {
    lUseLaggedConv = 0.0;
  }

  b_emxInit_int32_T(&idx, 2, &h_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  eml_sort_idx(zRx, idx);
  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 2; i0++) {
    uv0[i0] = (uint8_T)zRx->size[i0];
  }

  emxInit_real_T(&lambdaR, 2, &d_emlrtRTEI, TRUE);
  i0 = lambdaR->size[0] * lambdaR->size[1];
  lambdaR->size[0] = 1;
  lambdaR->size[1] = uv0[1];
  emxEnsureCapacity((emxArray__common *)lambdaR, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
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

  nNaN = zRx->size[1] - k;
  while ((k >= 1) && muDoubleScalarIsInf(lambdaR->data[k - 1]) && (lambdaR->
          data[k - 1] > 0.0)) {
    k--;
  }

  nInf = (zRx->size[1] - k) - nNaN;
  nb = 0;
  if (b_k > 0) {
    nb = 1;
    emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (nInf > 0) {
    nb++;
    lambdaR->data[nb - 1] = lambdaR->data[khi];
    emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
  }

  b_k = khi + nInf;
  emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  for (khi = 1; khi <= nNaN; khi++) {
    nb++;
    lambdaR->data[nb - 1] = lambdaR->data[(b_k + khi) - 1];
  }

  if (nb <= zRx->size[1]) {
  } else {
    emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m0 = mxCreateString("Assertion failed.");
    emlrtAssign(&y, m0);
    error(y, &d_emlrtMCI);
    emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > nb) {
    loop_ub = 0;
  } else {
    loop_ub = nb;
  }

  emxInit_int32_T(&r0, 1, &b_emlrtRTEI, TRUE);
  i0 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity((emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    r0->data[i0] = 1 + i0;
  }

  emxInit_real_T(&b_lambdaR, 2, &b_emlrtRTEI, TRUE);
  nInf = r0->size[0];
  i0 = b_lambdaR->size[0] * b_lambdaR->size[1];
  b_lambdaR->size[0] = 1;
  b_lambdaR->size[1] = nInf;
  emxEnsureCapacity((emxArray__common *)b_lambdaR, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  for (i0 = 0; i0 < nInf; i0++) {
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
  loop_ub = b_lambdaR->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    lambdaR->data[lambdaR->size[0] * i0] = b_lambdaR->data[b_lambdaR->size[0] *
      i0];
  }

  emxFree_real_T(&b_lambdaR);
  emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    b0 = FALSE;
  } else {
    b0 = (nb > 2147483646);
  }

  if (b0) {
    emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error(TRUE);
    emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  if ((lambdaR->size[1] > 1) && (lUseLaggedConv == 1.0)) {
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    beep(&emlrtMCI);
    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    lUseLaggedConv = 0.0;
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
  for (b_k = 0; b_k < 201; b_k++) {
    Filter_J0[b_k] = dv0[b_k];
    Filter_J1[b_k] = dv1[b_k];
    Filter_base[b_k] = dv2[b_k];
  }

  /*  */
  /*  Initialize output E structure: */
  /*  */
  khi = rRx->size[1];
  i0 = Er->size[0] * Er->size[1];
  Er->size[0] = khi;
  emxEnsureCapacity((emxArray__common *)Er, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  khi = freqs->size[1];
  i0 = Er->size[0] * Er->size[1];
  Er->size[1] = khi;
  emxEnsureCapacity((emxArray__common *)Er, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  loop_ub = rRx->size[1] * freqs->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Er->data[i0].re = 0.0;
    Er->data[i0].im = 0.0;
  }

  i0 = Eb->size[0] * Eb->size[1];
  Eb->size[0] = Er->size[0];
  Eb->size[1] = Er->size[1];
  emxEnsureCapacity((emxArray__common *)Eb, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  loop_ub = Er->size[0] * Er->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Eb->data[i0] = Er->data[i0];
  }

  i0 = Hr->size[0] * Hr->size[1];
  Hr->size[0] = Er->size[0];
  Hr->size[1] = Er->size[1];
  emxEnsureCapacity((emxArray__common *)Hr, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  loop_ub = Er->size[0] * Er->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Hr->data[i0] = Er->data[i0];
  }

  i0 = Hb->size[0] * Hb->size[1];
  Hb->size[0] = Er->size[0];
  Hb->size[1] = Er->size[1];
  emxEnsureCapacity((emxArray__common *)Hb, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  loop_ub = Er->size[0] * Er->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Hb->data[i0] = Er->data[i0];
  }

  i0 = Ez->size[0] * Ez->size[1];
  Ez->size[0] = Er->size[0];
  Ez->size[1] = Er->size[1];
  emxEnsureCapacity((emxArray__common *)Ez, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  loop_ub = Er->size[0] * Er->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ez->data[i0] = Er->data[i0];
  }

  i0 = Hz->size[0] * Hz->size[1];
  Hz->size[0] = Er->size[0];
  Hz->size[1] = Er->size[1];
  emxEnsureCapacity((emxArray__common *)Hz, i0, (int32_T)sizeof(creal_T),
                    &b_emlrtRTEI);
  loop_ub = Er->size[0] * Er->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Hz->data[i0] = Er->data[i0];
  }

  emxInit_real_T(&rR, 2, &e_emlrtRTEI, TRUE);

  /*  */
  /*  Get lagged convulition setup: */
  /* for codegen  */
  i0 = lambdaR->size[0] * lambdaR->size[1];
  lambdaR->size[0] = 1;
  lambdaR->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)lambdaR, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  lambdaR->data[0] = 1.0;
  i0 = rR->size[0] * rR->size[1];
  rR->size[0] = 1;
  rR->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)rR, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  rR->data[0] = 1.0;
  emxInit_creal_T(&EHK, 2, &f_emlrtRTEI, TRUE);
  if (lUseLaggedConv == 1.0) {
    emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    if ((rRx->size[1] == 1) || (rRx->size[1] != 1)) {
      n_too_large = TRUE;
    } else {
      n_too_large = FALSE;
    }

    if (n_too_large) {
    } else {
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m0 = mxCreateCharArray(2, iv1);
      for (b_k = 0; b_k < 36; b_k++) {
        cv2[b_k] = cv3[b_k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m0, cv2);
      emlrtAssign(&c_y, m0);
      error(b_message(c_y, &g_emlrtMCI), &h_emlrtMCI);
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (rRx->size[1] > 0) {
    } else {
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m0 = mxCreateCharArray(2, iv2);
      for (b_k = 0; b_k < 39; b_k++) {
        cv4[b_k] = cv5[b_k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m0, cv4);
      emlrtAssign(&d_y, m0);
      error(b_message(d_y, &i_emlrtMCI), &j_emlrtMCI);
      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
    khi = 1;
    mtmp = rRx->data[0];
    if (rRx->size[1] > 1) {
      if (muDoubleScalarIsNaN(mtmp)) {
        emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
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
        emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
        while (khi + 1 <= rRx->size[1]) {
          if (rRx->data[khi] > mtmp) {
            mtmp = rRx->data[khi];
          }

          khi++;
        }
      }
    }

    emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    if ((rRx->size[1] == 1) || (rRx->size[1] != 1)) {
      n_too_large = TRUE;
    } else {
      n_too_large = FALSE;
    }

    if (n_too_large) {
    } else {
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      e_y = NULL;
      m0 = mxCreateCharArray(2, iv3);
      for (b_k = 0; b_k < 36; b_k++) {
        cv2[b_k] = cv3[b_k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m0, cv2);
      emlrtAssign(&e_y, m0);
      error(b_message(e_y, &g_emlrtMCI), &h_emlrtMCI);
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (rRx->size[1] > 0) {
    } else {
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      f_y = NULL;
      m0 = mxCreateCharArray(2, iv4);
      for (b_k = 0; b_k < 39; b_k++) {
        cv4[b_k] = cv5[b_k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m0, cv4);
      emlrtAssign(&f_y, m0);
      error(b_message(f_y, &i_emlrtMCI), &j_emlrtMCI);
      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
    khi = 1;
    ndbl = rRx->data[0];
    if (rRx->size[1] > 1) {
      if (muDoubleScalarIsNaN(ndbl)) {
        emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
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
        emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
        while (khi + 1 <= rRx->size[1]) {
          if (rRx->data[khi] < ndbl) {
            ndbl = rRx->data[khi];
          }

          khi++;
        }
      }
    }

    emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    lamMin = Filter_base[0] / mtmp;
    filterSpacing = Filter_base[1] / Filter_base[0];

    /*  the filters are spaced by a multiplicative factor  */
    emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
    ndbl = Filter_base[200] / ndbl / lamMin;
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
    a = lamMin;
    b_log(&a);
    d = filterSpacing;
    b_log(&d);
    b_log(&lamMin);
    B = lamMin + ndbl * ((x + 1.0) - 1.0);
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(d) || muDoubleScalarIsNaN
        (B)) {
      nInf = 0;
      lamMin = rtNaN;
      apnd = B;
      n_too_large = FALSE;
    } else if ((d == 0.0) || ((a < B) && (d < 0.0)) || ((B < a) && (d > 0.0))) {
      nInf = -1;
      lamMin = a;
      apnd = B;
      n_too_large = FALSE;
    } else if (muDoubleScalarIsInf(a) || muDoubleScalarIsInf(B)) {
      nInf = 0;
      lamMin = rtNaN;
      apnd = B;
      if (muDoubleScalarIsInf(d) || (a == B)) {
        n_too_large = TRUE;
      } else {
        n_too_large = FALSE;
      }

      n_too_large = !n_too_large;
    } else if (muDoubleScalarIsInf(d)) {
      nInf = 0;
      lamMin = a;
      apnd = B;
      n_too_large = FALSE;
    } else {
      lamMin = a;
      ndbl = muDoubleScalarFloor((B - a) / d + 0.5);
      apnd = a + ndbl * d;
      if (d > 0.0) {
        cdiff = apnd - B;
      } else {
        cdiff = B - apnd;
      }

      absa = muDoubleScalarAbs(a);
      absb = muDoubleScalarAbs(B);
      if (absa > absb) {
        b_absa = absa;
      } else {
        b_absa = absb;
      }

      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * b_absa) {
        ndbl++;
        apnd = B;
      } else if (cdiff > 0.0) {
        apnd = a + (ndbl - 1.0) * d;
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

    emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    if (!n_too_large) {
    } else {
      emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
      g_y = NULL;
      m0 = mxCreateCharArray(2, iv5);
      for (b_k = 0; b_k < 21; b_k++) {
        cv6[b_k] = cv7[b_k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
      emlrtAssign(&g_y, m0);
      error(b_message(g_y, &k_emlrtMCI), &l_emlrtMCI);
      emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    i0 = lambdaR->size[0] * lambdaR->size[1];
    lambdaR->size[0] = 1;
    lambdaR->size[1] = nInf + 1;
    emxEnsureCapacity((emxArray__common *)lambdaR, i0, (int32_T)sizeof(real_T),
                      &c_emlrtRTEI);
    if (nInf + 1 > 0) {
      lambdaR->data[0] = lamMin;
      if (nInf + 1 > 1) {
        lambdaR->data[nInf] = apnd;
        i0 = nInf + (nInf < 0);
        if (i0 >= 0) {
          khi = (int32_T)((uint32_T)i0 >> 1);
        } else {
          khi = ~(int32_T)((uint32_T)~i0 >> 1);
        }

        emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
        for (k = 1; k < khi; k++) {
          ndbl = (real_T)k * d;
          lambdaR->data[k] = lamMin + ndbl;
          lambdaR->data[nInf - k] = apnd - ndbl;
        }

        if (khi << 1 == nInf) {
          lambdaR->data[khi] = (lamMin + apnd) / 2.0;
        } else {
          ndbl = (real_T)khi * d;
          lambdaR->data[khi] = lamMin + ndbl;
          lambdaR->data[khi + 1] = apnd - ndbl;
        }
      }
    }

    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    b_exp(lambdaR);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    if (muDoubleScalarIsNaN((x + 1.0) - 201.0)) {
      nInf = 0;
      lamMin = rtNaN;
      apnd = nLambda - 201.0;
      n_too_large = FALSE;
    } else if (nLambda - 201.0 < 0.0) {
      nInf = -1;
      lamMin = 0.0;
      apnd = nLambda - 201.0;
      n_too_large = FALSE;
    } else if (muDoubleScalarIsInf((x + 1.0) - 201.0)) {
      nInf = 0;
      lamMin = rtNaN;
      apnd = nLambda - 201.0;
      n_too_large = !(0.0 == nLambda - 201.0);
    } else {
      lamMin = 0.0;
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

    emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    if (!n_too_large) {
    } else {
      emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
      h_y = NULL;
      m0 = mxCreateCharArray(2, iv6);
      for (b_k = 0; b_k < 21; b_k++) {
        cv6[b_k] = cv7[b_k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
      emlrtAssign(&h_y, m0);
      error(b_message(h_y, &k_emlrtMCI), &l_emlrtMCI);
      emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
    i0 = rR->size[0] * rR->size[1];
    rR->size[0] = 1;
    rR->size[1] = nInf + 1;
    emxEnsureCapacity((emxArray__common *)rR, i0, (int32_T)sizeof(real_T),
                      &c_emlrtRTEI);
    if (nInf + 1 > 0) {
      rR->data[0] = lamMin;
      if (nInf + 1 > 1) {
        rR->data[nInf] = apnd;
        i0 = nInf + (nInf < 0);
        if (i0 >= 0) {
          khi = (int32_T)((uint32_T)i0 >> 1);
        } else {
          khi = ~(int32_T)((uint32_T)~i0 >> 1);
        }

        emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
        for (k = 1; k < khi; k++) {
          rR->data[k] = lamMin + (real_T)k;
          rR->data[nInf - k] = apnd - (real_T)k;
        }

        if (khi << 1 == nInf) {
          rR->data[khi] = (lamMin + apnd) / 2.0;
        } else {
          rR->data[khi] = lamMin + (real_T)khi;
          rR->data[khi + 1] = apnd - (real_T)khi;
        }
      }
    }

    emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    b_log(&filterSpacing);
    i0 = rR->size[0] * rR->size[1];
    rR->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)rR, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    khi = rR->size[0];
    nInf = rR->size[1];
    loop_ub = khi * nInf;
    for (i0 = 0; i0 < loop_ub; i0++) {
      rR->data[i0] = -rR->data[i0] * filterSpacing;
    }

    b_exp(rR);
    i0 = rR->size[0] * rR->size[1];
    rR->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)rR, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    khi = rR->size[0];
    nInf = rR->size[1];
    loop_ub = khi * nInf;
    for (i0 = 0; i0 < loop_ub; i0++) {
      rR->data[i0] *= mtmp;
    }

    emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);

    /*  ranges corresponding to lambdaR plus nExtra 1 lags in convolution: */
    /* define EH(k) here for lagged convolution */
    nInf = 10 * freqs->size[1];
    i0 = lambdaR->size[1];
    emlrtNonNegativeCheckFastR2012b(i0, &emlrtDCI, emlrtRootTLSGlobal);
    i0 = EHK->size[0] * EHK->size[1];
    EHK->size[0] = nInf;
    emxEnsureCapacity((emxArray__common *)EHK, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = lambdaR->size[1];
    i0 = EHK->size[0] * EHK->size[1];
    EHK->size[1] = khi;
    emxEnsureCapacity((emxArray__common *)EHK, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    loop_ub = nInf * lambdaR->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      EHK->data[i0].re = 0.0;
      EHK->data[i0].im = 0.0;
    }
  } else {
    i0 = EHK->size[0] * EHK->size[1];
    EHK->size[0] = 10;
    EHK->size[1] = 201;
    emxEnsureCapacity((emxArray__common *)EHK, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < 2010; i0++) {
      EHK->data[i0].re = 0.0;
      EHK->data[i0].im = 0.0;
    }
  }

  /*  */
  /*  Now compute the CSEM responses using the FHT method: */
  /*   */
  /* [freqs indF] = sort(freqs); % sort from low to high */
  /*  */
  /*  Loop over frequencies: */
  /*  */
  emxInit_int32_T(&r1, 1, &b_emlrtRTEI, TRUE);
  if (lUseLaggedConv == 1.0) {
    emxInit_creal_T(&eyBase, 2, &g_emlrtRTEI, TRUE);
    i0 = zRx->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, emlrtRootTLSGlobal);
    nInf = 6 * freqs->size[1];
    i0 = rR->size[1];
    emlrtNonNegativeCheckFastR2012b(i0, &b_emlrtDCI, emlrtRootTLSGlobal);
    khi = rR->size[1];
    i0 = eyBase->size[0] * eyBase->size[1];
    eyBase->size[0] = khi;
    emxEnsureCapacity((emxArray__common *)eyBase, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    i0 = eyBase->size[0] * eyBase->size[1];
    eyBase->size[1] = nInf;
    emxEnsureCapacity((emxArray__common *)eyBase, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    loop_ub = rR->size[1] * nInf;
    for (i0 = 0; i0 < loop_ub; i0++) {
      eyBase->data[i0].re = 0.0;
      eyBase->data[i0].im = 0.0;
    }

    /*  Get the kernels for all lambdas */
    nNaN = 1;
    emxInit_real_T(&b_z, 2, &b_emlrtRTEI, TRUE);
    while (nNaN - 1 <= freqs->size[1] - 1) {
      i0 = freqs->size[1];
      i1 = (int32_T)(1.0 + (real_T)(nNaN - 1));
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI,
        emlrtRootTLSGlobal);
      b_k = 0;
      while (b_k <= lambdaR->size[1] - 1) {
        /* EyKR(1:2,i) = getCSEM1DKernels_aniso_hed(lambda(i),f,zRxEval,zTx,z,sig); */
        /* all components of the EH field */
        emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
        i0 = b_z->size[0] * b_z->size[1];
        b_z->size[0] = 1;
        b_z->size[1] = z->size[1];
        emxEnsureCapacity((emxArray__common *)b_z, i0, (int32_T)sizeof(real_T),
                          &b_emlrtRTEI);
        loop_ub = z->size[0] * z->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          b_z->data[i0] = z->data[i0];
        }

        i0 = lambdaR->size[1];
        i1 = (int32_T)(1.0 + (real_T)b_k);
        getCSEM1DKernels_aniso_hed(lambdaR->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ac_emlrtBCI,
          emlrtRootTLSGlobal) - 1], freqs->data[nNaN - 1], zRx->data[0], zTx,
          b_z, sig, ErK, EbK, HrK, HbK, &EzK, &HzK);
        emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
        i0 = nNaN << 1;
        if (i0 == nNaN << 1) {
        } else {
          emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
          emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &jb_emlrtRTEI,
            "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
          emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
        }

        nInf = EHK->size[0];
        khi = EHK->size[1];
        i1 = (int32_T)(1.0 + (real_T)b_k);
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, khi, &c_emlrtBCI,
          emlrtRootTLSGlobal);
        for (i1 = 0; i1 < 2; i1++) {
          nb = (int32_T)((real_T)i0 + (-1.0 + (real_T)i1));
          EHK->data[(emlrtDynamicBoundsCheckFastR2012b(nb, 1, nInf, &nc_emlrtBCI,
                      emlrtRootTLSGlobal) + EHK->size[0] * ((int32_T)(1.0 +
            (real_T)b_k) - 1)) - 1] = ErK[i1];
        }

        i0 = ((freqs->size[1] << 1) + (nNaN << 1)) - 1;
        i1 = (freqs->size[1] << 1) + (nNaN << 1);
        if (i0 > i1) {
          i0 = 0;
          i1 = 0;
        } else {
          nb = EHK->size[0];
          i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, nb, &d_emlrtBCI,
            emlrtRootTLSGlobal) - 1;
          nb = EHK->size[0];
          i1 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, nb, &d_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        nb = r1->size[0];
        r1->size[0] = i1 - i0;
        emxEnsureCapacity((emxArray__common *)r1, nb, (int32_T)sizeof(int32_T),
                          &b_emlrtRTEI);
        loop_ub = i1 - i0;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r1->data[i1] = i0 + i1;
        }

        i0 = EHK->size[1];
        i1 = (int32_T)(1.0 + (real_T)b_k);
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &e_emlrtBCI,
          emlrtRootTLSGlobal);
        iv7[0] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv7, 1, iv8, 1, &emlrtECI,
          emlrtRootTLSGlobal);
        khi = r1->size[0];
        for (i0 = 0; i0 < khi; i0++) {
          EHK->data[r1->data[i0] + EHK->size[0] * ((int32_T)(1.0 + (real_T)b_k)
            - 1)] = EbK[i0];
        }

        i0 = ((freqs->size[1] << 2) + (nNaN << 1)) - 1;
        i1 = (freqs->size[1] << 2) + (nNaN << 1);
        if (i0 > i1) {
          i0 = 0;
          i1 = 0;
        } else {
          nb = EHK->size[0];
          i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, nb, &f_emlrtBCI,
            emlrtRootTLSGlobal) - 1;
          nb = EHK->size[0];
          i1 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, nb, &f_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        nb = r1->size[0];
        r1->size[0] = i1 - i0;
        emxEnsureCapacity((emxArray__common *)r1, nb, (int32_T)sizeof(int32_T),
                          &b_emlrtRTEI);
        loop_ub = i1 - i0;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r1->data[i1] = i0 + i1;
        }

        i0 = EHK->size[1];
        i1 = (int32_T)(1.0 + (real_T)b_k);
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &g_emlrtBCI,
          emlrtRootTLSGlobal);
        iv9[0] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv9, 1, iv8, 1, &b_emlrtECI,
          emlrtRootTLSGlobal);
        khi = r1->size[0];
        for (i0 = 0; i0 < khi; i0++) {
          EHK->data[r1->data[i0] + EHK->size[0] * ((int32_T)(1.0 + (real_T)b_k)
            - 1)] = HrK[i0];
        }

        i0 = (6 * freqs->size[1] + (nNaN << 1)) - 1;
        i1 = 6 * freqs->size[1] + (nNaN << 1);
        if (i0 > i1) {
          i0 = 0;
          i1 = 0;
        } else {
          nb = EHK->size[0];
          i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, nb, &h_emlrtBCI,
            emlrtRootTLSGlobal) - 1;
          nb = EHK->size[0];
          i1 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, nb, &h_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        nb = r1->size[0];
        r1->size[0] = i1 - i0;
        emxEnsureCapacity((emxArray__common *)r1, nb, (int32_T)sizeof(int32_T),
                          &b_emlrtRTEI);
        loop_ub = i1 - i0;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r1->data[i1] = i0 + i1;
        }

        i0 = EHK->size[1];
        i1 = (int32_T)(1.0 + (real_T)b_k);
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &i_emlrtBCI,
          emlrtRootTLSGlobal);
        iv10[0] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv10, 1, iv8, 1, &c_emlrtECI,
          emlrtRootTLSGlobal);
        khi = r1->size[0];
        for (i0 = 0; i0 < khi; i0++) {
          EHK->data[r1->data[i0] + EHK->size[0] * ((int32_T)(1.0 + (real_T)b_k)
            - 1)] = HbK[i0];
        }

        i0 = EHK->size[0];
        i1 = (freqs->size[1] << 3) + nNaN;
        nb = EHK->size[1];
        exponent = (int32_T)(1.0 + (real_T)b_k);
        EHK->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &pc_emlrtBCI,
                    emlrtRootTLSGlobal) + EHK->size[0] *
                   (emlrtDynamicBoundsCheckFastR2012b(exponent, 1, nb,
          &qc_emlrtBCI, emlrtRootTLSGlobal) - 1)) - 1] = EzK;
        i0 = EHK->size[0];
        i1 = 9 * freqs->size[1] + nNaN;
        nb = EHK->size[1];
        exponent = (int32_T)(1.0 + (real_T)b_k);
        EHK->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &rc_emlrtBCI,
                    emlrtRootTLSGlobal) + EHK->size[0] *
                   (emlrtDynamicBoundsCheckFastR2012b(exponent, 1, nb,
          &sc_emlrtBCI, emlrtRootTLSGlobal) - 1)) - 1] = HzK;
        b_k++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }

      nNaN++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emxFree_real_T(&b_z);

    /*  loop over frequencies */
    /*  Extract results for all rR ranges: */
    b_k = 0;
    b_emxInit_creal_T(&r2, 1, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&b_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&c_EHK, 2, &b_emlrtRTEI, TRUE);
    while (b_k <= rR->size[1] - 1) {
      for (i0 = 0; i0 < 201; i0++) {
        lambda[i0] = ((1.0 + (real_T)i0) + (1.0 + (real_T)b_k)) - 1.0;
      }

      nInf = (freqs->size[1] << 3) + 1;
      i0 = 10 * freqs->size[1];
      if (nInf > i0) {
        i1 = 0;
        i0 = 0;
      } else {
        i1 = EHK->size[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &j_emlrtBCI,
          emlrtRootTLSGlobal) - 1;
        nb = EHK->size[0];
        i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, nb, &j_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      nInf = (freqs->size[1] << 2) + 1;
      nb = 6 * freqs->size[1];
      if (nInf > nb) {
        exponent = 0;
        nb = 0;
      } else {
        exponent = eyBase->size[1];
        exponent = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, exponent,
          &q_emlrtBCI, emlrtRootTLSGlobal) - 1;
        nInf = eyBase->size[1];
        nb = emlrtDynamicBoundsCheckFastR2012b(nb, 1, nInf, &q_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      nInf = eyBase->size[0];
      k = (int32_T)(1.0 + (real_T)b_k);
      emlrtDynamicBoundsCheckFastR2012b(k, 1, nInf, &p_emlrtBCI,
        emlrtRootTLSGlobal);
      nInf = r1->size[0];
      r1->size[0] = nb - exponent;
      emxEnsureCapacity((emxArray__common *)r1, nInf, (int32_T)sizeof(int32_T),
                        &b_emlrtRTEI);
      loop_ub = nb - exponent;
      for (nb = 0; nb < loop_ub; nb++) {
        r1->data[nb] = exponent + nb;
      }

      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      for (nb = 0; nb < 201; nb++) {
        exponent = EHK->size[1];
        nInf = (int32_T)lambda[nb];
        emlrtDynamicBoundsCheckFastR2012b(nInf, 1, exponent, &wb_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      nb = rR->size[1];
      exponent = (int32_T)(1.0 + (real_T)b_k);
      emlrtDynamicBoundsCheckFastR2012b(exponent, 1, nb, &k_emlrtBCI,
        emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
      nb = b_EHK->size[0] * b_EHK->size[1];
      b_EHK->size[0] = i0 - i1;
      b_EHK->size[1] = 201;
      emxEnsureCapacity((emxArray__common *)b_EHK, nb, (int32_T)sizeof(creal_T),
                        &b_emlrtRTEI);
      for (nb = 0; nb < 201; nb++) {
        loop_ub = i0 - i1;
        for (exponent = 0; exponent < loop_ub; exponent++) {
          b_EHK->data[exponent + b_EHK->size[0] * nb] = EHK->data[(i1 + exponent)
            + EHK->size[0] * ((int32_T)lambda[nb] - 1)];
        }
      }

      for (i0 = 0; i0 < 201; i0++) {
        b_Filter_J1[i0].re = Filter_J1[i0];
        b_Filter_J1[i0].im = 0.0;
      }

      ndbl = rR->data[(int32_T)(1.0 + (real_T)b_k) - 1];
      i0 = r2->size[0];
      r2->size[0] = b_EHK->size[0];
      emxEnsureCapacity((emxArray__common *)r2, i0, (int32_T)sizeof(creal_T),
                        &b_emlrtRTEI);
      loop_ub = b_EHK->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        lamMin = 0.0;
        cdiff = 0.0;
        for (i1 = 0; i1 < 201; i1++) {
          absa = b_EHK->data[i0 + b_EHK->size[0] * i1].re * b_Filter_J1[i1].re -
            b_EHK->data[i0 + b_EHK->size[0] * i1].im * 0.0;
          absb = b_EHK->data[i0 + b_EHK->size[0] * i1].re * 0.0 + b_EHK->data[i0
            + b_EHK->size[0] * i1].im * b_Filter_J1[i1].re;
          lamMin += absa;
          cdiff += absb;
        }

        if (cdiff == 0.0) {
          r2->data[i0].re = lamMin / ndbl;
          r2->data[i0].im = 0.0;
        } else if (lamMin == 0.0) {
          r2->data[i0].re = 0.0;
          r2->data[i0].im = cdiff / ndbl;
        } else {
          r2->data[i0].re = lamMin / ndbl;
          r2->data[i0].im = cdiff / ndbl;
        }
      }

      emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      iv11[0] = 1;
      iv11[1] = r1->size[0];
      emlrtSubAssignSizeCheckR2012b(iv11, 2, *(int32_T (*)[1])r2->size, 1,
        &e_emlrtECI, emlrtRootTLSGlobal);
      khi = eyBase->size[0];
      nInf = r1->size[0];
      for (i0 = 0; i0 < nInf; i0++) {
        i1 = 0;
        while (i1 <= 0) {
          eyBase->data[((int32_T)(1.0 + (real_T)b_k) + khi * r1->data[i0]) - 1] =
            r2->data[i0];
          i1 = 1;
        }
      }

      nInf = (freqs->size[1] << 3) - 1;
      if (1 > nInf) {
        i0 = 1;
        i1 = -1;
      } else {
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &l_emlrtBCI,
          emlrtRootTLSGlobal);
        i0 = 2;
        i1 = EHK->size[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &l_emlrtBCI,
          emlrtRootTLSGlobal) - 1;
      }

      nb = freqs->size[1] << 3;
      if (2 > nb) {
        exponent = 1;
        nInf = 1;
        nb = 0;
      } else {
        exponent = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(2, 1, exponent, &m_emlrtBCI,
          emlrtRootTLSGlobal);
        exponent = 2;
        nInf = 2;
        k = EHK->size[0];
        nb = emlrtDynamicBoundsCheckFastR2012b(nb, 1, k, &m_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      for (k = 0; k < 201; k++) {
        nNaN = EHK->size[1];
        khi = (int32_T)lambda[k];
        emlrtDynamicBoundsCheckFastR2012b(khi, 1, nNaN, &xb_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      for (k = 0; k < 201; k++) {
        nNaN = EHK->size[1];
        khi = (int32_T)lambda[k];
        emlrtDynamicBoundsCheckFastR2012b(khi, 1, nNaN, &yb_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      k = div_s32_floor(i1, i0) + 1;
      nNaN = div_s32_floor(nb - exponent, nInf) + 1;
      emlrtDimSizeEqCheckFastR2012b(k, nNaN, &d_emlrtECI, emlrtRootTLSGlobal);
      k = freqs->size[1] << 2;
      if (1 > k) {
        loop_ub = 0;
      } else {
        nNaN = eyBase->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, nNaN, &s_emlrtBCI,
          emlrtRootTLSGlobal);
        nNaN = eyBase->size[1];
        loop_ub = emlrtDynamicBoundsCheckFastR2012b(k, 1, nNaN, &s_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      k = eyBase->size[0];
      nNaN = (int32_T)(1.0 + (real_T)b_k);
      emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, k, &r_emlrtBCI,
        emlrtRootTLSGlobal);
      k = r1->size[0];
      r1->size[0] = loop_ub;
      emxEnsureCapacity((emxArray__common *)r1, k, (int32_T)sizeof(int32_T),
                        &b_emlrtRTEI);
      for (k = 0; k < loop_ub; k++) {
        r1->data[k] = k;
      }

      emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      k = rR->size[1];
      nNaN = (int32_T)(1.0 + (real_T)b_k);
      emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, k, &n_emlrtBCI,
        emlrtRootTLSGlobal);
      k = rR->size[1];
      nNaN = (int32_T)(1.0 + (real_T)b_k);
      emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, k, &o_emlrtBCI,
        emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
      khi = EHK->size[0];
      ndbl = rR->data[(int32_T)(1.0 + (real_T)b_k) - 1];
      memcpy(&b_Filter_J0[0], &Filter_J0[0], 201U * sizeof(real_T));
      for (k = 0; k < 201; k++) {
        b_Filter_J0[k + 201] = Filter_J1[k] / ndbl;
      }

      k = c_EHK->size[0] * c_EHK->size[1];
      c_EHK->size[0] = div_s32_floor(i1, i0) + 1;
      c_EHK->size[1] = 402;
      emxEnsureCapacity((emxArray__common *)c_EHK, k, (int32_T)sizeof(creal_T),
                        &b_emlrtRTEI);
      for (k = 0; k < 201; k++) {
        loop_ub = div_s32_floor(i1, i0);
        for (nNaN = 0; nNaN <= loop_ub; nNaN++) {
          c_EHK->data[nNaN + c_EHK->size[0] * k] = EHK->data[i0 * nNaN +
            EHK->size[0] * ((int32_T)lambda[k] - 1)];
        }
      }

      for (i0 = 0; i0 < 201; i0++) {
        loop_ub = div_s32_floor(nb - exponent, nInf);
        for (i1 = 0; i1 <= loop_ub; i1++) {
          c_EHK->data[i1 + c_EHK->size[0] * (i0 + 201)] = EHK->data[((exponent +
            nInf * i1) + khi * ((int32_T)lambda[i0] - 1)) - 1];
        }
      }

      for (i0 = 0; i0 < 402; i0++) {
        c_Filter_J0[i0].re = b_Filter_J0[i0];
        c_Filter_J0[i0].im = 0.0;
      }

      ndbl = rR->data[(int32_T)(1.0 + (real_T)b_k) - 1];
      i0 = r2->size[0];
      r2->size[0] = c_EHK->size[0];
      emxEnsureCapacity((emxArray__common *)r2, i0, (int32_T)sizeof(creal_T),
                        &b_emlrtRTEI);
      loop_ub = c_EHK->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        lamMin = 0.0;
        cdiff = 0.0;
        for (i1 = 0; i1 < 402; i1++) {
          absa = c_EHK->data[i0 + c_EHK->size[0] * i1].re * c_Filter_J0[i1].re -
            c_EHK->data[i0 + c_EHK->size[0] * i1].im * 0.0;
          absb = c_EHK->data[i0 + c_EHK->size[0] * i1].re * 0.0 + c_EHK->data[i0
            + c_EHK->size[0] * i1].im * c_Filter_J0[i1].re;
          lamMin += absa;
          cdiff += absb;
        }

        if (cdiff == 0.0) {
          r2->data[i0].re = lamMin / ndbl;
          r2->data[i0].im = 0.0;
        } else if (lamMin == 0.0) {
          r2->data[i0].re = 0.0;
          r2->data[i0].im = cdiff / ndbl;
        } else {
          r2->data[i0].re = lamMin / ndbl;
          r2->data[i0].im = cdiff / ndbl;
        }
      }

      emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      iv12[0] = 1;
      iv12[1] = r1->size[0];
      emlrtSubAssignSizeCheckR2012b(iv12, 2, *(int32_T (*)[1])r2->size, 1,
        &f_emlrtECI, emlrtRootTLSGlobal);
      khi = eyBase->size[0];
      nInf = r1->size[0];
      for (i0 = 0; i0 < nInf; i0++) {
        i1 = 0;
        while (i1 <= 0) {
          eyBase->data[((int32_T)(1.0 + (real_T)b_k) + khi * r1->data[i0]) - 1] =
            r2->data[i0];
          i1 = 1;
        }
      }

      b_k++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emxFree_creal_T(&c_EHK);
    emxFree_creal_T(&b_EHK);
    emxFree_creal_T(&r2);

    /*  Compute spline coefficients: */
    /* PP=spline(log10(rR) ,eyBase'); */
    emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
    i0 = lambdaR->size[0] * lambdaR->size[1];
    lambdaR->size[0] = 1;
    lambdaR->size[1] = rRx->size[1];
    emxEnsureCapacity((emxArray__common *)lambdaR, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = rRx->size[0] * rRx->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
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
    loop_ub = eyBase->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      khi = eyBase->size[1];
      for (i1 = 0; i1 < khi; i1++) {
        b_eyBase->data[i1 + b_eyBase->size[0] * i0].re = eyBase->data[i0 +
          eyBase->size[0] * i1].re;
        b_eyBase->data[i1 + b_eyBase->size[0] * i0].im = -eyBase->data[i0 +
          eyBase->size[0] * i1].im;
      }
    }

    emlrtAssign(&PPV, spline(emlrt_marshallOut(rR), b_emlrt_marshallOut(b_eyBase),
      emlrt_marshallOut(lambdaR), &b_emlrtMCI));
    emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);

    /*  PPV = ppval(PP,log10(rRx)); */
    emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    emlrt_marshallIn(emlrtAlias(PPV), "PPV", eyBase);
    emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    emxFree_creal_T(&b_eyBase);
    if (1 > freqs->size[1]) {
      loop_ub = 0;
    } else {
      i0 = eyBase->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &t_emlrtBCI,
        emlrtRootTLSGlobal);
      i0 = eyBase->size[0];
      i1 = freqs->size[1];
      loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &t_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    khi = eyBase->size[1];
    i0 = Er->size[0] * Er->size[1];
    Er->size[0] = khi;
    Er->size[1] = loop_ub;
    emxEnsureCapacity((emxArray__common *)Er, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      for (i1 = 0; i1 < khi; i1++) {
        Er->data[i1 + Er->size[0] * i0].re = eyBase->data[i0 + eyBase->size[0] *
          i1].re;
        Er->data[i1 + Er->size[0] * i0].im = -eyBase->data[i0 + eyBase->size[0] *
          i1].im;
      }
    }

    i0 = freqs->size[1] << 1;
    if (freqs->size[1] + 1 > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = eyBase->size[0];
      nb = freqs->size[1] + 1;
      i1 = emlrtDynamicBoundsCheckFastR2012b(nb, 1, i1, &u_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      nb = eyBase->size[0];
      i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, nb, &u_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    loop_ub = eyBase->size[1];
    nb = Eb->size[0] * Eb->size[1];
    Eb->size[0] = loop_ub;
    Eb->size[1] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)Eb, nb, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = i0 - i1;
    for (i0 = 0; i0 < khi; i0++) {
      for (nb = 0; nb < loop_ub; nb++) {
        Eb->data[nb + Eb->size[0] * i0].re = eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].re;
        Eb->data[nb + Eb->size[0] * i0].im = -eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].im;
      }
    }

    nInf = (freqs->size[1] << 1) + 1;
    i0 = 3 * freqs->size[1];
    if (nInf > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = eyBase->size[0];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &v_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      nb = eyBase->size[0];
      i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, nb, &v_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    loop_ub = eyBase->size[1];
    nb = Hr->size[0] * Hr->size[1];
    Hr->size[0] = loop_ub;
    Hr->size[1] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)Hr, nb, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = i0 - i1;
    for (i0 = 0; i0 < khi; i0++) {
      for (nb = 0; nb < loop_ub; nb++) {
        Hr->data[nb + Hr->size[0] * i0].re = eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].re;
        Hr->data[nb + Hr->size[0] * i0].im = -eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].im;
      }
    }

    nInf = 3 * freqs->size[1] + 1;
    i0 = freqs->size[1] << 2;
    if (nInf > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = eyBase->size[0];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &w_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      nb = eyBase->size[0];
      i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, nb, &w_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    loop_ub = eyBase->size[1];
    nb = Hb->size[0] * Hb->size[1];
    Hb->size[0] = loop_ub;
    Hb->size[1] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)Hb, nb, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = i0 - i1;
    for (i0 = 0; i0 < khi; i0++) {
      for (nb = 0; nb < loop_ub; nb++) {
        Hb->data[nb + Hb->size[0] * i0].re = eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].re;
        Hb->data[nb + Hb->size[0] * i0].im = -eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].im;
      }
    }

    nInf = (freqs->size[1] << 2) + 1;
    i0 = 5 * freqs->size[1];
    if (nInf > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = eyBase->size[0];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &x_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      nb = eyBase->size[0];
      i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, nb, &x_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    loop_ub = eyBase->size[1];
    nb = Ez->size[0] * Ez->size[1];
    Ez->size[0] = loop_ub;
    Ez->size[1] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)Ez, nb, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = i0 - i1;
    for (i0 = 0; i0 < khi; i0++) {
      for (nb = 0; nb < loop_ub; nb++) {
        Ez->data[nb + Ez->size[0] * i0].re = eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].re;
        Ez->data[nb + Ez->size[0] * i0].im = -eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].im;
      }
    }

    nInf = 5 * freqs->size[1] + 1;
    i0 = 6 * freqs->size[1];
    if (nInf > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = eyBase->size[0];
      i1 = emlrtDynamicBoundsCheckFastR2012b(nInf, 1, i1, &y_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      nb = eyBase->size[0];
      i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, nb, &y_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    loop_ub = eyBase->size[1];
    nb = Hz->size[0] * Hz->size[1];
    Hz->size[0] = loop_ub;
    Hz->size[1] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)Hz, nb, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    khi = i0 - i1;
    for (i0 = 0; i0 < khi; i0++) {
      for (nb = 0; nb < loop_ub; nb++) {
        Hz->data[nb + Hz->size[0] * i0].re = eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].re;
        Hz->data[nb + Hz->size[0] * i0].im = -eyBase->data[(i1 + i0) +
          eyBase->size[0] * nb].im;
      }
    }

    emxFree_creal_T(&eyBase);
  } else {
    /*  Normal call without the lagged convolution + spline approximations: */
    nNaN = 1;
    emxInit_creal_T(&r3, 2, &b_emlrtRTEI, TRUE);
    emxInit_real_T(&c_z, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&d_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&e_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&f_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&g_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&h_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&i_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&j_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&k_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&l_EHK, 2, &b_emlrtRTEI, TRUE);
    emxInit_creal_T(&m_EHK, 2, &b_emlrtRTEI, TRUE);
    while (nNaN - 1 <= freqs->size[1] - 1) {
      i0 = freqs->size[1];
      i1 = (int32_T)(1.0 + (real_T)(nNaN - 1));
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ab_emlrtBCI,
        emlrtRootTLSGlobal);

      /*  */
      /*  Loop over receivers */
      /*  */
      k = 0;
      while (k <= rRx->size[1] - 1) {
        i0 = rRx->size[1];
        i1 = (int32_T)(1.0 + (real_T)k);
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bb_emlrtBCI,
          emlrtRootTLSGlobal);
        i0 = zRx->size[1];
        i1 = (int32_T)(1.0 + (real_T)k);
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &cb_emlrtBCI,
          emlrtRootTLSGlobal);

        /* tstart = tic; % start the timer */
        /*  */
        /*  Get the lambda values for this particular range rRxEval: */
        /*  */
        ndbl = rRx->data[k];
        for (i0 = 0; i0 < 201; i0++) {
          lambda[i0] = Filter_base[i0] / ndbl;
        }

        /*  */
        /*  Get kernels for the particular lambda's */
        /*   */
        for (b_k = 0; b_k < 201; b_k++) {
          /* all components of the EH field */
          emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
          i0 = c_z->size[0] * c_z->size[1];
          c_z->size[0] = 1;
          c_z->size[1] = z->size[1];
          emxEnsureCapacity((emxArray__common *)c_z, i0, (int32_T)sizeof(real_T),
                            &b_emlrtRTEI);
          loop_ub = z->size[0] * z->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            c_z->data[i0] = z->data[i0];
          }

          getCSEM1DKernels_aniso_hed(lambda[b_k], freqs->data[nNaN - 1],
            zRx->data[k], zTx, c_z, sig, ErK, EbK, HrK, HbK, &EzK, &HzK);
          emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
          nInf = EHK->size[0];
          khi = EHK->size[1];
          i0 = 1 + b_k;
          emlrtDynamicBoundsCheckFastR2012b(i0, 1, khi, &db_emlrtBCI,
            emlrtRootTLSGlobal);
          for (i0 = 0; i0 < 2; i0++) {
            i1 = 1 + i0;
            EHK->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, nInf,
                        &oc_emlrtBCI, emlrtRootTLSGlobal) + EHK->size[0] * b_k)
              - 1] = ErK[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            i1 = i0 + 3;
            EHK->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, nInf,
                        &oc_emlrtBCI, emlrtRootTLSGlobal) + EHK->size[0] * b_k)
              - 1] = EbK[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            i1 = i0 + 5;
            EHK->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, nInf,
                        &oc_emlrtBCI, emlrtRootTLSGlobal) + EHK->size[0] * b_k)
              - 1] = HrK[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            i1 = i0 + 7;
            EHK->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, nInf,
                        &oc_emlrtBCI, emlrtRootTLSGlobal) + EHK->size[0] * b_k)
              - 1] = HbK[i0];
          }

          EHK->data[(emlrtDynamicBoundsCheckFastR2012b(9, 1, nInf, &oc_emlrtBCI,
                      emlrtRootTLSGlobal) + EHK->size[0] * b_k) - 1] = EzK;
          EHK->data[(emlrtDynamicBoundsCheckFastR2012b(10, 1, nInf, &oc_emlrtBCI,
                      emlrtRootTLSGlobal) + EHK->size[0] * b_k) - 1] = HzK;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
            emlrtRootTLSGlobal);
        }

        /*  Don't forget to scale the J1 kernel by 1/r for */
        /*  Er,Eb,Hr,Hb */
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &fb_emlrtBCI,
          emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = r1->size[0];
        r1->size[0] = loop_ub;
        emxEnsureCapacity((emxArray__common *)r1, i0, (int32_T)sizeof(int32_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          r1->data[i0] = i0;
        }

        emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &eb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        ndbl = rRx->data[k];
        i0 = r3->size[0] * r3->size[1];
        r3->size[0] = 1;
        r3->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)r3, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          absa = EHK->data[1 + EHK->size[0] * i0].re;
          absb = EHK->data[1 + EHK->size[0] * i0].im;
          if (absb == 0.0) {
            r3->data[r3->size[0] * i0].re = absa / ndbl;
            r3->data[r3->size[0] * i0].im = 0.0;
          } else if (absa == 0.0) {
            r3->data[r3->size[0] * i0].re = 0.0;
            r3->data[r3->size[0] * i0].im = absb / ndbl;
          } else {
            r3->data[r3->size[0] * i0].re = absa / ndbl;
            r3->data[r3->size[0] * i0].im = absb / ndbl;
          }
        }

        emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
        iv11[0] = 1;
        iv11[1] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv11, 2, *(int32_T (*)[2])r3->size, 2,
          &g_emlrtECI, emlrtRootTLSGlobal);
        loop_ub = r3->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          EHK->data[1 + EHK->size[0] * r1->data[i0]] = r3->data[r3->size[0] * i0];
        }

        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(4, 1, i0, &hb_emlrtBCI,
          emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = r1->size[0];
        r1->size[0] = loop_ub;
        emxEnsureCapacity((emxArray__common *)r1, i0, (int32_T)sizeof(int32_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          r1->data[i0] = i0;
        }

        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(4, 1, i0, &gb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        ndbl = rRx->data[k];
        i0 = r3->size[0] * r3->size[1];
        r3->size[0] = 1;
        r3->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)r3, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          absa = EHK->data[3 + EHK->size[0] * i0].re;
          absb = EHK->data[3 + EHK->size[0] * i0].im;
          if (absb == 0.0) {
            r3->data[r3->size[0] * i0].re = absa / ndbl;
            r3->data[r3->size[0] * i0].im = 0.0;
          } else if (absa == 0.0) {
            r3->data[r3->size[0] * i0].re = 0.0;
            r3->data[r3->size[0] * i0].im = absb / ndbl;
          } else {
            r3->data[r3->size[0] * i0].re = absa / ndbl;
            r3->data[r3->size[0] * i0].im = absb / ndbl;
          }
        }

        emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        iv12[0] = 1;
        iv12[1] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv12, 2, *(int32_T (*)[2])r3->size, 2,
          &h_emlrtECI, emlrtRootTLSGlobal);
        loop_ub = r3->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          EHK->data[3 + EHK->size[0] * r1->data[i0]] = r3->data[r3->size[0] * i0];
        }

        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(6, 1, i0, &jb_emlrtBCI,
          emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = r1->size[0];
        r1->size[0] = loop_ub;
        emxEnsureCapacity((emxArray__common *)r1, i0, (int32_T)sizeof(int32_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          r1->data[i0] = i0;
        }

        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(6, 1, i0, &ib_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        ndbl = rRx->data[k];
        i0 = r3->size[0] * r3->size[1];
        r3->size[0] = 1;
        r3->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)r3, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          absa = EHK->data[5 + EHK->size[0] * i0].re;
          absb = EHK->data[5 + EHK->size[0] * i0].im;
          if (absb == 0.0) {
            r3->data[r3->size[0] * i0].re = absa / ndbl;
            r3->data[r3->size[0] * i0].im = 0.0;
          } else if (absa == 0.0) {
            r3->data[r3->size[0] * i0].re = 0.0;
            r3->data[r3->size[0] * i0].im = absb / ndbl;
          } else {
            r3->data[r3->size[0] * i0].re = absa / ndbl;
            r3->data[r3->size[0] * i0].im = absb / ndbl;
          }
        }

        emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        iv13[0] = 1;
        iv13[1] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv13, 2, *(int32_T (*)[2])r3->size, 2,
          &i_emlrtECI, emlrtRootTLSGlobal);
        loop_ub = r3->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          EHK->data[5 + EHK->size[0] * r1->data[i0]] = r3->data[r3->size[0] * i0];
        }

        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(8, 1, i0, &lb_emlrtBCI,
          emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = r1->size[0];
        r1->size[0] = loop_ub;
        emxEnsureCapacity((emxArray__common *)r1, i0, (int32_T)sizeof(int32_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          r1->data[i0] = i0;
        }

        emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(8, 1, i0, &kb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        ndbl = rRx->data[k];
        i0 = r3->size[0] * r3->size[1];
        r3->size[0] = 1;
        r3->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)r3, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          absa = EHK->data[7 + EHK->size[0] * i0].re;
          absb = EHK->data[7 + EHK->size[0] * i0].im;
          if (absb == 0.0) {
            r3->data[r3->size[0] * i0].re = absa / ndbl;
            r3->data[r3->size[0] * i0].im = 0.0;
          } else if (absa == 0.0) {
            r3->data[r3->size[0] * i0].re = 0.0;
            r3->data[r3->size[0] * i0].im = absb / ndbl;
          } else {
            r3->data[r3->size[0] * i0].re = absa / ndbl;
            r3->data[r3->size[0] * i0].im = absb / ndbl;
          }
        }

        emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
        iv14[0] = 1;
        iv14[1] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv14, 2, *(int32_T (*)[2])r3->size, 2,
          &j_emlrtECI, emlrtRootTLSGlobal);
        loop_ub = r3->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          EHK->data[7 + EHK->size[0] * r1->data[i0]] = r3->data[r3->size[0] * i0];
        }

        /*  */
        /*  Multiply kernels by filter weights and sum them all up, */
        /*  remembering to divide by the particular range: */
        /*  */
        emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &mb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            i_y = NULL;
            m0 = mxCreateCharArray(2, iv15);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&i_y, m0);
            error(b_message(i_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            j_y = NULL;
            m0 = mxCreateCharArray(2, iv16);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&j_y, m0);
            error(b_message(j_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &nb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            k_y = NULL;
            m0 = mxCreateCharArray(2, iv17);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&k_y, m0);
            error(b_message(k_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            l_y = NULL;
            m0 = mxCreateCharArray(2, iv18);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&l_y, m0);
            error(b_message(l_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = d_EHK->size[0] * d_EHK->size[1];
        d_EHK->size[0] = 1;
        d_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)d_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          d_EHK->data[d_EHK->size[0] * i0] = EHK->data[EHK->size[0] * i0];
        }

        lamMin = 0.0;
        cdiff = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = d_EHK->data[i0].re * Filter_J0[i0] - d_EHK->data[i0].im * 0.0;
          absb = d_EHK->data[i0].re * 0.0 + d_EHK->data[i0].im * Filter_J0[i0];
          lamMin += absa;
          cdiff += absb;
        }

        loop_ub = EHK->size[1];
        i0 = e_EHK->size[0] * e_EHK->size[1];
        e_EHK->size[0] = 1;
        e_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)e_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          e_EHK->data[e_EHK->size[0] * i0] = EHK->data[1 + EHK->size[0] * i0];
        }

        ndbl = 0.0;
        B = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = e_EHK->data[i0].re * Filter_J1[i0] - e_EHK->data[i0].im * 0.0;
          absb = e_EHK->data[i0].re * 0.0 + e_EHK->data[i0].im * Filter_J1[i0];
          ndbl += absa;
          B += absb;
        }

        lamMin += ndbl;
        cdiff += B;
        ndbl = rRx->data[k];
        if (cdiff == 0.0) {
          i0 = Er->size[0];
          i1 = 1 + k;
          nb = Er->size[1];
          Er->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bc_emlrtBCI,
                     emlrtRootTLSGlobal) + Er->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &cc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Er->size[0];
          i1 = 1 + k;
          nb = Er->size[1];
          Er->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bc_emlrtBCI,
                     emlrtRootTLSGlobal) + Er->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &cc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = 0.0;
        } else if (lamMin == 0.0) {
          i0 = Er->size[0];
          i1 = 1 + k;
          nb = Er->size[1];
          Er->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bc_emlrtBCI,
                     emlrtRootTLSGlobal) + Er->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &cc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = 0.0;
          i0 = Er->size[0];
          i1 = 1 + k;
          nb = Er->size[1];
          Er->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bc_emlrtBCI,
                     emlrtRootTLSGlobal) + Er->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &cc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        } else {
          i0 = Er->size[0];
          i1 = 1 + k;
          nb = Er->size[1];
          Er->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bc_emlrtBCI,
                     emlrtRootTLSGlobal) + Er->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &cc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Er->size[0];
          i1 = 1 + k;
          nb = Er->size[1];
          Er->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bc_emlrtBCI,
                     emlrtRootTLSGlobal) + Er->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &cc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        }

        emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(3, 1, i0, &ob_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            m_y = NULL;
            m0 = mxCreateCharArray(2, iv19);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&m_y, m0);
            error(b_message(m_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            n_y = NULL;
            m0 = mxCreateCharArray(2, iv20);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&n_y, m0);
            error(b_message(n_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(4, 1, i0, &pb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            o_y = NULL;
            m0 = mxCreateCharArray(2, iv21);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&o_y, m0);
            error(b_message(o_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            p_y = NULL;
            m0 = mxCreateCharArray(2, iv22);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&p_y, m0);
            error(b_message(p_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = f_EHK->size[0] * f_EHK->size[1];
        f_EHK->size[0] = 1;
        f_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)f_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          f_EHK->data[f_EHK->size[0] * i0] = EHK->data[2 + EHK->size[0] * i0];
        }

        lamMin = 0.0;
        cdiff = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = f_EHK->data[i0].re * Filter_J0[i0] - f_EHK->data[i0].im * 0.0;
          absb = f_EHK->data[i0].re * 0.0 + f_EHK->data[i0].im * Filter_J0[i0];
          lamMin += absa;
          cdiff += absb;
        }

        loop_ub = EHK->size[1];
        i0 = g_EHK->size[0] * g_EHK->size[1];
        g_EHK->size[0] = 1;
        g_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)g_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          g_EHK->data[g_EHK->size[0] * i0] = EHK->data[3 + EHK->size[0] * i0];
        }

        ndbl = 0.0;
        B = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = g_EHK->data[i0].re * Filter_J1[i0] - g_EHK->data[i0].im * 0.0;
          absb = g_EHK->data[i0].re * 0.0 + g_EHK->data[i0].im * Filter_J1[i0];
          ndbl += absa;
          B += absb;
        }

        lamMin += ndbl;
        cdiff += B;
        ndbl = rRx->data[k];
        if (cdiff == 0.0) {
          i0 = Eb->size[0];
          i1 = 1 + k;
          nb = Eb->size[1];
          Eb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &dc_emlrtBCI,
                     emlrtRootTLSGlobal) + Eb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ec_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Eb->size[0];
          i1 = 1 + k;
          nb = Eb->size[1];
          Eb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &dc_emlrtBCI,
                     emlrtRootTLSGlobal) + Eb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ec_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = 0.0;
        } else if (lamMin == 0.0) {
          i0 = Eb->size[0];
          i1 = 1 + k;
          nb = Eb->size[1];
          Eb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &dc_emlrtBCI,
                     emlrtRootTLSGlobal) + Eb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ec_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = 0.0;
          i0 = Eb->size[0];
          i1 = 1 + k;
          nb = Eb->size[1];
          Eb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &dc_emlrtBCI,
                     emlrtRootTLSGlobal) + Eb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ec_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        } else {
          i0 = Eb->size[0];
          i1 = 1 + k;
          nb = Eb->size[1];
          Eb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &dc_emlrtBCI,
                     emlrtRootTLSGlobal) + Eb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ec_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Eb->size[0];
          i1 = 1 + k;
          nb = Eb->size[1];
          Eb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &dc_emlrtBCI,
                     emlrtRootTLSGlobal) + Eb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ec_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        }

        emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(5, 1, i0, &qb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            q_y = NULL;
            m0 = mxCreateCharArray(2, iv23);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&q_y, m0);
            error(b_message(q_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            r_y = NULL;
            m0 = mxCreateCharArray(2, iv24);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&r_y, m0);
            error(b_message(r_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(6, 1, i0, &rb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            s_y = NULL;
            m0 = mxCreateCharArray(2, iv25);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&s_y, m0);
            error(b_message(s_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            t_y = NULL;
            m0 = mxCreateCharArray(2, iv26);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&t_y, m0);
            error(b_message(t_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = h_EHK->size[0] * h_EHK->size[1];
        h_EHK->size[0] = 1;
        h_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)h_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          h_EHK->data[h_EHK->size[0] * i0] = EHK->data[4 + EHK->size[0] * i0];
        }

        lamMin = 0.0;
        cdiff = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = h_EHK->data[i0].re * Filter_J0[i0] - h_EHK->data[i0].im * 0.0;
          absb = h_EHK->data[i0].re * 0.0 + h_EHK->data[i0].im * Filter_J0[i0];
          lamMin += absa;
          cdiff += absb;
        }

        loop_ub = EHK->size[1];
        i0 = i_EHK->size[0] * i_EHK->size[1];
        i_EHK->size[0] = 1;
        i_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)i_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          i_EHK->data[i_EHK->size[0] * i0] = EHK->data[5 + EHK->size[0] * i0];
        }

        ndbl = 0.0;
        B = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = i_EHK->data[i0].re * Filter_J1[i0] - i_EHK->data[i0].im * 0.0;
          absb = i_EHK->data[i0].re * 0.0 + i_EHK->data[i0].im * Filter_J1[i0];
          ndbl += absa;
          B += absb;
        }

        lamMin += ndbl;
        cdiff += B;
        ndbl = rRx->data[k];
        if (cdiff == 0.0) {
          i0 = Hr->size[0];
          i1 = 1 + k;
          nb = Hr->size[1];
          Hr->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hr->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &gc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Hr->size[0];
          i1 = 1 + k;
          nb = Hr->size[1];
          Hr->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hr->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &gc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = 0.0;
        } else if (lamMin == 0.0) {
          i0 = Hr->size[0];
          i1 = 1 + k;
          nb = Hr->size[1];
          Hr->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hr->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &gc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = 0.0;
          i0 = Hr->size[0];
          i1 = 1 + k;
          nb = Hr->size[1];
          Hr->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hr->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &gc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        } else {
          i0 = Hr->size[0];
          i1 = 1 + k;
          nb = Hr->size[1];
          Hr->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hr->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &gc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Hr->size[0];
          i1 = 1 + k;
          nb = Hr->size[1];
          Hr->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hr->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &gc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        }

        emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(7, 1, i0, &sb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            u_y = NULL;
            m0 = mxCreateCharArray(2, iv27);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&u_y, m0);
            error(b_message(u_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            v_y = NULL;
            m0 = mxCreateCharArray(2, iv28);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&v_y, m0);
            error(b_message(v_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(8, 1, i0, &tb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            w_y = NULL;
            m0 = mxCreateCharArray(2, iv29);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&w_y, m0);
            error(b_message(w_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            x_y = NULL;
            m0 = mxCreateCharArray(2, iv30);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&x_y, m0);
            error(b_message(x_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = j_EHK->size[0] * j_EHK->size[1];
        j_EHK->size[0] = 1;
        j_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)j_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          j_EHK->data[j_EHK->size[0] * i0] = EHK->data[6 + EHK->size[0] * i0];
        }

        lamMin = 0.0;
        cdiff = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = j_EHK->data[i0].re * Filter_J0[i0] - j_EHK->data[i0].im * 0.0;
          absb = j_EHK->data[i0].re * 0.0 + j_EHK->data[i0].im * Filter_J0[i0];
          lamMin += absa;
          cdiff += absb;
        }

        loop_ub = EHK->size[1];
        i0 = k_EHK->size[0] * k_EHK->size[1];
        k_EHK->size[0] = 1;
        k_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)k_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          k_EHK->data[k_EHK->size[0] * i0] = EHK->data[7 + EHK->size[0] * i0];
        }

        ndbl = 0.0;
        B = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = k_EHK->data[i0].re * Filter_J1[i0] - k_EHK->data[i0].im * 0.0;
          absb = k_EHK->data[i0].re * 0.0 + k_EHK->data[i0].im * Filter_J1[i0];
          ndbl += absa;
          B += absb;
        }

        lamMin += ndbl;
        cdiff += B;
        ndbl = rRx->data[k];
        if (cdiff == 0.0) {
          i0 = Hb->size[0];
          i1 = 1 + k;
          nb = Hb->size[1];
          Hb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ic_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Hb->size[0];
          i1 = 1 + k;
          nb = Hb->size[1];
          Hb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ic_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = 0.0;
        } else if (lamMin == 0.0) {
          i0 = Hb->size[0];
          i1 = 1 + k;
          nb = Hb->size[1];
          Hb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ic_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = 0.0;
          i0 = Hb->size[0];
          i1 = 1 + k;
          nb = Hb->size[1];
          Hb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ic_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        } else {
          i0 = Hb->size[0];
          i1 = 1 + k;
          nb = Hb->size[1];
          Hb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ic_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Hb->size[0];
          i1 = 1 + k;
          nb = Hb->size[1];
          Hb->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &hc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hb->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &ic_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        }

        emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(9, 1, i0, &ub_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            y_y = NULL;
            m0 = mxCreateCharArray(2, iv31);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&y_y, m0);
            error(b_message(y_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            ab_y = NULL;
            m0 = mxCreateCharArray(2, iv32);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&ab_y, m0);
            error(b_message(ab_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = l_EHK->size[0] * l_EHK->size[1];
        l_EHK->size[0] = 1;
        l_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)l_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          l_EHK->data[l_EHK->size[0] * i0] = EHK->data[8 + EHK->size[0] * i0];
        }

        lamMin = 0.0;
        cdiff = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = l_EHK->data[i0].re * Filter_J1[i0] - l_EHK->data[i0].im * 0.0;
          absb = l_EHK->data[i0].re * 0.0 + l_EHK->data[i0].im * Filter_J1[i0];
          lamMin += absa;
          cdiff += absb;
        }

        ndbl = rRx->data[k];
        if (cdiff == 0.0) {
          i0 = Ez->size[0];
          i1 = 1 + k;
          nb = Ez->size[1];
          Ez->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jc_emlrtBCI,
                     emlrtRootTLSGlobal) + Ez->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &kc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Ez->size[0];
          i1 = 1 + k;
          nb = Ez->size[1];
          Ez->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jc_emlrtBCI,
                     emlrtRootTLSGlobal) + Ez->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &kc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = 0.0;
        } else if (lamMin == 0.0) {
          i0 = Ez->size[0];
          i1 = 1 + k;
          nb = Ez->size[1];
          Ez->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jc_emlrtBCI,
                     emlrtRootTLSGlobal) + Ez->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &kc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = 0.0;
          i0 = Ez->size[0];
          i1 = 1 + k;
          nb = Ez->size[1];
          Ez->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jc_emlrtBCI,
                     emlrtRootTLSGlobal) + Ez->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &kc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        } else {
          i0 = Ez->size[0];
          i1 = 1 + k;
          nb = Ez->size[1];
          Ez->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jc_emlrtBCI,
                     emlrtRootTLSGlobal) + Ez->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &kc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Ez->size[0];
          i1 = 1 + k;
          nb = Ez->size[1];
          Ez->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &jc_emlrtBCI,
                     emlrtRootTLSGlobal) + Ez->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &kc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        }

        emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[0];
        emlrtDynamicBoundsCheckFastR2012b(10, 1, i0, &vb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        i0 = EHK->size[1];
        if (!(i0 == 201)) {
          i0 = EHK->size[1];
          if (i0 == 1) {
            emlrtPushRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
            bb_y = NULL;
            m0 = mxCreateCharArray(2, iv33);
            for (b_k = 0; b_k < 45; b_k++) {
              cv8[b_k] = cv9[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv8);
            emlrtAssign(&bb_y, m0);
            error(b_message(bb_y, &ab_emlrtMCI), &bb_emlrtMCI);
            emlrtPopRtStackR2012b(&rd_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
            cb_y = NULL;
            m0 = mxCreateCharArray(2, iv34);
            for (b_k = 0; b_k < 21; b_k++) {
              cv6[b_k] = cv10[b_k];
            }

            emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv6);
            emlrtAssign(&cb_y, m0);
            error(b_message(cb_y, &cb_emlrtMCI), &db_emlrtMCI);
            emlrtPopRtStackR2012b(&sd_emlrtRSI, emlrtRootTLSGlobal);
          }
        }

        emlrtPopRtStackR2012b(&qd_emlrtRSI, emlrtRootTLSGlobal);
        loop_ub = EHK->size[1];
        i0 = m_EHK->size[0] * m_EHK->size[1];
        m_EHK->size[0] = 1;
        m_EHK->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)m_EHK, i0, (int32_T)sizeof(creal_T),
                          &b_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          m_EHK->data[m_EHK->size[0] * i0] = EHK->data[9 + EHK->size[0] * i0];
        }

        lamMin = 0.0;
        cdiff = 0.0;
        for (i0 = 0; i0 < 201; i0++) {
          absa = m_EHK->data[i0].re * Filter_J1[i0] - m_EHK->data[i0].im * 0.0;
          absb = m_EHK->data[i0].re * 0.0 + m_EHK->data[i0].im * Filter_J1[i0];
          lamMin += absa;
          cdiff += absb;
        }

        ndbl = rRx->data[k];
        if (cdiff == 0.0) {
          i0 = Hz->size[0];
          i1 = 1 + k;
          nb = Hz->size[1];
          Hz->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hz->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &mc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Hz->size[0];
          i1 = 1 + k;
          nb = Hz->size[1];
          Hz->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hz->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &mc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = 0.0;
        } else if (lamMin == 0.0) {
          i0 = Hz->size[0];
          i1 = 1 + k;
          nb = Hz->size[1];
          Hz->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hz->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &mc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = 0.0;
          i0 = Hz->size[0];
          i1 = 1 + k;
          nb = Hz->size[1];
          Hz->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hz->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &mc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        } else {
          i0 = Hz->size[0];
          i1 = 1 + k;
          nb = Hz->size[1];
          Hz->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hz->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &mc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].re = lamMin / ndbl;
          i0 = Hz->size[0];
          i1 = 1 + k;
          nb = Hz->size[1];
          Hz->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lc_emlrtBCI,
                     emlrtRootTLSGlobal) + Hz->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nNaN, 1, nb, &mc_emlrtBCI,
                      emlrtRootTLSGlobal) - 1)) - 1].im = cdiff / ndbl;
        }

        emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);

        /*  */
        /*  Update the stats structure: */
        /*  */
        /* stats(iRx,iFreq).timer = toc(tstart);  % store the time for this eval */
        /* stats(iRx,iFreq).fct   = length(lambda);         */
        k++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }

      /*  loop over receivers */
      nNaN++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emxFree_creal_T(&m_EHK);
    emxFree_creal_T(&l_EHK);
    emxFree_creal_T(&k_EHK);
    emxFree_creal_T(&j_EHK);
    emxFree_creal_T(&i_EHK);
    emxFree_creal_T(&h_EHK);
    emxFree_creal_T(&g_EHK);
    emxFree_creal_T(&f_EHK);
    emxFree_creal_T(&e_EHK);
    emxFree_creal_T(&d_EHK);
    emxFree_real_T(&c_z);
    emxFree_creal_T(&r3);
  }

  emxFree_int32_T(&r1);
  emxFree_creal_T(&EHK);
  emxFree_real_T(&rR);
  emxFree_real_T(&lambdaR);

  /*          if all( abs(Er(:,iFreq)) < 1d-20)  % we've hit the severe attenuation at high frequency */
  /*              break; % no need to go to higher frequencies... */
  /*          end        */
  /*   All done amigos, adios! */
  /*  */
  emlrtDestroyArray(&PPV);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (get_CSEM1D_FD_FHT_aniso_hed.c) */
