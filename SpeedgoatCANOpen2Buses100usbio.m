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

bio(5).blkName='Dunker #1/RPDOs from Dunker #1/p1';
bio(5).sigName='DunkA_ActualCurrent';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='Dunker #1/RPDOs from Dunker #1/p2';
bio(6).sigName='DunkA_ActualVelocity';
bio(6).portIdx=1;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='Encoder_RPDOs/RPDOs from Encoder/p1';
bio(7).sigName='Encoder_Actual_Position';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='Encoder_RPDOs/RPDOs from Encoder/p2';
bio(8).sigName='Encoder_Stored_Position';
bio(8).portIdx=1;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='Joystick_RPDOs/RPDOs from Joystick/p1';
bio(9).sigName='Joystick_ButtonsStatus';
bio(9).portIdx=0;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='Joystick_RPDOs/RPDOs from Joystick/p2';
bio(10).sigName='Joystick_LongCmd';
bio(10).portIdx=1;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='Joystick_RPDOs/RPDOs from Joystick/p3';
bio(11).sigName='Joystick_LatCmd';
bio(11).portIdx=2;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='Trike Application Layer/DunkA_control/p1';
bio(12).sigName='ClearError';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&SpeedgoatCANOpen2Buses100us_B.ClearError';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Trike Application Layer/DunkA_control/p2';
bio(13).sigName='DeviceMode';
bio(13).portIdx=1;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DeviceMode';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Trike Application Layer/DunkA_control/p3';
bio(14).sigName='BrakeCtrl';
bio(14).portIdx=2;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&SpeedgoatCANOpen2Buses100us_B.BrakeCtrl';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Trike Application Layer/DunkA_control/p4';
bio(15).sigName='PowerEnable';
bio(15).portIdx=3;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&SpeedgoatCANOpen2Buses100us_B.PowerEnable';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Trike Application Layer/DunkA_control/p5';
bio(16).sigName='Speed_Request';
bio(16).portIdx=4;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SpeedRequest';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Trike Application Layer/MATLAB Function6';
bio(17).sigName='';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&SpeedgoatCANOpen2Buses100us_B.button';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Trike Application Layer/Data Type Conversion';
bio(18).sigName='APT_TPDO_ControlWord';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Trike Application Layer/Data Type Conversion1';
bio(19).sigName='APT_TPDO_PedalPosition';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Trike Application Layer/Data Type Conversion10';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DataTypeConversion10';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Trike Application Layer/Data Type Conversion11';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DataTypeConversion11';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Trike Application Layer/Data Type Conversion12';
bio(22).sigName='button';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&SpeedgoatCANOpen2Buses100us_B.button_h';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Trike Application Layer/Data Type Conversion13';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DataTypeConversion13';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Trike Application Layer/Data Type Conversion14';
bio(24).sigName='Desired_Current';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Desired_Current';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Trike Application Layer/Data Type Conversion15';
bio(25).sigName='Joystick_LatCmd';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Trike Application Layer/Data Type Conversion16';
bio(26).sigName='Joystick_LongCmd';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Trike Application Layer/Data Type Conversion17';
bio(27).sigName='AN1';
bio(27).portIdx=0;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN1';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Trike Application Layer/Data Type Conversion18';
bio(28).sigName='Encoder_Actual_Position';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Trike Application Layer/Data Type Conversion19';
bio(29).sigName='AN2';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN2';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Trike Application Layer/Data Type Conversion2';
bio(30).sigName='APT_TPDO_Heartbeat';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Trike Application Layer/Data Type Conversion20';
bio(31).sigName='AN3';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN3';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Trike Application Layer/Data Type Conversion21';
bio(32).sigName='AN4';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&SpeedgoatCANOpen2Buses100us_B.AN4';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Trike Application Layer/Data Type Conversion3';
bio(33).sigName='DunkA_TPDO_ClearError';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Trike Application Layer/Data Type Conversion4';
bio(34).sigName='DunkA_TPDO_BrakeCtrl';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Trike Application Layer/Data Type Conversion5';
bio(35).sigName='Encoder_Stored_Position';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Trike Application Layer/Data Type Conversion6';
bio(36).sigName='DunkA_TPDO_DeviceMode';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Trike Application Layer/Data Type Conversion7';
bio(37).sigName='DunkA_TPDO_PowerEnable';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Trike Application Layer/Data Type Conversion8';
bio(38).sigName='DunkA_TPDO_DesiredCurrent';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Trike Application Layer/Data Type Conversion9';
bio(39).sigName='Actual_Current';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Actual_Current';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Trike Application Layer/Gain1';
bio(40).sigName='';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain1';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Trike Application Layer/Gain3';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain3';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Trike Application Layer/Moving Average';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&SpeedgoatCANOpen2Buses100us_B.MovingAverage';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Trike Application Layer/Subsystem/Data Type Conversion18';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DataTypeConversion18';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Trike Application Layer/Subsystem/Discrete-Time Integrator';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&SpeedgoatCANOpen2Buses100us_B.DiscreteTimeIntegrator';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Trike Application Layer/Subsystem/Gain1';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain1_k';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Trike Application Layer/Subsystem/Gain2';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain2_i';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Trike Application Layer/Subsystem/Gain3';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Gain3_o';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Trike Application Layer/Subsystem/SpeedLimit';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&SpeedgoatCANOpen2Buses100us_B.SpeedLimit';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Trike Application Layer/Subsystem/Sum';
bio(49).sigName='error';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&SpeedgoatCANOpen2Buses100us_B.error';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Trike Application Layer/Subsystem/Sum2';
bio(50).sigName='';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum2';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Trike Application Layer/Subsystem/Sum3';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Sum3';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Trike Application Layer/Subsystem/Unit Delay';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&SpeedgoatCANOpen2Buses100us_B.UnitDelay';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1';
bio(53).sigName='';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o1';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2';
bio(54).sigName='';
bio(54).portIdx=1;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o2';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3';
bio(55).sigName='';
bio(55).portIdx=2;
bio(55).dim=[8,1];
bio(55).sigWidth=8;
bio(55).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CCaller_o3[0]';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1';
bio(56).sigName='';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o1';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2';
bio(57).sigName='';
bio(57).portIdx=1;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o2';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3';
bio(58).sigName='';
bio(58).portIdx=2;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o3';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4';
bio(59).sigName='';
bio(59).portIdx=3;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o4';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5';
bio(60).sigName='';
bio(60).portIdx=4;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o5';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6';
bio(61).sigName='';
bio(61).portIdx=5;
bio(61).dim=[8,1];
bio(61).sigWidth=8;
bio(61).sigAddress='&SpeedgoatCANOpen2Buses100us_B.CANRead_o6[0]';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Switch';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&SpeedgoatCANOpen2Buses100us_B.Constant';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

function len = getlenBIO
len = 63;

