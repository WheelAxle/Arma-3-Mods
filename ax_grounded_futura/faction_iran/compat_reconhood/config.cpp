class CfgPatches
{
	class ax_faction_iran_grfu_reconhood
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ReconCloaks_Characters_Headgear",
			"ax_faction_iran_grfu"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgVehicles
{
	class O_Soldier_sniper_base_F;
	class O_sniper_F: O_Soldier_sniper_base_F
	{
		uniformClass="U_O_CombatUniform_ocamo";
		linkedItems[]=
		{
			"ReconCloaks_H_SniperHood_hex",
			"V_TacChestrig_cbr_F",
			"AX_G_Balaclava_mesh_G_blk_ir",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_hex_F"
		};
		respawnLinkedItems[]=
		{
			"ReconCloaks_H_SniperHood_hex",
			"V_TacChestrig_cbr_F",
			"AX_G_Balaclava_mesh_G_blk_ir",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_hex_F"
		};
    };
	class O_spotter_F: O_Soldier_sniper_base_F
	{
		uniformClass="U_O_CombatUniform_ocamo";
		linkedItems[]=
		{
			"ReconCloaks_H_SniperHood_hex",
			"V_TacChestrig_cbr_F",
			"AX_G_Balaclava_mesh_G_blk_ir",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_hex_F"
		};
		respawnLinkedItems[]=
		{
			"ReconCloaks_H_SniperHood_hex",
			"V_TacChestrig_cbr_F",
			"AX_G_Balaclava_mesh_G_blk_ir",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_hex_F"
		};
    };
};