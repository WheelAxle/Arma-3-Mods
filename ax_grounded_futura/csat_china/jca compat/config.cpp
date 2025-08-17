class CfgPatches
{
	class ax_grounded_csat_china_2035_jca_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"Weapons_F_JCA_IA"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class arifle_CTAR_blk_F;
	class arifle_CTAR_GL_blk_F;
	class arifle_CTARS_blk_F;
	class arifle_CTAR_blk_ACO_F: arifle_CTAR_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
		};
	};
	class arifle_CTAR_blk_ACO_Pointer_F: arifle_CTAR_blk_F
	{
		class LinkedItems
		{
			class linkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
		};
	};
	class arifle_CTAR_blk_ACO_Pointer_Snds_F: arifle_CTAR_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_blk_F";
			};
		};
	};
	class arifle_CTAR_GL_blk_ACO_F: arifle_CTAR_GL_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
		};
	};
	class arifle_CTAR_GL_blk_ACO_Pointer_F: arifle_CTAR_GL_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_CTAR_GL_blk_ACO_Pointer_Snds_F: arifle_CTAR_GL_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_blk_F";
			};
		};
	};
	class Aegis_arifle_CTAR_tan_f;
	class Aegis_arifle_CTAR_GL_tan_f;
	class Aegis_arifle_CTAR_tan_ACO_Pointer_F: Aegis_arifle_CTAR_tan_f
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
				item="JCA_optic_ARO_black";
			};
		};
	};
	class Aegis_arifle_CTAR_tan_ACO_F: Aegis_arifle_CTAR_tan_f
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
		};
	};
	class Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F: Aegis_arifle_CTAR_tan_f
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_sand_LxWS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_blk_F";
			};
		};
	};
	class Aegis_arifle_CTAR_GL_tan_ACO_Pointer_F: Aegis_arifle_CTAR_GL_tan_f
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR_sand_LxWS";
			};
		};
	};
};