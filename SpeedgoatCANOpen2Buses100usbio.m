function bio=SpeedgoatCANOpen2Buses100usbio
bio = [];
bio(1).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p1';
bio(1).sigName='Channel_AN1';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Channel_AN1';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p2';
bio(2).sigName='Channel_AN2';
bio(2).portIdx=1;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Channel_AN2';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p3';
bio(3).sigName='Channel_AN3';
bio(3).portIdx=2;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Channel_AN3';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p4';
bio(4).sigName='Channel_AN4';
bio(4).portIdx=3;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Channel_AN4';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='APT_RPDOs/RPDOs from APT/p1';
bio(5).sigName='APT_StatusWord';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_StatusWord';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='APT_RPDOs/RPDOs from APT/p2';
bio(6).sigName='APT_PhaseCurrent';
bio(6).portIdx=1;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_PhaseCurrent';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='APT_RPDOs/RPDOs from APT/p3';
bio(7).sigName='APT_Speed';
bio(7).portIdx=2;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_Speed';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='APT_RPDOs/RPDOs from APT/p4';
bio(8).sigName='APT_BusVoltage';
bio(8).portIdx=3;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_BusVoltage';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='APT_RPDOs/RPDOs from APT/p5';
bio(9).sigName='APT_MotorTemp';
bio(9).portIdx=4;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_MotorTemp';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='APT_RPDOs/RPDOs from APT/p6';
bio(10).sigName='APT_Temp';
bio(10).portIdx=5;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_Temp';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='APT_RPDOs/RPDOs from APT/p7';
bio(11).sigName='APT_ErrStatus';
bio(11).portIdx=6;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_ErrStatus';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='APT_RPDOs/RPDOs from APT/p8';
bio(12).sigName='APT_Direction';
bio(12).portIdx=7;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_Direction';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Dunker #1/RPDOs from Dunker #1/p1';
bio(13).sigName='DunkA_ActualCurrent';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Dunker #1/RPDOs from Dunker #1/p2';
bio(14).sigName='DunkA_ActualVelocity';
bio(14).portIdx=1;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Dunker #2/RPDOs from Dunker #1/p1';
bio(15).sigName='DunkB_ActualCurrent';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Dunker #2/RPDOs from Dunker #1/p2';
bio(16).sigName='DunkB_ActualVelocity';
bio(16).portIdx=1;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Dunker #3/RPDOs from Dunker #1/p1';
bio(17).sigName='DunkC_ActualCurrent';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Dunker #3/RPDOs from Dunker #1/p2';
bio(18).sigName='DunkC_ActualVelocity';
bio(18).portIdx=1;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Dunker #4/RPDOs from Dunker #1/p1';
bio(19).sigName='DunkD_ActualCurrent';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Dunker #4/RPDOs from Dunker #1/p2';
bio(20).sigName='DunkD_ActualVelocity';
bio(20).portIdx=1;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Encoder_RPDOs/RPDOs from Encoder/p1';
bio(21).sigName='Encoder_Actual_Position';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Encoder_RPDOs/RPDOs from Encoder/p2';
bio(22).sigName='Encoder_Stored_Position';
bio(22).portIdx=1;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Joystick_RPDOs/RPDOs from Joystick/p1';
bio(23).sigName='Joystick_ButtonsStatus';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Joystick_RPDOs/RPDOs from Joystick/p2';
bio(24).sigName='Joystick_LongCmd';
bio(24).portIdx=1;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Joystick_RPDOs/RPDOs from Joystick/p3';
bio(25).sigName='Joystick_LatCmd';
bio(25).portIdx=2;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Trike Application Layer/Data Type Conversion14';
bio(26).sigName='Desired_Current';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Desired_Current';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Trike Application Layer/Data Type Conversion15';
bio(27).sigName='Joystick_LatCmd';
bio(27).portIdx=0;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Trike Application Layer/Data Type Conversion16';
bio(28).sigName='Joystick_LongCmd';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Trike Application Layer/Data Type Conversion17';
bio(29).sigName='AN1';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN1';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Trike Application Layer/Data Type Conversion18';
bio(30).sigName='Encoder_Actual_Position';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Trike Application Layer/Data Type Conversion19';
bio(31).sigName='AN2';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN2';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Trike Application Layer/Data Type Conversion20';
bio(32).sigName='AN3';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN3';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Trike Application Layer/Data Type Conversion21';
bio(33).sigName='AN4';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN4';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Trike Application Layer/Data Type Conversion5';
bio(34).sigName='Encoder_Stored_Position';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Trike Application Layer/Data Type Conversion9';
bio(35).sigName='Actual_Current';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Actual_Current';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Trike Application Layer/Moving Average';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&SpeedgoatCANOpen2Buses100us_B.MovingAverage';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Trike Application Layer/Subsystem/Data Type Conversion22';
bio(37).sigName='DunkB_TPDO_ClearError';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Trike Application Layer/Subsystem/Data Type Conversion23';
bio(38).sigName='DunkB_TPDO_BrakeCtrl';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Trike Application Layer/Subsystem/Data Type Conversion24';
bio(39).sigName='DunkB_TPDO_DeviceMode';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Trike Application Layer/Subsystem/Data Type Conversion25';
bio(40).sigName='DunkB_TPDO_PowerEnable';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Trike Application Layer/Subsystem/Data Type Conversion26';
bio(41).sigName='DunkB_TPDO_DesiredCurrent';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent_j';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Trike Application Layer/Subsystem/Data Type Conversion27';
bio(42).sigName='DunkC_TPDO_ClearError';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Trike Application Layer/Subsystem/Data Type Conversion28';
bio(43).sigName='DunkC_TPDO_BrakeCtrl';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Trike Application Layer/Subsystem/Data Type Conversion29';
bio(44).sigName='DunkC_TPDO_DeviceMode';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Trike Application Layer/Subsystem/Data Type Conversion3';
bio(45).sigName='DunkA_TPDO_ClearError';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Trike Application Layer/Subsystem/Data Type Conversion30';
bio(46).sigName='DunkC_TPDO_PowerEnable';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Trike Application Layer/Subsystem/Data Type Conversion31';
bio(47).sigName='DunkC_TPDO_DesiredCurrent';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent_g';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Trike Application Layer/Subsystem/Data Type Conversion32';
bio(48).sigName='DunkD_TPDO_ClearError';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Trike Application Layer/Subsystem/Data Type Conversion33';
bio(49).sigName='DunkD_TPDO_BrakeCtrl';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Trike Application Layer/Subsystem/Data Type Conversion34';
bio(50).sigName='DunkD_TPDO_DeviceMode';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Trike Application Layer/Subsystem/Data Type Conversion35';
bio(51).sigName='DunkD_TPDO_PowerEnable';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Trike Application Layer/Subsystem/Data Type Conversion36';
bio(52).sigName='DunkD_TPDO_DesiredCurrent';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Trike Application Layer/Subsystem/Data Type Conversion4';
bio(53).sigName='DunkA_TPDO_BrakeCtrl';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Trike Application Layer/Subsystem/Data Type Conversion6';
bio(54).sigName='DunkA_TPDO_DeviceMode';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Trike Application Layer/Subsystem/Data Type Conversion7';
bio(55).sigName='DunkA_TPDO_PowerEnable';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Trike Application Layer/Subsystem/Data Type Conversion8';
bio(56).sigName='DunkA_TPDO_DesiredCurrent';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent_h';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Trike Application Layer/Subsystem1/HeartBeatgenerator';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&SpeedgoatCANOpen2Buses100us_B.HB';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Trike Application Layer/Subsystem1/Data Type Conversion';
bio(58).sigName='APT_TPDO_ControlWord';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Trike Application Layer/Subsystem1/Data Type Conversion1';
bio(59).sigName='APT_TPDO_PedalPosition';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Trike Application Layer/Subsystem1/Data Type Conversion2';
bio(60).sigName='APT_TPDO_Heartbeat';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Trike Application Layer/System_Control/Cast To Single';
bio(61).sigName='';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle_e';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Trike Application Layer/System_Init/MATLAB Function';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&SpeedgoatCANOpen2Buses100us_B.button';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Trike Application Layer/System_Init/MATLAB Function1';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Byte0';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='Trike Application Layer/System_Init/Cast To Single3';
bio(64).sigName='';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle3';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1';
bio(65).sigName='';
bio(65).portIdx=0;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o1';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2';
bio(66).sigName='';
bio(66).portIdx=1;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o2';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3';
bio(67).sigName='';
bio(67).portIdx=2;
bio(67).dim=[8,1];
bio(67).sigWidth=8;
bio(67).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o3[0]';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Trike Application Layer/System_Control/BrakeControl/Gain2';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain2_a';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='Trike Application Layer/System_Control/BrakeControl/Saturation';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Saturation';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='Trike Application Layer/System_Control/DirectionControl/P Direction Controller';
bio(70).sigName='DirSpeedRef';
bio(70).portIdx=0;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SpeedRef';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='Trike Application Layer/System_Control/DirectionControl/Cast To Single';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle_g';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='Trike Application Layer/System_Control/DirectionControl/Cast To Single1';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='Trike Application Layer/System_Control/DirectionControl/Robotics Convention';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&SpeedgoatCANOpen2Buses100us_B.RoboticsConvention';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='Trike Application Layer/System_Control/Subsystem/Switch';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='Trike Application Layer/System_Control/Subsystem/Switch1';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch1';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='Trike Application Layer/System_Control/Subsystem/Switch2';
bio(76).sigName='';
bio(76).portIdx=0;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch2';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='Trike Application Layer/System_Control/Subsystem/Switch3';
bio(77).sigName='';
bio(77).portIdx=0;
bio(77).dim=[1,1];
bio(77).sigWidth=1;
bio(77).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch3';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='Trike Application Layer/System_Control/Subsystem/Switch4';
bio(78).sigName='';
bio(78).portIdx=0;
bio(78).dim=[1,1];
bio(78).sigWidth=1;
bio(78).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch4';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller/p1';
bio(79).sigName='LTilt CurrentRef';
bio(79).portIdx=0;
bio(79).dim=[1,1];
bio(79).sigWidth=1;
bio(79).sigAddress='&SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller/p2';
bio(80).sigName='RTilt CurrenRef';
bio(80).portIdx=1;
bio(80).dim=[1,1];
bio(80).sigWidth=1;
bio(80).sigAddress='&SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='Trike Application Layer/System_Control/TiltingControl/ServoTilting';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[1,1];
bio(81).sigWidth=1;
bio(81).sigAddress='&SpeedgoatCANOpen2Buses100us_B.TiltingAngle';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='Trike Application Layer/System_Control/TiltingControl/Cast To Single';
bio(82).sigName='';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='Trike Application Layer/System_Control/TiltingControl/Cast To Single1';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle1';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='Trike Application Layer/System_Control/TiltingControl/Volt2meter';
bio(84).sigName='DispRight';
bio(84).portIdx=0;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DispRight';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='Trike Application Layer/System_Control/TiltingControl/degree2m';
bio(85).sigName='';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&SpeedgoatCANOpen2Buses100us_B.degree2m';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='Trike Application Layer/System_Control/TiltingControl/Memory';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Memory';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='Trike Application Layer/System_Control/TiltingControl/Sum';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='Trike Application Layer/System_Control/TractionControl/Gain2';
bio(88).sigName='SpeedRear_SI';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='Trike Application Layer/System_Control/TractionControl/Saturation1';
bio(89).sigName='TractionRef';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&SpeedgoatCANOpen2Buses100us_B.TractionRef';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p1';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.ClearError';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p2';
bio(91).sigName='';
bio(91).portIdx=1;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.DeviceMode';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p3';
bio(92).sigName='';
bio(92).portIdx=2;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.BrakeCtrl';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p4';
bio(93).sigName='';
bio(93).portIdx=3;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.PowerEnable';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p5';
bio(94).sigName='';
bio(94).portIdx=4;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.SpeedRequest';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[1,1];
bio(95).sigWidth=1;
bio(95).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant_jw';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant1';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[1,1];
bio(96).sigWidth=1;
bio(96).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant1_g';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1';
bio(97).sigName='DeviceMode';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode_p';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2';
bio(98).sigName='BrakeCtrl';
bio(98).portIdx=0;
bio(98).dim=[1,1];
bio(98).sigWidth=1;
bio(98).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_a';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3';
bio(99).sigName='ClearError';
bio(99).portIdx=0;
bio(99).dim=[1,1];
bio(99).sigWidth=1;
bio(99).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError_a';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single4';
bio(100).sigName='PowerEnable';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable_a';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p1';
bio(101).sigName='';
bio(101).portIdx=0;
bio(101).dim=[1,1];
bio(101).sigWidth=1;
bio(101).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.ClearError';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p2';
bio(102).sigName='';
bio(102).portIdx=1;
bio(102).dim=[1,1];
bio(102).sigWidth=1;
bio(102).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.DeviceMode';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p3';
bio(103).sigName='';
bio(103).portIdx=2;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.BrakeCtrl';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p4';
bio(104).sigName='';
bio(104).portIdx=3;
bio(104).dim=[1,1];
bio(104).sigWidth=1;
bio(104).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.PowerEnable';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p5';
bio(105).sigName='';
bio(105).portIdx=4;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.SpeedRequest';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant';
bio(106).sigName='';
bio(106).portIdx=0;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

