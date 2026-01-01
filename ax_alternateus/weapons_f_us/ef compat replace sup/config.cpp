class CfgPatches
{
	class ax_weapons_f_us_grfu_ef_compat_replace_snds
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
			"ax_weapons_f_us_grfu"
		};
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class arifle_MX_F;
	class arifle_MXC_F;
	class arifle_MX_GL_F;
	class arifle_MX_SW_F;
	class arifle_MXM_F;
	class arifle_MX_khk_F;
	class arifle_MXC_khk_F;
	class arifle_MX_GL_khk_F;
	class arifle_MX_SW_khk_F;
	class arifle_MXM_khk_F;
	class arifle_MX_Black_F;
	class arifle_MXC_Black_F;
	class arifle_MX_GL_Black_F;
	class arifle_MX_SW_Black_F;
	class arifle_MXM_Black_F;
	class LMG_Mk200_F;
	class LMG_Mk200_plain_F;
	class LMG_Mk200_khk_F;
	class LMG_Mk200_black_F;
	class arifle_MXC_Holo_pointer_snds_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXC_SOS_point_snds_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MXC_ACO_pointer_snds_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_ACO_pointer_snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_RCO_pointer_snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_GL_Holo_pointer_snds_F: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MXM_RCO_pointer_snds_F: arifle_MXM_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MXM_DMS_LP_BI_snds_F: arifle_MXM_F
	{
		class LinkedItems
		{
			class LinkedItemsOptics
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
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_khk_Hamr_Pointer_Snds_F: arifle_MX_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class arifle_MX_khk_ACO_Pointer_Snds_F: arifle_MX_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class arifle_MX_GL_khk_Holo_Pointer_Snds_F: arifle_MX_GL_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class arifle_MXC_khk_ACO_Pointer_Snds_F: arifle_MXC_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F: arifle_MXM_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS_khk_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class B_Patrol_Soldier_Leader_weapon_F: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class B_Patrol_Soldier_Operator_weapon_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class B_Patrol_Soldier_Medic_weapon_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class B_Patrol_Soldier_Autorifleman_weapon_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class B_Patrol_Soldier_MachineGunner_weapon_F: LMG_Mk200_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class B_Patrol_Soldier_Carrier_weapon_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			delete LinkedItemsUnder;
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class B_Patrol_Soldier_Specialist_weapon_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			delete LinkedItemsUnder;
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_Black_Hamr_Pointer_Snds_F: arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MX_Black_ACO_Pointer_Snds_F: arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MX_GL_Black_Holo_Pointer_Snds_F: arifle_MX_GL_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MXC_Black_ACO_Pointer_Snds_F: arifle_MXC_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F: arifle_MXM_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_Blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MX_Holo_pointer_snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_GL_RCO_pointer_snds_F: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_SW_Hamr_pointer_snds_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class arifle_MXM_MOS_LP_BI_S_F: arifle_MXM_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class arifle_MXC_Black_Holo_Pointer_Snds_F: arifle_MXC_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MX_Black_Holo_Pointer_Snds_F: arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MX_GL_Black_Hamr_Pointer_Snds_F: arifle_MX_GL_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F: arifle_MX_SW_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MX_khk_Holo_Pointer_Snds_F: arifle_MX_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class arifle_MX_GL_khk_Hamr_Pointer_Snds_F: arifle_MX_GL_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class arifle_MXC_khk_Holo_Pointer_Snds_F: arifle_MXC_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class arifle_MX_SW_khk_Hamr_Pointer_Snds_F: arifle_MX_SW_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
	class Atlas_arifle_MX_HAMR_IR_Snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR_sand_LxWS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Sand";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class Atlas_arifle_MXC_Holo_IR_Snds_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Sand";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class Atlas_arifle_MX_GL_HAMR_IR_Snds_F: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR_sand_LxWS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Sand";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class Atlas_arifle_MX_SW_HAMR_IR_Snds_BI_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR_sand_LxWS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Sand";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class Atlas_arifle_MXM_SOS_IR_Snds_BI_F: arifle_MXM_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Sand";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class Atlas_arifle_MX_khk_HAMR_IR_Snds_F: arifle_MX_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Khaki";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class Atlas_arifle_MXC_khk_Holo_IR_Snds_F: arifle_MXC_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Khaki";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F: arifle_MX_GL_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Khaki";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class Atlas_arifle_MX_SW_khk_HAMR_IR_Snds_BI_F: arifle_MX_SW_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Khaki";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
	class Atlas_arifle_MXM_khk_SOS_IR_Snds_BI_F: arifle_MXM_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Khaki";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
	class Atlas_arifle_MX_blk_HAMR_IR_Snds_F: arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class Atlas_arifle_MXC_blk_Holo_IR_Snds_F: arifle_MXC_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class Atlas_arifle_MX_GL_blk_HAMR_IR_Snds_F: arifle_MX_GL_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class Atlas_arifle_MX_SW_blk_HAMR_IR_Snds_BI_F: arifle_MX_SW_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class Atlas_arifle_MXM_blk_SOS_IR_Snds_BI_F: arifle_MXM_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MX_SW_RCO_pointer_snds_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_SW_Holo_pointer_snds_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_GL_ACO_pointer_snds_F: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
    class arifle_MXM_Black_DMS_LP_BI_snds_F: arifle_MXM_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptics
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
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
    };
	class arifle_MX_SW_Black_RCO_pointer_snds_F: arifle_MX_SW_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MX_GL_Black_RCO_pointer_snds_F: arifle_MX_GL_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class arifle_MX_SW_khk_RCO_pointer_snds_F: arifle_MX_SW_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class arifle_MX_GL_khk_RCO_pointer_snds_F: arifle_MX_GL_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class Atlas_arifle_MXC_HAMR_IR_Snds_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR_sand_LxWS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Sand";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class Atlas_arifle_MXC_khk_HAMR_IR_Snds_F: arifle_MXC_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM_Khaki";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class Atlas_arifle_MXC_blk_HAMR_IR_Snds_F: arifle_MXC_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class LMG_Mk200_plain_RCO_LP_S_F: LMG_Mk200_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class LMG_Mk200_khk_Hamr_Pointer_Bipod_Snds_F: LMG_Mk200_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
	class LMG_Mk200_black_RCO_LP_S_F: LMG_Mk200_black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class LMG_Mk200_black_MRCO_LP_S_F: LMG_Mk200_black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class LMG_Mk200_plain_MRCO_LP_S_F: LMG_Mk200_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class LMG_MK200_black_snds_F: LMG_Mk200_black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class LMG_Mk200_khk_MRCO_Snds_IR_F: LMG_Mk200_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};
	class LMG_Mk200_khk_ACOG_Snds_IR_F: LMG_Mk200_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_ACOG_khaki";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_khk";
			};
		};
	};

