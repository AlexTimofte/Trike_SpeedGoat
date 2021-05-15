#include "slrtappmapping.h"
#include "./maps/SpeedgoatCANOpen2Buses100us.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <SpeedgoatCANOpen2Buses100us> */
		{ /* SignalMapInfo */
			SpeedgoatCANOpen2Buses100us_BIOMAP,
			SpeedgoatCANOpen2Buses100us_LBLMAP,
			SpeedgoatCANOpen2Buses100us_SIDMAP,
			SpeedgoatCANOpen2Buses100us_SBIO,
			SpeedgoatCANOpen2Buses100us_SLBL,
			{0,154},
			141,
		},
		{ /* ParamMapInfo */
			SpeedgoatCANOpen2Buses100us_PTIDSMAP,
			SpeedgoatCANOpen2Buses100us_PTNAMESMAP,
			SpeedgoatCANOpen2Buses100us_SPTMAP,
			{0,38},
			39,
		},
		"SpeedgoatCANOpen2Buses100us",
		"",
		"SpeedgoatCANOpen2Buses100us",
		17,
		SpeedgoatCANOpen2Buses100us_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}