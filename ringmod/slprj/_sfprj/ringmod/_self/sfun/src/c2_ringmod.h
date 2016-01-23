#ifndef __c2_ringmod_h__
#define __c2_ringmod_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc2_ringmodInstanceStruct
#define typedef_SFc2_ringmodInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_isStable;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_ringmod;
  real_T (*c2_in)[1024];
  real_T (*c2_out)[1024];
  real_T *c2_freq;
  real_T *c2_depth;
  real_T *c2_fs;
} SFc2_ringmodInstanceStruct;

#endif                                 /*typedef_SFc2_ringmodInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_ringmod_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_ringmod_get_check_sum(mxArray *plhs[]);
extern void c2_ringmod_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
