class CfgPatches
{
	class ax_weapons_f_us_grfu_jca_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"Weapons_F_JCA_IA",
			"ax_weapons_f_us_grfu"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class srifle_DMR_03_F;
    class AX_srifle_DMR_03_DMS_LP_BI_snds_F: srifle_DMR_03_F
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
				item="optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="JCA_muzzle_snds_762_tactical_black";
			};
		};
	};
	class srifle_DMR_03_tan_F;
	class AX_srifle_DMR_03_tan_DMS_LP_BI_snds_F: srifle_DMR_03_tan_F
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
				item="optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="JCA_muzzle_snds_762_tactical_sand";
			};
		};
	};
	class srifle_DMR_03_khaki_F;
    class AX_srifle_DMR_03_khaki_DMS_LP_BI_snds_F: srifle_DMR_03_khaki_F
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
				item="optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="JCA_muzzle_snds_762_tactical_black";
			};
		};
	};
	class arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F;
	class AX_arifle_SPAR_03_snd_v2_MOS_Pointer_Snds_Bipod_F: arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F
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
				item="JCA_muzzle_snds_762_tactical_sand";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
};