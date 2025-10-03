class CfgPatches
{
	class ax_faction_russia_grfu_ef
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
	class O_R_crew_F;
	class Aegis_O_R_BoatCrew_EF: O_R_crew_F
	{
		editorPreview="\ax_grounded_futura\editor_previews_russia\enoch\Aegis_O_R_BoatCrew_EF.jpg";
		linkedItems[]=
		{
			"Aegis_V_OCarrierLuchnik_grn_F",
			"H_HelmetLuchnik_Cover_rutaiga_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_grn_F"
		};
		respawnLinkedItems[]=
		{
			"Aegis_V_OCarrierLuchnik_grn_F",
			"H_HelmetLuchnik_Cover_rutaiga_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_grn_F"
		};
	};
};