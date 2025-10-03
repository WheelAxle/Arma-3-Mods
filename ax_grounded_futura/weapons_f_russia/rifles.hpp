    class arifle_AK12_base_F: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
		class Burst_medium;
	};
	class arifle_AK12_545_base_F: arifle_AK12_base_F
	{
		class Burst_medium: Burst_medium
		{
			showToPlayer=0;
		};
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F{};
	class arifle_AK12_GL_545_base_F: arifle_AK12_GL_base_F
	{
		class Burst_medium: Burst_medium
		{
			showToPlayer=0;
		};
	};
	class arifle_AK12U_base_F: arifle_AK12_base_F{};
	class arifle_AK12U_545_base_F: arifle_AK12U_base_F
	{
		class Burst_medium: Burst_medium
		{
			showToPlayer=0;
		};
	};
	class arifle_AK12_lush_snds_pointer_F: arifle_AK12_lush_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
		};
	};
	class arifle_AK12_lush_arco_snds_pointer_bipod_F: arifle_AK12_lush_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_AK_lush_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_lush";
			};
		};
	};
	class AX_arifle_AK12_lush_holo_snds_pointer_bipod_F: arifle_AK12_lush_F
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_lush_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_lush";
			};
		};
	};
	class arifle_AK12U_lush_snds_pointer_F: arifle_AK12U_lush_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
		};
	};
	class arifle_RPK12_lush_holo_snds_pointer_F: arifle_RPK12_lush_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_lush_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
		};
	};
	class AX_arifle_AK12_lush_bvo_snds_pointer_F: arifle_AK12_lush_F
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87_lush";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
		};
	};
	class AX_arifle_AK12U_lush_bvo_snds_pointer_F: arifle_AK12U_lush_F
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87_lush";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
		};
	};
	class AX_arifle_AK12_lush_bvo_snds_pointer_BI_F: arifle_AK12_lush_F
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87_lush";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_lush";
			};
		};
	};
	class AX_arifle_AK12_GL_lush_bvo_snds_pointer_F: arifle_AK12_GL_lush_F
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87_lush";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
		};
	};
	class AX_arifle_RPK12_lush_bvo_snds_pointer_F: arifle_RPK12_lush_F
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_lush_lxWS";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87_lush";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_lush";
			};
		};
	};
	
	class AX_arifle_AK12_GL_545_flash_F: arifle_AK12_GL_545_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};