bio(107).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant1';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[1,1];
bio(107).sigWidth=1;
bio(107).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant1';
bio(107).ndims=2;
bio(107).size=[];
bio(107).isStruct=false;

bio(108).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single';
bio(108).sigName='DeviceMode';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode';
bio(108).ndims=2;
bio(108).size=[];
bio(108).isStruct=false;

bio(109).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1';
bio(109).sigName='ClearError';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError';
bio(109).ndims=2;
bio(109).size=[];
bio(109).isStruct=false;

bio(110).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2';
bio(110).sigName='BrakeCtrl';
bio(110).portIdx=0;
bio(110).dim=[1,1];
bio(110).sigWidth=1;
bio(110).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl';
bio(110).ndims=2;
bio(110).size=[];
bio(110).isStruct=false;

bio(111).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3';
bio(111).sigName='PowerEnable';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable';
bio(111).ndims=2;
bio(111).size=[];
bio(111).isStruct=false;

bio(112).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p1';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.ClearError';
bio(112).ndims=2;
bio(112).size=[];
bio(112).isStruct=false;

bio(113).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p2';
bio(113).sigName='';
bio(113).portIdx=1;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.DeviceMode';
bio(113).ndims=2;
bio(113).size=[];
bio(113).isStruct=false;

