/*
 * q_qube2_bal_rl_hw.h
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

#ifndef RTW_HEADER_q_qube2_bal_rl_hw_h_
#define RTW_HEADER_q_qube2_bal_rl_hw_h_
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef q_qube2_bal_rl_hw_COMMON_INCLUDES_
#define q_qube2_bal_rl_hw_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#endif                                 /* q_qube2_bal_rl_hw_COMMON_INCLUDES_ */

#include "q_qube2_bal_rl_hw_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define q_qube2_bal_rl_hw_rtModel      RT_MODEL_q_qube2_bal_rl_hw_T

/* Block signals (default storage) */
typedef struct {
  real_T Bias;                         /* '<S10>/Bias' */
  real_T Gain;                         /* '<S4>/Gain' */
  real_T Armcountstorad;               /* '<S9>/Arm: counts to rad' */
  real_T Gain_i;                       /* '<S3>/Gain' */
  real_T Sum3;                         /* '<S6>/Sum3' */
  real_T theta_dot;                    /* '<S5>/theta_dot' */
  real_T alpha_dot;                    /* '<S5>/alpha_dot' */
  real_T u0V;                          /* '<Root>/+//-10V' */
  real_T Sum;                          /* '<S6>/Sum' */
  real32_T Scaling;                    /* '<S1>/Scaling' */
} B_q_qube2_bal_rl_hw_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_FilterFrequency[2];/* '<Root>/HIL Initialize' */
  real_T TimeStampA;                   /* '<S5>/theta_dot' */
  real_T LastUAtTimeA;                 /* '<S5>/theta_dot' */
  real_T TimeStampB;                   /* '<S5>/theta_dot' */
  real_T LastUAtTimeB;                 /* '<S5>/theta_dot' */
  real_T TimeStampA_k;                 /* '<S5>/alpha_dot' */
  real_T LastUAtTimeA_f;               /* '<S5>/alpha_dot' */
  real_T TimeStampB_f;                 /* '<S5>/alpha_dot' */
  real_T LastUAtTimeB_o;               /* '<S5>/alpha_dot' */
  t_card HILInitialize_Card;           /* '<Root>/HIL Initialize' */
  t_task HILReadEncoderTimebase_Task;  /* '<S5>/HIL Read Encoder Timebase' */
  struct {
    void *LoggedData;
  } InvertedPendulumdeg_PWORK;         /* '<Root>/Inverted Pendulum (deg)' */

  struct {
    void *LoggedData;
  } RotaryArmdeg_PWORK;                /* '<Root>/Rotary Arm (deg)' */

  struct {
    void *LoggedData;
  } VmV_PWORK;                         /* '<Root>/Vm (V)' */

  void *HILWriteAnalog_PWORK;          /* '<S5>/HIL Write Analog' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S6>/Scope' */

  int32_T HILInitialize_ClockModes;    /* '<Root>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[2];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[2];/* '<Root>/HIL Initialize' */
  int32_T HILReadEncoderTimebase_Buffer[2];/* '<S5>/HIL Read Encoder Timebase' */
  int8_T Agent_SubsysRanBC;            /* '<Root>/Agent' */
  boolean_T network_not_empty;         /* '<S7>/MLFB' */
  c_coder_ctarget_DeepLearningN_T network;/* '<S7>/MLFB' */
} DW_q_qube2_bal_rl_hw_T;

/* Backward compatible GRT Identifiers */
#define rtB                            q_qube2_bal_rl_hw_B
#define BlockIO                        B_q_qube2_bal_rl_hw_T
#define rtP                            q_qube2_bal_rl_hw_P
#define Parameters                     P_q_qube2_bal_rl_hw_T
#define rtDWork                        q_qube2_bal_rl_hw_DW
#define D_Work                         DW_q_qube2_bal_rl_hw_T

