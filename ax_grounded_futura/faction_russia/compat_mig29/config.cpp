class cfgPatches
{
	class ax_faction_russia_grfu_mig29
	{
		units[]=
		{
			"AX_O_R_Plane_Fighter_mig29_F",
			"AX_O_R_Plane_Fighter_mig29_ard_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"FA_Mig29",
			"ax_bruh"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
};

class cfgVehicles
{
	class FA_Mig29_BASE;
	class FA_Mig29_CSAT: FA_Mig29_BASE{};
	class AX_O_R_Plane_Fighter_mig29_F: FA_Mig29_CSAT
	{
		editorPreview="\ax_grounded_futura\editor_previews_russia\enoch\AX_O_R_Plane_Fighter_mig29_F.jpg";
		//displayName="$STR_A3_GRFU_O_R_Plane_Fighter_mig29_F0";
		faction="OPF_R_F";
		crew="O_R_Fighter_Pilot_F";
		textureList[]=
		{
			"AFRF_Blue",
			1
		};
	};
	class AX_O_R_Plane_Fighter_mig29_ard_F: AX_O_R_Plane_Fighter_mig29_F
	{
		editorPreview="\ax_grounded_futura\editor_previews_russia\enoch\AX_O_R_Plane_Fighter_mig29_ard_F.jpg";
		faction="OPF_R_ard_F";
		crew="O_R_Fighter_Pilot_ard_F";
		textureList[]=
		{
			"AFRF_Blue",
			1
		};
	};
};