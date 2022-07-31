function bio=SpeedgoatCANOpen2Buses1msbio
bio = [];
bio(1).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p1';
bio(1).sigName='Channel_AN1';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Channel_AN1';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p2';
bio(2).sigName='Channel_AN2';
bio(2).portIdx=1;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Channel_AN2';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p3';
bio(3).sigName='Channel_AN3';
bio(3).portIdx=2;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Channel_AN3';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p4';
bio(4).sigName='Channel_AN4';
bio(4).portIdx=3;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Channel_AN4';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='APT_RPDOs/RPDOs from APT/p1';
bio(5).sigName='APT_StatusWord';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_StatusWord';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='APT_RPDOs/RPDOs from APT/p2';
bio(6).sigName='APT_PhaseCurrent';
bio(6).portIdx=1;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_PhaseCurrent';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='APT_RPDOs/RPDOs from APT/p3';
bio(7).sigName='APT_Speed';
bio(7).portIdx=2;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_Speed';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='APT_RPDOs/RPDOs from APT/p4';
bio(8).sigName='APT_BusVoltage';
bio(8).portIdx=3;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_BusVoltage';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='APT_RPDOs/RPDOs from APT/p5';
bio(9).sigName='APT_MotorTemp';
bio(9).portIdx=4;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_MotorTemp';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='APT_RPDOs/RPDOs from APT/p6';
bio(10).sigName='APT_Temp';
bio(10).portIdx=5;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_Temp';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='APT_RPDOs/RPDOs from APT/p7';
bio(11).sigName='APT_ErrStatus';
bio(11).portIdx=6;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_ErrStatus';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='APT_RPDOs/RPDOs from APT/p8';
bio(12).sigName='APT_Direction';
bio(12).portIdx=7;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_Direction';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Dold_MiniMaster_RPDOs/Constant';
bio(13).sigName='Enable';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Enable_c';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Dunk_Brakes/RPDOs from Dunker #1/p1';
bio(14).sigName='DunkD_ActualCurrent';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkD_ActualCurrent';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Dunk_Brakes/RPDOs from Dunker #1/p2';
bio(15).sigName='DunkD_ActualVelocity';
bio(15).portIdx=1;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkD_ActualVelocity';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Dunk_LeftTilt/Signal Copy';
bio(16).sigName='TiltLeft_VelocityReq';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.TiltLeft_VelocityReq';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Dunk_LeftTilt/RPDOs from Dunker #1/p1';
bio(17).sigName='DunkC_ActualCurrent';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualCurrent';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Dunk_LeftTilt/RPDOs from Dunker #1/p2';
bio(18).sigName='DunkC_ActualVelocity';
bio(18).portIdx=1;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualVelocity';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Dunk_RightTilt/Signal Copy';
bio(19).sigName='TiltRight_CurrentReq';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.TiltRight_CurrentReq';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Dunk_RightTilt/RPDOs from Dunker #1/p1';
bio(20).sigName='DunkB_ActualCurrent';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkB_ActualCurrent';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Dunk_RightTilt/RPDOs from Dunker #1/p2';
bio(21).sigName='DunkB_ActualVelocity';
bio(21).portIdx=1;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkB_ActualVelocity';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Dunk_Steering/RPDOs from Dunker #1/p1';
bio(22).sigName='DunkA_ActualCurrent';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkA_ActualCurrent';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Dunk_Steering/RPDOs from Dunker #1/p2';
bio(23).sigName='DunkA_ActualVelocity';
bio(23).portIdx=1;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkA_ActualVelocity';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Encoder_RPDOs/RPDOs from Encoder/p1';
bio(24).sigName='Encoder_Actual_Position';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Encoder_Actual_Position';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Encoder_RPDOs/RPDOs from Encoder/p2';
bio(25).sigName='Encoder_Stored_Position';
bio(25).portIdx=1;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Encoder_Stored_Position';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Inclinometer_RPDOs/Conv/p1';
bio(26).sigName='X_Angle';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.xAngle';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Inclinometer_RPDOs/Conv/p2';
bio(27).sigName='Y_Angle';
bio(27).portIdx=1;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.yAngle';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Inclinometer_RPDOs/Constant';
bio(28).sigName='Enable';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Enable_l';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Inclinometer_RPDOs/RPDOs from Inclinometer /p1';
bio(29).sigName='xS';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.xS';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Inclinometer_RPDOs/RPDOs from Inclinometer /p2';
bio(30).sigName='xH';
bio(30).portIdx=1;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.xH';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Inclinometer_RPDOs/RPDOs from Inclinometer /p3';
bio(31).sigName='xL';
bio(31).portIdx=2;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.xL';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Inclinometer_RPDOs/RPDOs from Inclinometer /p4';
bio(32).sigName='yS';
bio(32).portIdx=3;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.yS';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Inclinometer_RPDOs/RPDOs from Inclinometer /p5';
bio(33).sigName='yH';
bio(33).portIdx=4;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.yH';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Inclinometer_RPDOs/RPDOs from Inclinometer /p6';
bio(34).sigName='yL';
bio(34).portIdx=5;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.yL';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Joystick_RPDOs/RPDOs from Joystick/p1';
bio(35).sigName='Joystick_ButtonsStatus';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Joystick_ButtonsStatus_e';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Joystick_RPDOs/RPDOs from Joystick/p2';
bio(36).sigName='Joystick_LongCmd';
bio(36).portIdx=1;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd_i';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Joystick_RPDOs/RPDOs from Joystick/p3';
bio(37).sigName='Joystick_LatCmd';
bio(37).portIdx=2;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Joystick_LatCmd';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Speedgoat_TPDOs/Subsystem/Cast To Single';
bio(38).sigName='AN_01';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.AN_01';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Speedgoat_TPDOs/Subsystem/Cast To Single1';
bio(39).sigName='AN_02';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.AN_02';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Speedgoat_TPDOs/Subsystem/Cast To Single2';
bio(40).sigName='AN_03';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.AN_03';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Speedgoat_TPDOs/Subsystem/Cast To Single3';
bio(41).sigName='AN_04';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.AN_04';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Speedgoat_TPDOs/Subsystem/Sine Wave';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.SineWave';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Trike Application Layer/CAN_A/Data Type Conversion22';
bio(43).sigName='DunkB_TPDO_ClearError';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_ClearError';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Trike Application Layer/CAN_A/Data Type Conversion23';
bio(44).sigName='DunkB_TPDO_BrakeCtrl';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_BrakeCtrl';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Trike Application Layer/CAN_A/Data Type Conversion24';
bio(45).sigName='DunkB_TPDO_DeviceMode';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DeviceMode';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Trike Application Layer/CAN_A/Data Type Conversion25';
bio(46).sigName='DunkB_TPDO_PowerEnable';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_PowerEnable';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Trike Application Layer/CAN_A/Data Type Conversion26';
bio(47).sigName='DunkB_TPDO_DesiredCurrent';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DesiredCurrent';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Trike Application Layer/CAN_A/Data Type Conversion27';
bio(48).sigName='DunkC_TPDO_ClearError';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_ClearError';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Trike Application Layer/CAN_A/Data Type Conversion28';
bio(49).sigName='DunkC_TPDO_BrakeCtrl';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_BrakeCtrl';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Trike Application Layer/CAN_A/Data Type Conversion29';
bio(50).sigName='DunkC_TPDO_DeviceMode';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DeviceMode';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Trike Application Layer/CAN_A/Data Type Conversion3';
bio(51).sigName='DunkA_TPDO_ClearError';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_ClearError';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Trike Application Layer/CAN_A/Data Type Conversion30';
bio(52).sigName='DunkC_TPDO_PowerEnable';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_PowerEnable';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Trike Application Layer/CAN_A/Data Type Conversion31';
bio(53).sigName='DunkC_TPDO_DesiredCurrent';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DesiredCurrent';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Trike Application Layer/CAN_A/Data Type Conversion32';
bio(54).sigName='DunkD_TPDO_ClearError';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_ClearError';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Trike Application Layer/CAN_A/Data Type Conversion33';
bio(55).sigName='DunkD_TPDO_BrakeCtrl';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_BrakeCtrl';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Trike Application Layer/CAN_A/Data Type Conversion34';
bio(56).sigName='DunkD_TPDO_DeviceMode';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DeviceMode';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Trike Application Layer/CAN_A/Data Type Conversion35';
bio(57).sigName='DunkD_TPDO_PowerEnable';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_PowerEnable';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Trike Application Layer/CAN_A/Data Type Conversion36';
bio(58).sigName='DunkD_TPDO_DesiredCurrent';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DesiredCurrent';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Trike Application Layer/CAN_A/Data Type Conversion4';
bio(59).sigName='DunkA_TPDO_BrakeCtrl';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_BrakeCtrl';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Trike Application Layer/CAN_A/Data Type Conversion6';
bio(60).sigName='DunkA_TPDO_DeviceMode';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DeviceMode';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Trike Application Layer/CAN_A/Data Type Conversion7';
bio(61).sigName='DunkA_TPDO_PowerEnable';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_PowerEnable';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Trike Application Layer/CAN_A/Data Type Conversion8';
bio(62).sigName='DunkA_TPDO_DesiredCurrent';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DesiredCurrent';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Trike Application Layer/CAN_B/HeartBeatgenerator';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.HB';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='Trike Application Layer/CAN_B/Data Type Conversion';
bio(64).sigName='APT_TPDO_ControlWord';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_ControlWord';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='Trike Application Layer/CAN_B/Data Type Conversion1';
bio(65).sigName='APT_TPDO_PedalPosition';
bio(65).portIdx=0;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_PedalPosition';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='Trike Application Layer/CAN_B/Data Type Conversion2';
bio(66).sigName='APT_TPDO_Heartbeat';
bio(66).portIdx=0;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_Heartbeat';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='Trike Application Layer/System_Control/Cast To Single';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[1,1];
bio(67).sigWidth=1;
bio(67).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CastToSingle_e';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Trike Application Layer/System_Init/APTControlWord';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.APT_CtrlWord';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='Trike Application Layer/System_Init/ButtonStatus';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Button';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='Trike Application Layer/System_Init/EnableCtrl';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Enable';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='Trike Application Layer/System_Init/Cast To Single3';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CastToSingle3_p';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CCaller_o1';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2';
bio(73).sigName='';
bio(73).portIdx=1;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CCaller_o2';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3';
bio(74).sigName='';
bio(74).portIdx=2;
bio(74).dim=[8,1];
bio(74).sigWidth=8;
bio(74).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CCaller_o3[0]';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p4';
bio(75).sigName='queue_in';
bio(75).portIdx=3;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.queue_in';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p5';
bio(76).sigName='queue_out';
bio(76).portIdx=4;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.queue_out';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1';
bio(77).sigName='';
bio(77).portIdx=0;
bio(77).dim=[1,1];
bio(77).sigWidth=1;
bio(77).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CCaller_o1_n';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2';
bio(78).sigName='';
bio(78).portIdx=1;
bio(78).dim=[1,1];
bio(78).sigWidth=1;
bio(78).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CCaller_o2_n';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3';
bio(79).sigName='';
bio(79).portIdx=2;
bio(79).dim=[8,1];
bio(79).sigWidth=8;
bio(79).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CCaller_o3_n[0]';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl/p1';
bio(80).sigName='Retract_current';
bio(80).portIdx=0;
bio(80).dim=[1,1];
bio(80).sigWidth=1;
bio(80).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_o';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl/p2';
bio(81).sigName='';
bio(81).portIdx=1;
bio(81).dim=[1,1];
bio(81).sigWidth=1;
bio(81).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b4';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='Trike Application Layer/System_Control/BrakeControl/Gain5';
bio(82).sigName='BrakesMotor_CurrentInit [mA]';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInitmA';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='Trike Application Layer/System_Control/BrakeControl/Sum4';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum4_e';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='Trike Application Layer/System_Control/SteeringControl/P Controller';
bio(84).sigName='';
bio(84).portIdx=0;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.SpeedReq';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='Trike Application Layer/System_Control/SteeringControl/Cast To Single';
bio(85).sigName='';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CastToSingle';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='Trike Application Layer/System_Control/SteeringControl/Cast To Single1';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CastToSingle1';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='Trike Application Layer/System_Control/SteeringControl/Robotics Convention';
bio(87).sigName='DirectionReq';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DirectionReq';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='Trike Application Layer/System_Control/SteeringControl/degree2rad';
bio(88).sigName='SteeringAngle [rad]';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.SteeringAnglerad';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='Trike Application Layer/System_Control/SteeringControl/dem';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.dem';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='Trike Application Layer/System_Control/SteeringControl/inc2deg';
bio(90).sigName='DirectionFb';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DirectionFb';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='Trike Application Layer/System_Control/SteeringControl/Memory1';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Memory1';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='Trike Application Layer/System_Control/SteeringControl/Sum';
bio(92).sigName='';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum_p';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='Trike Application Layer/System_Control/SteeringControl/Moving Average';
bio(93).sigName='';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.MovingAverage';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='Trike Application Layer/System_Control/Subsystem/Product';
bio(94).sigName='';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Product';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='Trike Application Layer/System_Control/Subsystem/Rate Transition';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[1,1];
bio(95).sigWidth=1;
bio(95).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.RateTransition';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='Trike Application Layer/System_Control/Subsystem/Switch';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[1,1];
bio(96).sigWidth=1;
bio(96).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Switch';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='Trike Application Layer/System_Control/Subsystem/Switch2';
bio(97).sigName='';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Switch2';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='Trike Application Layer/System_Control/Subsystem/Switch3';
bio(98).sigName='';
bio(98).portIdx=0;
bio(98).dim=[1,1];
bio(98).sigWidth=1;
bio(98).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Switch3';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='Trike Application Layer/System_Control/Subsystem/Switch4';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[1,1];
bio(99).sigWidth=1;
bio(99).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Switch4';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='Trike Application Layer/System_Control/TiltingControl/ServoTilting';
bio(100).sigName='TiltingAngle [deg]';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.TiltingAngle';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='Trike Application Layer/System_Control/TiltingControl/Abs';
bio(101).sigName='';
bio(101).portIdx=0;
bio(101).dim=[1,1];
bio(101).sigWidth=1;
bio(101).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Abs';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='Trike Application Layer/System_Control/TiltingControl/Cast To Single';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[1,1];
bio(102).sigWidth=1;
bio(102).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CastToSingle_p';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='Trike Application Layer/System_Control/TiltingControl/Cast To Single1';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_a';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='Trike Application Layer/System_Control/TiltingControl/Gain';
bio(104).sigName='RightTiltMotor_SpeedReq [rpm]';
bio(104).portIdx=0;
bio(104).dim=[1,1];
bio(104).sigWidth=1;
bio(104).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.RightTiltMotor_SpeedReqrpm_m';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='Trike Application Layer/System_Control/TiltingControl/Gain1';
bio(105).sigName='LeftTiltMotor_SpeedReq [rpm]';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_SpeedReqrpm';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='Trike Application Layer/System_Control/TiltingControl/Gain2';
bio(106).sigName='';
bio(106).portIdx=0;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Gain2_m';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

