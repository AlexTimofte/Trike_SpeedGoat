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

bio(13).blkName='Dold_MiniMaster_RPDOs/Constant';
bio(13).sigName='Enable';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Enable_c';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Dunker #1/RPDOs from Dunker #1/p1';
bio(14).sigName='DunkA_ActualCurrent';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Dunker #1/RPDOs from Dunker #1/p2';
bio(15).sigName='DunkA_ActualVelocity';
bio(15).portIdx=1;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Dunker #2/RPDOs from Dunker #1/p1';
bio(16).sigName='DunkB_ActualCurrent';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Dunker #2/RPDOs from Dunker #1/p2';
bio(17).sigName='DunkB_ActualVelocity';
bio(17).portIdx=1;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Dunker #3/RPDOs from Dunker #1/p1';
bio(18).sigName='DunkC_ActualCurrent';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Dunker #3/RPDOs from Dunker #1/p2';
bio(19).sigName='DunkC_ActualVelocity';
bio(19).portIdx=1;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Dunker #4/RPDOs from Dunker #1/p1';
bio(20).sigName='DunkD_ActualCurrent';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Dunker #4/RPDOs from Dunker #1/p2';
bio(21).sigName='DunkD_ActualVelocity';
bio(21).portIdx=1;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Encoder_RPDOs/RPDOs from Encoder/p1';
bio(22).sigName='Encoder_Actual_Position';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Encoder_RPDOs/RPDOs from Encoder/p2';
bio(23).sigName='Encoder_Stored_Position';
bio(23).portIdx=1;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Joystick_RPDOs/RPDOs from Joystick/p1';
bio(24).sigName='Joystick_ButtonsStatus';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Joystick_RPDOs/RPDOs from Joystick/p2';
bio(25).sigName='Joystick_LongCmd';
bio(25).portIdx=1;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Joystick_RPDOs/RPDOs from Joystick/p3';
bio(26).sigName='Joystick_LatCmd';
bio(26).portIdx=2;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Speedgoat_TPDOs/Subsystem/Cast To Single';
bio(27).sigName='AN_01';
bio(27).portIdx=0;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN_01';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Speedgoat_TPDOs/Subsystem/Cast To Single1';
bio(28).sigName='AN_02';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN_02';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Speedgoat_TPDOs/Subsystem/Cast To Single2';
bio(29).sigName='AN_03';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN_03';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Speedgoat_TPDOs/Subsystem/Cast To Single3';
bio(30).sigName='AN_04';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN_04';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Speedgoat_TPDOs/Subsystem/Sine Wave';
bio(31).sigName='';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SineWave';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Speedgoat_TPDOs/Subsystem/Sine Wave1';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SineWave1';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Speedgoat_TPDOs/Subsystem/Sine Wave2';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SineWave2';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Speedgoat_TPDOs/Subsystem/Sine Wave3';
bio(34).sigName='';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SineWave3';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Trike Application Layer/Scopes/Data Type Conversion14';
bio(35).sigName='Desired_Current';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Desired_Current';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Trike Application Layer/Scopes/Data Type Conversion15';
bio(36).sigName='Joystick_LatCmd';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Trike Application Layer/Scopes/Data Type Conversion16';
bio(37).sigName='Joystick_LongCmd';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Trike Application Layer/Scopes/Data Type Conversion17';
bio(38).sigName='AN1';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN1';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Trike Application Layer/Scopes/Data Type Conversion18';
bio(39).sigName='Encoder_Actual_Position';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Trike Application Layer/Scopes/Data Type Conversion19';
bio(40).sigName='AN2';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN2';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Trike Application Layer/Scopes/Data Type Conversion20';
bio(41).sigName='AN3';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN3';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Trike Application Layer/Scopes/Data Type Conversion21';
bio(42).sigName='AN4';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN4';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Trike Application Layer/Scopes/Data Type Conversion5';
bio(43).sigName='Encoder_Stored_Position';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Trike Application Layer/Scopes/Data Type Conversion9';
bio(44).sigName='Actual_Current';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Actual_Current';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Trike Application Layer/Scopes/Moving Average';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&SpeedgoatCANOpen2Buses100us_B.MovingAverage_o';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Trike Application Layer/Subsystem/Data Type Conversion22';
bio(46).sigName='DunkB_TPDO_ClearError';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Trike Application Layer/Subsystem/Data Type Conversion23';
bio(47).sigName='DunkB_TPDO_BrakeCtrl';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Trike Application Layer/Subsystem/Data Type Conversion24';
bio(48).sigName='DunkB_TPDO_DeviceMode';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Trike Application Layer/Subsystem/Data Type Conversion25';
bio(49).sigName='DunkB_TPDO_PowerEnable';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Trike Application Layer/Subsystem/Data Type Conversion26';
bio(50).sigName='DunkB_TPDO_DesiredCurrent';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Trike Application Layer/Subsystem/Data Type Conversion27';
bio(51).sigName='DunkC_TPDO_ClearError';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Trike Application Layer/Subsystem/Data Type Conversion28';
bio(52).sigName='DunkC_TPDO_BrakeCtrl';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Trike Application Layer/Subsystem/Data Type Conversion29';
bio(53).sigName='DunkC_TPDO_DeviceMode';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Trike Application Layer/Subsystem/Data Type Conversion3';
bio(54).sigName='DunkA_TPDO_ClearError';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Trike Application Layer/Subsystem/Data Type Conversion30';
bio(55).sigName='DunkC_TPDO_PowerEnable';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Trike Application Layer/Subsystem/Data Type Conversion31';
bio(56).sigName='DunkC_TPDO_DesiredCurrent';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Trike Application Layer/Subsystem/Data Type Conversion32';
bio(57).sigName='DunkD_TPDO_ClearError';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Trike Application Layer/Subsystem/Data Type Conversion33';
bio(58).sigName='DunkD_TPDO_BrakeCtrl';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Trike Application Layer/Subsystem/Data Type Conversion34';
bio(59).sigName='DunkD_TPDO_DeviceMode';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Trike Application Layer/Subsystem/Data Type Conversion35';
bio(60).sigName='DunkD_TPDO_PowerEnable';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Trike Application Layer/Subsystem/Data Type Conversion36';
bio(61).sigName='DunkD_TPDO_DesiredCurrent';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Trike Application Layer/Subsystem/Data Type Conversion4';
bio(62).sigName='DunkA_TPDO_BrakeCtrl';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Trike Application Layer/Subsystem/Data Type Conversion6';
bio(63).sigName='DunkA_TPDO_DeviceMode';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='Trike Application Layer/Subsystem/Data Type Conversion7';
bio(64).sigName='DunkA_TPDO_PowerEnable';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='Trike Application Layer/Subsystem/Data Type Conversion8';
bio(65).sigName='DunkA_TPDO_DesiredCurrent';
bio(65).portIdx=0;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='Trike Application Layer/Subsystem1/HeartBeatgenerator';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&SpeedgoatCANOpen2Buses100us_B.HB';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='Trike Application Layer/Subsystem1/Data Type Conversion';
bio(67).sigName='APT_TPDO_ControlWord';
bio(67).portIdx=0;
bio(67).dim=[1,1];
bio(67).sigWidth=1;
bio(67).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Trike Application Layer/Subsystem1/Data Type Conversion1';
bio(68).sigName='APT_TPDO_PedalPosition';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='Trike Application Layer/Subsystem1/Data Type Conversion2';
bio(69).sigName='APT_TPDO_Heartbeat';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='Trike Application Layer/System_Control/Cast To Single';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle_e';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='Trike Application Layer/System_Init/EnableCtrl';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Enable';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='Trike Application Layer/System_Init/MATLAB Function';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&SpeedgoatCANOpen2Buses100us_B.button';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='Trike Application Layer/System_Init/MATLAB Function1';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Byte0';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='Trike Application Layer/System_Init/Cast To Single3';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle3';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o1';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2';
bio(76).sigName='';
bio(76).portIdx=1;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o2';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3';
bio(77).sigName='';
bio(77).portIdx=2;
bio(77).dim=[8,1];
bio(77).sigWidth=8;
bio(77).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o3[0]';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1';
bio(78).sigName='';
bio(78).portIdx=0;
bio(78).dim=[1,1];
bio(78).sigWidth=1;
bio(78).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2';
bio(79).sigName='';
bio(79).portIdx=1;
bio(79).dim=[1,1];
bio(79).sigWidth=1;
bio(79).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3';
bio(80).sigName='';
bio(80).portIdx=2;
bio(80).dim=[8,1];
bio(80).sigWidth=8;
bio(80).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n[0]';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='Trike Application Layer/System_Control/BrakeControl/Data Type Conversion';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[1,1];
bio(81).sigWidth=1;
bio(81).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DataTypeConversion';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='Trike Application Layer/System_Control/BrakeControl/Amp2mAmp';
bio(82).sigName='Br CurrentRef';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrCurrentRef';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='Trike Application Layer/System_Control/BrakeControl/Gain1';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain1';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='Trike Application Layer/System_Control/BrakeControl/Gain2';
bio(84).sigName='';
bio(84).portIdx=0;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain2_a';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='Trike Application Layer/System_Control/BrakeControl/Gain3';
bio(85).sigName='br_percent';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&SpeedgoatCANOpen2Buses100us_B.br_percent';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='Trike Application Layer/System_Control/BrakeControl/Saturation';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Saturation_e';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='Trike Application Layer/System_Control/BrakeControl/Saturation1';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Saturation1';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='Trike Application Layer/System_Control/BrakeControl/Sum';
bio(88).sigName='';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum_i';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='Trike Application Layer/System_Control/DirectionControl/P Direction Controller';
bio(89).sigName='DirSpeedRef';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SpeedRef';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='Trike Application Layer/System_Control/DirectionControl/Cast To Single';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle_g';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='Trike Application Layer/System_Control/DirectionControl/Cast To Single1';
bio(91).sigName='DirectionAvg';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DirectionAvg';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='Trike Application Layer/System_Control/DirectionControl/Robotics Convention';
bio(92).sigName='DirectionRef';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DirectionRef';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='Trike Application Layer/System_Control/DirectionControl/degree2rad';
bio(93).sigName='SteeringAngle [rad]';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='Trike Application Layer/System_Control/DirectionControl/dem';
bio(94).sigName='DirectionReq';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DirectionReq';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='Trike Application Layer/System_Control/DirectionControl/inc2deg';
bio(95).sigName='Direction';
bio(95).portIdx=0;
bio(95).dim=[1,1];
bio(95).sigWidth=1;
bio(95).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Direction';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='Trike Application Layer/System_Control/DirectionControl/Memory1';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[1,1];
bio(96).sigWidth=1;
bio(96).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Memory1';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='Trike Application Layer/System_Control/DirectionControl/Sum';
bio(97).sigName='Pos_out';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Pos_out';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='Trike Application Layer/System_Control/DirectionControl/Moving Average';
bio(98).sigName='';
bio(98).portIdx=0;
bio(98).dim=[1,1];
bio(98).sigWidth=1;
bio(98).sigAddress='&SpeedgoatCANOpen2Buses100us_B.MovingAverage';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='Trike Application Layer/System_Control/Subsystem/Switch';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[1,1];
bio(99).sigWidth=1;
bio(99).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='Trike Application Layer/System_Control/Subsystem/Switch1';
bio(100).sigName='';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch1';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='Trike Application Layer/System_Control/Subsystem/Switch2';
bio(101).sigName='';
bio(101).portIdx=0;
bio(101).dim=[1,1];
bio(101).sigWidth=1;
bio(101).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch2';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='Trike Application Layer/System_Control/Subsystem/Switch3';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[1,1];
bio(102).sigWidth=1;
bio(102).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch3';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='Trike Application Layer/System_Control/Subsystem/Switch4';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch4';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='Trike Application Layer/System_Control/TiltingControl/ServoTilting';
bio(104).sigName='TiltingAngle [deg]';
bio(104).portIdx=0;
bio(104).dim=[1,1];
bio(104).sigWidth=1;
bio(104).sigAddress='&SpeedgoatCANOpen2Buses100us_B.TiltingAngle';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='Trike Application Layer/System_Control/TiltingControl/Cast To Single';
bio(105).sigName='';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='Trike Application Layer/System_Control/TiltingControl/Cast To Single1';
bio(106).sigName='';
bio(106).portIdx=0;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CastToSingle1';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

