#ifndef __customcode_YniSwGxVGDuH0o55vVoK7E_h__
#define __customcode_YniSwGxVGDuH0o55vVoK7E_h__

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

 

/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
DLL_EXPORT_CC void customcode_YniSwGxVGDuH0o55vVoK7E_initializer(void);

#define customcode_YniSwGxVGDuH0o55vVoK7E_terminator()
#ifdef __cplusplus
}
#endif

#endif

