class cfgPatches
{
	class ax_grounded_greenfor_altis_2035_rf
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"RF_Data_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class H_HelmetIA;
	class H_HelmetIA_sb_digital_RF: H_HelmetIA
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\Data\headgear_helmet_canvas_co.paa",
			"\lxrf\characters_rf\headgear\data\mitznefet_digital_co.paa"
		};
	};
};

class cfgVehicles
{
	class Atlas_I_Pathfinder_base_F;
	class Atlas_I_Pathfinder_M_F: Atlas_I_Pathfinder_base_F
	{
		identityTypes[]=
		{
			"LanguageGRE_F",
			"Head_Greek",
			"G_HAF_default"
		};
		linkedItems[]=
		{
			"V_Chestrig_oli",
			"H_HelmetIA_sb_digital_RF",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_oli",
			"H_HelmetIA_sb_digital_RF",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};