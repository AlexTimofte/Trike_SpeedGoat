/*
 * SpeedgoatCANOpen2Buses1ms.h
 *
 * Code generation for model "SpeedgoatCANOpen2Buses1ms".
 *
 * Model version              : 1.949
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Oct 22 11:25:38 2022
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SpeedgoatCANOpen2Buses1ms_h_
#define RTW_HEADER_SpeedgoatCANOpen2Buses1ms_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef SpeedgoatCANOpen2Buses1ms_COMMON_INCLUDES_
# define SpeedgoatCANOpen2Buses1ms_COMMON_INCLUDES_
#define __TMWTYPES__                                             /* Inferred types compatibility mode */
#include <stdio.h>
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif                                 /* SpeedgoatCANOpen2Buses1ms_COMMON_INCLUDES_ */

#include "SpeedgoatCANOpen2Buses1ms_types.h"

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
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
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
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
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
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
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
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
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
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
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
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
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
#define rtModel_SpeedgoatCANOpen2Buses1ms RT_MODEL_SpeedgoatCANOpen2Buses1ms_T

/* Definition for use in the target main file */
#define SpeedgoatCANOpen2Buses1ms_rtModel RT_MODEL_SpeedgoatCANOpen2Buses1ms_T

/* user code (top of header file) */
#include "CANOpenSlave.h"
#include "CANOpenSlaveAPT.h"

/* Block signals for system '<S43>/Derivative' */
typedef struct {
  real32_T ud;                         /* '<S43>/Derivative' */
  real32_T yf;                         /* '<S43>/Derivative' */
} B_Derivative_SpeedgoatCANOpen_T;

/* Block states (default storage) for system '<S43>/Derivative' */
typedef struct {
  real32_T yf_k1;                      /* '<S43>/Derivative' */
} DW_Derivative_SpeedgoatCANOpe_T;

/* Block signals for system '<S44>/Comp_and_Timer' */
typedef struct {
  real_T e_out;                        /* '<S44>/Comp_and_Timer' */
  real_T timer;                        /* '<S44>/Comp_and_Timer' */
} B_Comp_and_Timer_SpeedgoatCAN_T;

/* Block states (default storage) for system '<S44>/Comp_and_Timer' */
typedef struct {
  int32_T sfEvent;                     /* '<S44>/Comp_and_Timer' */
  uint8_T is_active_c18_SpeedgoatCANOpen2;/* '<S44>/Comp_and_Timer' */
  uint8_T is_c18_SpeedgoatCANOpen2Buses1m;/* '<S44>/Comp_and_Timer' */
  uint8_T temporalCounter_i1;          /* '<S44>/Comp_and_Timer' */
} DW_Comp_and_Timer_SpeedgoatCA_T;

