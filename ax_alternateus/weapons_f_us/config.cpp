class CfgPatches
{
	class ax_weapons_f_us_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"A3_AddGis_Characters_F_AddGis"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_MuzzleSlot;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class asdg_PistolUnderRail;
class asdg_PistolOpticMount;
class asdg_PistolOpticRail1913;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_short_MG;
class asdg_OpticRail1913_long;
class asdg_OpticSideMount;
class asdg_OpticSideRail_AK;
class asdg_OpticSideRail_SVD;
class asdg_OpticSideRail_AKSVD;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_65;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762MG;
class asdg_MuzzleSlot_338;
class asdg_MuzzleSlot_93x64;
class asdg_MuzzleSlot_9MM;
class asdg_MuzzleSlot_9MM_SMG;
class asdg_MuzzleSlot_45ACP;
class asdg_MuzzleSlot_45ACP_SMG;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_762R;
class asdg_MuzzleSlot_762R_PK;
class asdg_MuzzleSlot_762R_SVD;
class asdg_MuzzleSlot_58;
class asdg_MuzzleSlot_46;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_556;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762;
class CowsSlot_Rail;
class CowsSlot_Dovetail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class WeaponSlotsInfo;

class CfgWeapons
{
	class arifle_MX_F;
	class arifle_MX_SW_F;
	class arifle_MX_GL_F;
	class arifle_MXC_F;
	class arifle_MX_SW_Black_F;
    class arifle_MX_GL_Black_F;
    class arifle_MX_Black_F;
    class arifle_MXC_Black_F;
    class arifle_MXM_Black_F;
	class arifle_MXC_khk_F;
	class arifle_MX_SW_khk_F;
	class arifle_MX_GL_khk_F;
	class srifle_DMR_03_tan_F;
	class LMG_Mk200_plain_F;
	class LMG_Zafir_F;
	class MMG_02_sand_F;
	#include "w_mxrifles.hpp"
	#include "w_sigrifles.hpp"
	class LMG_Mk200_plain_RCO_LP_F;
	class LMG_Mk200_plain_RCO_LP_S_F;
	class AX_LMG_Mk200_plain_v2_RCO_LP_F: LMG_Mk200_plain_RCO_LP_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\weapons_f_us\data\weapons\1st_person_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\Body_sand_CO.paa",
			"\A3\Weapons_F\Machineguns\M200\Data\grip_CO.paa"
		};
	};
	class AX_LMG_Mk200_plain_v2_RCO_LP_S_F: LMG_Mk200_plain_RCO_LP_S_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\weapons_f_us\data\weapons\1st_person_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\Body_sand_CO.paa",
			"\A3\Weapons_F\Machineguns\M200\Data\grip_CO.paa"
		};
	};
	class AX_LMG_Mk200_plain_v2_nogrip_RCO_LP_F: LMG_Mk200_plain_RCO_LP_F
	{
		picture="\ax_alternateus\weapons_f_us\data\weapons\ui\icon_LMG_M200_snd_nogrip_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\weapons_f_us\data\weapons\1st_person_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\Body_sand_CO.paa",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"
		};
	};
	class AX_LMG_Mk200_plain_v2_nogrip_RCO_LP_S_F: LMG_Mk200_plain_RCO_LP_S_F
	{
		picture="\ax_alternateus\weapons_f_us\data\weapons\ui\icon_LMG_M200_snd_nogrip_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\weapons_f_us\data\weapons\1st_person_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\Body_sand_CO.paa",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"
		};
	};
	class LMG_Mk200_khk_Hamr_Pointer_Bipod_F;
	class AX_LMG_Mk200_khk_nogrip_Hamr_Pointer_Bipod_F: LMG_Mk200_khk_Hamr_Pointer_Bipod_F
	{
		picture="\ax_alternateus\weapons_f_us\data\weapons\ui\icon_LMG_M200_khk_nogrip_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_1_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_2_CO.paa",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"
		};
	};
	class LMG_Mk200_khk_Hamr_Pointer_Bipod_Snds_F;
	class AX_LMG_Mk200_khk_nogrip_Hamr_Pointer_Bipod_Snds_F: LMG_Mk200_khk_Hamr_Pointer_Bipod_Snds_F
	{
		picture="\ax_alternateus\weapons_f_us\data\weapons\ui\icon_LMG_M200_khk_nogrip_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_1_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_2_CO.paa",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"
		};
	};
	class LMG_Mk200_black_RCO_LP_F;
	class AX_LMG_Mk200_black_nogrip_RCO_LP_F: LMG_Mk200_black_RCO_LP_F
	{
		picture="\ax_alternateus\weapons_f_us\data\weapons\ui\icon_LMG_M200_blk_nogrip_F_ca.paa";		
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Machineguns\M200\Data\1st_person_black_co.paa",
			"a3\Weapons_F_Enoch\Machineguns\M200\Data\Body_black_co.paa",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"
		};
	};
	class LMG_Mk200_black_RCO_LP_S_F;
	class AX_LMG_Mk200_nogrip_black_RCO_LP_S_F: LMG_Mk200_black_RCO_LP_S_F
	{
		picture="\ax_alternateus\weapons_f_us\data\weapons\ui\icon_LMG_M200_blk_nogrip_F_ca.paa";		
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Machineguns\M200\Data\1st_person_black_co.paa",
			"a3\Weapons_F_Enoch\Machineguns\M200\Data\Body_black_co.paa",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"
		};
	};
	class B_Patrol_Soldier_MachineGunner_weapon_F;
	class AX_LMG_Mk200_plain_v2_Holo_LP_S_F: B_Patrol_Soldier_MachineGunner_weapon_F
	{
		picture="\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\UI\icon_LMG_Mk200_plain_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\weapons_f_us\data\weapons\1st_person_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\Body_sand_CO.paa",
			"\A3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_CO.paa"
		};
	};
	class AX_LMG_Mk200_plain_v3_Holo_LP_S_F: AX_LMG_Mk200_plain_v2_Holo_LP_S_F
	{
		picture="\ax_alternateus\weapons_f_us\data\weapons\ui\icon_LMG_M200_snd_nogrip_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\weapons_f_us\data\weapons\1st_person_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\Body_sand_CO.paa",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"
		};
	};
	class AX_MMG_02_sand_RCO_LP_snds_F: MMG_02_sand_F
	{
		author="$STR_A3_Bohemia_Interactive";
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
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_338_black";
			};
		};
	};
	class arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F;
	class AX_arifle_SPAR_03_snd_v2_MOS_Pointer_Snds_Bipod_F: arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F
	{
		author="$STR_A3_Bohemia_Interactive";
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\weapons_f_us\data\weapons\arifle_SPAR_03_01_sand_Aegis_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SPAR_03\data\arifle_SPAR_03_02_sand_Aegis_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SPAR_01\data\arifle_SPAR_01_01_sand_Aegis_CO.paa"
		};
	};
};

class CfgVehicles
{
};