class CfgPatches
{
	class ax_faction_china_grfu_ef
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"EF_Sounds_C",
			"A3_Aegis_Characters_F_Aegis_RF"
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
		editorPreview="\ax_grounded_futura\editor_previews_china\expansion\Aegis_O_T_BoatCrew_EF.jpg";
		uniformClass="AX_U_O_CombatUniform_T21_T07_ghex_02_F";
	};
};