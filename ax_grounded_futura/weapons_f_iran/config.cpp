class CfgPatches
{
	class ax_weapons_f_iran_grfu
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
	class launch_RPG32_F;
	class LMG_Zafir_F;
	class LMG_Zafir_black_F;
	class arifle_Katiba_F;
	class arifle_Katiba_C_F;
	class arifle_Katiba_GL_F;
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
	class AX_arifle_Katiba_ACO_FL_F: arifle_Katiba_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class AX_arifle_Katiba_C_ACO_FL_F: arifle_Katiba_C_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class AX_arifle_Katiba_GL_ACO_FL_F: arifle_Katiba_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class AX_LMG_Zafir_Black_ACO_FL_F: LMG_Zafir_black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class AX_MMG_01_black_ARCO_FL_BI_F: MMG_01_black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
	class AX_srifle_DMR_01_black_ARCO_FL_BI_F: srifle_DMR_01_black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
	class Atlas_srifle_DMR_01_black_ARCO_IR_BI_PBS_F: srifle_DMR_01_black_F
	{
		author="$STR_A3_A_Ravenholme";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_blk";
			};
		};
	};
	class LMG_Zafir_ARCO_pointer_F: LMG_Zafir_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class LMG_Zafir_ARCO_pointer_snds_F: LMG_Zafir_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_blk";
			};
		};
	};
	class AX_LMG_Zafir_black_ARCO_pointer_F: LMG_Zafir_black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class srifle_DMR_01_black_DMS_LP_F: srifle_DMR_01_black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
	class MMG_01_black_ARCO_LP_F: MMG_01_black_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
	class AX_launch_RPG32_cbr_F: launch_RPG32_F
	{
		author="$STR_A3_GRFU_Axle";
		displayName="$STR_A3_GRFU_launch_RPG32_cbr_F0";
		picture="\ax_grounded_futura\weapons_f_iran\launchers\rpg32\data\ui\icon_launch_RPG32_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\weapons_f_iran\launchers\rpg32\data\rpg_32_body_cbr_co.paa",
			"\A3\Weapons_F\Launchers\RPG32\data\RPG_32_optics_CO.paa"
		};
	};
};
