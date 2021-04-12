function xcp = SpeedgoatCANOpen07xcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);
    
xcp.models{1} = 'SpeedgoatCANOpen07';
   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.0001;
xcp.events(1).offset     = 0.0;
    
xcp.signals(1).symbol =  'SpeedgoatCANOpen07_B.Channel_AN1';
    
xcp.signals(2).symbol =  'SpeedgoatCANOpen07_B.Channel_AN2';
    
xcp.signals(3).symbol =  'SpeedgoatCANOpen07_B.Channel_AN3';
    
xcp.signals(4).symbol =  'SpeedgoatCANOpen07_B.Channel_AN4';
    
xcp.signals(5).symbol =  'SpeedgoatCANOpen07_B.APT_StatusWord';
    
xcp.signals(6).symbol =  'SpeedgoatCANOpen07_B.APT_PhaseCurrent';
    
xcp.signals(7).symbol =  'SpeedgoatCANOpen07_B.APT_Speed';
    
xcp.signals(8).symbol =  'SpeedgoatCANOpen07_B.APT_BusVoltage';
    
xcp.signals(9).symbol =  'SpeedgoatCANOpen07_B.APT_MotorTemp';
    
xcp.signals(10).symbol =  'SpeedgoatCANOpen07_B.APT_Temp';
    
xcp.signals(11).symbol =  'SpeedgoatCANOpen07_B.APT_ErrStatus';
    
xcp.signals(12).symbol =  'SpeedgoatCANOpen07_B.APT_Direction';
    
xcp.signals(13).symbol =  'SpeedgoatCANOpen07_B.DunkA_StatusWord';
    
xcp.signals(14).symbol =  'SpeedgoatCANOpen07_B.DunkA_OperationMode';
    
xcp.signals(15).symbol =  'SpeedgoatCANOpen07_B.DunkA_CurrentActualValue';
    
xcp.signals(16).symbol =  'SpeedgoatCANOpen07_B.DunkA_ActualTorque';
    
xcp.signals(17).symbol =  'SpeedgoatCANOpen07_B.DunkA_ActualPosition';
    
xcp.signals(18).symbol =  'SpeedgoatCANOpen07_B.DunkA_ActualVelocity';
    
xcp.signals(19).symbol =  'SpeedgoatCANOpen07_B.Joystick_ButtonsStatus';
    
xcp.signals(20).symbol =  'SpeedgoatCANOpen07_B.Joystick_LongCmd';
    
xcp.signals(21).symbol =  'SpeedgoatCANOpen07_B.Joystick_LatCmd';
    
xcp.signals(22).symbol =  'SpeedgoatCANOpen07_B.HB';
    
xcp.signals(23).symbol =  'SpeedgoatCANOpen07_B.Byte0';
    
xcp.signals(24).symbol =  'SpeedgoatCANOpen07_B.B8';
    
xcp.signals(25).symbol =  'SpeedgoatCANOpen07_B.B7';
    
xcp.signals(26).symbol =  'SpeedgoatCANOpen07_B.ControlWord';
    
xcp.signals(27).symbol =  'SpeedgoatCANOpen07_B.OpMode';
    
xcp.signals(28).symbol =  'SpeedgoatCANOpen07_B.TargetPosition';
    
xcp.signals(29).symbol =  'SpeedgoatCANOpen07_B.Abs';
    
xcp.signals(30).symbol =  'SpeedgoatCANOpen07_B.APT_TPDO_ControlWord';
    
xcp.signals(31).symbol =  'SpeedgoatCANOpen07_B.APT_TPDO_PedalPosition';
    
xcp.signals(32).symbol =  'SpeedgoatCANOpen07_B.sts_op_mode';
    
xcp.signals(33).symbol =  'SpeedgoatCANOpen07_B.target_pos';
    
xcp.signals(34).symbol =  'SpeedgoatCANOpen07_B.poweron';
    
xcp.signals(35).symbol =  'SpeedgoatCANOpen07_B.set_homing';
    
xcp.signals(36).symbol =  'SpeedgoatCANOpen07_B.APT_TPDO_Heartbeat';
    
xcp.signals(37).symbol =  'SpeedgoatCANOpen07_B.DunkA_TPDO_ControlWord';
    
xcp.signals(38).symbol =  'SpeedgoatCANOpen07_B.DunkA_TPDO_TargetVelocity';
    
xcp.signals(39).symbol =  'SpeedgoatCANOpen07_B.DunkA_TPDO_BrakeControl';
    