/* Parameters (default storage) */
struct P_q_qube2_bal_rl_hw_T_ {
  real_T alpha_bal_threshold;          /* Variable: alpha_bal_threshold
                                        * Referenced by: '<S2>/Constant'
                                        */
  uint32_T HILWriteAnalog_channels;   /* Mask Parameter: HILWriteAnalog_channels
                                       * Referenced by: '<S5>/HIL Write Analog'
                                       */
  real_T u0V_Value;                    /* Expression: 0
                                        * Referenced by: '<Root>/u=0V'
                                        */
  real_T HILInitialize_OOTerminate;/* Expression: set_other_outputs_at_terminate
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  real_T HILInitialize_OOExit;    /* Expression: set_other_outputs_at_switch_out
                                   * Referenced by: '<Root>/HIL Initialize'
                                   */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;    /* Expression: set_other_outputs_at_switch_in
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  real_T HILInitialize_AOFinal;        /* Expression: final_analog_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AOHigh;         /* Expression: analog_output_maximums
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AOLow;          /* Expression: analog_output_minimums
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AOInitial;      /* Expression: initial_analog_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T Pendulumcountstorad_Gain;     /* Expression: 2*pi/512/4
                                        * Referenced by: '<S9>/Pendulum:  counts to rad'
                                        */
  real_T Constant2_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S10>/Constant2'
                                        */
  real_T Bias_Bias;                    /* Expression: -pi
                                        * Referenced by: '<S10>/Bias'
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Armcountstorad_Gain;          /* Expression: -2*pi/512/4
                                        * Referenced by: '<S9>/Arm: counts to rad'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 180/pi
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Step2_Time;                   /* Expression: 20
                                        * Referenced by: '<S6>/Step2'
                                        */
  real_T Step2_Y0;                     /* Expression: 0
                                        * Referenced by: '<S6>/Step2'
                                        */
  real_T Step2_YFinal;                 /* Expression: 1
                                        * Referenced by: '<S6>/Step2'
                                        */
  real_T SetpointStateXd2_Value;       /* Expression: pi/2
                                        * Referenced by: '<S6>/Setpoint State: Xd2'
                                        */
  real_T Step1_Time;                   /* Expression: 10
                                        * Referenced by: '<S6>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S6>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<S6>/Step1'
                                        */
  real_T SetpointStateXd1_Value;       /* Expression: pi/4
                                        * Referenced by: '<S6>/Setpoint State: Xd1'
                                        */
  real_T u0V_UpperSat;                 /* Expression: 10
                                        * Referenced by: '<Root>/+//-10V'
                                        */
  real_T u0V_LowerSat;                 /* Expression: -10
                                        * Referenced by: '<Root>/+//-10V'
                                        */
  real_T ForveCCW_Gain;                /* Expression: -1
                                        * Referenced by: '<S5>/For +ve CCW'
                                        */
  int32_T HILInitialize_CKChannels;
                                 /* Computed Parameter: HILInitialize_CKChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  int32_T HILInitialize_EIInitial;/* Computed Parameter: HILInitialize_EIInitial
                                   * Referenced by: '<Root>/HIL Initialize'
                                   */
  int32_T HILReadEncoderTimebase_Clock;
                             /* Computed Parameter: HILReadEncoderTimebase_Clock
                              * Referenced by: '<S5>/HIL Read Encoder Timebase'
                              */
  real32_T action_Y0;                  /* Computed Parameter: action_Y0
                                        * Referenced by: '<S1>/action'
                                        */
  real32_T Scaling_Gain;               /* Computed Parameter: Scaling_Gain
                                        * Referenced by: '<S1>/Scaling'
                                        */
  uint32_T HILInitialize_AOChannels;
                                 /* Computed Parameter: HILInitialize_AOChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIChannels[2];
                                 /* Computed Parameter: HILInitialize_EIChannels
                                  * Referenced by: '<Root>/HIL Initialize'
                                  */
  uint32_T HILInitialize_EIQuadrature;
                               /* Computed Parameter: HILInitialize_EIQuadrature
                                * Referenced by: '<Root>/HIL Initialize'
                                */
  uint32_T HILReadEncoderTimebase_Channels[2];
                          /* Computed Parameter: HILReadEncoderTimebase_Channels
                           * Referenced by: '<S5>/HIL Read Encoder Timebase'
                           */
  uint32_T HILReadEncoderTimebase_SamplesI;
                          /* Computed Parameter: HILReadEncoderTimebase_SamplesI
                           * Referenced by: '<S5>/HIL Read Encoder Timebase'
                           */
  boolean_T HILInitialize_Active;    /* Computed Parameter: HILInitialize_Active
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_AOTerminate;
                                /* Computed Parameter: HILInitialize_AOTerminate
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  boolean_T HILInitialize_AOExit;    /* Computed Parameter: HILInitialize_AOExit
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_DOTerminate;
                                /* Computed Parameter: HILInitialize_DOTerminate
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  boolean_T HILInitialize_DOExit;    /* Computed Parameter: HILInitialize_DOExit
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_POTerminate;
                                /* Computed Parameter: HILInitialize_POTerminate
                                 * Referenced by: '<Root>/HIL Initialize'
                                 */
  boolean_T HILInitialize_POExit;    /* Computed Parameter: HILInitialize_POExit
                                      * Referenced by: '<Root>/HIL Initialize'
                                      */
  boolean_T HILInitialize_CKPStart;/* Computed Parameter: HILInitialize_CKPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKPEnter;/* Computed Parameter: HILInitialize_CKPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_CKStart;  /* Computed Parameter: HILInitialize_CKStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_CKEnter;  /* Computed Parameter: HILInitialize_CKEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AIPStart;/* Computed Parameter: HILInitialize_AIPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AIPEnter;/* Computed Parameter: HILInitialize_AIPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPStart;/* Computed Parameter: HILInitialize_AOPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOPEnter;/* Computed Parameter: HILInitialize_AOPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_AOStart;  /* Computed Parameter: HILInitialize_AOStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOEnter;  /* Computed Parameter: HILInitialize_AOEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_AOReset;  /* Computed Parameter: HILInitialize_AOReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOPStart;/* Computed Parameter: HILInitialize_DOPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOPEnter;/* Computed Parameter: HILInitialize_DOPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_DOStart;  /* Computed Parameter: HILInitialize_DOStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOEnter;  /* Computed Parameter: HILInitialize_DOEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_DOReset;  /* Computed Parameter: HILInitialize_DOReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIPStart;/* Computed Parameter: HILInitialize_EIPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIPEnter;/* Computed Parameter: HILInitialize_EIPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_EIStart;  /* Computed Parameter: HILInitialize_EIStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_EIEnter;  /* Computed Parameter: HILInitialize_EIEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POPStart;/* Computed Parameter: HILInitialize_POPStart
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POPEnter;/* Computed Parameter: HILInitialize_POPEnter
                                    * Referenced by: '<Root>/HIL Initialize'
                                    */
  boolean_T HILInitialize_POStart;  /* Computed Parameter: HILInitialize_POStart
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POEnter;  /* Computed Parameter: HILInitialize_POEnter
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_POReset;  /* Computed Parameter: HILInitialize_POReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILInitialize_OOReset;  /* Computed Parameter: HILInitialize_OOReset
                                     * Referenced by: '<Root>/HIL Initialize'
                                     */
  boolean_T HILReadEncoderTimebase_Active;
                            /* Computed Parameter: HILReadEncoderTimebase_Active
                             * Referenced by: '<S5>/HIL Read Encoder Timebase'
                             */
  boolean_T HILWriteAnalog_Active;  /* Computed Parameter: HILWriteAnalog_Active
                                     * Referenced by: '<S5>/HIL Write Analog'
                                     */
  uint8_T HILReadEncoderTimebase_Overflow;
                          /* Computed Parameter: HILReadEncoderTimebase_Overflow
                           * Referenced by: '<S5>/HIL Read Encoder Timebase'
                           */
};

