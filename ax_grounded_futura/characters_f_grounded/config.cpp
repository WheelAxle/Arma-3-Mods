class CfgPatches
{
	class ax_characters_f_grounded_futura
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgGlasses
{
    class None
	{
		identityTypes[]=
		{
			"G_RUS_default",
			595,
			"G_RUS_casual",
			1000,
			"G_RUS_pilot",
			1000,
			"G_RUS_SF",
			300,
			"G_RUS_diver",
			0,
			"G_EAF_default",
			595,
			"G_EAF_casual",
			1000,
			"G_CIVIL_aidworker",
			200,
			"G_CIVIL_man",
			150,
			"G_CIVIL_paramedic",
			520,
			"G_CIVIL_constructionworker",
			220,
			"NoGlasses",
			1000,
			"G_NATO_default",
			300,
			"G_NATO_casual",
			550,
			"G_NATO_pilot",
			1000,
			"G_NATO_recon",
			595,
			"G_NATO_SF",
			300,
			"G_NATO_sniper",
			1000,
			"G_NATO_diver",
			0,
			"G_NATO_tropic",
			300,
			"G_T_NATO_SF",
			300,
			"G_W_NATO_SF",
			300,
			"G_CTRG_SF",
			300,
			"G_IRAN_default",
			300,
			"G_IRAN_SF",
			0,
			"G_IRAN_diver",
			0,
			"G_IRAN_african",
			670,
			"G_GUERIL_default",
			595,
			"G_SYND_default",
			595,
			"G_LOOTER_default",
			595,
			"G_HAF_default",
			595,
			"G_HAF_diver",
			0,
			"G_ION_default",
			595,
			"G_CIVIL_female",
			655,
			"G_CIVIL_male",
			670,
			"G_Competitor",
			0,
			"G_Rangemaster",
			0,
			"G_IRAN_officer",
			500,
			"G_CHINA_default",
			300,
			"G_CHINA_officer",
			500
		};
	};
	class G_Balaclava_combat;
	class G_Bandanna_blk;
	class G_Shemag_tan;
	class G_Lowprofile;
	class G_Balaclava_blk_lxWS;
	class G_Balaclava_light_blk_F;
	class G_Balaclava_light_G_blk_F;
	class G_Balaclava_TI_blk_F;
	class G_Balaclava_TI_G_blk_F;
	class G_Goggles_VR;
	class G_Aviator;
	class G_Shades_Black;
	class G_Sport_Checkered;
	class G_Squares;
    #include "g_facewear.hpp"
};

class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
	class Vest_NoCamo_Base;
	class H_HelmetB;
	class H_HelmetAggressor_base_F: HelmetBase
	{
		hiddenSelectionsMaterials[]=
		{
			"\ax_grounded_futura\characters_f_grounded\headgear\data\H_HelmetAggressor_01.rvmat"
		};
	};
	class H_HelmetAggressor_cover_base_F;
    class H_PilotHelmetHeli_O;
	class Atlas_H_HelmetCCH_Headset_khk_F;
	class Atlas_H_HelmetCCH_khk_F;
	class Atlas_H_HelmetCCH_cover_hex_F;
    class Atlas_V_ORigLBV_Hex_F;
	class Atlas_V_OCarrierRig_CQB_Hex_F;
	class Atlas_V_OCarrierRig_GL_Hex_F;
	class Atlas_V_OCarrierRig_Lite_Hex_F;
    class Atlas_V_OCarrierRig_Lite_Alt_Oli_F;
	class Atlas_V_OCarrierRig_CQB_alt_oli_F;
	class Atlas_V_OCarrierRig_GL_alt_Oli_F;
	class V_HarnessO_gry;
	class V_HarnessO_brn;
	class V_HarnessOGL_brn: V_HarnessO_brn {class ItemInfo;};
	class V_HarnessOSpec_brn;
	class V_SmershVest_01_base_F;
	class V_SmershVest_01_radio_base_F;
	class Aegis_V_OCarrierLuchnik_F;
    #include "w_helmets.hpp"
    #include "w_uniforms.hpp"
    #include "w_vests.hpp"
	
};

class CfgVehicles
{
	class SoldierEB;
    class O_Pilot_F;
	class Atlas_UniformBDU_01_oli_F;
	class Atlas_UniformBDU_02_oli_F;
	class B_CBRN_Man_Oversuit_01_MTP_F;
	class O_R_ghillie_base_F;
	class Aegis_O_CombatFatigues_F;
	class Aegis_O_CombatFatigues_02_F;
    class B_LegStrapBag_black_F;
	class B_LegStrapBag_coyote_F;
    class O_Soldier_F;
	class O_sniper_F;
	class Aegis_O_C_D_Sniper_F;
	class O_A_Soldier_lxWS;

	class B_ViperHarness_blk_F;
    class B_FieldPack_green_F;
	class B_Carryall_cbr;
	class B_FieldPack_cbr;
	
    #include "v_uniforms.hpp"
    #include "v_backpacks.hpp"
};