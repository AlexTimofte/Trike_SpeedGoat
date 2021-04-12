#include "slrtappmapping.h"
#include "./maps/SpeedgoatCANOpen07.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <SpeedgoatCANOpen07> */
		{ /* SignalMapInfo */
			SpeedgoatCANOpen07_BIOMAP,
			SpeedgoatCANOpen07_LBLMAP,
			SpeedgoatCANOpen07_SIDMAP,
			SpeedgoatCANOpen07_SBIO,
			SpeedgoatCANOpen07_SLBL,
			{0,96},
			69,
		},
		{ /* ParamMapInfo */
			SpeedgoatCANOpen07_PTIDSMAP,
			SpeedgoatCANOpen07_PTNAMESMAP,
			SpeedgoatCANOpen07_SPTMAP,
			{0,17},
			18,
		},
		"SpeedgoatCANOpen07",
		"",
		"SpeedgoatCANOpen07",
		9,
		SpeedgoatCANOpen07_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}