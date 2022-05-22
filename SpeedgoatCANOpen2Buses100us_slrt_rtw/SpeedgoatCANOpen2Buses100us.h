/*
 * SpeedgoatCANOpen2Buses100us.h
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.893
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat May 21 12:32:19 2022
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
#include <string.h>
#include <float.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef SpeedgoatCANOpen2Buses100us_COMMON_INCLUDES_
# define SpeedgoatCANOpen2Buses100us_COMMON_INCLUDES_
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
#endif                                 /* SpeedgoatCANOpen2Buses100us_COMMON_INCLUDES_ */

#include "SpeedgoatCANOpen2Buses100us_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
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
# define rtmIsContinuousTask(rtm, tid) ((tid) <= 1)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
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
#define rtModel_SpeedgoatCANOpen2Buses100us RT_MODEL_SpeedgoatCANOpen2Buses100us_T

/* Definition for use in the target main file */
#define SpeedgoatCANOpen2Buses100us_rtModel RT_MODEL_SpeedgoatCANOpen2Buses100us_T

/* user code (top of header file) */
#include "CANOpenSlave.h"
#include "CANOpenSlaveAPT.h"

/* Block signals (default storage) */
typedef struct {
  int64_T DunkC_ActualVelocity_Inv;    /* '<S5>/Gain1' */
  int64_T DunkC_ActualCurrent_Inv;     /* '<S5>/Gain' */
  int64_T RightTiltMotor_CurrentReqmA;
  int64_T RightTiltMotor_CurrentReqmA_i;/* '<S32>/Gain' */
  real_T CANRead_o5;                   /* '<S19>/CAN Read' */
  real_T CANRead_o5_h;                 /* '<S21>/CAN Read' */
  real_T SineWave;                     /* '<S16>/Sine Wave' */
  real_T SineWave1;                    /* '<S16>/Sine Wave1' */
  real_T SineWave3;                    /* '<S16>/Sine Wave3' */
  real_T SineWave2;                    /* '<S16>/Sine Wave2' */
  real_T Switch4;                      /* '<S31>/Switch4' */
  real_T Sum;                          /* '<S36>/Sum' */
  real_T br_percent2;                  /* '<S36>/GetInPercent' */
  real_T Gain2;                        /* '<S36>/Gain2' */
  real_T Saturation;                   /* '<S36>/Saturation' */
  real_T Gain1;                        /* '<S36>/Gain1' */
  real_T Sum2;                         /* '<S36>/Sum2' */
  real_T Saturation2;                  /* '<S36>/Saturation2' */
  real_T BrakesMotor_CurrentReq;       /* '<S36>/Amp2mAmp' */
  real_T CastToSingle3;                /* '<S33>/Cast To Single3' */
  real_T Speed_SI;                     /* '<S33>/Gain2' */
  real_T VehSpeed_SI;                  /* '<S33>/WheelRadius' */
  real_T CastToSingle2;                /* '<S33>/Cast To Single2' */
  real_T Switch3;                      /* '<S31>/Switch3' */
  real_T TiltingAngle_stepreqfdeg;
  real_T Fb_Angledeg;                  /* '<S32>/Sum' */
  real_T Saturation_a;                 /* '<S32>/Saturation' */
  real_T ZeroOrderHold3;               /* '<S32>/Zero-Order Hold3' */
  real_T e;                            /* '<S43>/Sum1' */
  real_T Product1;                     /* '<S43>/Product1' */
  real_T ProportionalGain;             /* '<S43>/Proportional  Gain' */
  real_T TmpRTBAtSum4Inport2;          /* '<S43>/Saturation' */
  real_T Sum4;                         /* '<S43>/Sum4' */
  real_T Product2;                     /* '<S43>/Product2' */
  real_T c1;                           /* '<S43>/c1' */
  real_T LeftTiltMotor_SpeedReqrpm;    /* '<S32>/Gain1' */
  real_T Switch1;                      /* '<S31>/Switch1' */
  real_T Switch2;                      /* '<S31>/Switch2' */
  real_T TmpRTBAtSwitchInport1;
  real_T Switch;                       /* '<S31>/Switch' */
  real_T CastToSingle;                 /* '<S30>/Cast To Single' */
  real_T Memory1;                      /* '<S30>/Memory1' */
  real_T CastToSingle1;                /* '<S30>/Cast To Single1' */
  real_T TmpRTBAtPControllerInport1;   /* '<S30>/Cast To Single' */
  real_T TmpRTBAtPControllerInport2;   /* '<S30>/Cast To Single1' */
  real_T Sum_p;                        /* '<S30>/Sum' */
  real_T DirectionFb;                  /* '<S30>/inc2deg' */
  real_T Clock;                        /* '<S45>/Clock' */
  real_T Sum_f;                        /* '<S45>/Sum' */
  real_T MathFunction;                 /* '<S45>/Math Function' */
  real_T LookUpTable1;                 /* '<S45>/Look-Up Table1' */
  real_T Output;                       /* '<S45>/Output' */
  real_T CastToSingle_p;               /* '<S32>/Cast To Single' */
  real_T CastToSingle1_a;              /* '<S32>/Cast To Single1' */
  real_T TiltingAngle_sinreqdeg;       /* '<S32>/Sine Wave1' */
  real_T ManualSwitch3;                /* '<S32>/Manual Switch3' */
  real_T TmpRTBAtZeroOrderHold1Inport1;/* '<S32>/Manual Switch3' */
  real_T TiltingAngle_stepreqfdeg_p;   /* '<S32>/Zero-Order Hold1' */
  real_T PosReqm;                      /* '<S32>/degree2m' */
  real_T kd;                           /* '<S43>/Derivative Gain' */
  real_T TmpRTBAtDerivativeInport1;    /* '<S43>/Product1' */
  real_T TSamp;                        /* '<S49>/TSamp' */
  real_T Uk1;                          /* '<S49>/UD' */
  real_T Diff;                         /* '<S49>/Diff' */
  real_T IntegralGain;                 /* '<S43>/Integral Gain' */
  real_T TmpRTBAtSum2Inport2;          /* '<S43>/Zero-Order Hold' */
  real_T Sum2_d;                       /* '<S43>/Sum2' */
  real_T TmpRTBAtDiscreteTimeIntegratorI;/* '<S43>/Sum2' */
  real_T Integral;                     /* '<S43>/Discrete-Time Integrator' */
  real_T Derivative_sat;               /* '<S43>/Saturation1' */
  real_T Delay;                        /* '<S43>/Delay' */
  real_T ZeroOrderHold;                /* '<S43>/Zero-Order Hold' */
  real_T Saturation_c;                 /* '<S43>/Saturation' */
  real_T Sum_c;                        /* '<S43>/Sum' */
  real_T AntiWindup;                   /* '<S43>/AntiWindup' */
  real_T TmpRTBAtDelayInport1;         /* '<S43>/AntiWindup' */
  real_T Memory1_l;                    /* '<S40>/Memory1' */
  real_T DispLeftOffsetVolt;           /* '<S40>/Sum' */
  real_T DispLeftm;                    /* '<S40>/Volt2meter' */
  real_T DispLeftm_k;                  /* '<S40>/Volt2meter' */
  real_T DiscreteFilter;               /* '<S40>/Discrete Filter' */
  real_T VehSpeed_Kmh;                 /* '<S33>/m//s2Km//h' */
  real_T Button;                       /* '<S27>/ButtonStatus' */
  real_T APT_CtrlWord;                 /* '<S27>/APTControlWord' */
  real_T TiltingAngle;                 /* '<S32>/ServoTilting' */
  real_T Proportional;                 /* '<S43>/Moving Average2' */
  real_T kd_ma;                        /* '<S43>/Moving Average1' */
  real_T Fb_Angle_Filtdeg;             /* '<S32>/Moving Average' */
  real_T ManualSwitch4;                /* '<S32>/Manual Switch4' */
  real_T Sum4_e;                       /* '<S29>/Sum4' */
  real_T CastToSingle1_e;              /* '<S33>/Cast To Single1' */
  real_T Gain1_e;                      /* '<S33>/Gain1' */
  real_T TractionReq;                  /* '<S33>/Abs' */
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
  real32_T Joystick_LongCmd;           /* '<S10>/RPDOs from Joystick' */
  real32_T Joystick_LatCmd;            /* '<S10>/RPDOs from Joystick' */
  real32_T CastToSingle3_p;            /* '<S27>/Cast To Single3' */
  real32_T Constant;                   /* '<S59>/Constant' */
  real32_T Constant_m;                 /* '<S60>/Constant' */
  real32_T Constant_e;                 /* '<S61>/Constant' */
  real32_T Constant_g;                 /* '<S55>/Constant' */
  real32_T Sum_b;                      /* '<S57>/Sum' */
  real32_T Delay_o;                    /* '<S36>/Delay' */
  real32_T DataTypeConversion1;        /* '<S36>/Data Type Conversion1' */
  real32_T Sum1;                       /* '<S36>/Sum1' */
  real32_T CastToSingle_e;             /* '<S26>/Cast To Single' */
  real32_T dem;                        /* '<S30>/dem' */
  real32_T DirectionReq;               /* '<S30>/Robotics Convention' */
  real32_T SteeringAnglerad;           /* '<S30>/degree2rad' */
  real32_T n;                          /* '<S32>/n' */
  real32_T ClearError;                 /* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T DeviceMode;                 /* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T BrakeCtrl;                  /* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T PowerEnable;                /* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T InitStatus;                 /* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T ClearError_h;               /* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T DeviceMode_f;               /* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T BrakeCtrl_m;                /* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T PowerEnable_m;              /* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T InitStatus_k;               /* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T ClearError_n;               /* '<S59>/DunkA_Steering_Init_SpeedMode' */
  real32_T DeviceMode_o;               /* '<S59>/DunkA_Steering_Init_SpeedMode' */
  real32_T BrakeCtrl_b;                /* '<S59>/DunkA_Steering_Init_SpeedMode' */
  real32_T PowerEnable_a;              /* '<S59>/DunkA_Steering_Init_SpeedMode' */
  real32_T InitStatus_f;               /* '<S59>/DunkA_Steering_Init_SpeedMode' */
  real32_T Enable;                     /* '<S27>/EnableCtrl' */
  real32_T ClearError_k;               /* '<S55>/DunkD_Brake_Init_CurrentMode' */
  real32_T DeviceMode_b;               /* '<S55>/DunkD_Brake_Init_CurrentMode' */
  real32_T BrakeCtrl_n;                /* '<S55>/DunkD_Brake_Init_CurrentMode' */
  real32_T PowerEnable_au;             /* '<S55>/DunkD_Brake_Init_CurrentMode' */
  real32_T BrakesMotor_CurrentInit;    /* '<S55>/DunkD_Brake_Init_CurrentMode' */
  real32_T InitStatus_a;               /* '<S55>/DunkD_Brake_Init_CurrentMode' */
  real32_T ud;                         /* '<S43>/Derivative' */
  real32_T yf;                         /* '<S43>/Derivative' */
  real32_T Br_CurrentReq;              /* '<S36>/Retract' */
  int32_T DispLeftVolt;                /* '<S40>/LSB2Volt' */
  int32_T BrakesMotor_CurrentInitmA;   /* '<S29>/Gain5' */
  int32_T DunkD_ActualCurrent;         /* '<S4>/RPDOs from Dunker #1' */
  int32_T DunkD_ActualVelocity;        /* '<S4>/RPDOs from Dunker #1' */
  int32_T DunkD_TPDO_DesiredCurrent;   /* '<S23>/Data Type Conversion36' */
  int32_T DunkC_ActualCurrent;         /* '<S5>/RPDOs from Dunker #1' */
  int32_T DunkC_ActualVelocity;        /* '<S5>/RPDOs from Dunker #1' */
  int32_T DunkC_TPDO_DesiredCurrent;   /* '<S23>/Data Type Conversion31' */
  int32_T DunkB_ActualCurrent;         /* '<S6>/RPDOs from Dunker #1' */
  int32_T DunkB_ActualVelocity;        /* '<S6>/RPDOs from Dunker #1' */
  int32_T DunkB_TPDO_DesiredCurrent;   /* '<S23>/Data Type Conversion26' */
  int32_T DunkA_ActualCurrent;         /* '<S7>/RPDOs from Dunker #1' */
  int32_T DunkA_ActualVelocity;        /* '<S7>/RPDOs from Dunker #1' */
  int32_T DunkA_TPDO_DesiredCurrent;   /* '<S23>/Data Type Conversion8' */
  int32_T Product2_a;                  /* '<S32>/Product2' */
  int32_T TmpRTBAtZeroOrderHold2Inport1;/* '<S32>/Product2' */
  int32_T ZeroOrderHold2;              /* '<S32>/Zero-Order Hold2' */
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
  int16_T CurrentInit;                 /* '<S55>/Cast To Single4' */
  uint8_T CANRead_o3;                  /* '<S19>/CAN Read' */
  uint8_T CANRead_o4;                  /* '<S19>/CAN Read' */
  uint8_T CANRead_o6[8];               /* '<S19>/CAN Read' */
  uint8_T Switch_c;                    /* '<S19>/Switch' */
  uint8_T CCaller_o2;                  /* '<S17>/C Caller' */
  uint8_T CCaller_o3[8];               /* '<S17>/C Caller' */
  uint8_T CANRead_o3_m;                /* '<S21>/CAN Read' */
  uint8_T CANRead_o4_a;                /* '<S21>/CAN Read' */
  uint8_T CANRead_o6_h[8];             /* '<S21>/CAN Read' */
  uint8_T Switch_g;                    /* '<S21>/Switch' */
  uint8_T CCaller_o2_n;                /* '<S18>/C Caller' */
  uint8_T CCaller_o3_n[8];             /* '<S18>/C Caller' */
  uint8_T APT_StatusWord;              /* '<S2>/RPDOs from APT' */
  uint8_T APT_ErrStatus;               /* '<S2>/RPDOs from APT' */
  uint8_T APT_Direction;               /* '<S2>/RPDOs from APT' */
  uint8_T Joystick_ButtonsStatus;      /* '<S10>/RPDOs from Joystick' */
  uint8_T APT_TPDO_ControlWord;        /* '<S24>/Data Type Conversion' */
  uint8_T APT_TPDO_PedalPosition;      /* '<S24>/Data Type Conversion1' */
  uint8_T APT_TPDO_Heartbeat;          /* '<S24>/Data Type Conversion2' */
  uint8_T Enable_c;                    /* '<S3>/Constant' */
  uint8_T BrakeCtrl_k;                 /* '<S55>/Cast To Single2' */
  uint8_T DunkD_TPDO_BrakeCtrl;        /* '<S23>/Data Type Conversion33' */
  uint8_T ClearError_m;                /* '<S55>/Cast To Single1' */
  uint8_T DunkD_TPDO_ClearError;       /* '<S23>/Data Type Conversion32' */
  uint8_T DeviceMode_g;                /* '<S55>/Cast To Single' */
  uint8_T DunkD_TPDO_DeviceMode;       /* '<S23>/Data Type Conversion34' */
  uint8_T PowerEnable_p;               /* '<S55>/Cast To Single3' */
  uint8_T DunkD_TPDO_PowerEnable;      /* '<S23>/Data Type Conversion35' */
  uint8_T xS;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T xH;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T xL;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T yS;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T yH;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T yL;                          /* '<S9>/RPDOs from Inclinometer ' */
  uint8_T ClearError_j;                /* '<S60>/Cast To Single1' */
  uint8_T DunkC_TPDO_ClearError;       /* '<S23>/Data Type Conversion27' */
  uint8_T DeviceMode_h;                /* '<S60>/Cast To Single' */
  uint8_T DunkC_TPDO_DeviceMode;       /* '<S23>/Data Type Conversion29' */
  uint8_T PowerEnable_ar;              /* '<S60>/Cast To Single3' */
  uint8_T DunkC_TPDO_PowerEnable;      /* '<S23>/Data Type Conversion30' */
  uint8_T BrakeCtrl_bj;                /* '<S60>/Cast To Single2' */
  uint8_T DunkC_TPDO_BrakeCtrl;        /* '<S23>/Data Type Conversion28' */
  uint8_T ClearError_jv;               /* '<S61>/Cast To Single1' */
  uint8_T DunkB_TPDO_ClearError;       /* '<S23>/Data Type Conversion22' */
  uint8_T DeviceMode_d;                /* '<S61>/Cast To Single' */
  uint8_T DunkB_TPDO_DeviceMode;       /* '<S23>/Data Type Conversion24' */
  uint8_T PowerEnable_i;               /* '<S61>/Cast To Single3' */
  uint8_T DunkB_TPDO_PowerEnable;      /* '<S23>/Data Type Conversion25' */
  uint8_T BrakeCtrl_k0;                /* '<S61>/Cast To Single2' */
  uint8_T DunkB_TPDO_BrakeCtrl;        /* '<S23>/Data Type Conversion23' */
  uint8_T ClearError_mc;               /* '<S59>/Cast To Single1' */
  uint8_T DunkA_TPDO_ClearError;       /* '<S23>/Data Type Conversion3' */
  uint8_T DeviceMode_e;                /* '<S59>/Cast To Single' */
  uint8_T DunkA_TPDO_DeviceMode;       /* '<S23>/Data Type Conversion6' */
  uint8_T PowerEnable_i4;              /* '<S59>/Cast To Single3' */
  uint8_T DunkA_TPDO_PowerEnable;      /* '<S23>/Data Type Conversion7' */
  uint8_T BrakeCtrl_mu;                /* '<S59>/Cast To Single2' */
  uint8_T DunkA_TPDO_BrakeCtrl;        /* '<S23>/Data Type Conversion4' */
  uint8_T Enable_l;                    /* '<S9>/Constant' */
  uint8_T BrakeCtrl_b4;                /* '<S29>/DecisionBrakeCtrl' */
  uint8_T Constant_em;                 /* '<S22>/Constant' */
  uint8_T Constant_ge;                 /* '<S20>/Constant' */
  int8_T APT_MotorTemp;                /* '<S2>/RPDOs from APT' */
  int8_T APT_Temp;                     /* '<S2>/RPDOs from APT' */
  boolean_T CANRead_o1;                /* '<S19>/CAN Read' */
  boolean_T CANRead_o1_b;              /* '<S21>/CAN Read' */
  boolean_T Compare;                   /* '<S63>/Compare' */
  boolean_T TmpRTBAtProduct2Inport1;
  boolean_T TmpRTBAtProduct1Inport1;
  boolean_T TmpRTBAtProduct2Inport1_m; /* '<S32>/Zero-Order Hold' */
  boolean_T En;
  boolean_T ZeroOrderHold_k;           /* '<S32>/Zero-Order Hold' */
} B_SpeedgoatCANOpen2Buses100us_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_private_SlidingWindowAv_i_T gobj_0;/* '<S32>/Moving Average' */
  dsp_private_SlidingWindowAv_i_T gobj_1;/* '<S32>/Moving Average' */
  dsp_simulink_MovingAverage_Sp_T obj; /* '<S43>/Moving Average2' */
  dsp_simulink_MovingAverage_Sp_T obj_c;/* '<S30>/Moving Average' */
  dsp_simulink_MovingAverage_i_T obj_b;/* '<S32>/Moving Average' */
  dsp_simulink_MovingAverage_il_T obj_bz;/* '<S43>/Moving Average1' */
  dsp_private_SlidingWindowA_il_T gobj_0_a;/* '<S43>/Moving Average1' */
  dsp_private_SlidingWindowA_il_T gobj_1_k;/* '<S43>/Moving Average1' */
  real_T UD_DSTATE;                    /* '<S49>/UD' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S43>/Discrete-Time Integrator' */
  real_T Delay_DSTATE;                 /* '<S43>/Delay' */
  real_T DiscreteFilter_states[2];     /* '<S40>/Discrete Filter' */
  real_T Sum_DWORK1;                   /* '<S36>/Sum' */
  real_T TiltingAngle_stepreqfdeg_Buf[3];/* synthesized block */
  real_T TmpRTBAtSum4Inport2_Buf[3];   /* synthesized block */
  real_T TmpRTBAtSwitchInport1_Buf[3]; /* synthesized block */
  real_T Memory1_PreviousInput;        /* '<S30>/Memory1' */
  real_T TmpRTBAtPControllerInport1_Buf0;/* synthesized block */
  real_T TmpRTBAtPControllerInport1_Buf1;/* synthesized block */
  real_T TmpRTBAtPControllerInport1_Buf2;/* synthesized block */
  real_T TmpRTBAtPControllerInport2_Buf0;/* synthesized block */
  real_T TmpRTBAtPControllerInport2_Buf1;/* synthesized block */
  real_T TmpRTBAtPControllerInport2_Buf2;/* synthesized block */
  real_T TmpRTBAtZeroOrderHold1Inport1_B;/* synthesized block */
  real_T TmpRTBAtZeroOrderHold1Inport1_j;/* synthesized block */
  real_T TmpRTBAtZeroOrderHold1Inport_jr;/* synthesized block */
  real_T TmpRTBAtDerivativeInport1_Buf0;/* synthesized block */
  real_T TmpRTBAtDerivativeInport1_Buf1;/* synthesized block */
  real_T TmpRTBAtDerivativeInport1_Buf2;/* synthesized block */
  real_T TmpRTBAtSum2Inport2_Buf[3];   /* synthesized block */
  real_T TmpRTBAtDiscreteTimeIntegratorI;/* synthesized block */
  real_T TmpRTBAtDiscreteTimeIntegrato_k;/* synthesized block */
  real_T TmpRTBAtDiscreteTimeIntegrato_b;/* synthesized block */
  real_T TmpRTBAtDelayInport1_Buf[3];  /* synthesized block */
  real_T Memory1_PreviousInput_b;      /* '<S40>/Memory1' */
  real_T DispLeftm_Buf0;               /* synthesized block */
  real_T DispLeftm_Buf1;               /* synthesized block */
  real_T DispLeftm_Buf2;               /* synthesized block */
  real_T DiscreteFilter_tmp;           /* '<S40>/Discrete Filter' */
  real_T Neutral_State;                /* '<S29>/DecisionBrakeCtrl' */
  real_T Parking_Brake;                /* '<S29>/DecisionBrakeCtrl' */
  real_T tact;                         /* '<S24>/HeartBeatgenerator' */
  real_T Heartbeat;                    /* '<S24>/HeartBeatgenerator' */
  int64_T RightTiltMotor_CurrentReqmA_Buf[3];/* synthesized block */
  dsp_private_SlidingWindowAver_T gobj_0_d;/* '<S43>/Moving Average2' */
  dsp_private_SlidingWindowAver_T gobj_1_i;/* '<S43>/Moving Average2' */
  dsp_private_SlidingWindowAver_T gobj_0_j;/* '<S30>/Moving Average' */
  dsp_private_SlidingWindowAver_T gobj_1_f;/* '<S30>/Moving Average' */
  void *CANSetup_PWORK;                /* '<S15>/CAN Setup ' */
  void *CANRead_PWORK;                 /* '<S19>/CAN Read' */
  void *CANRead_PWORK_p;               /* '<S21>/CAN Read' */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_i;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_k;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_n;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_b;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_id;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_j;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedFo_o;   /* synthesized block */

  void* TmpRTBAtProduct2Inport1_d0_SEMA;/* synthesized block */
  void* TmpRTBAtProduct1Inport1_d0_SEMA;/* synthesized block */
  void* TiltingAngle_stepreqfdeg_d0_SEM;/* synthesized block */
  void* TmpRTBAtSum4Inport2_d0_SEMAPHOR;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mu;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_pla;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ol;   /* synthesized block */

  void* RightTiltMotor_CurrentReqmA_d0_;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ol5;   /* synthesized block */

  void* TmpRTBAtSwitchInport1_d0_SEMAPH;/* synthesized block */
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
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_l;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_li;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_g;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedFo_f;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_l5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ld;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cv;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_e;   /* synthesized block */

  void* TmpRTBAtPControllerInport1_d0_S;/* synthesized block */
  void* TmpRTBAtPControllerInport2_d0_S;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_l2;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_a;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_mza;   /* synthesized block */

  void* TmpRTBAtProduct2Inport1_d0_SE_n;/* synthesized block */
  void* TmpRTBAtZeroOrderHold2Inport1_d;/* synthesized block */
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
  } HiddenToAsyncQueue_InsertedF_pe;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_jr;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pc;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_px;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ew;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_eo;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ij;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bp;   /* synthesized block */

  void* TmpRTBAtZeroOrderHold1Inport1_d;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_oe;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pg;   /* synthesized block */

  void* EnableControl_d0_SEMAPHORE;    /* synthesized block */
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
  } HiddenToAsyncQueue_InsertedF_po;   /* synthesized block */

  void* TmpRTBAtDerivativeInport1_d0_SE;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_b5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pz;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_g1;   /* synthesized block */

  void* TmpRTBAtSum2Inport2_d0_SEMAPHOR;/* synthesized block */
  void* TmpRTBAtDiscreteTimeIntegrat_bg;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_my;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_m3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cn;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_az;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ko;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ej;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_jis;   /* synthesized block */

  void* TmpRTBAtDelayInport1_d0_SEMAPHO;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_mui;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_d3;   /* synthesized block */

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
  } HiddenToAsyncQueue_Inserted_ijl;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_d3q;   /* synthesized block */

  void* DispLeftm_d0_SEMAPHORE;        /* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_j5;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedF_mt;   /* synthesized block */

  void *CANWrite_PWORK;                /* '<S22>/CAN Write' */
  void *CANWrite_PWORK_e;              /* '<S20>/CAN Write' */
  real32_T Delay_DSTATE_f[2];          /* '<S36>/Delay' */
  real32_T aux2;                       /* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T aux;                        /* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  real32_T aux2_k;                     /* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T aux_a;                      /* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  real32_T aux2_p;                     /* '<S59>/DunkA_Steering_Init_SpeedMode' */
  real32_T aux_j;                      /* '<S59>/DunkA_Steering_Init_SpeedMode' */
  real32_T aux2_l;                     /* '<S55>/DunkD_Brake_Init_CurrentMode' */
  real32_T aux_k;                      /* '<S55>/DunkD_Brake_Init_CurrentMode' */
  real32_T yf_k1;                      /* '<S43>/Derivative' */
  int32_T TmpRTBAtZeroOrderHold2Inport1_B;/* synthesized block */
  int32_T TmpRTBAtZeroOrderHold2Inport1_m;/* synthesized block */
  int32_T TmpRTBAtZeroOrderHold2Inport1_k;/* synthesized block */
  int32_T sfEvent;                     /* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  int32_T sfEvent_c;                   /* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  int32_T sfEvent_a;                   /* '<S59>/DunkA_Steering_Init_SpeedMode' */
  int32_T sfEvent_n;                   /* '<S27>/EnableCtrl' */
  int32_T sfEvent_j;                   /* '<S55>/DunkD_Brake_Init_CurrentMode' */
  int32_T sfEvent_h;                   /* '<S36>/Retract' */
  int32_T sfEvent_e;                   /* '<S29>/DecisionBrakeCtrl' */
  uint16_T temporalCounter_i1;         /* '<S36>/Retract' */
  int8_T TmpRTBAtProduct2Inport1_LstBufW;/* synthesized block */
  int8_T TmpRTBAtProduct2Inport1_RDBuf;/* synthesized block */
  int8_T TmpRTBAtProduct1Inport1_LstBufW;/* synthesized block */
  int8_T TmpRTBAtProduct1Inport1_RDBuf;/* synthesized block */
  int8_T TiltingAngle_stepreqfdeg_LstBuf;/* synthesized block */
  int8_T TiltingAngle_stepreqfdeg_RDBuf;/* synthesized block */
  int8_T TmpRTBAtSum4Inport2_LstBufWR; /* synthesized block */
  int8_T TmpRTBAtSum4Inport2_RDBuf;    /* synthesized block */
  int8_T RightTiltMotor_CurrentReqmA_Lst;/* synthesized block */
  int8_T RightTiltMotor_CurrentReqmA_RDB;/* synthesized block */
  int8_T TmpRTBAtSwitchInport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitchInport1_RDBuf;  /* synthesized block */
  int8_T TmpRTBAtPControllerInport1_LstB;/* synthesized block */
  int8_T TmpRTBAtPControllerInport1_RDBu;/* synthesized block */
  int8_T TmpRTBAtPControllerInport2_LstB;/* synthesized block */
  int8_T TmpRTBAtPControllerInport2_RDBu;/* synthesized block */
  int8_T TmpRTBAtProduct2Inport1_LstBu_p;/* synthesized block */
  int8_T TmpRTBAtProduct2Inport1_RDBuf_c;/* synthesized block */
  int8_T TmpRTBAtZeroOrderHold2Inport1_L;/* synthesized block */
  int8_T TmpRTBAtZeroOrderHold2Inport1_R;/* synthesized block */
  int8_T TmpRTBAtZeroOrderHold1Inport1_L;/* synthesized block */
  int8_T TmpRTBAtZeroOrderHold1Inport1_R;/* synthesized block */
  int8_T EnableControl_LstBufWR;       /* synthesized block */
  int8_T EnableControl_RDBuf;          /* synthesized block */
  int8_T TmpRTBAtDerivativeInport1_LstBu;/* synthesized block */
  int8_T TmpRTBAtDerivativeInport1_RDBuf;/* synthesized block */
  int8_T TmpRTBAtSum2Inport2_LstBufWR; /* synthesized block */
  int8_T TmpRTBAtSum2Inport2_RDBuf;    /* synthesized block */
  int8_T TmpRTBAtDiscreteTimeIntegrato_e;/* synthesized block */
  int8_T TmpRTBAtDiscreteTimeIntegrato_l;/* synthesized block */
  int8_T TmpRTBAtDelayInport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtDelayInport1_RDBuf;   /* synthesized block */
  int8_T DispLeftm_LstBufWR;           /* synthesized block */
  int8_T DispLeftm_RDBuf;              /* synthesized block */
  int8_T CANTXWrapper_SubsysRanBC;     /* '<S18>/CAN TX Wrapper' */
  int8_T CANTXWrapper_SubsysRanBC_f;   /* '<S17>/CAN TX Wrapper' */
  uint8_T is_active_c1_SpeedgoatCANOpen2B;/* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  uint8_T is_c1_SpeedgoatCANOpen2Buses100;/* '<S61>/DunkB_TiltRight_Init_CurrentMode' */
  uint8_T is_active_c2_SpeedgoatCANOpen2B;/* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  uint8_T is_c2_SpeedgoatCANOpen2Buses100;/* '<S60>/DunkC_TiltLeft_Init_CurrentMode' */
  uint8_T is_active_c12_SpeedgoatCANOpen2;/* '<S59>/DunkA_Steering_Init_SpeedMode' */
  uint8_T is_c12_SpeedgoatCANOpen2Buses10;/* '<S59>/DunkA_Steering_Init_SpeedMode' */
  uint8_T is_active_c4_SpeedgoatCANOpen2B;/* '<S27>/EnableCtrl' */
  uint8_T is_c4_SpeedgoatCANOpen2Buses100;/* '<S27>/EnableCtrl' */
  uint8_T is_active_c3_SpeedgoatCANOpen2B;/* '<S55>/DunkD_Brake_Init_CurrentMode' */
  uint8_T is_c3_SpeedgoatCANOpen2Buses100;/* '<S55>/DunkD_Brake_Init_CurrentMode' */
  uint8_T is_active_c5_SpeedgoatCANOpen2B;/* '<S36>/Retract' */
  uint8_T is_c5_SpeedgoatCANOpen2Buses100;/* '<S36>/Retract' */
  uint8_T is_active_c13_SpeedgoatCANOpen2;/* '<S29>/DecisionBrakeCtrl' */
  uint8_T is_c13_SpeedgoatCANOpen2Buses10;/* '<S29>/DecisionBrakeCtrl' */
  boolean_T TmpRTBAtProduct2Inport1_Buf[3];/* synthesized block */
  boolean_T TmpRTBAtProduct1Inport1_Buf[3];/* synthesized block */
  boolean_T TmpRTBAtProduct2Inport1_Buf_j[3];/* synthesized block */
  boolean_T EnableControl_Buf0;        /* synthesized block */
  boolean_T EnableControl_Buf1;        /* synthesized block */
  boolean_T EnableControl_Buf2;        /* synthesized block */
  boolean_T objisempty;                /* '<S43>/Moving Average2' */
  boolean_T objisempty_n;              /* '<S43>/Moving Average1' */
  boolean_T objisempty_f;              /* '<S32>/Moving Average' */
  boolean_T objisempty_h;              /* '<S30>/Moving Average' */
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
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S49>/UD'
                                          */
  real_T PID_ctrl1_Kd;                 /* Mask Parameter: PID_ctrl1_Kd
                                        * Referenced by: '<S43>/Derivative Gain'
                                        */
  real_T PID_ctrl1_Ki;                 /* Mask Parameter: PID_ctrl1_Ki
                                        * Referenced by:
                                        *   '<S43>/AntiWindup'
                                        *   '<S43>/Integral Gain'
                                        */
  real_T PID_ctrl1_Kp;                 /* Mask Parameter: PID_ctrl1_Kp
                                        * Referenced by:
                                        *   '<S43>/AntiWindup'
                                        *   '<S43>/Proportional  Gain'
                                        */
  real_T PID_ctrl1_Req_lim;            /* Mask Parameter: PID_ctrl1_Req_lim
                                        * Referenced by:
                                        *   '<S43>/Saturation'
                                        *   '<S43>/Saturation1'
                                        */
  real_T RepeatingSequence1_rep_seq_y[8];/* Mask Parameter: RepeatingSequence1_rep_seq_y
                                          * Referenced by: '<S45>/Look-Up Table1'
                                          */
  real32_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S63>/Constant'
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
  real_T Gain1_Gain;                   /* Expression: 1/10
                                        * Referenced by: '<S33>/Gain1'
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
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<S16>/Sine Wave'
                                        */
  real_T SineWave1_Amp;                /* Expression: 5000
                                        * Referenced by: '<S16>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 2500
                                        * Referenced by: '<S16>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: 4
                                        * Referenced by: '<S16>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: 0
                                        * Referenced by: '<S16>/Sine Wave1'
                                        */
  real_T SineWave3_Amp;                /* Expression: 5000
                                        * Referenced by: '<S16>/Sine Wave3'
                                        */
  real_T SineWave3_Bias;               /* Expression: 2500
                                        * Referenced by: '<S16>/Sine Wave3'
                                        */
  real_T SineWave3_Freq;               /* Expression: 4
                                        * Referenced by: '<S16>/Sine Wave3'
                                        */
  real_T SineWave3_Phase;              /* Expression: 0
                                        * Referenced by: '<S16>/Sine Wave3'
                                        */
  real_T SineWave2_Amp;                /* Expression: 5000
                                        * Referenced by: '<S16>/Sine Wave2'
                                        */
  real_T SineWave2_Bias;               /* Expression: 2500
                                        * Referenced by: '<S16>/Sine Wave2'
                                        */
  real_T SineWave2_Freq;               /* Expression: 4
                                        * Referenced by: '<S16>/Sine Wave2'
                                        */
  real_T SineWave2_Phase;              /* Expression: 0
                                        * Referenced by: '<S16>/Sine Wave2'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T offset_Value;                 /* Expression: 3600
                                        * Referenced by: '<S36>/offset'
                                        */
  real_T GetInPercent_Gain;            /* Expression: 0.00015625
                                        * Referenced by: '<S36>/GetInPercent'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S36>/Gain2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 12.7
                                        * Referenced by: '<S36>/Gain1'
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
  real_T Gain2_Gain_k;                 /* Expression: pi/30
                                        * Referenced by: '<S33>/Gain2'
                                        */
  real_T WheelRadius_Gain;             /* Expression: 0.25
                                        * Referenced by: '<S33>/WheelRadius'
                                        */
  real_T TiltingAngle_stepreqfdeg_Initia;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Offset_Value;                 /* Expression: 0
                                        * Referenced by: '<S32>/Offset'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 30
                                        * Referenced by: '<S32>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: -30
                                        * Referenced by: '<S32>/Saturation'
                                        */
  real_T TmpRTBAtSum4Inport2_InitialCond;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T c1_Gain;                      /* Expression: -1
                                        * Referenced by: '<S43>/c1'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: -1
                                        * Referenced by: '<S32>/Gain1'
                                        */
  real_T TmpRTBAtSwitchInport1_InitialCo;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S30>/Memory1'
                                        */
  real_T Offsetto0pospos180180deg_Value;/* Expression: 2048
                                         * Referenced by: '<S30>/Offset to 0 pos => pos = [-180 180]deg'
                                         */
  real_T TmpRTBAtPControllerInport1_Init;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtPControllerInport2_Init;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T inc2deg_Gain;                 /* Expression: 180/2048
                                        * Referenced by: '<S30>/inc2deg'
                                        */
  real_T Constant_Value_c;             /* Expression: period
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T LookUpTable1_bp01Data[8];     /* Expression: rep_seq_t - min(rep_seq_t)
                                        * Referenced by: '<S45>/Look-Up Table1'
                                        */
  real_T SineWave1_Amp_n;              /* Expression: 2
                                        * Referenced by: '<S32>/Sine Wave1'
                                        */
  real_T SineWave1_Bias_n;             /* Expression: 0
                                        * Referenced by: '<S32>/Sine Wave1'
                                        */
  real_T SineWave1_Freq_d;             /* Expression: 0.5
                                        * Referenced by: '<S32>/Sine Wave1'
                                        */
  real_T SineWave1_Phase_m;            /* Expression: 0
                                        * Referenced by: '<S32>/Sine Wave1'
                                        */
  real_T TmpRTBAtZeroOrderHold1Inport1_I;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T degree2m_Gain;                /* Expression: 0.00246
                                        * Referenced by: '<S32>/degree2m'
                                        */
  real_T TmpRTBAtDerivativeInport1_Initi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S49>/TSamp'
                                        */
  real_T TmpRTBAtSum2Inport2_InitialCond;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T TmpRTBAtDiscreteTimeIntegratorI;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S43>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S43>/Discrete-Time Integrator'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S43>/Delay'
                                        */
  real_T TmpRTBAtDelayInport1_InitialCon;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Memory1_InitialCondition_k;   /* Expression: 0
                                        * Referenced by: '<S40>/Memory1'
                                        */
  real_T Offsetfor0deg_Value;          /* Expression: 3.34249
                                        * Referenced by: '<S40>/Offset for 0 deg'
                                        */
  real_T Volt2meter_Gain;              /* Expression: 0.076/5
                                        * Referenced by: '<S40>/Volt2meter'
                                        */
  real_T DispLeftm_InitialCondition;   /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T DiscreteFilter_NumCoef[3];    /* Expression: [0.0201 0.0402 0.0201]
                                        * Referenced by: '<S40>/Discrete Filter'
                                        */
  real_T DiscreteFilter_DenCoef[3];    /* Expression: [1 -1.561 0.6414]
                                        * Referenced by: '<S40>/Discrete Filter'
                                        */
  real_T DiscreteFilter_InitialStates; /* Expression: 0
                                        * Referenced by: '<S40>/Discrete Filter'
                                        */
  real_T ms2Kmh_Gain;                  /* Expression: 3.6
                                        * Referenced by: '<S33>/m//s2Km//h'
                                        */
  int64_T RightTiltMotor_CurrentReqmA_Ini;/* Computed Parameter: RightTiltMotor_CurrentReqmA_Ini
                                           * Referenced by: synthesized block
                                           */
  int32_T TmpRTBAtZeroOrderHold2Inport1_I;/* Computed Parameter: TmpRTBAtZeroOrderHold2Inport1_I
                                           * Referenced by: synthesized block
                                           */
  int32_T Gain1_Gain_j;                /* Computed Parameter: Gain1_Gain_j
                                        * Referenced by: '<S5>/Gain1'
                                        */
  int32_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S5>/Gain'
                                        */
  int32_T Gain_Gain_l;                 /* Computed Parameter: Gain_Gain_l
                                        * Referenced by: '<S32>/Gain'
                                        */
  real32_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S59>/Constant'
                                        */
  real32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S60>/Constant'
                                        */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S61>/Constant'
                                        */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S55>/Constant'
                                        */
  real32_T Delay_InitialCondition_m;   /* Computed Parameter: Delay_InitialCondition_m
                                        * Referenced by: '<S36>/Delay'
                                        */
  real32_T dem_Gain;                   /* Computed Parameter: dem_Gain
                                        * Referenced by: '<S30>/dem'
                                        */
  real32_T RoboticsConvention_Gain;    /* Computed Parameter: RoboticsConvention_Gain
                                        * Referenced by: '<S30>/Robotics Convention'
                                        */
  real32_T degree2rad_Gain;            /* Computed Parameter: degree2rad_Gain
                                        * Referenced by: '<S30>/degree2rad'
                                        */
  real32_T n_Gain;                     /* Computed Parameter: n_Gain
                                        * Referenced by: '<S32>/n'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S36>/Delay'
                                        */
  uint32_T Delay_DelayLength_c;        /* Computed Parameter: Delay_DelayLength_c
                                        * Referenced by: '<S43>/Delay'
                                        */
  int16_T Gain5_Gain;                  /* Computed Parameter: Gain5_Gain
                                        * Referenced by: '<S29>/Gain5'
                                        */
  int16_T LSB2Volt_Gain;               /* Computed Parameter: LSB2Volt_Gain
                                        * Referenced by: '<S40>/LSB2Volt'
                                        */
  uint16_T Saturation1_UpperSat;       /* Computed Parameter: Saturation1_UpperSat
                                        * Referenced by: '<S36>/Saturation1'
                                        */
  uint16_T Saturation1_LowerSat;       /* Computed Parameter: Saturation1_LowerSat
                                        * Referenced by: '<S36>/Saturation1'
                                        */
  boolean_T TmpRTBAtProduct2Inport1_Initial;/* Computed Parameter: TmpRTBAtProduct2Inport1_Initial
                                             * Referenced by: synthesized block
                                             */
  boolean_T TmpRTBAtProduct1Inport1_Initial;/* Computed Parameter: TmpRTBAtProduct1Inport1_Initial
                                             * Referenced by: synthesized block
                                             */
  boolean_T TmpRTBAtProduct2Inport1_Initi_j;/* Computed Parameter: TmpRTBAtProduct2Inport1_Initi_j
                                             * Referenced by: synthesized block
                                             */
  boolean_T EnableControl_InitialCondition;/* Computed Parameter: EnableControl_InitialCondition
                                            * Referenced by: synthesized block
                                            */
  uint8_T Constant_Value_k;            /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S20>/Constant'
                                        */
  uint8_T Constant_Value_nv;           /* Computed Parameter: Constant_Value_nv
                                        * Referenced by: '<S22>/Constant'
                                        */
  uint8_T ManualSwitch4_CurrentSetting;/* Computed Parameter: ManualSwitch4_CurrentSetting
                                        * Referenced by: '<S32>/Manual Switch4'
                                        */
  uint8_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S19>/Switch'
                                        */
  uint8_T Switch_Threshold_l;          /* Computed Parameter: Switch_Threshold_l
                                        * Referenced by: '<S21>/Switch'
                                        */
  uint8_T Constant_Value_e;            /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S3>/Constant'
                                        */
  uint8_T Constant_Value_p;            /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S9>/Constant'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S32>/Manual Switch3'
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
    time_T *taskTimePtrs[4];
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
    struct {
      uint16_T TID[4];
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
    time_T sampleTimesArray[4];
    time_T offsetTimesArray[4];
    int_T sampleTimeTaskIDArray[4];
    int_T sampleHitArray[4];
    int_T perTaskSampleHitsArray[16];
    time_T tArray[4];
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
 * '<S3>'   : 'SpeedgoatCANOpen2Buses100us/Dold_MiniMaster_RPDOs'
 * '<S4>'   : 'SpeedgoatCANOpen2Buses100us/Dunk_Brakes'
 * '<S5>'   : 'SpeedgoatCANOpen2Buses100us/Dunk_LeftTilt'
 * '<S6>'   : 'SpeedgoatCANOpen2Buses100us/Dunk_RightTilt'
 * '<S7>'   : 'SpeedgoatCANOpen2Buses100us/Dunk_Steering'
 * '<S8>'   : 'SpeedgoatCANOpen2Buses100us/Encoder_RPDOs'
 * '<S9>'   : 'SpeedgoatCANOpen2Buses100us/Inclinometer_RPDOs'
 * '<S10>'  : 'SpeedgoatCANOpen2Buses100us/Joystick_RPDOs'
 * '<S11>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs'
 * '<S12>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer'
 * '<S13>'  : 'SpeedgoatCANOpen2Buses100us/APT_RPDOs/T'
 * '<S14>'  : 'SpeedgoatCANOpen2Buses100us/Inclinometer_RPDOs/Conv'
 * '<S15>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication'
 * '<S16>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/Subsystem'
 * '<S17>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)'
 * '<S18>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)'
 * '<S19>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper'
 * '<S20>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper'
 * '<S21>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper'
 * '<S22>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper'
 * '<S23>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/CAN_A'
 * '<S24>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/CAN_B'
 * '<S25>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Scopes'
 * '<S26>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control'
 * '<S27>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init'
 * '<S28>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/CAN_B/HeartBeatgenerator'
 * '<S29>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/BrakeControl'
 * '<S30>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/SteeringControl'
 * '<S31>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/Subsystem'
 * '<S32>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl'
 * '<S33>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TractionControl'
 * '<S34>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl'
 * '<S35>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/BrakeControl/MATLAB Function'
 * '<S36>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/BrakeControl/Subsystem'
 * '<S37>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/BrakeControl/Subsystem/Retract'
 * '<S38>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/SteeringControl/P Controller'
 * '<S39>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/SteeringControl/Repeating Sequence'
 * '<S40>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/Offset_Conversion'
 * '<S41>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/PI Tilting Angle Controller'
 * '<S42>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/PID_ctrl'
 * '<S43>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/PID_ctrl1'
 * '<S44>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/Repeating Sequence'
 * '<S45>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1'
 * '<S46>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/ServoTilting'
 * '<S47>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/TiltingController'
 * '<S48>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Derivative'
 * '<S49>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Discrete Derivative'
 * '<S50>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1'
 * '<S51>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Incremental_V1'
 * '<S52>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PID_ctrl'
 * '<S53>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Incremental_V1/PI_incremental Tilting Controller'
 * '<S54>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/APTControlWord'
 * '<S55>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Brakes_DunkMotor_Init'
 * '<S56>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/ButtonStatus'
 * '<S57>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Enable'
 * '<S58>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/EnableCtrl'
 * '<S59>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Steering_DunkMotor_Init'
 * '<S60>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init'
 * '<S61>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init'
 * '<S62>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode'
 * '<S63>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Enable/Compare To Constant'
 * '<S64>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode'
 * '<S65>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode'
 * '<S66>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode'
 */
#endif                                 /* RTW_HEADER_SpeedgoatCANOpen2Buses100us_h_ */
