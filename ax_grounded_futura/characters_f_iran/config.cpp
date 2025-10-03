class cfgPatches
{
	class ax_characters_f_iran_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author = "Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgGlasses
{
	class None;
	class G_Balaclava_combat;
	class G_Bandanna_blk;
	class G_Shemag_tan;
	class G_Lowprofile;
	class G_Squares;
	class G_Headset_light;
	class G_Balaclava_blk_lxWS;
	class G_Balaclava_TI_blk_F;
	class G_Balaclava_TI_G_blk_F;
	#include "g_facewear.hpp"
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	class HeadgearItem;
	class Vest_NoCamo_Base;
	class H_HelmetB;
	class H_HelmetAggressor_base_F: HelmetBase{};
	class H_HelmetAggressor_cover_base_F;
	class H_HelmetO_ocamo;
	class H_HelmetO_oucamo;
	class Atlas_V_OCarrierRig_Lite_Alt_Oli_F;
	class Atlas_V_OCarrierRig_CQB_alt_oli_F;
	class Atlas_V_OCarrierRig_GL_alt_Oli_F;
	#include "w_helmets.hpp"
	#include "w_vests.hpp"
	#include "w_uniforms.hpp"
	#include "cfgw_w.hpp"
	class NVGoggles;
	class NVGoggles_OPFOR: NVGoggles{class ItemInfo;};
	class O_NVGoggles_hex_F: NVGoggles{class ItemInfo;};
	class AX_O_NVGoggles_blk_ir_hidden_F: NVGoggles_OPFOR
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_GRFU_NVGoggles_blk_ir_hidden_F0";
		picture="\A3\Weapons_F\Data\UI\gear_nvg_opfor_CA.paa";
		model="\A3\Weapons_f\binocular\nvg_proxy_OPFOR";
		modelOptics="\A3\weapons_f\reticle\optics_night";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\weapons_f\binocular\nvg_proxy_OPFOR.p3d";
			modelOff="";
		};
	};
	class AX_O_NVGoggles_hex_hidden_F: O_NVGoggles_hex_F
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_GRFU_NVGoggles_hex_ir_hidden_F0";
		picture="\A3\Weapons_F_Exp\Binocular\Data\UI\icon_O_NVGoggles_hex_F_CA.paa";
		model="\A3\Weapons_f\binocular\O_NVGoggles_hex_F.p3d";
		modelOptics="\A3\Weapons_F\Reticle\optics_empty.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\weapons_f\binocular\O_NVGoggles_hex_F.p3d";
			modelOff="";
		};
	};
};

class cfgVehicles
{
	class B_CBRN_Man_Oversuit_01_MTP_F;
	class SoldierEB;
	class O_A_officer_F;
	#include "v_uniforms.hpp"

	class B_Carryall_cbr;
	class B_FieldPack_cbr;
	class B_FieldPack_ocamo;
	class B_TacticalPack_ocamo;
	#include "v_backpacks.hpp"
};