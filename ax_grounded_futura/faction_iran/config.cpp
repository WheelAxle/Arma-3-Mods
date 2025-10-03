class cfgPatches
{
	class ax_faction_iran_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgVehicles
{
	class SoldierEB;
	class O_Soldier_base_F: SoldierEB{};
	class O_Soldier_Urban_base: O_Soldier_base_F{};
	class O_Soldier_sniper_base_F: O_Soldier_base_F{};
	#include "iaf.hpp"
	#include "iaf_urban.hpp"
	#include "iaf_army.hpp"
};

class cfgGroups
{
	class East
	{
		class OPF_F
		{
			class ArmInfantry
			{
				name="$STR_A3_Atlas_CfgGroups_West_BLU_EAF_F_ResInfantry0";
			};
		};
	};
};