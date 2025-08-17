    class MMG_02_sand_F;
    class AX_MMG_02_coy_F: MMG_02_sand_F
	{
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_MMG_02_coy_F";
		displayName="$STR_A3_MCFU_MMG_02_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\machineguns\mmg_02\data\ui\Icon_MMG_02_coy_F_CA.paa";
		UIPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\machineguns\mmg_02\data\MMG_02_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\machineguns\mmg_02\data\MMG_02_02_coy_CO.paa",
			"\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_sand_CO.paa"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
    class AX_MMG_02_coy_RCO_LP_F: AX_MMG_02_coy_F
	{
		author="$STR_A3_MCFU_Axle";
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
		};
	};
	class LMG_03_base_F;
	class AX_LMG_03_fast_base_F: LMG_03_base_F
	{
		modes[]=
		{
			"FullAutoFast",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
	};
	class AX_LMG_03_blk_F: AX_LMG_03_fast_base_F
	{
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_LMG_03_blk_F";
		scope=2;
		displayName="$STR_A3_MCFU_LMG_03_blk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\machineguns\lmg_03\data\ui\Icon_LMG_03_blk_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\machineguns\lmg_03\data\LMG_03_F_acc_CO.paa",
			"\A3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_CO.paa"
		};
	};
	class AX_LMG_03_blk_IR_snds_F: AX_LMG_03_blk_F
	{
		author="$STR_A3_MCFU_Axle";
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
				item="muzzle_snds_M";
			};
		};
	};
	class LMG_Mk200_F;
	class AX_LMG_Mk200_IR_snds_F: LMG_Mk200_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_LMG_Mk200_Holo_IR_snds_F: LMG_Mk200_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_Holosight_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_LMG_Mk200_Holo_IR_snds_BI_F: LMG_Mk200_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_Holosight_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};