bio(107).blkName='Trike Application Layer/System_Control/TiltingControl/Gain3';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[1,1];
bio(107).sigWidth=1;
bio(107).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Gain3';
bio(107).ndims=2;
bio(107).size=[];
bio(107).isStruct=false;

bio(108).blkName='Trike Application Layer/System_Control/TiltingControl/Gain4';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Gain4';
bio(108).ndims=2;
bio(108).size=[];
bio(108).isStruct=false;

bio(109).blkName='Trike Application Layer/System_Control/TiltingControl/Gain5';
bio(109).sigName='';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Gain5';
bio(109).ndims=2;
bio(109).size=[];
bio(109).isStruct=false;

bio(110).blkName='Trike Application Layer/System_Control/TiltingControl/Gain6';
bio(110).sigName='LeftTiltMotor_CurrentReq [mA]';
bio(110).portIdx=0;
bio(110).dim=[1,1];
bio(110).sigWidth=1;
bio(110).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA';
bio(110).ndims=2;
bio(110).size=[];
bio(110).isStruct=false;

bio(111).blkName='Trike Application Layer/System_Control/TiltingControl/degree2m';
bio(111).sigName='PosReq [m]';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.PosReqm';
bio(111).ndims=2;
bio(111).size=[];
bio(111).isStruct=false;

bio(112).blkName='Trike Application Layer/System_Control/TiltingControl/n';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.n';
bio(112).ndims=2;
bio(112).size=[];
bio(112).isStruct=false;

bio(113).blkName='Trike Application Layer/System_Control/TiltingControl/Sine Wave1';
bio(113).sigName='TiltingAngle_sinreq [deg]';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_sinreqdeg_c';
bio(113).ndims=2;
bio(113).size=[];
bio(113).isStruct=false;

bio(114).blkName='Trike Application Layer/System_Control/TiltingControl/Sine Wave2';
bio(114).sigName='';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.SineWave2';
bio(114).ndims=2;
bio(114).size=[];
bio(114).isStruct=false;

bio(115).blkName='Trike Application Layer/System_Control/TiltingControl/Sum1';
bio(115).sigName='';
bio(115).portIdx=0;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum1';
bio(115).ndims=2;
bio(115).size=[];
bio(115).isStruct=false;

bio(116).blkName='Trike Application Layer/System_Control/TiltingControl/Manual Switch';
bio(116).sigName='LeftTiltMotor_CurrentReq [mA]';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_m';
bio(116).ndims=2;
bio(116).size=[];
bio(116).isStruct=false;

bio(117).blkName='Trike Application Layer/System_Control/TiltingControl/Manual Switch1';
bio(117).sigName='LeftTiltMotor_CurrentReq [mA]';
bio(117).portIdx=0;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_n';
bio(117).ndims=2;
bio(117).size=[];
bio(117).isStruct=false;

bio(118).blkName='Trike Application Layer/System_Control/TiltingControl/Manual Switch3';
bio(118).sigName='';
bio(118).portIdx=0;
bio(118).dim=[1,1];
bio(118).sigWidth=1;
bio(118).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ManualSwitch3';
bio(118).ndims=2;
bio(118).size=[];
bio(118).isStruct=false;

