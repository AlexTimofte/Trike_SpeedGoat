//#include <rtwtypes.h>
#include <stdint.h>
typedef int32_t int32_T;
typedef int16_t int16_T;
typedef int8_t int8_T;
typedef uint32_t uint32_T;
typedef uint16_t uint16_T;
typedef uint8_t uint8_T;
//Data Handling Macros
#define SWAP16(x) ((((x)&0xff)<<8)|(((x)&0xff00)>>8))

/*===== Signals from devices ======*/

typedef union {
	struct {
		uint8_T Dummy0;
		uint8_T StatusButtons1_8;
	};
	uint8_T Message[8];
} RPDO_ID182;

typedef union {
	struct {
		int16_T Lateral;
		int16_T Longitudinal;
	};
	uint8_T Message[8];
} RPDO_ID282;

// Analog to CAN converter
typedef union {
	struct {
		int16_T AN_01;
		int16_T AN_02;
		int16_T AN_03;
		int16_T AN_04;
	};
	uint8_T Message[8];
} RPDO_ID290;

// Inclinometer
typedef union {
	struct {
		uint8_T X_Dir;
		uint8_T X_AngleH;
		uint8_T X_AngleL;
		uint8_T Y_Dir;
		uint8_T Y_AngleH;
		uint8_T Y_AngleL;
        uint8_T dummy0;
 		uint8_T dummy1;
	};
	uint8_T Message[8];
} RPDO_ID589;

// WDGA Absolut Encoder
typedef union {
	struct {
		uint32_T Encoder_Actual_Position; 
	};
	uint8_T Message[4];
} RPDO_ID1FF;
typedef union {
	struct {
		uint32_T Encoder_Stored_Position; 
	};
	uint8_T Message[4];
} RPDO_ID2FF;

 

// Dunk 
typedef union {
	struct {
		uint8_T  ClearError;
		uint8_T  DeviceMode;
		uint8_T  PowerEnable;
		uint8_T  BrakeCtrl;
		int32_T  DesiredCurrent;
	};
	uint8_T Message[8];
} TPDO_ID20x;
 
typedef union {
	struct {
		 int32_T ActualCurrent;  
		 int32_T ActualVelocity; 
  	} ;
	uint8_T Message[8];
} RPDO_ID18x;

typedef union {
	struct {
		uint8_T  ClearError;
		uint8_T  DeviceMode;
		uint16_T dummy1;
		uint16_T dummy2;
		uint16_T dummy3;
  	} ;
	uint8_T Message[8];
} RPDO_ID28x;


// Joystick
typedef union {
	struct {
		uint8_T StatusButtons1_8; //Echo status buttons 1-8 Joystick
		int16_T Lateral; //Echo axis Y Joystick
		int16_T Longitudinal; //Echo axis X Joystick
	};
	uint8_T Message[8];
} TPDO_ID185;

typedef union {
	struct {
		uint8_T Status1;
		uint8_T Status2;
		uint8_T Status3;
		uint8_T Status4;
		uint8_T Status5;
		uint16_T Status6;
		uint8_T Status8;
	};
	uint8_T Message[8];
} TPDO_ID186;



