class CfgPatches
{
	class ax_2035_ocp_army_replace_basic_cover
	{
		addonRootClass="2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"WOLFoT_BaCov"
		};
		skipwhenmissingdependencies=1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class H_HelmetHBK_F;
	class H_HelmetHBK_headset_F;
	class H_HelmetHBK_ear_F;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class VestItem;
	class H_HelmetB;
	class H_Beret_blk;
	class V_CarrierRigKBT_01_Olive_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class V_CarrierRigKBT_01_heavy_Olive_F;
	class H_PASGT_basic_blue_F;
	class WOLFoT_BaCov_Basichelmet_Covered_MTP: H_PASGT_basic_blue_F
	{
		displayName="Basic Helmet (Cover) [OCP]";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\BCH1_OCP_co.paa",
			"a3\characters_f_orange\Headgear\Data\H_PASGT_black_CO.paa"
		};
	};
	class WOLFoT_BaCov_Basichelmet_Covered_2_MTP: H_PASGT_basic_blue_F
	{
		displayName="Basic Helmet (Cover #2) [OCP]";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\BCH2_OCP_co.paa",
			"a3\characters_f_orange\Headgear\Data\H_PASGT_black_CO.paa"
		};
	};
	class WOLFoT_BaCov_Basichelmet_Covered_3_MTP: H_PASGT_basic_blue_F
	{
		displayName="Basic Helmet (Cover #3) [OCP]";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\BCH3_OCP_co.paa",
			"a3\characters_f_orange\Headgear\Data\H_PASGT_black_CO.paa"
		};
	};
	class WOLFoT_BaCov_Basichelmet_Covered_4_MTP: H_PASGT_basic_blue_F
	{
		displayName="Basic Helmet (Cover #4) [OCP]";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\BCH4_OCP_co.paa",
			"a3\characters_f_orange\Headgear\Data\H_PASGT_black_CO.paa"
		};
	};
};
class CfgVehicles
{
};
