class CfgPatches
{
	class ax_faction_f_navy
	{
		units[]=
		{
			"AX_B_Navy_FlightDeckCrew_white",
			"AX_B_Navy_FlightDeckCrew_yellow",
			"AX_B_Navy_FlightDeckCrew_red",
			"AX_B_Navy_FlightDeckCrew_green",
			"AX_B_Navy_FlightDeckCrew_brown",
			"AX_B_Navy_FlightDeckCrew_blue",
			"AX_B_Navy_FlightDeckCrew_violet",
			"AX_B_Navy_Sailor_Armed",
			"AX_B_Navy_Captain",
			"AX_B_Navy_Officer",
			"AX_B_Navy_Corpsman_Marine_Des",
			"AX_B_Navy_Corpsman_Marine_Wdl",
			"AX_B_Navy_Corpsman",
			"AX_B_Navy_BoatCrew",
			"AX_B_Navy_Pilot",
			"AX_B_Navy_Fighter_Pilot_F",
			"AX_B_Navy_Helipilot",
			"AX_B_Navy_Helicrew",
			"AX_B_Navy_Repair",

			"AX_B_Navy_Boat_Transport_01",
			"AX_B_Navy_CombatBoat_AT",
			"AX_B_Navy_CombatBoat_HMG",
			"AX_B_Navy_CombatBoat_Unarmed",
			"AX_B_Navy_Lifeboat",
			"AX_B_Navy_Boat_Armed_01_minigun",
			"AX_B_Navy_LSV_01_light",
			"AX_B_Navy_LSV_01_unarmed",
			"AX_B_Navy_LSV_01_armed",
			"AX_B_Navy_LSV_01_AT",
			"AX_B_Navy_Quadbike_01",
			"AX_B_Navy_Heli_Transport_03_F",
			"AX_B_Navy_Heli_Transport_03_unarmed_F",
			"AX_B_Navy_Heli_Transport_01_F",
			"AX_B_Navy_Heli_Transport_01_pylons_F",
			"AX_B_Navy_Heli_Transport_01_medevac_F",
			"AX_B_Navy_VTOL_01_armed_F",
			"AX_B_Navy_VTOL_01_infantry_F",
			"AX_B_Navy_VTOL_01_vehicle_F",
			"AX_B_Navy_Plane_Fighter_01_F",
			"AX_B_Navy_Plane_Fighter_01_Stealth_F",
			"AX_B_Navy_HMG_01",
			"AX_B_Navy_HMG_01_high",
			"AX_B_Navy_GMG_01",
			"AX_B_Navy_HMG_02_F",
			"AX_B_Navy_HMG_02_high_F",
			"AX_B_Navy_Ship_MRLS_01_F",
			"AX_B_Navy_Ship_Gun_01_F",
			"AX_B_Navy_SAM_System_01_F",
			"AX_B_Navy_AAA_System_01_F",
			"AX_B_Navy_LPD_Turret_01"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"RF_Data_Loadorder",
			"EF_Sounds_C",
			"A3_AddGis_Characters_F_AddGis",
			"ax_characters_f_usmc_futura"
		};
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
};

class CfgVehicles
{
	class SoldierWB;
	#include "sailors.hpp"
	//#include "seals.hpp"
	#include "vehicles.hpp"
};

class CfgGroups
{
	class West
	{
    };
};