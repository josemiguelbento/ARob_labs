/*
 * ARDroneHover.h
 *
 * Code generation for model "ARDroneHover".
 *
 * Model version              : $Id: UAV_PIL.mdl 965 2013-03-21 01:08:53Z escobar $
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Wed Oct 12 12:41:26 2022
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
#include "DAHostLib_Network.h"
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
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
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
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
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
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
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
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
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

/* Block signals (default storage) */
typedef struct {
  real_T TypeConversion;               /* '<S1>/Type Conversion' */
  real_T TypeConversion4;              /* '<S1>/Type Conversion4' */
  real_T Constant1[2];                 /* '<S18>/Constant1' */
  real_T Integrator[2];                /* '<S18>/Integrator' */
  real_T TypeConversion1;              /* '<S1>/Type Conversion1' */
  real_T TypeConversion2;              /* '<S1>/Type Conversion2' */
  real_T UnitDelaytoavoidalgebraicloop;
                                 /* '<S1>/Unit Delay to avoid algebraic loop' */
  real_T ManualSwitch2;                /* '<Root>/Manual Switch2' */
  real_T TypeConversion3;              /* '<S1>/Type Conversion3' */
  real_T deg2rad[3];                   /* '<Root>/deg 2 rad' */
  real_T TypeConversion5;              /* '<S1>/Type Conversion5' */
  real_T TypeConversion6;              /* '<S1>/Type Conversion6' */
  real_T TypeConversion7;              /* '<S1>/Type Conversion7' */
  real_T TmpSignalConversionAtToWorkspaceInport1[9];
  real_T deg2rad1;                     /* '<S4>/deg 2 rad1' */
  real_T Heightrefm;                   /* '<Root>/Height ref (m)' */
  real_T Sum3;                         /* '<S13>/Sum3' */
  real_T proportionalcontrolgain;      /* '<S13>/proportional control gain' */
  real_T Saturation4;                  /* '<S1>/Saturation 4' */
  real_T Sum4[2];                      /* '<S15>/Sum4' */
  real_T Gain3;                        /* '<S15>/Gain3' */
  real_T Sum5;                         /* '<S14>/Sum5' */
  real_T Gain1;                        /* '<S14>/Gain1' */
  real_T Saturation1;                  /* '<S1>/Saturation 1' */
  real_T Gain2;                        /* '<S15>/Gain2' */
  real_T Sum2;                         /* '<S11>/Sum2' */
  real_T Gain;                         /* '<S11>/Gain' */
  real_T Saturation2;                  /* '<S1>/Saturation 2' */
  real_T Sum1;                         /* '<S12>/Sum1' */
  real_T proportionalcontrolgainyaw;
                                   /* '<S12>/proportional control gain - yaw' */
  real_T Saturation3;                  /* '<S1>/Saturation 3' */
  real_T ManualSwitch1;                /* '<Root>/Manual Switch1' */
  real_T KillSwitch;                   /* '<Root>/Kill-Switch' */
  real_T TmpSignalConversionAtSFunctionInport1[2];
          /* '<S18>/Velocity from vehicle body frame  to inertial NED  frame' */
  real_T Vel_xy[2];
          /* '<S18>/Velocity from vehicle body frame  to inertial NED  frame' */
  real_T Vec_xy[2];
     /* '<S15>/Coordinate trnasformation  from inertial frame to body frame ' */
  real_T angleOut;     /* '<S12>/normalize angle  between -pi and pi radians' */
  real_T yawOut;
  /* '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  real_T isFlying;                     /* '<S7>/Drone state request' */
  real_T error;                        /* '<S7>/Drone state request' */
  real_T flagOut;                      /* '<S1>/Data synchronization ' */
  real_T status[32];                   /* '<S1>/ARDrone data decoding' */
  real_T height;                       /* '<S1>/ARDrone data decoding' */
  real_T cksumError;                   /* '<S1>/ARDrone data decoding' */
  uint32_T battery;                    /* '<S1>/ARDrone data decoding' */
  real32_T rollAngle;                  /* '<S1>/ARDrone data decoding' */
  real32_T pitchAngle;                 /* '<S1>/ARDrone data decoding' */
  real32_T yawAngle;                   /* '<S1>/ARDrone data decoding' */
  real32_T u;                          /* '<S1>/ARDrone data decoding' */
  real32_T v;                          /* '<S1>/ARDrone data decoding' */
  real32_T w;                          /* '<S1>/ARDrone data decoding' */
  uint16_T UDPReceive1_o2;             /* '<S1>/UDP Receive1' */
  uint8_T UDPReceive1_o1[500];         /* '<S1>/UDP Receive1' */
  uint8_T RateTransition[2];           /* '<S10>/Rate Transition' */
  uint8_T dataControl[150];            /* '<S7>/Drone state request' */
  uint8_T frameOut[496];               /* '<S1>/Data synchronization ' */
} B_ARDroneHover_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelaytoavoidalgebraicloop_DSTATE;
                                 /* '<S1>/Unit Delay to avoid algebraic loop' */
  real_T UDPReceive1_NetworkLib[137];  /* '<S1>/UDP Receive1' */
  real_T UDPSend_NetworkLib[137];      /* '<S7>/UDP Send' */
  real_T UDPSend_NetworkLib_h[137];    /* '<S10>/UDP Send' */
  real_T yaw0;
  /* '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  real_T mode;
  /* '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  real_T SequenceNumber;               /* '<S7>/Drone state request' */
  real_T count;                        /* '<S1>/Data synchronization ' */
  real_T countHeader;                  /* '<S1>/Data synchronization ' */
  real_T countBuffer;                  /* '<S1>/Data synchronization ' */
  real_T hPrev;                        /* '<S1>/ARDrone data decoding' */
  struct {
    void *LoggedData;
  } Heightm_PWORK;                     /* '<S4>/Height (m)' */

  struct {
    void *LoggedData;
  } InertialpositionalongXem_PWORK;  /* '<S4>/Inertial position along Xe (m)' */

  struct {
    void *LoggedData;
  } InertialpositionalongYem_PWORK;  /* '<S4>/Inertial position along Ye (m)' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S4>/To Workspace' */

  struct {
    void *LoggedData;
  } headingdeg_PWORK;                  /* '<S4>/heading (deg)' */

  struct {
    void *LoggedData[3];
  } Scope_PWORK;                       /* '<S1>/Scope' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_j;               /* '<S1>/To Workspace' */

  struct {
    void *LoggedData[2];
  } Scope_PWORK_e;                     /* '<S2>/Scope' */

  int_T Integrator_IWORK;              /* '<S18>/Integrator' */
  uint8_T frame[496];                  /* '<S1>/Data synchronization ' */
  uint8_T lastFrame[496];              /* '<S1>/Data synchronization ' */
  uint8_T buffer[1024];                /* '<S1>/Data synchronization ' */
  uint8_T dataPrev[496];               /* '<S1>/ARDrone data decoding' */
} DW_ARDroneHover_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE[2];         /* '<S18>/Integrator' */
} X_ARDroneHover_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE[2];         /* '<S18>/Integrator' */
} XDot_ARDroneHover_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[2];      /* '<S18>/Integrator' */
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
  int32_T UDPReceive1_localPort;       /* Mask Parameter: UDPReceive1_localPort
                                        * Referenced by: '<S1>/UDP Receive1'
                                        */
  int32_T UDPSend_remotePort;          /* Mask Parameter: UDPSend_remotePort
                                        * Referenced by: '<S7>/UDP Send'
                                        */
  int32_T UDPSend_remotePort_a;        /* Mask Parameter: UDPSend_remotePort_a
                                        * Referenced by: '<S10>/UDP Send'
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
  real_T Constant1_Value[2];           /* Expression: [0 0]
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real_T UnitDelaytoavoidalgebraicloop_InitialCondition;/* Expression: 0
                                                         * Referenced by: '<S1>/Unit Delay to avoid algebraic loop'
                                                         */
  real_T deg2rad_Gain;                 /* Expression: pi/180
                                        * Referenced by: '<Root>/deg 2 rad'
                                        */
  real_T deg2rad1_Gain;                /* Expression: 180/pi
                                        * Referenced by: '<S4>/deg 2 rad1'
                                        */
  real_T Heightrefm_Value;             /* Expression: 0.75
                                        * Referenced by: '<Root>/Height ref (m)'
                                        */
  real_T proportionalcontrolgain_Gain; /* Expression: 1
                                        * Referenced by: '<S13>/proportional control gain'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 1.5
                                        * Referenced by: '<S1>/Saturation 4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -1.5
                                        * Referenced by: '<S1>/Saturation 4'
                                        */
  real_T InertialXrefm_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/Inertial X ref (m)'
                                        */
  real_T InertialYrefm_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/Inertial Y ref (m)'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S15>/Gain3'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.4
                                        * Referenced by: '<S14>/Gain1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S1>/Saturation 1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S1>/Saturation 1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1*1/2
                                        * Referenced by: '<S15>/Gain2'
                                        */
  real_T Gain_Gain;                    /* Expression: -0.5*1/2
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S1>/Saturation 2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S1>/Saturation 2'
                                        */
  real_T Headingrefrad_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/Heading ref (rad)'
                                        */
  real_T proportionalcontrolgainyaw_Gain;/* Expression: 1.5
                                          * Referenced by: '<S12>/proportional control gain - yaw'
                                          */
  real_T Saturation3_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S1>/Saturation 3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S1>/Saturation 3'
                                        */
  real_T SimulationPace_P1;            /* Expression: SimulationPace
                                        * Referenced by: '<Root>/Simulation Pace'
                                        */
  real_T SimulationPace_P2;            /* Expression: SleepMode
                                        * Referenced by: '<Root>/Simulation Pace'
                                        */
  real_T SimulationPace_P3;            /* Expression: OutputPaceError
                                        * Referenced by: '<Root>/Simulation Pace'
                                        */
  real_T SimulationPace_P4;            /* Expression: SampleTime
                                        * Referenced by: '<Root>/Simulation Pace'
                                        */
  uint8_T ManualSwitch2_CurrentSetting;
                             /* Computed Parameter: ManualSwitch2_CurrentSetting
                              * Referenced by: '<Root>/Manual Switch2'
                              */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<Root>/Manual Switch1'
                              */
  uint8_T KillSwitch_CurrentSetting;
                                /* Computed Parameter: KillSwitch_CurrentSetting
                                 * Referenced by: '<Root>/Kill-Switch'
                                 */
  uint8_T Constant_Value[2];           /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S10>/Constant'
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
    boolean_T firstInitCondFlag;
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
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
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

