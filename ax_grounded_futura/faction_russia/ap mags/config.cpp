class CfgPatches
{
	class ax_faction_russia_grfu_ap_mags
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"ax_characters_f_russia_grfu"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgVehicles
{
	#include "backpacks.hpp"
	#include "rafapmags.hpp"
	#include "conscripts.hpp"
};