xcp.signals(40).symbol =  'SpeedgoatCANOpen07_B.DunkA_TPDO_OperationMode';
    
xcp.signals(41).symbol =  'SpeedgoatCANOpen07_B.DunkA_TPDO_TargetTorque';
    
xcp.signals(42).symbol =  'SpeedgoatCANOpen07_B.DunkA_TPDO_TargetPosition';
    
xcp.signals(43).symbol =  'SpeedgoatCANOpen07_B.sts_word';
    
xcp.signals(44).symbol =  'SpeedgoatCANOpen07_B.Gain';
    
xcp.signals(45).symbol =  'SpeedgoatCANOpen07_B.Gain1';
    
xcp.signals(46).symbol =  'SpeedgoatCANOpen07_B.Gain3';
    
xcp.signals(47).symbol =  'SpeedgoatCANOpen07_B.Gain6';
    
xcp.signals(48).symbol =  'SpeedgoatCANOpen07_B.CCaller_o1';
    
xcp.signals(49).symbol =  'SpeedgoatCANOpen07_B.CCaller_o2';
    
xcp.signals(50).symbol =  'SpeedgoatCANOpen07_B.CCaller_o3';
    
xcp.signals(51).symbol =  'SpeedgoatCANOpen07_B.CCaller_o1_i';
    
xcp.signals(52).symbol =  'SpeedgoatCANOpen07_B.CCaller_o2_i';
    
xcp.signals(53).symbol =  'SpeedgoatCANOpen07_B.CCaller_o3_p';
    
xcp.signals(54).symbol =  'SpeedgoatCANOpen07_B.CANRead_o1';
    
xcp.signals(55).symbol =  'SpeedgoatCANOpen07_B.CANRead_o2';
    
xcp.signals(56).symbol =  'SpeedgoatCANOpen07_B.CANRead_o3';
    
xcp.signals(57).symbol =  'SpeedgoatCANOpen07_B.CANRead_o4';
    
xcp.signals(58).symbol =  'SpeedgoatCANOpen07_B.CANRead_o5';
    
xcp.signals(59).symbol =  'SpeedgoatCANOpen07_B.CANRead_o6';
    
xcp.signals(60).symbol =  'SpeedgoatCANOpen07_B.Switch';
    
xcp.signals(61).symbol =  'SpeedgoatCANOpen07_B.Constant_g';
    
xcp.signals(62).symbol =  'SpeedgoatCANOpen07_B.CANRead_o1_j';
    
xcp.signals(63).symbol =  'SpeedgoatCANOpen07_B.CANRead_o2_n';
    
xcp.signals(64).symbol =  'SpeedgoatCANOpen07_B.CANRead_o3_o';
    
xcp.signals(65).symbol =  'SpeedgoatCANOpen07_B.CANRead_o4_n';
    
xcp.signals(66).symbol =  'SpeedgoatCANOpen07_B.CANRead_o5_f';
    
xcp.signals(67).symbol =  'SpeedgoatCANOpen07_B.CANRead_o6_p';
    
xcp.signals(68).symbol =  'SpeedgoatCANOpen07_B.Switch_f';
    
xcp.signals(69).symbol =  'SpeedgoatCANOpen07_B.Constant';
         
xcp.parameters(1).symbol = 'SpeedgoatCANOpen07_P.Constant1_Value';
xcp.parameters(1).size   =  1;       
xcp.parameters(1).dtname = 'real_T'; 
xcp.parameters(2).baseaddr = '&SpeedgoatCANOpen07_P.Constant1_Value';     
         
xcp.parameters(2).symbol = 'SpeedgoatCANOpen07_P.Constant2_Value';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'real_T'; 
xcp.parameters(3).baseaddr = '&SpeedgoatCANOpen07_P.Constant2_Value';     
         
xcp.parameters(3).symbol = 'SpeedgoatCANOpen07_P.Constant3_Value';
xcp.parameters(3).size   =  1;       
xcp.parameters(3).dtname = 'real_T'; 
xcp.parameters(4).baseaddr = '&SpeedgoatCANOpen07_P.Constant3_Value';     
         
xcp.parameters(4).symbol = 'SpeedgoatCANOpen07_P.Gain_Gain';
xcp.parameters(4).size   =  1;       
xcp.parameters(4).dtname = 'real32_T'; 
xcp.parameters(5).baseaddr = '&SpeedgoatCANOpen07_P.Gain_Gain';     
         