bio(119).blkName='Trike Application Layer/System_Control/TiltingControl/Manual Switch4';
bio(119).sigName='';
bio(119).portIdx=0;
bio(119).dim=[1,1];
bio(119).sigWidth=1;
bio(119).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ManualSwitch4';
bio(119).ndims=2;
bio(119).size=[];
bio(119).isStruct=false;

bio(120).blkName='Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold1';
bio(120).sigName='TiltingAngle_stepreqf [deg]';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_stepreqfdeg';
bio(120).ndims=2;
bio(120).size=[];
bio(120).isStruct=false;

bio(121).blkName='Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold2';
bio(121).sigName='';
bio(121).portIdx=0;
bio(121).dim=[1,1];
bio(121).sigWidth=1;
bio(121).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold2';
bio(121).ndims=2;
bio(121).size=[];
bio(121).isStruct=false;

bio(122).blkName='Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold3';
bio(122).sigName='';
bio(122).portIdx=0;
bio(122).dim=[1,1];
bio(122).sigWidth=1;
bio(122).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3';
bio(122).ndims=2;
bio(122).size=[];
bio(122).isStruct=false;

bio(123).blkName='Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold4';
bio(123).sigName='';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold4';
bio(123).ndims=2;
bio(123).size=[];
bio(123).isStruct=false;

bio(124).blkName='Trike Application Layer/System_Control/TiltingControl/Moving Average';
bio(124).sigName='Fb_Angle_Filt [deg]';
bio(124).portIdx=0;
bio(124).dim=[1,1];
bio(124).sigWidth=1;
bio(124).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Fb_Angle_Filtdeg';
bio(124).ndims=2;
bio(124).size=[];
bio(124).isStruct=false;

bio(125).blkName='Trike Application Layer/System_Control/TractionControl/Abs';
bio(125).sigName='TractionReq';
bio(125).portIdx=0;
bio(125).dim=[1,1];
bio(125).sigWidth=1;
bio(125).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.TractionReq_a';
bio(125).ndims=2;
bio(125).size=[];
bio(125).isStruct=false;

bio(126).blkName='Trike Application Layer/System_Control/TractionControl/Cast To Single1';
bio(126).sigName='';
bio(126).portIdx=0;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_e';
bio(126).ndims=2;
bio(126).size=[];
bio(126).isStruct=false;

bio(127).blkName='Trike Application Layer/System_Control/TractionControl/Cast To Single2';
bio(127).sigName='';
bio(127).portIdx=0;
bio(127).dim=[1,1];
bio(127).sigWidth=1;
bio(127).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CastToSingle2';
bio(127).ndims=2;
bio(127).size=[];
bio(127).isStruct=false;

bio(128).blkName='Trike Application Layer/System_Control/TractionControl/Cast To Single3';
bio(128).sigName='';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CastToSingle3';
bio(128).ndims=2;
bio(128).size=[];
bio(128).isStruct=false;

bio(129).blkName='Trike Application Layer/System_Control/TractionControl/Gain1';
bio(129).sigName='';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Gain1_e';
bio(129).ndims=2;
bio(129).size=[];
bio(129).isStruct=false;

bio(130).blkName='Trike Application Layer/System_Control/TractionControl/Gain2';
bio(130).sigName='Speed_SI';
bio(130).portIdx=0;
bio(130).dim=[1,1];
bio(130).sigWidth=1;
bio(130).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Speed_SI';
bio(130).ndims=2;
bio(130).size=[];
bio(130).isStruct=false;

bio(131).blkName='Trike Application Layer/System_Control/TractionControl/WheelRadius';
bio(131).sigName='VehSpeed_SI';
bio(131).portIdx=0;
bio(131).dim=[1,1];
bio(131).sigWidth=1;
bio(131).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.VehSpeed_SI';
bio(131).ndims=2;
bio(131).size=[];
bio(131).isStruct=false;

bio(132).blkName='Trike Application Layer/System_Control/TractionControl/m//s2Km//h';
bio(132).sigName='VehSpeed_Km/h';
bio(132).portIdx=0;
bio(132).dim=[1,1];
bio(132).sigWidth=1;
bio(132).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.VehSpeed_Kmh';
bio(132).ndims=2;
bio(132).size=[];
bio(132).isStruct=false;

bio(133).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p1';
bio(133).sigName='';
bio(133).portIdx=0;
bio(133).dim=[1,1];
bio(133).sigWidth=1;
bio(133).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ClearError_k';
bio(133).ndims=2;
bio(133).size=[];
bio(133).isStruct=false;

bio(134).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p2';
bio(134).sigName='';
bio(134).portIdx=1;
bio(134).dim=[1,1];
bio(134).sigWidth=1;
bio(134).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DeviceMode_b';
bio(134).ndims=2;
bio(134).size=[];
bio(134).isStruct=false;

bio(135).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p3';
bio(135).sigName='';
bio(135).portIdx=2;
bio(135).dim=[1,1];
bio(135).sigWidth=1;
bio(135).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n';
bio(135).ndims=2;
bio(135).size=[];
bio(135).isStruct=false;

bio(136).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p4';
bio(136).sigName='';
bio(136).portIdx=3;
bio(136).dim=[1,1];
bio(136).sigWidth=1;
bio(136).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.PowerEnable_au';
bio(136).ndims=2;
bio(136).size=[];
bio(136).isStruct=false;

bio(137).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p5';
bio(137).sigName='';
bio(137).portIdx=4;
bio(137).dim=[1,1];
bio(137).sigWidth=1;
bio(137).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit';
bio(137).ndims=2;
bio(137).size=[];
bio(137).isStruct=false;

bio(138).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p6';
bio(138).sigName='';
bio(138).portIdx=5;
bio(138).dim=[1,1];
bio(138).sigWidth=1;
bio(138).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.InitStatus_a';
bio(138).ndims=2;
bio(138).size=[];
bio(138).isStruct=false;

bio(139).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant';
bio(139).sigName='';
bio(139).portIdx=0;
bio(139).dim=[1,1];
bio(139).sigWidth=1;
bio(139).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Constant';
bio(139).ndims=2;
bio(139).size=[];
bio(139).isStruct=false;

bio(140).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single';
bio(140).sigName='DeviceMode';
bio(140).portIdx=0;
bio(140).dim=[1,1];
bio(140).sigWidth=1;
bio(140).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DeviceMode_g';
bio(140).ndims=2;
bio(140).size=[];
bio(140).isStruct=false;

bio(141).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1';
bio(141).sigName='ClearError';
bio(141).portIdx=0;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ClearError_m';
bio(141).ndims=2;
bio(141).size=[];
bio(141).isStruct=false;

bio(142).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2';
bio(142).sigName='BrakeCtrl';
bio(142).portIdx=0;
bio(142).dim=[1,1];
bio(142).sigWidth=1;
bio(142).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k2';
bio(142).ndims=2;
bio(142).size=[];
bio(142).isStruct=false;

bio(143).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3';
bio(143).sigName='PowerEnable';
bio(143).portIdx=0;
bio(143).dim=[1,1];
bio(143).sigWidth=1;
bio(143).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.PowerEnable_p';
bio(143).ndims=2;
bio(143).size=[];
bio(143).isStruct=false;

bio(144).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single4';
bio(144).sigName='CurrentInit';
bio(144).portIdx=0;
bio(144).dim=[1,1];
bio(144).sigWidth=1;
bio(144).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CurrentInit';
bio(144).ndims=2;
bio(144).size=[];
bio(144).isStruct=false;

bio(145).blkName='Trike Application Layer/System_Init/Enable/Sum';
bio(145).sigName='';
bio(145).portIdx=0;
bio(145).dim=[1,1];
bio(145).sigWidth=1;
bio(145).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum_b';
bio(145).ndims=2;
bio(145).size=[];
bio(145).isStruct=false;

bio(146).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p1';
bio(146).sigName='';
bio(146).portIdx=0;
bio(146).dim=[1,1];
bio(146).sigWidth=1;
bio(146).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ClearError_n';
bio(146).ndims=2;
bio(146).size=[];
bio(146).isStruct=false;

bio(147).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p2';
bio(147).sigName='';
bio(147).portIdx=1;
bio(147).dim=[1,1];
bio(147).sigWidth=1;
bio(147).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DeviceMode_o';
bio(147).ndims=2;
bio(147).size=[];
bio(147).isStruct=false;

bio(148).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p3';
bio(148).sigName='';
bio(148).portIdx=2;
bio(148).dim=[1,1];
bio(148).sigWidth=1;
bio(148).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b';
bio(148).ndims=2;
bio(148).size=[];
bio(148).isStruct=false;

bio(149).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p4';
bio(149).sigName='';
bio(149).portIdx=3;
bio(149).dim=[1,1];
bio(149).sigWidth=1;
bio(149).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.PowerEnable_a';
bio(149).ndims=2;
bio(149).size=[];
bio(149).isStruct=false;

