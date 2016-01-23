/*
 * File: Delay0.c
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

#include "Delay0.h"
#include "Delay0_private.h"

/* Block signals (auto storage) */
B_Delay0_T Delay0_B;

/* Block states (auto storage) */
DW_Delay0_T Delay0_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_Delay0_T Delay0_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Delay0_T Delay0_Y;

/* Real-time model */
RT_MODEL_Delay0_T Delay0_M_;
RT_MODEL_Delay0_T *const Delay0_M = &Delay0_M_;

/* Model step function */
void Delay0_step(void)
{
  int32_T ti1;
  int32_T inIdx;
  int32_T outIdx;
  int32_T buffstart;
  int32_T samp;
  real_T Gain1;
  int32_T i;
  real_T ti1_0;

  /* Gain: '<S1>/Gain1' incorporates:
   *  Inport: '<Root>/delay '
   */
  Gain1 = Delay0_P.Gain1_Gain * Delay0_U.delay;

  /* S-Function (sdspvdly2): '<S1>/Variable Fractional Delay' incorporates:
   *  Inport: '<Root>/signal'
   */
  i = (int32_T)floor(Gain1);
  if (i < 0) {
    i = 0;
    Gain1 = 0.0;
  } else if (i >= 44100) {
    i = 44100;
    Gain1 = 0.0;
  } else {
    Gain1 -= (real_T)i;
  }

  inIdx = 0;
  outIdx = 0;
  buffstart = Delay0_DW.VariableFractionalDelay_BUFF_OF;
  for (samp = 0; samp < 2048; samp++) {
    if (buffstart == 44101) {
      buffstart = 0;
    }

    Delay0_DW.VariableFractionalDelay_BUFF[buffstart] = Delay0_U.signal[inIdx];
    inIdx++;
    ti1 = buffstart - i;
    if (ti1 < 0) {
      ti1 += 44101;
    }

    if (ti1 > 0) {
      ti1_0 = Delay0_DW.VariableFractionalDelay_BUFF[ti1 - 1];
    } else {
      ti1_0 = Delay0_DW.VariableFractionalDelay_BUFF[ti1 + 44100];
    }

    Delay0_B.VariableFractionalDelay[outIdx] = (ti1_0 -
      Delay0_DW.VariableFractionalDelay_BUFF[ti1]) * Gain1 +
      Delay0_DW.VariableFractionalDelay_BUFF[ti1];
    outIdx++;
    buffstart++;
  }

  Delay0_DW.VariableFractionalDelay_BUFF_OF += 2048;
  while (Delay0_DW.VariableFractionalDelay_BUFF_OF >= 44101) {
    Delay0_DW.VariableFractionalDelay_BUFF_OF -= 44101;
  }

  /* End of S-Function (sdspvdly2): '<S1>/Variable Fractional Delay' */

  /* Outport: '<Root>/Out1' incorporates:
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/signal'
   *  Sum: '<S1>/Sum1'
   */
  for (i = 0; i < 2048; i++) {
    Delay0_Y.Out1[i] = Delay0_P.Gain_Gain * Delay0_B.VariableFractionalDelay[i]
      + Delay0_U.signal[i];
  }

  /* End of Outport: '<Root>/Out1' */
}

/* Model initialize function */
void Delay0_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Delay0_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Delay0_DW, 0,
                sizeof(DW_Delay0_T));

  /* external inputs */
  (void) memset((void *)&Delay0_U, 0,
                sizeof(ExtU_Delay0_T));

  /* external outputs */
  (void) memset(&Delay0_Y.Out1[0], 0,
                2048U*sizeof(real_T));

  {
    int32_T i;
    int32_T buffIdx;

    /* InitializeConditions for S-Function (sdspvdly2): '<S1>/Variable Fractional Delay' */
    Delay0_DW.VariableFractionalDelay_BUFF_OF = 44100;
    buffIdx = 0;
    for (i = 0; i < 44101; i++) {
      Delay0_DW.VariableFractionalDelay_BUFF[buffIdx] = 0.0;
      buffIdx++;
    }

    /* End of InitializeConditions for S-Function (sdspvdly2): '<S1>/Variable Fractional Delay' */
  }
}

/* Model terminate function */
void Delay0_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