/* Block signals (default storage) */
typedef struct {
  int64_T TorqueConstant;              /* '<S32>/Torque Constant' */
  int64_T DunkC_ActualVelocity_Inv;    /* '<S5>/Gain1' */
  int64_T DunkC_ActualCurrent_Inv;     /* '<S5>/Gain' */
  real_T CANRead_o5;                   /* '<S19>/CAN Read' */
  real_T CANRead_o5_h;                 /* '<S21>/CAN Read' */
  real_T SineWave;                     /* '<S16>/Sine Wave' */
  real_T TractionReq;
  real_T TmpRTBAtConstantOutport1;     /* '<S31>/Constant' */
  real_T Switch4;                      /* '<S31>/Switch4' */
  real_T Retract_current;              /* '<S29>/DecisionBrakeCtrl' */
  real_T Switch3;                      /* '<S31>/Switch3' */
  real_T LeftTiltMotor_SpeedReqrpm1;
  real_T Product;                      /* '<S31>/Product' */
  real_T RightTiltMotor_SpeedReqrpm;
  real_T Switch2;                      /* '<S31>/Switch2' */
  real_T SteeringMotor_SpeedReq;
  real_T Switch;                       /* '<S31>/Switch' */
  real_T TmpRTBAtSum2Inport1;          /* '<S36>/Gain1' */
  real_T Sum2;                         /* '<S36>/Sum2' */
  real_T Saturation2;                  /* '<S36>/Saturation2' */
  real_T BrakesMotor_CurrentReq;       /* '<S36>/Amp2mAmp' */
  real_T BrakesMotor_CurrentReq_h;     /* '<S29>/Subsystem' */
  real_T CastToSingle3;                /* '<S33>/Cast To Single3' */
  real_T Speed_SI;                     /* '<S33>/Gain2' */
  real_T VehSpeed_SI;                  /* '<S33>/WheelRadius' */
  real_T CastToSingle2;                /* '<S33>/Cast To Single2' */
  real_T VehSpeed_SIms1;
  real_T TmpRTBAtSumInport2;           /* '<S36>/offset' */
  real_T Sum;                          /* '<S36>/Sum' */
  real_T br_percent2;                  /* '<S36>/GetInPercent' */
  real_T Gain2;                        /* '<S36>/Gain2' */
  real_T Saturation;                   /* '<S36>/Saturation' */
  real_T Gain1;                        /* '<S36>/Gain1' */
  real_T Memory1;                      /* '<S30>/Memory1' */
  real_T DirectionFb;                  /* '<S30>/Cast To Single1' */
  real_T DirectionReq;                 /* '<S30>/Cast To Single' */
  real_T DirectionReq_o;               /* '<S30>/Cast To Single' */
  real_T DirectionFb_d;                /* '<S30>/Cast To Single1' */
  real_T CastToSingle2_i;              /* '<S30>/Cast To Single2' */
  real_T TmpRTBAtPControllerInport3;   /* '<S30>/Cast To Single2' */
  real_T TmpRTBAtSumInport2_m;         /* '<S30>/Offset to 0 pos => pos = [-180 180]deg' */
  real_T Sum_p;                        /* '<S30>/Sum' */
  real_T DirectionFb_l;                /* '<S30>/inc2deg' */
  real_T TmpRTBAtServoTiltingInport1;  /* '<S32>/Cast To Single' */
  real_T Abs;                          /* '<S32>/Abs' */
  real_T CastToSingle1;                /* '<S32>/Cast To Single1' */
  real_T TiltingAngle_stepreqfdeg;     /* '<S32>/Zero-Order Hold1' */
  real_T Fb_Angledeg;
  real_T ZeroOrderHold2;               /* '<S32>/Zero-Order Hold2' */
  real_T e_in;                         /* '<S43>/Sum1' */
  real_T Hyst;                         /* '<S43>/Constant3' */
  real_T Product1;                     /* '<S43>/Product1' */
  real_T Proportional;                 /* '<S43>/Proportional  Gain' */
  real_T IntegralGain;                 /* '<S43>/Integral Gain' */
  real_T Delay;                        /* '<S43>/Delay' */
  real_T ZeroOrderHold;                /* '<S43>/Zero-Order Hold' */
  real_T Sum2_d;                       /* '<S43>/Sum2' */
  real_T Integral;                     /* '<S43>/Discrete-Time Integrator' */
  real_T Saturation_c;                 /* '<S43>/Saturation' */
  real_T TmpRTBAtDerivativeInport2;    /* '<S43>/Constant' */
  real_T TmpRTBAtDerivativeInport3;    /* '<S43>/Constant1' */
  real_T DataTypeConversion1;          /* '<S43>/Data Type Conversion1' */
  real_T Sum4;                         /* '<S43>/Sum4' */
  real_T Product2;                     /* '<S43>/Product2' */
  real_T tometer;                      /* '<S43>/tometer' */
  real_T DispReqInvm;                  /* '<S32>/Gain4' */
  real_T Memory1_l;                    /* '<S41>/Memory1' */
  real_T Gain5;                        /* '<S32>/Gain5' */
  real_T e_in_p;                       /* '<S44>/Sum1' */
  real_T Hyst_c;                       /* '<S44>/degree2m' */
  real_T Product1_l;                   /* '<S44>/Product1' */
  real_T Proportional_l;               /* '<S44>/Proportional  Gain' */
  real_T IntegralGain_h;               /* '<S44>/Integral Gain' */
  real_T Delay_e;                      /* '<S44>/Delay' */
  real_T ZeroOrderHold_m;              /* '<S44>/Zero-Order Hold' */
  real_T Sum2_d4;                      /* '<S44>/Sum2' */
  real_T Integral_a;                   /* '<S44>/Discrete-Time Integrator' */
  real_T Saturation_b;                 /* '<S44>/Saturation' */
  real_T TmpRTBAtDerivativeInport2_a;  /* '<S44>/Constant' */
  real_T TmpRTBAtDerivativeInport3_f;  /* '<S44>/Constant1' */
  real_T DataTypeConversion1_f;        /* '<S44>/Data Type Conversion1' */
  real_T Sum4_d;                       /* '<S44>/Sum4' */
  real_T Product2_n;                   /* '<S44>/Product2' */
  real_T Saturation2_k;                /* '<S44>/Saturation2' */
  real_T c1;                           /* '<S44>/c1' */
  real_T LeftTiltMotor_SpeedReqrpm;    /* '<S32>/Gain1' */
  real_T Gain2_m;                      /* '<S32>/Gain2' */
  real_T Memory1_j;                    /* '<S42>/Memory1' */
  real_T Gain3;                        /* '<S32>/Gain3' */
  real_T e_in_i;                       /* '<S46>/Sum1' */
  real_T Hyst_cx;                      /* '<S46>/degree2m' */
  real_T Product1_a;                   /* '<S46>/Product1' */
  real_T Proportional_j;               /* '<S46>/Proportional  Gain' */
  real_T IntegralGain_g;               /* '<S46>/Integral Gain' */
  real_T Delay_d;                      /* '<S46>/Delay' */
  real_T ZeroOrderHold_a;              /* '<S46>/Zero-Order Hold' */
  real_T Sum2_j;                       /* '<S46>/Sum2' */
  real_T Integral_p;                   /* '<S46>/Discrete-Time Integrator' */
  real_T Saturation_m;                 /* '<S46>/Saturation' */
  real_T TmpRTBAtDerivativeInport2_av; /* '<S46>/Constant' */
  real_T TmpRTBAtDerivativeInport3_fo; /* '<S46>/Constant1' */
  real_T DataTypeConversion1_b;        /* '<S46>/Data Type Conversion1' */
  real_T Sum4_dx;                      /* '<S46>/Sum4' */
  real_T Product2_e;                   /* '<S46>/Product2' */
  real_T Saturation2_g;                /* '<S46>/Saturation2' */
  real_T c1_f;                         /* '<S46>/c1' */
  real_T RightTiltMotor_SpeedReqrpm_m; /* '<S32>/Gain' */
  real_T CastToSingle;                 /* '<S32>/Cast To Single' */
  real_T TmpRTBAtSumInport2_mb;        /* '<S41>/Offset for 0 deg' */
  real_T DispLeftOffsetVolt;           /* '<S41>/Sum' */
  real_T DispLeftm;                    /* '<S41>/Volt2meter' */
  real_T DispLeftm_k;                  /* '<S41>/Volt2meter' */
  real_T DiscreteFilter;               /* '<S41>/Discrete Filter' */
  real_T TmpRTBAtSumInport2_mbd;       /* '<S42>/Offset for 0 deg' */
  real_T DispRightOffsetVolt;          /* '<S42>/Sum' */
  real_T DispRightm;                   /* '<S42>/Volt2meter' */
  real_T DispRightm_e;                 /* '<S42>/Volt2meter' */
  real_T DiscreteFilter_e;             /* '<S42>/Discrete Filter' */
  real_T Sum_c;                        /* '<S43>/Sum' */
  real_T AntiWindup;                   /* '<S43>/AntiWindup' */
  real_T Hyst_g;                       /* '<S43>/Constant3' */
  real_T Hyst_n;                       /* '<S44>/degree2m' */
  real_T Sum_j;                        /* '<S44>/Sum' */
  real_T AntiWindup_c;                 /* '<S44>/AntiWindup' */
  real_T Hyst_i;                       /* '<S46>/degree2m' */
  real_T Sum_o;                        /* '<S46>/Sum' */
  real_T AntiWindup_p;                 /* '<S46>/AntiWindup' */
  real_T VehSpeed_Kmh;                 /* '<S33>/m//s2Km//h' */
  real_T CastToSingle1_e;              /* '<S33>/Cast To Single1' */
  real_T Gain1_e;                      /* '<S33>/Gain1' */
  real_T TractionReq_a;                /* '<S33>/Abs' */
  real_T Button;                       /* '<S27>/ButtonStatus' */
  real_T APT_CtrlWord;                 /* '<S27>/APTControlWord' */
  real_T TiltingAngle;                 /* '<S32>/ServoTilting' */
  real_T e_out;                        /* '<S43>/Comp_and_Timer' */
  real_T timer;                        /* '<S43>/Comp_and_Timer' */
  real_T Fb_Angle_Filtdeg;             /* '<S32>/Moving Average' */
  real_T Sum4_e;                       /* '<S29>/Sum4' */
  real_T SpeedReq;                     /* '<S30>/P Controller' */
  real_T MovingAverage;                /* '<S30>/Moving Average' */
  real_T BrakesMotor_CurrentReq_o;     /* '<S29>/DecisionBrakeCtrl' */
  real_T HB;                           /* '<S24>/HeartBeatgenerator' */
  real_T xAngle;                       /* '<S9>/Conv' */
  real_T yAngle;                       /* '<S9>/Conv' */
  uint32_T CANRead_o2;                 /* '<S19>/CAN Read' */
  uint32_T CCaller_o1;                 /* '<S17>/C Caller' */
  uint32_T CANRead_o2_e;               /* '<S21>/CAN Read' */
  uint32_T CCaller_o1_n;               /* '<S18>/C Caller' */
  uint32_T Encoder_Actual_Position;    /* '<S8>/RPDOs from Encoder' */
  uint32_T Encoder_Stored_Position;    /* '<S8>/RPDOs from Encoder' */
  real32_T CastToSingle3_p;            /* '<S27>/Cast To Single3' */
  real32_T Joystick_LongCmd;
  real32_T TmpRTBAtDunkA_Steering_Init_Spe;/* '<S69>/Constant' */
  real32_T TmpRTBAtDunkC_TiltLeft_Init_Cur;/* '<S70>/Constant' */
  real32_T TmpRTBAtDunkB_TiltRight_Init_Cu;/* '<S71>/Constant' */
  real32_T TmpRTBAtDunkD_Brake_Init_Curren;/* '<S65>/Constant' */
  real32_T Sum_b;                      /* '<S67>/Sum' */
  real32_T Joystick_LongCmd_i;         /* '<S10>/RPDOs from Joystick' */
  real32_T Joystick_LatCmd;            /* '<S10>/RPDOs from Joystick' */
  real32_T Retract_current_m;          /* '<S36>/Retract' */
  real32_T Joystick_LongCmd1;
  real32_T TmpRTBAtSum1Inport1;        /* '<S36>/Delay' */
  real32_T TmpRTBAtSum1Inport2;        /* '<S36>/Data Type Conversion1' */
  real32_T Sum1;                       /* '<S36>/Sum1' */
  real32_T TmpRTBAtRetractInport1;     /* '<S36>/Sum1' */
  real32_T DataTypeConversion1_c;      /* '<S36>/Data Type Conversion1' */
  real32_T TmpRTBAtRetractInport2;     /* '<S36>/Data Type Conversion1' */
  real32_T Delay_o;                    /* '<S36>/Delay' */
  real32_T TmpRTBAtDelayInport1;       /* '<S36>/Data Type Conversion1' */
  real32_T CastToSingle_e;             /* '<S26>/Cast To Single' */
  real32_T dem1;                       /* '<S30>/dem1' */
  real32_T RoboticsConvention1;        /* '<S30>/Robotics Convention1' */
  real32_T SteeringAnglerad;           /* '<S30>/degree2rad' */
  real32_T n;                          /* '<S32>/n' */
  real32_T Constant;                   /* '<S65>/Constant' */
  real32_T Constant_j;                 /* '<S69>/Constant' */
  real32_T Constant_m;                 /* '<S70>/Constant' */
  real32_T Constant_e;                 /* '<S71>/Constant' */
  real32_T ClearError;                 /* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T DeviceMode;                 /* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T BrakeCtrl;                  /* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T PowerEnable;                /* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T InitStatus;                 /* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T ClearError_h;               /* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T DeviceMode_f;               /* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T BrakeCtrl_m;                /* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T PowerEnable_m;              /* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T InitStatus_k;               /* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T ClearError_n;               /* '<S69>/DunkA_Steering_Init_SpeedMode' */
  real32_T DeviceMode_o;               /* '<S69>/DunkA_Steering_Init_SpeedMode' */
  real32_T BrakeCtrl_b;                /* '<S69>/DunkA_Steering_Init_SpeedMode' */
  real32_T PowerEnable_a;              /* '<S69>/DunkA_Steering_Init_SpeedMode' */
  real32_T InitStatus_f;               /* '<S69>/DunkA_Steering_Init_SpeedMode' */
  real32_T Enable;                     /* '<S27>/EnableCtrl' */
  real32_T ClearError_k;               /* '<S65>/DunkD_Brake_Init_CurrentMode' */
  real32_T DeviceMode_b;               /* '<S65>/DunkD_Brake_Init_CurrentMode' */
  real32_T BrakeCtrl_n;                /* '<S65>/DunkD_Brake_Init_CurrentMode' */
  real32_T PowerEnable_au;             /* '<S65>/DunkD_Brake_Init_CurrentMode' */
  real32_T BrakesMotor_CurrentInit;    /* '<S65>/DunkD_Brake_Init_CurrentMode' */
  real32_T InitStatus_a;               /* '<S65>/DunkD_Brake_Init_CurrentMode' */
  real32_T Br_CurrentReq;              /* '<S36>/Retract' */
  int32_T DispLeftVolt;                /* '<S41>/LSB2Volt' */
  int32_T DispRightVolt;               /* '<S42>/LSB2Volt' */
  int32_T BrakesMotor_CurrentInitmA;   /* '<S29>/Gain5' */
  int32_T DunkD_ActualCurrent;         /* '<S4>/RPDOs from Dunker #1' */
  int32_T DunkD_ActualVelocity;        /* '<S4>/RPDOs from Dunker #1' */
  int32_T DunkD_TPDO_DesiredCurrent;   /* '<S23>/Data Type Conversion36' */
  int32_T DunkD_TPDO_DesiredCurrent_k;
  int32_T DunkC_ActualCurrent;         /* '<S5>/RPDOs from Dunker #1' */
  int32_T DunkC_ActualVelocity;        /* '<S5>/RPDOs from Dunker #1' */
  int32_T DunkC_TPDO_DesiredCurrent;   /* '<S23>/Data Type Conversion31' */
  int32_T TiltLeft_VelocityReq;        /* '<S5>/Signal Copy' */
  int32_T DunkC_TPDO_DesiredCurrent_l;
  int32_T DunkB_ActualCurrent;         /* '<S6>/RPDOs from Dunker #1' */
  int32_T DunkB_ActualVelocity;        /* '<S6>/RPDOs from Dunker #1' */
  int32_T DunkB_TPDO_DesiredCurrent;   /* '<S23>/Data Type Conversion26' */
  int32_T TiltRight_CurrentReq;        /* '<S6>/Signal Copy' */
  int32_T DunkB_TPDO_DesiredCurrent_p;
  int32_T DunkA_ActualCurrent;         /* '<S7>/RPDOs from Dunker #1' */
  int32_T DunkA_ActualVelocity;        /* '<S7>/RPDOs from Dunker #1' */
  int32_T DunkA_TPDO_DesiredCurrent;   /* '<S23>/Data Type Conversion8' */
  int32_T DunkA_TPDO_DesiredCurrent_m;
  uint16_T APT_BusVoltage;             /* '<S2>/RPDOs from APT' */
  uint16_T DataTypeConversion;         /* '<S36>/Data Type Conversion' */
  uint16_T Saturation1;                /* '<S36>/Saturation1' */
  int16_T AN_01;                       /* '<S16>/Cast To Single' */
  int16_T AN_02;                       /* '<S16>/Cast To Single1' */
  int16_T AN_03;                       /* '<S16>/Cast To Single2' */
  int16_T AN_04;                       /* '<S16>/Cast To Single3' */
  int16_T Channel_AN1;                 /* '<S1>/RPDOs from AN2CAN ' */
  int16_T Channel_AN2;                 /* '<S1>/RPDOs from AN2CAN ' */
  int16_T Channel_AN3;                 /* '<S1>/RPDOs from AN2CAN ' */
  int16_T Channel_AN4;                 /* '<S1>/RPDOs from AN2CAN ' */
  int16_T APT_PhaseCurrent;            /* '<S2>/RPDOs from APT' */
  int16_T APT_Speed;                   /* '<S2>/RPDOs from APT' */
  int16_T CurrentInit;                 /* '<S65>/Cast To Single4' */
  uint8_T CANRead_o3;                  /* '<S19>/CAN Read' */
  uint8_T CANRead_o4;                  /* '<S19>/CAN Read' */
  uint8_T CANRead_o6[8];               /* '<S19>/CAN Read' */
  uint8_T CCaller_o2;                  /* '<S17>/C Caller' */
  uint8_T CCaller_o3[8];               /* '<S17>/C Caller' */
  uint8_T queue_in;                    /* '<S17>/C Caller' */
  uint8_T queue_out;                   /* '<S17>/C Caller' */
  uint8_T CANRead_o3_m;                /* '<S21>/CAN Read' */
  uint8_T CANRead_o4_a;                /* '<S21>/CAN Read' */
  uint8_T CANRead_o6_h[8];             /* '<S21>/CAN Read' */
  uint8_T CCaller_o2_n;                /* '<S18>/C Caller' */
  uint8_T CCaller_o3_n[8];             /* '<S18>/C Caller' */
  uint8_T APT_StatusWord;              /* '<S2>/RPDOs from APT' */
  uint8_T APT_ErrStatus;               /* '<S2>/RPDOs from APT' */
  uint8_T APT_Direction;               /* '<S2>/RPDOs from APT' */
  uint8_T Joystick_ButtonsStatus;
  uint8_T APT_TPDO_ControlWord;        /* '<S24>/Data Type Conversion' */
  uint8_T APT_TPDO_PedalPosition;      /* '<S24>/Data Type Conversion1' */
  uint8_T APT_TPDO_Heartbeat;          /* '<S24>/Data Type Conversion2' */
  uint8_T Enable_c;                    /* '<S3>/Constant' */
  uint8_T RateTransition;              /* '<S31>/Rate Transition' */
  uint8_T DunkD_TPDO_BrakeCtrl;        /* '<S23>/Data Type Conversion33' */
  uint8_T ClearError_m;                /* '<S65>/Cast To Single1' */
  uint8_T DunkD_TPDO_ClearError;       /* '<S23>/Data Type Conversion32' */
  uint8_T DunkD_TPDO_ClearError_n;
  uint8_T DeviceMode_g;                /* '<S65>/Cast To Single' */
  uint8_T DunkD_TPDO_DeviceMode;       /* '<S23>/Data Type Conversion34' */
  uint8_T DunkD_TPDO_DeviceMode_l;
  uint8_T PowerEnable_p;               /* '<S65>/Cast To Single3' */
  uint8_T DunkD_TPDO_PowerEnable;      /* '<S23>/Data Type Conversion35' */
  uint8_T DunkD_TPDO_PowerEnable_c;
  uint8_T DunkD_TPDO_BrakeCtrl_f;
  uint8_T ClearError_j;                /* '<S70>/Cast To Single1' */
  uint8_T DunkC_TPDO_ClearError;       /* '<S23>/Data Type Conversion27' */
  uint8_T DunkC_TPDO_ClearError_b;
  uint8_T DeviceMode_h;                /* '<S70>/Cast To Single' */
  uint8_T DunkC_TPDO_DeviceMode;       /* '<S23>/Data Type Conversion29' */
  uint8_T DunkC_TPDO_DeviceMode_p;
  uint8_T PowerEnable_ar;              /* '<S70>/Cast To Single3' */
  uint8_T DunkC_TPDO_PowerEnable;      /* '<S23>/Data Type Conversion30' */
  uint8_T DunkC_TPDO_PowerEnable_m;
  uint8_T BrakeCtrl_bj;                /* '<S70>/Cast To Single2' */
  uint8_T DunkC_TPDO_BrakeCtrl;        /* '<S23>/Data Type Conversion28' */
  uint8_T DunkC_TPDO_BrakeCtrl_o;
  uint8_T ClearError_jv;               /* '<S71>/Cast To Single1' */
  uint8_T DunkB_TPDO_ClearError;       /* '<S23>/Data Type Conversion22' */
  uint8_T DunkB_TPDO_ClearError_i;
  uint8_T DeviceMode_d;                /* '<S71>/Cast To Single' */
  uint8_T DunkB_TPDO_DeviceMode;       /* '<S23>/Data Type Conversion24' */
  uint8_T DunkB_TPDO_DeviceMode_j;
  uint8_T PowerEnable_i;               /* '<S71>/Cast To Single3' */
  uint8_T DunkB_TPDO_PowerEnable;      /* '<S23>/Data Type Conversion25' */
  uint8_T DunkB_TPDO_PowerEnable_f;
  uint8_T BrakeCtrl_k;                 /* '<S71>/Cast To Single2' */
  uint8_T DunkB_TPDO_BrakeCtrl;        /* '<S23>/Data Type Conversion23' */
  uint8_T DunkB_TPDO_BrakeCtrl_e;
  uint8_T ClearError_mc;               /* '<S69>/Cast To Single1' */
  uint8_T DunkA_TPDO_ClearError;       /* '<S23>/Data Type Conversion3' */
  uint8_T DunkA_TPDO_ClearError_j;
  uint8_T DeviceMode_e;                /* '<S69>/Cast To Single' */
  uint8_T DunkA_TPDO_DeviceMode;       /* '<S23>/Data Type Conversion6' */
  uint8_T DunkA_TPDO_DeviceMode_l;
  uint8_T PowerEnable_i4;              /* '<S69>/Cast To Single3' */
  uint8_T DunkA_TPDO_PowerEnable;      /* '<S23>/Data Type Conversion7' */
  uint8_T DunkA_TPDO_PowerEnable_h;
  uint8_T BrakeCtrl_mu;                /* '<S69>/Cast To Single2' */
  uint8_T DunkA_TPDO_BrakeCtrl;        /* '<S23>/Data Type Conversion4' */
  uint8_T DunkA_TPDO_BrakeCtrl_m;
  uint8_T xS;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T xH;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T xL;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T yS;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T yH;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T yL;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T Enable_l;                    /* '<S9>/Constant' */
  uint8_T Joystick_ButtonsStatus_e;    /* '<S10>/RPDOs from Joystick' */
  uint8_T BrakeCtrl_k2;                /* '<S65>/Cast To Single2' */
  uint8_T BrakeCtrl_o;
  uint8_T Joystick_ButtonsStatus_i;
  uint8_T BrakeCtrl_b4;                /* '<S29>/DecisionBrakeCtrl' */
  uint8_T TmpRTBAtCANWriteInport2;     /* '<S22>/Constant' */
  uint8_T TmpRTBAtCANWriteInport2_j;   /* '<S20>/Constant' */
  int8_T APT_MotorTemp;                /* '<S2>/RPDOs from APT' */
  int8_T APT_Temp;                     /* '<S2>/RPDOs from APT' */
  boolean_T DataPresent;               /* '<S19>/CAN Read' */
  boolean_T CANRead_o1;                /* '<S21>/CAN Read' */
  boolean_T Compare;                   /* '<S73>/Compare' */
  boolean_T ZeroOrderHold3;            /* '<S32>/Zero-Order Hold3' */
  B_Derivative_SpeedgoatCANOpen_T sf_Derivative_b;/* '<S46>/Derivative' */
  B_Comp_and_Timer_SpeedgoatCAN_T sf_Comp_and_Timer_b;/* '<S46>/Comp_and_Timer' */
  B_Derivative_SpeedgoatCANOpen_T sf_Derivative_f;/* '<S44>/Derivative' */
  B_Comp_and_Timer_SpeedgoatCAN_T sf_Comp_and_Timer_f;/* '<S44>/Comp_and_Timer' */
  B_Derivative_SpeedgoatCANOpen_T sf_Derivative;/* '<S43>/Derivative' */
} B_SpeedgoatCANOpen2Buses1ms_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_private_SlidingWindowAv_a_T gobj_0;/* '<S32>/Moving Average' */
  dsp_private_SlidingWindowAv_a_T gobj_1;/* '<S32>/Moving Average' */
  dsp_simulink_MovingAverage_Sp_T obj; /* '<S30>/Moving Average' */
  dsp_simulink_MovingAverage_a_T obj_b;/* '<S32>/Moving Average' */
  real_T Delay_DSTATE;                 /* '<S43>/Delay' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S43>/Discrete-Time Integrator' */
  real_T Delay_DSTATE_d;               /* '<S44>/Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_d;/* '<S44>/Discrete-Time Integrator' */
  real_T Delay_DSTATE_j;               /* '<S46>/Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_h;/* '<S46>/Discrete-Time Integrator' */
  real_T DiscreteFilter_states[2];     /* '<S41>/Discrete Filter' */
  real_T DiscreteFilter_states_b[2];   /* '<S42>/Discrete Filter' */
  real_T lastSin;                      /* '<S16>/Sine Wave' */
  real_T lastCos;                      /* '<S16>/Sine Wave' */
  real_T TractionReq_Buffer0;          /* synthesized block */
  real_T TmpRTBAtConstantOutport1_Buffer;/* synthesized block */
  real_T Retract_current_Buffer0;      /* synthesized block */
  real_T LeftTiltMotor_SpeedReqrpm1_Buff;/* synthesized block */
  real_T RightTiltMotor_SpeedReqrpm_Buff;/* synthesized block */
  real_T SteeringMotor_SpeedReq_Buffer0;/* synthesized block */
  real_T TmpRTBAtSum2Inport1_Buffer0;  /* synthesized block */
  real_T Sum2_DWORK1;                  /* '<S36>/Sum2' */
  real_T TmpRTBAtSumInport2_Buffer0;   /* synthesized block */
  real_T Sum_DWORK1;                   /* '<S36>/Sum' */
  real_T Memory1_PreviousInput;        /* '<S30>/Memory1' */
  volatile real_T DirectionReq_Buffer[2];/* synthesized block */
  volatile real_T DirectionFb_Buffer[2];/* synthesized block */
  real_T TmpRTBAtSumInport2_Buffer0_o; /* synthesized block */
  real_T TmpRTBAtServoTiltingInport1_Buf;/* synthesized block */
  volatile real_T Y_Angle_Buffer[2];   /* synthesized block */
  real_T Hyst_Buffer0;                 /* synthesized block */
  real_T TmpRTBAtDerivativeInport2_Buffe;/* synthesized block */
  real_T TmpRTBAtDerivativeInport3_Buffe;/* synthesized block */
  real_T Memory1_PreviousInput_b;      /* '<S41>/Memory1' */
  real_T Hyst_Buffer0_e;               /* synthesized block */
  real_T TmpRTBAtDerivativeInport2_Buf_k;/* synthesized block */
  real_T TmpRTBAtDerivativeInport3_Buf_d;/* synthesized block */
  real_T Memory1_PreviousInput_k;      /* '<S42>/Memory1' */
  real_T Hyst_Buffer0_e0;              /* synthesized block */
  real_T TmpRTBAtDerivativeInport2_Bu_kz;/* synthesized block */
  real_T TmpRTBAtDerivativeInport3_Bu_d1;/* synthesized block */
  real_T TmpRTBAtSumInport2_Buffer0_os;/* synthesized block */
  volatile real_T DispLeftm_Buffer[2]; /* synthesized block */
  real_T DiscreteFilter_tmp;           /* '<S41>/Discrete Filter' */
  real_T TmpRTBAtSumInport2_Buffer0_osg;/* synthesized block */
  volatile real_T DispRightm_Buffer[2];/* synthesized block */
  real_T DiscreteFilter_tmp_b;         /* '<S42>/Discrete Filter' */
  real_T Neutral_State;                /* '<S29>/DecisionBrakeCtrl' */
  real_T Parking_Brake;                /* '<S29>/DecisionBrakeCtrl' */
  real_T tact;                         /* '<S24>/HeartBeatgenerator' */
  real_T Heartbeat;                    /* '<S24>/HeartBeatgenerator' */
  dsp_private_SlidingWindowAver_T gobj_0_j;/* '<S30>/Moving Average' */
  dsp_private_SlidingWindowAver_T gobj_1_f;/* '<S30>/Moving Average' */
  void *CANSetup_PWORK;                /* '<S15>/CAN Setup ' */
  void *CANRead_PWORK;                 /* '<S19>/CAN Read' */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_l;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_j;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_h;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_o;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ds;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ld;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_k;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_f;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_a;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_b;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_g;   /* synthesized block */

  void *CANRead_PWORK_p;               /* '<S21>/CAN Read' */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ab;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_lx;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_j4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_oa;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ds2;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ldq;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_gu;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_i;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_kh;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_n;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bh;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_id;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_js;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_p;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_j3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_m;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mz;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_c;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pl;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ol;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_hc;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_pla;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ol5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mu;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_hc3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_ol5d;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mq;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_p4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_dq;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_lo;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_li;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_gk;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_d3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mk;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_dx;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_n4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mv;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_f1;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_l5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ldm;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cv;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_e;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_j5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mt;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_fr;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pz;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_l2;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pa;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_az;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_p0;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_lc;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ah;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_mza;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pr;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cl;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_gb;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_jr;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_la;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_d3f;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_de;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ew;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bp;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_oe;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pg;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_dy;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_i3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ij;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_d3q;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_dyf;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_i3x;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ijl;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_d3qk;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_gp;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bx;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_b5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_pzz;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_my;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_az1;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ej;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_gp4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_bxd;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_b5w;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_pzzs;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_my4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_az1o;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ejb;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ji;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mm;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_gp4a;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_bxdb;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_b5we;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Insert_pzzse;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_my4o;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Insert_az1op;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_ejbn;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_jis;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_mmb;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pe;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_j55;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_et;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_b0;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cy;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_mtq;   /* synthesized block */

  void *CANWrite_PWORK;                /* '<S22>/CAN Write' */
  void *CANWrite_PWORK_e;              /* '<S20>/CAN Write' */
  real32_T Delay_DSTATE_f[2];          /* '<S36>/Delay' */
  real32_T Joystick_LongCmd_Buffer0;   /* synthesized block */
  real32_T TmpRTBAtDunkA_Steering_Init_Spe;/* synthesized block */
  real32_T TmpRTBAtDunkC_TiltLeft_Init_Cur;/* synthesized block */
  real32_T TmpRTBAtDunkB_TiltRight_Init_Cu;/* synthesized block */
  real32_T TmpRTBAtDunkD_Brake_Init_Curren;/* synthesized block */
  real32_T Retract_current_Buffer0_o;  /* synthesized block */
  volatile real32_T Joystick_LongCmd1_Buffer[2];/* synthesized block */
  real32_T TmpRTBAtSum1Inport1_Buffer0;/* synthesized block */
  real32_T TmpRTBAtSum1Inport2_Buffer0;/* synthesized block */
  volatile real32_T TmpRTBAtRetractInport2_Buffer[2];/* synthesized block */
  volatile real32_T TmpRTBAtDelayInport1_Buffer[2];/* synthesized block */
  real32_T aux2;                       /* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T aux;                        /* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T aux2_k;                     /* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T aux_a;                      /* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T aux2_p;                     /* '<S69>/DunkA_Steering_Init_SpeedMode' */
  real32_T aux_j;                      /* '<S69>/DunkA_Steering_Init_SpeedMode' */
  real32_T aux2_l;                     /* '<S65>/DunkD_Brake_Init_CurrentMode' */
  real32_T aux_k;                      /* '<S65>/DunkD_Brake_Init_CurrentMode' */
  int32_T systemEnable;                /* '<S16>/Sine Wave' */
  int32_T sfEvent;                     /* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  int32_T sfEvent_c;                   /* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  int32_T sfEvent_a;                   /* '<S69>/DunkA_Steering_Init_SpeedMode' */
  int32_T sfEvent_n;                   /* '<S27>/EnableCtrl' */
  int32_T sfEvent_j;                   /* '<S65>/DunkD_Brake_Init_CurrentMode' */
  int32_T sfEvent_o;                   /* '<S43>/Comp_and_Timer' */
  int32_T sfEvent_h;                   /* '<S36>/Retract' */
  int32_T sfEvent_e;                   /* '<S29>/DecisionBrakeCtrl' */
  volatile int8_T Joystick_LongCmd1_ActiveBufIdx;/* synthesized block */
  volatile int8_T Joystick_LongCmd1_semaphoreTake;/* synthesized block */
  volatile int8_T TmpRTBAtRetractInport2_ActiveBu;/* synthesized block */
  volatile int8_T TmpRTBAtRetractInport2_semaphor;/* synthesized block */
  volatile int8_T TmpRTBAtDelayInport1_ActiveBufI;/* synthesized block */
  volatile int8_T TmpRTBAtDelayInport1_semaphoreT;/* synthesized block */
  volatile int8_T DirectionReq_ActiveBufIdx;/* synthesized block */
  volatile int8_T DirectionReq_semaphoreTaken;/* synthesized block */
  volatile int8_T DirectionFb_ActiveBufIdx;/* synthesized block */
  volatile int8_T DirectionFb_semaphoreTaken;/* synthesized block */
  volatile int8_T Y_Angle_ActiveBufIdx;/* synthesized block */
  volatile int8_T Y_Angle_semaphoreTaken;/* synthesized block */
  volatile int8_T DispLeftm_ActiveBufIdx;/* synthesized block */
  volatile int8_T DispLeftm_semaphoreTaken;/* synthesized block */
  volatile int8_T DispRightm_ActiveBufIdx;/* synthesized block */
  volatile int8_T DispRightm_semaphoreTaken;/* synthesized block */
  int8_T CANTXWrapper_SubsysRanBC;     /* '<S18>/CAN TX Wrapper' */
  int8_T CANTXWrapper_SubsysRanBC_f;   /* '<S17>/CAN TX Wrapper' */
  uint8_T Joystick_ButtonsStatus_Buffer0;/* synthesized block */
  volatile uint8_T RateTransition_Buffer0;/* '<S31>/Rate Transition' */
  uint8_T is_active_c1_SpeedgoatCANOpen2B;/* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  uint8_T is_c1_SpeedgoatCANOpen2Buses1ms;/* '<S71>/DunkB_TiltRight_Init_CurrentMode' */
  uint8_T is_active_c2_SpeedgoatCANOpen2B;/* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  uint8_T is_c2_SpeedgoatCANOpen2Buses1ms;/* '<S70>/DunkC_TiltLeft_Init_CurrentMode' */
  uint8_T is_active_c12_SpeedgoatCANOpen2;/* '<S69>/DunkA_Steering_Init_SpeedMode' */
  uint8_T is_c12_SpeedgoatCANOpen2Buses1m;/* '<S69>/DunkA_Steering_Init_SpeedMode' */
  uint8_T is_active_c4_SpeedgoatCANOpen2B;/* '<S27>/EnableCtrl' */
  uint8_T is_c4_SpeedgoatCANOpen2Buses1ms;/* '<S27>/EnableCtrl' */
  uint8_T is_active_c3_SpeedgoatCANOpen2B;/* '<S65>/DunkD_Brake_Init_CurrentMode' */
  uint8_T is_c3_SpeedgoatCANOpen2Buses1ms;/* '<S65>/DunkD_Brake_Init_CurrentMode' */
  uint8_T is_active_c14_SpeedgoatCANOpen2;/* '<S43>/Comp_and_Timer' */
  uint8_T is_c14_SpeedgoatCANOpen2Buses1m;/* '<S43>/Comp_and_Timer' */
  uint8_T temporalCounter_i1;          /* '<S43>/Comp_and_Timer' */
  uint8_T is_active_c5_SpeedgoatCANOpen2B;/* '<S36>/Retract' */
  uint8_T is_c5_SpeedgoatCANOpen2Buses1ms;/* '<S36>/Retract' */
  uint8_T temporalCounter_i1_n;        /* '<S36>/Retract' */
  uint8_T is_active_c13_SpeedgoatCANOpen2;/* '<S29>/DecisionBrakeCtrl' */
  uint8_T is_c13_SpeedgoatCANOpen2Buses1m;/* '<S29>/DecisionBrakeCtrl' */
  uint8_T TmpRTBAtCANWriteInport2_Buffer0;/* synthesized block */
  uint8_T TmpRTBAtCANWriteInport2_Buffe_m;/* synthesized block */
  boolean_T objisempty;                /* '<S32>/Moving Average' */
  boolean_T objisempty_h;              /* '<S30>/Moving Average' */
  boolean_T CANTXWrapper_MODE;         /* '<S18>/CAN TX Wrapper' */
  boolean_T CANTXWrapper_MODE_i;       /* '<S17>/CAN TX Wrapper' */
  DW_Derivative_SpeedgoatCANOpe_T sf_Derivative_b;/* '<S46>/Derivative' */
  DW_Comp_and_Timer_SpeedgoatCA_T sf_Comp_and_Timer_b;/* '<S46>/Comp_and_Timer' */
  DW_Derivative_SpeedgoatCANOpe_T sf_Derivative_f;/* '<S44>/Derivative' */
  DW_Comp_and_Timer_SpeedgoatCA_T sf_Comp_and_Timer_f;/* '<S44>/Comp_and_Timer' */
  DW_Derivative_SpeedgoatCANOpe_T sf_Derivative;/* '<S43>/Derivative' */
} DW_SpeedgoatCANOpen2Buses1ms_T;

