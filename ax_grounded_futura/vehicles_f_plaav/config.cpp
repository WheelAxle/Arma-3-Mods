class CfgPatches
{
	class ax_grounded_futura_plaav
	{
		units[]= 
		{
			"AX_O_MRAP_csk181_hex_F",
			"AX_O_T_MRAP_csk181_ghex_F",
			"AX_O_APC_zbd04A_hex_F",
			"AX_O_T_APC_zbd04A_ghex_F",
			"AX_O_APC_zbl09_hex_F",
			"AX_O_T_APC_zbl09_ghex_F",
			"AX_O_MBT_ztz96b_hex_F",
			"AX_O_T_MBT_ztz96b_ghex_F",

			"AX_O_Heli_Transport_z8l_F",
			"AX_O_T_Heli_Transport_z8l_F",
			"AX_O_Heli_Attack_z10_F",
			"AX_O_T_Heli_Attack_z10_F",
			"AX_O_Heli_Light_z11wa_F",
			"AX_O_T_Heli_Light_z11wa_F",
			"AX_O_Heli_Light_z11wa2_F",
			"AX_O_T_Heli_Light_z11wa2_F",
			"AX_O_Heli_Attack_z19_F",
			"AX_O_T_Heli_Attack_z19_F",
			"AX_O_Heli_Transport_z20_F",
			"AX_O_T_Heli_Transport_z20_F",

			"AX_O_Plane_Fighter_j10_F",
			"AX_O_T_Plane_Fighter_j10_F",
			"AX_O_Plane_Fighter_j11_F",
			"AX_O_T_Plane_Fighter_j11_F",
			"AX_O_Plane_Fighter_j15_F",
			"AX_O_T_Plane_Fighter_j15_F",
			"AX_O_Plane_Fighter_j16_F",
			"AX_O_T_Plane_Fighter_j16_F",
			"AX_O_Plane_Fighter_j20_F",
			"AX_O_T_Plane_Fighter_j20_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_LK"
		};
		author="Axle";
	};
};

class CfgWeapons
{
};

