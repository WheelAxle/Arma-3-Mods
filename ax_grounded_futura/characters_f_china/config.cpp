class CfgPatches
{
	class ax_characters_f_china_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"JAM_Characters_CN_AE",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgGlasses
{
    class None;
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
	class G_Headset_light;
	class G_Spectacles_Tinted;
	class JAM_AE_PLA_G_Goggles_blk;
	class JAM_AE_PLA_G_Balaclava_blk;
	class JAM_AE_PLA_G_Balaclava_Goggles_blk;
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
	};
	class H_HelmetAggressor_cover_base_F;
    class H_PilotHelmetHeli_O;
	class Atlas_H_HelmetCCH_Headset_khk_F;
	class Atlas_H_HelmetCCH_khk_F;
	class Atlas_H_HelmetCCH_cover_hex_F;
    class Atlas_V_ORigLBV_Hex_F;
	class Atlas_V_OCarrierRig_CQB_Hex_F;
	class Atlas_V_OCarrierRig_GL_Hex_F;
	class Atlas_V_OCarrierRig_Hex_F;
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
	class H_HelmetO_ghex_F;
	class H_HelmetO_oicamo;
	class JAM_AE_H_PLA_Cap_t07: HelmetBase{};
	class JAM_AE_H_PLA_Cap_t07_goggles: HelmetBase{};
	class JAM_AE_H_PLA_Boonie_t99: HelmetBase{};
	class JAM_AE_H_PLA_Boonie_t07: JAM_AE_H_PLA_Boonie_t99{};
	class JAM_AE_H_PLA_Boonie_Folded_t99: HelmetBase{};
	class JAM_AE_H_PLA_Boonie_Folded_t07: JAM_AE_H_PLA_Boonie_Folded_t99{};
	class JAM_AE_H_PLA_Beret_red;
	class JAM_AE_H_PLA_QGF03_Cover_t99;
	class JAM_AE_H_PLA_QGF03_Cover_Glasses_01_t99;
	class JAM_AE_H_PLA_QGF03_Cover_Glasses_02_t99;
	class JAM_AE_H_PLA_QGF03_Cover_HS_t99;
    class JAM_AE_V_PLA_Vest_Type04B_t07;
	class JAM_AE_V_PLA_Vest_Type04B_Rifle_t99;
	class JAM_AE_V_PLA_Vest_Type04B_Pads_Rifle_t99;
	class JAM_AE_V_PLA_Vest_Type06_t07;
	class JAM_AE_V_PLA_Vest_Type06_Rifle_t07;
	class JAM_AE_V_PLA_Vest_Type06_MGun_t07;
	class JAM_AE_V_PLA_Vest_Type06_Spec_t07;
	class JAM_AE_V_PLA_Vest_Type06_Leader_t07;
	class JAM_AE_V_PLA_LBV_Type95_t99;
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
	class O_A_officer_F;
	class Aegis_O_C_D_Sniper_F;
	class O_A_Soldier_lxWS;
	class O_Soldier_base_F;

	class B_ViperHarness_blk_F;
    class B_FieldPack_green_F;
	class B_Carryall_cbr;
	class B_FieldPack_cbr;
	class B_Carryall_green_F;

	class JAM_AE_B_CombatPack_t99;
	class JAM_AE_B_Radiopack_PLA_t99;

	class Land_JAM_AE_Prop_RallyPoint_PLA_t99;
	class Land_JAM_AE_Prop_MedicalPoint_PLA_t99;

    #include "v_uniforms.hpp"
    #include "v_backpacks.hpp"
};