bio(150).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p5';
bio(150).sigName='';
bio(150).portIdx=4;
bio(150).dim=[1,1];
bio(150).sigWidth=1;
bio(150).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.InitStatus_f';
bio(150).ndims=2;
bio(150).size=[];
bio(150).isStruct=false;

bio(151).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant';
bio(151).sigName='';
bio(151).portIdx=0;
bio(151).dim=[1,1];
bio(151).sigWidth=1;
bio(151).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Constant_j';
bio(151).ndims=2;
bio(151).size=[];
bio(151).isStruct=false;

bio(152).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single';
bio(152).sigName='DeviceMode';
bio(152).portIdx=0;
bio(152).dim=[1,1];
bio(152).sigWidth=1;
bio(152).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DeviceMode_e';
bio(152).ndims=2;
bio(152).size=[];
bio(152).isStruct=false;

bio(153).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1';
bio(153).sigName='ClearError';
bio(153).portIdx=0;
bio(153).dim=[1,1];
bio(153).sigWidth=1;
bio(153).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ClearError_mc';
bio(153).ndims=2;
bio(153).size=[];
bio(153).isStruct=false;

bio(154).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2';
bio(154).sigName='BrakeCtrl';
bio(154).portIdx=0;
bio(154).dim=[1,1];
bio(154).sigWidth=1;
bio(154).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_mu';
bio(154).ndims=2;
bio(154).size=[];
bio(154).isStruct=false;

bio(155).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3';
bio(155).sigName='PowerEnable';
bio(155).portIdx=0;
bio(155).dim=[1,1];
bio(155).sigWidth=1;
bio(155).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i4';
bio(155).ndims=2;
bio(155).size=[];
bio(155).isStruct=false;

bio(156).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p1';
bio(156).sigName='';
bio(156).portIdx=0;
bio(156).dim=[1,1];
bio(156).sigWidth=1;
bio(156).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ClearError_h';
bio(156).ndims=2;
bio(156).size=[];
bio(156).isStruct=false;

bio(157).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p2';
bio(157).sigName='';
bio(157).portIdx=1;
bio(157).dim=[1,1];
bio(157).sigWidth=1;
bio(157).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DeviceMode_f';
bio(157).ndims=2;
bio(157).size=[];
bio(157).isStruct=false;

bio(158).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p3';
bio(158).sigName='';
bio(158).portIdx=2;
bio(158).dim=[1,1];
bio(158).sigWidth=1;
bio(158).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m';
bio(158).ndims=2;
bio(158).size=[];
bio(158).isStruct=false;

bio(159).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p4';
bio(159).sigName='';
bio(159).portIdx=3;
bio(159).dim=[1,1];
bio(159).sigWidth=1;
bio(159).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.PowerEnable_m';
bio(159).ndims=2;
bio(159).size=[];
bio(159).isStruct=false;

bio(160).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p5';
bio(160).sigName='';
bio(160).portIdx=4;
bio(160).dim=[1,1];
bio(160).sigWidth=1;
bio(160).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.InitStatus_k';
bio(160).ndims=2;
bio(160).size=[];
bio(160).isStruct=false;

bio(161).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant';
bio(161).sigName='';
bio(161).portIdx=0;
bio(161).dim=[1,1];
bio(161).sigWidth=1;
bio(161).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Constant_m';
bio(161).ndims=2;
bio(161).size=[];
bio(161).isStruct=false;

bio(162).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single';
bio(162).sigName='DeviceMode';
bio(162).portIdx=0;
bio(162).dim=[1,1];
bio(162).sigWidth=1;
bio(162).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DeviceMode_h';
bio(162).ndims=2;
bio(162).size=[];
bio(162).isStruct=false;

bio(163).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1';
bio(163).sigName='ClearError';
bio(163).portIdx=0;
bio(163).dim=[1,1];
bio(163).sigWidth=1;
bio(163).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ClearError_j';
bio(163).ndims=2;
bio(163).size=[];
bio(163).isStruct=false;

bio(164).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2';
bio(164).sigName='BrakeCtrl';
bio(164).portIdx=0;
bio(164).dim=[1,1];
bio(164).sigWidth=1;
bio(164).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_bj';
bio(164).ndims=2;
bio(164).size=[];
bio(164).isStruct=false;

bio(165).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3';
bio(165).sigName='PowerEnable';
bio(165).portIdx=0;
bio(165).dim=[1,1];
bio(165).sigWidth=1;
bio(165).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.PowerEnable_ar';
bio(165).ndims=2;
bio(165).size=[];
bio(165).isStruct=false;

bio(166).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p1';
bio(166).sigName='';
bio(166).portIdx=0;
bio(166).dim=[1,1];
bio(166).sigWidth=1;
bio(166).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ClearError';
bio(166).ndims=2;
bio(166).size=[];
bio(166).isStruct=false;

bio(167).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p2';
bio(167).sigName='';
bio(167).portIdx=1;
bio(167).dim=[1,1];
bio(167).sigWidth=1;
bio(167).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DeviceMode';
bio(167).ndims=2;
bio(167).size=[];
bio(167).isStruct=false;

bio(168).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p3';
bio(168).sigName='';
bio(168).portIdx=2;
bio(168).dim=[1,1];
bio(168).sigWidth=1;
bio(168).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl';
bio(168).ndims=2;
bio(168).size=[];
bio(168).isStruct=false;

bio(169).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p4';
bio(169).sigName='';
bio(169).portIdx=3;
bio(169).dim=[1,1];
bio(169).sigWidth=1;
bio(169).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.PowerEnable';
bio(169).ndims=2;
bio(169).size=[];
bio(169).isStruct=false;

bio(170).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p5';
bio(170).sigName='';
bio(170).portIdx=4;
bio(170).dim=[1,1];
bio(170).sigWidth=1;
bio(170).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.InitStatus';
bio(170).ndims=2;
bio(170).size=[];
bio(170).isStruct=false;

bio(171).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant';
bio(171).sigName='';
bio(171).portIdx=0;
bio(171).dim=[1,1];
bio(171).sigWidth=1;
bio(171).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Constant_e';
bio(171).ndims=2;
bio(171).size=[];
bio(171).isStruct=false;

bio(172).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single';
bio(172).sigName='DeviceMode';
bio(172).portIdx=0;
bio(172).dim=[1,1];
bio(172).sigWidth=1;
bio(172).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DeviceMode_d';
bio(172).ndims=2;
bio(172).size=[];
bio(172).isStruct=false;

bio(173).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1';
bio(173).sigName='ClearError';
bio(173).portIdx=0;
bio(173).dim=[1,1];
bio(173).sigWidth=1;
bio(173).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ClearError_jv';
bio(173).ndims=2;
bio(173).size=[];
bio(173).isStruct=false;

bio(174).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2';
bio(174).sigName='BrakeCtrl';
bio(174).portIdx=0;
bio(174).dim=[1,1];
bio(174).sigWidth=1;
bio(174).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k';
bio(174).ndims=2;
bio(174).size=[];
bio(174).isStruct=false;

bio(175).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3';
bio(175).sigName='PowerEnable';
bio(175).portIdx=0;
bio(175).dim=[1,1];
bio(175).sigWidth=1;
bio(175).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i';
bio(175).ndims=2;
bio(175).size=[];
bio(175).isStruct=false;

bio(176).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1';
bio(176).sigName='DataPresent';
bio(176).portIdx=0;
bio(176).dim=[1,1];
bio(176).sigWidth=1;
bio(176).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DataPresent';
bio(176).ndims=2;
bio(176).size=[];
bio(176).isStruct=false;

bio(177).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2';
bio(177).sigName='';
bio(177).portIdx=1;
bio(177).dim=[1,1];
bio(177).sigWidth=1;
bio(177).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o2';
bio(177).ndims=2;
bio(177).size=[];
bio(177).isStruct=false;

bio(178).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3';
bio(178).sigName='';
bio(178).portIdx=2;
bio(178).dim=[1,1];
bio(178).sigWidth=1;
bio(178).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o3';
bio(178).ndims=2;
bio(178).size=[];
bio(178).isStruct=false;

bio(179).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4';
bio(179).sigName='';
bio(179).portIdx=3;
bio(179).dim=[1,1];
bio(179).sigWidth=1;
bio(179).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o4';
bio(179).ndims=2;
bio(179).size=[];
bio(179).isStruct=false;

bio(180).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5';
bio(180).sigName='';
bio(180).portIdx=4;
bio(180).dim=[1,1];
bio(180).sigWidth=1;
bio(180).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o5';
bio(180).ndims=2;
bio(180).size=[];
bio(180).isStruct=false;

bio(181).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6';
bio(181).sigName='';
bio(181).portIdx=5;
bio(181).dim=[8,1];
bio(181).sigWidth=8;
bio(181).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o6[0]';
bio(181).ndims=2;
bio(181).size=[];
bio(181).isStruct=false;

bio(182).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1';
bio(182).sigName='';
bio(182).portIdx=0;
bio(182).dim=[1,1];
bio(182).sigWidth=1;
bio(182).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o1';
bio(182).ndims=2;
bio(182).size=[];
bio(182).isStruct=false;