//RF
	class arifle_MX_GL_snd_RF: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_GL_ACO_snd_RF: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_Hamr_IR_snd_RF: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};
	class arifle_MX_ACO_IR_snd_RF: arifle_MX_F
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
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_sand";
			};
		};
	};

};

class cfgVehicles
{
	class B_Kitbag_rgr;
	class B_Kitbag_khk;
	class B_Kitbag_tna_F;
	class B_Kitbag_rgr_AAR: B_Kitbag_rgr
	{
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_01_F_snd
			{
				name="bipod_01_F_snd";
				count=1;
			};
			class _xx_muzzle_snds_338_sand
			{
				name="muzzle_snds_338_sand";
				count=1;
			};
			class _xx_muzzle_snds_H_snd_F
			{
				name="ef_snds_mxar_sand";
				count=1;
			};
		};
	};
	class AX_B_Kitbag_khk_AAR: B_Kitbag_khk
	{
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_01_F_snd
			{
				name="bipod_01_F_snd";
				count=1;
			};
			class _xx_muzzle_snds_338_sand
			{
				name="muzzle_snds_338_sand";
				count=1;
			};
			class _xx_muzzle_snds_H_snd_F
			{
				name="ef_snds_mxar_sand";
				count=1;
			};
		};
	};
	class B_Kitbag_tna_BTAAR_F: B_Kitbag_tna_F
	{
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_01_F_khk
			{
				name="bipod_01_F_khk";
				count=1;
			};
			class _xx_muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=1;
			};
			class _xx_muzzle_snds_H_khk_F
			{
				name="ef_snds_mxar_khk";
				count=1;
			};
		};
	};
	class B_Kitbag_rgr_BWAAR: B_Kitbag_rgr
	{
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=1;
			};
			class _xx_muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=1;
			};
			class _xx_muzzle_snds_H
			{
				name="ef_snds_mxar";
				count=1;
			};
		};
	};
};