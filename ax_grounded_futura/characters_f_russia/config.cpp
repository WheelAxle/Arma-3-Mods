class CfgPatches
{
	class ax_characters_f_russia_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"lk_afrf",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_Personnel_RUSOF
	{
		displayName="$STR_A3_CfgEditorSubcategories_EdSubcat_Personnel_RUSOF";
	};
};

class CfgGlasses
{
    class None;
	class G_Balaclava_combat;
	class G_Bandanna_blk;
	class G_Bandanna_oli;
	class G_Bandanna_khk;
	class G_Bandanna_beast;
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
	};
	class H_HelmetAggressor_cover_base_F;
    class H_PilotHelmetHeli_O;
	class Atlas_H_HelmetCCH_Headset_khk_F;
	class Atlas_H_HelmetCCH_khk_F;
	class Atlas_H_HelmetCCH_cover_hex_F;
	class H_HelmetLuchnik_olive_F;
	class H_HelmetLuchnik_headset_base_F;
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
	class O_NVGoggles_ghex_F;
	class O_NVGoggles_grn_F: O_NVGoggles_ghex_F{class ItemInfo;};
	class AX_O_NVGoggles_grn_hs_F: O_NVGoggles_grn_F
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_GRFU_Axle";
		displayName="$STR_A3_GRFU_O_NVGoggles_grn_hs_F0";
		model="\A3\Weapons_F\Binocular\O_NVGoggles_grn_F.p3d";
		picture="\a3\Weapons_F_Enoch\Binocular\Data\UI\icon_O_NVGoggles_grn_F_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Weapons_F\Binocular\O_NVGoggles_grn_F.p3d";
			modelOff="\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
		};
	};
	class AX_O_NVGoggles_grn_hidden_F: O_NVGoggles_grn_F
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_GRFU_Axle";
		displayName="$STR_A3_GRFU_O_NVGoggles_grn_hidden_F0";
		model="\A3\Weapons_F\Binocular\O_NVGoggles_grn_F.p3d";
		picture="\a3\Weapons_F_Enoch\Binocular\Data\UI\icon_O_NVGoggles_grn_F_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Weapons_F\Binocular\O_NVGoggles_grn_F.p3d";
			modelOff="";
		};
	};
	class AX_O_NVGoggles_grn_ep_F: O_NVGoggles_grn_F
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_GRFU_Axle";
		displayName="$STR_A3_GRFU_O_NVGoggles_grn_ep_F0";
		model="\A3\Weapons_F\Binocular\O_NVGoggles_grn_F.p3d";
		picture="\a3\Weapons_F_Enoch\Binocular\Data\UI\icon_O_NVGoggles_grn_F_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Weapons_F\Binocular\O_NVGoggles_grn_F.p3d";
			modelOff="\A3\Characters_F\Common\headset_light.p3d";
		};
	};
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
	class O_Soldier_base_F;

	class B_ViperHarness_blk_F;
    class B_FieldPack_green_F;
	class B_Carryall_cbr;
	class B_FieldPack_cbr;
	class B_Carryall_green_F;

    #include "v_uniforms.hpp"
    #include "v_backpacks.hpp"
};