class CfgPatches
{
	class ax_aegis_lot_m1014_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"lot_aaf_m1014"
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
	class Rifle_Base_F;
	class lot_m1014: Rifle_Base_F{scope=1;scopeArsenal=1;};
	class lot_m1014_sand: lot_m1014{scope=1;scopeArsenal=1;};
	class lot_m1014_olive: lot_m1014{scope=1;scopeArsenal=1;};
	class lot_m1014_cqb: lot_m1014{scope=1;scopeArsenal=1;};
	class lot_m1014_cqb_sand: lot_m1014_cqb{scope=1;scopeArsenal=1;};
	class lot_m1014_cqb_olive: lot_m1014{scope=1;scopeArsenal=1;};

	class Rifle_Short_Base_F;
	class sgun_M4_F: Rifle_Short_Base_F
	{
		model="lot_aaf_m1014\lot_m1014";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"lot_aaf_m1014\anim\m1014.rtm"
		};
		reloadMagazineSound[]=
		{
			"lot_aaf_m1014\sounds\shotgun_reload.ogg",
			1.2,
			1,
			35
		};
		reloadAction="lot_m1014_Reload";
		hiddenSelections[]=
		{
			"camo",
			"mount"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Shotguns\M4_SSAS\Data\M4_SSAS_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Shotguns\M4_SSAS\Data\M4_SSAS_CO.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot
			{
				compatibleItems[]=
				{
					"muzzle_snds_12Gauge_lxWS",
					"muzzle_snds_12Gauge_snake_lxWS",
					"lot_muzzle_snds_12guage_enhanced_black"
				};
			};
		};
	};
	class Aegis_sgun_M4_blk_F: sgun_M4_F
	{
		author="Lotto";
		displayName="$STR_A3_AX_sgun_m4_blk_F";
		picture="lot_aaf_m1014\ui_m1014_ca.paa";
		baseWeapon="Aegis_sgun_M4_blk_F";
		hiddenSelectionsTextures[]=
		{
			"lot_aaf_m1014\m1014_co.paa",
			"lot_aaf_m1014\m1014_co.paa"
		};
	};
	class Aegis_sgun_M4_snd_F: sgun_M4_F
	{
		author="Lotto";
		displayName="$STR_A3_AX_sgun_m4_snd_F";
		picture="lot_aaf_m1014\ui_m1014_sand_ca.paa";
		baseWeapon="Aegis_sgun_M4_snd_F";
		hiddenSelectionsTextures[]=
		{
			"lot_aaf_m1014\m1014_sand_co.paa",
			"lot_aaf_m1014\m1014_co.paa"
		};
	};
	class Aegis_sgun_M4_oli_F: sgun_M4_F
	{
		author="Lotto";
		displayName="$STR_A3_AX_sgun_m4_oli_F";
		picture="lot_aaf_m1014\ui_m1014_olive_ca.paa";
		baseWeapon="Aegis_sgun_M4_oli_F";
		hiddenSelectionsTextures[]=
		{
			"lot_aaf_m1014\m1014_olive_co.paa",
			"lot_aaf_m1014\m1014_co.paa"
		};
	};
	class Aegis_sgun_M4_cqb_F: sgun_M4_F
	{
		author="Lotto";
		displayName="$STR_A3_AX_sgun_m4_cqb_F";
		model="lot_aaf_m1014\lot_m1014_cqb";
		picture="\ax_weapons_f_jca_aegis\data\ui\icon_sgun_M4_cqb_F_X_ca.paa";
		baseWeapon="Aegis_sgun_M4_cqb_F";
		inertia=0.34999999;
		dexterity=1.7;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
		};
	};
	class Aegis_sgun_M4_cqb_blk_F: Aegis_sgun_M4_cqb_F
	{
		author="Lotto";
		displayName="$STR_A3_AX_sgun_m4_cqb_blk_F";
		picture="lot_aaf_m1014\ui_m1014_cqb_ca.paa";
		baseWeapon="Aegis_sgun_M4_cqb_blk_F";
		hiddenSelectionsTextures[]=
		{
			"lot_aaf_m1014\m1014_co.paa",
			"lot_aaf_m1014\m1014_co.paa"
		};
	};
	class Aegis_sgun_M4_cqb_snd_F: Aegis_sgun_M4_cqb_F
	{
		author="Lotto";
		displayName="$STR_A3_AX_sgun_m4_cqb_snd_F";
		picture="lot_aaf_m1014\ui_m1014_cqb_sand_ca.paa";
		baseWeapon="Aegis_sgun_M4_cqb_snd_F";
		hiddenSelectionsTextures[]=
		{
			"lot_aaf_m1014\m1014_sand_co.paa",
			"lot_aaf_m1014\m1014_co.paa"
		};
	};
	class Aegis_sgun_M4_cqb_oli_F: Aegis_sgun_M4_cqb_F
	{
		author="Lotto";
		displayName="$STR_A3_AX_sgun_m4_cqb_oli_F";
		picture="lot_aaf_m1014\ui_m1014_cqb_olive_ca.paa";
		baseWeapon="Aegis_sgun_M4_cqb_oli_F";
		hiddenSelectionsTextures[]=
		{
			"lot_aaf_m1014\m1014_olive_co.paa",
			"lot_aaf_m1014\m1014_co.paa"
		};
	};
	class sgun_Mp153_black_F: Rifle_Base_F
	{
		reloadMagazineSound[]=
		{
			"lot_aaf_m1014\sounds\shotgun_reload.ogg",
			1.2,
			1,
			35
		};
		reloadAction="lot_m1014_Reload";
	};
	class sgun_KSG_F: Rifle_Short_Base_F
	{
		reloadMagazineSound[]=
		{
			"lot_aaf_m1014\sounds\shotgun_reload.ogg",
			1.2,
			1,
			35
		};
		reloadAction="lot_m1014_Reload";
	};
};

