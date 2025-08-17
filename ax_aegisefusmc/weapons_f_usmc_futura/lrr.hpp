    class AX_srifle_DMR_03_coy_F: srifle_DMR_03_tan_F
	{
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_srifle_DMR_03_coy_F";
		displayName="$STR_A3_MCFU_srifle_DMR_03_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\longrangerifles\dmr_03\data\ui\Icon_DMR_03_coy_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\longrangerifles\dmr_03\data\DMR_03_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\longrangerifles\dmr_03\data\DMR_03_02_coy_CO.paa"
		};
	};
    class AX_srifle_DMR_03_coy_AMS_LP_F: AX_srifle_DMR_03_coy_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
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
		};
	};
	class AX_srifle_DMR_03_coy_DMS_LP_BI_snds_F: AX_srifle_DMR_03_coy_F
	{
		author="$STR_A3_MCFU_Axle";
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
				item="muzzle_snds_B";
			};
		};
	};