xcp.parameters(5).symbol = 'SpeedgoatCANOpen07_P.Gain1_Gain';
xcp.parameters(5).size   =  1;       
xcp.parameters(5).dtname = 'real32_T'; 
xcp.parameters(6).baseaddr = '&SpeedgoatCANOpen07_P.Gain1_Gain';     
         
xcp.parameters(6).symbol = 'SpeedgoatCANOpen07_P.Gain3_Gain';
xcp.parameters(6).size   =  1;       
xcp.parameters(6).dtname = 'real32_T'; 
xcp.parameters(7).baseaddr = '&SpeedgoatCANOpen07_P.Gain3_Gain';     
         
xcp.parameters(7).symbol = 'SpeedgoatCANOpen07_P.Gain6_Gain';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'int16_T'; 
xcp.parameters(8).baseaddr = '&SpeedgoatCANOpen07_P.Gain6_Gain';     
         
xcp.parameters(8).symbol = 'SpeedgoatCANOpen07_P.CANSetup_P1';
xcp.parameters(8).size   =  40;       
xcp.parameters(8).dtname = 'real_T'; 
xcp.parameters(9).baseaddr = '&SpeedgoatCANOpen07_P.CANSetup_P1[0]';     
         
xcp.parameters(9).symbol = 'SpeedgoatCANOpen07_P.CANSetup_P2';
xcp.parameters(9).size   =  1;       
xcp.parameters(9).dtname = 'real_T'; 
xcp.parameters(10).baseaddr = '&SpeedgoatCANOpen07_P.CANSetup_P2';     
         
xcp.parameters(10).symbol = 'SpeedgoatCANOpen07_P.CANSetup_P3';
xcp.parameters(10).size   =  1;       
xcp.parameters(10).dtname = 'real_T'; 
xcp.parameters(11).baseaddr = '&SpeedgoatCANOpen07_P.CANSetup_P3';     
         
xcp.parameters(11).symbol = 'SpeedgoatCANOpen07_P.CANRead_P1';
xcp.parameters(11).size   =  6;       
xcp.parameters(11).dtname = 'real_T'; 
xcp.parameters(12).baseaddr = '&SpeedgoatCANOpen07_P.CANRead_P1[0]';     
         
xcp.parameters(12).symbol = 'SpeedgoatCANOpen07_P.Switch_Threshold';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'uint8_T'; 
xcp.parameters(13).baseaddr = '&SpeedgoatCANOpen07_P.Switch_Threshold';     
         
xcp.parameters(13).symbol = 'SpeedgoatCANOpen07_P.Constant_Value';
xcp.parameters(13).size   =  1;       
xcp.parameters(13).dtname = 'uint8_T'; 
xcp.parameters(14).baseaddr = '&SpeedgoatCANOpen07_P.Constant_Value';     
         
xcp.parameters(14).symbol = 'SpeedgoatCANOpen07_P.CANWrite_P1';
xcp.parameters(14).size   =  7;       
xcp.parameters(14).dtname = 'real_T'; 
xcp.parameters(15).baseaddr = '&SpeedgoatCANOpen07_P.CANWrite_P1[0]';     
         
xcp.parameters(15).symbol = 'SpeedgoatCANOpen07_P.CANRead_P1_k';
xcp.parameters(15).size   =  6;       
xcp.parameters(15).dtname = 'real_T'; 
xcp.parameters(16).baseaddr = '&SpeedgoatCANOpen07_P.CANRead_P1_k[0]';     
         
xcp.parameters(16).symbol = 'SpeedgoatCANOpen07_P.Switch_Threshold_k';
xcp.parameters(16).size   =  1;       
xcp.parameters(16).dtname = 'uint8_T'; 
xcp.parameters(17).baseaddr = '&SpeedgoatCANOpen07_P.Switch_Threshold_k';     
         
xcp.parameters(17).symbol = 'SpeedgoatCANOpen07_P.Constant_Value_o';
xcp.parameters(17).size   =  1;       
xcp.parameters(17).dtname = 'uint8_T'; 
xcp.parameters(18).baseaddr = '&SpeedgoatCANOpen07_P.Constant_Value_o';     
         
xcp.parameters(18).symbol = 'SpeedgoatCANOpen07_P.CANWrite_P1_n';
xcp.parameters(18).size   =  7;       
xcp.parameters(18).dtname = 'real_T'; 
xcp.parameters(19).baseaddr = '&SpeedgoatCANOpen07_P.CANWrite_P1_n[0]';     

function n = getNumParameters
n = 18;

function n = getNumSignals
n = 69;

function n = getNumEvents
n = 1;

function n = getNumModels
n = 1;

