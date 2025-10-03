class CfgPatches
{
	class ax_faction_china_grfu_jca_ie
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Headwear_F_JCA_IE",
			"ax_faction_china_grfu"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgVehicles
{
	class Atlas_O_C_Marine_base_F;
	class Atlas_O_C_Marine_Engineer_F: Atlas_O_C_Marine_base_F
	{
		linkedItems[]=
		{
			"AX_V_OCarrierRig_Lite_MHex_F",
			"JCA_H_balaclava_01_black_F",
			"JCA_G_AirPurifyingRespirator_04_black_tinted_F",
			"O_NVGoggles_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"AX_V_OCarrierRig_Lite_MHex_F",
			"JCA_H_balaclava_01_black_F",
			"JCA_G_AirPurifyingRespirator_04_black_tinted_F",
			"O_NVGoggles_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};