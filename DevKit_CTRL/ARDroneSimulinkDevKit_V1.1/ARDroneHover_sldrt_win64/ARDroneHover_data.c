/*
 * ARDroneHover_data.c
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

#include "ARDroneHover.h"
#include "ARDroneHover_private.h"

/* Block parameters (default storage) */
P_ARDroneHover_T ARDroneHover_P = {
  /* Mask Parameter: PacketInput_MaxMissedTicks
   * Referenced by: '<S1>/Packet Input'
   */
  1.0,

  /* Mask Parameter: PacketInput1_MaxMissedTicks
   * Referenced by: '<S2>/Packet Input1'
   */
  1.0,

  /* Mask Parameter: PacketOutput_MaxMissedTicks
   * Referenced by: '<S9>/Packet Output'
   */
  10.0,

  /* Mask Parameter: PacketOutput1_MaxMissedTicks
   * Referenced by: '<S12>/Packet Output1'
   */
  10.0,

  /* Mask Parameter: PacketInput_YieldWhenWaiting
   * Referenced by: '<S1>/Packet Input'
   */
  0.0,

  /* Mask Parameter: PacketInput1_YieldWhenWaiting
   * Referenced by: '<S2>/Packet Input1'
   */
  0.0,

  /* Mask Parameter: PacketOutput_YieldWhenWaiting
   * Referenced by: '<S9>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketOutput1_YieldWhenWaiting
   * Referenced by: '<S12>/Packet Output1'
   */
  0.0,

  /* Mask Parameter: PacketInput_PacketID
   * Referenced by: '<S1>/Packet Input'
   */
  1,

  /* Mask Parameter: PacketInput1_PacketID
   * Referenced by: '<S2>/Packet Input1'
   */
  1,

  /* Mask Parameter: PacketOutput_PacketID
   * Referenced by: '<S9>/Packet Output'
   */
  1,

  /* Mask Parameter: PacketOutput1_PacketID
   * Referenced by: '<S12>/Packet Output1'
   */
  1,

  /* Expression: 1
   * Referenced by: '<Root>/commands enabled'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/commands disabled'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/take off'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/land'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/stop'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/_'
   */
  0.0,

  /* Expression: 1.5
   * Referenced by: '<S75>/proportional control gain - yaw'
   */
  1.5,

  /* Expression: 1
   * Referenced by: '<S78>/Gain2'
   */
  1.0,

  /* Expression: -0.5
   * Referenced by: '<S74>/Gain'
   */
  -0.5,

  /* Expression: 1
   * Referenced by: '<S78>/Gain3'
   */
  1.0,

  /* Expression: 0.4
   * Referenced by: '<S77>/Gain1'
   */
  0.4,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay to avoid algebraic loop'
   */
  0.0,

  /* Expression: [0 0]
   * Referenced by: '<S82>/Constant1'
   */
  { 0.0, 0.0 },

  /* Expression: pi/180
   * Referenced by: '<Root>/deg 2 rad'
   */
  0.017453292519943295,

  /* Expression: 180/pi
   * Referenced by: '<S6>/deg 2 rad1'
   */
  57.295779513082323,

  /* Expression: [0;0;-1]
   * Referenced by: '<Root>/Heading ref (rad)'
   */
  { 0.0, 0.0, -1.0 },

  /* Expression: 1
   * Referenced by: '<S76>/proportional control gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Inertial Y ref (m)'
   */
  0.0,

  /* Expression: [0;0;0]
   * Referenced by: '<Root>/Height ref (m)'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: [0;0;0]
   * Referenced by: '<Root>/Inertial X ref (m)'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S71>/Constant'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.065,

  /* Expression: [0;0;0;0]
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 100
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  100.0,

  /* Expression: -100
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  -100.0,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 2'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 2'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 3'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 3'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 4'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 4'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Constant1'
   */
  1.0,

  /* Computed Parameter: Gain_Gain_n
   * Referenced by: '<S13>/Gain'
   */
  0.001F,

  /* Computed Parameter: Gain1_Gain_p
   * Referenced by: '<S13>/Gain1'
   */
  0.001F,

  /* Computed Parameter: Gain9_Gain
   * Referenced by: '<S2>/Gain9'
   */
  -1.0F,

  /* Computed Parameter: Gain2_Gain_m
   * Referenced by: '<S13>/Gain2'
   */
  0.001F,

  /* Computed Parameter: Gain10_Gain
   * Referenced by: '<S2>/Gain10'
   */
  -1.0F,

  /* Computed Parameter: Gain6_Gain
   * Referenced by: '<S2>/Gain6'
   */
  -1.0F,

  /* Computed Parameter: Gain7_Gain
   * Referenced by: '<S2>/Gain7'
   */
  -1.0F,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<Root>/Manual Switch2'
   */
  1U,

  /* Computed Parameter: ManualSwitch3_CurrentSetting
   * Referenced by: '<S4>/Manual Switch3'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<Root>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  1U,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S12>/Constant'
   */
  { 1U, 13U }
};
