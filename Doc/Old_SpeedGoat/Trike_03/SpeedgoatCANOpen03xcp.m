function xcp = SpeedgoatCANOpen03xcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);
    
xcp.models{1} = 'SpeedgoatCANOpen03';
   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.001;
xcp.events(1).offset     = 0.0;
    
xcp.signals(1).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromAPT_o1';
    
xcp.signals(2).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromAPT_o2';
    
xcp.signals(3).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromAPT_o3';
    
xcp.signals(4).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromAPT_o4';
    
xcp.signals(5).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromAPT_o5';
    
xcp.signals(6).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromAPT_o6';
    
xcp.signals(7).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromAPT_o7';
    
xcp.signals(8).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromAPT_o8';
    
xcp.signals(9).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromAPT_o9';
    
xcp.signals(10).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromJoystick_o1';
    
xcp.signals(11).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromJoystick_o2';
    
xcp.signals(12).symbol =  'SpeedgoatCANOpen03_B.RPDOsfromJoystick_o3';
    
xcp.signals(13).symbol =  'SpeedgoatCANOpen03_B.CCaller_o1';
    
xcp.signals(14).symbol =  'SpeedgoatCANOpen03_B.CCaller_o2';
    
xcp.signals(15).symbol =  'SpeedgoatCANOpen03_B.CCaller_o3';
    
xcp.signals(16).symbol =  'SpeedgoatCANOpen03_B.CCaller1_o1';
    
xcp.signals(17).symbol =  'SpeedgoatCANOpen03_B.CCaller1_o2';
    
xcp.signals(18).symbol =  'SpeedgoatCANOpen03_B.CCaller1_o3';
    
xcp.signals(19).symbol =  'SpeedgoatCANOpen03_B.HB';
    
xcp.signals(20).symbol =  'SpeedgoatCANOpen03_B.Byte0';
    
xcp.signals(21).symbol =  'SpeedgoatCANOpen03_B.Abs';
    
xcp.signals(22).symbol =  'SpeedgoatCANOpen03_B.DataTypeConversion';
    
xcp.signals(23).symbol =  'SpeedgoatCANOpen03_B.DataTypeConversion1';
    
xcp.signals(24).symbol =  'SpeedgoatCANOpen03_B.DataTypeConversion2';
    
xcp.signals(25).symbol =  'SpeedgoatCANOpen03_B.Gain1';
    
xcp.signals(26).symbol =  'SpeedgoatCANOpen03_B.Gain2';
    
xcp.signals(27).symbol =  'SpeedgoatCANOpen03_B.Gain3';
    
xcp.signals(28).symbol =  'SpeedgoatCANOpen03_B.Gain4';
    
xcp.signals(29).symbol =  'SpeedgoatCANOpen03_B.Gain5';
    
xcp.signals(30).symbol =  'SpeedgoatCANOpen03_B.CANRead_o1';
    
xcp.signals(31).symbol =  'SpeedgoatCANOpen03_B.CANRead_o2';
    
xcp.signals(32).symbol =  'SpeedgoatCANOpen03_B.CANRead_o3';
    
xcp.signals(33).symbol =  'SpeedgoatCANOpen03_B.CANRead_o4';
    
xcp.signals(34).symbol =  'SpeedgoatCANOpen03_B.CANRead_o5';
    
xcp.signals(35).symbol =  'SpeedgoatCANOpen03_B.CANRead_o6';
    
xcp.signals(36).symbol =  'SpeedgoatCANOpen03_B.Switch';
    
xcp.signals(37).symbol =  'SpeedgoatCANOpen03_B.CANRead_o1_m';
    
xcp.signals(38).symbol =  'SpeedgoatCANOpen03_B.CANRead_o2_p';
    
xcp.signals(39).symbol =  'SpeedgoatCANOpen03_B.CANRead_o3_n';
    
xcp.signals(40).symbol =  'SpeedgoatCANOpen03_B.CANRead_o4_g';
    
xcp.signals(41).symbol =  'SpeedgoatCANOpen03_B.CANRead_o5_n';
    
xcp.signals(42).symbol =  'SpeedgoatCANOpen03_B.CANRead_o6_j';
    
xcp.signals(43).symbol =  'SpeedgoatCANOpen03_B.Switch_e';
    
xcp.signals(44).symbol =  'SpeedgoatCANOpen03_B.Constant_g';
    
xcp.signals(45).symbol =  'SpeedgoatCANOpen03_B.Constant';
         
xcp.parameters(1).symbol = 'SpeedgoatCANOpen03_P.CANSetup_P1';
xcp.parameters(1).size   =  40;       
xcp.parameters(1).dtname = 'real_T'; 
xcp.parameters(2).baseaddr = '&SpeedgoatCANOpen03_P.CANSetup_P1[0]';     
         