bio(183).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2';
bio(183).sigName='';
bio(183).portIdx=1;
bio(183).dim=[1,1];
bio(183).sigWidth=1;
bio(183).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o2_e';
bio(183).ndims=2;
bio(183).size=[];
bio(183).isStruct=false;

bio(184).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3';
bio(184).sigName='';
bio(184).portIdx=2;
bio(184).dim=[1,1];
bio(184).sigWidth=1;
bio(184).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o3_m';
bio(184).ndims=2;
bio(184).size=[];
bio(184).isStruct=false;

bio(185).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4';
bio(185).sigName='';
bio(185).portIdx=3;
bio(185).dim=[1,1];
bio(185).sigWidth=1;
bio(185).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o4_a';
bio(185).ndims=2;
bio(185).size=[];
bio(185).isStruct=false;

bio(186).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5';
bio(186).sigName='';
bio(186).portIdx=4;
bio(186).dim=[1,1];
bio(186).sigWidth=1;
bio(186).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o5_h';
bio(186).ndims=2;
bio(186).size=[];
bio(186).isStruct=false;

bio(187).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6';
bio(187).sigName='';
bio(187).portIdx=5;
bio(187).dim=[8,1];
bio(187).sigWidth=8;
bio(187).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.CANRead_o6_h[0]';
bio(187).ndims=2;
bio(187).size=[];
bio(187).isStruct=false;

bio(188).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Retract';
bio(188).sigName='Retract_current';
bio(188).portIdx=0;
bio(188).dim=[1,1];
bio(188).sigWidth=1;
bio(188).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Br_CurrentReq';
bio(188).ndims=2;
bio(188).size=[];
bio(188).isStruct=false;

bio(189).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion';
bio(189).sigName='';
bio(189).portIdx=0;
bio(189).dim=[1,1];
bio(189).sigWidth=1;
bio(189).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion';
bio(189).ndims=2;
bio(189).size=[];
bio(189).isStruct=false;

bio(190).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion1';
bio(190).sigName='';
bio(190).portIdx=0;
bio(190).dim=[1,1];
bio(190).sigWidth=1;
bio(190).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_c';
bio(190).ndims=2;
bio(190).size=[];
bio(190).isStruct=false;

bio(191).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Amp2mAmp';
bio(191).sigName='BrakesMotor_CurrentReq';
bio(191).portIdx=0;
bio(191).dim=[1,1];
bio(191).sigWidth=1;
bio(191).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq';
bio(191).ndims=2;
bio(191).size=[];
bio(191).isStruct=false;

bio(192).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain1';
bio(192).sigName='';
bio(192).portIdx=0;
bio(192).dim=[1,1];
bio(192).sigWidth=1;
bio(192).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Gain1';
bio(192).ndims=2;
bio(192).size=[];
bio(192).isStruct=false;

bio(193).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain2';
bio(193).sigName='';
bio(193).portIdx=0;
bio(193).dim=[1,1];
bio(193).sigWidth=1;
bio(193).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Gain2';
bio(193).ndims=2;
bio(193).size=[];
bio(193).isStruct=false;

bio(194).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/GetInPercent';
bio(194).sigName='br_percent2';
bio(194).portIdx=0;
bio(194).dim=[1,1];
bio(194).sigWidth=1;
bio(194).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.br_percent2';
bio(194).ndims=2;
bio(194).size=[];
bio(194).isStruct=false;

bio(195).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation';
bio(195).sigName='';
bio(195).portIdx=0;
bio(195).dim=[1,1];
bio(195).sigWidth=1;
bio(195).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation';
bio(195).ndims=2;
bio(195).size=[];
bio(195).isStruct=false;

bio(196).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1';
bio(196).sigName='';
bio(196).portIdx=0;
bio(196).dim=[1,1];
bio(196).sigWidth=1;
bio(196).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation1';
bio(196).ndims=2;
bio(196).size=[];
bio(196).isStruct=false;

bio(197).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2';
bio(197).sigName='';
bio(197).portIdx=0;
bio(197).dim=[1,1];
bio(197).sigWidth=1;
bio(197).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation2';
bio(197).ndims=2;
bio(197).size=[];
bio(197).isStruct=false;

bio(198).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum';
bio(198).sigName='';
bio(198).portIdx=0;
bio(198).dim=[1,1];
bio(198).sigWidth=1;
bio(198).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum';
bio(198).ndims=2;
bio(198).size=[];
bio(198).isStruct=false;

bio(199).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum1';
bio(199).sigName='';
bio(199).portIdx=0;
bio(199).dim=[1,1];
bio(199).sigWidth=1;
bio(199).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum1_g';
bio(199).ndims=2;
bio(199).size=[];
bio(199).isStruct=false;

bio(200).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum2';
bio(200).sigName='';
bio(200).portIdx=0;
bio(200).dim=[1,1];
bio(200).sigWidth=1;
bio(200).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum2';
bio(200).ndims=2;
bio(200).size=[];
bio(200).isStruct=false;

bio(201).blkName='Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay';
bio(201).sigName='';
bio(201).portIdx=0;
bio(201).dim=[1,1];
bio(201).sigWidth=1;
bio(201).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Delay_o';
bio(201).ndims=2;
bio(201).size=[];
bio(201).isStruct=false;

bio(202).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt';
bio(202).sigName='DispLeft [Volt]';
bio(202).portIdx=0;
bio(202).dim=[1,1];
bio(202).sigWidth=1;
bio(202).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DispLeftVolt';
bio(202).ndims=2;
bio(202).size=[];
bio(202).isStruct=false;

bio(203).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter';
bio(203).sigName='DispLeft [m]';
bio(203).portIdx=0;
bio(203).dim=[1,1];
bio(203).sigWidth=1;
bio(203).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DispLeftm';
bio(203).ndims=2;
bio(203).size=[];
bio(203).isStruct=false;

bio(204).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1';
bio(204).sigName='';
bio(204).portIdx=0;
bio(204).dim=[1,1];
bio(204).sigWidth=1;
bio(204).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Memory1_l';
bio(204).ndims=2;
bio(204).size=[];
bio(204).isStruct=false;

bio(205).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Sum';
bio(205).sigName='DispLeftOffset [Volt]';
bio(205).portIdx=0;
bio(205).dim=[1,1];
bio(205).sigWidth=1;
bio(205).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DispLeftOffsetVolt';
bio(205).ndims=2;
bio(205).size=[];
bio(205).isStruct=false;

bio(206).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter';
bio(206).sigName='';
bio(206).portIdx=0;
bio(206).dim=[1,1];
bio(206).sigWidth=1;
bio(206).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter';
bio(206).ndims=2;
bio(206).size=[];
bio(206).isStruct=false;

bio(207).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/LSB2Volt';
bio(207).sigName='DispRight [Volt]';
bio(207).portIdx=0;
bio(207).dim=[1,1];
bio(207).sigWidth=1;
bio(207).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DispRightVolt';
bio(207).ndims=2;
bio(207).size=[];
bio(207).isStruct=false;

bio(208).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Volt2meter';
bio(208).sigName='DispRight [m]';
bio(208).portIdx=0;
bio(208).dim=[1,1];
bio(208).sigWidth=1;
bio(208).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DispRightm';
bio(208).ndims=2;
bio(208).size=[];
bio(208).isStruct=false;

bio(209).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Memory1';
bio(209).sigName='';
bio(209).portIdx=0;
bio(209).dim=[1,1];
bio(209).sigWidth=1;
bio(209).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Memory1_j';
bio(209).ndims=2;
bio(209).size=[];
bio(209).isStruct=false;

bio(210).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Sum';
bio(210).sigName='DispRightOffset [Volt]';
bio(210).portIdx=0;
bio(210).dim=[1,1];
bio(210).sigWidth=1;
bio(210).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DispRightOffsetVolt';
bio(210).ndims=2;
bio(210).size=[];
bio(210).isStruct=false;

bio(211).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Discrete Filter';
bio(211).sigName='';
bio(211).portIdx=0;
bio(211).dim=[1,1];
bio(211).sigWidth=1;
bio(211).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter_e';
bio(211).ndims=2;
bio(211).size=[];
bio(211).isStruct=false;

bio(212).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Comp_and_Timer/p1';
bio(212).sigName='e_out';
bio(212).portIdx=0;
bio(212).dim=[1,1];
bio(212).sigWidth=1;
bio(212).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.e_out_i';
bio(212).ndims=2;
bio(212).size=[];
bio(212).isStruct=false;

bio(213).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Comp_and_Timer/p2';
bio(213).sigName='timer';
bio(213).portIdx=1;
bio(213).dim=[1,1];
bio(213).sigWidth=1;
bio(213).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.timer_a';
bio(213).ndims=2;
bio(213).size=[];
bio(213).isStruct=false;

bio(214).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Derivative/p1';
bio(214).sigName='derivative';
bio(214).portIdx=0;
bio(214).dim=[1,1];
bio(214).sigWidth=1;
bio(214).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Derivative.ud';
bio(214).ndims=2;
bio(214).size=[];
bio(214).isStruct=false;

