/*
 * SpeedgoatCANOpen2Buses100us.h
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.456
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat May 15 14:03:32 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SpeedgoatCANOpen2Buses100us_h_
#define RTW_HEADER_SpeedgoatCANOpen2Buses100us_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef SpeedgoatCANOpen2Buses100us_COMMON_INCLUDES_
# define SpeedgoatCANOpen2Buses100us_COMMON_INCLUDES_
#define __TMWTYPES__                                             /* Inferred types compatibility mode */
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif                                 /* SpeedgoatCANOpen2Buses100us_COMMON_INCLUDES_ */

#include "SpeedgoatCANOpen2Buses100us_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtw_xpc.h"
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
#define rtModel_SpeedgoatCANOpen2Buses100us RT_MODEL_SpeedgoatCANOpen2Buses100us_T

/* Definition for use in the target main file */
#define SpeedgoatCANOpen2Buses100us_rtModel RT_MODEL_SpeedgoatCANOpen2Buses100us_T

/* user code (top of header file) */
#include "CANOpenSlave.h"

/* Block signals for system '<S38>/DunkA_Steering_Init' */
typedef struct {
  real32_T ClearError;                 /* '<S38>/DunkA_Steering_Init' */
  real32_T DeviceMode;                 /* '<S38>/DunkA_Steering_Init' */
  real32_T BrakeCtrl;                  /* '<S38>/DunkA_Steering_Init' */
  real32_T PowerEnable;                /* '<S38>/DunkA_Steering_Init' */
  real32_T SpeedRequest;               /* '<S38>/DunkA_Steering_Init' */
} B_DunkA_Steering_Init_Speedgo_T;

/* Block states (default storage) for system '<S38>/DunkA_Steering_Init' */
typedef struct {
  real32_T aux2;                       /* '<S38>/DunkA_Steering_Init' */
  real32_T aux;                        /* '<S38>/DunkA_Steering_Init' */
  real32_T enable;                     /* '<S38>/DunkA_Steering_Init' */
  int32_T sfEvent;                     /* '<S38>/DunkA_Steering_Init' */
  uint8_T is_active_c14_SpeedgoatCANOpen2;/* '<S38>/DunkA_Steering_Init' */
  uint8_T is_c14_SpeedgoatCANOpen2Buses10;/* '<S38>/DunkA_Steering_Init' */
} DW_DunkA_Steering_Init_Speedg_T;

