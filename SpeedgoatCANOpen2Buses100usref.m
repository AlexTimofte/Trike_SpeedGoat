function sys=SpeedgoatCANOpen2Buses100usref
sys = [];
sys.child = [];
sys.NumDataTypes = 8; 
sys.DataTypes = [];
temp.EnumNames='';
temp.EnumValues = [];
temp.Name = '';
sys.DataTypes = repmat(temp,1,8);
sys.DataTypes(1).Name = 'uint16_T';
sys.DataTypes(2).Name = 'int32_T';
sys.DataTypes(3).Name = 'uint32_T';
sys.DataTypes(4).Name = 'uint8_T';
sys.DataTypes(5).Name = 'real32_T';
sys.DataTypes(6).Name = 'real_T';
sys.DataTypes(7).Name = 'uint64_T';
sys.DataTypes(8).Name = 'boolean_T';