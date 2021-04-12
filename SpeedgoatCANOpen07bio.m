function bio=SpeedgoatCANOpen07bio
bio = [];
bio(1).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p1';
bio(1).sigName='Channel_AN1';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&SpeedgoatCANOpen07_B.Channel_AN1';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p2';
bio(2).sigName='Channel_AN2';
bio(2).portIdx=1;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&SpeedgoatCANOpen07_B.Channel_AN2';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p3';
bio(3).sigName='Channel_AN3';
bio(3).portIdx=2;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&SpeedgoatCANOpen07_B.Channel_AN3';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='AN2CAN_RPDOs/RPDOs from AN2CAN /p4';
bio(4).sigName='Channel_AN4';
bio(4).portIdx=3;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&SpeedgoatCANOpen07_B.Channel_AN4';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='APT_RPDOs/RPDOs from APT/p1';
bio(5).sigName='APT_StatusWord';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&SpeedgoatCANOpen07_B.APT_StatusWord';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='APT_RPDOs/RPDOs from APT/p2';
bio(6).sigName='APT_PhaseCurrent';
bio(6).portIdx=1;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&SpeedgoatCANOpen07_B.APT_PhaseCurrent';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='APT_RPDOs/RPDOs from APT/p3';
bio(7).sigName='APT_Speed';
bio(7).portIdx=2;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&SpeedgoatCANOpen07_B.APT_Speed';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='APT_RPDOs/RPDOs from APT/p4';
bio(8).sigName='APT_BusVoltage';
bio(8).portIdx=3;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&SpeedgoatCANOpen07_B.APT_BusVoltage';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='APT_RPDOs/RPDOs from APT/p5';
bio(9).sigName='APT_MotorTemp';
bio(9).portIdx=4;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&SpeedgoatCANOpen07_B.APT_MotorTemp';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='APT_RPDOs/RPDOs from APT/p6';
bio(10).sigName='APT_Temp';
bio(10).portIdx=5;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&SpeedgoatCANOpen07_B.APT_Temp';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='APT_RPDOs/RPDOs from APT/p7';
bio(11).sigName='APT_ErrStatus';
bio(11).portIdx=6;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&SpeedgoatCANOpen07_B.APT_ErrStatus';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='APT_RPDOs/RPDOs from APT/p8';
bio(12).sigName='APT_Direction';
bio(12).portIdx=7;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&SpeedgoatCANOpen07_B.APT_Direction';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Dunker #1/RPDOs from Dunker #1/p1';
bio(13).sigName='DunkA_StatusWord';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&SpeedgoatCANOpen07_B.DunkA_StatusWord';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Dunker #1/RPDOs from Dunker #1/p2';
bio(14).sigName='DunkA_OperationMode';
bio(14).portIdx=1;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&SpeedgoatCANOpen07_B.DunkA_OperationMode';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Dunker #1/RPDOs from Dunker #1/p3';
bio(15).sigName='DunkA_CurrentActualValue';
bio(15).portIdx=2;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&SpeedgoatCANOpen07_B.DunkA_CurrentActualValue';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Dunker #1/RPDOs from Dunker #1/p4';
bio(16).sigName='DunkA_ActualTorque';
bio(16).portIdx=3;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&SpeedgoatCANOpen07_B.DunkA_ActualTorque';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Dunker #1/RPDOs from Dunker #1/p5';
bio(17).sigName='DunkA_ActualPosition';
bio(17).portIdx=4;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&SpeedgoatCANOpen07_B.DunkA_ActualPosition';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Dunker #1/RPDOs from Dunker #1/p6';
bio(18).sigName='DunkA_ActualVelocity';
bio(18).portIdx=5;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&SpeedgoatCANOpen07_B.DunkA_ActualVelocity';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Joystick_RPDOs1/RPDOs from Joystick/p1';
bio(19).sigName='Joystick_ButtonsStatus';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&SpeedgoatCANOpen07_B.Joystick_ButtonsStatus';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Joystick_RPDOs1/RPDOs from Joystick/p2';
bio(20).sigName='Joystick_LongCmd';
bio(20).portIdx=1;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&SpeedgoatCANOpen07_B.Joystick_LongCmd';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Joystick_RPDOs1/RPDOs from Joystick/p3';
bio(21).sigName='Joystick_LatCmd';
bio(21).portIdx=2;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&SpeedgoatCANOpen07_B.Joystick_LatCmd';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Trike Application Layer/HeartBeatgenerator';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&SpeedgoatCANOpen07_B.HB';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Trike Application Layer/MATLAB Function';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&SpeedgoatCANOpen07_B.Byte0';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Trike Application Layer/MATLAB Function6';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&SpeedgoatCANOpen07_B.B8';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Trike Application Layer/MATLAB Function7';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&SpeedgoatCANOpen07_B.B7';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Trike Application Layer/Set_0_pos_homing/p1';
bio(26).sigName='ctrl_word';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&SpeedgoatCANOpen07_B.ControlWord';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Trike Application Layer/Set_0_pos_homing/p2';
bio(27).sigName='ctrl_op_mode';
bio(27).portIdx=1;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&SpeedgoatCANOpen07_B.OpMode';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Trike Application Layer/Set_0_pos_homing/p3';
bio(28).sigName='ctrl_position';
bio(28).portIdx=2;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&SpeedgoatCANOpen07_B.TargetPosition';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Trike Application Layer/Abs';
bio(29).sigName='';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&SpeedgoatCANOpen07_B.Abs';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Trike Application Layer/Data Type Conversion';
bio(30).sigName='APT_TPDO_ControlWord';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&SpeedgoatCANOpen07_B.APT_TPDO_ControlWord';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Trike Application Layer/Data Type Conversion1';
bio(31).sigName='APT_TPDO_PedalPosition';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&SpeedgoatCANOpen07_B.APT_TPDO_PedalPosition';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Trike Application Layer/Data Type Conversion10';
bio(32).sigName='sts_op_mode';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&SpeedgoatCANOpen07_B.sts_op_mode';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Trike Application Layer/Data Type Conversion11';
bio(33).sigName='target_pos';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&SpeedgoatCANOpen07_B.target_pos';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Trike Application Layer/Data Type Conversion12';
bio(34).sigName='poweron';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&SpeedgoatCANOpen07_B.poweron';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Trike Application Layer/Data Type Conversion13';
bio(35).sigName='set_homing';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&SpeedgoatCANOpen07_B.set_homing';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Trike Application Layer/Data Type Conversion2';
bio(36).sigName='APT_TPDO_Heartbeat';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&SpeedgoatCANOpen07_B.APT_TPDO_Heartbeat';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Trike Application Layer/Data Type Conversion3';
bio(37).sigName='DunkA_TPDO_ControlWord';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&SpeedgoatCANOpen07_B.DunkA_TPDO_ControlWord';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Trike Application Layer/Data Type Conversion4';
bio(38).sigName='DunkA_TPDO_TargetVelocity';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&SpeedgoatCANOpen07_B.DunkA_TPDO_TargetVelocity';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Trike Application Layer/Data Type Conversion5';
bio(39).sigName='DunkA_TPDO_BrakeControl';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&SpeedgoatCANOpen07_B.DunkA_TPDO_BrakeControl';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Trike Application Layer/Data Type Conversion6';
bio(40).sigName='DunkA_TPDO_OperationMode';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&SpeedgoatCANOpen07_B.DunkA_TPDO_OperationMode';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Trike Application Layer/Data Type Conversion7';
bio(41).sigName='DunkA_TPDO_TargetTorque';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&SpeedgoatCANOpen07_B.DunkA_TPDO_TargetTorque';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Trike Application Layer/Data Type Conversion8';
bio(42).sigName='DunkA_TPDO_TargetPosition';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&SpeedgoatCANOpen07_B.DunkA_TPDO_TargetPosition';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Trike Application Layer/Data Type Conversion9';
bio(43).sigName='sts_word';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&SpeedgoatCANOpen07_B.sts_word';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Trike Application Layer/Gain';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&SpeedgoatCANOpen07_B.Gain';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Trike Application Layer/Gain1';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&SpeedgoatCANOpen07_B.Gain1';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Trike Application Layer/Gain3';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&SpeedgoatCANOpen07_B.Gain3';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Trike Application Layer/Gain6';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&SpeedgoatCANOpen07_B.Gain6';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&SpeedgoatCANOpen07_B.CCaller_o1';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2';
bio(49).sigName='';
bio(49).portIdx=1;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&SpeedgoatCANOpen07_B.CCaller_o2';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3';
bio(50).sigName='';
bio(50).portIdx=2;
bio(50).dim=[8,1];
bio(50).sigWidth=8;
bio(50).sigAddress='&SpeedgoatCANOpen07_B.CCaller_o3[0]';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&SpeedgoatCANOpen07_B.CCaller_o1_i';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2';
bio(52).sigName='';
bio(52).portIdx=1;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&SpeedgoatCANOpen07_B.CCaller_o2_i';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3';
bio(53).sigName='';
bio(53).portIdx=2;
bio(53).dim=[8,1];
bio(53).sigWidth=8;
bio(53).sigAddress='&SpeedgoatCANOpen07_B.CCaller_o3_p[0]';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o1';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2';
bio(55).sigName='';
bio(55).portIdx=1;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o2';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3';
bio(56).sigName='';
bio(56).portIdx=2;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o3';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4';
bio(57).sigName='';
bio(57).portIdx=3;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o4';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5';
bio(58).sigName='';
bio(58).portIdx=4;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o5';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6';
bio(59).sigName='';
bio(59).portIdx=5;
bio(59).dim=[8,1];
bio(59).sigWidth=8;
bio(59).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o6[0]';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&SpeedgoatCANOpen07_B.Switch';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant';
bio(61).sigName='';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&SpeedgoatCANOpen07_B.Constant_g';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o1_j';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2';
bio(63).sigName='';
bio(63).portIdx=1;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o2_n';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3';
bio(64).sigName='';
bio(64).portIdx=2;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o3_o';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4';
bio(65).sigName='';
bio(65).portIdx=3;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o4_n';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5';
bio(66).sigName='';
bio(66).portIdx=4;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o5_f';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6';
bio(67).sigName='';
bio(67).portIdx=5;
bio(67).dim=[8,1];
bio(67).sigWidth=8;
bio(67).sigAddress='&SpeedgoatCANOpen07_B.CANRead_o6_p[0]';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&SpeedgoatCANOpen07_B.Switch_f';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&SpeedgoatCANOpen07_B.Constant';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

function len = getlenBIO
len = 69;

