class CfgPatches
{
	class ax_aegis_lot_g21_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"lot_aaf_glock"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class SlotInfo;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class cfgWeapons
{
	class Pistol_Base_F;
	class lot_hgun_G21_F: Pistol_Base_F
	{
		displayname="$STR_A3_A_CfgWeapons_hgun_G21_snd_F0";
	};
	class lot_hgun_G21_black_F: lot_hgun_G21_F
	{
		displayname="$STR_A3_A_CfgWeapons_hgun_G21_blk_F0";
	};
	class lot_hgun_G21_olive_F: lot_hgun_G21_F
	{
		displayname="$STR_A3_A_CfgWeapons_hgun_G21_oli_F0";
	};
	class lot_hgun_G21_khaki_F: lot_hgun_G21_F
	{
		author="Axle";
		displayname="$STR_A3_A_CfgWeapons_hgun_G21_khk_F0";
		picture="\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_khaki_F_X_CA.paa";
		baseWeapon="lot_hgun_G21_khaki_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_weapons_f_jca_aegis\data\G17_khaki_CO.paa"
		};
	};
	class hgun_G17_F;
	class hgun_G17_black_F: hgun_G17_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_glock\Data\G17_black_CO.paa"
		};
	};
	class Aegis_hgun_G17_sand2_F: hgun_G17_F
	{
		author="Lotto";
		displayname="$STR_A3_A_CfgWeapons_hgun_G17_snd2_F0";
		picture="lot_aaf_glock\Data\UI\icon_hgun_G17_F_X_CA.paa";
		baseWeapon="Aegis_hgun_G17_sand2_F";
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_glock\Data\G17_CO.paa"
		};
	};
	class Aegis_hgun_G17_khaki2_F: hgun_G17_F
	{
		author="Axle";
		displayname="$STR_A3_A_CfgWeapons_hgun_G17_khk2_F0";
		picture="\A3_Aegis\Weapons_F_Aegis\Pistols\G17\Data\UI\icon_hgun_G17_khaki_F_X_CA.paa";
		baseWeapon="Aegis_hgun_G17_khaki2_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_weapons_f_jca_aegis\data\G17_khaki_CO.paa"
		};
	};
	class Aegis_hgun_G17_olive_F: hgun_G17_F
	{
		author="Lotto";
		displayname="$STR_A3_A_CfgWeapons_hgun_G17_oli_F0";
		picture="lot_aaf_glock\Data\UI\icon_hgun_G17_khaki_F_X_CA.paa";
		baseWeapon="Aegis_hgun_G17_olive_F";
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_glock\Data\G17_khaki_CO.paa"
		};
	};
};