bio(107).blkName='Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv1';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[1,1];
bio(107).sigWidth=1;
bio(107).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv1';
bio(107).ndims=2;
bio(107).size=[];
bio(107).isStruct=false;

bio(108).blkName='Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv2';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv2';
bio(108).ndims=2;
bio(108).size=[];
bio(108).isStruct=false;

bio(109).blkName='Trike Application Layer/System_Control/TiltingControl/degree2m';
bio(109).sigName='PosRef [m]';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PosRefm';
bio(109).ndims=2;
bio(109).size=[];
bio(109).isStruct=false;

bio(110).blkName='Trike Application Layer/System_Control/TiltingControl/n';
bio(110).sigName='';
bio(110).portIdx=0;
bio(110).dim=[1,1];
bio(110).sigWidth=1;
bio(110).sigAddress='&SpeedgoatCANOpen2Buses100us_B.n';
bio(110).ndims=2;
bio(110).size=[];
bio(110).isStruct=false;

bio(111).blkName='Trike Application Layer/System_Control/TiltingControl/Sine Wave';
bio(111).sigName='TiltingAngle [deg]';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&SpeedgoatCANOpen2Buses100us_B.TiltingAngledeg';
bio(111).ndims=2;
bio(111).size=[];
bio(111).isStruct=false;

