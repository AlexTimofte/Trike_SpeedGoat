/*
 * SpeedgoatCANOpen2Buses100us.h
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.614
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Jul  2 21:10:33 2021
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
#include <math.h>
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

/* Block signals for system '<S46>/DunkD_Brake_Init_CurrentMode' */
typedef struct {
  real32_T ClearError;                 /* '<S46>/DunkD_Brake_Init_CurrentMode' */
  real32_T DeviceMode;                 /* '<S46>/DunkD_Brake_Init_CurrentMode' */
  real32_T BrakeCtrl;                  /* '<S46>/DunkD_Brake_Init_CurrentMode' */
  real32_T PowerEnable;                /* '<S46>/DunkD_Brake_Init_CurrentMode' */
  real32_T InitStatus;                 /* '<S46>/DunkD_Brake_Init_CurrentMode' */
} B_DunkD_Brake_Init_CurrentMod_T;

/* Block states (default storage) for system '<S46>/DunkD_Brake_Init_CurrentMode' */
typedef struct {
  real32_T aux2;                       /* '<S46>/DunkD_Brake_Init_CurrentMode' */
  real32_T aux;                        /* '<S46>/DunkD_Brake_Init_CurrentMode' */
  int32_T sfEvent;                     /* '<S46>/DunkD_Brake_Init_CurrentMode' */
  uint8_T is_active_c3_SpeedgoatCANOpen2B;/* '<S46>/DunkD_Brake_Init_CurrentMode' */
  uint8_T is_c3_SpeedgoatCANOpen2Buses100;/* '<S46>/DunkD_Brake_Init_CurrentMode' */
} DW_DunkD_Brake_Init_CurrentMo_T;

