class CfgPatches
{
	class ax_faction_russia_grfu_jca_ie
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Headwear_F_JCA_IE",
			"ax_faction_russia_grfu"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgVehicles
{
	class O_R_Soldier_Base_F;
    class O_R_Patrol_Soldier_Engineer_F: O_R_Soldier_Base_F
    {
        linkedItems[]=
        {
            "V_SmershVest_01_F",
			"JCA_H_balaclava_01_olive_F",
			"JCA_G_AirPurifyingRespirator_04_olive_tinted_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "O_NVGoggles_grn_F"
        };
        respawnLinkedItems[]=
        {
            "V_SmershVest_01_F",
			"JCA_H_balaclava_01_olive_F",
			"JCA_G_AirPurifyingRespirator_04_olive_tinted_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "O_NVGoggles_grn_F"
        };
    };
};