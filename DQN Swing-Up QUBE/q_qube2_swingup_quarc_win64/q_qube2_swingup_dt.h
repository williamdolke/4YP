/*
 * q_qube2_swingup_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "q_qube2_swingup".
 *
 * Model version              : 5.30
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Apr 19 18:49:50 2022
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
  sizeof(uint8_T),
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
  "uint8_T",
  "t_card",
  "t_task"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&q_qube2_swingup_B.Integrator4), 0, 0, 19 },

  { (char_T *)(&q_qube2_swingup_B.Gain6), 14, 0, 1 }
  ,

  { (char_T *)(&q_qube2_swingup_DW.HILInitialize_FilterFrequency[0]), 0, 0, 3 },

  { (char_T *)(&q_qube2_swingup_DW.HILInitialize_Card), 15, 0, 1 },

  { (char_T *)(&q_qube2_swingup_DW.HILReadEncoderTimebase_Task), 16, 0, 1 },

  { (char_T *)(&q_qube2_swingup_DW.Scope_PWORK.LoggedData), 11, 0, 20 },

  { (char_T *)(&q_qube2_swingup_DW.HILInitialize_ClockModes), 6, 0, 7 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&q_qube2_swingup_P.Q[0]), 0, 0, 864 },

  { (char_T *)(&q_qube2_swingup_P.HILWriteAnalog_channels), 7, 0, 1 },

  { (char_T *)(&q_qube2_swingup_P.HILInitialize_OOTerminate), 0, 0, 36 },

  { (char_T *)(&q_qube2_swingup_P.HILInitialize_CKChannels), 6, 0, 3 },

  { (char_T *)(&q_qube2_swingup_P.HILInitialize_AOChannels), 7, 0, 7 },

  { (char_T *)(&q_qube2_swingup_P.HILInitialize_Active), 8, 0, 35 },

  { (char_T *)(&q_qube2_swingup_P.Gain6_Gain), 14, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  7U,
  rtPTransitions
};

/* [EOF] q_qube2_swingup_dt.h */