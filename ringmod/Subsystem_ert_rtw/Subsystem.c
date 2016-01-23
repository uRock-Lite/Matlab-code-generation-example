/*
 * File: Subsystem.c
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

#include "Subsystem.h"
#include "Subsystem_private.h"

/* Block signals (auto storage) */
B_Subsystem_T Subsystem_B;

/* External inputs (root inport signals with auto storage) */
ExtU_Subsystem_T Subsystem_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Subsystem_T Subsystem_Y;

/* Real-time model */
RT_MODEL_Subsystem_T Subsystem_M_;
RT_MODEL_Subsystem_T *const Subsystem_M = &Subsystem_M_;

/* Forward declaration for local functions */
static void Subsystem_sin(real_T x[1024]);

/* Function for MATLAB Function: '<S1>/ringmod Function' */
static void Subsystem_sin(real_T x[1024])
{
  int32_T k;
  for (k = 0; k < 1024; k++) {
    x[k] = sin(x[k]);
  }
}

/* Model step function */
void Subsystem_step(void)
{
  real_T y;
  int32_T i;

  /* MATLAB Function: '<S1>/ringmod Function' incorporates:
   *  Inport: '<Root>/freq'
   *  Inport: '<Root>/fs'
   */
  /* MATLAB Function 'Subsystem/ringmod Function': '<S2>:1' */
  /* RINGMOD ring modulates input signal at specified frequency and depth */
  /*  in is input signal */
  /*  modfreq is frequency of the ring mod */
  /*  depth ranges 0 (no ringmod added) to 1 (equal amplitude added) */
  /*  fs is sampling freq of input signal */
  /* '<S2>:1:8' */
  /* '<S2>:1:9' */
  y = 6.2831853071795862 * Subsystem_U.freq / Subsystem_U.fs;
  for (i = 0; i < 1024; i++) {
    Subsystem_B.out[i] = (1.0 + (real_T)i) * y;
  }

  Subsystem_sin(Subsystem_B.out);

  /* '<S2>:1:10' */
  /* '<S2>:1:12' */
  for (i = 0; i < 1024; i++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Inport: '<Root>/depth'
     *  Inport: '<Root>/signal'
     *  MATLAB Function: '<S1>/ringmod Function'
     */
    Subsystem_Y.Out1[i] = Subsystem_U.depth * Subsystem_B.out[i] *
      Subsystem_U.signal[i] + Subsystem_U.signal[i];
  }
}

/* Model initialize function */
void Subsystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Subsystem_M, (NULL));

  /* external inputs */
  (void) memset((void *)&Subsystem_U, 0,
                sizeof(ExtU_Subsystem_T));

  /* external outputs */
  (void) memset(&Subsystem_Y.Out1[0], 0,
                1024U*sizeof(real_T));
}

/* Model terminate function */
void Subsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