/* Block signals (default storage) */
typedef struct {
  uint128m_T degree2rad;               /* '<S31>/degree2rad' */
  int128m_T VehSpeed_Kmh;              /* '<S34>/m//s2Km//h' */
  uint64_T Gain2;                      /* '<S10>/Gain2' */
  uint64_T Gain4;                      /* '<S10>/Gain4' */
  uint64_T Memory1;                    /* '<S31>/Memory1' */
  uint64_T Direction;                  /* '<S31>/inc2deg' */
  uint64_T BrCurrentRef;               /* '<S30>/Gain1' */
  int64_T VehSpeed_SI;                 /* '<S34>/WheelRadius' */
  real_T CANRead_o5;                   /* '<S15>/CAN Read' */
  real_T Switch4;                      /* '<S32>/Switch4' */
  real_T Switch3;                      /* '<S32>/Switch3' */
  real_T CastToSingle;                 /* '<S33>/Cast To Single' */
  real_T CastToSingle1;                /* '<S33>/Cast To Single1' */
  real_T degree2m;                     /* '<S33>/degree2m' */
  real_T TmpRTBAtPITiltingControllerInpo;/* '<S33>/degree2m' */
  real_T Memory;                       /* '<S33>/Memory' */
  real_T TmpRTBAtPITiltingControllerIn_b;/* '<S33>/Memory' */
  real_T TmpRTBAtSwitch1Inport2;
  real_T TmpRTBAtSwitch1Inport3;       /* '<S32>/Constant' */
  real_T Switch1;                      /* '<S32>/Switch1' */
  real_T TmpRTBAtSwitch2Inport2;
  real_T TmpRTBAtSwitch2Inport3;       /* '<S32>/Constant' */
  real_T Switch2;                      /* '<S32>/Switch2' */
  real_T CastToSingle_g;               /* '<S31>/Cast To Single' */
  real_T TmpRTBAtPDirectionControllerInp;/* '<S31>/Cast To Single' */
  real_T CastToSingle1_g;              /* '<S31>/Cast To Single1' */
  real_T TmpRTBAtPDirectionControllerI_h;/* '<S31>/Cast To Single1' */
  real_T TmpRTBAtSwitchInport2;
  real_T TmpRTBAtSwitchInport3;        /* '<S32>/Constant' */
  real_T Switch;                       /* '<S32>/Switch' */
  real_T Sum;                          /* '<S33>/Sum' */
  real_T DispRight;                    /* '<S33>/Volt2meter' */
  real_T Byte0;                        /* '<S25>/MATLAB Function1' */
  real_T button;                       /* '<S25>/MATLAB Function' */
  real_T TiltingAngle;                 /* '<S33>/ServoTilting' */
  real_T LTiltCurrRef;                 /* '<S33>/PI Tilting Controller' */
  real_T RTiltCurrRef;                 /* '<S33>/PI Tilting Controller' */
  real_T SpeedRef;                     /* '<S31>/P Direction Controller' */
  real_T HB;                           /* '<S23>/HeartBeatgenerator' */
  real_T MovingAverage;                /* '<S10>/Moving Average' */
  uint32_T CANRead_o2;                 /* '<S15>/CAN Read' */
  uint32_T CCaller_o1;                 /* '<S13>/C Caller' */
  uint32_T Encoder_Actual_Position;    /* '<S7>/RPDOs from Encoder' */
  uint32_T Encoder_Stored_Position;    /* '<S7>/RPDOs from Encoder' */
  uint32_T Gain2_a;                    /* '<S30>/Gain2' */
  uint32_T Saturation;                 /* '<S30>/Saturation' */
  real32_T Joystick_LongCmd;           /* '<S8>/RPDOs from Joystick' */
  real32_T Joystick_LatCmd;            /* '<S8>/RPDOs from Joystick' */
  real32_T CastToSingle3;              /* '<S25>/Cast To Single3' */
  real32_T Constant1;                  /* '<S41>/Constant1' */
  real32_T Constant;                   /* '<S41>/Constant' */
  real32_T Constant1_a;                /* '<S42>/Constant1' */
  real32_T Constant_a;                 /* '<S42>/Constant' */
  real32_T Constant1_i;                /* '<S43>/Constant1' */
  real32_T Constant_j;                 /* '<S43>/Constant' */
  real32_T Constant1_g;                /* '<S38>/Constant1' */
  real32_T Constant_jw;                /* '<S38>/Constant' */
  real32_T Actual_Current;             /* '<S10>/Data Type Conversion9' */
  real32_T Desired_Current;            /* '<S10>/Data Type Conversion14' */
  real32_T Encoder_Stored_Position_d;  /* '<S10>/Data Type Conversion5' */
  real32_T Encoder_Actual_Position_g;  /* '<S10>/Data Type Conversion18' */
  real32_T AN1;                        /* '<S10>/Data Type Conversion17' */
  real32_T AN2;                        /* '<S10>/Data Type Conversion19' */
  real32_T AN3;                        /* '<S10>/Data Type Conversion20' */
  real32_T AN4;                        /* '<S10>/Data Type Conversion21' */
  real32_T Joystick_LatCmd_f;          /* '<S10>/Data Type Conversion15' */
  real32_T Joystick_LongCmd_m;         /* '<S10>/Data Type Conversion16' */
  real32_T CastToSingle_e;             /* '<S24>/Cast To Single' */
  real32_T RoboticsConvention;         /* '<S31>/Robotics Convention' */
  real32_T TractionRef;                /* '<S34>/Saturation1' */
  int32_T SpeedRear_SI;                /* '<S34>/Gain2' */
  int32_T DunkA_ActualCurrent;         /* '<S3>/RPDOs from Dunker #1' */
  int32_T DunkA_ActualVelocity;        /* '<S3>/RPDOs from Dunker #1' */
  int32_T DunkA_TPDO_DesiredCurrent;
  int32_T DunkB_ActualCurrent;         /* '<S4>/RPDOs from Dunker #1' */
  int32_T DunkB_ActualVelocity;        /* '<S4>/RPDOs from Dunker #1' */
  int32_T DunkB_TPDO_DesiredCurrent;
  int32_T DunkC_ActualCurrent;         /* '<S5>/RPDOs from Dunker #1' */
  int32_T DunkC_ActualVelocity;        /* '<S5>/RPDOs from Dunker #1' */
  int32_T DunkC_TPDO_DesiredCurrent;
  int32_T DunkD_ActualCurrent;         /* '<S6>/RPDOs from Dunker #1' */
  int32_T DunkD_ActualVelocity;        /* '<S6>/RPDOs from Dunker #1' */
  int32_T DunkD_TPDO_DesiredCurrent;   /* '<S22>/Data Type Conversion36' */
  int32_T DunkB_TPDO_DesiredCurrent_j; /* '<S22>/Data Type Conversion26' */
  int32_T DunkC_TPDO_DesiredCurrent_g; /* '<S22>/Data Type Conversion31' */
  int32_T DunkA_TPDO_DesiredCurrent_h; /* '<S22>/Data Type Conversion8' */
  uint16_T Channel_AN1;                /* '<S1>/RPDOs from AN2CAN ' */
  uint16_T Channel_AN2;                /* '<S1>/RPDOs from AN2CAN ' */
  uint16_T Channel_AN3;                /* '<S1>/RPDOs from AN2CAN ' */
  uint16_T Channel_AN4;                /* '<S1>/RPDOs from AN2CAN ' */
  uint16_T APT_BusVoltage;             /* '<S2>/RPDOs from APT' */
  int16_T APT_PhaseCurrent;            /* '<S2>/RPDOs from APT' */
  int16_T APT_Speed;                   /* '<S2>/RPDOs from APT' */
  uint8_T CANRead_o3;                  /* '<S15>/CAN Read' */
  uint8_T CANRead_o4;                  /* '<S15>/CAN Read' */
  uint8_T CANRead_o6[8];               /* '<S15>/CAN Read' */
  uint8_T Switch_c;                    /* '<S15>/Switch' */
  uint8_T CCaller_o2;                  /* '<S13>/C Caller' */
  uint8_T CCaller_o3[8];               /* '<S13>/C Caller' */
  uint8_T APT_StatusWord;              /* '<S2>/RPDOs from APT' */
  uint8_T APT_ErrStatus;               /* '<S2>/RPDOs from APT' */
  uint8_T APT_Direction;               /* '<S2>/RPDOs from APT' */
  uint8_T Joystick_ButtonsStatus;      /* '<S8>/RPDOs from Joystick' */
  uint8_T APT_TPDO_ControlWord;        /* '<S23>/Data Type Conversion' */
  uint8_T APT_TPDO_PedalPosition;      /* '<S23>/Data Type Conversion1' */
  uint8_T APT_TPDO_Heartbeat;          /* '<S23>/Data Type Conversion2' */
  uint8_T ClearError;                  /* '<S41>/Cast To Single1' */
  uint8_T DunkA_TPDO_ClearError;       /* '<S22>/Data Type Conversion3' */
  uint8_T DeviceMode;                  /* '<S41>/Cast To Single' */
  uint8_T DunkA_TPDO_DeviceMode;       /* '<S22>/Data Type Conversion6' */
  uint8_T PowerEnable;                 /* '<S41>/Cast To Single3' */
  uint8_T DunkA_TPDO_PowerEnable;      /* '<S22>/Data Type Conversion7' */
  uint8_T BrakeCtrl;                   /* '<S41>/Cast To Single2' */
  uint8_T DunkA_TPDO_BrakeCtrl;        /* '<S22>/Data Type Conversion4' */
  uint8_T ClearError_h;                /* '<S42>/Cast To Single3' */
  uint8_T DunkB_TPDO_ClearError;       /* '<S22>/Data Type Conversion22' */
  uint8_T DeviceMode_k;                /* '<S42>/Cast To Single1' */
  uint8_T DunkB_TPDO_DeviceMode;       /* '<S22>/Data Type Conversion24' */
  uint8_T PowerEnable_k;               /* '<S42>/Cast To Single4' */
  uint8_T DunkB_TPDO_PowerEnable;      /* '<S22>/Data Type Conversion25' */
  uint8_T BrakeCtrl_l;                 /* '<S42>/Cast To Single2' */
  uint8_T DunkB_TPDO_BrakeCtrl;        /* '<S22>/Data Type Conversion23' */
  uint8_T ClearError_o;                /* '<S43>/Cast To Single3' */
  uint8_T DunkC_TPDO_ClearError;       /* '<S22>/Data Type Conversion27' */
  uint8_T DeviceMode_e;                /* '<S43>/Cast To Single1' */
  uint8_T DunkC_TPDO_DeviceMode;       /* '<S22>/Data Type Conversion29' */
  uint8_T PowerEnable_d;               /* '<S43>/Cast To Single4' */
  uint8_T DunkC_TPDO_PowerEnable;      /* '<S22>/Data Type Conversion30' */
  uint8_T BrakeCtrl_o;                 /* '<S43>/Cast To Single2' */
  uint8_T DunkC_TPDO_BrakeCtrl;        /* '<S22>/Data Type Conversion28' */
  uint8_T ClearError_a;                /* '<S38>/Cast To Single3' */
  uint8_T DunkD_TPDO_ClearError;       /* '<S22>/Data Type Conversion32' */
  uint8_T DeviceMode_p;                /* '<S38>/Cast To Single1' */
  uint8_T DunkD_TPDO_DeviceMode;       /* '<S22>/Data Type Conversion34' */
  uint8_T BrakeCtrl_a;                 /* '<S38>/Cast To Single2' */
  uint8_T DunkD_TPDO_PowerEnable;      /* '<S22>/Data Type Conversion35' */
  uint8_T PowerEnable_a;               /* '<S38>/Cast To Single4' */
  uint8_T DunkD_TPDO_BrakeCtrl;        /* '<S22>/Data Type Conversion33' */
  uint8_T Constant_g;                  /* '<S16>/Constant' */
  int8_T APT_MotorTemp;                /* '<S2>/RPDOs from APT' */
  int8_T APT_Temp;                     /* '<S2>/RPDOs from APT' */
  boolean_T CANRead_o1;                /* '<S15>/CAN Read' */
  B_DunkA_Steering_Init_Speedgo_T sf_DunkA_Steering_Init_m;/* '<S43>/DunkA_Steering_Init' */
  B_DunkA_Steering_Init_Speedgo_T sf_DunkA_Steering_Init_j;/* '<S42>/DunkA_Steering_Init' */
  B_DunkA_Steering_Init_Speedgo_T sf_DunkA_Steering_Init_k;/* '<S41>/DunkA_Steering_Init' */
  B_DunkA_Steering_Init_Speedgo_T sf_DunkA_Steering_Init;/* '<S38>/DunkA_Steering_Init' */
} B_SpeedgoatCANOpen2Buses100us_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_private_SlidingWindowAver_T gobj_0;/* '<S10>/Moving Average' */
  dsp_private_SlidingWindowAver_T gobj_1;/* '<S10>/Moving Average' */
  dsp_simulink_MovingAverage_Sp_T obj; /* '<S10>/Moving Average' */
  real_T TmpRTBAtPITiltingControllerInpo;/* synthesized block */
  real_T TmpRTBAtPITiltingControllerIn_d;/* synthesized block */
  real_T TmpRTBAtPITiltingControllerIn_j;/* synthesized block */
  real_T Memory_PreviousInput;         /* '<S33>/Memory' */
  real_T TmpRTBAtPITiltingControllerIn_f;/* synthesized block */
  real_T TmpRTBAtPITiltingControllerIn_o;/* synthesized block */
  real_T TmpRTBAtPITiltingControllerIn_n;/* synthesized block */
  real_T TmpRTBAtSwitch1Inport2_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch1Inport2_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch1Inport2_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch1Inport3_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch1Inport3_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch1Inport3_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch2Inport2_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch2Inport2_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch2Inport2_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch2Inport3_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch2Inport3_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch2Inport3_Buf2;  /* synthesized block */
  real_T TmpRTBAtPDirectionControllerInp;/* synthesized block */
  real_T TmpRTBAtPDirectionControllerI_d;/* synthesized block */
  real_T TmpRTBAtPDirectionControllerI_f;/* synthesized block */
  real_T TmpRTBAtPDirectionControllerI_j;/* synthesized block */
  real_T TmpRTBAtPDirectionControllerI_i;/* synthesized block */
  real_T TmpRTBAtPDirectionControllerI_g;/* synthesized block */
  real_T TmpRTBAtSwitchInport2_Buf0;   /* synthesized block */
  real_T TmpRTBAtSwitchInport2_Buf1;   /* synthesized block */
  real_T TmpRTBAtSwitchInport2_Buf2;   /* synthesized block */
  real_T TmpRTBAtSwitchInport3_Buf0;   /* synthesized block */
  real_T TmpRTBAtSwitchInport3_Buf1;   /* synthesized block */
  real_T TmpRTBAtSwitchInport3_Buf2;   /* synthesized block */
  real_T Sum_DWORK1;                   /* '<S33>/Sum' */
  real_T uk1;                          /* '<S33>/PI Tilting Controller' */
  real_T ek1;                          /* '<S33>/PI Tilting Controller' */
  real_T tact;                         /* '<S23>/HeartBeatgenerator' */
  real_T Heartbeat;                    /* '<S23>/HeartBeatgenerator' */
  uint64_T Memory1_PreviousInput;      /* '<S31>/Memory1' */
  void *CANSetup_PWORK;                /* '<S11>/CAN Setup ' */
  void *CANRead_PWORK;                 /* '<S15>/CAN Read' */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  void* DunkA_TPDO_DesiredCurrent_d0_SE;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_p;   /* synthesized block */

  void* DunkB_TPDO_DesiredCurrent_d0_SE;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pl;   /* synthesized block */

  void* DunkC_TPDO_DesiredCurrent_d0_SE;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_pla;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_m;   /* synthesized block */

  struct {
    void *AQHandles[2];
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_b;   /* synthesized block */

  struct {
    void *AQHandles[2];
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_c;   /* synthesized block */

  struct {
    void *AQHandles[4];
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mj;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bi;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_h;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bx;   /* synthesized block */

  void* TmpRTBAtPITiltingControllerIn_p;/* synthesized block */
  void* TmpRTBAtPITiltingControllerI_di;/* synthesized block */
  void* TmpRTBAtSwitch1Inport2_d0_SEMAP;/* synthesized block */
  void* TmpRTBAtSwitch1Inport3_d0_SEMAP;/* synthesized block */
  void* TmpRTBAtSwitch2Inport2_d0_SEMAP;/* synthesized block */
  void* TmpRTBAtSwitch2Inport3_d0_SEMAP;/* synthesized block */
  void* TmpRTBAtPDirectionControllerI_l;/* synthesized block */
  void* TmpRTBAtPDirectionControllerI_h;/* synthesized block */
  void* TmpRTBAtSwitchInport2_d0_SEMAPH;/* synthesized block */
  void* TmpRTBAtSwitchInport3_d0_SEMAPH;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_o;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ok;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ck;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ml;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_oq;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ok5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_cka;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ml5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_oq1;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_ok5e;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_ckax;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_ml5y;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_oq1e;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Insert_ok5ez;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Insert_ckax3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Insert_ml5yx;   /* synthesized block */

  void *CANWrite_PWORK;                /* '<S16>/CAN Write' */
  int32_T DunkA_TPDO_DesiredCurrent_Buf[3];/* synthesized block */
  int32_T DunkB_TPDO_DesiredCurrent_Buf[3];/* synthesized block */
  int32_T DunkC_TPDO_DesiredCurrent_Buf[3];/* synthesized block */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S19>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_c;                 /* '<S20>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_k;                 /* '<S21>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_j;                 /* '<S26>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_d;                 /* '<S27>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_f;                 /* '<S28>/S-Function' */

  int8_T DunkA_TPDO_DesiredCurrent_LstBu;/* synthesized block */
  int8_T DunkA_TPDO_DesiredCurrent_RDBuf;/* synthesized block */
  int8_T DunkB_TPDO_DesiredCurrent_LstBu;/* synthesized block */
  int8_T DunkB_TPDO_DesiredCurrent_RDBuf;/* synthesized block */
  int8_T DunkC_TPDO_DesiredCurrent_LstBu;/* synthesized block */
  int8_T DunkC_TPDO_DesiredCurrent_RDBuf;/* synthesized block */
  int8_T TmpRTBAtPITiltingControllerI_n0;/* synthesized block */
  int8_T TmpRTBAtPITiltingControllerIn_k;/* synthesized block */
  int8_T TmpRTBAtPITiltingControllerI_jd;/* synthesized block */
  int8_T TmpRTBAtPITiltingControllerIn_c;/* synthesized block */
  int8_T TmpRTBAtSwitch1Inport2_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch1Inport2_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch1Inport3_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch1Inport3_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch2Inport2_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch2Inport2_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch2Inport3_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch2Inport3_RDBuf; /* synthesized block */
  int8_T TmpRTBAtPDirectionControllerI_p;/* synthesized block */
  int8_T TmpRTBAtPDirectionController_gn;/* synthesized block */
  int8_T TmpRTBAtPDirectionControllerI_k;/* synthesized block */
  int8_T TmpRTBAtPDirectionController_lk;/* synthesized block */
  int8_T TmpRTBAtSwitchInport2_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitchInport2_RDBuf;  /* synthesized block */
  int8_T TmpRTBAtSwitchInport3_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitchInport3_RDBuf;  /* synthesized block */
  int8_T CANTXWrapper_SubsysRanBC;     /* '<S13>/CAN TX Wrapper' */
  boolean_T objisempty;                /* '<S10>/Moving Average' */
  DW_DunkA_Steering_Init_Speedg_T sf_DunkA_Steering_Init_m;/* '<S43>/DunkA_Steering_Init' */
  DW_DunkA_Steering_Init_Speedg_T sf_DunkA_Steering_Init_j;/* '<S42>/DunkA_Steering_Init' */
  DW_DunkA_Steering_Init_Speedg_T sf_DunkA_Steering_Init_k;/* '<S41>/DunkA_Steering_Init' */
  DW_DunkA_Steering_Init_Speedg_T sf_DunkA_Steering_Init;/* '<S38>/DunkA_Steering_Init' */
} DW_SpeedgoatCANOpen2Buses100us_T;

/* Backward compatible GRT Identifiers */
#define rtB                            SpeedgoatCANOpen2Buses100us_B
#define BlockIO                        B_SpeedgoatCANOpen2Buses100us_T
#define rtP                            SpeedgoatCANOpen2Buses100us_P
#define Parameters                     P_SpeedgoatCANOpen2Buses100us_T
#define rtDWork                        SpeedgoatCANOpen2Buses100us_DW
#define D_Work                         DW_SpeedgoatCANOpen2Buses100us_T

/* Parameters (default storage) */
struct P_SpeedgoatCANOpen2Buses100us_T_ {
  real_T CANWrite_P1_Size[2];          /* Computed Parameter: CANWrite_P1_Size
                                        * Referenced by: '<S16>/CAN Write'
                                        */
  real_T CANWrite_P1[7];               /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
                                        * Referenced by: '<S16>/CAN Write'
                                        */
  real_T CANSetup_P1_Size[2];          /* Computed Parameter: CANSetup_P1_Size
                                        * Referenced by: '<S11>/CAN Setup '
                                        */
  real_T CANSetup_P1[40];              /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
                                        * Referenced by: '<S11>/CAN Setup '
                                        */
  real_T CANSetup_P2_Size[2];          /* Computed Parameter: CANSetup_P2_Size
                                        * Referenced by: '<S11>/CAN Setup '
                                        */
  real_T CANSetup_P2;                  /* Expression: initStruct
                                        * Referenced by: '<S11>/CAN Setup '
                                        */
  real_T CANSetup_P3_Size[2];          /* Computed Parameter: CANSetup_P3_Size
                                        * Referenced by: '<S11>/CAN Setup '
                                        */
  real_T CANSetup_P3;                  /* Expression: termStruct
                                        * Referenced by: '<S11>/CAN Setup '
                                        */
  real_T CANRead_P1_Size[2];           /* Computed Parameter: CANRead_P1_Size
                                        * Referenced by: '<S15>/CAN Read'
                                        */
  real_T CANRead_P1[6];                /* Expression: [initValues(1:4) messageType initValues(6)]
                                        * Referenced by: '<S15>/CAN Read'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S32>/Constant'
                                        */
  real_T Switch4_Threshold;            /* Expression: 0
                                        * Referenced by: '<S32>/Switch4'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S32>/Switch3'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T degree2m_Gain;                /* Expression: 0.00246
                                        * Referenced by: '<S33>/degree2m'
                                        */
  real_T TmpRTBAtPITiltingControllerInpo;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S33>/Memory'
                                        */
  real_T TmpRTBAtPITiltingControllerIn_j;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtSwitch1Inport2_InitialC;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtSwitch1Inport3_InitialC;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S32>/Switch1'
                                        */
  real_T TmpRTBAtSwitch2Inport2_InitialC;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtSwitch2Inport3_InitialC;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S32>/Switch2'
                                        */
  real_T TmpRTBAtPDirectionControllerInp;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtPDirectionControllerI_j;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtSwitchInport2_InitialCo;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtSwitchInport3_InitialCo;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S32>/Switch'
                                        */
  real_T Constant_Value_g;             /* Expression: 5
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T Volt2meter_Gain;              /* Expression: 0.076/5
                                        * Referenced by: '<S33>/Volt2meter'
                                        */
  int64_T ms2Kmh_Gain;                 /* Computed Parameter: ms2Kmh_Gain
                                        * Referenced by: '<S34>/m//s2Km//h'
                                        */
  uint64_T Memory1_InitialCondition;   /* Computed Parameter: Memory1_InitialCondition
                                        * Referenced by: '<S31>/Memory1'
                                        */
  uint64_T degree2rad_Gain;            /* Computed Parameter: degree2rad_Gain
                                        * Referenced by: '<S31>/degree2rad'
                                        */
  int32_T DunkA_TPDO_DesiredCurrent_Initi;/* Computed Parameter: DunkA_TPDO_DesiredCurrent_Initi
                                           * Referenced by: synthesized block
                                           */
  int32_T DunkB_TPDO_DesiredCurrent_Initi;/* Computed Parameter: DunkB_TPDO_DesiredCurrent_Initi
                                           * Referenced by: synthesized block
                                           */
  int32_T DunkC_TPDO_DesiredCurrent_Initi;/* Computed Parameter: DunkC_TPDO_DesiredCurrent_Initi
                                           * Referenced by: synthesized block
                                           */
  int32_T WheelRadius_Gain;            /* Computed Parameter: WheelRadius_Gain
                                        * Referenced by: '<S34>/WheelRadius'
                                        */
  real32_T Saturation1_UpperSat;       /* Computed Parameter: Saturation1_UpperSat
                                        * Referenced by: '<S34>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat;       /* Computed Parameter: Saturation1_LowerSat
                                        * Referenced by: '<S34>/Saturation1'
                                        */
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real32_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S41>/Constant'
                                        */
  real32_T Constant1_Value_a;          /* Computed Parameter: Constant1_Value_a
                                        * Referenced by: '<S42>/Constant1'
                                        */
  real32_T Constant_Value_g5;          /* Computed Parameter: Constant_Value_g5
                                        * Referenced by: '<S42>/Constant'
                                        */
  real32_T Constant1_Value_k;          /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S43>/Constant1'
                                        */
  real32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S43>/Constant'
                                        */
  real32_T Constant1_Value_g;          /* Computed Parameter: Constant1_Value_g
                                        * Referenced by: '<S38>/Constant1'
                                        */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S38>/Constant'
                                        */
  real32_T RoboticsConvention_Gain;    /* Computed Parameter: RoboticsConvention_Gain
                                        * Referenced by: '<S31>/Robotics Convention'
                                        */
  uint32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S30>/Saturation'
                                        */
  uint32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S30>/Saturation'
                                        */
  uint32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S30>/Gain1'
                                        */
  uint32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S10>/Gain2'
                                        */
  uint32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S10>/Gain4'
                                        */
  uint32_T inc2deg_Gain;               /* Computed Parameter: inc2deg_Gain
                                        * Referenced by: '<S31>/inc2deg'
                                        */
  int16_T Gain2_Gain_k;                /* Computed Parameter: Gain2_Gain_k
                                        * Referenced by: '<S34>/Gain2'
                                        */
  uint16_T Gain2_Gain_p;               /* Computed Parameter: Gain2_Gain_p
                                        * Referenced by: '<S30>/Gain2'
                                        */
  uint8_T Constant_Value_kp;           /* Computed Parameter: Constant_Value_kp
                                        * Referenced by: '<S16>/Constant'
                                        */
  uint8_T Switch_Threshold_m;          /* Computed Parameter: Switch_Threshold_m
                                        * Referenced by: '<S15>/Switch'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SpeedgoatCANOpen2Buses100us_T {
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
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[3];
    SimStruct *childSFunctionPtrs[3];
    struct _ssBlkInfo2 blkInfo2[3];
    struct _ssSFcnModelMethods2 methods2[3];
    struct _ssSFcnModelMethods3 methods3[3];
    struct _ssSFcnModelMethods4 methods4[3];
    struct _ssStatesInfo2 statesInfo2[3];
    ssPeriodicStatesInfo periodicStatesInfo[3];
    struct _ssPortInfo2 inputOutputPortInfo2[3];
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
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

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
    } Sfcn2;
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
    struct {
      uint16_T TID[2];
    } TaskCounters;

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
extern P_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_P;

/* Block signals (default storage) */
extern B_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_B;

/* Block states (default storage) */
extern DW_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;
extern void rate_scheduler(void);      /*====================*
                                        * External functions *
                                        *====================*/
extern SpeedgoatCANOpen2Buses100us_rtModel *SpeedgoatCANOpen2Buses100us(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  SpeedgoatCANOpen2Buses100us_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_SpeedgoatCANOpen2Buses100us_T *const
  SpeedgoatCANOpen2Buses100us_M;

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
 * '<Root>' : 'SpeedgoatCANOpen2Buses100us'
 * '<S1>'   : 'SpeedgoatCANOpen2Buses100us/AN2CAN_RPDOs'
 * '<S2>'   : 'SpeedgoatCANOpen2Buses100us/APT_RPDOs'
 * '<S3>'   : 'SpeedgoatCANOpen2Buses100us/Dunker #1'
 * '<S4>'   : 'SpeedgoatCANOpen2Buses100us/Dunker #2'
 * '<S5>'   : 'SpeedgoatCANOpen2Buses100us/Dunker #3'
 * '<S6>'   : 'SpeedgoatCANOpen2Buses100us/Dunker #4'
 * '<S7>'   : 'SpeedgoatCANOpen2Buses100us/Encoder_RPDOs'
 * '<S8>'   : 'SpeedgoatCANOpen2Buses100us/Joystick_RPDOs'
 * '<S9>'   : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs'
 * '<S10>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer'
 * '<S11>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication'
 * '<S12>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/Subsystem'
 * '<S13>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)'
 * '<S14>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)'
 * '<S15>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper'
 * '<S16>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper'
 * '<S17>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper'
 * '<S18>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper'
 * '<S19>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/ActualVelocity'
 * '<S20>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Joystick_LatCmd'
 * '<S21>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Joystick_LongCmd'
 * '<S22>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Subsystem'
 * '<S23>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Subsystem1'
 * '<S24>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control'
 * '<S25>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init'
 * '<S26>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/scope0'
 * '<S27>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/scope1'
 * '<S28>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/scope2'
 * '<S29>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Subsystem1/HeartBeatgenerator'
 * '<S30>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/BrakeControl'
 * '<S31>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/DirectionControl'
 * '<S32>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/Subsystem'
 * '<S33>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl'
 * '<S34>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TractionControl'
 * '<S35>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/DirectionControl/P Direction Controller'
 * '<S36>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller'
 * '<S37>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/ServoTilting'
 * '<S38>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Brakes_DunkMotor_Init'
 * '<S39>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/MATLAB Function'
 * '<S40>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/MATLAB Function1'
 * '<S41>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Steering_DunkMotor_Init'
 * '<S42>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init'
 * '<S43>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init'
 * '<S44>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init'
 * '<S45>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init'
 * '<S46>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init'
 * '<S47>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init'
 */
#endif                                 /* RTW_HEADER_SpeedgoatCANOpen2Buses100us_h_ */
