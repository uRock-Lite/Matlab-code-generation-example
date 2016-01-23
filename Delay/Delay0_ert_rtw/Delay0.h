/*
 * File: Delay0.h
 *
 * Code generated for Simulink model 'Delay0'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Sun Jan 24 03:25:52 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Delay0_h_
#define RTW_HEADER_Delay0_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef Delay0_COMMON_INCLUDES_
# define Delay0_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Delay0_COMMON_INCLUDES_ */

#include "Delay0_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T VariableFractionalDelay[2048];/* '<S1>/Variable Fractional Delay' */
} B_Delay0_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T VariableFractionalDelay_BUFF[44101];/* '<S1>/Variable Fractional Delay' */
  int32_T VariableFractionalDelay_BUFF_OF;/* '<S1>/Variable Fractional Delay' */
} DW_Delay0_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T signal[2048];                 /* '<Root>/signal' */
  real_T delay;                        /* '<Root>/delay ' */
} ExtU_Delay0_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1[2048];                   /* '<Root>/Out1' */
} ExtY_Delay0_T;

/* Parameters (auto storage) */
struct P_Delay0_T_ {
  real_T Gain1_Gain;                   /* Expression: 441
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S1>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Delay0_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_Delay0_T Delay0_P;

/* Block signals (auto storage) */
extern B_Delay0_T Delay0_B;

/* Block states (auto storage) */
extern DW_Delay0_T Delay0_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Delay0_T Delay0_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Delay0_T Delay0_Y;

/* Model entry point functions */
extern void Delay0_initialize(void);
extern void Delay0_step(void);
extern void Delay0_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Delay0_T *const Delay0_M;

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
 * hilite_system('Delay/Delay')    - opens subsystem Delay/Delay
 * hilite_system('Delay/Delay/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Delay'
 * '<S1>'   : 'Delay/Delay'
 */
#endif                                 /* RTW_HEADER_Delay0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
