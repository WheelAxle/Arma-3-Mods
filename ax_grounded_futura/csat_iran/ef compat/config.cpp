class cfgPatches
{
	class ax_grounded_csat_iran_2035_ef
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"EF_Sounds_C",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"ax_grounded_soldiers_editorpreviews"
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
		editorPreview="\ax_grounded_futura\editor_previews\futura\Aegis_O_BoatCrew_EF.jpg";
	};
};