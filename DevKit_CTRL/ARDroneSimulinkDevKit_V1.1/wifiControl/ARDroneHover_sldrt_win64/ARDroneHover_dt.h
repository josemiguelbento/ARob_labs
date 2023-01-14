/*
 * ARDroneHover_dt.h
 *
 * Code generation for model "ARDroneHover".
 *
 * Model version              : $Id: UAV_PIL.mdl 965 2013-03-21 01:08:53Z escobar $
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Jan 11 10:33:33 2023
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
  { (char_T *)(&ARDroneHover_B.TypeConversion), 0, 0, 169 },

  { (char_T *)(&ARDroneHover_B.battery), 7, 0, 1 },

  { (char_T *)(&ARDroneHover_B.Gain6), 1, 0, 19 },

  { (char_T *)(&ARDroneHover_B.UDPReceive1_o2), 5, 0, 2 },

  { (char_T *)(&ARDroneHover_B.UDPReceive1_o1[0]), 3, 0, 1451 },

  { (char_T *)(&ARDroneHover_B.Compare), 8, 0, 1 },

  { (char_T *)(&ARDroneHover_B.sf_MATLABFunction2_l.y), 0, 0, 1 },

  { (char_T *)(&ARDroneHover_B.sf_MATLABFunction1_a.y), 0, 0, 1 },

  { (char_T *)(&ARDroneHover_B.sf_MATLABFunction.y), 0, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat5.y), 7, 0, 2 },

  { (char_T *)(&ARDroneHover_B.BitConcat5.y_c), 5, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat4.y), 7, 0, 2 },

  { (char_T *)(&ARDroneHover_B.BitConcat4.y_c), 5, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat3.y), 7, 0, 2 },

  { (char_T *)(&ARDroneHover_B.BitConcat3.y_c), 5, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat2.y), 7, 0, 2 },

  { (char_T *)(&ARDroneHover_B.BitConcat2.y_c), 5, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat1.y), 7, 0, 2 },

  { (char_T *)(&ARDroneHover_B.BitConcat1.y_c), 5, 0, 1 },

  { (char_T *)(&ARDroneHover_B.BitConcat.y), 7, 0, 2 },

  { (char_T *)(&ARDroneHover_B.BitConcat.y_c), 5, 0, 1 }
  ,

  { (char_T *)(&ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE), 0, 0, 565
  },

  { (char_T *)(&ARDroneHover_DW.Euler1_PWORK.LoggedData), 11, 0, 19 },

  { (char_T *)(&ARDroneHover_DW.Integrator_IWORK), 10, 0, 4 },

  { (char_T *)(&ARDroneHover_DW.DiscreteTimeIntegrator_PrevResetState), 2, 0, 1
  },

  { (char_T *)(&ARDroneHover_DW.frame[0]), 3, 0, 2512 },

  { (char_T *)(&ARDroneHover_DW.t0_not_empty), 8, 0, 2 },

  { (char_T *)(&ARDroneHover_DW.sf_MATLABFunction2_l.u_), 0, 0, 1 },

  { (char_T *)(&ARDroneHover_DW.sf_MATLABFunction1_a.u_), 0, 0, 1 },

  { (char_T *)(&ARDroneHover_DW.sf_MATLABFunction.u_), 0, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  30U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&ARDroneHover_P.UDPReceive1_localPort), 6, 0, 4 },

  { (char_T *)(&ARDroneHover_P.Gain_Gain), 0, 0, 43 },

  { (char_T *)(&ARDroneHover_P.Gain6_Gain), 1, 0, 7 },

  { (char_T *)(&ARDroneHover_P.ManualSwitch2_CurrentSetting), 3, 0, 6 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  4U,
  rtPTransitions
};

/* [EOF] ARDroneHover_dt.h */
