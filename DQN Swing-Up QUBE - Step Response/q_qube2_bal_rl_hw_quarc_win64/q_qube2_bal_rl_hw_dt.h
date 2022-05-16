/*
 * q_qube2_bal_rl_hw_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "q_qube2_bal_rl_hw".
 *
 * Model version              : 3.11
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Mar 11 15:34:49 2022
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(void*),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(c_coder_ctarget_DeepLearningN_T),
  sizeof(t_card),
  sizeof(t_task)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "c_coder_ctarget_DeepLearningN_T",
  "t_card",
  "t_task"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&q_qube2_bal_rl_hw_B.Bias), 0, 0, 9 },

  { (char_T *)(&q_qube2_bal_rl_hw_B.Scaling), 1, 0, 1 }
  ,

  { (char_T *)(&q_qube2_bal_rl_hw_DW.HILInitialize_FilterFrequency[0]), 0, 0, 10
  },

  { (char_T *)(&q_qube2_bal_rl_hw_DW.HILInitialize_Card), 15, 0, 1 },

  { (char_T *)(&q_qube2_bal_rl_hw_DW.HILReadEncoderTimebase_Task), 16, 0, 1 },

  { (char_T *)(&q_qube2_bal_rl_hw_DW.InvertedPendulumdeg_PWORK.LoggedData), 11,
    0, 5 },

  { (char_T *)(&q_qube2_bal_rl_hw_DW.HILInitialize_ClockModes), 6, 0, 7 },

  { (char_T *)(&q_qube2_bal_rl_hw_DW.Agent_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&q_qube2_bal_rl_hw_DW.network_not_empty), 8, 0, 1 },

  { (char_T *)(&q_qube2_bal_rl_hw_DW.network), 14, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  10U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&q_qube2_bal_rl_hw_P.alpha_bal_threshold), 0, 0, 1 },

  { (char_T *)(&q_qube2_bal_rl_hw_P.HILWriteAnalog_channels), 7, 0, 1 },

  { (char_T *)(&q_qube2_bal_rl_hw_P.u0V_Value), 0, 0, 27 },

  { (char_T *)(&q_qube2_bal_rl_hw_P.HILInitialize_CKChannels), 6, 0, 3 },

  { (char_T *)(&q_qube2_bal_rl_hw_P.action_Y0), 1, 0, 2 },

  { (char_T *)(&q_qube2_bal_rl_hw_P.HILInitialize_AOChannels), 7, 0, 7 },

  { (char_T *)(&q_qube2_bal_rl_hw_P.HILInitialize_Active), 8, 0, 35 },

  { (char_T *)(&q_qube2_bal_rl_hw_P.HILReadEncoderTimebase_Overflow), 3, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  8U,
  rtPTransitions
};

/* [EOF] q_qube2_bal_rl_hw_dt.h */
