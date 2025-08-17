class CfgPatches
{
	class ax_2035_ocp_army_replace_atlas
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Atlas_Characters_F_Atlas"
		};
		skipwhenmissingdependencies=1;
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
	class Atlas_U_B_JSOC_StealthUniform_F: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_B_CTRG_Soldier_OCP_F_CO.paa"
		};
	};
	class Atlas_U_B_JSOC_StealthUniform_RolledUp_F: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_B_CTRG_Soldier_OCP_F_CO.paa"
		};
	};
};
class CfgVehicles
{
	class B_CTRG_Soldier_F;
	class Atlas_B_JSOC_StealthUniform_F: B_CTRG_Soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_B_CTRG_Soldier_OCP_F_CO.paa"//-30 Brightness
		};
	};
	class B_CTRG_Soldier_3_F;
	class Atlas_B_JSOC_StealthUniform_RolledUp_F: B_CTRG_Soldier_3_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_B_CTRG_Soldier_OCP_F_CO.paa"
		};
	};
};
