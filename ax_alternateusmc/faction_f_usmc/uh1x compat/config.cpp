class CfgPatches
{
	class ax_faction_f_usmc_uh1x_compat
	{
		units[]=
		{
			"AX_B_MJTF_D_Heli_Transport_uh1x_unarmed1_F",
			"AX_B_MJTF_W_Heli_Transport_uh1x_unarmed1_F",
			"AX_B_MJTF_D_Heli_Transport_uh1x_unarmed2_F",
			"AX_B_MJTF_W_Heli_Transport_uh1x_unarmed2_F",
			"AX_B_MJTF_D_Heli_Transport_uh1x_armed_F",
			"AX_B_MJTF_W_Heli_Transport_uh1x_armed_F",
			"AX_B_MJTF_D_Heli_Transport_uh1x_medical_F",
			"AX_B_MJTF_W_Heli_Transport_uh1x_medical_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"jj_uh1",
			"EF_Sounds_C"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class ViewPilot;
		class Turrets;
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitMissiles;
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class RotorLibHelicopterProperties;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class CargoTurret;
		class RotorLibHelicopterProperties;
		class Eventhandlers;
		class UserActions;
		class Components;
		class Reflectors
		{
			class Right;
		};
	};
	class jj_uh1h_base: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: CopilotTurret
			{
			};
			class uh1_LeftDoorGun: MainTurret
			{
			};
			class uh1_RightDoorGun: uh1_LeftDoorGun
			{
			};
			class uh1_CargoTurret_01: CargoTurret
			{
			};
			class uh1_CargoTurret_02: uh1_CargoTurret_01
			{
			};
			class uh1_CargoTurret_03: uh1_CargoTurret_01
			{
			};
			class uh1_CargoTurret_04: uh1_CargoTurret_01
			{
			};
			class uh1_CargoTurret_Right: CargoTurret
			{
			};
			class uh1_CargoTurret_Left: uh1_CargoTurret_Right
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};(_this select 0) animateDoor ['DoorL3_Open',1,true];(_this select 0) animateDoor ['DoorR3_Open', 1,true];";
		};
		class TextureSources
		{
			class AAF
			{
				author="$STR_A3_IMUS_John";
				displayName="AAF";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_aaf_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_aaf_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class LDF
			{
				author="$STR_A3_IMUS_John";
				displayName="LDF";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_LDF_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_LDF_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class BR_35
			{
				author="$STR_A3_IMUS_John";
				displayName="Brazil 2035";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_BR_35_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_BR_35_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class Sand
			{
				author="$STR_A3_IMUS_John";
				displayName="Sand";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_sand_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_sand_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class Green
			{
				author="$STR_A3_IMUS_John";
				displayName="Green";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_green_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_green_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class Olive
			{
				author="$STR_A3_IMUS_John";
				displayName="Olive";
				textures[]=
				{
					"JH_UH1X\data\uh1_ext_01_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\35\Nose_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class USMC
			{
				author="$STR_A3_IMUS_John";
				displayName="USMC";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_usmc_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_usmc_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class Desert_camo
			{
				author="$STR_A3_IMUS_John";
				displayName="Desert camo";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_des_camo_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_des_camo_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class idap
			{
				author="$STR_A3_IMUS_John";
				displayName="IDAP";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_idap_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_idap_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class Green_camo
			{
				author="$STR_A3_IMUS_John";
				displayName="Green camo";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_olive_camo_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_olive_camo_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
			class US_blk
			{
				author="$STR_A3_IMUS_John";
				displayName="Black";
				textures[]=
				{
					"JH_UH1X\data\skins\uh1_ext_01_blk_co.paa",
					"JH_UH1X\data\uh1_int_01_co.paa",
					"JH_UH1X\data\uh1_int_02_co.paa",
					"JH_UH1X\data\uh1_ext_02_co.paa",
					"JH_UH1X\data\uh1_int_03_co.paa",
					"JH_UH1X\data\uh1_int_04_co.paa",
					"JH_UH1X\data\skins\Nose_blk_co.paa",
					"JH_UH1X\data\uh1_ext_03_ca.paa"
				};
				factions[]=
				{
					""
				};
			};
		};
	};
	class jj_uh1h_unarmed_base: jj_uh1h_base
	{
	};
	class jj_uh1h_unarmed_2_base: jj_uh1h_base
	{
	};
	class jj_uh1h_doorgunner_base: jj_uh1h_base
	{
		class Components;
	};
	class jj_uh1h_medical_base: jj_uh1h_base
	{
	};
	class jj_uh1h_ov: jj_uh1h_unarmed_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class jj_uh1h_2_ov: jj_uh1h_unarmed_2_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class jj_uh1h_doorgunner_ov: jj_uh1h_doorgunner_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class jj_us_army_bell_uh1h_medical_ov: jj_uh1h_medical_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	
	#include "base.hpp"
	class AX_B_MJTF_D_Heli_Transport_uh1x_unarmed1_F: AX_Heli_Transport_uh1x_unarmed1_base_F
	{
		author="$STR_A3_IMUS_John";
		//editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_MJTF_D_Heli_Transport_uh1x_unarmed1_F.jpg";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=1;
		forceInGarage=1;
		faction="EF_B_MJTF_Des";
		displayName="UH-1X Specter (Unarmed)";
		crew="AX_B_MJTF_D_Helipilot_F";
		textureList[]=
		{
			"USMC",
			1
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="EF_30Rnd_65x39_caseless_coy_mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_ef_arifle_mxar_coy
			{
				weapon="ef_arifle_mxar_coy";
				count=2;
			};
		};
	};
	class AX_B_MJTF_W_Heli_Transport_uh1x_unarmed1_F: AX_B_MJTF_D_Heli_Transport_uh1x_unarmed1_F
	{
		//editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_MJTF_W_Heli_Transport_uh1x_unarmed1_F.jpg";
		forceInGarage=0;
		author="$STR_A3_IMUS_John";
		faction="EF_B_MJTF_Wdl";
		crew="AX_B_MJTF_W_Helipilot_F";
	};
	class AX_B_MJTF_D_Heli_Transport_uh1x_unarmed2_F: AX_Heli_Transport_uh1x_unarmed2_base_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_MJTF_D_Heli_Transport_uh1x_unarmed2_F.jpg";
		author="$STR_A3_IMUS_John";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		forceInGarage=1;
		faction="EF_B_MJTF_Des";
		displayName="UH-1X Specter (Unarmed)";
		crew="AX_B_MJTF_D_Helipilot_F";
		textureList[]=
		{
			"USMC",
			1
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="EF_30Rnd_65x39_caseless_coy_mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_ef_arifle_mxar_coy
			{
				weapon="ef_arifle_mxar_coy";
				count=2;
			};
		};
	};
	class AX_B_MJTF_W_Heli_Transport_uh1x_unarmed2_F: AX_B_MJTF_D_Heli_Transport_uh1x_unarmed2_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_MJTF_W_Heli_Transport_uh1x_unarmed2_F.jpg";
		forceInGarage=0;
		author="$STR_A3_IMUS_John";
		faction="EF_B_MJTF_Wdl";
		crew="AX_B_MJTF_W_Helipilot_F";
	};
	class AX_B_MJTF_D_Heli_Transport_uh1x_armed_F: AX_Heli_Transport_uh1x_armed_base_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_MJTF_D_Heli_Transport_uh1x_armed_F.jpg";
		author="$STR_A3_IMUS_John";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		forceInGarage=1;
		faction="EF_B_MJTF_Des";
		displayName="UH-1X Specter";
		crew="AX_B_MJTF_D_Helipilot_F";
		textureList[]=
		{
			"USMC",
			1
		};
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: uh1_CopilotTurret
			{
			};
			class uh1_CargoTurret_01: uh1_CargoTurret_01
			{
			};
			class uh1_CargoTurret_02: uh1_CargoTurret_02
			{
			};
			class uh1_CargoTurret_Right: uh1_CargoTurret_Right
			{
			};
			class uh1_CargoTurret_Left: uh1_CargoTurret_Left
			{
			};
			class uh1_LeftDoorGun: uh1_LeftDoorGun
			{
				gunnerType="AX_B_MJTF_D_Helicrew_F";
			};
			class uh1_RightDoorGun: uh1_RightDoorGun
			{
				gunnerType="AX_B_MJTF_D_Helicrew_F";
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="EF_30Rnd_65x39_caseless_coy_mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_ef_arifle_mxar_coy
			{
				weapon="ef_arifle_mxar_coy";
				count=2;
			};
		};
	};
	class AX_B_MJTF_W_Heli_Transport_uh1x_armed_F: AX_B_MJTF_D_Heli_Transport_uh1x_armed_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_MJTF_W_Heli_Transport_uh1x_armed_F.jpg";
		forceInGarage=0;
		author="$STR_A3_IMUS_John";
		faction="EF_B_MJTF_Wdl";
		crew="AX_B_MJTF_W_Helipilot_F";
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: uh1_CopilotTurret
			{
			};
			class uh1_CargoTurret_01: uh1_CargoTurret_01
			{
			};
			class uh1_CargoTurret_02: uh1_CargoTurret_02
			{
			};
			class uh1_CargoTurret_Right: uh1_CargoTurret_Right
			{
			};
			class uh1_CargoTurret_Left: uh1_CargoTurret_Left
			{
			};
			class uh1_LeftDoorGun: uh1_LeftDoorGun
			{
				gunnerType="AX_B_MJTF_W_Helicrew_F";
			};
			class uh1_RightDoorGun: uh1_RightDoorGun
			{
				gunnerType="AX_B_MJTF_W_Helicrew_F";
			};
		};
	};
	class AX_B_MJTF_D_Heli_Transport_uh1x_medical_F: AX_Heli_Transport_uh1x_medical_base_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_MJTF_D_Heli_Transport_uh1x_medical_F.jpg";
		author="$STR_A3_IMUS_John";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		forceInGarage=1;
		faction="EF_B_MJTF_Des";
		displayName="UH-1X Specter MEV";
		crew="AX_B_MJTF_D_Helipilot_F";
		textureList[]=
		{
			"USMC",
			1
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="EF_30Rnd_65x39_caseless_coy_mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_ef_arifle_mxar_coy
			{
				weapon="ef_arifle_mxar_coy";
				count=2;
			};
		};
	};
	class AX_B_MJTF_W_Heli_Transport_uh1x_medical_F: AX_B_MJTF_D_Heli_Transport_uh1x_medical_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_MJTF_W_Heli_Transport_uh1x_medical_F.jpg";
		forceInGarage=0;
		author="$STR_A3_IMUS_John";
		faction="EF_B_MJTF_Wdl";
		crew="AX_B_MJTF_W_Helipilot_F";
	};
};

class CfgWeapons
{
	class MGun;
	class MAG2: MGun
	{
		displayName="$STR_A3_CfgWeapons_MMG_02_sand_F0";
	};
};