class CfgMagazines
{
	class 4Rnd_12Gauge_Pellets;
	class 4Rnd_12Gauge_Slug;
	class Aegis_4Rnd_12Gauge_HE;
	class Aegis_4Rnd_12Gauge_Smoke;
	class AX_5Rnd_12Gauge_Pellets: 4Rnd_12Gauge_Pellets
	{
		author="$STR_A3_A_AveryTheKitty";
		displayName="$STR_A3_A_CfgMagazines_5Rnd_12Gauge_Pellets0";
		count=5;
		descriptionShort="$STR_A3_A_CfgMagazines_5Rnd_12Gauge_Pellets1";
	};
	class AX_5Rnd_12Gauge_Slug: 4Rnd_12Gauge_Slug
	{
		author="$STR_A3_A_AveryTheKitty";
		displayName="$STR_A3_A_CfgMagazines_5Rnd_12Gauge_Slug0";
		count=5;
		descriptionShort="$STR_A3_A_CfgMagazines_5Rnd_12Gauge_Pellets1";
	};
	class AX_5Rnd_12Gauge_HE: Aegis_4Rnd_12Gauge_HE
	{
		author="$STR_A3_A_Ravenholme";
		displayName="$STR_A3_A_CfgMagazines_5Rnd_12Gauge_HE0";
		descriptionShort="$STR_A3_A_CfgMagazines_5Rnd_12Gauge_HE1";
		count=5;
	};
	class AX_5Rnd_12Gauge_Smoke: Aegis_4Rnd_12Gauge_Smoke
	{
		author="$STR_A3_A_Ravenholme";
		displayName="$STR_A3_A_CfgMagazines_5Rnd_12Gauge_Smoke0";
		descriptionShort="$STR_A3_A_CfgMagazines_5Rnd_12Gauge_Smoke1";
		count=5;
	};
};

class CfgMagazineWells
{
	class MP153_12GA
	{
		Aegis_Magazines[]=
		{
			"4Rnd_12Gauge_Pellets",
			"4Rnd_12Gauge_Slug",
			"Aegis_4Rnd_12Gauge_HE",
			"Aegis_4Rnd_12Gauge_Smoke",
			"2Rnd_12Gauge_Pellets",
			"2Rnd_12Gauge_Slug",
			"2Rnd_HE_Mag_lxWS",
			"2Rnd_Smoke_Mag_lxWS"
		};
	};
};