bio(215).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Derivative/p2';
bio(215).sigName='yf';
bio(215).portIdx=1;
bio(215).dim=[1,1];
bio(215).sigWidth=1;
bio(215).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Derivative.yf';
bio(215).ndims=2;
bio(215).size=[];
bio(215).isStruct=false;

bio(216).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Constant3';
bio(216).sigName='Hyst';
bio(216).portIdx=0;
bio(216).dim=[1,1];
bio(216).sigWidth=1;
bio(216).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Hyst_g';
bio(216).ndims=2;
bio(216).size=[];
bio(216).isStruct=false;

bio(217).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Data Type Conversion1';
bio(217).sigName='';
bio(217).portIdx=0;
bio(217).dim=[1,1];
bio(217).sigWidth=1;
bio(217).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1';
bio(217).ndims=2;
bio(217).size=[];
bio(217).isStruct=false;

bio(218).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Discrete-Time Integrator';
bio(218).sigName='Integral';
bio(218).portIdx=0;
bio(218).dim=[1,1];
bio(218).sigWidth=1;
bio(218).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Integral';
bio(218).ndims=2;
bio(218).size=[];
bio(218).isStruct=false;

bio(219).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/AntiWindup';
bio(219).sigName='';
bio(219).portIdx=0;
bio(219).dim=[1,1];
bio(219).sigWidth=1;
bio(219).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.AntiWindup';
bio(219).ndims=2;
bio(219).size=[];
bio(219).isStruct=false;

bio(220).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Integral Gain';
bio(220).sigName='';
bio(220).portIdx=0;
bio(220).dim=[1,1];
bio(220).sigWidth=1;
bio(220).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.IntegralGain';
bio(220).ndims=2;
bio(220).size=[];
bio(220).isStruct=false;

bio(221).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Proportional  Gain';
bio(221).sigName='Proportional';
bio(221).portIdx=0;
bio(221).dim=[1,1];
bio(221).sigWidth=1;
bio(221).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Proportional';
bio(221).ndims=2;
bio(221).size=[];
bio(221).isStruct=false;

bio(222).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/tometer';
bio(222).sigName='';
bio(222).portIdx=0;
bio(222).dim=[1,1];
bio(222).sigWidth=1;
bio(222).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.tometer';
bio(222).ndims=2;
bio(222).size=[];
bio(222).isStruct=false;

bio(223).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Product1';
bio(223).sigName='';
bio(223).portIdx=0;
bio(223).dim=[1,1];
bio(223).sigWidth=1;
bio(223).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Product1';
bio(223).ndims=2;
bio(223).size=[];
bio(223).isStruct=false;

bio(224).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Product2';
bio(224).sigName='';
bio(224).portIdx=0;
bio(224).dim=[1,1];
bio(224).sigWidth=1;
bio(224).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Product2';
bio(224).ndims=2;
bio(224).size=[];
bio(224).isStruct=false;

bio(225).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Saturation';
bio(225).sigName='';
bio(225).portIdx=0;
bio(225).dim=[1,1];
bio(225).sigWidth=1;
bio(225).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation_c';
bio(225).ndims=2;
bio(225).size=[];
bio(225).isStruct=false;

bio(226).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum';
bio(226).sigName='';
bio(226).portIdx=0;
bio(226).dim=[1,1];
bio(226).sigWidth=1;
bio(226).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum_c';
bio(226).ndims=2;
bio(226).size=[];
bio(226).isStruct=false;

bio(227).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum1';
bio(227).sigName='e_in';
bio(227).portIdx=0;
bio(227).dim=[1,1];
bio(227).sigWidth=1;
bio(227).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.e_in';
bio(227).ndims=2;
bio(227).size=[];
bio(227).isStruct=false;

bio(228).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum2';
bio(228).sigName='';
bio(228).portIdx=0;
bio(228).dim=[1,1];
bio(228).sigWidth=1;
bio(228).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum2_d';
bio(228).ndims=2;
bio(228).size=[];
bio(228).isStruct=false;

bio(229).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum4';
bio(229).sigName='';
bio(229).portIdx=0;
bio(229).dim=[1,1];
bio(229).sigWidth=1;
bio(229).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum4';
bio(229).ndims=2;
bio(229).size=[];
bio(229).isStruct=false;

bio(230).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Zero-Order Hold';
bio(230).sigName='';
bio(230).portIdx=0;
bio(230).dim=[1,1];
bio(230).sigWidth=1;
bio(230).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold';
bio(230).ndims=2;
bio(230).size=[];
bio(230).isStruct=false;

bio(231).blkName='Trike Application Layer/System_Control/TiltingControl/PID_Angle/Delay';
bio(231).sigName='';
bio(231).portIdx=0;
bio(231).dim=[1,1];
bio(231).sigWidth=1;
bio(231).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Delay';
bio(231).ndims=2;
bio(231).size=[];
bio(231).isStruct=false;

bio(232).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Comp_and_Timer/p1';
bio(232).sigName='e_out';
bio(232).portIdx=0;
bio(232).dim=[1,1];
bio(232).sigWidth=1;
bio(232).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_f.e_out';
bio(232).ndims=2;
bio(232).size=[];
bio(232).isStruct=false;

bio(233).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Comp_and_Timer/p2';
bio(233).sigName='timer';
bio(233).portIdx=1;
bio(233).dim=[1,1];
bio(233).sigWidth=1;
bio(233).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_f.timer';
bio(233).ndims=2;
bio(233).size=[];
bio(233).isStruct=false;

bio(234).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Derivative/p1';
bio(234).sigName='derivative';
bio(234).portIdx=0;
bio(234).dim=[1,1];
bio(234).sigWidth=1;
bio(234).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_f.ud';
bio(234).ndims=2;
bio(234).size=[];
bio(234).isStruct=false;

bio(235).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Derivative/p2';
bio(235).sigName='yf';
bio(235).portIdx=1;
bio(235).dim=[1,1];
bio(235).sigWidth=1;
bio(235).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_f.yf';
bio(235).ndims=2;
bio(235).size=[];
bio(235).isStruct=false;

bio(236).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Data Type Conversion1';
bio(236).sigName='';
bio(236).portIdx=0;
bio(236).dim=[1,1];
bio(236).sigWidth=1;
bio(236).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_f';
bio(236).ndims=2;
bio(236).size=[];
bio(236).isStruct=false;

bio(237).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Discrete-Time Integrator';
bio(237).sigName='Integral';
bio(237).portIdx=0;
bio(237).dim=[1,1];
bio(237).sigWidth=1;
bio(237).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Integral_a';
bio(237).ndims=2;
bio(237).size=[];
bio(237).isStruct=false;

bio(238).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/AntiWindup';
bio(238).sigName='';
bio(238).portIdx=0;
bio(238).dim=[1,1];
bio(238).sigWidth=1;
bio(238).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.AntiWindup_c';
bio(238).ndims=2;
bio(238).size=[];
bio(238).isStruct=false;

bio(239).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Integral Gain';
bio(239).sigName='';
bio(239).portIdx=0;
bio(239).dim=[1,1];
bio(239).sigWidth=1;
bio(239).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.IntegralGain_h';
bio(239).ndims=2;
bio(239).size=[];
bio(239).isStruct=false;

bio(240).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Proportional  Gain';
bio(240).sigName='Proportional';
bio(240).portIdx=0;
bio(240).dim=[1,1];
bio(240).sigWidth=1;
bio(240).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Proportional_l';
bio(240).ndims=2;
bio(240).size=[];
bio(240).isStruct=false;

bio(241).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/c1';
bio(241).sigName='';
bio(241).portIdx=0;
bio(241).dim=[1,1];
bio(241).sigWidth=1;
bio(241).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.c1';
bio(241).ndims=2;
bio(241).size=[];
bio(241).isStruct=false;

bio(242).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/degree2m';
bio(242).sigName='Hyst';
bio(242).portIdx=0;
bio(242).dim=[1,1];
bio(242).sigWidth=1;
bio(242).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Hyst_n';
bio(242).ndims=2;
bio(242).size=[];
bio(242).isStruct=false;

bio(243).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Product1';
bio(243).sigName='';
bio(243).portIdx=0;
bio(243).dim=[1,1];
bio(243).sigWidth=1;
bio(243).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Product1_l';
bio(243).ndims=2;
bio(243).size=[];
bio(243).isStruct=false;

bio(244).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Product2';
bio(244).sigName='';
bio(244).portIdx=0;
bio(244).dim=[1,1];
bio(244).sigWidth=1;
bio(244).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Product2_n';
bio(244).ndims=2;
bio(244).size=[];
bio(244).isStruct=false;

bio(245).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation';
bio(245).sigName='';
bio(245).portIdx=0;
bio(245).dim=[1,1];
bio(245).sigWidth=1;
bio(245).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation_b';
bio(245).ndims=2;
bio(245).size=[];
bio(245).isStruct=false;

bio(246).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation2';
bio(246).sigName='';
bio(246).portIdx=0;
bio(246).dim=[1,1];
bio(246).sigWidth=1;
bio(246).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation2_k';
bio(246).ndims=2;
bio(246).size=[];
bio(246).isStruct=false;

