class cfgPatches
{
	class ax_faction_iran_grfu_su35
	{
		units[]=
		{
			"AX_O_Plane_Fighter_su35_F"
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
	class AX_O_Plane_Fighter_su35_F: JS_JC_SU35
	{
		scope=2;
		scopeCurator=2;
		//displayName="$STR_A3_GRFU_O_R_Plane_Fighter_su35_F0";
		//editorPreview="\ax_grounded_futura\editor_previews_russia\enoch\AX_O_R_Plane_Fighter_su35_F.jpg";
		faction="OPF_F";
		crew="O_Fighter_Pilot_F";
		#include "copyshit.hpp"
	};
};