/* Real-time Model Data Structure */
struct tag_RTM_q_qube2_bal_rl_hw_T {
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
extern P_q_qube2_bal_rl_hw_T q_qube2_bal_rl_hw_P;

/* Block signals (default storage) */
extern B_q_qube2_bal_rl_hw_T q_qube2_bal_rl_hw_B;

/* Block states (default storage) */
extern DW_q_qube2_bal_rl_hw_T q_qube2_bal_rl_hw_DW;

/* Model entry point functions */
extern void q_qube2_bal_rl_hw_initialize(void);
extern void q_qube2_bal_rl_hw_output(void);
extern void q_qube2_bal_rl_hw_update(void);
extern void q_qube2_bal_rl_hw_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern q_qube2_bal_rl_hw_rtModel *q_qube2_bal_rl_hw(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_q_qube2_bal_rl_hw_T *const q_qube2_bal_rl_hw_M;

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
 * '<Root>' : 'q_qube2_bal_rl_hw'
 * '<S1>'   : 'q_qube2_bal_rl_hw/Agent'
 * '<S2>'   : 'q_qube2_bal_rl_hw/Compare To Constant'
 * '<S3>'   : 'q_qube2_bal_rl_hw/Radians to Degrees'
 * '<S4>'   : 'q_qube2_bal_rl_hw/Radians to Degrees1'
 * '<S5>'   : 'q_qube2_bal_rl_hw/Rotary Pendulum Interface'
 * '<S6>'   : 'q_qube2_bal_rl_hw/observations'
 * '<S7>'   : 'q_qube2_bal_rl_hw/Agent/Predict'
 * '<S8>'   : 'q_qube2_bal_rl_hw/Agent/Predict/MLFB'
 * '<S9>'   : 'q_qube2_bal_rl_hw/Rotary Pendulum Interface/Counts to Angles'
 * '<S10>'  : 'q_qube2_bal_rl_hw/Rotary Pendulum Interface/Full Angle to Inverted'
 */
#endif                                 /* RTW_HEADER_q_qube2_bal_rl_hw_h_ */
