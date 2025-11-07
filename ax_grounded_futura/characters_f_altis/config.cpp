class CfgPatches
{
	class ax_characters_f_altis_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class H_HelmetB;
	class H_HelmetHBK_base_F;
	class H_HelmetHBK_headset_base_F;
	class H_HelmetHBK_ear_base_F;
	class H_HelmetHBK_chops_base_F;
	#include "w_helmets.hpp"
	#include "w_uniforms.hpp"

	class arifle_Mk20_F;
	class arifle_Mk20C_F;
	class arifle_Mk20_GL_F;
	class Aegis_arifle_SR25_MR_blk_F;
	class LMG_03_F;
	class Aegis_arifle_MK20_FMS_LP_Snds_F: arifle_Mk20_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="acc_o_FMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class Aegis_arifle_MK20C_FMS_LP_Snds_F: arifle_Mk20C_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="acc_o_FMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class Aegis_arifle_MK20_GL_FMS_LP_Snds_F: arifle_Mk20_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="acc_o_FMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class Aegis_arifle_SR25_MR_blk_MRCO_LP_Snds_BI_F: Aegis_arifle_SR25_MR_blk_F
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
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_03_F_blk";
			};
		};
	};
	class AX_LMG_03_MRCO_LP_Snds_BI_F: LMG_03_F
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
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_03_F_blk";
			};
		};
	};
};

class CfgVehicles
{
	class I_E_Man_Base_F;
	#include "v_uniforms.hpp"

	class B_TacticalPack_oli;
    class B_Carryall_oli;
	class I_Fieldpack_oli_Ammo: B_Carryall_oli
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=8;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_556x45_Box_F";
				count=1;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
    class I_Fieldpack_oli_249_Ammo: B_Carryall_oli
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=8;
			};
			class _xx_200Rnd_556x45_Box_F
			{
				magazine="200Rnd_556x45_Box_F";
				count=1;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
    class B_TacticalPack_oli_AAR: B_TacticalPack_oli
	{
		class TransportMagazines
		{
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_556x45_Box_F";
				count=3;
			};
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine="200Rnd_556x45_Box_Tracer_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_03_F_blk
			{
				name="bipod_03_F_blk";
				count=1;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
		};
	};
	class B_TacticalPack_oli_249_AAR: B_TacticalPack_oli
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_200Rnd_556x45_Box_F
			{
				magazine="200Rnd_556x45_Box_F";
				count=3;
			};
			class _xx_200Rnd_556x45_Box_Tracer_F
			{
				magazine="200Rnd_556x45_Box_Tracer_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_03_F_blk
			{
				name="bipod_03_F_blk";
				count=1;
			};
			class _xx_muzzle_snds_M
			{
				name="muzzle_snds_M";
				count=1;
			};
		};
	};
};