xcp.parameters(2).symbol = 'SpeedgoatCANOpen03_P.CANSetup_P2';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'real_T'; 
xcp.parameters(3).baseaddr = '&SpeedgoatCANOpen03_P.CANSetup_P2';     
         
xcp.parameters(3).symbol = 'SpeedgoatCANOpen03_P.CANSetup_P3';
xcp.parameters(3).size   =  1;       
xcp.parameters(3).dtname = 'real_T'; 
xcp.parameters(4).baseaddr = '&SpeedgoatCANOpen03_P.CANSetup_P3';     
         
xcp.parameters(4).symbol = 'SpeedgoatCANOpen03_P.Gain1_Gain';
xcp.parameters(4).size   =  1;       
xcp.parameters(4).dtname = 'real32_T'; 
xcp.parameters(5).baseaddr = '&SpeedgoatCANOpen03_P.Gain1_Gain';     
         
xcp.parameters(5).symbol = 'SpeedgoatCANOpen03_P.Gain2_Gain';
xcp.parameters(5).size   =  1;       
xcp.parameters(5).dtname = 'real32_T'; 
xcp.parameters(6).baseaddr = '&SpeedgoatCANOpen03_P.Gain2_Gain';     
         
xcp.parameters(6).symbol = 'SpeedgoatCANOpen03_P.Gain3_Gain';
xcp.parameters(6).size   =  1;       
xcp.parameters(6).dtname = 'uint16_T'; 
xcp.parameters(7).baseaddr = '&SpeedgoatCANOpen03_P.Gain3_Gain';     
         
xcp.parameters(7).symbol = 'SpeedgoatCANOpen03_P.Gain4_Gain';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'int16_T'; 
xcp.parameters(8).baseaddr = '&SpeedgoatCANOpen03_P.Gain4_Gain';     
         
xcp.parameters(8).symbol = 'SpeedgoatCANOpen03_P.Gain5_Gain';
xcp.parameters(8).size   =  1;       
xcp.parameters(8).dtname = 'int16_T'; 
xcp.parameters(9).baseaddr = '&SpeedgoatCANOpen03_P.Gain5_Gain';     
         
xcp.parameters(9).symbol = 'SpeedgoatCANOpen03_P.CANRead_P1';
xcp.parameters(9).size   =  6;       
xcp.parameters(9).dtname = 'real_T'; 
xcp.parameters(10).baseaddr = '&SpeedgoatCANOpen03_P.CANRead_P1[0]';     
         
xcp.parameters(10).symbol = 'SpeedgoatCANOpen03_P.Switch_Threshold';
xcp.parameters(10).size   =  1;       
xcp.parameters(10).dtname = 'uint8_T'; 
xcp.parameters(11).baseaddr = '&SpeedgoatCANOpen03_P.Switch_Threshold';     
         
xcp.parameters(11).symbol = 'SpeedgoatCANOpen03_P.CANRead_P1_i';
xcp.parameters(11).size   =  6;       
xcp.parameters(11).dtname = 'real_T'; 
xcp.parameters(12).baseaddr = '&SpeedgoatCANOpen03_P.CANRead_P1_i[0]';     
         
xcp.parameters(12).symbol = 'SpeedgoatCANOpen03_P.Switch_Threshold_p';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'uint8_T'; 
xcp.parameters(13).baseaddr = '&SpeedgoatCANOpen03_P.Switch_Threshold_p';     
         
xcp.parameters(13).symbol = 'SpeedgoatCANOpen03_P.Constant_Value';
xcp.parameters(13).size   =  1;       
xcp.parameters(13).dtname = 'uint8_T'; 
xcp.parameters(14).baseaddr = '&SpeedgoatCANOpen03_P.Constant_Value';     
         
xcp.parameters(14).symbol = 'SpeedgoatCANOpen03_P.CANWrite_P1';
xcp.parameters(14).size   =  7;       
xcp.parameters(14).dtname = 'real_T'; 
xcp.parameters(15).baseaddr = '&SpeedgoatCANOpen03_P.CANWrite_P1[0]';     
         
xcp.parameters(15).symbol = 'SpeedgoatCANOpen03_P.Constant_Value_l';
xcp.parameters(15).size   =  1;       
xcp.parameters(15).dtname = 'uint8_T'; 
xcp.parameters(16).baseaddr = '&SpeedgoatCANOpen03_P.Constant_Value_l';     
         
xcp.parameters(16).symbol = 'SpeedgoatCANOpen03_P.CANWrite_P1_m';
xcp.parameters(16).size   =  7;       
xcp.parameters(16).dtname = 'real_T'; 
xcp.parameters(17).baseaddr = '&SpeedgoatCANOpen03_P.CANWrite_P1_m[0]';     

function n = getNumParameters
n = 16;

function n = getNumSignals
n = 45;

function n = getNumEvents
n = 1;

function n = getNumModels
n = 1;

