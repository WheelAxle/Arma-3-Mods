class cfgPatches
{
	class ax_faction_iran_grfu_ef
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"EF_Sounds_C",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author = "Axle";
		skipwhenmissingdependencies = 1;
	};
};

class cfgWeapons
{
};

class cfgVehicles
{
	class O_crew_F;
	class Aegis_O_BoatCrew_EF: O_crew_F
	{
		editorPreview="\ax_grounded_futura\editor_previews_iran\futura\Aegis_O_BoatCrew_EF.jpg";
		uniformClass="AX_U_Uniform_PCU_hex_02_F";
	};
};