bio(112).blkName='Trike Application Layer/System_Control/TiltingControl/Sum1';
bio(112).sigName='Pos_err';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Pos_err';
bio(112).ndims=2;
bio(112).size=[];
bio(112).isStruct=false;

bio(113).blkName='Trike Application Layer/System_Control/TiltingControl/Manual Switch';
bio(113).sigName='';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ManualSwitch';
bio(113).ndims=2;
bio(113).size=[];
bio(113).isStruct=false;

bio(114).blkName='Trike Application Layer/System_Control/TiltingControl/Manual Switch1';
bio(114).sigName='';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ManualSwitch1';
bio(114).ndims=2;
bio(114).size=[];
bio(114).isStruct=false;

bio(115).blkName='Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold';
bio(115).sigName='Sys_out';
bio(115).portIdx=0;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sys_out';
bio(115).ndims=2;
bio(115).size=[];
bio(115).isStruct=false;

bio(116).blkName='Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold1';
bio(116).sigName='Sys_in';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sys_in';
bio(116).ndims=2;
bio(116).size=[];
bio(116).isStruct=false;

bio(117).blkName='Trike Application Layer/System_Control/TractionControl/Abs';
bio(117).sigName='TractionRef';
bio(117).portIdx=0;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&SpeedgoatCANOpen2Buses100us_B.TractionRef';
bio(117).ndims=2;
bio(117).size=[];
bio(117).isStruct=false;

