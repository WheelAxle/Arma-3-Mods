class CfgPatches
{
	class ax_faction_f_usmc
	{
		units[]=
		{
			"AX_B_MJTF_D_Helipilot_F",
			"AX_B_MJTF_D_Helicrew_F",
			"AX_B_MJTF_D_Fighter_Pilot_F",
			"AX_B_MJTF_D_HeavyGunner_F",
			"AX_B_MJTF_D_Recon_AR",
			"AX_B_MJTF_D_Recon_GL",
			"AX_B_MJTF_D_sniper_F",
			"AX_B_MJTF_D_spotter_F",

			"AX_B_MJTF_W_Helipilot_F",
			"AX_B_MJTF_W_Helicrew_F",
			"AX_B_MJTF_W_Fighter_Pilot_F",
			"AX_B_MJTF_W_HeavyGunner_F",
			"AX_B_MJTF_W_Recon_AR",
			"AX_B_MJTF_W_Recon_GL",
			"AX_B_MJTF_W_sniper_F",
			"AX_B_MJTF_W_spotter_F",

			"AX_B_D_MARSOC_AR_F",
			"AX_B_D_MARSOC_AR2_F",
			"AX_B_D_MARSOC_Exp_F",
			"AX_B_D_MARSOC_GL_F",
			"AX_B_D_MARSOC_JTAC_F",
			"AX_B_D_MARSOC_M_F",
			"AX_B_D_MARSOC_M2_F",
			"AX_B_D_MARSOC_Medic_F",
			"AX_B_D_MARSOC_Medic2_F",
			"AX_B_D_MARSOC_F",
			"AX_B_D_MARSOC_LAT_F",
			"AX_B_D_MARSOC_LAT2_F",
			"AX_B_D_MARSOC_TL_F",
			"AX_B_D_MARSOC_SL_F",
			"AX_B_D_MARSOC_Sharpshooter_F",
			"AX_B_D_MARSOC_UAV_F",
			"AX_B_D_MARSOC_UAV_lxWS",
			
			"AX_B_W_MARSOC_AR_F",
			"AX_B_W_MARSOC_AR2_F",
			"AX_B_W_MARSOC_Exp_F",
			"AX_B_W_MARSOC_GL_F",
			"AX_B_W_MARSOC_JTAC_F",
			"AX_B_W_MARSOC_M_F",
			"AX_B_W_MARSOC_M2_F",
			"AX_B_W_MARSOC_Medic_F",
			"AX_B_W_MARSOC_Medic2_F",
			"AX_B_W_MARSOC_F",
			"AX_B_W_MARSOC_LAT_F",
			"AX_B_W_MARSOC_LAT2_F",
			"AX_B_W_MARSOC_TL_F",
			"AX_B_W_MARSOC_SL_F",
			"AX_B_W_MARSOC_Sharpshooter_F",
			"AX_B_W_MARSOC_UAV_F",
			"AX_B_W_MARSOC_UAV_lxWS",

			"AX_B_Truck_01_flatbed_MJTF_Des",
			"AX_B_Truck_01_flatbed_MJTF_Wdl",
			
			"AX_B_Plane_Fighter_01_MJTF_Des_F",
			"AX_B_Plane_Fighter_01_MJTF_Wdl_F",
			"AX_B_Plane_Fighter_01_Stealth_MJTF_Des_F",
			"AX_B_Plane_Fighter_01_Stealth_MJTF_Wdl_F"
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
	#include "marinebase.hpp"
	#include "des.hpp"
	#include "wdl.hpp"
	#include "sfdes.hpp"
	#include "sfwdl.hpp"
	#include "marsocdes.hpp"
	#include "marsocwdl.hpp"

	#include "vehicles.hpp"
	class B_Heli_Attack_01_dynamicLoadout_F;
	class EF_AH99J_dynamicLoadout_base;
	class EF_B_Heli_Attack_01_dynamicLoadout_MJTF_Des: B_Heli_Attack_01_dynamicLoadout_F
	{
		crew="AX_B_MJTF_D_Helipilot_F";
	};
	class EF_B_Heli_Attack_01_dynamicLoadout_MJTF_Wdl: B_Heli_Attack_01_dynamicLoadout_F
	{
		crew="AX_B_MJTF_W_Helipilot_F";
	};
	class EF_B_AH99J_MJTF_Des: EF_AH99J_dynamicLoadout_base
	{
		crew="AX_B_MJTF_D_Helipilot_F";
	};
	class EF_B_AH99J_MJTF_Wdl: EF_AH99J_dynamicLoadout_base
	{
		crew="AX_B_MJTF_W_Helipilot_F";
	};
	
	class Helicopter;
	class Helicopter_Base_F: Helicopter{};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
		};
	};
	class EF_B_Heli_Transport_01_MJTF_Des: Heli_Transport_01_base_F
	{
		crew="AX_B_MJTF_D_Helipilot_F";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				gunnerType="AX_B_MJTF_D_Helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="AX_B_MJTF_D_Helicrew_F";
			};
		};
	};
	class EF_B_Heli_Transport_01_MJTF_Wdl: EF_B_Heli_Transport_01_MJTF_Des
	{
		crew="AX_B_MJTF_W_Helipilot_F";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				gunnerType="AX_B_MJTF_W_Helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="AX_B_MJTF_W_Helicrew_F";
			};
		};
	};
	class Heli_Transport_01_pylons_base_F;
	class EF_B_Heli_Transport_01_pylons_MJTF_Des: Heli_Transport_01_pylons_base_F
	{
		crew="AX_B_MJTF_D_Helipilot_F";
	};
	class EF_B_Heli_Transport_01_pylons_MJTF_Wdl: EF_B_Heli_Transport_01_pylons_MJTF_Des
	{
		crew="AX_B_MJTF_W_Helipilot_F";
	};
};

class CfgGroups
{
	class West
	{
		#include "c_groups.hpp"
    };
};