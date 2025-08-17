class CfgPatches
{
	class ax_2035_ocp_army_additions_atlas
	{
		addonRootClass="ax_2035_ocp_army_additions_aegis";
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
	class Atlas_U_CombatUniformNCU_01_ocp_F: Uniform_Base
	{
		author="$STR_A3_A_Jamie";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_Atlas_U_CombatUniformNCU_01_ocp_F0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_U_B_CombatUniformNCU_01_ocp_CA.paa";		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_indep_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Atlas_CombatUniformNCU_01_ocp_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class Atlas_U_CombatUniformNCU_02_ocp_F: Uniform_Base
	{
		author="$STR_A3_A_Jamie";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_Atlas_U_CombatUniformNCU_02_ocp_F0";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_U_B_CombatUniformNCU_02_ocp_CA.paa";		
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_indep_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Atlas_CombatUniformNCU_02_ocp_F";
			containerClass="Supply40";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class Atlas_CombatUniformNCU_01_mcam_F;
	class Atlas_CombatUniformNCU_01_ocp_F: Atlas_CombatUniformNCU_01_mcam_F
	{
		uniformClass="Atlas_U_CombatUniformNCU_01_ocp_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing_ncu_ocp_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
		};
	};
	class Atlas_CombatUniformNCU_02_mcam_F;
	class Atlas_CombatUniformNCU_02_ocp_F: Atlas_CombatUniformNCU_02_mcam_F
	{
		uniformClass="Atlas_U_CombatUniformNCU_02_ocp_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing_ncu_ocp_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
		};
	};
};