bio(247).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum';
bio(247).sigName='';
bio(247).portIdx=0;
bio(247).dim=[1,1];
bio(247).sigWidth=1;
bio(247).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum_j';
bio(247).ndims=2;
bio(247).size=[];
bio(247).isStruct=false;

bio(248).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum1';
bio(248).sigName='e_in';
bio(248).portIdx=0;
bio(248).dim=[1,1];
bio(248).sigWidth=1;
bio(248).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.e_in_p';
bio(248).ndims=2;
bio(248).size=[];
bio(248).isStruct=false;

bio(249).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum2';
bio(249).sigName='';
bio(249).portIdx=0;
bio(249).dim=[1,1];
bio(249).sigWidth=1;
bio(249).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum2_d4';
bio(249).ndims=2;
bio(249).size=[];
bio(249).isStruct=false;

bio(250).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum4';
bio(250).sigName='';
bio(250).portIdx=0;
bio(250).dim=[1,1];
bio(250).sigWidth=1;
bio(250).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum4_d';
bio(250).ndims=2;
bio(250).size=[];
bio(250).isStruct=false;

bio(251).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Zero-Order Hold';
bio(251).sigName='';
bio(251).portIdx=0;
bio(251).dim=[1,1];
bio(251).sigWidth=1;
bio(251).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_m';
bio(251).ndims=2;
bio(251).size=[];
bio(251).isStruct=false;

bio(252).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Delay';
bio(252).sigName='';
bio(252).portIdx=0;
bio(252).dim=[1,1];
bio(252).sigWidth=1;
bio(252).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Delay_e';
bio(252).ndims=2;
bio(252).size=[];
bio(252).isStruct=false;

bio(253).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Comp_and_Timer/p1';
bio(253).sigName='e_out';
bio(253).portIdx=0;
bio(253).dim=[1,1];
bio(253).sigWidth=1;
bio(253).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.e_out';
bio(253).ndims=2;
bio(253).size=[];
bio(253).isStruct=false;

bio(254).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Comp_and_Timer/p2';
bio(254).sigName='timer';
bio(254).portIdx=1;
bio(254).dim=[1,1];
bio(254).sigWidth=1;
bio(254).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.timer';
bio(254).ndims=2;
bio(254).size=[];
bio(254).isStruct=false;

bio(255).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Derivative/p1';
bio(255).sigName='derivative';
bio(255).portIdx=0;
bio(255).dim=[1,1];
bio(255).sigWidth=1;
bio(255).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_g.ud';
bio(255).ndims=2;
bio(255).size=[];
bio(255).isStruct=false;

bio(256).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Derivative/p2';
bio(256).sigName='yf';
bio(256).portIdx=1;
bio(256).dim=[1,1];
bio(256).sigWidth=1;
bio(256).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_g.yf';
bio(256).ndims=2;
bio(256).size=[];
bio(256).isStruct=false;

bio(257).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Data Type Conversion1';
bio(257).sigName='';
bio(257).portIdx=0;
bio(257).dim=[1,1];
bio(257).sigWidth=1;
bio(257).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_m';
bio(257).ndims=2;
bio(257).size=[];
bio(257).isStruct=false;

bio(258).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Discrete-Time Integrator';
bio(258).sigName='Integral';
bio(258).portIdx=0;
bio(258).dim=[1,1];
bio(258).sigWidth=1;
bio(258).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Integral_j';
bio(258).ndims=2;
bio(258).size=[];
bio(258).isStruct=false;

bio(259).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/AntiWindup';
bio(259).sigName='';
bio(259).portIdx=0;
bio(259).dim=[1,1];
bio(259).sigWidth=1;
bio(259).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.AntiWindup_p';
bio(259).ndims=2;
bio(259).size=[];
bio(259).isStruct=false;

bio(260).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Integral Gain';
bio(260).sigName='';
bio(260).portIdx=0;
bio(260).dim=[1,1];
bio(260).sigWidth=1;
bio(260).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.IntegralGain_f';
bio(260).ndims=2;
bio(260).size=[];
bio(260).isStruct=false;

bio(261).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Proportional  Gain';
bio(261).sigName='Proportional';
bio(261).portIdx=0;
bio(261).dim=[1,1];
bio(261).sigWidth=1;
bio(261).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Proportional_b';
bio(261).ndims=2;
bio(261).size=[];
bio(261).isStruct=false;

bio(262).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/c1';
bio(262).sigName='';
bio(262).portIdx=0;
bio(262).dim=[1,1];
bio(262).sigWidth=1;
bio(262).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.c1_d';
bio(262).ndims=2;
bio(262).size=[];
bio(262).isStruct=false;

bio(263).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/degree2m';
bio(263).sigName='Hyst';
bio(263).portIdx=0;
bio(263).dim=[1,1];
bio(263).sigWidth=1;
bio(263).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Hyst_e';
bio(263).ndims=2;
bio(263).size=[];
bio(263).isStruct=false;

bio(264).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Product1';
bio(264).sigName='';
bio(264).portIdx=0;
bio(264).dim=[1,1];
bio(264).sigWidth=1;
bio(264).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Product1_g';
bio(264).ndims=2;
bio(264).size=[];
bio(264).isStruct=false;

bio(265).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Product2';
bio(265).sigName='';
bio(265).portIdx=0;
bio(265).dim=[1,1];
bio(265).sigWidth=1;
bio(265).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Product2_a';
bio(265).ndims=2;
bio(265).size=[];
bio(265).isStruct=false;

bio(266).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Saturation';
bio(266).sigName='';
bio(266).portIdx=0;
bio(266).dim=[1,1];
bio(266).sigWidth=1;
bio(266).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation_d';
bio(266).ndims=2;
bio(266).size=[];
bio(266).isStruct=false;

bio(267).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Saturation2';
bio(267).sigName='';
bio(267).portIdx=0;
bio(267).dim=[1,1];
bio(267).sigWidth=1;
bio(267).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation2_i';
bio(267).ndims=2;
bio(267).size=[];
bio(267).isStruct=false;

bio(268).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Sum';
bio(268).sigName='';
bio(268).portIdx=0;
bio(268).dim=[1,1];
bio(268).sigWidth=1;
bio(268).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum_d';
bio(268).ndims=2;
bio(268).size=[];
bio(268).isStruct=false;

bio(269).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Sum1';
bio(269).sigName='e_in';
bio(269).portIdx=0;
bio(269).dim=[1,1];
bio(269).sigWidth=1;
bio(269).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.e_in_b';
bio(269).ndims=2;
bio(269).size=[];
bio(269).isStruct=false;

bio(270).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Sum2';
bio(270).sigName='';
bio(270).portIdx=0;
bio(270).dim=[1,1];
bio(270).sigWidth=1;
bio(270).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum2_o';
bio(270).ndims=2;
bio(270).size=[];
bio(270).isStruct=false;

bio(271).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Sum4';
bio(271).sigName='';
bio(271).portIdx=0;
bio(271).dim=[1,1];
bio(271).sigWidth=1;
bio(271).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum4_g';
bio(271).ndims=2;
bio(271).size=[];
bio(271).isStruct=false;

bio(272).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Zero-Order Hold';
bio(272).sigName='';
bio(272).portIdx=0;
bio(272).dim=[1,1];
bio(272).sigWidth=1;
bio(272).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_l';
bio(272).ndims=2;
bio(272).size=[];
bio(272).isStruct=false;

bio(273).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Delay';
bio(273).sigName='';
bio(273).portIdx=0;
bio(273).dim=[1,1];
bio(273).sigWidth=1;
bio(273).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Delay_b';
bio(273).ndims=2;
bio(273).size=[];
bio(273).isStruct=false;

bio(274).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Comp_and_Timer/p1';
bio(274).sigName='e_out';
bio(274).portIdx=0;
bio(274).dim=[1,1];
bio(274).sigWidth=1;
bio(274).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_b.e_out';
bio(274).ndims=2;
bio(274).size=[];
bio(274).isStruct=false;

bio(275).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Comp_and_Timer/p2';
bio(275).sigName='timer';
bio(275).portIdx=1;
bio(275).dim=[1,1];
bio(275).sigWidth=1;
bio(275).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_b.timer';
bio(275).ndims=2;
bio(275).size=[];
bio(275).isStruct=false;

bio(276).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Derivative/p1';
bio(276).sigName='derivative';
bio(276).portIdx=0;
bio(276).dim=[1,1];
bio(276).sigWidth=1;
bio(276).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_b.ud';
bio(276).ndims=2;
bio(276).size=[];
bio(276).isStruct=false;

bio(277).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Derivative/p2';
bio(277).sigName='yf';
bio(277).portIdx=1;
bio(277).dim=[1,1];
bio(277).sigWidth=1;
bio(277).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_b.yf';
bio(277).ndims=2;
bio(277).size=[];
bio(277).isStruct=false;

bio(278).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Data Type Conversion1';
bio(278).sigName='';
bio(278).portIdx=0;
bio(278).dim=[1,1];
bio(278).sigWidth=1;
bio(278).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_b';
bio(278).ndims=2;
bio(278).size=[];
bio(278).isStruct=false;