bio(118).blkName='Trike Application Layer/System_Control/TractionControl/Gain1';
bio(118).sigName='';
bio(118).portIdx=0;
bio(118).dim=[1,1];
bio(118).sigWidth=1;
bio(118).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain1_e';
bio(118).ndims=2;
bio(118).size=[];
bio(118).isStruct=false;

bio(119).blkName='Trike Application Layer/System_Control/TractionControl/Gain2';
bio(119).sigName='SpeedRear_SI';
bio(119).portIdx=0;
bio(119).dim=[1,1];
bio(119).sigWidth=1;
bio(119).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI';
bio(119).ndims=2;
bio(119).size=[];
bio(119).isStruct=false;

bio(120).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p1';
bio(120).sigName='';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.ClearError';
bio(120).ndims=2;
bio(120).size=[];
bio(120).isStruct=false;

bio(121).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p2';
bio(121).sigName='';
bio(121).portIdx=1;
bio(121).dim=[1,1];
bio(121).sigWidth=1;
bio(121).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.DeviceMode';
bio(121).ndims=2;
bio(121).size=[];
bio(121).isStruct=false;

bio(122).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p3';
bio(122).sigName='';
bio(122).portIdx=2;
bio(122).dim=[1,1];
bio(122).sigWidth=1;
bio(122).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.BrakeCtrl';
bio(122).ndims=2;
bio(122).size=[];
bio(122).isStruct=false;

bio(123).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p4';
bio(123).sigName='';
bio(123).portIdx=3;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.PowerEnable';
bio(123).ndims=2;
bio(123).size=[];
bio(123).isStruct=false;

bio(124).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p5';
bio(124).sigName='';
bio(124).portIdx=4;
bio(124).dim=[1,1];
bio(124).sigWidth=1;
bio(124).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.InitStatus';
bio(124).ndims=2;
bio(124).size=[];
bio(124).isStruct=false;

bio(125).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant';
bio(125).sigName='';
bio(125).portIdx=0;
bio(125).dim=[1,1];
bio(125).sigWidth=1;
bio(125).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant_g';
bio(125).ndims=2;
bio(125).size=[];
bio(125).isStruct=false;

bio(126).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single';
bio(126).sigName='DeviceMode';
bio(126).portIdx=0;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode_g';
bio(126).ndims=2;
bio(126).size=[];
bio(126).isStruct=false;

bio(127).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1';
bio(127).sigName='ClearError';
bio(127).portIdx=0;
bio(127).dim=[1,1];
bio(127).sigWidth=1;
bio(127).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError_mj';
bio(127).ndims=2;
bio(127).size=[];
bio(127).isStruct=false;

bio(128).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2';
bio(128).sigName='BrakeCtrl';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k';
bio(128).ndims=2;
bio(128).size=[];
bio(128).isStruct=false;

bio(129).blkName='Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3';
bio(129).sigName='PowerEnable';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable_p';
bio(129).ndims=2;
bio(129).size=[];
bio(129).isStruct=false;

bio(130).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p1';
bio(130).sigName='';
bio(130).portIdx=0;
bio(130).dim=[1,1];
bio(130).sigWidth=1;
bio(130).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError';
bio(130).ndims=2;
bio(130).size=[];
bio(130).isStruct=false;

bio(131).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p2';
bio(131).sigName='';
bio(131).portIdx=1;
bio(131).dim=[1,1];
bio(131).sigWidth=1;
bio(131).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode';
bio(131).ndims=2;
bio(131).size=[];
bio(131).isStruct=false;

bio(132).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p3';
bio(132).sigName='';
bio(132).portIdx=2;
bio(132).dim=[1,1];
bio(132).sigWidth=1;
bio(132).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl';
bio(132).ndims=2;
bio(132).size=[];
bio(132).isStruct=false;

bio(133).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p4';
bio(133).sigName='';
bio(133).portIdx=3;
bio(133).dim=[1,1];
bio(133).sigWidth=1;
bio(133).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable';
bio(133).ndims=2;
bio(133).size=[];
bio(133).isStruct=false;

bio(134).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p5';
bio(134).sigName='';
bio(134).portIdx=4;
bio(134).dim=[1,1];
bio(134).sigWidth=1;
bio(134).sigAddress='&SpeedgoatCANOpen2Buses100us_B.InitStatus';
bio(134).ndims=2;
bio(134).size=[];
bio(134).isStruct=false;

bio(135).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant';
bio(135).sigName='';
bio(135).portIdx=0;
bio(135).dim=[1,1];
bio(135).sigWidth=1;
bio(135).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant';
bio(135).ndims=2;
bio(135).size=[];
bio(135).isStruct=false;

bio(136).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single';
bio(136).sigName='DeviceMode';
bio(136).portIdx=0;
bio(136).dim=[1,1];
bio(136).sigWidth=1;
bio(136).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode_e';
bio(136).ndims=2;
bio(136).size=[];
bio(136).isStruct=false;

