// User defined types for RPDOs & TPDOs
#ifndef _SCANOPEN_TYPES_H
#define _SCANOPEN_TYPES_H
#include <stdint.h>
typedef int32_t int32_T;
typedef int16_t int16_T;
typedef int8_t int8_T;
typedef uint32_t uint32_T;
typedef uint16_t uint16_T;
typedef uint8_t uint8_T;
typedef union {
	struct {
		int32_T dw0;
		int32_T dw1;
	};
    struct {
        int16_T w0;
        int16_T w1;
        int16_T w2;
        int16_T w3;
    };
	uint8_T Message[8];
} RPDO_STRUCT;

typedef union {
	struct {
		int32_T dw0;
		int32_T dw1;
	};
    struct {
        int16_T w0;
        int16_T w1;
        int16_T w2;
        int16_T w3;
    };
	uint8_T Message[8];
} TPDO_STRUCT;

#endif
