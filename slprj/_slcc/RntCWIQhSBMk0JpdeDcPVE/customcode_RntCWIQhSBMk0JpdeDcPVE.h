#ifndef __customcode_RntCWIQhSBMk0JpdeDcPVE_h__
#define __customcode_RntCWIQhSBMk0JpdeDcPVE_h__

/* Include files */
#include "mex.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "tmwtypes.h"


/* Helper definitions for DLL support */
#if defined _WIN32 
  #define DLL_EXPORT_CC __declspec(dllexport)
#else
  #if __GNUC__ >= 4
    #define DLL_EXPORT_CC __attribute__ ((visibility ("default")))
  #else
    #define DLL_EXPORT_CC
  #endif
#endif
/* Custom Code from Simulation Target dialog */
#include "CANOpenSlave.h"
#include "CANOpenSlaveAPT.h"


/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
DLL_EXPORT_CC void customcode_RntCWIQhSBMk0JpdeDcPVE_initializer(void);

#define customcode_RntCWIQhSBMk0JpdeDcPVE_terminator()
#ifdef __cplusplus
}
#endif

#endif