bio(137).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1';
bio(137).sigName='ClearError';
bio(137).portIdx=0;
bio(137).dim=[1,1];
bio(137).sigWidth=1;
bio(137).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError_m';
bio(137).ndims=2;
bio(137).size=[];
bio(137).isStruct=false;

bio(138).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2';
bio(138).sigName='BrakeCtrl';
bio(138).portIdx=0;
bio(138).dim=[1,1];
bio(138).sigWidth=1;
bio(138).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m';
bio(138).ndims=2;
bio(138).size=[];
bio(138).isStruct=false;

bio(139).blkName='Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3';
bio(139).sigName='PowerEnable';
bio(139).portIdx=0;
bio(139).dim=[1,1];
bio(139).sigWidth=1;
bio(139).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable_i';
bio(139).ndims=2;
bio(139).size=[];
bio(139).isStruct=false;

bio(140).blkName='Trike Application Layer/System_Init/Subsystem/Sum';
bio(140).sigName='';
bio(140).portIdx=0;
bio(140).dim=[1,1];
bio(140).sigWidth=1;
bio(140).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum_b';
bio(140).ndims=2;
bio(140).size=[];
bio(140).isStruct=false;

bio(141).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p1';
bio(141).sigName='';
bio(141).portIdx=0;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.ClearError';
bio(141).ndims=2;
bio(141).size=[];
bio(141).isStruct=false;

bio(142).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p2';
bio(142).sigName='';
bio(142).portIdx=1;
bio(142).dim=[1,1];
bio(142).sigWidth=1;
bio(142).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.DeviceMode';
bio(142).ndims=2;
bio(142).size=[];
bio(142).isStruct=false;

bio(143).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p3';
bio(143).sigName='';
bio(143).portIdx=2;
bio(143).dim=[1,1];
bio(143).sigWidth=1;
bio(143).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.BrakeCtrl';
bio(143).ndims=2;
bio(143).size=[];
bio(143).isStruct=false;

bio(144).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p4';
bio(144).sigName='';
bio(144).portIdx=3;
bio(144).dim=[1,1];
bio(144).sigWidth=1;
bio(144).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.PowerEnable';
bio(144).ndims=2;
bio(144).size=[];
bio(144).isStruct=false;

bio(145).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p5';
bio(145).sigName='';
bio(145).portIdx=4;
bio(145).dim=[1,1];
bio(145).sigWidth=1;
bio(145).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.InitStatus';
bio(145).ndims=2;
bio(145).size=[];
bio(145).isStruct=false;

bio(146).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant';
bio(146).sigName='';
bio(146).portIdx=0;
bio(146).dim=[1,1];
bio(146).sigWidth=1;
bio(146).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant_e';
bio(146).ndims=2;
bio(146).size=[];
bio(146).isStruct=false;

bio(147).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single';
bio(147).sigName='DeviceMode';
bio(147).portIdx=0;
bio(147).dim=[1,1];
bio(147).sigWidth=1;
bio(147).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode_d';
bio(147).ndims=2;
bio(147).size=[];
bio(147).isStruct=false;

bio(148).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1';
bio(148).sigName='ClearError';
bio(148).portIdx=0;
bio(148).dim=[1,1];
bio(148).sigWidth=1;
bio(148).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError_jv';
bio(148).ndims=2;
bio(148).size=[];
bio(148).isStruct=false;

bio(149).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2';
bio(149).sigName='BrakeCtrl';
bio(149).portIdx=0;
bio(149).dim=[1,1];
bio(149).sigWidth=1;
bio(149).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0';
bio(149).ndims=2;
bio(149).size=[];
bio(149).isStruct=false;

bio(150).blkName='Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3';
bio(150).sigName='PowerEnable';
bio(150).portIdx=0;
bio(150).dim=[1,1];
bio(150).sigWidth=1;
bio(150).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable_ir';
bio(150).ndims=2;
bio(150).size=[];
bio(150).isStruct=false;

bio(151).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p1';
bio(151).sigName='';
bio(151).portIdx=0;
bio(151).dim=[1,1];
bio(151).sigWidth=1;
bio(151).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.ClearError';
bio(151).ndims=2;
bio(151).size=[];
bio(151).isStruct=false;

bio(152).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p2';
bio(152).sigName='';
bio(152).portIdx=1;
bio(152).dim=[1,1];
bio(152).sigWidth=1;
bio(152).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.DeviceMode';
bio(152).ndims=2;
bio(152).size=[];
bio(152).isStruct=false;

bio(153).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p3';
bio(153).sigName='';
bio(153).portIdx=2;
bio(153).dim=[1,1];
bio(153).sigWidth=1;
bio(153).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.BrakeCtrl';
bio(153).ndims=2;
bio(153).size=[];
bio(153).isStruct=false;

bio(154).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p4';
bio(154).sigName='';
bio(154).portIdx=3;
bio(154).dim=[1,1];
bio(154).sigWidth=1;
bio(154).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.PowerEnable';
bio(154).ndims=2;
bio(154).size=[];
bio(154).isStruct=false;

