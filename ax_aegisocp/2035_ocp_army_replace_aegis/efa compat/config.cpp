class CfgPatches
{
	class ax_2035_ocp_army_replace_efa
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_EFA_characters_f_Aegis"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgWeapons
{
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	class EF_V_AAV_Coy: Vest_NoCamo_Base{};
	class EF_V_AAV_Diver_Coy: EF_V_AAV_Coy{};
	class EF_V_AAV_Rifleman_Coy;
	class EF_V_AAV_Sailor_Coy;
	class EF_V_AAV_Scout_Coy;
	class EF_V_AAV_Support_Coy;
	class EF_V_AAV_TL_Coy;
	class EF_V_CCR_Rifleman_Coy;
	class EF_V_CCR_TL_Coy;
	class EF_V_CCR_Scout_Coy;
	class EF_V_CCR_Support_Coy;
	class EFA_V_CCR_Rifleman_MTP: EF_V_CCR_Rifleman_Coy
	{
		displayName="$STR_A3_AX_ELF_V_CCR_Rifleman_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_pouches_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_ocp_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EFA_V_CCR_TL_MTP: EF_V_CCR_TL_Coy
	{
		displayName="$STR_A3_AX_ELF_V_CCR_TL_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_pouches_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_ocp_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EFA_V_CCR_Scout_MTP: EF_V_CCR_Scout_Coy
	{
		displayName="$STR_A3_AX_ELF_V_CCR_Scout_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_pouches_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_ocp_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EFA_V_CCR_Support_MTP: EF_V_CCR_Support_Coy
	{
		displayName="$STR_A3_AX_ELF_V_CCR_Support_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_pouches_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_ocp_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EFA_V_AAV_MTP: EF_V_AAV_Coy
	{
		displayName="$STR_AX_EF_V_AAV_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EFA_V_AAV_Diver_MTP: EF_V_AAV_Diver_Coy
	{
		displayName="$STR_AX_EF_V_AAV_Diver_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa",
			"\A3_EFA_Arsenal\characters_f_EFA\Vests\Data\diving_gear_blk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
				"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa",
				"\A3_EFA_Arsenal\characters_f_EFA\Vests\Data\diving_gear_blk_co.paa"
			};
		};
	};
	class EFA_V_AAV_Rifleman_MTP: EF_V_AAV_Rifleman_Coy
	{
		displayName="$STR_AX_EF_V_AAV_Rifleman_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EFA_V_AAV_Sailor_MTP: EF_V_AAV_Sailor_Coy
	{
		displayName="$STR_AX_EF_V_AAV_Sailor_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EFA_V_AAV_Scout_MTP: EF_V_AAV_Scout_Coy
	{
		displayName="$STR_AX_EF_V_AAV_Scout_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EFA_V_AAV_Support_MTP: EF_V_AAV_Support_Coy
	{
		displayName="$STR_AX_EF_V_AAV_Support_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EFA_V_AAV_TL_MTP: EF_V_AAV_TL_Coy
	{
		displayName="$STR_AX_EF_V_AAV_TL_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
};

class cfgVehicles
{
	class Vest_Base_F;
	class Vest_EFA_V_CCR_Rifleman_MTP: Vest_Base_F
	{
		displayName="$STR_A3_AX_ELF_V_CCR_Rifleman_OCP";
	};
	class Vest_EFA_V_CCR_TL_MTP: Vest_Base_F
	{
		displayName="$STR_A3_AX_ELF_V_CCR_TL_OCP";
	};
	class Vest_EFA_V_CCR_Scout_MTP: Vest_Base_F
	{
		displayName="$STR_A3_AX_ELF_V_CCR_Scout_OCP";
	};
	class Vest_EFA_V_CCR_Support_MTP: Vest_Base_F
	{
		displayName="$STR_A3_AX_ELF_V_CCR_Support_OCP";
	};
	class Vest_EFA_V_AAV_MTP: Vest_Base_F
	{
		displayName="$STR_AX_EF_V_AAV_OCP";
	};
	class Vest_EFA_V_AAV_Diver_MTP: Vest_Base_F
	{
		displayName="$STR_AX_EF_V_AAV_Diver_OCP";
	};
	class Vest_EFA_V_AAV_Rifleman_MTP: Vest_Base_F
	{
		displayName="$STR_AX_EF_V_AAV_Rifleman_OCP";
	};
	class Vest_EFA_V_AAV_Sailor_MTP: Vest_Base_F
	{
		displayName="$STR_AX_EF_V_AAV_Sailor_OCP";
	};
	class Vest_EFA_V_AAV_Scout_MTP: Vest_Base_F
	{
		displayName="$STR_AX_EF_V_AAV_Scout_OCP";
	};
	class Vest_EFA_V_AAV_Support_MTP: Vest_Base_F
	{
		displayName="$STR_AX_EF_V_AAV_Support_OCP";
	};
	class Vest_EFA_V_AAV_TL_MTP: Vest_Base_F
	{
		displayName="$STR_AX_EF_V_AAV_TL_OCP";
	};
};
