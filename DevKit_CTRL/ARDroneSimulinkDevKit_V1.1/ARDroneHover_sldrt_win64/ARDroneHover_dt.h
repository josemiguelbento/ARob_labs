/*
 * ARDroneHover_dt.h
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "ARDroneHover".
 *
 * Model version              : $Id: UAV_PIL.mdl 965 2013-03-21 01:08:53Z escobar $
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Jan 17 11:06:09 2022
 *
 * Target selection: sldrt.tlc
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
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(uint32_T)
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
  "uint32_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&ARDroneHover_B.TypeConversion), 0, 0, 50 },

  { (char_T *)(&ARDroneHover_B.Gain), 1, 0, 6 },

  { (char_T *)(&ARDroneHover_B.PacketInput_o1[0]), 3, 0, 716 },

  { (char_T *)(&ARDroneHover_B.PacketInput_o2), 8, 0, 2 },

  { (char_T *)(&ARDroneHover_B.BitConcat5.y), 7, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat4.y), 7, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat3.y), 7, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat2.y), 7, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat1.y), 7, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat.y), 7, 0, 1 }
  ,

  { (char_T *)(&ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE), 0, 0, 12
  },

  { (char_T *)(&ARDroneHover_DW.PacketInput_PWORK), 11, 0, 22 },

  { (char_T *)(&ARDroneHover_DW.Integrator_IWORK), 10, 0, 1 },

  { (char_T *)(&ARDroneHover_DW.DiscreteTimeIntegrator_PrevResetState), 2, 0, 1
  },

  { (char_T *)(&ARDroneHover_DW.frame[0]), 3, 0, 2512 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  15U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&ARDroneHover_P.PacketInput_MaxMissedTicks), 0, 0, 8 },

  { (char_T *)(&ARDroneHover_P.PacketInput_PacketID), 6, 0, 4 },

  { (char_T *)(&ARDroneHover_P.commandsenabled_Value), 0, 0, 44 },

  { (char_T *)(&ARDroneHover_P.Gain_Gain_n), 1, 0, 7 },

  { (char_T *)(&ARDroneHover_P.ManualSwitch2_CurrentSetting), 3, 0, 6 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] ARDroneHover_dt.h */
