/*
 * File: Subsystem.h
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Sun Jan 24 04:06:59 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Subsystem_h_
#define RTW_HEADER_Subsystem_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef Subsystem_COMMON_INCLUDES_
# define Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Subsystem_COMMON_INCLUDES_ */

#include "Subsystem_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T out[1024];                    /* '<S1>/ringmod Function' */
} B_Subsystem_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T signal[1024];                 /* '<Root>/signal' */
  real_T freq;                         /* '<Root>/freq' */
  real_T depth;                        /* '<Root>/depth' */
  real_T fs;                           /* '<Root>/fs' */
} ExtU_Subsystem_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1[1024];                   /* '<Root>/Out1' */
} ExtY_Subsystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_Subsystem_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_Subsystem_T Subsystem_B;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Subsystem_T Subsystem_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Subsystem_T Subsystem_Y;

/* Model entry point functions */
extern void Subsystem_initialize(void);
extern void Subsystem_step(void);
extern void Subsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Subsystem_T *const Subsystem_M;

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
 * hilite_system('ringmod/Subsystem')    - opens subsystem ringmod/Subsystem
 * hilite_system('ringmod/Subsystem/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ringmod'
 * '<S1>'   : 'ringmod/Subsystem'
 * '<S2>'   : 'ringmod/Subsystem/ringmod Function'
 */
#endif                                 /* RTW_HEADER_Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
