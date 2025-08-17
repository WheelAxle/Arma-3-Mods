class CfgPatches
{
	class ax_characters_f_usmc_futura
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"EF_Sounds_C"
		};
		author="Axle";
	};
};

class CfgGlasses
{
    class None;
	class G_Balaclava_combat;
	class G_Bandanna_blk;
	class G_Bandanna_shades;
	class G_Bandanna_sport;
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
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_Camo_Base;
	class H_HelmetB;
	class H_HelmetAggressor_base_F: HelmetBase{};
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
    class H_MilCap_ocamo;
    class Aegis_H_Milcap_nohs_mcamo_F;
    class H_Booniehat_khk;
    class H_Booniehat_khk_hs;
	class Aegis_H_Helmet_FASTMT_Cover_base_F;
	class Aegis_H_Helmet_FASTMT_base_F;
	class Aegis_H_Helmet_FASTMT_Headset_base_F;
    class H_HelmetB_light;
	class H_HelmetSpecB_light;
	class H_Cap_blk;
	class H_Cap_headphones;
    #include "w_helmets.hpp"
    #include "w_uniforms.hpp"
    #include "w_vests.hpp"
	
	class NVGoggles;
	class NVGoggles_INDEP;
	class EF_LPNVG;
	class EF_LPNVG_Tan;
	#include "n_nightvision.hpp"
};

class CfgVehicles
{
	class SoldierWB;
	class SoldierEB;
    class O_Pilot_F;
	//class Atlas_UniformBDU_01_oli_F;
	//class Atlas_UniformBDU_02_oli_F;
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
	class B_soldier_F;
    class B_Soldier_SL_F;
    class B_soldier_AR_F;
    class B_ION_soldier_AR_lxWS;
	class b_soldier_survival_F;
	class B_Helipilot_F;
	class I_E_Uniform_01_coveralls_F;
	class B_ION_soldier_UAV_01_lxWS;
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_3_F;
	//class Atlas_I_E_SF_CombatUniformNCU_01_F;
	//class Atlas_I_E_SF_CombatUniformNCU_02_F;

	class B_ViperHarness_blk_F;
    class B_FieldPack_green_F;
	class B_Carryall_cbr;
	class B_FieldPack_cbr;
	class B_RadioBag_01_mtp_F;
	class B_AssaultPack_Base;
	class B_AssaultPack_rgr;
	class B_AssaultPackSpec_rgr;
	class B_Kitbag_rgr;
	class B_TacticalPack_rgr;
	class B_Carryall_oli;
	class Aegis_B_patrolBackpack_blk_F;
	class EF_B_Carryall_coy;
	class EF_B_TacticalPack_coy;

    #include "v_uniforms.hpp"
    #include "v_backpacks.hpp"
};

class CfgEditorSubcategories
{
	class EdSubcat_Personnel_MARSOC
	{
		displayName="$STR_A3_MCFU_EdSubcat_Personnel_MARSOC";
	};
};