/* Model entry point functions */
extern void ARDroneHover_initialize(void);
extern void ARDroneHover_output(void);
extern void ARDroneHover_update(void);
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
 * '<S2>'   : 'ARDroneHover/Baseline Controller'
 * '<S3>'   : 'ARDroneHover/State estimation Important:This block provides an  inaccurate extimation of position  based on  velocity information. '
 * '<S4>'   : 'ARDroneHover/Visualization of Drone states'
 * '<S5>'   : 'ARDroneHover/ARDrone Wi-Fi  Block/ARDrone data decoding'
 * '<S6>'   : 'ARDroneHover/ARDrone Wi-Fi  Block/Data synchronization '
 * '<S7>'   : 'ARDroneHover/ARDrone Wi-Fi  Block/Subsystem1'
 * '<S8>'   : 'ARDroneHover/ARDrone Wi-Fi  Block/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. '
 * '<S9>'   : 'ARDroneHover/ARDrone Wi-Fi  Block/Subsystem1/Drone state request'
 * '<S10>'  : 'ARDroneHover/ARDrone Wi-Fi  Block/Subsystem1/send byte to  state udp port  '
 * '<S11>'  : 'ARDroneHover/Baseline Controller/Forward velocity controller '
 * '<S12>'  : 'ARDroneHover/Baseline Controller/Heading controller'
 * '<S13>'  : 'ARDroneHover/Baseline Controller/Height controller '
 * '<S14>'  : 'ARDroneHover/Baseline Controller/Lateral velocity controller'
 * '<S15>'  : 'ARDroneHover/Baseline Controller/Position controller'
 * '<S16>'  : 'ARDroneHover/Baseline Controller/Heading controller/normalize angle  between -pi and pi radians'
 * '<S17>'  : 'ARDroneHover/Baseline Controller/Position controller/Coordinate trnasformation  from inertial frame to body frame '
 * '<S18>'  : 'ARDroneHover/State estimation Important:This block provides an  inaccurate extimation of position  based on  velocity information. /Position estimation'
 * '<S19>'  : 'ARDroneHover/State estimation Important:This block provides an  inaccurate extimation of position  based on  velocity information. /Position estimation/Velocity from vehicle body frame  to inertial NED  frame'
 */
#endif                                 /* RTW_HEADER_ARDroneHover_h_ */
