class CfgPatches
{
	class ax_grounded_greenfor_altis_2035
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
	class H_HelmetIA: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\data\headgear_helmet_canvas_co.paa"
		};
	};
	class H_HelmetHBK_base_F;
	class H_HelmetHBK_headset_base_F;
	class H_HelmetHBK_ear_base_F;
	class H_HelmetHBK_chops_base_F;
	class AX_H_HelmetHBK_aaf_F: H_HelmetHBK_base_F
	{
		author="$STR_A3_GS_Axle";
		scope=2;
		displayName="$STR_A3_GS_H_HelmetHBK_aaf_F0";
		picture="\ax_grounded_futura\greenfor_altis\data\ui\icon_H_HelmetHBK_AAF_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\data\H_HelmetHBK_01_aaf_co.paa"
		};
	};
	class AX_H_HelmetHBK_aaf_headset_F: H_HelmetHBK_headset_base_F
	{
		author="$STR_A3_GS_Axle";
		scope=2;
		displayName="$STR_A3_GS_H_HelmetHBK_aaf_headset_F0";
		picture="\ax_grounded_futura\greenfor_altis\data\ui\icon_H_HelmetHBK_headset_AAF_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\data\H_HelmetHBK_01_aaf_co.paa"
		};
	};
	class AX_H_HelmetHBK_aaf_ear_F: H_HelmetHBK_ear_base_F
	{
		author="$STR_A3_GS_Axle";
		scope=2;
		displayName="$STR_A3_GS_H_HelmetHBK_aaf_ear_F0";
		picture="\ax_grounded_futura\greenfor_altis\data\ui\icon_H_HelmetHBK_ear_aaf_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\data\H_HelmetHBK_01_aaf_co.paa"
		};
	};
	class AX_H_HelmetHBK_aaf_chops_F: H_HelmetHBK_chops_base_F
	{
		author="$STR_A3_GS_Axle";
		scope=2;
		displayName="$STR_A3_GS_H_HelmetHBK_aaf_chops_F0";
		picture="\ax_grounded_futura\greenfor_altis\data\ui\icon_H_HelmetHBK_chops_aaf_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\data\H_HelmetHBK_01_aaf_co.paa"
		};
	};
	class AX_U_I_CombatUniform_jacket_tan_F: Uniform_Base
	{
		author="$STR_A3_GS_Axle";
		scope=2;
		displayName="$STR_A3_GS_U_I_CombatUniform_jacket_tan_F0";
		picture="\ax_grounded_futura\greenfor_altis\Data\UI\icon_U_I_CombatUniform_jacket_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_soldier_U_I_CombatUniform_jacket_tan_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_I_CombatUniform_jacket_grn_F: Uniform_Base
	{
		author="$STR_A3_GS_Axle";
		scope=1;
		displayName="$STR_A3_GS_U_I_CombatUniform_jacket_grn_F0";
		picture="\ax_grounded_futura\greenfor_altis\Data\UI\icon_U_I_CombatUniform_jacket_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_soldier_U_I_CombatUniform_jacket_grn_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_I_CombatUniform_jacket_gloves_tan_F: Uniform_Base
	{
		author="$STR_A3_GS_Axle";
		scope=2;
		displayName="$STR_A3_GS_U_I_CombatUniform_jacket_gloves_tan_F0";
		picture="\ax_grounded_futura\greenfor_altis\Data\UI\icon_U_I_CombatUniform_jacket_gloves_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_soldier_U_I_CombatUniform_jacket_gloves_tan_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_I_CombatUniform_jacket_gloves_grn_F: Uniform_Base
	{
		author="$STR_A3_GS_Axle";
		scope=1;
		displayName="$STR_A3_GS_U_I_CombatUniform_jacket_gloves_grn_F0";
		picture="\ax_grounded_futura\greenfor_altis\Data\UI\icon_U_I_CombatUniform_jacket_gloves_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_soldier_U_I_CombatUniform_jacket_gloves_grn_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_I_CombatUniform_jacket_02_tan_F: Uniform_Base
	{
		author="$STR_A3_GS_Axle";
		scope=2;
		displayName="$STR_A3_GS_U_I_CombatUniform_jacket_02_tan_F0";
		picture="\ax_grounded_futura\greenfor_altis\Data\UI\icon_U_I_CombatUniform_jacket_02_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_soldier_U_I_CombatUniform_jacket_02_tan_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_I_CombatUniform_jacket_02_grn_F: Uniform_Base
	{
		author="$STR_A3_GS_Axle";
		scope=1;
		displayName="$STR_A3_GS_U_I_CombatUniform_jacket_02_grn_F0";
		picture="\ax_grounded_futura\greenfor_altis\Data\UI\icon_U_I_CombatUniform_jacket_02_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_soldier_U_I_CombatUniform_jacket_02_grn_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_I_CombatUniform_jacket_02_gloves_tan_F: Uniform_Base
	{
		author="$STR_A3_GS_Axle";
		scope=2;
		displayName="$STR_A3_GS_U_I_CombatUniform_jacket_02_gloves_tan_F0";
		picture="\ax_grounded_futura\greenfor_altis\Data\UI\icon_U_I_CombatUniform_jacket_02_gloves_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_soldier_U_I_CombatUniform_jacket_02_gloves_tan_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_I_CombatUniform_jacket_02_gloves_grn_F: Uniform_Base
	{
		author="$STR_A3_GS_Axle";
		scope=1;
		displayName="$STR_A3_GS_U_I_CombatUniform_jacket_02_gloves_grn_F0";
		picture="\ax_grounded_futura\greenfor_altis\Data\UI\icon_U_I_CombatUniform_jacket_02_gloves_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_soldier_U_I_CombatUniform_jacket_02_gloves_grn_F";
			containerClass="Supply40";
			mass=40;
		};
	};
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
	class AX_soldier_U_I_CombatUniform_jacket_tan_F: I_E_Man_Base_F
	{
		scope=1;
		model="lxws\characters_f_lxWS\uniform\I_E_Soldier_01_lxWS.p3d";
		uniformClass="AX_U_I_CombatUniform_jacket_tan_F";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\I_I_Soldier_01_Tan_aaf_CO.paa"
		};
	};
	class AX_soldier_U_I_CombatUniform_jacket_grn_F: AX_soldier_U_I_CombatUniform_jacket_tan_F
	{
		uniformClass="AX_U_I_CombatUniform_jacket_grn_F";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\I_I_Soldier_01_Tan_aaf_CO.paa"
		};
	};
	class AX_soldier_U_I_CombatUniform_jacket_gloves_tan_F: I_E_Man_Base_F
	{
		scope=1;
		model="\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		uniformClass="AX_U_I_CombatUniform_jacket_gloves_tan_F";
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\I_I_Soldier_01_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\Gloves_black.paa"
		};
	};
	class AX_soldier_U_I_CombatUniform_jacket_gloves_grn_F: AX_soldier_U_I_CombatUniform_jacket_gloves_tan_F
	{
		uniformClass="AX_U_I_CombatUniform_jacket_gloves_grn_F";
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\I_I_Soldier_01_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\Gloves_black.paa"
		};
	};
	class AX_soldier_U_I_CombatUniform_jacket_02_tan_F: I_E_Man_Base_F
	{
		scope=1;
		model="\A3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		uniformClass="AX_U_I_CombatUniform_jacket_02_tan_F";
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\I_I_Soldier_01_Tan_aaf_CO.paa"
		};
	};
	class AX_soldier_U_I_CombatUniform_jacket_02_grn_F: AX_soldier_U_I_CombatUniform_jacket_02_tan_F
	{
		uniformClass="AX_U_I_CombatUniform_jacket_02_grn_F";
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\I_I_Soldier_01_Tan_aaf_CO.paa"
		};
	};
	class AX_soldier_U_I_CombatUniform_jacket_02_gloves_tan_F: I_E_Man_Base_F
	{
		scope=1;
		model="\lxws\characters_f_lxws\uniform\I_E_Soldier_01_ShortSleeve_lxWS.p3d";
		uniformClass="AX_U_I_CombatUniform_jacket_02_gloves_tan_F";
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\I_I_Soldier_01_Tan_aaf_CO.paa"
		};
	};
	class AX_soldier_U_I_CombatUniform_jacket_02_gloves_grn_F: AX_soldier_U_I_CombatUniform_jacket_02_gloves_tan_F
	{
		uniformClass="AX_U_I_CombatUniform_jacket_02_gloves_grn_F";
		hiddenSelectionsTextures[]=
		{
			"ax_grounded_futura\greenfor_altis\Data\Officer_Insignia_Tan_aaf_CO.paa",
			"ax_grounded_futura\greenfor_altis\Data\I_I_Soldier_01_Tan_aaf_CO.paa"
		};
	};
	class B_TacticalPack_oli;
    class B_Carryall_oli;
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
	#include "aaf.hpp"
};