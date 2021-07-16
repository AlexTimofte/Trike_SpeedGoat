
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

typedef union {
	struct {
		uint8_T Byte0; // b7 1/0= start/stop; b6 1/0 boost enable/disable; b5 1/0 regen enable/disable; b4 eco mode 1/0 enable/disable; b3b2 -
		uint8_T Byte1; // phase current rms [A]
		uint8_T Byte2;
		uint8_T Byte3; // dummy
		uint8_T Byte4; // dummy
		uint8_T Byte5; // rotor speed [rpm] offset -8000d
		uint8_T Byte6;
		uint8_T Byte7; // heartbeat
	} ;
	uint8_T Message[8];
} RPDO_ID1C1;


typedef union {
	struct {
		uint16_T BusVoltage; // cV i.e. 0.01V
		uint16_T dummy0;
		uint8_T MotorTemperature; // offset -10
		uint8_T APTTemperature; // offset -10
		uint16_T dummy1;
	};
	uint8_T Message[8];
} RPDO_ID1C2;


typedef union {
	struct {
		uint8_T ErrorStatus; // b7 - overvoltage, b6 -, b5 - motor overheat, b4 - APT overheat, b3 - HW error, b2 - Sensor error, b1 - phase overcurrent, b0 - undervoltage
		uint16_T dummy0;
		uint8_T PedalPosition; // 0-100 delta =0.4
		uint8_T Direction; //b7b6 = 00 Neutral    01 - Forward  10 - Reverse
		uint16_T dummy1;
		uint8_T dummy2;
	};
	uint8_T Message[8];
} RPDO_ID1C3;

typedef union {
	struct {
		uint8_T ControlWord; // b7 - 1/0 start/stop, b6 - boost 1/0 enable/disable, b5 - regen 1/0 enable/disable, b4 - eco 1/0 enable/disable, b3b2 - direction 00 neutral 01 forward 10 reverse, b1 - brake 1/0 ebable/disable, b0  - reserved
		uint8_T dummy0;
		uint8_T dummy1;
		uint8_T dummy2;
		uint8_T dummy3;
		uint8_T PedalPosition; // 0-100 delta =0.4
		uint8_T Heartbeat; //
		uint8_T dummy4;
	};
	uint8_T Message[8];
} TPDO_ID1A4;

/*


typedef union {
	struct {
		int16_T X; //World X coord in cm (-36500cm ~ +36500cm)
		int16_T Y; //World Y coord in cm (-36500cm ~ +36500cm)
		int16_T A; //World Posture Azimuth in 1e-4Rad (-2*pi*10000 ~ +2*pi*10000)
		int16_T H; //World Speed Heading in mRad (-2*pi*1000 ~ +2*pi*1000)
	};
	uint8_T Message[8];
} TPDO_ID385;

typedef union {
	struct {
		uint16_T sonar1;
		uint16_T sonar2;
		uint16_T sonar3;
		uint16_T sonar4;
	};
	uint8_T Message[8];
} TPDO_ID485;

typedef union {
	struct {
		uint16_T motorA;
		uint16_T motorB;
		uint16_T motorC;
		uint16_T motorD;
	};
	uint8_T Message[8];
} TPDO_ID585;

typedef union {
	uint8_T sonar_id;
	uint8_T Message[8];
} TPDO_ID206;
*/

