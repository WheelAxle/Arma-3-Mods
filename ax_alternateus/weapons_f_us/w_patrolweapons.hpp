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
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h";
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
				item="muzzle_snds_h";
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
				item="muzzle_snds_h";
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
				item="muzzle_snds_h";
			};
		};
	};
	class B_Patrol_Soldier_Marksman_weapon_F: srifle_DMR_03_tan_F
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
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
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
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h";
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
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h";
			};
		};
	};
	class B_Patrol_Soldier_MachineGunner_weapon_F: LMG_Mk200_plain_F
	{
		author="$STR_A3_Bohemia_Interactive";
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
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h";
			};
		};
	};
	class B_Patrol_Soldier_HeavyGunner_weapon_F: LMG_Zafir_F
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
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_blk";
			};
		};
	};
	