bio(155).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p5';
bio(155).sigName='';
bio(155).portIdx=4;
bio(155).dim=[1,1];
bio(155).sigWidth=1;
bio(155).sigAddress='&SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.InitStatus';
bio(155).ndims=2;
bio(155).size=[];
bio(155).isStruct=false;

bio(156).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant';
bio(156).sigName='';
bio(156).portIdx=0;
bio(156).dim=[1,1];
bio(156).sigWidth=1;
bio(156).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant_m';
bio(156).ndims=2;
bio(156).size=[];
bio(156).isStruct=false;

bio(157).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single';
bio(157).sigName='DeviceMode';
bio(157).portIdx=0;
bio(157).dim=[1,1];
bio(157).sigWidth=1;
bio(157).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode_h';
bio(157).ndims=2;
bio(157).size=[];
bio(157).isStruct=false;

bio(158).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1';
bio(158).sigName='ClearError';
bio(158).portIdx=0;
bio(158).dim=[1,1];
bio(158).sigWidth=1;
bio(158).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError_j';
bio(158).ndims=2;
bio(158).size=[];
bio(158).isStruct=false;

bio(159).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2';
bio(159).sigName='BrakeCtrl';
bio(159).portIdx=0;
bio(159).dim=[1,1];
bio(159).sigWidth=1;
bio(159).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b';
bio(159).ndims=2;
bio(159).size=[];
bio(159).isStruct=false;

bio(160).blkName='Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3';
bio(160).sigName='PowerEnable';
bio(160).portIdx=0;
bio(160).dim=[1,1];
bio(160).sigWidth=1;
bio(160).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable_a';
bio(160).ndims=2;
bio(160).size=[];
bio(160).isStruct=false;

bio(161).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1';
bio(161).sigName='';
bio(161).portIdx=0;
bio(161).dim=[1,1];
bio(161).sigWidth=1;
bio(161).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o1';
bio(161).ndims=2;
bio(161).size=[];
bio(161).isStruct=false;

bio(162).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2';
bio(162).sigName='';
bio(162).portIdx=1;
bio(162).dim=[1,1];
bio(162).sigWidth=1;
bio(162).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o2';
bio(162).ndims=2;
bio(162).size=[];
bio(162).isStruct=false;

bio(163).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3';
bio(163).sigName='';
bio(163).portIdx=2;
bio(163).dim=[1,1];
bio(163).sigWidth=1;
bio(163).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o3';
bio(163).ndims=2;
bio(163).size=[];
bio(163).isStruct=false;

bio(164).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4';
bio(164).sigName='';
bio(164).portIdx=3;
bio(164).dim=[1,1];
bio(164).sigWidth=1;
bio(164).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o4';
bio(164).ndims=2;
bio(164).size=[];
bio(164).isStruct=false;

bio(165).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5';
bio(165).sigName='';
bio(165).portIdx=4;
bio(165).dim=[1,1];
bio(165).sigWidth=1;
bio(165).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o5';
bio(165).ndims=2;
bio(165).size=[];
bio(165).isStruct=false;

bio(166).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6';
bio(166).sigName='';
bio(166).portIdx=5;
bio(166).dim=[8,1];
bio(166).sigWidth=8;
bio(166).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o6[0]';
bio(166).ndims=2;
bio(166).size=[];
bio(166).isStruct=false;

bio(167).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch';
bio(167).sigName='';
bio(167).portIdx=0;
bio(167).dim=[1,1];
bio(167).sigWidth=1;
bio(167).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch_c';
bio(167).ndims=2;
bio(167).size=[];
bio(167).isStruct=false;

bio(168).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant';
bio(168).sigName='';
bio(168).portIdx=0;
bio(168).dim=[1,1];
bio(168).sigWidth=1;
bio(168).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant_ge';
bio(168).ndims=2;
bio(168).size=[];
bio(168).isStruct=false;

bio(169).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1';
bio(169).sigName='';
bio(169).portIdx=0;
bio(169).dim=[1,1];
bio(169).sigWidth=1;
bio(169).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o1_b';
bio(169).ndims=2;
bio(169).size=[];
bio(169).isStruct=false;

bio(170).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2';
bio(170).sigName='';
bio(170).portIdx=1;
bio(170).dim=[1,1];
bio(170).sigWidth=1;
bio(170).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e';
bio(170).ndims=2;
bio(170).size=[];
bio(170).isStruct=false;

bio(171).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3';
bio(171).sigName='';
bio(171).portIdx=2;
bio(171).dim=[1,1];
bio(171).sigWidth=1;
bio(171).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m';
bio(171).ndims=2;
bio(171).size=[];
bio(171).isStruct=false;

bio(172).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4';
bio(172).sigName='';
bio(172).portIdx=3;
bio(172).dim=[1,1];
bio(172).sigWidth=1;
bio(172).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a';
bio(172).ndims=2;
bio(172).size=[];
bio(172).isStruct=false;

bio(173).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5';
bio(173).sigName='';
bio(173).portIdx=4;
bio(173).dim=[1,1];
bio(173).sigWidth=1;
bio(173).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o5_h';
bio(173).ndims=2;
bio(173).size=[];
bio(173).isStruct=false;

