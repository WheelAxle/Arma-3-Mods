class CfgPatches
{
	class sog_exp_wbk_shoulderlight
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"WBK_Headlamps",
			"ax_sog_expanded"
		};
		requiredVersion=0.1;
		author="Axle";
		skipwhenmissingdependencies=1;
	}; 
};

class cfgVehicles
{
	class vn_b_men_kot_army_68_base;
	class vn_b_men_kot_army_68_09: vn_b_men_kot_army_68_base
	{
		weapons[]=
		{
			"vn_m1897",
			"vn_m1911_sd",
			"vn_m19_binocs_grn",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"vn_m1897",
			"vn_m1911_sd",
			"vn_m19_binocs_grn",
			"Throw",
			"Put"
		};
		Items[]=
		{
			"vn_b_item_firstaidkit",
			"AX_ShoulderLampItem_Regular"
		};
		respawnItems[]=
		{
			"vn_b_item_firstaidkit",
			"AX_ShoulderLampItem_Regular"
		};
	};
};