/* Block signals (default storage) */
typedef struct {
  int128m_T VehSpeed_Kmh;              /* '<S37>/m//s2Km//h' */
  uint64_T Gain2;                      /* '<S21>/Gain2' */
  uint64_T Gain4;                      /* '<S21>/Gain4' */
  int64_T VehSpeed_SI;                 /* '<S37>/WheelRadius' */
  int64_T DunkC_ActualCurrent_Inv;     /* '<S6>/Gain' */
  real_T CANRead_o5;                   /* '<S17>/CAN Read' */
  real_T CANRead_o5_h;                 /* '<S19>/CAN Read' */
  real_T Switch4;                      /* '<S35>/Switch4' */
  real_T RigthTiltCurrentmA1;
  real_T Switch2;                      /* '<S35>/Switch2' */
  real_T Sum;                          /* '<S33>/Sum' */
  real_T br_percent;                   /* '<S33>/Gain3' */
  real_T Gain2_a;                      /* '<S33>/Gain2' */
  real_T Saturation;                   /* '<S33>/Saturation' */
  real_T Gain1;                        /* '<S33>/Gain1' */
  real_T BrCurrentRef;                 /* '<S33>/Amp2mAmp' */
  real_T Switch3;                      /* '<S35>/Switch3' */
  real_T DirSpeedRef;
  real_T Switch;                       /* '<S35>/Switch' */
  real_T LeftTiltCurrentmA1;
  real_T Switch1;                      /* '<S35>/Switch1' */
  real_T SineWave1;                    /* '<S14>/Sine Wave1' */
  real_T SineWave2;                    /* '<S14>/Sine Wave2' */
  real_T SineWave3;                    /* '<S14>/Sine Wave3' */
  real_T SineWave;                     /* '<S14>/Sine Wave' */
  real_T PosRefm;                      /* '<S36>/degree2m' */
  real_T PosRefm_a;                    /* '<S36>/degree2m' */
  real_T Memory;                       /* '<S36>/Memory' */
  real_T TmpRTBAtPITiltingControllerInpo;/* '<S36>/Memory' */
  real_T Amp2mAmp_conv1;               /* '<S36>/Amp2mAmp_conv1' */
  real_T Amp2mAmp_conv2;               /* '<S36>/Amp2mAmp_conv2' */
  real_T Memory1;                      /* '<S34>/Memory1' */
  real_T DirectionAvg;                 /* '<S34>/Cast To Single1' */
  real_T CastToSingle;                 /* '<S34>/Cast To Single' */
  real_T TmpRTBAtPDirectionControllerInp;/* '<S34>/Cast To Single' */
  real_T DirectionAvg_n;               /* '<S34>/Cast To Single1' */
  real_T Pos_out;                      /* '<S34>/Sum' */
  real_T Direction;                    /* '<S34>/inc2deg' */
  real_T DispLeftOffsetVolt;           /* '<S36>/Sum' */
  real_T DispLeftm;                    /* '<S36>/Volt2meter' */
  real_T UnitDelay1;                   /* '<S44>/Unit Delay1' */
  real_T Sum_l;                        /* '<S44>/Sum' */
  real_T Product1;                     /* '<S44>/Product1' */
  real_T err;                          /* '<S36>/Sum1' */
  real_T Product5;                     /* '<S44>/Product5' */
  real_T Sum2;                         /* '<S44>/Sum2' */
  real_T Gain1_c;                      /* '<S44>/Gain1' */
  real_T Product2;                     /* '<S44>/Product2' */
  real_T UnitDelay2;                   /* '<S44>/Unit Delay2' */
  real_T Sum1;                         /* '<S44>/Sum1' */
  real_T Sum3;                         /* '<S44>/Sum3' */
  real_T CastToSingle_p;               /* '<S36>/Cast To Single' */
  real_T CastToSingle1;                /* '<S36>/Cast To Single1' */
  real_T TiltingAngledeg;              /* '<S36>/Sine Wave' */
  real_T Byte0;                        /* '<S25>/MATLAB Function1' */
  real_T button;                       /* '<S25>/MATLAB Function' */
  real_T TiltingAngle;                 /* '<S36>/ServoTilting' */
  real_T LTiltCurrRef;                 /* '<S36>/PI Tilting Controller' */
  real_T RTiltCurrRef;                 /* '<S36>/PI Tilting Controller' */
  real_T a;                            /* '<S44>/MATLAB Function' */
  real_T b;                            /* '<S44>/MATLAB Function' */
  real_T c;                            /* '<S44>/MATLAB Function' */
  real_T SpeedRef;                     /* '<S34>/P Direction Controller' */
  real_T MovingAverage;                /* '<S34>/Moving Average' */
  real_T HB;                           /* '<S23>/HeartBeatgenerator' */
  real_T MovingAverage_o;              /* '<S21>/Moving Average' */
  uint32_T CANRead_o2;                 /* '<S17>/CAN Read' */
  uint32_T CCaller_o1;                 /* '<S15>/C Caller' */
  uint32_T CANRead_o2_e;               /* '<S19>/CAN Read' */
  uint32_T CCaller_o1_n;               /* '<S16>/C Caller' */
  uint32_T Encoder_Actual_Position;    /* '<S8>/RPDOs from Encoder' */
  uint32_T Encoder_Stored_Position;    /* '<S8>/RPDOs from Encoder' */
  uint32_T DispLeftVolt;               /* '<S36>/LSB2Volt' */
  real32_T Joystick_LongCmd;           /* '<S9>/RPDOs from Joystick' */
  real32_T Joystick_LatCmd;            /* '<S9>/RPDOs from Joystick' */
  real32_T CastToSingle3;              /* '<S25>/Cast To Single3' */
  real32_T Constant;                   /* '<S50>/Constant' */
  real32_T Constant_e;                 /* '<S52>/Constant' */
  real32_T Constant_m;                 /* '<S53>/Constant' */
  real32_T Constant_g;                 /* '<S46>/Constant' */
  real32_T Sum_b;                      /* '<S51>/Sum' */
  real32_T Joystick_LatCmd_f;          /* '<S21>/Data Type Conversion15' */
  real32_T Joystick_LongCmd_m;         /* '<S21>/Data Type Conversion16' */
  real32_T Encoder_Stored_Position_d;  /* '<S21>/Data Type Conversion5' */
  real32_T Encoder_Actual_Position_g;  /* '<S21>/Data Type Conversion18' */
  real32_T AN1;                        /* '<S21>/Data Type Conversion17' */
  real32_T AN2;                        /* '<S21>/Data Type Conversion19' */
  real32_T AN3;                        /* '<S21>/Data Type Conversion20' */
  real32_T AN4;                        /* '<S21>/Data Type Conversion21' */
  real32_T Actual_Current;             /* '<S21>/Data Type Conversion9' */
  real32_T Desired_Current;            /* '<S21>/Data Type Conversion14' */
  real32_T CastToSingle_e;             /* '<S24>/Cast To Single' */
  real32_T DirectionReq;               /* '<S34>/dem' */
  real32_T DirectionRef;               /* '<S34>/Robotics Convention' */
  real32_T SteeringAnglerad;           /* '<S34>/degree2rad' */
  real32_T ClearError;                 /* '<S50>/DunkA_Steering_Init_SpeedMode' */
  real32_T DeviceMode;                 /* '<S50>/DunkA_Steering_Init_SpeedMode' */
  real32_T BrakeCtrl;                  /* '<S50>/DunkA_Steering_Init_SpeedMode' */
  real32_T PowerEnable;                /* '<S50>/DunkA_Steering_Init_SpeedMode' */
  real32_T InitStatus;                 /* '<S50>/DunkA_Steering_Init_SpeedMode' */
  real32_T Enable;                     /* '<S25>/EnableCtrl' */
  real32_T Gain1_e;                    /* '<S37>/Gain1' */
  real32_T TractionRef;                /* '<S37>/Abs' */
  int32_T SpeedRear_SI;                /* '<S37>/Gain2' */
  int32_T DunkC_TPDO_DesiredCurrent;   /* '<S22>/Data Type Conversion31' */
  int32_T DunkD_TPDO_DesiredCurrent;   /* '<S22>/Data Type Conversion36' */
  int32_T DunkA_TPDO_DesiredCurrent;   /* '<S22>/Data Type Conversion8' */
  int32_T DunkB_TPDO_DesiredCurrent;   /* '<S22>/Data Type Conversion26' */
  int32_T DunkA_ActualCurrent;         /* '<S4>/RPDOs from Dunker #1' */
  int32_T DunkA_ActualVelocity;        /* '<S4>/RPDOs from Dunker #1' */
  int32_T DunkB_ActualCurrent;         /* '<S5>/RPDOs from Dunker #1' */
  int32_T DunkB_ActualVelocity;        /* '<S5>/RPDOs from Dunker #1' */
  int32_T DunkC_ActualCurrent;         /* '<S6>/RPDOs from Dunker #1' */
  int32_T DunkC_ActualVelocity;        /* '<S6>/RPDOs from Dunker #1' */
  int32_T DunkD_ActualCurrent;         /* '<S7>/RPDOs from Dunker #1' */
  int32_T DunkD_ActualVelocity;        /* '<S7>/RPDOs from Dunker #1' */
  uint16_T RPDOsfromAN2CAN_o2;         /* '<S1>/RPDOs from AN2CAN ' */
  uint16_T RPDOsfromAN2CAN_o3;         /* '<S1>/RPDOs from AN2CAN ' */
  uint16_T Channel_AN4;                /* '<S1>/RPDOs from AN2CAN ' */
  uint16_T Channel_AN3;                /* '<S1>/Data Type Conversion' */
  uint16_T DataTypeConversion;         /* '<S33>/Data Type Conversion' */
  uint16_T Saturation1;                /* '<S33>/Saturation1' */
  uint16_T AN_01;                      /* '<S14>/Cast To Single' */
  uint16_T AN_02;                      /* '<S14>/Cast To Single1' */
  uint16_T AN_03;                      /* '<S14>/Cast To Single2' */
  uint16_T AN_04;                      /* '<S14>/Cast To Single3' */
  uint16_T Channel_AN1;                /* '<S1>/Data Type Conversion1' */
  uint16_T Channel_AN2;                /* '<S1>/Data Type Conversion2' */
  uint16_T APT_BusVoltage;             /* '<S2>/RPDOs from APT' */
  int16_T RPDOsfromAN2CAN_o1;          /* '<S1>/RPDOs from AN2CAN ' */
  int16_T APT_PhaseCurrent;            /* '<S2>/RPDOs from APT' */
  int16_T APT_Speed;                   /* '<S2>/RPDOs from APT' */
  uint8_T CANRead_o3;                  /* '<S17>/CAN Read' */
  uint8_T CANRead_o4;                  /* '<S17>/CAN Read' */
  uint8_T CANRead_o6[8];               /* '<S17>/CAN Read' */
  uint8_T Switch_c;                    /* '<S17>/Switch' */
  uint8_T CCaller_o2;                  /* '<S15>/C Caller' */
  uint8_T CCaller_o3[8];               /* '<S15>/C Caller' */
  uint8_T CANRead_o3_m;                /* '<S19>/CAN Read' */
  uint8_T CANRead_o4_a;                /* '<S19>/CAN Read' */
  uint8_T CANRead_o6_h[8];             /* '<S19>/CAN Read' */
  uint8_T Switch_g;                    /* '<S19>/Switch' */
  uint8_T CCaller_o2_n;                /* '<S16>/C Caller' */
  uint8_T CCaller_o3_n[8];             /* '<S16>/C Caller' */
  uint8_T Joystick_ButtonsStatus;      /* '<S9>/RPDOs from Joystick' */
  uint8_T APT_TPDO_ControlWord;        /* '<S23>/Data Type Conversion' */
  uint8_T APT_TPDO_PedalPosition;      /* '<S23>/Data Type Conversion1' */
  uint8_T APT_TPDO_Heartbeat;          /* '<S23>/Data Type Conversion2' */
  uint8_T ClearError_m;                /* '<S50>/Cast To Single1' */
  uint8_T DunkA_TPDO_ClearError;       /* '<S22>/Data Type Conversion3' */
  uint8_T DeviceMode_e;                /* '<S50>/Cast To Single' */
  uint8_T DunkA_TPDO_DeviceMode;       /* '<S22>/Data Type Conversion6' */
  uint8_T ClearError_j;                /* '<S53>/Cast To Single1' */
  uint8_T DunkC_TPDO_ClearError;       /* '<S22>/Data Type Conversion27' */
  uint8_T DeviceMode_h;                /* '<S53>/Cast To Single' */
  uint8_T DunkC_TPDO_DeviceMode;       /* '<S22>/Data Type Conversion29' */
  uint8_T PowerEnable_a;               /* '<S53>/Cast To Single3' */
  uint8_T DunkC_TPDO_PowerEnable;      /* '<S22>/Data Type Conversion30' */
  uint8_T BrakeCtrl_b;                 /* '<S53>/Cast To Single2' */
  uint8_T DunkC_TPDO_BrakeCtrl;        /* '<S22>/Data Type Conversion28' */
  uint8_T ClearError_mj;               /* '<S46>/Cast To Single1' */
  uint8_T DunkD_TPDO_ClearError;       /* '<S22>/Data Type Conversion32' */
  uint8_T DeviceMode_g;                /* '<S46>/Cast To Single' */
  uint8_T DunkD_TPDO_DeviceMode;       /* '<S22>/Data Type Conversion34' */
  uint8_T PowerEnable_p;               /* '<S46>/Cast To Single3' */
  uint8_T DunkD_TPDO_PowerEnable;      /* '<S22>/Data Type Conversion35' */
  uint8_T BrakeCtrl_k;                 /* '<S46>/Cast To Single2' */
  uint8_T DunkD_TPDO_BrakeCtrl;        /* '<S22>/Data Type Conversion33' */
  uint8_T PowerEnable_i;               /* '<S50>/Cast To Single3' */
  uint8_T DunkA_TPDO_PowerEnable;      /* '<S22>/Data Type Conversion7' */
  uint8_T BrakeCtrl_m;                 /* '<S50>/Cast To Single2' */
  uint8_T DunkA_TPDO_BrakeCtrl;        /* '<S22>/Data Type Conversion4' */
  uint8_T ClearError_jv;               /* '<S52>/Cast To Single1' */
  uint8_T DunkB_TPDO_ClearError;       /* '<S22>/Data Type Conversion22' */
  uint8_T DeviceMode_d;                /* '<S52>/Cast To Single' */
  uint8_T DunkB_TPDO_DeviceMode;       /* '<S22>/Data Type Conversion24' */
  uint8_T PowerEnable_ir;              /* '<S52>/Cast To Single3' */
  uint8_T DunkB_TPDO_PowerEnable;      /* '<S22>/Data Type Conversion25' */
  uint8_T BrakeCtrl_k0;                /* '<S52>/Cast To Single2' */
  uint8_T DunkB_TPDO_BrakeCtrl;        /* '<S22>/Data Type Conversion23' */
  uint8_T APT_StatusWord;              /* '<S2>/RPDOs from APT' */
  uint8_T APT_ErrStatus;               /* '<S2>/RPDOs from APT' */
  uint8_T APT_Direction;               /* '<S2>/RPDOs from APT' */
  uint8_T Enable_c;                    /* '<S3>/Constant' */
  uint8_T Constant_em;                 /* '<S20>/Constant' */
  uint8_T Constant_ge;                 /* '<S18>/Constant' */
  int8_T APT_MotorTemp;                /* '<S2>/RPDOs from APT' */
  int8_T APT_Temp;                     /* '<S2>/RPDOs from APT' */
  boolean_T CANRead_o1;                /* '<S17>/CAN Read' */
  boolean_T CANRead_o1_b;              /* '<S19>/CAN Read' */
  boolean_T Compare;                   /* '<S56>/Compare' */
  B_DunkD_Brake_Init_CurrentMod_T sf_DunkC_TiltRight_Init_Current;/* '<S53>/DunkC_TiltRight_Init_CurrentMode' */
  B_DunkD_Brake_Init_CurrentMod_T sf_DunkB_TiltLeft_Init_CurrentM;/* '<S52>/DunkB_TiltLeft_Init_CurrentMode' */
  B_DunkD_Brake_Init_CurrentMod_T sf_DunkD_Brake_Init_CurrentMode;/* '<S46>/DunkD_Brake_Init_CurrentMode' */
} B_SpeedgoatCANOpen2Buses100us_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_private_SlidingWindowAver_T gobj_0;/* '<S21>/Moving Average' */
  dsp_private_SlidingWindowAver_T gobj_1;/* '<S21>/Moving Average' */
  dsp_simulink_MovingAverage_Sp_T obj; /* '<S21>/Moving Average' */
  dsp_simulink_MovingAverage_i_T obj_c;/* '<S34>/Moving Average' */
  real_T UnitDelay1_DSTATE;            /* '<S44>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S44>/Unit Delay2' */
  real_T RigthTiltCurrentmA1_Buf[3];   /* synthesized block */
  real_T Sum_DWORK1;                   /* '<S33>/Sum' */
  real_T DirSpeedRef_Buf[3];           /* synthesized block */
  real_T LeftTiltCurrentmA1_Buf[3];    /* synthesized block */
  real_T PosRefm_Buf0;                 /* synthesized block */
  real_T PosRefm_Buf1;                 /* synthesized block */
  real_T PosRefm_Buf2;                 /* synthesized block */
  real_T Memory_PreviousInput;         /* '<S36>/Memory' */
  real_T TmpRTBAtPITiltingControllerInpo;/* synthesized block */
  real_T TmpRTBAtPITiltingControllerIn_o;/* synthesized block */
  real_T TmpRTBAtPITiltingControllerIn_n;/* synthesized block */
  real_T Memory1_PreviousInput;        /* '<S34>/Memory1' */
  real_T TmpRTBAtPDirectionControllerInp;/* synthesized block */
  real_T TmpRTBAtPDirectionControllerI_d;/* synthesized block */
  real_T TmpRTBAtPDirectionControllerI_f;/* synthesized block */
  real_T DirectionAvg_Buf0;            /* synthesized block */
  real_T DirectionAvg_Buf1;            /* synthesized block */
  real_T DirectionAvg_Buf2;            /* synthesized block */
  real_T uk1;                          /* '<S36>/PI Tilting Controller' */
  real_T ek1;                          /* '<S36>/PI Tilting Controller' */
  real_T tact;                         /* '<S23>/HeartBeatgenerator' */
  real_T Heartbeat;                    /* '<S23>/HeartBeatgenerator' */
  dsp_private_SlidingWindowAv_i_T gobj_0_j;/* '<S34>/Moving Average' */
  dsp_private_SlidingWindowAv_i_T gobj_1_f;/* '<S34>/Moving Average' */
  void *CANSetup_PWORK;                /* '<S13>/CAN Setup ' */
  void *CANRead_PWORK;                 /* '<S17>/CAN Read' */
  void *CANRead_PWORK_p;               /* '<S19>/CAN Read' */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_n;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_k;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_e;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ku;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_a;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ao;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_l;   /* synthesized block */

  void* RigthTiltCurrentmA1_d0_SEMAPHOR;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_m;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_dx;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_j;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_at;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ab;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_l5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ng;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mm;   /* synthesized block */

  void* DirSpeedRef_d0_SEMAPHORE;      /* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_i;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_f;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ez;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_p;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_po;   /* synthesized block */

  void* LeftTiltCurrentmA1_d0_SEMAPHORE;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_h;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_eo;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_o;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_jh;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_f4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_jg;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_js;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_c;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_g;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_i3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_kh;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ngc;   /* synthesized block */

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
  } HiddenToAsyncQueue_Inserted_js4;   /* synthesized block */

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
  } HiddenToAsyncQueue_Inserted_pla;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cl;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_plat;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Insert_platr;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mq;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedF_bi;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_h4;   /* synthesized block */

  struct {
    void *AQHandles[2];
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cq;   /* synthesized block */

  struct {
    void *AQHandles[4];
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mj;   /* synthesized block */

  struct {
    void *AQHandles[2];
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_b2;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bx;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mk;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_hz;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_os;   /* synthesized block */

  void* PosRefm_d0_SEMAPHORE;          /* synthesized block */
  void* TmpRTBAtPITiltingControllerIn_d;/* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_co;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_af;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_l5i;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ca;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_j5;   /* synthesized block */

  void* TmpRTBAtPDirectionControllerI_l;/* synthesized block */
  void* DirectionAvg_d0_SEMAPHORE;     /* synthesized block */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_kr;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_mjb;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_j1;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ij;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pz;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_aw;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_dw;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_it;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mu;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_dy;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ej;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ijl;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_d3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_mmb;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bp;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_fh;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_dyb;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_db;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_hs;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ac;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cm;   /* synthesized block */

  void *CANWrite_PWORK;                /* '<S20>/CAN Write' */
  void *CANWrite_PWORK_e;              /* '<S18>/CAN Write' */
  real32_T aux2;                       /* '<S50>/DunkA_Steering_Init_SpeedMode' */
  real32_T aux;                        /* '<S50>/DunkA_Steering_Init_SpeedMode' */
  int32_T sfEvent;                     /* '<S50>/DunkA_Steering_Init_SpeedMode' */
  int32_T sfEvent_n;                   /* '<S25>/EnableCtrl' */
  int8_T RigthTiltCurrentmA1_LstBufWR; /* synthesized block */
  int8_T RigthTiltCurrentmA1_RDBuf;    /* synthesized block */
  int8_T DirSpeedRef_LstBufWR;         /* synthesized block */
  int8_T DirSpeedRef_RDBuf;            /* synthesized block */
  int8_T LeftTiltCurrentmA1_LstBufWR;  /* synthesized block */
  int8_T LeftTiltCurrentmA1_RDBuf;     /* synthesized block */
  int8_T PosRefm_LstBufWR;             /* synthesized block */
  int8_T PosRefm_RDBuf;                /* synthesized block */
  int8_T TmpRTBAtPITiltingControllerIn_j;/* synthesized block */
  int8_T TmpRTBAtPITiltingControllerIn_c;/* synthesized block */
  int8_T TmpRTBAtPDirectionControllerI_p;/* synthesized block */
  int8_T TmpRTBAtPDirectionControllerI_g;/* synthesized block */
  int8_T DirectionAvg_LstBufWR;        /* synthesized block */
  int8_T DirectionAvg_RDBuf;           /* synthesized block */
  int8_T CANTXWrapper_SubsysRanBC;     /* '<S16>/CAN TX Wrapper' */
  int8_T CANTXWrapper_SubsysRanBC_f;   /* '<S15>/CAN TX Wrapper' */
  uint8_T is_active_c12_SpeedgoatCANOpen2;/* '<S50>/DunkA_Steering_Init_SpeedMode' */
  uint8_T is_c12_SpeedgoatCANOpen2Buses10;/* '<S50>/DunkA_Steering_Init_SpeedMode' */
  uint8_T is_active_c4_SpeedgoatCANOpen2B;/* '<S25>/EnableCtrl' */
  uint8_T is_c4_SpeedgoatCANOpen2Buses100;/* '<S25>/EnableCtrl' */
  boolean_T objisempty;                /* '<S34>/Moving Average' */
  boolean_T objisempty_n;              /* '<S21>/Moving Average' */
  DW_DunkD_Brake_Init_CurrentMo_T sf_DunkC_TiltRight_Init_Current;/* '<S53>/DunkC_TiltRight_Init_CurrentMode' */
  DW_DunkD_Brake_Init_CurrentMo_T sf_DunkB_TiltLeft_Init_CurrentM;/* '<S52>/DunkB_TiltLeft_Init_CurrentMode' */
  DW_DunkD_Brake_Init_CurrentMo_T sf_DunkD_Brake_Init_CurrentMode;/* '<S46>/DunkD_Brake_Init_CurrentMode' */
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
  real32_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S56>/Constant'
                                        */
  real_T CANWrite_P1_Size[2];          /* Computed Parameter: CANWrite_P1_Size
                                        * Referenced by: '<S18>/CAN Write'
                                        */
  real_T CANWrite_P1[7];               /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
                                        * Referenced by: '<S18>/CAN Write'
                                        */
  real_T CANWrite_P1_Size_p[2];        /* Computed Parameter: CANWrite_P1_Size_p
                                        * Referenced by: '<S20>/CAN Write'
                                        */
  real_T CANWrite_P1_h[7];             /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
                                        * Referenced by: '<S20>/CAN Write'
                                        */
  real_T CANSetup_P1_Size[2];          /* Computed Parameter: CANSetup_P1_Size
                                        * Referenced by: '<S13>/CAN Setup '
                                        */
  real_T CANSetup_P1[40];              /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
                                        * Referenced by: '<S13>/CAN Setup '
                                        */
  real_T CANSetup_P2_Size[2];          /* Computed Parameter: CANSetup_P2_Size
                                        * Referenced by: '<S13>/CAN Setup '
                                        */
  real_T CANSetup_P2;                  /* Expression: initStruct
                                        * Referenced by: '<S13>/CAN Setup '
                                        */
  real_T CANSetup_P3_Size[2];          /* Computed Parameter: CANSetup_P3_Size
                                        * Referenced by: '<S13>/CAN Setup '
                                        */
  real_T CANSetup_P3;                  /* Expression: termStruct
                                        * Referenced by: '<S13>/CAN Setup '
                                        */
  real_T CANRead_P1_Size[2];           /* Computed Parameter: CANRead_P1_Size
                                        * Referenced by: '<S17>/CAN Read'
                                        */
  real_T CANRead_P1[6];                /* Expression: [initValues(1:4) messageType initValues(6)]
                                        * Referenced by: '<S17>/CAN Read'
                                        */
  real_T CANRead_P1_Size_b[2];         /* Computed Parameter: CANRead_P1_Size_b
                                        * Referenced by: '<S19>/CAN Read'
                                        */
  real_T CANRead_P1_n[6];              /* Expression: [initValues(1:4) messageType initValues(6)]
                                        * Referenced by: '<S19>/CAN Read'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T RigthTiltCurrentmA1_InitialCond;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T offset_Value;                 /* Expression: 3600
                                        * Referenced by: '<S33>/offset'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.00015625
                                        * Referenced by: '<S33>/Gain3'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S33>/Gain2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0
                                        * Referenced by: '<S33>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<S33>/Saturation'
                                        */
  real_T Gain1_Gain;                   /* Expression: 12.7
                                        * Referenced by: '<S33>/Gain1'
                                        */
  real_T Amp2mAmp_Gain;                /* Expression: 1000
                                        * Referenced by: '<S33>/Amp2mAmp'
                                        */
  real_T DirSpeedRef_InitialCondition; /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T LeftTiltCurrentmA1_InitialCondi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T SineWave1_Amp;                /* Expression: 1
                                        * Referenced by: '<S14>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0.5
                                        * Referenced by: '<S14>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: 0.5
                                        * Referenced by: '<S14>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: 0
                                        * Referenced by: '<S14>/Sine Wave1'
                                        */
  real_T SineWave2_Amp;                /* Expression: 1
                                        * Referenced by: '<S14>/Sine Wave2'
                                        */
  real_T SineWave2_Bias;               /* Expression: 0.5
                                        * Referenced by: '<S14>/Sine Wave2'
                                        */
  real_T SineWave2_Freq;               /* Expression: 0.5
                                        * Referenced by: '<S14>/Sine Wave2'
                                        */
  real_T SineWave2_Phase;              /* Expression: 0
                                        * Referenced by: '<S14>/Sine Wave2'
                                        */
  real_T SineWave3_Amp;                /* Expression: 1
                                        * Referenced by: '<S14>/Sine Wave3'
                                        */
  real_T SineWave3_Bias;               /* Expression: 0.5
                                        * Referenced by: '<S14>/Sine Wave3'
                                        */
  real_T SineWave3_Freq;               /* Expression: 0.5
                                        * Referenced by: '<S14>/Sine Wave3'
                                        */
  real_T SineWave3_Phase;              /* Expression: 0
                                        * Referenced by: '<S14>/Sine Wave3'
                                        */
  real_T SineWave_Amp;                 /* Expression: 5000
                                        * Referenced by: '<S14>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 2500
                                        * Referenced by: '<S14>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 0.5
                                        * Referenced by: '<S14>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<S14>/Sine Wave'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S36>/Constant1'
                                        */
  real_T degree2m_Gain;                /* Expression: 0.00246
                                        * Referenced by: '<S36>/degree2m'
                                        */
  real_T PosRefm_InitialCondition;     /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S36>/Memory'
                                        */
  real_T TmpRTBAtPITiltingControllerInpo;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Amp2mAmp_conv1_Gain;          /* Expression: 1000
                                        * Referenced by: '<S36>/Amp2mAmp_conv1'
                                        */
  real_T Amp2mAmp_conv2_Gain;          /* Expression: 1000
                                        * Referenced by: '<S36>/Amp2mAmp_conv2'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S34>/Memory1'
                                        */
  real_T TmpRTBAtPDirectionControllerInp;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T DirectionAvg_InitialCondition;/* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T Offsetto0pospos180180deg_Value;/* Expression: 2048
                                         * Referenced by: '<S34>/Offset to 0 pos => pos = [-180 180]deg'
                                         */
  real_T inc2deg_Gain;                 /* Expression: 180/2048
                                        * Referenced by: '<S34>/inc2deg'
                                        */
  real_T Offsetfor0deg316V5254mm_Value;/* Expression: 3.16
                                        * Referenced by: '<S36>/Offset for 0 deg (3.16V -> 52.54mm)'
                                        */
  real_T Volt2meter_Gain;              /* Expression: 0.076/5
                                        * Referenced by: '<S36>/Volt2meter'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S44>/Unit Delay1'
                                        */
  real_T Constant2_Value;              /* Expression: 2000
                                        * Referenced by: '<S36>/Constant2'
                                        */
  real_T Constant_Value_e;             /* Expression: zeta
                                        * Referenced by: '<S44>/Constant'
                                        */
  real_T Constant1_Value_a;            /* Expression: tau
                                        * Referenced by: '<S44>/Constant1'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 2
                                        * Referenced by: '<S44>/Gain1'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S44>/Unit Delay2'
                                        */
  real_T Constant_Value_c;             /* Expression: 10
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T SineWave_Amp_d;               /* Expression: 1
                                        * Referenced by: '<S36>/Sine Wave'
                                        */
  real_T SineWave_Bias_f;              /* Expression: 0
                                        * Referenced by: '<S36>/Sine Wave'
                                        */
  real_T SineWave_Freq_d;              /* Expression: 0.5
                                        * Referenced by: '<S36>/Sine Wave'
                                        */
  real_T SineWave_Phase_d;             /* Expression: 0
                                        * Referenced by: '<S36>/Sine Wave'
                                        */
  int64_T ms2Kmh_Gain;                 /* Computed Parameter: ms2Kmh_Gain
                                        * Referenced by: '<S37>/m//s2Km//h'
                                        */
  int32_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S6>/Gain'
                                        */
  int32_T WheelRadius_Gain;            /* Computed Parameter: WheelRadius_Gain
                                        * Referenced by: '<S37>/WheelRadius'
                                        */
  real32_T Gain1_Gain_n;               /* Computed Parameter: Gain1_Gain_n
                                        * Referenced by: '<S37>/Gain1'
                                        */
  real32_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S50>/Constant'
                                        */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S52>/Constant'
                                        */
  real32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S53>/Constant'
                                        */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S46>/Constant'
                                        */
  real32_T dem_Gain;                   /* Computed Parameter: dem_Gain
                                        * Referenced by: '<S34>/dem'
                                        */
  real32_T RoboticsConvention_Gain;    /* Computed Parameter: RoboticsConvention_Gain
                                        * Referenced by: '<S34>/Robotics Convention'
                                        */
  real32_T degree2rad_Gain;            /* Computed Parameter: degree2rad_Gain
                                        * Referenced by: '<S34>/degree2rad'
                                        */
  uint32_T Gain2_Gain_p;               /* Computed Parameter: Gain2_Gain_p
                                        * Referenced by: '<S21>/Gain2'
                                        */
  uint32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S21>/Gain4'
                                        */
  int16_T Gain2_Gain_k;                /* Computed Parameter: Gain2_Gain_k
                                        * Referenced by: '<S37>/Gain2'
                                        */
  uint16_T LSB2Volt_Gain;              /* Computed Parameter: LSB2Volt_Gain
                                        * Referenced by: '<S36>/LSB2Volt'
                                        */
  uint16_T Saturation1_UpperSat;       /* Computed Parameter: Saturation1_UpperSat
                                        * Referenced by: '<S33>/Saturation1'
                                        */
  uint16_T Saturation1_LowerSat;       /* Computed Parameter: Saturation1_LowerSat
                                        * Referenced by: '<S33>/Saturation1'
                                        */
  uint8_T Constant_Value_kp;           /* Computed Parameter: Constant_Value_kp
                                        * Referenced by: '<S18>/Constant'
                                        */
  uint8_T Constant_Value_nv;           /* Computed Parameter: Constant_Value_nv
                                        * Referenced by: '<S20>/Constant'
                                        */
  uint8_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S17>/Switch'
                                        */
  uint8_T Switch_Threshold_l;          /* Computed Parameter: Switch_Threshold_l
                                        * Referenced by: '<S19>/Switch'
                                        */
  uint8_T Constant_Value_ej;           /* Computed Parameter: Constant_Value_ej
                                        * Referenced by: '<S3>/Constant'
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
    time_T *taskTimePtrs[3];
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
    struct {
      uint8_T TID[3];
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
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
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
 * '<S4>'   : 'SpeedgoatCANOpen2Buses100us/Dunker #1'
 * '<S5>'   : 'SpeedgoatCANOpen2Buses100us/Dunker #2'
 * '<S6>'   : 'SpeedgoatCANOpen2Buses100us/Dunker #3'
 * '<S7>'   : 'SpeedgoatCANOpen2Buses100us/Dunker #4'
 * '<S8>'   : 'SpeedgoatCANOpen2Buses100us/Encoder_RPDOs'
 * '<S9>'   : 'SpeedgoatCANOpen2Buses100us/Joystick_RPDOs'
 * '<S10>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs'
 * '<S11>'  : 'SpeedgoatCANOpen2Buses100us/T'
 * '<S12>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer'
 * '<S13>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication'
 * '<S14>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/Subsystem'
 * '<S15>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)'
 * '<S16>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)'
 * '<S17>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper'
 * '<S18>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper'
 * '<S19>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper'
 * '<S20>'  : 'SpeedgoatCANOpen2Buses100us/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper'
 * '<S21>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Scopes'
 * '<S22>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Subsystem'
 * '<S23>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Subsystem1'
 * '<S24>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control'
 * '<S25>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init'
 * '<S26>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Scopes/ActualVelocity'
 * '<S27>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Scopes/Joystick_LatCmd'
 * '<S28>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Scopes/Joystick_LongCmd'
 * '<S29>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Scopes/scope0'
 * '<S30>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Scopes/scope1'
 * '<S31>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Scopes/scope2'
 * '<S32>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/Subsystem1/HeartBeatgenerator'
 * '<S33>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/BrakeControl'
 * '<S34>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/DirectionControl'
 * '<S35>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/Subsystem'
 * '<S36>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl'
 * '<S37>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TractionControl'
 * '<S38>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/DirectionControl/P Direction Controller'
 * '<S39>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/DirectionControl/Repeating Sequence'
 * '<S40>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass'
 * '<S41>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller'
 * '<S42>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/Repeating Sequence'
 * '<S43>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/ServoTilting'
 * '<S44>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1'
 * '<S45>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/MATLAB Function'
 * '<S46>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Brakes_DunkMotor_Init'
 * '<S47>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/EnableCtrl'
 * '<S48>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/MATLAB Function'
 * '<S49>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/MATLAB Function1'
 * '<S50>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Steering_DunkMotor_Init'
 * '<S51>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Subsystem'
 * '<S52>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init'
 * '<S53>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init'
 * '<S54>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode'
 * '<S55>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode'
 * '<S56>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/Subsystem/Compare To Constant'
 * '<S57>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode'
 * '<S58>'  : 'SpeedgoatCANOpen2Buses100us/Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode'
 */
#endif                                 /* RTW_HEADER_SpeedgoatCANOpen2Buses100us_h_ */
