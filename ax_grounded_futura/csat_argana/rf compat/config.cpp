class cfgPatches
{
	class ax_grounded_csat_argana_2035_rf
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"RF_Data_Loadorder",
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
	class SoldierEB;
	class O_Soldier_base_F: SoldierEB
	{
	};
	class O_A_soldier_F;
	class Aegis_O_A_support_CMort_RF: O_A_soldier_F
	{
		editorPreview="\ax_grounded_futura\editor_previews\tacops\Aegis_O_A_support_CMort_RF.jpg";
		linkedItems[]=
		{
			"H_PASGT_basic_sand_F",
			"V_BandollierB_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_PASGT_basic_sand_F",
			"V_BandollierB_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_A_scout_RF: O_A_soldier_F
	{
		editorPreview="\ax_grounded_futura\editor_previews\tacops\O_A_scout_RF.jpg";
		backpack="B_TacticalPack_ocamo";
		weapons[]=
		{
			"arifle_CTAR_blk_aco_flash_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_CTAR_blk_aco_flash_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"HandGrenade_Guer",
			"HandGrenade_Guer",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"HandGrenade_Guer",
			"HandGrenade_Guer",
			"SmokeShell",
			"SmokeShell"
		};
        linkedItems[]=
		{
			"Atlas_H_PASGT_Cover_O_Hex_F",
			"V_HarnessO_brn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"Atlas_H_PASGT_Cover_O_Hex_F",
			"V_HarnessO_brn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
    };
};