bio(114).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p3';
bio(114).sigName='';
bio(114).portIdx=2;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.BrakeCtrl';
bio(114).ndims=2;
bio(114).size=[];
bio(114).isStruct=false;

bio(115).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p4';
bio(115).sigName='';
bio(115).portIdx=3;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.PowerEnable';
bio(115).ndims=2;
bio(115).size=[];
bio(115).isStruct=false;

bio(116).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p5';
bio(116).sigName='';
bio(116).portIdx=4;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.SpeedRequest';
bio(116).ndims=2;
bio(116).size=[];
bio(116).isStruct=false;

bio(117).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant';
bio(117).sigName='';
bio(117).portIdx=0;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant_a';
bio(117).ndims=2;
bio(117).size=[];
bio(117).isStruct=false;

bio(118).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant1';
bio(118).sigName='';
bio(118).portIdx=0;
bio(118).dim=[1,1];
bio(118).sigWidth=1;
bio(118).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant1_a';
bio(118).ndims=2;
bio(118).size=[];
bio(118).isStruct=false;

bio(119).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1';
bio(119).sigName='DeviceMode';
bio(119).portIdx=0;
bio(119).dim=[1,1];
bio(119).sigWidth=1;
bio(119).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode_k';
bio(119).ndims=2;
bio(119).size=[];
bio(119).isStruct=false;

