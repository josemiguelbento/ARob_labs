/*
 * ARDroneHover.h
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

#ifndef RTW_HEADER_ARDroneHover_h_
#define RTW_HEADER_ARDroneHover_h_
#include <math.h>
#include <string.h>
#ifndef ARDroneHover_COMMON_INCLUDES_
# define ARDroneHover_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "sldrtdef.h"
#endif                                 /* ARDroneHover_COMMON_INCLUDES_ */

#include "ARDroneHover_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
# define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
# define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
# define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
# define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
# define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
# define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
# define rtmGettimingBridge(rtm)       ()
#endif

#ifndef rtmSettimingBridge
# define rtmSettimingBridge(rtm, val)  ()
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) <= 1)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmSetFirstInitCond
# define rtmSetFirstInitCond(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
# define rtmIsFirstInitCond(rtm)       ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define ARDroneHover_rtModel           RT_MODEL_ARDroneHover_T

/* Block signals for system '<S13>/Bit Concat' */
typedef struct {
  uint32_T y;                          /* '<S29>/bit_concat' */
} B_BitConcat_ARDroneHover_T;

/* Block signals (default storage) */
typedef struct {
  real_T TypeConversion;               /* '<S1>/Type Conversion' */
  real_T TypeConversion1;              /* '<S1>/Type Conversion1' */
  real_T TypeConversion2;              /* '<S1>/Type Conversion2' */
  real_T TypeConversion4;              /* '<S1>/Type Conversion4' */
  real_T Constant1[2];                 /* '<S82>/Constant1' */
  real_T Integrator[2];                /* '<S82>/Integrator' */
  real_T deg2rad[3];                   /* '<Root>/deg 2 rad' */
  real_T TypeConversion5;              /* '<S1>/Type Conversion5' */
  real_T TypeConversion6;              /* '<S1>/Type Conversion6' */
  real_T TypeConversion7;              /* '<S1>/Type Conversion7' */
  real_T TmpSignalConversionAtToWorkspaceInport1[9];
  real_T deg2rad1;                     /* '<S6>/deg 2 rad1' */
  real_T proportionalcontrolgain;      /* '<S76>/proportional control gain' */
  real_T InertialYrefm;                /* '<Root>/Inertial Y ref (m)' */
  real_T Saturation1;                  /* '<S1>/Saturation 1' */
  real_T Saturation2;                  /* '<S1>/Saturation 2' */
  real_T Saturation3;                  /* '<S1>/Saturation 3' */
  real_T Saturation4;                  /* '<S1>/Saturation 4' */
  real_T Add1[3];                      /* '<S72>/Add1' */
  real_T Add[3];                       /* '<S72>/Add' */
  real_T Clock1;                       /* '<Root>/Clock1' */
  real_T Vel_xy[2];                    /* '<S82>/Velocity from vehicle body frame  to inertial NED  frame' */
  real_T w_r;                          /* '<S4>/MATLAB Function' */
  real_T dot_psi_r;                    /* '<S4>/MATLAB Function' */
  real_T theta_r;                      /* '<S4>/MATLAB Function' */
  real_T phi_r;                        /* '<S4>/MATLAB Function' */
  real_T dot_xi[4];                    /* '<S4>/MATLAB Function' */
  real_T angleOut;                     /* '<S72>/normalize angle  between -pi and pi radians' */
  real_T yawOut;                       /* '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  real_T isFlying;                     /* '<S9>/Drone state request' */
  real32_T Gain;                       /* '<S13>/Gain' */
  real32_T Gain9;                      /* '<S2>/Gain9' */
  real32_T Gain10;                     /* '<S2>/Gain10' */
  real32_T Gain6;                      /* '<S2>/Gain6' */
  real32_T Gain7;                      /* '<S2>/Gain7' */
  real32_T Roll;                       /* '<S13>/MATLAB Function2' */
  uint8_T PacketInput_o1[500];         /* '<S1>/Packet Input' */
  uint8_T PacketInput1_o1[64];         /* '<S2>/Packet Input1' */
  uint8_T RateTransition[2];           /* '<S12>/Rate Transition' */
  uint8_T dataControl[150];            /* '<S9>/Drone state request' */
  boolean_T PacketInput_o2;            /* '<S1>/Packet Input' */
  boolean_T Compare;                   /* '<S71>/Compare' */
  B_BitConcat_ARDroneHover_T BitConcat5;/* '<S13>/Bit Concat5' */
  B_BitConcat_ARDroneHover_T BitConcat4;/* '<S13>/Bit Concat4' */
  B_BitConcat_ARDroneHover_T BitConcat3;/* '<S13>/Bit Concat3' */
  B_BitConcat_ARDroneHover_T BitConcat2;/* '<S13>/Bit Concat2' */
  B_BitConcat_ARDroneHover_T BitConcat1;/* '<S13>/Bit Concat1' */
  B_BitConcat_ARDroneHover_T BitConcat;/* '<S13>/Bit Concat' */
} B_ARDroneHover_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelaytoavoidalgebraicloop_DSTATE;/* '<S1>/Unit Delay to avoid algebraic loop' */
  real_T DiscreteTimeIntegrator_DSTATE[4];/* '<S4>/Discrete-Time Integrator' */
  real_T yaw0;                         /* '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  real_T mode;                         /* '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  real_T SequenceNumber;               /* '<S9>/Drone state request' */
  real_T count;                        /* '<S1>/Data synchronization ' */
  real_T countHeader;                  /* '<S1>/Data synchronization ' */
  real_T countBuffer;                  /* '<S1>/Data synchronization ' */
  real_T hPrev;                        /* '<S1>/ARDrone data decoding' */
  void *PacketInput_PWORK;             /* '<S1>/Packet Input' */
  void *PacketInput1_PWORK;            /* '<S2>/Packet Input1' */
  struct {
    void *LoggedData;
  } Euleranglesdeg_PWORK;              /* '<Root>/Euler angles (deg)' */

  struct {
    void *LoggedData;
  } Heightm_PWORK;                     /* '<S6>/Height (m)' */

  struct {
    void *LoggedData;
  } InertialpotitionalongXem_PWORK;    /* '<S6>/Inertial potition along Xe (m)' */

  struct {
    void *LoggedData;
  } InertialpotitionalongYem_PWORK;    /* '<S6>/Inertial potition along Ye (m)' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S6>/To Workspace' */

  struct {
    void *LoggedData;
  } headingdeg_PWORK;                  /* '<S6>/heading (deg)' */

  void *PacketOutput_PWORK[2];         /* '<S9>/Packet Output' */
  void *PacketOutput1_PWORK[2];        /* '<S12>/Packet Output1' */
  struct {
    void *LoggedData;
  } error_phi_PWORK;                   /* '<S72>/error_phi' */

  struct {
    void *LoggedData;
  } error_psi_PWORK;                   /* '<S72>/error_psi' */

  struct {
    void *LoggedData;
  } error_theta_PWORK;                 /* '<S72>/error_theta' */

  struct {
    void *LoggedData;
  } errorx_PWORK;                      /* '<S72>/errorx' */

  struct {
    void *LoggedData;
  } errory_PWORK;                      /* '<S72>/errory' */

  struct {
    void *LoggedData;
  } errorz_PWORK;                      /* '<S72>/errorz' */

  struct {
    void *LoggedData;
  } psipsi_d_PWORK;                    /* '<S72>/psi  psi_d' */

  struct {
    void *LoggedData[2];
  } integralstate_PWORK;               /* '<S4>/integral state' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<Root>/To Workspace6' */

  int_T Integrator_IWORK;              /* '<S82>/Integrator' */
  int8_T DiscreteTimeIntegrator_PrevResetState;/* '<S4>/Discrete-Time Integrator' */
  uint8_T frame[496];                  /* '<S1>/Data synchronization ' */
  uint8_T lastFrame[496];              /* '<S1>/Data synchronization ' */
  uint8_T buffer[1024];                /* '<S1>/Data synchronization ' */
  uint8_T dataPrev[496];               /* '<S1>/ARDrone data decoding' */
} DW_ARDroneHover_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE[2];         /* '<S82>/Integrator' */
} X_ARDroneHover_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE[2];         /* '<S82>/Integrator' */
} XDot_ARDroneHover_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[2];      /* '<S82>/Integrator' */
} XDis_ARDroneHover_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            ARDroneHover_B
#define BlockIO                        B_ARDroneHover_T
#define rtX                            ARDroneHover_X
#define ContinuousStates               X_ARDroneHover_T
#define rtXdot                         ARDroneHover_XDot
#define StateDerivatives               XDot_ARDroneHover_T
#define tXdis                          ARDroneHover_XDis
#define StateDisabled                  XDis_ARDroneHover_T
#define rtP                            ARDroneHover_P
#define Parameters                     P_ARDroneHover_T
#define rtDWork                        ARDroneHover_DW
#define D_Work                         DW_ARDroneHover_T