bio(279).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Discrete-Time Integrator';
bio(279).sigName='Integral';
bio(279).portIdx=0;
bio(279).dim=[1,1];
bio(279).sigWidth=1;
bio(279).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Integral_p';
bio(279).ndims=2;
bio(279).size=[];
bio(279).isStruct=false;

bio(280).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/AntiWindup';
bio(280).sigName='';
bio(280).portIdx=0;
bio(280).dim=[1,1];
bio(280).sigWidth=1;
bio(280).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.AntiWindup_pe';
bio(280).ndims=2;
bio(280).size=[];
bio(280).isStruct=false;

bio(281).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Integral Gain';
bio(281).sigName='';
bio(281).portIdx=0;
bio(281).dim=[1,1];
bio(281).sigWidth=1;
bio(281).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.IntegralGain_g';
bio(281).ndims=2;
bio(281).size=[];
bio(281).isStruct=false;

bio(282).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Proportional  Gain';
bio(282).sigName='Proportional';
bio(282).portIdx=0;
bio(282).dim=[1,1];
bio(282).sigWidth=1;
bio(282).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Proportional_j';
bio(282).ndims=2;
bio(282).size=[];
bio(282).isStruct=false;

bio(283).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/c1';
bio(283).sigName='';
bio(283).portIdx=0;
bio(283).dim=[1,1];
bio(283).sigWidth=1;
bio(283).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.c1_f';
bio(283).ndims=2;
bio(283).size=[];
bio(283).isStruct=false;

bio(284).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/degree2m';
bio(284).sigName='Hyst';
bio(284).portIdx=0;
bio(284).dim=[1,1];
bio(284).sigWidth=1;
bio(284).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Hyst_i';
bio(284).ndims=2;
bio(284).size=[];
bio(284).isStruct=false;

bio(285).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Product1';
bio(285).sigName='';
bio(285).portIdx=0;
bio(285).dim=[1,1];
bio(285).sigWidth=1;
bio(285).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Product1_a';
bio(285).ndims=2;
bio(285).size=[];
bio(285).isStruct=false;

bio(286).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Product2';
bio(286).sigName='';
bio(286).portIdx=0;
bio(286).dim=[1,1];
bio(286).sigWidth=1;
bio(286).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Product2_e';
bio(286).ndims=2;
bio(286).size=[];
bio(286).isStruct=false;

bio(287).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation';
bio(287).sigName='';
bio(287).portIdx=0;
bio(287).dim=[1,1];
bio(287).sigWidth=1;
bio(287).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation_m';
bio(287).ndims=2;
bio(287).size=[];
bio(287).isStruct=false;

bio(288).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation2';
bio(288).sigName='';
bio(288).portIdx=0;
bio(288).dim=[1,1];
bio(288).sigWidth=1;
bio(288).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Saturation2_g';
bio(288).ndims=2;
bio(288).size=[];
bio(288).isStruct=false;

bio(289).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum';
bio(289).sigName='';
bio(289).portIdx=0;
bio(289).dim=[1,1];
bio(289).sigWidth=1;
bio(289).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum_o';
bio(289).ndims=2;
bio(289).size=[];
bio(289).isStruct=false;

bio(290).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum1';
bio(290).sigName='e_in';
bio(290).portIdx=0;
bio(290).dim=[1,1];
bio(290).sigWidth=1;
bio(290).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.e_in_i';
bio(290).ndims=2;
bio(290).size=[];
bio(290).isStruct=false;

bio(291).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum2';
bio(291).sigName='';
bio(291).portIdx=0;
bio(291).dim=[1,1];
bio(291).sigWidth=1;
bio(291).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum2_j';
bio(291).ndims=2;
bio(291).size=[];
bio(291).isStruct=false;

bio(292).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum4';
bio(292).sigName='';
bio(292).portIdx=0;
bio(292).dim=[1,1];
bio(292).sigWidth=1;
bio(292).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum4_dx';
bio(292).ndims=2;
bio(292).size=[];
bio(292).isStruct=false;

bio(293).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Zero-Order Hold';
bio(293).sigName='';
bio(293).portIdx=0;
bio(293).dim=[1,1];
bio(293).sigWidth=1;
bio(293).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_a';
bio(293).ndims=2;
bio(293).size=[];
bio(293).isStruct=false;

bio(294).blkName='Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Delay';
bio(294).sigName='';
bio(294).portIdx=0;
bio(294).dim=[1,1];
bio(294).sigWidth=1;
bio(294).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Delay_d';
bio(294).ndims=2;
bio(294).size=[];
bio(294).isStruct=false;

bio(295).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Clock';
bio(295).sigName='';
bio(295).portIdx=0;
bio(295).dim=[1,1];
bio(295).sigWidth=1;
bio(295).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Clock';
bio(295).ndims=2;
bio(295).size=[];
bio(295).isStruct=false;

bio(296).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Output';
bio(296).sigName='';
bio(296).portIdx=0;
bio(296).dim=[1,1];
bio(296).sigWidth=1;
bio(296).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Output';
bio(296).ndims=2;
bio(296).size=[];
bio(296).isStruct=false;

bio(297).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Look-Up Table1';
bio(297).sigName='';
bio(297).portIdx=0;
bio(297).dim=[1,1];
bio(297).sigWidth=1;
bio(297).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.LookUpTable1';
bio(297).ndims=2;
bio(297).size=[];
bio(297).isStruct=false;

bio(298).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Math Function';
bio(298).sigName='';
bio(298).portIdx=0;
bio(298).dim=[1,1];
bio(298).sigWidth=1;
bio(298).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.MathFunction';
bio(298).ndims=2;
bio(298).size=[];
bio(298).isStruct=false;

bio(299).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Sum';
bio(299).sigName='';
bio(299).portIdx=0;
bio(299).dim=[1,1];
bio(299).sigWidth=1;
bio(299).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum_f';
bio(299).ndims=2;
bio(299).size=[];
bio(299).isStruct=false;

bio(300).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Clock';
bio(300).sigName='';
bio(300).portIdx=0;
bio(300).dim=[1,1];
bio(300).sigWidth=1;
bio(300).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Clock_p';
bio(300).ndims=2;
bio(300).size=[];
bio(300).isStruct=false;

bio(301).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Output';
bio(301).sigName='';
bio(301).portIdx=0;
bio(301).dim=[1,1];
bio(301).sigWidth=1;
bio(301).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Output_d';
bio(301).ndims=2;
bio(301).size=[];
bio(301).isStruct=false;

bio(302).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Look-Up Table1';
bio(302).sigName='';
bio(302).portIdx=0;
bio(302).dim=[1,1];
bio(302).sigWidth=1;
bio(302).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.LookUpTable1_j';
bio(302).ndims=2;
bio(302).size=[];
bio(302).isStruct=false;

bio(303).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Math Function';
bio(303).sigName='';
bio(303).portIdx=0;
bio(303).dim=[1,1];
bio(303).sigWidth=1;
bio(303).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.MathFunction_f';
bio(303).ndims=2;
bio(303).size=[];
bio(303).isStruct=false;

bio(304).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Sum';
bio(304).sigName='';
bio(304).portIdx=0;
bio(304).dim=[1,1];
bio(304).sigWidth=1;
bio(304).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum_oi';
bio(304).ndims=2;
bio(304).size=[];
bio(304).isStruct=false;

bio(305).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Clock';
bio(305).sigName='';
bio(305).portIdx=0;
bio(305).dim=[1,1];
bio(305).sigWidth=1;
bio(305).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Clock_pg';
bio(305).ndims=2;
bio(305).size=[];
bio(305).isStruct=false;

bio(306).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Output';
bio(306).sigName='';
bio(306).portIdx=0;
bio(306).dim=[1,1];
bio(306).sigWidth=1;
bio(306).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Output_c';
bio(306).ndims=2;
bio(306).size=[];
bio(306).isStruct=false;

bio(307).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Look-Up Table1';
bio(307).sigName='';
bio(307).portIdx=0;
bio(307).dim=[1,1];
bio(307).sigWidth=1;
bio(307).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.LookUpTable1_g';
bio(307).ndims=2;
bio(307).size=[];
bio(307).isStruct=false;

bio(308).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Math Function';
bio(308).sigName='';
bio(308).portIdx=0;
bio(308).dim=[1,1];
bio(308).sigWidth=1;
bio(308).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.MathFunction_h';
bio(308).ndims=2;
bio(308).size=[];
bio(308).isStruct=false;

bio(309).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Sum';
bio(309).sigName='';
bio(309).portIdx=0;
bio(309).dim=[1,1];
bio(309).sigWidth=1;
bio(309).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Sum_m';
bio(309).ndims=2;
bio(309).size=[];
bio(309).isStruct=false;

bio(310).blkName='Trike Application Layer/System_Init/Enable/Compare To Constant/Compare';
bio(310).sigName='';
bio(310).portIdx=0;
bio(310).dim=[1,1];
bio(310).sigWidth=1;
bio(310).sigAddress='&SpeedgoatCANOpen2Buses1ms_B.Compare';
bio(310).ndims=2;
bio(310).size=[];
bio(310).isStruct=false;

function len = getlenBIO
len = 310;

