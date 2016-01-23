/*
 * File: Distortion0.h
 *
 * Code generated for Simulink model 'Distortion0'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Sun Jan 24 00:51:39 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Distortion0_h_
#define RTW_HEADER_Distortion0_h_
#include <stddef.h>
#include <string.h>
#ifndef Distortion0_COMMON_INCLUDES_
# define Distortion0_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Distortion0_COMMON_INCLUDES_ */

#include "Distortion0_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T signal[2048];                 /* '<Root>/signal' */
  real_T gain;                         /* '<Root>/gain' */
  real_T tone;                         /* '<Root>/tone' */
} ExtU_Distortion0_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1[2048];                   /* '<Root>/Out1' */
} ExtY_Distortion0_T;

/* Real-time Model Data Structure */
struct tag_RTM_Distortion0_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Distortion0_T Distortion0_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Distortion0_T Distortion0_Y;

/* Model entry point functions */
extern void Distortion0_initialize(void);
extern void Distortion0_step(void);
extern void Distortion0_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Distortion0_T *const Distortion0_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('distortion/Distortion')    - opens subsystem distortion/Distortion
 * hilite_system('distortion/Distortion/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'distortion'
 * '<S1>'   : 'distortion/Distortion'
 * '<S2>'   : 'distortion/Distortion/Saturation Dynamic'
 */
#endif                                 /* RTW_HEADER_Distortion0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
