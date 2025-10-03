    class Aegis_arifle_RPK12_545_F: Aegis_arifle_RPK12_545_base_F
	{
		class Burst;
		class FullAuto;
	};
	class AX_arifle_RPK12_545_F: Aegis_arifle_RPK12_545_F
	{
		class Burst: Burst
		{
			burst=2;
			reloadTime=0.059999999;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.059999999;
		};
	};
	class Ax_arifle_RPK12_545_bvo_flash_F: Aegis_arifle_RPK12_545_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87";
			};
		};
	};
	class AX_pkp_mg_bvo_F: lk_pkp_mg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87";
			};
		};
	};
	class AX_pkp_mg_bvo_snds_F: lk_pkp_mg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_pbs_762_blk";
			};
		};
	};