bio(174).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6';
bio(174).sigName='';
bio(174).portIdx=5;
bio(174).dim=[8,1];
bio(174).sigWidth=8;
bio(174).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h[0]';
bio(174).ndims=2;
bio(174).size=[];
bio(174).isStruct=false;

bio(175).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch';
bio(175).sigName='';
bio(175).portIdx=0;
bio(175).dim=[1,1];
bio(175).sigWidth=1;
bio(175).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch_g';
bio(175).ndims=2;
bio(175).size=[];
bio(175).isStruct=false;

bio(176).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant';
bio(176).sigName='';
bio(176).portIdx=0;
bio(176).dim=[1,1];
bio(176).sigWidth=1;
bio(176).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant_em';
bio(176).ndims=2;
bio(176).size=[];
bio(176).isStruct=false;

bio(177).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt';
bio(177).sigName='DispLeft [Volt]';
bio(177).portIdx=0;
bio(177).dim=[1,1];
bio(177).sigWidth=1;
bio(177).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DispLeftVolt';
bio(177).ndims=2;
bio(177).size=[];
bio(177).isStruct=false;

bio(178).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter';
bio(178).sigName='DispLeft [m]';
bio(178).portIdx=0;
bio(178).dim=[1,1];
bio(178).sigWidth=1;
bio(178).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DispLeftm';
bio(178).ndims=2;
bio(178).size=[];
bio(178).isStruct=false;

bio(179).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1';
bio(179).sigName='DispLeft [m] filt';
bio(179).portIdx=0;
bio(179).dim=[1,1];
bio(179).sigWidth=1;
bio(179).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt';
bio(179).ndims=2;
bio(179).size=[];
bio(179).isStruct=false;

bio(180).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Sum';
bio(180).sigName='DispLeftOffset [Volt]';
bio(180).portIdx=0;
bio(180).dim=[1,1];
bio(180).sigWidth=1;
bio(180).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt';
bio(180).ndims=2;
bio(180).size=[];
bio(180).isStruct=false;

bio(181).blkName='Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter';
bio(181).sigName='';
bio(181).portIdx=0;
bio(181).dim=[1,1];
bio(181).sigWidth=1;
bio(181).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DiscreteFilter';
bio(181).ndims=2;
bio(181).size=[];
bio(181).isStruct=false;

bio(182).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence/Clock';
bio(182).sigName='';
bio(182).portIdx=0;
bio(182).dim=[1,1];
bio(182).sigWidth=1;
bio(182).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Clock';
bio(182).ndims=2;
bio(182).size=[];
bio(182).isStruct=false;

bio(183).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence/Output';
bio(183).sigName='';
bio(183).portIdx=0;
bio(183).dim=[1,1];
bio(183).sigWidth=1;
bio(183).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Output';
bio(183).ndims=2;
bio(183).size=[];
bio(183).isStruct=false;

bio(184).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence/Look-Up Table1';
bio(184).sigName='';
bio(184).portIdx=0;
bio(184).dim=[1,1];
bio(184).sigWidth=1;
bio(184).sigAddress='&SpeedgoatCANOpen2Buses100us_B.LookUpTable1';
bio(184).ndims=2;
bio(184).size=[];
bio(184).isStruct=false;

bio(185).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence/Math Function';
bio(185).sigName='';
bio(185).portIdx=0;
bio(185).dim=[1,1];
bio(185).sigWidth=1;
bio(185).sigAddress='&SpeedgoatCANOpen2Buses100us_B.MathFunction';
bio(185).ndims=2;
bio(185).size=[];
bio(185).isStruct=false;

bio(186).blkName='Trike Application Layer/System_Control/TiltingControl/Repeating Sequence/Sum';
bio(186).sigName='';
bio(186).portIdx=0;
bio(186).dim=[1,1];
bio(186).sigWidth=1;
bio(186).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum';
bio(186).ndims=2;
bio(186).size=[];
bio(186).isStruct=false;

bio(187).blkName='Trike Application Layer/System_Init/Subsystem/Compare To Constant/Compare';
bio(187).sigName='';
bio(187).portIdx=0;
bio(187).dim=[1,1];
bio(187).sigWidth=1;
bio(187).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Compare';
bio(187).ndims=2;
bio(187).size=[];
bio(187).isStruct=false;

bio(188).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Discrete-Time Integrator';
bio(188).sigName='Integral';
bio(188).portIdx=0;
bio(188).dim=[1,1];
bio(188).sigWidth=1;
bio(188).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Integral';
bio(188).ndims=2;
bio(188).size=[];
bio(188).isStruct=false;

bio(189).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Discrete-Time Integrator1';
bio(189).sigName='';
bio(189).portIdx=0;
bio(189).dim=[1,1];
bio(189).sigWidth=1;
bio(189).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DiscreteTimeIntegrator1';
bio(189).ndims=2;
bio(189).size=[];
bio(189).isStruct=false;

