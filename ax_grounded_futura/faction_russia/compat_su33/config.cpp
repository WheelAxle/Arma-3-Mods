class cfgPatches
{
	class ax_faction_russia_grfu_su33
	{
		units[]=
		{
			"AX_O_R_Plane_Fighter_su33_F",
			"AX_O_R_Plane_Fighter_su33_ard_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Su33_Protatype_PT"
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
	class O_Pilot_F;
	class Sukhoi_Pilot: O_Pilot_F{scope=1;scopeCurator=1;};
	class Su_Base_F;
	class Su33_Base_F: Su_Base_F{};
	class Su33_Protatype_PT_2: Su33_Base_F{scope=1;scopeCurator=1;};
	class AX_O_R_Plane_Fighter_su33_F: Su33_Protatype_PT_2
	{
		scope=2;
		scopeCurator=2;
		displayName="Su-33 Flanker D";
		faction="OPF_R_F";
		crew="O_R_Fighter_Pilot_F";
		weapons[]=
		{
			"Su_GSh301",
			"CMFlareLauncher"
		};
	};
	class AX_O_R_Plane_Fighter_su33_ard_F: AX_O_R_Plane_Fighter_su33_F
	{
		faction="OPF_R_ard_F";
		crew="O_R_Fighter_Pilot_ard_F";
	};
};