bio(120).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2';
bio(120).sigName='BrakeCtrl';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_l';
bio(120).ndims=2;
bio(120).size=[];
bio(120).isStruct=false;

bio(121).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3';
bio(121).sigName='ClearError';
bio(121).portIdx=0;
bio(121).dim=[1,1];
bio(121).sigWidth=1;
bio(121).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError_h';
bio(121).ndims=2;
bio(121).size=[];
bio(121).isStruct=false;

bio(122).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single4';
bio(122).sigName='PowerEnable';
bio(122).portIdx=0;
bio(122).dim=[1,1];
bio(122).sigWidth=1;
bio(122).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable_k';
bio(122).ndims=2;
bio(122).size=[];
bio(122).isStruct=false;

bio(123).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p1';
bio(123).sigName='';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.ClearError';
bio(123).ndims=2;
bio(123).size=[];
bio(123).isStruct=false;

bio(124).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p2';
bio(124).sigName='';
bio(124).portIdx=1;
bio(124).dim=[1,1];
bio(124).sigWidth=1;
bio(124).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.DeviceMode';
bio(124).ndims=2;
bio(124).size=[];
bio(124).isStruct=false;

bio(125).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p3';
bio(125).sigName='';
bio(125).portIdx=2;
bio(125).dim=[1,1];
bio(125).sigWidth=1;
bio(125).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.BrakeCtrl';
bio(125).ndims=2;
bio(125).size=[];
bio(125).isStruct=false;