/* Backward compatible GRT Identifiers */
#define rtB                            SpeedgoatCANOpen2Buses1ms_B
#define BlockIO                        B_SpeedgoatCANOpen2Buses1ms_T
#define rtP                            SpeedgoatCANOpen2Buses1ms_P
#define Parameters                     P_SpeedgoatCANOpen2Buses1ms_T
#define rtDWork                        SpeedgoatCANOpen2Buses1ms_DW
#define D_Work                         DW_SpeedgoatCANOpen2Buses1ms_T

/* Parameters (default storage) */
struct P_SpeedgoatCANOpen2Buses1ms_T_ {
  real_T PID_Angle_Kd;                 /* Mask Parameter: PID_Angle_Kd
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T PID_DispLeft_Kd;              /* Mask Parameter: PID_DispLeft_Kd
                                        * Referenced by: '<S44>/Constant'
                                        */
  real_T PID_DispRight_Kd;             /* Mask Parameter: PID_DispRight_Kd
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T PID_Angle_Ki;                 /* Mask Parameter: PID_Angle_Ki
                                        * Referenced by:
                                        *   '<S43>/AntiWindup'
                                        *   '<S43>/Integral Gain'
                                        */
  real_T PID_DispLeft_Ki;              /* Mask Parameter: PID_DispLeft_Ki
                                        * Referenced by:
                                        *   '<S44>/AntiWindup'
                                        *   '<S44>/Integral Gain'
                                        */
  real_T PID_DispRight_Ki;             /* Mask Parameter: PID_DispRight_Ki
                                        * Referenced by:
                                        *   '<S46>/AntiWindup'
                                        *   '<S46>/Integral Gain'
                                        */
  real_T PID_Angle_Kp;                 /* Mask Parameter: PID_Angle_Kp
                                        * Referenced by:
                                        *   '<S43>/AntiWindup'
                                        *   '<S43>/Proportional  Gain'
                                        */
  real_T PID_DispLeft_Kp;              /* Mask Parameter: PID_DispLeft_Kp
                                        * Referenced by:
                                        *   '<S44>/AntiWindup'
                                        *   '<S44>/Proportional  Gain'
                                        */
  real_T PID_DispRight_Kp;             /* Mask Parameter: PID_DispRight_Kp
                                        * Referenced by:
                                        *   '<S46>/AntiWindup'
                                        *   '<S46>/Proportional  Gain'
                                        */
  real_T PID_Angle_Req_lim;            /* Mask Parameter: PID_Angle_Req_lim
                                        * Referenced by: '<S43>/Saturation'
                                        */
  real_T PID_DispLeft_Req_lim;         /* Mask Parameter: PID_DispLeft_Req_lim
                                        * Referenced by: '<S44>/Saturation'
                                        */
  real_T PID_DispRight_Req_lim;        /* Mask Parameter: PID_DispRight_Req_lim
                                        * Referenced by: '<S46>/Saturation'
                                        */
  real_T PID_Angle_Ts;                 /* Mask Parameter: PID_Angle_Ts
                                        * Referenced by: '<S43>/Constant1'
                                        */
  real_T PID_DispLeft_Ts;              /* Mask Parameter: PID_DispLeft_Ts
                                        * Referenced by: '<S44>/Constant1'
                                        */
  real_T PID_DispRight_Ts;             /* Mask Parameter: PID_DispRight_Ts
                                        * Referenced by: '<S46>/Constant1'
                                        */
  real32_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S73>/Constant'
                                        */
  real_T CANWrite_P1_Size[2];          /* Computed Parameter: CANWrite_P1_Size
                                        * Referenced by: '<S20>/CAN Write'
                                        */
  real_T CANWrite_P1[7];               /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
                                        * Referenced by: '<S20>/CAN Write'
                                        */
  real_T CANWrite_P1_Size_p[2];        /* Computed Parameter: CANWrite_P1_Size_p
                                        * Referenced by: '<S22>/CAN Write'
                                        */
  real_T CANWrite_P1_h[7];             /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
                                        * Referenced by: '<S22>/CAN Write'
                                        */
  real_T CANSetup_P1_Size[2];          /* Computed Parameter: CANSetup_P1_Size
                                        * Referenced by: '<S15>/CAN Setup '
                                        */
  real_T CANSetup_P1[40];              /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
                                        * Referenced by: '<S15>/CAN Setup '
                                        */
  real_T CANSetup_P2_Size[2];          /* Computed Parameter: CANSetup_P2_Size
                                        * Referenced by: '<S15>/CAN Setup '
                                        */
  real_T CANSetup_P2;                  /* Expression: initStruct
                                        * Referenced by: '<S15>/CAN Setup '
                                        */
  real_T CANSetup_P3_Size[2];          /* Computed Parameter: CANSetup_P3_Size
                                        * Referenced by: '<S15>/CAN Setup '
                                        */
  real_T CANSetup_P3;                  /* Expression: termStruct
                                        * Referenced by: '<S15>/CAN Setup '
                                        */
  real_T CANRead_P1_Size[2];           /* Computed Parameter: CANRead_P1_Size
                                        * Referenced by: '<S19>/CAN Read'
                                        */
  real_T CANRead_P1[6];                /* Expression: [initValues(1:4) messageType initValues(6)]
                                        * Referenced by: '<S19>/CAN Read'
                                        */
  real_T CANRead_P1_Size_b[2];         /* Computed Parameter: CANRead_P1_Size_b
                                        * Referenced by: '<S21>/CAN Read'
                                        */
  real_T CANRead_P1_n[6];              /* Expression: [initValues(1:4) messageType initValues(6)]
                                        * Referenced by: '<S21>/CAN Read'
                                        */
  real_T SineWave_Amp;                 /* Expression: 5000
                                        * Referenced by: '<S16>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 2500
                                        * Referenced by: '<S16>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 4
                                        * Referenced by: '<S16>/Sine Wave'
                                        */
  real_T SineWave_Hsin;                /* Computed Parameter: SineWave_Hsin
                                        * Referenced by: '<S16>/Sine Wave'
                                        */
  real_T SineWave_HCos;                /* Computed Parameter: SineWave_HCos
                                        * Referenced by: '<S16>/Sine Wave'
                                        */
  real_T SineWave_PSin;                /* Computed Parameter: SineWave_PSin
                                        * Referenced by: '<S16>/Sine Wave'
                                        */
  real_T SineWave_PCos;                /* Computed Parameter: SineWave_PCos
                                        * Referenced by: '<S16>/Sine Wave'
                                        */
  real_T TractionReq_InitialCondition; /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T TmpRTBAtConstantOutport1_Initia;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Retract_current_InitialConditio;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T LeftTiltMotor_SpeedReqrpm1_Init;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T RightTiltMotor_SpeedReqrpm_Init;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T SteeringMotor_SpeedReq_InitialC;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtSum2Inport1_InitialCond;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Saturation2_UpperSat;         /* Expression: 12
                                        * Referenced by: '<S36>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -12
                                        * Referenced by: '<S36>/Saturation2'
                                        */
  real_T Amp2mAmp_Gain;                /* Expression: 1000
                                        * Referenced by: '<S36>/Amp2mAmp'
                                        */
  real_T Gain2_Gain;                   /* Expression: pi/30
                                        * Referenced by: '<S33>/Gain2'
                                        */
  real_T WheelRadius_Gain;             /* Expression: 0.25
                                        * Referenced by: '<S33>/WheelRadius'
                                        */
  real_T TmpRTBAtSumInport2_InitialCondi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T GetInPercent_Gain;            /* Expression: 0.00015625
                                        * Referenced by: '<S36>/GetInPercent'
                                        */
  real_T Gain2_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S36>/Gain2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T Gain1_Gain;                   /* Expression: 12.7
                                        * Referenced by: '<S36>/Gain1'
                                        */
  real_T offset_Value;                 /* Expression: 3600
                                        * Referenced by: '<S36>/offset'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S30>/Memory1'
                                        */
  real_T DirectionReq_InitialCondition;/* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T DirectionFb_InitialCondition; /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T Offsetto0pospos180180deg_Value;/* Expression: 2048
                                         * Referenced by: '<S30>/Offset to 0 pos => pos = [-180 180]deg'
                                         */
  real_T TmpRTBAtSumInport2_InitialCon_j;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T inc2deg_Gain;                 /* Expression: 180/2048
                                        * Referenced by: '<S30>/inc2deg'
                                        */
  real_T TmpRTBAtServoTiltingInport1_Ini;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Y_Angle_InitialCondition;     /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T Hyst_InitialCondition;        /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S43>/Delay'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S43>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S43>/Discrete-Time Integrator'
                                        */
  real_T TmpRTBAtDerivativeInport2_Initi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtDerivativeInport3_Initi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T tometer_Gain;                 /* Expression: 0.00246
                                        * Referenced by: '<S43>/tometer'
                                        */
  real_T Gain4_Gain;                   /* Expression: -1
                                        * Referenced by: '<S32>/Gain4'
                                        */
  real_T Memory1_InitialCondition_k;   /* Expression: 0
                                        * Referenced by: '<S41>/Memory1'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1
                                        * Referenced by: '<S32>/Gain5'
                                        */
  real_T Hyst_InitialCondition_j;      /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T Delay_InitialCondition_p;     /* Expression: 0.0
                                        * Referenced by: '<S44>/Delay'
                                        */
  real_T DiscreteTimeIntegrator_gainva_d;/* Computed Parameter: DiscreteTimeIntegrator_gainva_d
                                          * Referenced by: '<S44>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_j;  /* Expression: 0
                                        * Referenced by: '<S44>/Discrete-Time Integrator'
                                        */
  real_T TmpRTBAtDerivativeInport2_Ini_j;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtDerivativeInport3_Ini_j;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Saturation2_UpperSat_b;       /* Expression: 800
                                        * Referenced by: '<S44>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_n;       /* Expression: -800
                                        * Referenced by: '<S44>/Saturation2'
                                        */
  real_T c1_Gain;                      /* Expression: 1
                                        * Referenced by: '<S44>/c1'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: -1
                                        * Referenced by: '<S32>/Gain1'
                                        */
  real_T Gain2_Gain_c;                 /* Expression: 1
                                        * Referenced by: '<S32>/Gain2'
                                        */
  real_T Memory1_InitialCondition_o;   /* Expression: 0
                                        * Referenced by: '<S42>/Memory1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S32>/Gain3'
                                        */
  real_T Hyst_InitialCondition_jx;     /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T Delay_InitialCondition_g;     /* Expression: 0.0
                                        * Referenced by: '<S46>/Delay'
                                        */
  real_T DiscreteTimeIntegrator_gainva_p;/* Computed Parameter: DiscreteTimeIntegrator_gainva_p
                                          * Referenced by: '<S46>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_d;  /* Expression: 0
                                        * Referenced by: '<S46>/Discrete-Time Integrator'
                                        */
  real_T TmpRTBAtDerivativeInport2_In_jx;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtDerivativeInport3_In_jx;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Saturation2_UpperSat_f;       /* Expression: 800
                                        * Referenced by: '<S46>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_i;       /* Expression: -800
                                        * Referenced by: '<S46>/Saturation2'
                                        */
  real_T c1_Gain_j;                    /* Expression: 1
                                        * Referenced by: '<S46>/c1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S32>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T TmpRTBAtSumInport2_InitialCo_jx;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Volt2meter_Gain;              /* Expression: 0.076/5
                                        * Referenced by: '<S41>/Volt2meter'
                                        */
  real_T DispLeftm_InitialCondition;   /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T DiscreteFilter_NumCoef[3];    /* Expression: [0.0201 0.0402 0.0201]
                                        * Referenced by: '<S41>/Discrete Filter'
                                        */
  real_T DiscreteFilter_DenCoef[3];    /* Expression: [1 -1.561 0.6414]
                                        * Referenced by: '<S41>/Discrete Filter'
                                        */
  real_T DiscreteFilter_InitialStates; /* Expression: 0
                                        * Referenced by: '<S41>/Discrete Filter'
                                        */
  real_T Offsetfor0deg_Value;          /* Expression: 3.294261
                                        * Referenced by: '<S41>/Offset for 0 deg'
                                        */
  real_T TmpRTBAtSumInport2_InitialC_jxk;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Volt2meter_Gain_f;            /* Expression: 0.076/5
                                        * Referenced by: '<S42>/Volt2meter'
                                        */
  real_T DispRightm_InitialCondition;  /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T DiscreteFilter_NumCoef_f[3];  /* Expression: [0.0201 0.0402 0.0201]
                                        * Referenced by: '<S42>/Discrete Filter'
                                        */
  real_T DiscreteFilter_DenCoef_e[3];  /* Expression: [1 -1.561 0.6414]
                                        * Referenced by: '<S42>/Discrete Filter'
                                        */
  real_T DiscreteFilter_InitialStates_h;/* Expression: 0
                                         * Referenced by: '<S42>/Discrete Filter'
                                         */
  real_T Offsetfor0deg_Value_f;        /* Expression: 3.39224644
                                        * Referenced by: '<S42>/Offset for 0 deg'
                                        */
  real_T Constant3_Value;              /* Expression: 0.2
                                        * Referenced by: '<S43>/Constant3'
                                        */
  real_T Constant3_Value_d;            /* Expression: 0.1
                                        * Referenced by: '<S44>/Constant3'
                                        */
  real_T degree2m_Gain;                /* Expression: 0.00246
                                        * Referenced by: '<S44>/degree2m'
                                        */
  real_T Constant3_Value_a;            /* Expression: 0.1
                                        * Referenced by: '<S46>/Constant3'
                                        */
  real_T degree2m_Gain_j;              /* Expression: 0.00246
                                        * Referenced by: '<S46>/degree2m'
                                        */
  real_T ms2Kmh_Gain;                  /* Expression: 3.6
                                        * Referenced by: '<S33>/m//s2Km//h'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: 1/10
                                        * Referenced by: '<S33>/Gain1'
                                        */
  int32_T Gain1_Gain_j;                /* Computed Parameter: Gain1_Gain_j
                                        * Referenced by: '<S5>/Gain1'
                                        */
  int32_T Gain_Gain_g;                 /* Computed Parameter: Gain_Gain_g
                                        * Referenced by: '<S5>/Gain'
                                        */
  int32_T TorqueConstant_Gain;         /* Computed Parameter: TorqueConstant_Gain
                                        * Referenced by: '<S32>/Torque Constant'
                                        */
  real32_T Joystick_LongCmd_InitialConditi;/* Computed Parameter: Joystick_LongCmd_InitialConditi
                                            * Referenced by: synthesized block
                                            */
  real32_T TmpRTBAtDunkA_Steering_Init_Spe;/* Computed Parameter: TmpRTBAtDunkA_Steering_Init_Spe
                                            * Referenced by: synthesized block
                                            */
  real32_T TmpRTBAtDunkC_TiltLeft_Init_Cur;/* Computed Parameter: TmpRTBAtDunkC_TiltLeft_Init_Cur
                                            * Referenced by: synthesized block
                                            */
  real32_T TmpRTBAtDunkB_TiltRight_Init_Cu;/* Computed Parameter: TmpRTBAtDunkB_TiltRight_Init_Cu
                                            * Referenced by: synthesized block
                                            */
  real32_T TmpRTBAtDunkD_Brake_Init_Curren;/* Computed Parameter: TmpRTBAtDunkD_Brake_Init_Curren
                                            * Referenced by: synthesized block
                                            */
  real32_T Retract_current_InitialCondit_j;/* Computed Parameter: Retract_current_InitialCondit_j
                                            * Referenced by: synthesized block
                                            */
  real32_T Joystick_LongCmd1_InitialCondit;/* Computed Parameter: Joystick_LongCmd1_InitialCondit
                                            * Referenced by: synthesized block
                                            */
  real32_T TmpRTBAtSum1Inport1_InitialCond;/* Computed Parameter: TmpRTBAtSum1Inport1_InitialCond
                                            * Referenced by: synthesized block
                                            */
  real32_T TmpRTBAtSum1Inport2_InitialCond;/* Computed Parameter: TmpRTBAtSum1Inport2_InitialCond
                                            * Referenced by: synthesized block
                                            */
  real32_T TmpRTBAtRetractInport2_InitialC;/* Computed Parameter: TmpRTBAtRetractInport2_InitialC
                                            * Referenced by: synthesized block
                                            */
  real32_T Delay_InitialCondition_m;   /* Computed Parameter: Delay_InitialCondition_m
                                        * Referenced by: '<S36>/Delay'
                                        */
  real32_T TmpRTBAtDelayInport1_InitialCon;/* Computed Parameter: TmpRTBAtDelayInport1_InitialCon
                                            * Referenced by: synthesized block
                                            */
  real32_T dem1_Gain;                  /* Computed Parameter: dem1_Gain
                                        * Referenced by: '<S30>/dem1'
                                        */
  real32_T RoboticsConvention1_Gain;   /* Computed Parameter: RoboticsConvention1_Gain
                                        * Referenced by: '<S30>/Robotics Convention1'
                                        */
  real32_T degree2rad_Gain;            /* Computed Parameter: degree2rad_Gain
                                        * Referenced by: '<S30>/degree2rad'
                                        */
  real32_T n_Gain;                     /* Computed Parameter: n_Gain
                                        * Referenced by: '<S32>/n'
                                        */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S65>/Constant'
                                        */
  real32_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S69>/Constant'
                                        */
  real32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S70>/Constant'
                                        */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S71>/Constant'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S36>/Delay'
                                        */
  uint32_T Delay_DelayLength_c;        /* Computed Parameter: Delay_DelayLength_c
                                        * Referenced by: '<S43>/Delay'
                                        */
  uint32_T Delay_DelayLength_e;        /* Computed Parameter: Delay_DelayLength_e
                                        * Referenced by: '<S44>/Delay'
                                        */
  uint32_T Delay_DelayLength_j;        /* Computed Parameter: Delay_DelayLength_j
                                        * Referenced by: '<S46>/Delay'
                                        */
  int16_T Gain5_Gain_d;                /* Computed Parameter: Gain5_Gain_d
                                        * Referenced by: '<S29>/Gain5'
                                        */
  int16_T LSB2Volt_Gain;               /* Computed Parameter: LSB2Volt_Gain
                                        * Referenced by: '<S41>/LSB2Volt'
                                        */
  int16_T LSB2Volt_Gain_k;             /* Computed Parameter: LSB2Volt_Gain_k
                                        * Referenced by: '<S42>/LSB2Volt'
                                        */
  uint16_T Saturation1_UpperSat;       /* Computed Parameter: Saturation1_UpperSat
                                        * Referenced by: '<S36>/Saturation1'
                                        */
  uint16_T Saturation1_LowerSat;       /* Computed Parameter: Saturation1_LowerSat
                                        * Referenced by: '<S36>/Saturation1'
                                        */
  uint8_T TmpRTBAtCANWriteInport2_Initial;/* Computed Parameter: TmpRTBAtCANWriteInport2_Initial
                                           * Referenced by: synthesized block
                                           */
  uint8_T Constant_Value_k;            /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S20>/Constant'
                                        */
  uint8_T TmpRTBAtCANWriteInport2_Initi_j;/* Computed Parameter: TmpRTBAtCANWriteInport2_Initi_j
                                           * Referenced by: synthesized block
                                           */
  uint8_T Constant_Value_nv;           /* Computed Parameter: Constant_Value_nv
                                        * Referenced by: '<S22>/Constant'
                                        */
  uint8_T Joystick_ButtonsStatus_InitialC;/* Computed Parameter: Joystick_ButtonsStatus_InitialC
                                           * Referenced by: synthesized block
                                           */
  uint8_T Constant_Value_e;            /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S3>/Constant'
                                        */
  uint8_T RateTransition_InitialCondition;/* Computed Parameter: RateTransition_InitialCondition
                                           * Referenced by: '<S31>/Rate Transition'
                                           */
  uint8_T Constant_Value_p;            /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S9>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SpeedgoatCANOpen2Buses1ms_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[7];
    SimStruct childSFunctions[5];
    SimStruct *childSFunctionPtrs[5];
    struct _ssBlkInfo2 blkInfo2[5];
    struct _ssSFcnModelMethods2 methods2[5];
    struct _ssSFcnModelMethods3 methods3[5];
    struct _ssSFcnModelMethods4 methods4[5];
    struct _ssStatesInfo2 statesInfo2[5];
    ssPeriodicStatesInfo periodicStatesInfo[5];
    struct _ssPortInfo2 inputOutputPortInfo2[5];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[4];
      struct _ssInPortUnit inputPortUnits[4];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[4];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[4];
      struct _ssInPortUnit inputPortUnits[4];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[4];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[6];
      struct _ssOutPortUnit outputPortUnits[6];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[6];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[6];
      struct _ssOutPortUnit outputPortUnits[6];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[6];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;
  } NonInlinedSFcns;

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
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

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
    uint32_T clockTick3;
    uint32_T clockTickH3;
    time_T stepSize3;
    uint32_T clockTick4;
    uint32_T clockTickH4;
    time_T stepSize4;
    uint32_T clockTick5;
    uint32_T clockTickH5;
    time_T stepSize5;
    uint32_T clockTick6;
    uint32_T clockTickH6;
    time_T stepSize6;
    struct {
      uint16_T TID[7];
    } TaskCounters;

    struct {
      boolean_T TID1_6;
      boolean_T TID2_3;
      boolean_T TID2_4;
      boolean_T TID2_6;
      boolean_T TID3_6;
      boolean_T TID4_6;
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
    time_T sampleTimesArray[7];
    time_T offsetTimesArray[7];
    int_T sampleTimeTaskIDArray[7];
    int_T sampleHitArray[7];
    int_T perTaskSampleHitsArray[49];
    time_T tArray[7];
  } Timing;
};

