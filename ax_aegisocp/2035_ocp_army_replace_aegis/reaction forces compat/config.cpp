class CfgPatches
{
	class ax_2035_ocp_army_replace_rf
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"RF_Data_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
	};
	class Uniform_Base: ItemCore
	{
	};
	class Aegis_V_PlateCarrier_RF_base;
	class Aegis_V_PlateCarrier_RF_mtp: Aegis_V_PlateCarrier_RF_base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\vests_OCP_co.paa"
		};
	};
	class U_B_HeliPilotCoveralls_MTP_RF: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\coveralls_OCP_co.paa"
		};
	};
	class H_HelmetB_grass;
	class H_HelmetB_plain_sb_mtp_RF: H_HelmetB_grass
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_OCP_co.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\mitznefet_ocp_co.paa"
		};
	};
};
class cfgVehicles
{
	class B_Helipilot_F;
	class B_Helipilot_MTP_UniformHolder_RF: B_Helipilot_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\coveralls_OCP_co.paa"
		};
	};
	class B_DuffleBag_Base;
	class B_DuffleBag_MTP_RF: B_DuffleBag_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_dufflebag_ocp_co.paa"
		};
	};
	class Headgear_Base_F;
	class Headgear_H_HelmetB_plain_sb_mtp_RF: Headgear_Base_F
	{
	};
	class Land_dufflebag_closed_base_rf;
	class Land_dufflebag_closed_MTP_rf: Land_dufflebag_closed_base_rf
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\dufflebag_closed_ocp_co.paa"
		};
	};
	class Land_dufflebag_open_base_rf;
	class Land_dufflebag_open_MTP_rf: Land_dufflebag_open_base_rf
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\dufflebag_open_ocp_co.paa",
			"a3\structures_f\items\valuables\data\money_co.paa"
		};
	};
};
