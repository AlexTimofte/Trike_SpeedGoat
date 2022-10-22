#include "slrtappmapping.h"
#include "./maps/SpeedgoatCANOpen2Buses1ms.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <SpeedgoatCANOpen2Buses1ms> */
		{ /* SignalMapInfo */
			SpeedgoatCANOpen2Buses1ms_BIOMAP,
			SpeedgoatCANOpen2Buses1ms_LBLMAP,
			SpeedgoatCANOpen2Buses1ms_SIDMAP,
			SpeedgoatCANOpen2Buses1ms_SBIO,
			SpeedgoatCANOpen2Buses1ms_SLBL,
			{0,292},
			265,
		},
		{ /* ParamMapInfo */
			SpeedgoatCANOpen2Buses1ms_PTIDSMAP,
			SpeedgoatCANOpen2Buses1ms_PTNAMESMAP,
			SpeedgoatCANOpen2Buses1ms_SPTMAP,
			{0,111},
			112,
		},
		"SpeedgoatCANOpen2Buses1ms",
		"",
		"SpeedgoatCANOpen2Buses1ms",
		11,
		SpeedgoatCANOpen2Buses1ms_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}