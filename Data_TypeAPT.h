
//Data Handling Macros
#define SWAP16(x) ((((x)&0xff)<<8)|(((x)&0xff00)>>8))

/*===== Signals from devices ======*/

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


typedef union {
	struct {
		int16_T AN_01;
		int16_T AN_02;
		int16_T AN_03;
		int16_T AN_04;
	};
	uint8_T Message[8];
} TPDO_test;



 