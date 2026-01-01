class CfgPatches
{
	class ax_faction_f_usmc_a35b_compat
	{
		units[]=
		{
			"AX_B_MJTF_D_Plane_Fighter_F35B_F",
			"AX_B_MJTF_W_Plane_Fighter_F35B_F",
			"AX_B_MJTF_D_Plane_Fighter_F35B_Stealth_F",
			"AX_B_MJTF_W_Plane_Fighter_F35B_Stealth_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"EX3B_A35",
			"EF_Sounds_C"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgVehicles
{
	class EX3B_AV35B_F;
	class EX3B_AV35B_Stealth_F;
	class AX_B_MJTF_D_Plane_Fighter_F35B_F: EX3B_AV35B_F
	{
		editorPreview="\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Fighter_05_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="F-35E";
		faction="EF_B_MJTF_Des";
		crew="AX_B_MJTF_D_Fighter_Pilot_F";
	};
	class AX_B_MJTF_W_Plane_Fighter_F35B_F: EX3B_AV35B_F
	{
		editorPreview="\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Fighter_05_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="F-35E";
		faction="EF_B_MJTF_Wdl";
		crew="AX_B_MJTF_W_Fighter_Pilot_F";
	};
	class AX_B_MJTF_D_Plane_Fighter_F35B_Stealth_F: EX3B_AV35B_Stealth_F
	{
		editorPreview="\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Fighter_05_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="F-35E (Stealth)";
		faction="EF_B_MJTF_Des";
		crew="AX_B_MJTF_D_Fighter_Pilot_F";
	};
	class AX_B_MJTF_W_Plane_Fighter_F35B_Stealth_F: EX3B_AV35B_Stealth_F
	{
		editorPreview="\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Fighter_05_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="F-35E (Stealth)";
		faction="EF_B_MJTF_Wdl";
		crew="AX_B_MJTF_W_Fighter_Pilot_F";
	};
};