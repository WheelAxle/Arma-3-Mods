class CfgPatches
{
	class ax_weapons_f_grounded_futura
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
	class srifle_DMR_04_Tan_F;
	class sgun_aa40_lxWS;
	#include "pistols.hpp"
	#include "rifles.hpp"
	#include "lmgs.hpp"
	#include "lrr.hpp"
	#include "shotguns.hpp"
};

class CfgMagazines
{
	class 30Rnd_545x39_Mag_F;
	class Aegis_30Rnd_545x39_AP_Mag_F: 30Rnd_545x39_Mag_F
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\weapons_f_grounded\rifles\ak12\data\mag_AK12_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ax_grounded_futura\weapons_f_grounded\rifles\ak12\data\mag_AK12.rvmat"
		};
	};
};

class CfgVehicles
{
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class RifleReloadProneBase;
		class RifleReloadProneMMG01: RifleReloadProneBase
		{
			speed=-9.34;
		};
	};
};
class CfgGesturesMale
{
	class States
	{
		class GestureReloadBase;
		class RifleReloadDeployedMMG01: GestureReloadBase
		{
			speed=-9.34;
		};
	};
};