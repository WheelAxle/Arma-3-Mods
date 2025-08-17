class CfgPatches
{
	class ax_2035_ocp_army_additions_aegis
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"ax_2035_ocp_army_replace_aegis"
		};
		author="Axle";
	};
};

class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_TacVest_khk;
	class V_TacVest_ocp: V_TacVest_khk
	{
		author="$STR_A3_AX_AXLE";
		displayName = "$STR_A3_CfgWeapons_V_TacVest_ocp0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_V_TacVest_ocp_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\taticalvest_OCP_co.paa"
		};
	};
	class H_HelmetB;
	class H_HelmetB_halfcover_mcamo: H_HelmetB
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_A_CfgWeapons_H_HelmetB_halfcover_ocp0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_H_HelmetB_halfcover_ocp_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover_OCP_CO.paa" //Uses textures from like 2 patches before he changed the ocp textures scale
		};
		hiddenSelectionsMaterials[] = 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover.rvmat"
		};
	};
	class H_HelmetB_alt_tan: H_HelmetB
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_A_CfgWeapons_H_HelmetB_alt_tan0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_H_HelmetB_tan_CA.paa";		
		hiddenSelectionsTextures[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_TAN_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_alt.rvmat"
		};
	};
	class H_HelmetB_alt_blk: H_HelmetB_alt_tan
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_A_CfgWeapons_H_HelmetB_alt_blk0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_H_HelmetB_tan_CA.paa";		
		hiddenSelectionsTextures[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_BLK_co.paa"
		};
	};
	class H_HelmetB_alt_grn: H_HelmetB_alt_tan
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_A_CfgWeapons_H_HelmetB_alt_grn0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_H_HelmetB_tan_CA.paa";		
		hiddenSelectionsTextures[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_GRN_co.paa"
		};
	};
	class H_HelmetSpecB;
	class H_HelmetSpecB_halfcover_mcamo: H_HelmetSpecB
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_A_CfgWeapons_H_HelmetSpecB_halfcover_ocp0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_H_HelmetSpecB_halfcover_ocp_CA.paa";
		hiddenSelectionsTextures[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover_OCP_CO.paa" //Uses textures from like 2 patches before he changed the ocp textures scale
		};
		hiddenSelectionsMaterials[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover.rvmat"
		};
	};
	class H_HelmetSpecB_alt_tan: H_HelmetSpecB
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_A_CfgWeapons_H_HelmetSpecB_alt_tan0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_H_HelmetSpecB_tan_CA.paa";
		hiddenSelectionsTextures[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_TAN_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_alt.rvmat"
		};
	};
	class H_HelmetSpecB_alt_blk: H_HelmetSpecB_alt_tan
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_A_CfgWeapons_H_HelmetSpecB_alt_blk0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_H_HelmetSpecB_tan_CA.paa";
		hiddenSelectionsTextures[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_BLK_co.paa"
		};
	};
	class H_HelmetSpecB_alt_grn: H_HelmetSpecB_alt_tan
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_A_CfgWeapons_H_HelmetSpecB_alt_grn0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_H_HelmetSpecB_tan_CA.paa";
		hiddenSelectionsTextures[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_GRN_co.paa"
		};
	};
};

class UniformSlotInfo;

class CfgVehicles
{
};

class cfgGlasses
{
};