/* Block parameters (default storage) */
extern P_SpeedgoatCANOpen2Buses1ms_T SpeedgoatCANOpen2Buses1ms_P;

/* Block signals (default storage) */
extern B_SpeedgoatCANOpen2Buses1ms_T SpeedgoatCANOpen2Buses1ms_B;

/* Block states (default storage) */
extern DW_SpeedgoatCANOpen2Buses1ms_T SpeedgoatCANOpen2Buses1ms_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/*====================*
 * External functions *
 *====================*/
extern SpeedgoatCANOpen2Buses1ms_rtModel *SpeedgoatCANOpen2Buses1ms(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  SpeedgoatCANOpen2Buses1ms_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_SpeedgoatCANOpen2Buses1ms_T *const SpeedgoatCANOpen2Buses1ms_M;

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
 * '<Root>' : 'SpeedgoatCANOpen2Buses1ms'
 * '<S1>'   : 'SpeedgoatCANOpen2Buses1ms/AN2CAN_RPDOs'
 * '<S2>'   : 'SpeedgoatCANOpen2Buses1ms/APT_RPDOs'
 * '<S3>'   : 'SpeedgoatCANOpen2Buses1ms/Dold_MiniMaster_RPDOs'
 * '<S4>'   : 'SpeedgoatCANOpen2Buses1ms/Dunk_Brakes'
 * '<S5>'   : 'SpeedgoatCANOpen2Buses1ms/Dunk_LeftTilt'
 * '<S6>'   : 'SpeedgoatCANOpen2Buses1ms/Dunk_RightTilt'
 * '<S7>'   : 'SpeedgoatCANOpen2Buses1ms/Dunk_Steering'
 * '<S8>'   : 'SpeedgoatCANOpen2Buses1ms/Encoder_RPDOs'
 * '<S9>'   : 'SpeedgoatCANOpen2Buses1ms/Inclinometer_RPDOs'
 * '<S10>'  : 'SpeedgoatCANOpen2Buses1ms/Joystick_RPDOs'
 * '<S11>'  : 'SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs'
 * '<S12>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer'
 * '<S13>'  : 'SpeedgoatCANOpen2Buses1ms/APT_RPDOs/T'
 * '<S14>'  : 'SpeedgoatCANOpen2Buses1ms/Inclinometer_RPDOs/Conv'
 * '<S15>'  : 'SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication'
 * '<S16>'  : 'SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/Subsystem'
 * '<S17>'  : 'SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)'
 * '<S18>'  : 'SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)'
 * '<S19>'  : 'SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper'
 * '<S20>'  : 'SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper'
 * '<S21>'  : 'SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper'
 * '<S22>'  : 'SpeedgoatCANOpen2Buses1ms/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper'
 * '<S23>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/CAN_A'
 * '<S24>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/CAN_B'
 * '<S25>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/Scopes'
 * '<S26>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control'
 * '<S27>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init'
 * '<S28>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/CAN_B/HeartBeatgenerator'
 * '<S29>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/BrakeControl'
 * '<S30>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/SteeringControl'
 * '<S31>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/Subsystem'
 * '<S32>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl'
 * '<S33>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TractionControl'
 * '<S34>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl'
 * '<S35>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/BrakeControl/MATLAB Function'
 * '<S36>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/BrakeControl/Subsystem'
 * '<S37>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/BrakeControl/Subsystem/Retract'
 * '<S38>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/SteeringControl/P Controller'
 * '<S39>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/SteeringControl/Repeating Sequence'
 * '<S40>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/Load Torque Luenberger Observer'
 * '<S41>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/Offset_Conversion'
 * '<S42>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1'
 * '<S43>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_Angle'
 * '<S44>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispLeft'
 * '<S45>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1'
 * '<S46>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispRight'
 * '<S47>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1'
 * '<S48>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2'
 * '<S49>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3'
 * '<S50>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/ServoTilting'
 * '<S51>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/Te'
 * '<S52>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/Tl'
 * '<S53>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_Angle/Comp_and_Timer'
 * '<S54>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_Angle/Derivative'
 * '<S55>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_Angle/Discrete Derivative'
 * '<S56>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Comp_and_Timer'
 * '<S57>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Derivative'
 * '<S58>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Discrete Derivative'
 * '<S59>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Comp_and_Timer'
 * '<S60>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Derivative'
 * '<S61>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Comp_and_Timer'
 * '<S62>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Derivative'
 * '<S63>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Discrete Derivative'
 * '<S64>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/APTControlWord'
 * '<S65>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/Brakes_DunkMotor_Init'
 * '<S66>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/ButtonStatus'
 * '<S67>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/Enable'
 * '<S68>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/EnableCtrl'
 * '<S69>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/Steering_DunkMotor_Init'
 * '<S70>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init'
 * '<S71>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init'
 * '<S72>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode'
 * '<S73>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/Enable/Compare To Constant'
 * '<S74>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode'
 * '<S75>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode'
 * '<S76>'  : 'SpeedgoatCANOpen2Buses1ms/Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode'
 */
#endif                                 /* RTW_HEADER_SpeedgoatCANOpen2Buses1ms_h_ */
