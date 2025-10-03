class cfgPatches
{
	class ax_faction_russia_grfu_su35
	{
		units[]=
		{
			"AX_O_R_Plane_Fighter_su35_F",
			"AX_O_R_Plane_Fighter_su35_ard_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"JS_JC_SU35"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class H_PilotHelmetFighter_O;
	class JS_JC_Su35_PilotHelmet: H_PilotHelmetFighter_O{scope=1;scopeCurator=1;};
	class U_O_PilotCoveralls;
	class JS_JC_Su35_PilotCoveralls: U_O_PilotCoveralls{scope=1;scopeCurator=1;};
};

class cfgVehicles
{
	class O_Pilot_F;
	class JS_JC_OPFOR_Pilot: O_Pilot_F{scope=1;scopeCurator=1;};
	class Plane_Base_F;
	class JS_JC_SU35: Plane_Base_F{scope=1;scopeCurator=1;};
	class JS_JC_SU35_spetsnaz: JS_JC_SU35{scope=1;scopeCurator=1;};
	class AX_Plane_Fighter_su35_base2_F: JS_JC_SU35
	{
		scope=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]=
		{
			"\js_jc_su35\data\Su35_hull_CSAT_D_co.paa",
			"\js_jc_su35\data\Su35_misc_CSAT_D_co.paa",
			"\js_jc_su35\data\Su35_cockpit1_co.paa",
			"\js_jc_su35\data\su35_cockpit2_co.paa",
			"\js_jc_su35\data\Su35_glass_ca.paa",
			"\js_jc_su35\data\Su35_ladder_co.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"",
			"",
			"\js_jc_su35\data\su35_engine_fire_ca.paa",
			"\js_jc_su35\data\su35_engine_fire_ca.paa",
			"\js_jc_su35\data\su35_afterburner_ca.paa",
			"\js_jc_su35\data\su35_afterburner_ca.paa",
			""
		};
		weapons[]=
		{
			//"js_w_su35_master_arms_safe",
			"js_w_su35_gsh30",
			"CMFlareLauncher",
			"LaserDesignator_pilotCamera"
		};
		class Library
		{
			libEnable=1;
			libTextDesc="The Sukhoi Su-35S (NATO reporting name - Flanker E) is a designation for heavily upgraded derivative of the Su-27 Flanker. It is single-seat, twin-engine supermaneuverable multirole fighter, designed by Sukhoi and built by Komsomolsk-on-Amur Aircraft Production Association. In 2003, Sukhoi embarked on a second modernization of the Su-27 to produce what the company calls a 4++ generation fighter that would serve as an interim fighter prior to the arrival of the Sukhoi PAK FA. This derivative, while omitting the canards and air brake, incorporates a reinforced airframe, improved avionics and radar, thrust-vectoring engines, and a reduced frontal radar signature. In 2008 the revamped variant, erroneously dubbed the Su-35BM in the media, began its flight test programme that would involve four prototypes. The Russian Air Force has ordered 48 production units and CSAT Air Force have placed a contract for 12 units, designated Su-35S, of the newly revamped Su-35.";
		};
		class UserActions
		{
			class ECM_ON
			{
				displayName="ECM JAMMER ON";
				position="pilotcontrol";
				radius=15;
				shortcut="User2";
				condition="player in this and this getvariable ""ECMJAMMER"" == ""yes"";";
				statement="[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer="False";
				hideOnUse=1;
				showWindow=0;
			};
			class Eject
			{
				condition="player in this and (isEngineOn this or speed this > 10)";
				displayName="Eject";
				hideOnUse=1;
				onlyforplayer=1;
				position="pilotcontrol";
				priority=0.050000001;
				radius=10;
				shortcut="Eject";
				showWindow=0;
				statement="[this] spawn BIS_fnc_planeEjection";
			};
			class extendrefueling
			{
				displayName="Extend Refueling Probe";
				position="pilotcontrol";
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				radius=5;
				condition="player in this and this animationPhase ""fuel_probe"" < 0.5 and speed this > 100";
				statement="this animate [""fuel_probe"",1]";
			};
			class retractrefueling
			{
				displayName="Retract Refueling Probe";
				position="pilotcontrol";
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				radius=5;
				condition="player in this and this animationPhase ""fuel_probe"" > 0.5";
				statement="this animate [""fuel_probe"",0]";
			};
			delete service_menu;
			delete pilots_manual;
			class Aircraft_MFD_Open_ITGT
			{
				displayName="Open I-TGT System";
				position="pilotcontrol";
				radius=15;
				shortcut="FIR_AWS_ACTION_ITGT";
				condition="this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
				statement="this call FIR_fnc_ITGT_Open";
				onlyforplayer="false";
				hideOnUse=1;
				showwindow=0;
			};
		};
		class textureSources
		{
			class camo_hex
			{
				displayName="Hex";
				author="John_Spartan & Saul";
				textures[]=
				{
					"\js_jc_su35\data\Su35_hull_CSAT_D_co.paa",
					"\js_jc_su35\data\Su35_misc_CSAT_D_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_greyhex
			{
				displayName="Grey Hex";
				author="John_Spartan & Saul";
				textures[]=
				{
					"\js_jc_su35\data\Su35_hull_CSAT_S_co.paa",
					"\js_jc_su35\data\Su35_misc_CSAT_S_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_rusgreydigi
			{
				displayName="Russian Grey Digital";
				author="John_Spartan & Saul";
				textures[]=
				{
					"\js_jc_su35\data\Su35_hull_co.paa",
					"\js_jc_su35\data\Su35_misc_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_russkyblue
			{
				displayName="Russian Sky Blue";
				author="John_Spartan & Saul";
				textures[]=
				{
					"\js_jc_su35\data\Su35_hull_SKY_co.paa",
					"\js_jc_su35\data\Su35_misc_sky_co.paa"
				};
				factions[]=
				{
				};
			};
		};
	};
	class AX_O_R_Plane_Fighter_su35_F: JS_JC_SU35_spetsnaz
	{
		scope=2;
		scopeCurator=2;
		//displayName="$STR_A3_GRFU_O_R_Plane_Fighter_su35_F0";
		editorPreview="\ax_grounded_futura\editor_previews_russia\enoch\AX_O_R_Plane_Fighter_su35_F.jpg";
		faction="OPF_R_F";
		crew="O_R_Fighter_Pilot_F";
		hiddenSelectionsTextures[]=
		{
			"\js_jc_su35\data\Su35_hull_co.paa",
			"\js_jc_su35\data\Su35_misc_co.paa",
			"\js_jc_su35\data\Su35_cockpit1_co.paa",
			"\js_jc_su35\data\su35_cockpit2_co.paa",
			"\js_jc_su35\data\Su35_glass_ca.paa",
			"\js_jc_su35\data\Su35_ladder_co.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"",
			"",
			"\js_jc_su35\data\su35_engine_fire_ca.paa",
			"\js_jc_su35\data\su35_engine_fire_ca.paa",
			"\js_jc_su35\data\su35_afterburner_ca.paa",
			"\js_jc_su35\data\su35_afterburner_ca.paa",
			""
		};
		#include "copyshit.hpp"
	};
	class AX_O_R_Plane_Fighter_su35_ard_F: JS_JC_SU35_spetsnaz
	{
		scope=2;
		scopeCurator=2;
		editorPreview="\ax_grounded_futura\editor_previews_russia\enoch\AX_O_R_Plane_Fighter_su35_ard_F.jpg";
		faction="OPF_R_ard_F";
		crew="O_R_Fighter_Pilot_ard_F";
		hiddenSelectionsTextures[]=
		{
			"\js_jc_su35\data\Su35_hull_co.paa",
			"\js_jc_su35\data\Su35_misc_co.paa",
			"\js_jc_su35\data\Su35_cockpit1_co.paa",
			"\js_jc_su35\data\su35_cockpit2_co.paa",
			"\js_jc_su35\data\Su35_glass_ca.paa",
			"\js_jc_su35\data\Su35_ladder_co.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"\js_jc_su35\data\su35_clear_ca.paa",
			"",
			"",
			"\js_jc_su35\data\su35_engine_fire_ca.paa",
			"\js_jc_su35\data\su35_engine_fire_ca.paa",
			"\js_jc_su35\data\su35_afterburner_ca.paa",
			"\js_jc_su35\data\su35_afterburner_ca.paa",
			""
		};
		#include "copyshit.hpp"
	};
};