    class arifle_CTARS_base_F: Rifle_Base_F
	{
		modes[]=
		{
			"FullAuto",
			"Single",
			"fullauto_close",
			"fullauto_medium",
			"fullauto_medium_optics1",
			"fullauto_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.075000003;
			dispersion=0.00102;
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.075000003;
			dispersion=0.00102;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-06;
		};
		class fullauto_close: FullAuto
		{
			burst=10;
			aiBurstTerminable=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=5;
			minRange=150;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.75;
			maxRange=400;
			maxRangeProbab=0.25;
			aiRateOfFire=3;
			aiRateOfFireDistance=150;
		};
		class fullauto_medium_optics1: FullAuto
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=5;
			minRange=200;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class fullauto_far_optics2: fullauto_medium_optics1
		{
			burst=3;
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
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
	class arifle_AK12_lush_holo_snds_pointer_bipod_F: arifle_AK12_lush_F
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
	class AX_arifle_SCAR_L_grip_black_ACOG_LP_snds_F: arifle_SCAR_L_grip_black_F
	{
		author="$STR_A3_GS_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_ACOG";
			};
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
	class AX_arifle_SCAR_L_grip_black_ICO_LP_snds_F: arifle_SCAR_L_grip_black_F
	{
		author="$STR_A3_GS_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_ICO";
			};
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
	class AX_arifle_SCAR_L_grip_black_Holo_LP_snds_F: arifle_SCAR_L_grip_black_F
	{
		author="$STR_A3_GS_Axle";
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
				item="muzzle_snds_M";
			};
		};
	};
	class AX_arifle_SCAR_L_short_black_ICO_LP_snds_F: arifle_SCAR_L_short_black_F
	{
		author="$STR_A3_GS_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_ICO";
			};
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
	class AX_arifle_SCAR_L_GL_black_Holo_LP_snds_F: arifle_SCAR_L_GL_black_F
	{
		author="$STR_A3_GS_Axle";
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
				item="muzzle_snds_M";
			};
		};
	};
	class AX_arifle_SCAR_grip_black_DMS_LP_snds_BP_F: arifle_SCAR_grip_black_F
	{
		author="$STR_A3_GS_Axle";
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
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
	