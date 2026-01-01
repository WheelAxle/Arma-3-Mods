	class AX_srifle_DMR_03_tan_v2_AMS_LP_F: srifle_DMR_03_tan_F
	{
		author="$STR_A3_Bohemia_Interactive";
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
				item="bipod_01_F_snd";
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_03\Data\DMR_03_01_tan_CO.paa",
			"\ax_alternateus\weapons_f_us\data\weapons\DMR_03_02_blksnd_CO.paa"
		};
	};
	class AX_srifle_DMR_03_tan_DMS_LP_BI_snds_F: srifle_DMR_03_tan_F
	{
		author="$STR_A3_IMUS_Axle";
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
				item="muzzle_snds_B_snd_F";
			};
		};
	};
    class AX_srifle_DMR_03_tan_v2_DMS_LP_BI_snds_F: AX_srifle_DMR_03_tan_DMS_LP_BI_snds_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_03\Data\DMR_03_01_tan_CO.paa",
			"\ax_alternateus\weapons_f_us\data\weapons\DMR_03_02_blksnd_CO.paa"
		};
	};
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
				item="muzzle_snds_B";
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
				item="muzzle_snds_B_khk_F";
			};
		};
	};
	class AX_srifle_DMR_03_blksnd_F: srifle_DMR_03_tan_F
	{
		baseWeapon="AX_srifle_DMR_03_blksnd_F";
		author="$STR_A3_IMUS_Axle";
		displayName="$STR_A3_IMUS_srifle_DMR_03_blksnd_F0";
		picture="\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_tan_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\weapons_f_us\data\weapons\DMR_03_01_blksnd_CO.paa",
			"\ax_alternateus\weapons_f_us\data\weapons\DMR_03_02_blksnd_CO.paa"
		};
	};
	class AX_srifle_DMR_03_blksnd_AMS_LP_F: AX_srifle_DMR_03_blksnd_F
	{
		author="$STR_A3_IMUS_Axle";
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
				item="bipod_01_F_snd";
			};
		};
	};
	class AX_srifle_DMR_03_blksnd_DMS_LP_BI_snds_F: AX_srifle_DMR_03_blksnd_F
	{
		author="$STR_A3_IMUS_Axle";
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
				item="muzzle_snds_B_snd_F";
			};
		};
	};