/* Parameters (default storage) */
struct P_ARDroneHover_T_ {
  real_T PacketInput_MaxMissedTicks;   /* Mask Parameter: PacketInput_MaxMissedTicks
                                        * Referenced by: '<S1>/Packet Input'
                                        */
  real_T PacketInput1_MaxMissedTicks;  /* Mask Parameter: PacketInput1_MaxMissedTicks
                                        * Referenced by: '<S2>/Packet Input1'
                                        */
  real_T PacketOutput_MaxMissedTicks;  /* Mask Parameter: PacketOutput_MaxMissedTicks
                                        * Referenced by: '<S9>/Packet Output'
                                        */
  real_T PacketOutput1_MaxMissedTicks; /* Mask Parameter: PacketOutput1_MaxMissedTicks
                                        * Referenced by: '<S12>/Packet Output1'
                                        */
  real_T PacketInput_YieldWhenWaiting; /* Mask Parameter: PacketInput_YieldWhenWaiting
                                        * Referenced by: '<S1>/Packet Input'
                                        */
  real_T PacketInput1_YieldWhenWaiting;/* Mask Parameter: PacketInput1_YieldWhenWaiting
                                        * Referenced by: '<S2>/Packet Input1'
                                        */
  real_T PacketOutput_YieldWhenWaiting;/* Mask Parameter: PacketOutput_YieldWhenWaiting
                                        * Referenced by: '<S9>/Packet Output'
                                        */
  real_T PacketOutput1_YieldWhenWaiting;/* Mask Parameter: PacketOutput1_YieldWhenWaiting
                                         * Referenced by: '<S12>/Packet Output1'
                                         */
  int32_T PacketInput_PacketID;        /* Mask Parameter: PacketInput_PacketID
                                        * Referenced by: '<S1>/Packet Input'
                                        */
  int32_T PacketInput1_PacketID;       /* Mask Parameter: PacketInput1_PacketID
                                        * Referenced by: '<S2>/Packet Input1'
                                        */
  int32_T PacketOutput_PacketID;       /* Mask Parameter: PacketOutput_PacketID
                                        * Referenced by: '<S9>/Packet Output'
                                        */
  int32_T PacketOutput1_PacketID;      /* Mask Parameter: PacketOutput1_PacketID
                                        * Referenced by: '<S12>/Packet Output1'
                                        */
  real_T commandsenabled_Value;        /* Expression: 1
                                        * Referenced by: '<Root>/commands enabled'
                                        */
  real_T commandsdisabled_Value;       /* Expression: 0
                                        * Referenced by: '<Root>/commands disabled'
                                        */
  real_T takeoff_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/take off'
                                        */
  real_T land_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/land'
                                        */
  real_T stop_Value;                   /* Expression: 1
                                        * Referenced by: '<Root>/stop'
                                        */
  real_T _Value;                       /* Expression: 0
                                        * Referenced by: '<Root>/_'
                                        */
  real_T proportionalcontrolgainyaw_Gain;/* Expression: 1.5
                                          * Referenced by: '<S75>/proportional control gain - yaw'
                                          */
  real_T Gain2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S78>/Gain2'
                                        */
  real_T Gain_Gain;                    /* Expression: -0.5
                                        * Referenced by: '<S74>/Gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S78>/Gain3'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.4
                                        * Referenced by: '<S77>/Gain1'
                                        */
  real_T UnitDelaytoavoidalgebraicloop_InitialCondition;/* Expression: 0
                                                         * Referenced by: '<S1>/Unit Delay to avoid algebraic loop'
                                                         */
  real_T Constant1_Value[2];           /* Expression: [0 0]
                                        * Referenced by: '<S82>/Constant1'
                                        */
  real_T deg2rad_Gain;                 /* Expression: pi/180
                                        * Referenced by: '<Root>/deg 2 rad'
                                        */
  real_T deg2rad1_Gain;                /* Expression: 180/pi
                                        * Referenced by: '<S6>/deg 2 rad1'
                                        */
  real_T Headingrefrad_Value[3];       /* Expression: [0;0;-1]
                                        * Referenced by: '<Root>/Heading ref (rad)'
                                        */
  real_T proportionalcontrolgain_Gain; /* Expression: 1
                                        * Referenced by: '<S76>/proportional control gain'
                                        */
  real_T InertialYrefm_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/Inertial Y ref (m)'
                                        */
  real_T Heightrefm_Value[3];          /* Expression: [0;0;0]
                                        * Referenced by: '<Root>/Height ref (m)'
                                        */
  real_T InertialXrefm_Value[3];       /* Expression: [0;0;0]
                                        * Referenced by: '<Root>/Inertial X ref (m)'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S71>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S4>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC[4]; /* Expression: [0;0;0;0]
                                        * Referenced by: '<S4>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 100
                                          * Referenced by: '<S4>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -100
                                          * Referenced by: '<S4>/Discrete-Time Integrator'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S1>/Saturation 1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S1>/Saturation 1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S1>/Saturation 2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S1>/Saturation 2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S1>/Saturation 3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S1>/Saturation 3'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S1>/Saturation 4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S1>/Saturation 4'
                                        */
  real_T Constant1_Value_p;            /* Expression: 1
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real32_T Gain_Gain_n;                /* Computed Parameter: Gain_Gain_n
                                        * Referenced by: '<S13>/Gain'
                                        */
  real32_T Gain1_Gain_p;               /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<S13>/Gain1'
                                        */
  real32_T Gain9_Gain;                 /* Computed Parameter: Gain9_Gain
                                        * Referenced by: '<S2>/Gain9'
                                        */
  real32_T Gain2_Gain_m;               /* Computed Parameter: Gain2_Gain_m
                                        * Referenced by: '<S13>/Gain2'
                                        */
  real32_T Gain10_Gain;                /* Computed Parameter: Gain10_Gain
                                        * Referenced by: '<S2>/Gain10'
                                        */
  real32_T Gain6_Gain;                 /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<S2>/Gain6'
                                        */
  real32_T Gain7_Gain;                 /* Computed Parameter: Gain7_Gain
                                        * Referenced by: '<S2>/Gain7'
                                        */
  uint8_T ManualSwitch2_CurrentSetting;/* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch2'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S4>/Manual Switch3'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch1'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
  uint8_T Constant_Value_k[2];         /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S12>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ARDroneHover_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeF[1][2];
  ODE1_IntgData intgData;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    boolean_T firstInitCondFlag;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_ARDroneHover_T ARDroneHover_P;

/* Block signals (default storage) */
extern B_ARDroneHover_T ARDroneHover_B;

/* Continuous states (default storage) */
extern X_ARDroneHover_T ARDroneHover_X;

/* Block states (default storage) */
extern DW_ARDroneHover_T ARDroneHover_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* Model entry point functions */
extern void ARDroneHover_initialize(void);
extern void ARDroneHover_output0(void);
extern void ARDroneHover_update0(void);
extern void ARDroneHover_output(int_T tid);
extern void ARDroneHover_update(int_T tid);
extern void ARDroneHover_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern ARDroneHover_rtModel *ARDroneHover(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_ARDroneHover_T *const ARDroneHover_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ARDroneHover'
 * '<S1>'   : 'ARDroneHover/ARDrone Wi-Fi  Block'
 * '<S2>'   : 'ARDroneHover/Data from Qualisys'
 * '<S3>'   : 'ARDroneHover/Decode Data'
 * '<S4>'   : 'ARDroneHover/Outer-loop Controller'
 * '<S5>'   : 'ARDroneHover/Position estimation Important:This block provides an  inaccurate extimation of position  based on  velocity information. '
 * '<S6>'   : 'ARDroneHover/Visualization of Drone states'
 * '<S7>'   : 'ARDroneHover/ARDrone Wi-Fi  Block/ARDrone data decoding'
 * '<S8>'   : 'ARDroneHover/ARDrone Wi-Fi  Block/Data synchronization '
 * '<S9>'   : 'ARDroneHover/ARDrone Wi-Fi  Block/Subsystem1'
 * '<S10>'  : 'ARDroneHover/ARDrone Wi-Fi  Block/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. '
 * '<S11>'  : 'ARDroneHover/ARDrone Wi-Fi  Block/Subsystem1/Drone state request'
 * '<S12>'  : 'ARDroneHover/ARDrone Wi-Fi  Block/Subsystem1/send byte to  state udp port  '
 * '<S13>'  : 'ARDroneHover/Data from Qualisys/Subsystem'
 * '<S14>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat'
 * '<S15>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat1'
 * '<S16>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat2'
 * '<S17>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat3'
 * '<S18>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat4'
 * '<S19>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat5'
 * '<S20>'  : 'ARDroneHover/Data from Qualisys/Subsystem/MATLAB Function1'
 * '<S21>'  : 'ARDroneHover/Data from Qualisys/Subsystem/MATLAB Function2'
 * '<S22>'  : 'ARDroneHover/Data from Qualisys/Subsystem/MATLAB Function3'
 * '<S23>'  : 'ARDroneHover/Data from Qualisys/Subsystem/MATLAB Function4'
 * '<S24>'  : 'ARDroneHover/Data from Qualisys/Subsystem/MATLAB Function5'
 * '<S25>'  : 'ARDroneHover/Data from Qualisys/Subsystem/MATLAB Function6'
 * '<S26>'  : 'ARDroneHover/Data from Qualisys/Subsystem/MATLAB Function7'
 * '<S27>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat/bc2'
 * '<S28>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat/bc3'
 * '<S29>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat/bc4'
 * '<S30>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat/bc2/bit_concat'
 * '<S31>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat/bc3/bit_concat'
 * '<S32>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat/bc4/bit_concat'
 * '<S33>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat1/bc2'
 * '<S34>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat1/bc3'
 * '<S35>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat1/bc4'
 * '<S36>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat1/bc2/bit_concat'
 * '<S37>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat1/bc3/bit_concat'
 * '<S38>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat1/bc4/bit_concat'
 * '<S39>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat2/bc2'
 * '<S40>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat2/bc3'
 * '<S41>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat2/bc4'
 * '<S42>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat2/bc2/bit_concat'
 * '<S43>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat2/bc3/bit_concat'
 * '<S44>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat2/bc4/bit_concat'
 * '<S45>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat3/bc2'
 * '<S46>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat3/bc3'
 * '<S47>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat3/bc4'
 * '<S48>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat3/bc2/bit_concat'
 * '<S49>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat3/bc3/bit_concat'
 * '<S50>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat3/bc4/bit_concat'
 * '<S51>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat4/bc2'
 * '<S52>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat4/bc3'
 * '<S53>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat4/bc4'
 * '<S54>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat4/bc2/bit_concat'
 * '<S55>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat4/bc3/bit_concat'
 * '<S56>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat4/bc4/bit_concat'
 * '<S57>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat5/bc2'
 * '<S58>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat5/bc3'
 * '<S59>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat5/bc4'
 * '<S60>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat5/bc2/bit_concat'
 * '<S61>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat5/bc3/bit_concat'
 * '<S62>'  : 'ARDroneHover/Data from Qualisys/Subsystem/Bit Concat5/bc4/bit_concat'
 * '<S63>'  : 'ARDroneHover/Decode Data/MATLAB Function1'
 * '<S64>'  : 'ARDroneHover/Decode Data/MATLAB Function2'
 * '<S65>'  : 'ARDroneHover/Decode Data/MATLAB Function3'
 * '<S66>'  : 'ARDroneHover/Decode Data/MATLAB Function4'
 * '<S67>'  : 'ARDroneHover/Decode Data/MATLAB Function5'
 * '<S68>'  : 'ARDroneHover/Decode Data/MATLAB Function6'
 * '<S69>'  : 'ARDroneHover/Decode Data/MATLAB Function7'
 * '<S70>'  : 'ARDroneHover/Outer-loop Controller/Baseline Controller'
 * '<S71>'  : 'ARDroneHover/Outer-loop Controller/Compare To Zero'
 * '<S72>'  : 'ARDroneHover/Outer-loop Controller/Error Scopes'
 * '<S73>'  : 'ARDroneHover/Outer-loop Controller/MATLAB Function'
 * '<S74>'  : 'ARDroneHover/Outer-loop Controller/Baseline Controller/Forward velocity controller '
 * '<S75>'  : 'ARDroneHover/Outer-loop Controller/Baseline Controller/Heading controller'
 * '<S76>'  : 'ARDroneHover/Outer-loop Controller/Baseline Controller/Height controller '
 * '<S77>'  : 'ARDroneHover/Outer-loop Controller/Baseline Controller/Lateral velocity controller'
 * '<S78>'  : 'ARDroneHover/Outer-loop Controller/Baseline Controller/Position controller'
 * '<S79>'  : 'ARDroneHover/Outer-loop Controller/Baseline Controller/Heading controller/normalize angle  between -pi and pi radians'
 * '<S80>'  : 'ARDroneHover/Outer-loop Controller/Baseline Controller/Position controller/Coordinate trnasformation  from inertial frame to body frame '
 * '<S81>'  : 'ARDroneHover/Outer-loop Controller/Error Scopes/normalize angle  between -pi and pi radians'
 * '<S82>'  : 'ARDroneHover/Position estimation Important:This block provides an  inaccurate extimation of position  based on  velocity information. /Position estimation'
 * '<S83>'  : 'ARDroneHover/Position estimation Important:This block provides an  inaccurate extimation of position  based on  velocity information. /Position estimation/Velocity from vehicle body frame  to inertial NED  frame'
 */
#endif                                 /* RTW_HEADER_ARDroneHover_h_ */
