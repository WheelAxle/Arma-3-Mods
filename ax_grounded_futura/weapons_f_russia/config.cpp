class CfgPatches
{
	class ax_weapons_f_russia_grfu
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
	class arifle_AK12_GL_lush_F;
	class arifle_RPK12_lush_F;
	class srifle_DMR_04_Tan_F;
	class sgun_aa40_lxWS;
	class Aegis_arifle_RPK12_545_base_F;
	class arifle_AK12_GL_545_F;
	class sgun_Mp153_black_F;
	class lk_pkp_mg;
	#include "rifles.hpp"
	#include "lmgs.hpp"
	#include "lrr.hpp"
	class AX_sgun_Mp153_black_F: sgun_Mp153_black_F
	{
		reloadAction="lxWS_GestureReload_galat";
		reloadMagazineSound[]=
		{
			"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_reload",
			"db0",
			1,
			30
		};
	};
	class AX_sgun_Mp153_black_LP_F: AX_sgun_Mp153_black_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_compact_pistol_green";
			};
		};
	};
};

class CfgMagazines
{
	#include "magazines.hpp"
};

class CfgMagazineWells
{
	class AK_545x39
	{
		AX_GRFU_Magazines[]=
		{
			"AX_30Rnd_545x39_Mag_F",
			"AX_30Rnd_545x39_Mag_Tracer_F",
			"AX_30Rnd_545x39_AP_Mag_F",
			"AX_30Rnd_545x39_AP_Mag_Tracer_F",
			"AX_45Rnd_545x39_AP_Mag_F",
			"AX_45Rnd_545x39_AP_Mag_Tracer_F",
			"AX_45Rnd_545x39_AP_Mag_Tracer_Green_F",
			"AX_60Rnd_545x39_AP_Mag_F",
			"AX_60Rnd_545x39_AP_Mag_Tracer_F",
			"AX_60Rnd_545x39_AP_Mag_Tracer_Green_F"
		};
	};
};

class CfgVehicles
{
};