class CfgPatches
{
	class ax_weapons_f_usmc_futura_compat_jsrs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"EF_Sounds_C",
			"jsrs_soundmod_2025_Beta"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_MuzzleSlot;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class asdg_PistolUnderRail;
class asdg_PistolOpticMount;
class asdg_PistolOpticRail1913;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_short_MG;
class asdg_OpticRail1913_long;
class asdg_OpticSideMount;
class asdg_OpticSideRail_AK;
class asdg_OpticSideRail_SVD;
class asdg_OpticSideRail_AKSVD;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_65;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762MG;
class asdg_MuzzleSlot_338;
class asdg_MuzzleSlot_93x64;
class asdg_MuzzleSlot_9MM;
class asdg_MuzzleSlot_9MM_SMG;
class asdg_MuzzleSlot_45ACP;
class asdg_MuzzleSlot_45ACP_SMG;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_762R;
class asdg_MuzzleSlot_762R_PK;
class asdg_MuzzleSlot_762R_SVD;
class asdg_MuzzleSlot_58;
class asdg_MuzzleSlot_46;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_556;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762;
class CowsSlot_Rail;
class CowsSlot_Dovetail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class WeaponSlotsInfo;

class CfgWeapons
{
	class LMG_Zafir_F;
	class LMG_03_F;
	class Rifle_Base_F;
	class hgun_Rook40_F;
	class arifle_SCAR_L_grip_black_F;
	class arifle_SCAR_grip_black_F;
	class arifle_SCAR_L_short_black_F;
	class arifle_SCAR_L_GL_black_F;
	class srifle_DMR_01_black_F;
	class MMG_01_black_F;
	class srifle_DMR_04_F;
	class arifle_AK12_lush_F;
	class arifle_AK12U_lush_F;
	class arifle_RPK12_lush_F;
	class srifle_DMR_03_tan_F;
	class srifle_DMR_04_Tan_F;
	class sgun_aa40_lxWS;
    class ef_hgun_Pistol_heavy_01_coy;
	class ef_hgun_P07_coy;
	class hgun_ACPC2_F;
	class Aegis_hgun_P320_sand_F;
	class ef_arifle_mxar;
	class ef_arifle_mxar_gl;
	class arifle_MX_F;
	class arifle_MX_GL_F;
	class arifle_MX_SW_F;
	class arifle_MXM_F;
	class arifle_MXC_F;
	class UGL_F;
	class Aegis_arifle_M16A4_base_F;

	//#include "pistols.hpp"
	#include "rifles.hpp"
	//#include "lmgs.hpp"
	//#include "lrr.hpp"
	//#include "shotguns.hpp"
};

class CfgMagazines
{
};

class CfgVehicles
{
};