bio(126).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p4';
bio(126).sigName='';
bio(126).portIdx=3;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.PowerEnable';
bio(126).ndims=2;
bio(126).size=[];
bio(126).isStruct=false;

bio(127).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p5';
bio(127).sigName='';
bio(127).portIdx=4;
bio(127).dim=[1,1];
bio(127).sigWidth=1;
bio(127).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.SpeedRequest';
bio(127).ndims=2;
bio(127).size=[];
bio(127).isStruct=false;

bio(128).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant';
bio(128).sigName='';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant_j';
bio(128).ndims=2;
bio(128).size=[];
bio(128).isStruct=false;

bio(129).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant1';
bio(129).sigName='';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant1_i';
bio(129).ndims=2;
bio(129).size=[];
bio(129).isStruct=false;

bio(130).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1';
bio(130).sigName='DeviceMode';
bio(130).portIdx=0;
bio(130).dim=[1,1];
bio(130).sigWidth=1;
bio(130).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode_e';
bio(130).ndims=2;
bio(130).size=[];
bio(130).isStruct=false;

bio(131).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2';
bio(131).sigName='BrakeCtrl';
bio(131).portIdx=0;
bio(131).dim=[1,1];
bio(131).sigWidth=1;
bio(131).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_o';
bio(131).ndims=2;
bio(131).size=[];
bio(131).isStruct=false;

bio(132).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3';
bio(132).sigName='ClearError';
bio(132).portIdx=0;
bio(132).dim=[1,1];
bio(132).sigWidth=1;
bio(132).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError_o';
bio(132).ndims=2;
bio(132).size=[];
bio(132).isStruct=false;

bio(133).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single4';
bio(133).sigName='PowerEnable';
bio(133).portIdx=0;
bio(133).dim=[1,1];
bio(133).sigWidth=1;
bio(133).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable_d';
bio(133).ndims=2;
bio(133).size=[];
bio(133).isStruct=false;

bio(134).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1';
bio(134).sigName='';
bio(134).portIdx=0;
bio(134).dim=[1,1];
bio(134).sigWidth=1;
bio(134).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o1';
bio(134).ndims=2;
bio(134).size=[];
bio(134).isStruct=false;

bio(135).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2';
bio(135).sigName='';
bio(135).portIdx=1;
bio(135).dim=[1,1];
bio(135).sigWidth=1;
bio(135).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o2';
bio(135).ndims=2;
bio(135).size=[];
bio(135).isStruct=false;

bio(136).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3';
bio(136).sigName='';
bio(136).portIdx=2;
bio(136).dim=[1,1];
bio(136).sigWidth=1;
bio(136).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o3';
bio(136).ndims=2;
bio(136).size=[];
bio(136).isStruct=false;

bio(137).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4';
bio(137).sigName='';
bio(137).portIdx=3;
bio(137).dim=[1,1];
bio(137).sigWidth=1;
bio(137).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o4';
bio(137).ndims=2;
bio(137).size=[];
bio(137).isStruct=false;

bio(138).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5';
bio(138).sigName='';
bio(138).portIdx=4;
bio(138).dim=[1,1];
bio(138).sigWidth=1;
bio(138).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o5';
bio(138).ndims=2;
bio(138).size=[];
bio(138).isStruct=false;

bio(139).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6';
bio(139).sigName='';
bio(139).portIdx=5;
bio(139).dim=[8,1];
bio(139).sigWidth=8;
bio(139).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o6[0]';
bio(139).ndims=2;
bio(139).size=[];
bio(139).isStruct=false;

bio(140).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch';
bio(140).sigName='';
bio(140).portIdx=0;
bio(140).dim=[1,1];
bio(140).sigWidth=1;
bio(140).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch_c';
bio(140).ndims=2;
bio(140).size=[];
bio(140).isStruct=false;

bio(141).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant';
bio(141).sigName='';
bio(141).portIdx=0;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant_g';
bio(141).ndims=2;
bio(141).size=[];
bio(141).isStruct=false;

function len = getlenBIO
len = 141;

