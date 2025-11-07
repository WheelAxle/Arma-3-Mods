class CfgPatches
{
	class ax_faction_altis_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
};

class CfgVehicles
{
	#include "aaf.hpp"
	#include "aaf_sf.hpp"
};