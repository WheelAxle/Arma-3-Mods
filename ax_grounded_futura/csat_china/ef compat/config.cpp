class CfgPatches
{
	class ax_grounded_csat_china_2035_ef
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"EF_Sounds_C",
			"A3_Aegis_Characters_F_Aegis_RF",
			"ax_grounded_soldiers_editorpreviews"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgVehicles
{
	class O_T_Crew_F;
	class Aegis_O_T_BoatCrew_EF: O_T_Crew_F
	{
		editorPreview="\ax_grounded_futura\editor_previews\expansion\Aegis_O_T_BoatCrew_EF.jpg";
	};
};