#include "CfgGroups.hpp"

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Components;
				class ViewGunner;
			};
		};
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner;
					};
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
	class CSK181_base_F: Car_F{};
	class CSK181: CSK181_base_F{class HMGTurret;};

	class ZBD04A_base: Tank_F{};
	class O_ZBD04A_base: ZBD04A_base{};
	class O_ZBD04A: O_ZBD04A_base{};

	class ZBL09_base: Wheeled_APC_F{};
	class O_ZBL09_base: ZBL09_base{};
	class O_ZBL09: O_ZBL09_base{};

	class ZTZ96B_base: Tank_F{};
	class O_ZTZ96B: ZTZ96B_base{};

    class PLAAF_Fighter_J10;
	class PLAAF_Fighter_J11;
    class PLAAF_Fighter_J15;
	class PLAAF_Fighter_J16;
	class PLAAF_Fighter_J20;

	class Z8L;
	class Z10_base: Helicopter_Base_F{};
	class Z10_dynamicLoadout: Z10_base{};
	class Z10: Z10_dynamicLoadout{};
	class Z11_base: Helicopter_Base_F
	{
		class Components;
	};
	class Z11_dynamicLoadout_base: Z11_base
	{
		class Components;
	};
    class Z11WA: Z11_dynamicLoadout_base{};
    class Z11WA_2: Z11WA{};
	class Z19_base: Helicopter_Base_F{};
	class Z19_dynamicLoadout: Z19_base{};
	class Z19: Z19_dynamicLoadout{};
    class Z20;

	//#include "cars.hpp"
	//#include "apcs.hpp"
	//#include "tanks.hpp"
	#include "helicopters.hpp"
	#include "jets.hpp"

	class AX_O_MRAP_csk181_hmg_hex_F: CSK181
	{
		scope=1;
		scopeCurator=1;
		displayName="$STR_A3_GRFU_MRAP_csk181_hmg_F0";
		faction="OPF_F";
		crew="O_Soldier_F";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\csk\H_cskbodytexturehex.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\csk\O_cskhoodtexturehex.paa"
		};
	};
	class AX_O_T_MRAP_csk181_hmg_ghex_F: AX_O_MRAP_csk181_hmg_hex_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_MRAP_csk181_hmg_ghex_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Soldier_F";
		typicalCargo[]=
		{
			"O_T_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\csk\H_cskbodytexturepac.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\csk\O_cskhoodtexturepac.paa"
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=2;
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
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=4;
			};
		};
	};
	class AX_O_APC_zbd04A_hex_F: O_ZBD04A
	{
		scope=1;
		scopeCurator=1;
		displayName="$STR_A3_GRFU_APC_zbd04A_F0";
		faction="OPF_F";
		crew="O_Crew_F";
		typicalCargo[]=
		{
			"O_Crew_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\zbd04\H_ZBD04_hex.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbd04\T_ZBD04_HEX.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbd04\TO_ZBd04_HEX.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbd04\W_ZBD04_HEX.paa",
		};
	};
	class AX_O_T_APC_zbd04A_ghex_F: AX_O_APC_zbd04A_hex_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_APC_zbd04A_ghex_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Crew_F";
		typicalCargo[]=
		{
			"O_T_Crew_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\zbd04\H_ZBD04_pac.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbd04\T_ZBD04_pac.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbd04\TO_ZBd04_PAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbd04\W_ZBD04_PAC.paa",
		};
	};
	class AX_O_APC_zbl09_hex_F: O_ZBL09
	{
		scope=1;
		scopeCurator=1;
		displayName="$STR_A3_GRFU_APC_zbl09_F0";
		faction="OPF_F";
		crew="O_Crew_F";
		typicalCargo[]=
		{
			"O_Crew_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\zbl09\H_body_ZBLHex.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbl09\T_Tur_ZBL_HEX.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbl09\TO_MIS_ZBL_HEX.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbl09\W_Tire_ZTL_HEX.paa"
		};
	};
	class AX_O_T_APC_zbl09_ghex_F: AX_O_APC_zbl09_hex_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_APC_zbl09_ghex_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Crew_F";
		typicalCargo[]=
		{
			"O_T_Crew_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\zbl09\H_body_ZBLPAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbl09\T_Tur_ZBL_PAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbl09\TO_MIS_ZBL_PAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\zbl09\W_Tire_ZTL_PAC.paa"
		};
	};
	class AX_O_MBT_ztz96b_hex_F: O_ZTZ96B
	{
		scope=1;
		scopeCurator=1;
		displayName="$STR_A3_GRFU_MBT_ztz96b_F0";
		faction="OPF_F";
		crew="O_Crew_F";
		typicalCargo[]=
		{
			"O_Crew_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\H_ZTZ96_HEX.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\T_ZTZ96_HEX.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\TO_ZTZ96_HEX.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\C_ZTZ96_HEX.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\W_ZTZ96_HEX.paa",
		};
	};
	class AX_O_T_MBT_ztz96b_ghex_F: AX_O_MBT_ztz96b_hex_F
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_MBT_ztz96b_ghex_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Crew_F";
		typicalCargo[]=
		{
			"O_T_Crew_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\H_ZTZ96_PAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\T_ZTZ96_PAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\TO_ZTZ96_PAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\C_ZTZ96_PAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\ztz96\W_ZTZ96_PAC.paa",
		};
	};
	class AX_O_Heli_Transport_z8l_F: AX_Heli_Transport_z8l_base_F
    {
		faction="OPF_F";
		crew="O_Helipilot_F";
		typicalCargo[]=
		{
			"O_Helipilot_F"
		};
    };
    class AX_O_T_Heli_Transport_z8l_F: AX_O_Heli_Transport_z8l_F
    {
        scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_Heli_Transport_z8l_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Helipilot_F";
		typicalCargo[]=
		{
			"O_T_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\Z8L\H_Z8L_PAC.paa",
			"Z8L\tex\D_co.paa",
			"Z8L\tex\R_co.paa",
			"Z8L\tex\R2_co.paa",
			"Z8L\tex\I_co.paa"
		};
    };
    class AX_O_Heli_Attack_z10_F: AX_Heli_Attack_z10_base_F
    {
		faction="OPF_F";
		crew="O_Helipilot_F";
		typicalCargo[]=
		{
			"O_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z10\H_Z10_PAC.paa",
			"Z10\tex\A_co.paa",
			"Z10\tex\O_co.paa",
			"Z10\tex\R_co.paa"
		};
    };
    class AX_O_T_Heli_Attack_z10_F: AX_O_Heli_Attack_z10_F
    {
        scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_Heli_Attack_z10_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Helipilot_F";
		typicalCargo[]=
		{
			"O_T_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z10\H_Z10_PAC.paa",
			"Z10\tex\A_co.paa",
			"Z10\tex\O_co.paa",
			"Z10\tex\R_co.paa"
		};
    };
    class AX_O_Heli_Light_z11wa_F: AX_Heli_Light_z11wa_base_F
    {
		faction="OPF_F";
		crew="O_Helipilot_F";
		typicalCargo[]=
		{
			"O_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\H_Z11_PAC.paa",
			"\Z11\tex\I_co.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\A_Z11_PAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\R_Z11_PAC.paa"
		};
    };
    class AX_O_T_Heli_Light_z11wa_F: AX_O_Heli_Light_z11wa_F
    {
        scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_Heli_Light_z11wa_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Helipilot_F";
		typicalCargo[]=
		{
			"O_T_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\H_Z11_PAC.paa",
			"\Z11\tex\I_co.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\A_Z11_PAC.paa",
			"\Z11\tex\R_co.paa"
		};
    };
    class AX_O_Heli_Light_z11wa2_F: AX_Heli_Light_z11wa2_base_F
    {
		faction="OPF_F";
		crew="O_Helipilot_F";
		typicalCargo[]=
		{
			"O_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\H_Z11_PAC.paa",
			"\Z11\tex\I_co.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\A_Z11_PAC.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\R_Z11_PAC.paa"
		};
    };
    class AX_O_T_Heli_Light_z11wa2_F: AX_O_Heli_Light_z11wa2_F
    {
        scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_Heli_Light_z11wa2_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Helipilot_F";
		typicalCargo[]=
		{
			"O_T_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\H_Z11_PAC.paa",
			"\Z11\tex\I_co.paa",
			"\ax_grounded_futura\vehicles_f_plaav\data\z11\A_Z11_PAC.paa",
			"\Z11\tex\R_co.paa"
		};
    };
	class AX_O_Heli_Attack_z19_F: AX_Heli_Attack_z19_base_F
    {
		faction="OPF_F";
		crew="O_Helipilot_F";
		typicalCargo[]=
		{
			"O_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z19\H_Z19_PAC.paa",
			"Z19\tex\R_co.paa",
			"Z19\tex\Eye_co.paa"
		};
    };
    class AX_O_T_Heli_Attack_z19_F: AX_O_Heli_Attack_z19_F
    {
        scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_Heli_Attack_z19_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Helipilot_F";
		typicalCargo[]=
		{
			"O_T_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z19\H_Z19_PAC.paa",
			"Z19\tex\R_co.paa",
			"Z19\tex\Eye_co.paa"
		};
    };
	class AX_O_Heli_Transport_z20_F: AX_Heli_Transport_z20_base_F
    {
		faction="OPF_F";
		crew="O_Helipilot_F";
		typicalCargo[]=
		{
			"O_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z20\H_Z20_PAC.paa",
			"Z20\tex\H2_co.paa",
			"Z20\tex\H3_co.paa",
			"Z20\tex\I_co.paa",
			"Z20\tex\R_co.paa",
			"Z20\tex\O_co.paa"
		};
    };
    class AX_O_T_Heli_Transport_z20_F: AX_O_Heli_Transport_z20_F
    {
		//editorPreview="\ax_grounded_futura\vehicles_f_plaav\previews\AX_O_T_Heli_Transport_z20_F.jpg";
		faction="OPF_T_F";
		crew="O_T_Helipilot_F";
		typicalCargo[]=
		{
			"O_T_Helipilot_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\vehicles_f_plaav\data\z20\H_Z20_PAC.paa",
			"Z20\tex\H2_co.paa",
			"Z20\tex\H3_co.paa",
			"Z20\tex\I_co.paa",
			"Z20\tex\R_co.paa",
			"Z20\tex\O_co.paa"
		};
    };
};