bio(190).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/AntiWindup';
bio(190).sigName='';
bio(190).portIdx=0;
bio(190).dim=[1,1];
bio(190).sigWidth=1;
bio(190).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AntiWindup';
bio(190).ndims=2;
bio(190).size=[];
bio(190).isStruct=false;

bio(191).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Derivative Gain';
bio(191).sigName='';
bio(191).portIdx=0;
bio(191).dim=[1,1];
bio(191).sigWidth=1;
bio(191).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DerivativeGain';
bio(191).ndims=2;
bio(191).size=[];
bio(191).isStruct=false;

bio(192).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/FF_En';
bio(192).sigName='';
bio(192).portIdx=0;
bio(192).dim=[1,1];
bio(192).sigWidth=1;
bio(192).sigAddress='&SpeedgoatCANOpen2Buses100us_B.FF_En';
bio(192).ndims=2;
bio(192).size=[];
bio(192).isStruct=false;

bio(193).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/FilterOrder';
bio(193).sigName='Derivative';
bio(193).portIdx=0;
bio(193).dim=[1,1];
bio(193).sigWidth=1;
bio(193).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Derivative';
bio(193).ndims=2;
bio(193).size=[];
bio(193).isStruct=false;

bio(194).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Gain';
bio(194).sigName='';
bio(194).portIdx=0;
bio(194).dim=[1,1];
bio(194).sigWidth=1;
bio(194).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain';
bio(194).ndims=2;
bio(194).size=[];
bio(194).isStruct=false;

bio(195).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Integral Gain';
bio(195).sigName='';
bio(195).portIdx=0;
bio(195).dim=[1,1];
bio(195).sigWidth=1;
bio(195).sigAddress='&SpeedgoatCANOpen2Buses100us_B.IntegralGain';
bio(195).ndims=2;
bio(195).size=[];
bio(195).isStruct=false;

bio(196).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Proportional  Gain';
bio(196).sigName='Proportional';
bio(196).portIdx=0;
bio(196).dim=[1,1];
bio(196).sigWidth=1;
bio(196).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Proportional';
bio(196).ndims=2;
bio(196).size=[];
bio(196).isStruct=false;

bio(197).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Product';
bio(197).sigName='';
bio(197).portIdx=0;
bio(197).dim=[1,1];
bio(197).sigWidth=1;
bio(197).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Product';
bio(197).ndims=2;
bio(197).size=[];
bio(197).isStruct=false;

bio(198).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Product1';
bio(198).sigName='';
bio(198).portIdx=0;
bio(198).dim=[1,1];
bio(198).sigWidth=1;
bio(198).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Product1';
bio(198).ndims=2;
bio(198).size=[];
bio(198).isStruct=false;

bio(199).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Product2';
bio(199).sigName='';
bio(199).portIdx=0;
bio(199).dim=[1,1];
bio(199).sigWidth=1;
bio(199).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Product2';
bio(199).ndims=2;
bio(199).size=[];
bio(199).isStruct=false;

bio(200).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Saturation';
bio(200).sigName='';
bio(200).portIdx=0;
bio(200).dim=[1,1];
bio(200).sigWidth=1;
bio(200).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Saturation';
bio(200).ndims=2;
bio(200).size=[];
bio(200).isStruct=false;

bio(201).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Sum';
bio(201).sigName='';
bio(201).portIdx=0;
bio(201).dim=[1,1];
bio(201).sigWidth=1;
bio(201).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum_a';
bio(201).ndims=2;
bio(201).size=[];
bio(201).isStruct=false;

bio(202).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Sum1';
bio(202).sigName='e';
bio(202).portIdx=0;
bio(202).dim=[1,1];
bio(202).sigWidth=1;
bio(202).sigAddress='&SpeedgoatCANOpen2Buses100us_B.e';
bio(202).ndims=2;
bio(202).size=[];
bio(202).isStruct=false;

bio(203).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Sum2';
bio(203).sigName='';
bio(203).portIdx=0;
bio(203).dim=[1,1];
bio(203).sigWidth=1;
bio(203).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum2';
bio(203).ndims=2;
bio(203).size=[];
bio(203).isStruct=false;

bio(204).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Sum3';
bio(204).sigName='';
bio(204).portIdx=0;
bio(204).dim=[1,1];
bio(204).sigWidth=1;
bio(204).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum3';
bio(204).ndims=2;
bio(204).size=[];
bio(204).isStruct=false;

bio(205).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/Sum4';
bio(205).sigName='';
bio(205).portIdx=0;
bio(205).dim=[1,1];
bio(205).sigWidth=1;
bio(205).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum4';
bio(205).ndims=2;
bio(205).size=[];
bio(205).isStruct=false;

bio(206).blkName='Trike Application Layer/System_Control/TiltingControl/TiltingController/PID_Clasic_V1/PI_ctrl/FeedForward';
bio(206).sigName='FeedForward';
bio(206).portIdx=0;
bio(206).dim=[1,1];
bio(206).sigWidth=1;
bio(206).sigAddress='&SpeedgoatCANOpen2Buses100us_B.FeedForward_a';
bio(206).ndims=2;
bio(206).size=[];
bio(206).isStruct=false;

function len = getlenBIO
len = 206;

