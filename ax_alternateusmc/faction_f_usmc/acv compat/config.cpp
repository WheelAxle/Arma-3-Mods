class CfgPatches
{
	class ax_faction_f_usmc_acv_compat
	{
		units[]=
		{
			"AX_B_MJTF_W_APC_Wheeled_acv_F",
			"AX_B_MJTF_D_APC_Wheeled_acv_F",
			"AX_B_MJTF_W_APC_Wheeled_acv_gl_F",
			"AX_B_MJTF_D_APC_Wheeled_acv_gl_F",
			"AX_B_MJTF_W_APC_Wheeled_acv_30_F",
			"AX_B_MJTF_D_APC_Wheeled_acv_30_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ACV",
			"EF_Sounds_C"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgVehicles
{
	class Car;
	class Car_F: Car
	{
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
	class ACV_Base_F: Wheeled_APC_F{};
	class ACV: ACV_Base_F{scope=1;scopeCurator=1;};
	class ACV_MK19: ACV{scope=1;scopeCurator=1;};
	class ACV_30: ACV_Base_F{scope=1;scopeCurator=1;};
	#include "base.hpp"
	class AX_B_MJTF_W_APC_Wheeled_acv_F: AX_APC_Wheeled_acv_m2_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="ACV-P Frog (HMG)";
		faction="EF_B_MJTF_Wdl";
		crew="EF_B_Marine_Crew_Wdl";
		#include "transportmag.hpp"
	};
	class AX_B_MJTF_D_APC_Wheeled_acv_F: AX_B_MJTF_W_APC_Wheeled_acv_F
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Des";
		crew="EF_B_Marine_Crew_Des";
		hiddenSelectionsTextures[]=
		{
			"\ACV\Data\ACV_body_01_TN_co.paa",
			"\ACV\Data\ACV_body_02_TN_co.paa",
			"\ACV\Data\ACV_body_03_TN_co.paa",
			"\ACV\Data\ACV_body_04_TN_co.paa",
			"\ACV\Data\ACV_wheel_TN_co.paa",
			"\ACV\Data\ACV_armor_TN_co.paa",
			"\ACV\Data\ACV_30_TN_co.paa",
			"\ACV\Data\ACV_crow_TN_co.paa",
			"\ACV\Data\ACV_guns_TN_co.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\black_co.paa",
			"\ACV\Data\black_co.paa",
			"#(argb,256,256,1)r2t(rendertarget01,1.0)",
			"#(argb,256,256,1)r2t(rendertarget03,1.0)",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\black_co.paa"
		};
	};
	class AX_B_MJTF_W_APC_Wheeled_acv_gl_F: AX_APC_Wheeled_acv_gl_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="ACV-P Frog (GL)";
		faction="EF_B_MJTF_Wdl";
		crew="EF_B_Marine_Crew_Wdl";
		#include "transportmag.hpp"
	};
	class AX_B_MJTF_D_APC_Wheeled_acv_gl_F: AX_B_MJTF_W_APC_Wheeled_acv_gl_F
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Des";
		crew="EF_B_Marine_Crew_Des";
		hiddenSelectionsTextures[]=
		{
			"\ACV\Data\ACV_body_01_TN_co.paa",
			"\ACV\Data\ACV_body_02_TN_co.paa",
			"\ACV\Data\ACV_body_03_TN_co.paa",
			"\ACV\Data\ACV_body_04_TN_co.paa",
			"\ACV\Data\ACV_wheel_TN_co.paa",
			"\ACV\Data\ACV_armor_TN_co.paa",
			"\ACV\Data\ACV_30_TN_co.paa",
			"\ACV\Data\ACV_crow_TN_co.paa",
			"\ACV\Data\ACV_guns_TN_co.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\black_co.paa",
			"\ACV\Data\black_co.paa",
			"#(argb,256,256,1)r2t(rendertarget01,1.0)",
			"#(argb,256,256,1)r2t(rendertarget03,1.0)",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\black_co.paa"
		};
	};
	class AX_B_MJTF_W_APC_Wheeled_acv_30_F: AX_APC_Wheeled_acv_30mm_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="ACV-30 Frog";
		faction="EF_B_MJTF_Wdl";
		crew="EF_B_Marine_Crew_Wdl";
		#include "transportmag.hpp"
	};
	class AX_B_MJTF_D_APC_Wheeled_acv_30_F: AX_B_MJTF_W_APC_Wheeled_acv_30_F
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Des";
		crew="EF_B_Marine_Crew_Des";
		hiddenSelectionsTextures[]=
		{
			"\ACV\Data\ACV_body_01_TN_co.paa",
			"\ACV\Data\ACV_body_02_TN_co.paa",
			"\ACV\Data\ACV_body_03_TN_co.paa",
			"\ACV\Data\ACV_body_04_TN_co.paa",
			"\ACV\Data\ACV_wheel_TN_co.paa",
			"\ACV\Data\ACV_armor_TN_co.paa",
			"\ACV\Data\ACV_30_TN_co.paa",
			"\ACV\Data\ACV_crow_TN_co.paa",
			"\ACV\Data\ACV_guns_TN_co.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\black_co.paa",
			"\ACV\Data\black_co.paa",
			"#(argb,256,256,1)r2t(rendertarget01,1.0)",
			"#(argb,256,256,1)r2t(rendertarget03,1.0)",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\clear_empty_ca.paa",
			"\ACV\Data\black_co.paa"
		};
	};
};