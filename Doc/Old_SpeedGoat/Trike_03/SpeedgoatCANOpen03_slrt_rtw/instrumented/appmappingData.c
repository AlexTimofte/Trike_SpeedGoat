#include "slrtappmapping.h"
#include "./maps/SpeedgoatCANOpen03.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <SpeedgoatCANOpen03> */
		{ /* SignalMapInfo */
			SpeedgoatCANOpen03_BIOMAP,
			SpeedgoatCANOpen03_LBLMAP,
			SpeedgoatCANOpen03_SIDMAP,
			SpeedgoatCANOpen03_SBIO,
			SpeedgoatCANOpen03_SLBL,
			{0,72},
			45,
		},
		{ /* ParamMapInfo */
			SpeedgoatCANOpen03_PTIDSMAP,
			SpeedgoatCANOpen03_PTNAMESMAP,
			SpeedgoatCANOpen03_SPTMAP,
			{0,15},
			16,
		},
		"SpeedgoatCANOpen03",
		"",
		"SpeedgoatCANOpen03",
		8,
		SpeedgoatCANOpen03_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}