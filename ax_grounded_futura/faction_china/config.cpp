class CfgPatches
{
	class ax_faction_china_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"JAM_Characters_CN_AE",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
};

class CfgVehicles
{
	class O_Soldier_base_F;
	#include "pla.hpp"
	#include "pla_dst.hpp"
	#include "pla_marine.hpp"
	#include "viper.hpp"
};