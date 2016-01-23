/*
 * File: Distortion0.c
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

#include "Distortion0.h"
#include "Distortion0_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Distortion0_T Distortion0_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Distortion0_T Distortion0_Y;

/* Real-time model */
RT_MODEL_Distortion0_T Distortion0_M_;
RT_MODEL_Distortion0_T *const Distortion0_M = &Distortion0_M_;

/* Model step function */
void Distortion0_step(void)
{
  int32_T i;
  real_T rtb_Switch2;
  boolean_T rtb_LowerRelop1;
  for (i = 0; i < 2048; i++) {
    /* Product: '<S1>/Product' incorporates:
     *  Inport: '<Root>/gain'
     *  Inport: '<Root>/signal'
     */
    rtb_Switch2 = Distortion0_U.signal[i] * Distortion0_U.gain;

    /* RelationalOperator: '<S2>/LowerRelop1' incorporates:
     *  Inport: '<Root>/tone'
     */
    rtb_LowerRelop1 = (rtb_Switch2 > Distortion0_U.tone);

    /* Switch: '<S2>/Switch' incorporates:
     *  Inport: '<Root>/tone'
     *  RelationalOperator: '<S2>/UpperRelop'
     *  UnaryMinus: '<S1>/Unary Minus'
     */
    if (rtb_Switch2 < -Distortion0_U.tone) {
      rtb_Switch2 = -Distortion0_U.tone;
    }

    /* End of Switch: '<S2>/Switch' */

    /* Switch: '<S2>/Switch2' */
    if (rtb_LowerRelop1) {
      /* Outport: '<Root>/Out1' incorporates:
       *  Inport: '<Root>/tone'
       */
      Distortion0_Y.Out1[i] = Distortion0_U.tone;
    } else {
      /* Outport: '<Root>/Out1' */
      Distortion0_Y.Out1[i] = rtb_Switch2;
    }

    /* End of Switch: '<S2>/Switch2' */
  }
}

/* Model initialize function */
void Distortion0_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Distortion0_M, (NULL));

  /* external inputs */
  (void) memset((void *)&Distortion0_U, 0,
                sizeof(ExtU_Distortion0_T));

  /* external outputs */
  (void) memset(&Distortion0_Y.Out1[0], 0,
                2048U*sizeof(real_T));
}

/* Model terminate function */
void Distortion0_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
