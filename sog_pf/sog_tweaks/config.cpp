class CfgPatches
{
	class ax_sog_tweaks
	{
		units[]=
		{
			"vn_b_men_aus_army_68_23",
			"vn_b_men_aus_army_68_24",
			"vn_b_men_aus_army_68_25",
			"vn_b_men_aus_army_68_26",
			"vn_b_men_aus_army_68_27"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"loadorder_f_vietnam"
		};
		author="Axle";
	};
};

//#include "3den.hpp"
#include "cfgFactionClasses.hpp"
#include "cfgEditorSubcategories.hpp"
#include "cfgGroups.hpp"
#include "cfgWorlds.hpp"

class AnimationSources;
class cfgWeapons
{
	class Default;
	class ItemCore;
	class detectorcore;
	class inventoryfirstaidkititem_base_f;
	class medikititem;
	class toolkititem;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryUnderItem_Base_F;
	class Zasleh2;
	class muzzle_snds_L;
	class muzzle_snds_m;
	class muzzle_snds_B;
	class acc_pointer_IR;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class RifleCore: Default
	{
	};
	class Rifle: RifleCore
	{
		class WeaponSlotsInfo;
	};
    class Rifle_Base_F: Rifle
	{
		class ItemInfo;
		class WeaponSlotsInfo;
		class GunParticles;
	};
    class vn_rifle: Rifle_Base_F
	{
    };
	class vn_rifle762: vn_rifle
	{
    };
	//#include "weapons.hpp"
};

class CfgVehicles
{

//US Anti-Air
	class vn_static_m45_base;
	class vn_b_army_static_m45: vn_static_m45_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_b_sf_static_m45: vn_static_m45_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_static_l60mk3_base;
	class vn_b_navy_static_l60mk3: vn_static_l60mk3_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_static_l70mk2_base;
	class vn_b_navy_static_l70mk2: vn_static_l70mk2_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_AAs";
	};

//US Artillery
	class vn_static_m101_02_base;
	class vn_b_army_static_m101_02: vn_static_m101_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_usmc_static_m101_02: vn_static_m101_02_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_sf_static_m101_02: vn_static_m101_02_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_static_mortar_m2_base;
	class vn_b_army_static_mortar_m2: vn_static_mortar_m2_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_usmc_static_mortar_m2: vn_static_mortar_m2_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_sf_static_mortar_m2: vn_static_mortar_m2_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_static_mortar_m29_base;
	class vn_b_army_static_mortar_m29: vn_static_mortar_m29_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_usmc_static_mortar_m29: vn_static_mortar_m29_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_sf_static_mortar_m29: vn_static_mortar_m29_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Artillery";
	};

//US Boats
	class vn_boat_05_turret_base;
	class vn_b_boat_05_01: vn_boat_05_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_06_turret_base;
	class vn_b_boat_06_01: vn_boat_06_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_09_turret_base;
	class vn_b_boat_09_01: vn_boat_09_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_10_turret_base;
	class vn_b_boat_10_01: vn_boat_10_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_11_turret_base;
	class vn_b_boat_11_01: vn_boat_11_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_12_turret_base;
	class vn_b_boat_12_01: vn_boat_12_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_b_boat_12_02: vn_boat_12_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_b_boat_12_03: vn_boat_12_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_b_boat_12_04: vn_boat_12_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_13_turret_base;
	class vn_b_boat_13_01: vn_boat_13_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_b_boat_13_02: vn_boat_13_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_b_boat_13_03: vn_boat_13_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_b_boat_13_04: vn_boat_13_turret_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Boats";
	};

//US CARS
	class vn_wheeled_m54_01_base;
	class vn_b_wheeled_m54_01: vn_wheeled_m54_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_01_usmc: vn_wheeled_m54_01_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_01_airport: vn_b_wheeled_m54_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_01_sog: vn_b_wheeled_m54_01
	{
		faction="B_MACV";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m54_02_base;
	class vn_b_wheeled_m54_02: vn_wheeled_m54_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_02_usmc: vn_wheeled_m54_02_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_02_sog: vn_b_wheeled_m54_02
	{
		faction="B_MACV";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m54_ammo_base;
	class vn_b_wheeled_m54_ammo: vn_wheeled_m54_ammo_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_ammo_usmc: vn_wheeled_m54_ammo_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_ammo_airport: vn_b_wheeled_m54_ammo
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m54_fuel_base;
	class vn_b_wheeled_m54_fuel: vn_wheeled_m54_fuel_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_fuel_usmc: vn_wheeled_m54_fuel_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_fuel_airport: vn_b_wheeled_m54_fuel
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m54_03_base;
	class vn_b_wheeled_m54_03: vn_wheeled_m54_03_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_03_usmc: vn_wheeled_m54_03_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m54_repair_base;
	class vn_b_wheeled_m54_repair: vn_wheeled_m54_repair_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_repair_usmc: vn_wheeled_m54_repair_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_repair_airport: vn_b_wheeled_m54_repair
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m54_mg_02_base;
	class vn_b_wheeled_m54_mg_02: vn_wheeled_m54_mg_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m54_mg_01_base;
	class vn_b_wheeled_m54_mg_01: vn_wheeled_m54_mg_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m54_mg_03_base;
	class vn_b_wheeled_m54_mg_03: vn_wheeled_m54_mg_03_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m151_base;
	class vn_wheeled_m151_01_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class codriver_ffv;
			class cargoturret_rear;
		};
	};
	class vn_b_wheeled_m151_01: vn_wheeled_m151_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_01_usmc: vn_wheeled_m151_01_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_01_mp: vn_b_wheeled_m151_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m151_02_base: vn_wheeled_m151_01_base
	{
	};
	class vn_b_wheeled_m151_02: vn_wheeled_m151_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_02_usmc: vn_wheeled_m151_02_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_02_mp: vn_b_wheeled_m151_02
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m151_mg_02_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class codriver_ffv;
			class MainTurret;
		};
	};
	class vn_b_wheeled_m151_mg_02: vn_wheeled_m151_mg_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_02_usmc: vn_wheeled_m151_mg_02_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_02_mp: vn_b_wheeled_m151_mg_02
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m151_mg_03_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class mg2turret;
			class MainTurret;
		};
	};
	class vn_b_wheeled_m151_mg_03: vn_wheeled_m151_mg_03_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_03_usmc: vn_wheeled_m151_mg_03_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_03_mp: vn_b_wheeled_m151_mg_03
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m151_mg_04_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class vn_b_wheeled_m151_mg_04: vn_wheeled_m151_mg_04_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_04_usmc: vn_wheeled_m151_mg_04_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_04_mp: vn_b_wheeled_m151_mg_04
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m151_mg_05_base;
	class vn_b_wheeled_m151_mg_05: vn_wheeled_m151_mg_05_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m151_mg_06_base;
	class vn_b_wheeled_m151_mg_06: vn_wheeled_m151_mg_06_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m274_01_base;
	class vn_b_wheeled_m274_01_01: vn_wheeled_m274_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m274_01_02: vn_wheeled_m274_01_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m274_01_03: vn_wheeled_m274_01_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m274_02_base;
	class vn_b_wheeled_m274_02_01: vn_wheeled_m274_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m274_02_02: vn_wheeled_m274_02_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m274_02_03: vn_wheeled_m274_02_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m274_mg_01_base;
	class vn_b_wheeled_m274_mg_01_01: vn_wheeled_m274_mg_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m274_mg_01_02: vn_wheeled_m274_mg_01_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m274_mg_02_base;
	class vn_b_wheeled_m274_mg_02_01: vn_wheeled_m274_mg_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m274_mg_02_02: vn_wheeled_m274_mg_02_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m274_mg_03_base;
	class vn_b_wheeled_m274_mg_03_01: vn_wheeled_m274_mg_03_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m274_mg_03_02: vn_wheeled_m274_mg_03_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Cars";
	};

//US helicopters
	class vn_air_ch34_m60_base;
	class vn_b_air_ch34_01_01: vn_air_ch34_m60_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ch34_m60_x2_base;
	class vn_b_air_ch34_03_01: vn_air_ch34_m60_x2_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ch34_stinger_base;
	class vn_b_air_ch34_04_01: vn_air_ch34_stinger_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ch34_04_02: vn_air_ch34_stinger_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ch34_04_03: vn_air_ch34_stinger_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ch34_04_04: vn_air_ch34_stinger_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ah1g_01_base;
	class vn_b_air_ah1g_01: vn_air_ah1g_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ah1g_02_base;
	class vn_b_air_ah1g_02: vn_air_ah1g_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ah1g_03_base;
	class vn_b_air_ah1g_03: vn_air_ah1g_03_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ah1g_04_base;
	class vn_b_air_ah1g_04: vn_air_ah1g_04_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ah1g_05_base;
	class vn_b_air_ah1g_05: vn_air_ah1g_05_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ah1g_06_base;
	class vn_b_air_ah1g_06: vn_air_ah1g_06_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_07: vn_air_ah1g_06_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_08: vn_air_ah1g_06_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_09: vn_air_ah1g_06_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_10: vn_air_ah1g_06_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_01_usmc: vn_air_ah1g_01_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_02_usmc: vn_air_ah1g_02_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_03_usmc: vn_air_ah1g_03_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_04_usmc: vn_air_ah1g_04_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_05_usmc: vn_air_ah1g_05_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_06_usmc: vn_air_ah1g_06_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_07_usmc: vn_air_ah1g_06_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_08_usmc: vn_air_ah1g_06_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_09_usmc: vn_air_ah1g_06_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ah1g_10_usmc: vn_air_ah1g_06_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1c_base;
	class vn_air_uh1b_01_base: vn_air_uh1c_base
	{
	};
	class vn_air_uh1b_01_med_base;
	class vn_b_air_uh1b_01_01: vn_air_uh1b_01_med_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1b_01_02: vn_air_uh1b_01_med_base
	{
		forceInGarage=0;
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_b_air_uh1b_01_03: vn_air_uh1b_01_med_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1b_01_04: vn_air_uh1b_01_med_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1b_01_05: vn_air_uh1b_01_med_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1b_01_06: vn_air_uh1b_01_med_base
	{
		forceInGarage=0;
	};
	class vn_b_air_uh1b_01_09: vn_air_uh1b_01_base
	{
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1b_02_base;
	class vn_b_air_uh1b_02_05: vn_air_uh1b_02_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1c_01_base;
	class vn_b_air_uh1c_01_01: vn_air_uh1c_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_01_02: vn_b_air_uh1c_01_01
	{
		forceInGarage=0;
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_b_air_uh1c_01_03: vn_b_air_uh1c_01_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_01_04: vn_b_air_uh1c_01_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_01_05: vn_b_air_uh1c_01_01
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_01_07: vn_b_air_uh1c_01_01
	{
		faction="B_MACV";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1c_02_base;
	class vn_b_air_uh1c_02_01: vn_air_uh1c_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_02_02: vn_b_air_uh1c_02_01
	{
		forceInGarage=0;
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_b_air_uh1c_02_03: vn_b_air_uh1c_02_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_02_04: vn_b_air_uh1c_02_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_02_05: vn_b_air_uh1c_02_01
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_02_07: vn_b_air_uh1c_02_01
	{
		faction="B_MACV";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1c_03_base;
	class vn_b_air_uh1c_03_01: vn_air_uh1c_03_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1c_04_base;
	class vn_b_air_uh1c_04_01: vn_air_uh1c_04_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_04_02: vn_b_air_uh1c_04_01
	{
		forceInGarage=0;
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_b_air_uh1c_04_03: vn_b_air_uh1c_04_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_04_04: vn_b_air_uh1c_04_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_04_05: vn_b_air_uh1c_04_01
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_04_07: vn_b_air_uh1c_04_01
	{
		faction="B_MACV";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1c_05_base;
	class vn_b_air_uh1c_05_01: vn_air_uh1c_05_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_05_02: vn_b_air_uh1c_05_01
	{
		forceInGarage=0;
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_b_air_uh1c_05_03: vn_b_air_uh1c_05_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_05_04: vn_b_air_uh1c_05_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_05_05: vn_b_air_uh1c_05_01
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_05_07: vn_b_air_uh1c_05_01
	{
		faction="B_MACV";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1c_06_base;
	class vn_b_air_uh1c_06_01: vn_air_uh1c_06_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_06_02: vn_b_air_uh1c_06_01
	{
		forceInGarage=0;
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_air_uh1c_07_base;
	class vn_b_air_uh1c_07_01: vn_air_uh1c_07_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_07_02: vn_b_air_uh1c_07_01
	{
		forceInGarage=0;
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_b_air_uh1c_07_03: vn_b_air_uh1c_07_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_07_04: vn_b_air_uh1c_07_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_07_05: vn_b_air_uh1c_07_01
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1c_07_07: vn_b_air_uh1c_07_01
	{
		faction="B_MACV";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1e_01_base;
	class vn_b_air_uh1e_01_04: vn_air_uh1e_01_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1e_02_base;
	class vn_b_air_uh1e_02_04: vn_air_uh1e_02_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1e_03_base;
	class vn_b_air_uh1e_03_04: vn_air_uh1e_03_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1f_01_base;
	class vn_b_air_uh1f_01_03: vn_air_uh1f_01_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1d_01_base;
	class vn_b_air_uh1d_01_01: vn_air_uh1d_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1d_01_02: vn_b_air_uh1d_01_01
	{
		forceInGarage=0;
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_b_air_uh1d_01_03: vn_b_air_uh1d_01_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1d_01_04: vn_b_air_uh1d_01_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1d_01_05: vn_b_air_uh1d_01_01
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1d_01_07: vn_b_air_uh1d_01_01
	{
		faction="B_MACV";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1d_02_base;
	class vn_b_air_uh1d_02_01: vn_air_uh1d_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1d_02_02: vn_b_air_uh1d_02_01
	{
		forceInGarage=0;
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_b_air_uh1d_02_03: vn_b_air_uh1d_02_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1d_02_04: vn_b_air_uh1d_02_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1d_02_05: vn_b_air_uh1d_02_01
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_uh1d_02_07: vn_b_air_uh1d_02_01
	{
		faction="B_MACV";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_uh1d_04_base;
	class vn_b_air_uh1d_04_09: vn_air_uh1d_04_base
	{
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_helicopter_base;
	class vn_air_oh6a_base: vn_helicopter_base
	{
	};
	class vn_air_oh6a_cargo_base: vn_air_oh6a_base
	{
	};
	class vn_b_air_oh6a_01: vn_air_oh6a_cargo_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_oh6a_02: vn_air_oh6a_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_oh6a_03: vn_air_oh6a_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_oh6a_04: vn_b_air_oh6a_02
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_oh6a_05: vn_b_air_oh6a_04
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_oh6a_06: vn_b_air_oh6a_04
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_oh6a_07: vn_b_air_oh6a_04
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ch47_01_base;
	class vn_b_air_ch47_01_01: vn_air_ch47_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ch47_01_02: vn_air_ch47_01_base
	{
		forceInGarage=0;
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_air_ch47_02_base;
	class vn_b_air_ch47_02_01: vn_air_ch47_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ch47_02_02: vn_air_ch47_02_base
	{
		forceInGarage=0;
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_air_ch47_03_base;
	class vn_b_air_ch47_03_01: vn_air_ch47_03_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ch47_03_02: vn_air_ch47_03_base
	{
		forceInGarage=0;
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_air_ch47_04_base;
	class vn_b_air_ch47_04_01: vn_air_ch47_04_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_b_air_ch47_04_02: vn_air_ch47_04_base
	{
		forceInGarage=0;
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters_AirCav";
	};
	class vn_air_ach47_01_base;
	class vn_b_air_ach47_01_01: vn_air_ach47_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ach47_02_base;
	class vn_b_air_ach47_02_01: vn_air_ach47_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ach47_03_base;
	class vn_b_air_ach47_03_01: vn_air_ach47_03_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ach47_04_base;
	class vn_b_air_ach47_04_01: vn_air_ach47_04_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_ach47_05_base;
	class vn_b_air_ach47_05_01: vn_air_ach47_05_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Helicopters";
	};

//US soldiers
	class B_Soldier_base_F;
	class vn_b_men_sog_base: B_Soldier_base_F
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_sog_22: vn_b_men_sog_base
	{
		editorSubcategory="vn_b_men_sog_story";
	};
	class vn_b_men_sog_23: vn_b_men_sog_22
	{
		editorSubcategory="vn_b_men_sog_story";
	};
	class vn_b_men_sog_24: vn_b_men_sog_23
	{
		editorSubcategory="vn_b_men_sog_story";
	};
	class vn_b_men_sog_25: vn_b_men_sog_24
	{
		editorSubcategory="vn_b_men_sog_story";
	};
	class vn_b_men_sog_26: vn_b_men_sog_24
	{
		editorSubcategory="vn_b_men_sog_story";
	};
	class vn_b_men_sog_27: vn_b_men_sog_24
	{
		editorSubcategory="vn_b_men_sog_story";
	};
	class vn_b_men_sf_base: vn_b_men_sog_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_cidg_base: vn_b_men_sog_base
	{
	};
	class vn_b_men_lrrp_base: vn_b_men_sog_base
	{
		faction="B_vn_USARMY";
	};
	class vn_b_men_army_base: vn_b_men_sog_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_usmc_66_base: vn_b_men_army_base
	{
		faction="B_vn_USMC_66";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_usmc_68_base: vn_b_men_army_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_usmc_70_base: vn_b_men_army_base
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_usmc_recon_66_base: vn_b_men_sog_base
	{
		faction="B_vn_USMC_66";
		editorSubcategory="EdSubcat_Personnel_ForceRecon";
	};
	class vn_b_men_usmc_recon_68_base: vn_b_men_sog_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_ForceRecon";
	};
	class vn_b_men_usmc_recon_70_base: vn_b_men_sog_base
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Personnel_ForceRecon";
	};
	class vn_b_men_seal_base: vn_b_men_sog_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Personnel_SealTeam";
	};
	class vn_b_men_medt_base: vn_b_men_sog_base
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_army_15;
	class vn_b_men_army_22: vn_b_men_army_15
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_navy_base: vn_b_men_sog_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Personnel";
	};
	class SoldierWB;
	class vn_b_men_aircrew_base: SoldierWB
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_aircrew_01;
	class vn_b_men_aircrew_05: vn_b_men_aircrew_01
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_aircrew_02;
	class vn_b_men_aircrew_06: vn_b_men_aircrew_02
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_aircrew_03;
	class vn_b_men_aircrew_07: vn_b_men_aircrew_03
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_aircrew_04;
	class vn_b_men_aircrew_08: vn_b_men_aircrew_04
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_aircrew_09: vn_b_men_aircrew_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_10: vn_b_men_aircrew_02
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_11: vn_b_men_aircrew_03
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_12: vn_b_men_aircrew_04
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_13: vn_b_men_aircrew_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_14: vn_b_men_aircrew_02
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_15: vn_b_men_aircrew_03
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_16: vn_b_men_aircrew_04
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_17: vn_b_men_aircrew_01
	{
		displayName="$STR_VN_B_MEN_AIRCREW_17_DN";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_Aircrew_195_65";
	};
	class vn_b_men_aircrew_18: vn_b_men_aircrew_02
	{
		displayName="$STR_VN_B_MEN_AIRCREW_18_DN";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_Aircrew_195_65";
	};
	class vn_b_men_aircrew_19: vn_b_men_aircrew_03
	{
		displayName="$STR_VN_B_MEN_AIRCREW_19_DN";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_Aircrew_195_65";
	};
	class vn_b_men_aircrew_20: vn_b_men_aircrew_04
	{
		displayName="$STR_VN_B_MEN_AIRCREW_20_DN";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_Aircrew_195_65";
	};
	class vn_b_men_aircrew_21: vn_b_men_aircrew_01
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_aircrew_22: vn_b_men_aircrew_02
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_aircrew_23: vn_b_men_aircrew_03
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_aircrew_24: vn_b_men_aircrew_04
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_aircrew_25: vn_b_men_aircrew_01
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_aircrew_26: vn_b_men_aircrew_02
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_37: vn_b_men_aircrew_01 //CIA
	{
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_38: vn_b_men_aircrew_37
	{
	};
	class vn_b_men_aircrew_39: vn_b_men_aircrew_37
	{
	};
	class vn_b_men_aircrew_40: vn_b_men_aircrew_37
	{
	};
	class vn_b_men_aircrew_41: vn_b_men_aircrew_01
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_aircrew_42: vn_b_men_aircrew_41
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_aircrew_43: vn_b_men_aircrew_41
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_aircrew_44: vn_b_men_aircrew_43
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_aircrew_45: vn_b_men_aircrew_01
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_46: vn_b_men_aircrew_01
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_47: vn_b_men_aircrew_01
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_48: vn_b_men_aircrew_01
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_49: vn_b_men_aircrew_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};
	class vn_b_men_aircrew_50: vn_b_men_aircrew_49
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_aircrew";
	};

	class vn_b_men_jetpilot_01: vn_b_men_aircrew_base
	{
	};
	class vn_b_men_jetpilot_02: vn_b_men_jetpilot_01
	{
	};
	class vn_b_men_jetpilot_03: vn_b_men_jetpilot_01
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_jetpilot_04: vn_b_men_jetpilot_03
	{
	};
	class vn_b_men_jetpilot_05: vn_b_men_jetpilot_03
	{
	};
	class vn_b_men_jetpilot_06: vn_b_men_jetpilot_03
	{
	};
	class vn_b_men_jetpilot_07: vn_b_men_jetpilot_01
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Personnel_Aircrew";
	};
	class vn_b_men_jetpilot_08: vn_b_men_jetpilot_07
	{
	};
	class vn_b_men_jetpilot_09: vn_b_men_jetpilot_01
	{
	};
	class vn_b_men_jetpilot_10: vn_b_men_jetpilot_09
	{
	};
	class vn_b_men_jetpilot_11: vn_b_men_jetpilot_07
	{
	};
	class vn_b_men_jetpilot_12: vn_b_men_jetpilot_08
	{
	};
//US planes
	class vn_air_f4c_cap_base;
	class vn_b_air_f4c_cap: vn_air_f4c_cap_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_cas_base;
	class vn_b_air_f4c_cas: vn_air_f4c_cas_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_hcas_base;
	class vn_b_air_f4c_hcas: vn_air_f4c_hcas_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_ehcas_base;
	class vn_b_air_f4c_ehcas: vn_air_f4c_ehcas_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_ucas_base;
	class vn_b_air_f4c_ucas: vn_air_f4c_ucas_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_at_base;
	class vn_b_air_f4c_at: vn_air_f4c_at_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_mr_base;
	class vn_b_air_f4c_mr: vn_air_f4c_mr_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_lrbmb_base;
	class vn_b_air_f4c_lrbmb: vn_air_f4c_lrbmb_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_lbmb_base;
	class vn_b_air_f4c_lbmb: vn_air_f4c_lbmb_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_bmb_base;
	class vn_b_air_f4c_bmb: vn_air_f4c_bmb_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_mbmb_base;
	class vn_b_air_f4c_mbmb: vn_air_f4c_mbmb_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_hbmb_base;
	class vn_b_air_f4c_hbmb: vn_air_f4c_hbmb_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_gbu_base;
	class vn_b_air_f4c_gbu: vn_air_f4c_gbu_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_cbu_base;
	class vn_b_air_f4c_cbu: vn_air_f4c_cbu_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_sead_base;
	class vn_b_air_f4c_sead: vn_air_f4c_sead_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4c_chico_base;
	class vn_b_air_f4c_chico: vn_air_f4c_chico_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_at_base;
	class vn_b_air_f100d_at: vn_air_f100d_at_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_bmb_base;
	class vn_b_air_f100d_bmb: vn_air_f100d_bmb_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_cap_base;
	class vn_b_air_f100d_cap: vn_air_f100d_cap_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_cas_base;
	class vn_b_air_f100d_cas: vn_air_f100d_cas_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_cbu_base;
	class vn_b_air_f100d_cbu: vn_air_f100d_cbu_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_ehcas_base;
	class vn_b_air_f100d_ehcas: vn_air_f100d_ehcas_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_hbmb_base;
	class vn_b_air_f100d_hbmb: vn_air_f100d_hbmb_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_hcas_base;
	class vn_b_air_f100d_hcas: vn_air_f100d_hcas_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_lbmb_base;
	class vn_b_air_f100d_lbmb: vn_air_f100d_lbmb_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_mbmb_base;
	class vn_b_air_f100d_mbmb: vn_air_f100d_mbmb_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_mr_base;
	class vn_b_air_f100d_mr: vn_air_f100d_mr_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f100d_sead_base;
	class vn_b_air_f100d_sead: vn_air_f100d_sead_base
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_cap_base;
	class vn_b_air_f4b_usmc_cap: vn_air_f4b_cap_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_cas_base;
	class vn_b_air_f4b_usmc_cas: vn_air_f4b_cas_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_hcas_base;
	class vn_b_air_f4b_usmc_hcas: vn_air_f4b_hcas_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_ehcas_base;
	class vn_b_air_f4b_usmc_ehcas: vn_air_f4b_ehcas_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_ucas_base;
	class vn_b_air_f4b_usmc_ucas: vn_air_f4b_ucas_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_at_base;
	class vn_b_air_f4b_usmc_at: vn_air_f4b_at_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_mr_base;
	class vn_b_air_f4b_usmc_mr: vn_air_f4b_mr_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_lrbmb_base;
	class vn_b_air_f4b_usmc_lrbmb: vn_air_f4b_lrbmb_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_lbmb_base;
	class vn_b_air_f4b_usmc_lbmb: vn_air_f4b_lbmb_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_bmb_base;
	class vn_b_air_f4b_usmc_bmb: vn_air_f4b_bmb_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_mbmb_base;
	class vn_b_air_f4b_usmc_mbmb: vn_air_f4b_mbmb_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_hbmb_base;
	class vn_b_air_f4b_usmc_hbmb: vn_air_f4b_hbmb_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_gbu_base;
	class vn_b_air_f4b_usmc_gbu: vn_air_f4b_gbu_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_cbu_base;
	class vn_b_air_f4b_usmc_cbu: vn_air_f4b_cbu_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_f4b_sead_base;
	class vn_b_air_f4b_usmc_sead: vn_air_f4b_sead_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_cap: vn_air_f4b_cap_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_cas: vn_air_f4b_cas_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_hcas: vn_air_f4b_hcas_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_ehcas: vn_air_f4b_ehcas_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_ucas: vn_air_f4b_ucas_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_at: vn_air_f4b_at_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_mr: vn_air_f4b_mr_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_lrbmb: vn_air_f4b_lrbmb_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_lbmb: vn_air_f4b_lbmb_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_bmb: vn_air_f4b_bmb_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_mbmb: vn_air_f4b_mbmb_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_hbmb: vn_air_f4b_hbmb_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_gbu: vn_air_f4b_gbu_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_cbu: vn_air_f4b_cbu_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_b_air_f4b_navy_sead: vn_air_f4b_sead_base
	{
		faction="B_vn_USN";
		editorSubcategory="EdSubcat_Planes";
	};

//US APCS
	class vn_armor_m113_01_base;
	class vn_b_armor_m113_01: vn_armor_m113_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m113_acav_m2_base;
	class vn_b_armor_m113_acav_01: vn_armor_m113_acav_m2_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m113_acav_m1919_base;
	class vn_b_armor_m113_acav_02: vn_armor_m113_acav_m1919_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m113_acav_m60_base;
	class vn_b_armor_m113_acav_03: vn_armor_m113_acav_m60_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m113_acav_m134_base;
	class vn_b_armor_m113_acav_04: vn_armor_m113_acav_m134_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m113_acav_mk18_base;
	class vn_b_armor_m113_acav_05: vn_armor_m113_acav_mk18_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m113_acav_m40_base;
	class vn_b_armor_m113_acav_06: vn_armor_m113_acav_m40_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m125_base;
	class vn_b_armor_m125_01: vn_armor_m125_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m132_base;
	class vn_b_armor_m132_01: vn_armor_m132_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m577_01_base;
	class vn_b_armor_m577_01: vn_armor_m577_01_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_m577_02_base;
	class vn_b_armor_m577_02: vn_armor_m577_02_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};


//US tanks
	class All
	{
		class ViewCargo;
	};
	class AllVehicles: All
	{
		class NewTurret
		{
		};
		class CargoTurret: NewTurret
		{
			class ViewGunner: ViewCargo
			{
			};
		};
	};
	class Land: AllVehicles
	{
	};
	class LandVehicle: Land
	{
	};
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
				};
			};
		};
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
			};
		};
	};
	class vn_armor_tank_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_armor_m41_base: vn_armor_tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderTurret;
					class LoaderTurret;
				};
			};
		};
	}
	class vn_b_armor_m41_01_01_base: vn_armor_m41_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_b_armor_m41_01_02_base: vn_armor_m41_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_b_armor_m41_01_02: vn_b_armor_m41_01_02_base
	{
	};
	class vn_armor_m48a3_base;
	class vn_b_armor_m48_01_01: vn_armor_m48a3_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_b_armor_m48_01_02: vn_armor_m48a3_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_armor_m67a2_base;
	class vn_b_armor_m67_01_01: vn_armor_m67a2_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_b_armor_m67_01_02: vn_armor_m67a2_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Tanks";
	};

//US turrets
	class vn_static_m40a1rr_base;
	class vn_b_army_static_m40a1rr: vn_static_m40a1rr_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_usmc_static_m40a1rr: vn_static_m40a1rr_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Turrets";
		crew="vn_b_men_usmc_68_15";
	};
	class vn_static_mk18_base;
	class vn_b_army_static_mk18: vn_static_mk18_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m2_high_base;
	class vn_b_army_static_m2_high: vn_static_m2_high_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_usmc_static_m2_high: vn_static_m2_high_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m2_low_base;
	class vn_b_army_static_m2_low: vn_static_m2_low_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_usmc_static_m2_low: vn_static_m2_low_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_static_m2_scoped_high_base;
	class vn_b_army_static_m2_scoped_high: vn_b_static_m2_scoped_high_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_usmc_static_m2_scoped_high: vn_b_static_m2_scoped_high_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m2_scoped_low_base;
	class vn_b_army_static_m2_scoped_low: vn_static_m2_scoped_low_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_usmc_static_m2_scoped_low: vn_static_m2_scoped_low_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m1919a6_base;
	class vn_b_army_static_m1919a6: vn_static_m1919a6_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m1919a4_high_base;
	class vn_b_army_static_m1919a4_high: vn_static_m1919a4_high_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m1919a4_low_base;
	class vn_b_army_static_m1919a4_low: vn_static_m1919a4_low_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m60_high_base;
	class vn_b_army_static_m60_high: vn_static_m60_high_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_usmc_static_m60_high: vn_static_m60_high_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m60_low_base;
	class vn_b_army_static_m60_low: vn_static_m60_low_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_usmc_static_m60_low: vn_static_m60_low_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m101_base;
	class vn_b_army_static_m101_01: vn_static_m101_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_usmc_static_m101_01: vn_static_m101_base
	{
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_tow_base;
	class vn_b_army_static_tow: vn_static_tow_base
	{
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Turrets";
	};

//macv turrets
	class vn_b_sf_static_m2_high: vn_static_m2_high_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_m2_scoped_high: vn_b_static_m2_scoped_high_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_m2_low: vn_static_m2_low_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
		class vn_b_sf_static_m2_scoped_low: vn_static_m2_scoped_low_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_m40a1rr: vn_static_m40a1rr_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_m1919a6: vn_static_m1919a6_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_m1919a4_high: vn_static_m1919a4_high_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_m1919a4_low: vn_static_m1919a4_low_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_m60_high: vn_static_m60_high_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_m60_low: vn_static_m60_low_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_m101_01: vn_static_m101_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_tow: vn_static_tow_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_sf_static_mk18: vn_static_mk18_base
	{
		faction="B_vn_USSF";
		editorSubcategory="EdSubcat_Turrets";
	};

//navy turrets
	class vn_b_seal_static_m2_high: vn_static_m2_high_base
	{
		faction="B_vn_USN";
		//editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_seal_static_m2_low: vn_static_m2_low_base
	{
		faction="B_vn_USN";
		//editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_seal_static_m40a1rr: vn_static_m40a1rr_base
	{
		faction="B_vn_USN";
		//editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_seal_static_m60_high: vn_static_m60_high_base
	{
		faction="B_vn_USN";
		//editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_seal_static_m60_low: vn_static_m60_low_base
	{
		faction="B_vn_USN";
		//editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_seal_static_mk18: vn_static_mk18_base
	{
		faction="B_vn_USN";
		//editorSubcategory="EdSubcat_Turrets";
	};

//PAVN Anti-Air
	class vn_static_dshkm_high_02_base;
	class vn_o_vc_static_dshkm_high_02: vn_static_dshkm_high_02_base
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_static_dshkm_high_02: vn_static_dshkm_high_02_base
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_65_static_dshkm_high_02: vn_static_dshkm_high_02_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_navy_static_dshkm_high_02: vn_static_dshkm_high_02_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_static_zpu4_base;
	class vn_o_nva_static_zpu4: vn_static_zpu4_base
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_65_static_zpu4: vn_static_zpu4_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_navy_static_zpu4: vn_static_zpu4_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_AAs";
	};
	class StaticMGWeapon;
	class vn_o_static_rsna75: StaticMGWeapon
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_sa2: StaticMGWeapon
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_static_sgm_high_base;
	class vn_o_nva_static_sgm_high_01: vn_static_sgm_high_base
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_65_static_sgm_high_01: vn_static_sgm_high_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_navy_static_sgm_high_01: vn_static_sgm_high_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_vc_static_sgm_high_01: vn_o_nva_static_sgm_high_01
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_static_v11m_base;
	class vn_o_nva_navy_static_v11m: vn_static_v11m_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_static_m1910_high_base;
	class vn_o_nva_static_m1910_high_01: vn_static_m1910_high_base
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_65_static_m1910_high_01: vn_static_m1910_high_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_navy_static_m1910_high_01: vn_static_m1910_high_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_vc_static_m1910_high_01: vn_static_m1910_high_base
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_static_zgu1_base;
	class vn_o_nva_static_zgu1_01: vn_static_zgu1_base
	{
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_65_static_zgu1_01: vn_static_zgu1_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_navy_static_zgu1_01: vn_static_zgu1_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_vc_static_zgu1_01: vn_static_zgu1_base
	{
		editorSubcategory="EdSubcat_AAs";
	};

//PAVN Artillery
	class vn_static_d44_01_base;
	class vn_o_vc_static_d44_01: vn_static_d44_01_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_nva_static_d44_01: vn_static_d44_01_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_nva_65_static_d44_01: vn_static_d44_01_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_nva_navy_static_d44_01: vn_static_d44_01_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_static_mortar_type63_base;
	class vn_o_vc_static_mortar_type63: vn_static_mortar_type63_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_nva_static_mortar_type63: vn_static_mortar_type63_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_nva_65_static_mortar_type63: vn_static_mortar_type63_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_nva_navy_static_mortar_type63: vn_static_mortar_type63_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_static_mortar_type53_base;
	class vn_o_vc_static_mortar_type53: vn_static_mortar_type53_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_nva_static_mortar_type53: vn_static_mortar_type53_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_nva_65_static_mortar_type53: vn_static_mortar_type53_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_nva_navy_static_mortar_type53: vn_static_mortar_type53_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_static_h12_base;
	class vn_o_nva_static_h12: vn_static_h12_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_nva_65_static_h12: vn_static_h12_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_vc_static_h12: vn_static_h12_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};

//PAVN Boats
	class vn_boat_03_turret_base;
	class vn_o_boat_03_base: vn_boat_03_turret_base
	{
		faction="O_vn_VPN"
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_04_turret_base;
	class vn_o_boat_04_base: vn_boat_04_turret_base
	{
		faction="O_vn_VPN"
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_01_base;
	class vn_o_boat_01_base: vn_boat_01_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_02_base;
	class vn_o_boat_02_base: vn_boat_02_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_01_cargo_base;
	class vn_o_boat_01_cargo_base: vn_boat_01_cargo_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_02_cargo_base;
	class vn_o_boat_02_cargo_base: vn_boat_02_cargo_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_01_mg_base;
	class vn_o_boat_01_mg_base: vn_boat_01_mg_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_02_mg_base;
	class vn_o_boat_02_mg_base: vn_boat_02_mg_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_07_trans_base;
	class vn_o_boat_07_trans_base: vn_boat_07_trans_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_07_cargo_base;
	class vn_o_boat_07_cargo_base: vn_boat_07_cargo_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_08_trans_base;
	class vn_o_boat_08_trans_base: vn_boat_08_trans_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_boat_08_cargo_base;
	class vn_o_boat_08_cargo_base: vn_boat_08_cargo_base
	{
		editorSubcategory="EdSubcat_Boats";
	};

//PAVN Cars
	class vn_bicycle_01_base;
	class vn_o_bicycle_01: vn_bicycle_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_bicycle_01_nva65: vn_bicycle_01_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_bicycle_01_nvam: vn_bicycle_01_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_bicycle_01_vcmf: vn_bicycle_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_bicycle_02_base;
	class vn_o_bicycle_02: vn_bicycle_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_bicycle_02_nva65: vn_bicycle_02_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_bicycle_02_vcmf: vn_bicycle_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_z157_01_base;
	class vn_o_wheeled_z157_01: vn_wheeled_z157_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_z157_02_base;
	class vn_o_wheeled_z157_02: vn_wheeled_z157_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_z157_ammo_base;
	class vn_o_wheeled_z157_ammo: vn_wheeled_z157_ammo_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_z157_fuel_base;
	class vn_o_wheeled_z157_fuel: vn_wheeled_z157_fuel_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_z157_repair_base;
	class vn_o_wheeled_z157_repair: vn_wheeled_z157_repair_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_z157_03_base;
	class vn_o_wheeled_z157_03: vn_wheeled_z157_03_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_z157_04_base;
	class vn_o_wheeled_z157_04: vn_wheeled_z157_04_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_z157_mg_01_base;
	class vn_o_wheeled_z157_mg_01: vn_wheeled_z157_mg_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_z157_mg_02_base;
	class vn_o_wheeled_z157_mg_02: vn_wheeled_z157_mg_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_01_nva65: vn_wheeled_z157_01_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_02_nva65: vn_wheeled_z157_02_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_ammo_nva65: vn_wheeled_z157_ammo_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_fuel_nva65: vn_wheeled_z157_fuel_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_repair_nva65: vn_wheeled_z157_repair_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_03_nva65: vn_wheeled_z157_03_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_04_nva65: vn_wheeled_z157_04_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_mg_01_nva65: vn_wheeled_z157_mg_01_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_mg_02_nva65: vn_wheeled_z157_mg_02_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_01_vcmf: vn_wheeled_z157_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_02_vcmf: vn_wheeled_z157_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_ammo_vcmf: vn_wheeled_z157_ammo_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_fuel_vcmf: vn_wheeled_z157_fuel_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_repair_vcmf: vn_wheeled_z157_repair_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_03_vcmf: vn_wheeled_z157_03_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_04_vcmf: vn_wheeled_z157_04_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_mg_01_vcmf: vn_wheeled_z157_mg_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_mg_02_vcmf: vn_wheeled_z157_mg_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_01_nvam: vn_wheeled_z157_01_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_02_nvam: vn_wheeled_z157_02_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_ammo_nvam: vn_wheeled_z157_ammo_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_fuel_nvam: vn_wheeled_z157_fuel_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_repair_nvam: vn_wheeled_z157_repair_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_03_nvam: vn_wheeled_z157_03_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_04_nvam: vn_wheeled_z157_04_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_mg_01_nvam: vn_wheeled_z157_mg_01_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_mg_02_nvam: vn_wheeled_z157_mg_02_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_btr40_01_base;
	class vn_o_wheeled_btr40_01: vn_wheeled_btr40_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_btr40_ambulance_base;
	class vn_o_wheeled_btr40_02: vn_wheeled_btr40_ambulance_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_btr40_mg_01_base;
	class vn_o_wheeled_btr40_mg_01: vn_wheeled_btr40_mg_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_btr40_mg_02_base;
	class vn_o_wheeled_btr40_mg_02: vn_wheeled_btr40_mg_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_btr40_mg_03_base;
	class vn_o_wheeled_btr40_mg_03: vn_wheeled_btr40_mg_03_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_btr40_mg_04_base;
	class vn_o_wheeled_btr40_mg_04: vn_wheeled_btr40_mg_04_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_btr40_mg_05_base;
	class vn_o_wheeled_btr40_mg_05: vn_wheeled_btr40_mg_05_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_btr40_mg_06_base;
	class vn_o_wheeled_btr40_mg_06: vn_wheeled_btr40_mg_06_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_01_nva65: vn_wheeled_btr40_01_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_02_nva65: vn_wheeled_btr40_ambulance_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_01_nva65: vn_wheeled_btr40_mg_01_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_02_nva65: vn_wheeled_btr40_mg_02_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_03_nva65: vn_wheeled_btr40_mg_03_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_04_nva65: vn_wheeled_btr40_mg_04_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_05_nva65: vn_wheeled_btr40_mg_05_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_06_nva65: vn_wheeled_btr40_mg_06_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_01_nvam: vn_wheeled_btr40_01_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_02_nvam: vn_wheeled_btr40_ambulance_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_01_nvam: vn_wheeled_btr40_mg_01_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_02_nvam: vn_wheeled_btr40_mg_02_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_03_nvam: vn_wheeled_btr40_mg_03_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_04_nvam: vn_wheeled_btr40_mg_04_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_05_nvam: vn_wheeled_btr40_mg_05_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_06_nvam: vn_wheeled_btr40_mg_06_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_01_vcmf: vn_wheeled_btr40_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_02_vcmf: vn_wheeled_btr40_ambulance_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_01_vcmf: vn_wheeled_btr40_mg_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_02_vcmf: vn_wheeled_btr40_mg_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_03_vcmf: vn_wheeled_btr40_mg_03_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_04_vcmf: vn_wheeled_btr40_mg_04_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_05_vcmf: vn_wheeled_btr40_mg_05_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_06_vcmf: vn_wheeled_btr40_mg_06_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_car_01_base;
	class vn_o_car_01_01: vn_wheeled_car_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_car_02_base;
	class vn_o_car_02_01: vn_wheeled_car_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_car_03_base;
	class vn_o_car_03_01: vn_wheeled_car_03_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_car_04_unarmed_base;
	class vn_o_car_04_01: vn_wheeled_car_04_unarmed_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_car_04_mg_base;
	class vn_o_car_04_mg_01: vn_wheeled_car_04_mg_base
	{
		editorSubcategory="EdSubcat_Cars";
	};

//PAVN Soldiers
	class O_Soldier_base_F;
	class vn_o_men_nva_base: O_Soldier_base_F
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_men_nva_dc_base: vn_o_men_nva_base
	{
		faction="O_vn_PAVN_DC";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_men_nva_65_base: vn_o_men_nva_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_men_nva_65_01: vn_o_men_nva_65_base
	{
		identityTypes[]=
		{
			"LanguageVIE_F",
			"vn_o_asian_viet",
			"vn_g_vc_default"
		};
	};
	class vn_o_men_nva_navy_base: vn_o_men_nva_base
	{
		faction="O_vn_VPN";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_men_nva_marine_base: vn_o_men_nva_navy_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_men_aircrew_base: vn_o_men_nva_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_men_vc_base: vn_o_men_nva_base
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_men_vc_local_base: vn_o_men_vc_base
	{
		faction="O_vn_VC_local";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_men_vc_regional_base: vn_o_men_vc_base
	{
		faction="O_vn_VC_regional";
		editorSubcategory="EdSubcat_Personnel";
	};

//PAVN APCS
	class vn_armor_btr50pk_01_base;
	class vn_o_armor_btr50pk_01: vn_armor_btr50pk_01_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_btr50pk_01_nva65: vn_armor_btr50pk_01_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_btr50pk_01_nvam: vn_armor_btr50pk_01_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_armor_btr50pk_02_base;
	class vn_o_armor_btr50pk_02: vn_armor_btr50pk_02_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_btr50pk_02_nva65: vn_armor_btr50pk_02_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_btr50pk_02_nvam: vn_armor_btr50pk_02_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_APCs";
	}
	class vn_armor_btr50pk_03_base;
	class vn_o_armor_btr50pk_03: vn_armor_btr50pk_03_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_btr50pk_03_nva65: vn_armor_btr50pk_03_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_btr50pk_03_nvam: vn_armor_btr50pk_03_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m113_01: vn_armor_m113_01_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m113_acav_01: vn_armor_m113_01_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m113_acav_03: vn_armor_m113_acav_m60_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m125_01: vn_armor_m125_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m577_01: vn_armor_m577_01_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m577_02: vn_armor_m577_02_base
	{
		editorSubcategory="EdSubcat_APCs";
	};

//PAVN tanks
	class vn_o_armor_m41_01_base: vn_armor_m41_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_armor_m41_02_base: vn_armor_m41_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_armor_m41_02_vcmf: vn_o_armor_m41_02_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_armor_type63_base;
	class vn_o_armor_type63_01: vn_armor_type63_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_armor_type63_01_nva65: vn_armor_type63_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_armor_pt76a_base;
	class vn_o_armor_pt76a_01: vn_armor_pt76a_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_armor_pt76a_01_nva65: vn_armor_pt76a_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_armor_pt76b_base;
	class vn_o_armor_pt76b_01: vn_armor_pt76b_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_armor_pt76b_01_nva65: vn_armor_pt76b_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_armor_t54b_base;
	class vn_o_armor_t54b_01: vn_armor_t54b_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_armor_t54b_01_nva65: vn_armor_t54b_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_armor_t54b_01_vcmf: vn_armor_t54b_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_armor_ot54_base;
	class vn_o_armor_ot54_01: vn_armor_ot54_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_armor_ot54_01_nva65: vn_armor_ot54_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_armor_ot54_01_vcmf: vn_armor_ot54_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};

//PAVN Helicopters
	class vn_air_mi2_01_base;
	class vn_o_air_mi2_01_01: vn_air_mi2_01_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_01_02: vn_o_air_mi2_01_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_01_03: vn_o_air_mi2_01_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_mi2_02_base;
	class vn_o_air_mi2_02_01: vn_air_mi2_02_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_02_02: vn_o_air_mi2_02_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_mi2_03_01_base;
	class vn_o_air_mi2_03_01: vn_air_mi2_03_01_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_03_02: vn_o_air_mi2_03_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_03_03: vn_o_air_mi2_03_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_03_04: vn_o_air_mi2_03_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_03_05: vn_o_air_mi2_03_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_03_06: vn_o_air_mi2_03_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_mi2_04_01_base;
	class vn_o_air_mi2_04_01: vn_air_mi2_04_01_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_04_02: vn_o_air_mi2_04_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_04_03: vn_o_air_mi2_04_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_04_04: vn_o_air_mi2_04_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_04_05: vn_o_air_mi2_04_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_04_06: vn_o_air_mi2_04_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_air_mi2_05_01_base;
	class vn_o_air_mi2_05_01: vn_air_mi2_05_01_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_05_02: vn_o_air_mi2_05_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_05_03: vn_o_air_mi2_05_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_05_04: vn_o_air_mi2_05_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_05_05: vn_o_air_mi2_05_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};
	class vn_o_air_mi2_05_06: vn_o_air_mi2_05_01
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Helicopters";
	};

//PAVN planes
	class vn_air_mig19_at_base;
	class vn_o_air_mig19_at: vn_air_mig19_at_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig19_bmb_base;
	class vn_o_air_mig19_bmb: vn_air_mig19_bmb_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig19_cap_base;
	class vn_o_air_mig19_cap: vn_air_mig19_cap_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig19_cas_base;
	class vn_o_air_mig19_cas: vn_air_mig19_cas_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig19_gun_base;
	class vn_o_air_mig19_gun: vn_air_mig19_gun_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig19_hbmb_base;
	class vn_o_air_mig19_hbmb: vn_air_mig19_hbmb_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig19_mr_base;
	class vn_o_air_mig19_mr: vn_air_mig19_mr_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_at_base;
	class vn_o_air_mig21_at: vn_air_mig21_at_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_atgm_base;
	class vn_o_air_mig21_atgm: vn_air_mig21_atgm_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_bmb_base;
	class vn_o_air_mig21_bmb: vn_air_mig21_bmb_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_canopy_base;
	class vn_o_air_mig21_canopy: vn_air_mig21_canopy_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_cap_base;
	class vn_o_air_mig21_cap: vn_air_mig21_cap_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_cas_base;
	class vn_o_air_mig21_cas: vn_air_mig21_cas_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_gun_base;
	class vn_o_air_mig21_gun: vn_air_mig21_gun_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_hbmb_base;
	class vn_o_air_mig21_hbmb: vn_air_mig21_hbmb_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_hcas_base;
	class vn_o_air_mig21_hcas: vn_air_mig21_hcas_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class vn_air_mig21_mr_base;
	class vn_o_air_mig21_mr: vn_air_mig21_mr_base
	{
		faction="O_vn_VPAF";
		editorSubcategory="EdSubcat_Planes";
	};

//PAVN turrets
	class vn_static_rpd_high_base;
	class vn_o_vc_static_rpd_high: vn_static_rpd_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_dp28_high_base;
	class vn_o_vc_static_dp28_high: vn_static_dp28_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_dshkm_high_01_base;
	class vn_o_vc_static_dshkm_high_01: vn_static_dshkm_high_01_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_dshkm_low_01_base;
	class vn_o_vc_static_dshkm_low_01: vn_static_dshkm_low_01_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_dshkm_low_02_base;
	class vn_o_vc_static_dshkm_low_02: vn_static_dshkm_low_02_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_d44_base;
	class vn_o_vc_static_d44: vn_static_d44_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_pk_high_base;
	class vn_o_vc_static_pk_high: vn_static_pk_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_pk_low_base;
	class vn_o_vc_static_pk_low: vn_static_pk_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_static_rpd_high: vn_static_rpd_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_static_dshkm_high_01: vn_static_dshkm_high_01_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_static_dshkm_low_01: vn_static_dshkm_low_01_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_static_dshkm_low_02: vn_static_dshkm_low_02_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_at3_base;
	class vn_o_nva_static_at3: vn_static_at3_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_static_d44: vn_static_d44_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_static_pk_high: vn_static_pk_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_static_pk_low: vn_static_pk_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_rpd_high: vn_static_rpd_high_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_dshkm_high_01: vn_static_dshkm_high_01_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_dshkm_low_01: vn_static_dshkm_low_01_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_dshkm_low_02: vn_static_dshkm_low_02_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_d44: vn_static_d44_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_pk_high: vn_static_pk_high_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_pk_low: vn_static_pk_low_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_rpd_high: vn_static_rpd_high_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_dshkm_high_01: vn_static_dshkm_high_01_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_dshkm_low_01: vn_static_dshkm_low_01_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_dshkm_low_02: vn_static_dshkm_low_02_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_at3: vn_static_at3_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_d44: vn_static_d44_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_pk_high: vn_static_pk_high_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_pk_low: vn_static_pk_low_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class StaticWeapon;
	class vn_o_nva_spiderhole_01: StaticWeapon
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_spiderhole_02: StaticWeapon
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_spiderhole_03: StaticWeapon
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_vc_spiderhole_01: StaticWeapon
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_m1910_low_base;
	class vn_o_nva_static_m1910_low_01: vn_static_m1910_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_static_m1910_low_02: vn_static_m1910_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_m1910_low_01: vn_static_m1910_low_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_m1910_low_02: vn_static_m1910_low_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_m1910_low_01: vn_static_m1910_low_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_m1910_low_02: vn_static_m1910_low_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_vc_static_m1910_low_01: vn_static_m1910_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_vc_static_m1910_low_02: vn_static_m1910_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_sgm_low_base;
	class vn_o_nva_static_sgm_low_02: vn_static_sgm_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_sgm_low_02: vn_static_sgm_low_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_sgm_low_02: vn_static_sgm_low_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_static_sgm_low_01: vn_static_sgm_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_sgm_low_01: vn_static_sgm_low_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_sgm_low_01: vn_static_sgm_low_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_vc_static_sgm_low_01: vn_static_sgm_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_vc_static_sgm_low_02: vn_static_sgm_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_type56rr_base;
	class vn_o_nva_static_type56rr: vn_static_type56rr_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_65_static_type56rr: vn_static_type56rr_base
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_nva_navy_static_type56rr: vn_static_type56rr_base
	{
		faction="O_vn_VPN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_vc_static_type56rr: vn_static_type56rr_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_mg42_high_base;
	class vn_o_vc_static_mg42_high: vn_static_mg42_high_base	
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_static_mg42_low_base;
	class vn_o_vc_static_mg42_low: vn_static_mg42_low_base	
	{
		editorSubcategory="EdSubcat_Turrets";
	};

//AUS 66
	class vn_b_men_aus_army_66_base: vn_b_men_sog_base
	{
		faction="B_vn_AUS_66";
		editorSubcategory="EdSubcat_Personnel";
	};
//AUS 68
	class vn_b_men_aus_army_68_base: vn_b_men_aus_army_66_base
	{
		faction="B_AUS";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_aus_army_68_01: vn_b_men_aus_army_68_base
	{
	};
	class vn_b_men_aus_army_68_23: vn_b_men_aus_army_68_01
	{
		author="$STR_VN_AUTHORSAVAGE";
		dlc="VN";
		appId=1227700;
		scope=2;
		scopeCurator=2;
		displayName="$STR_VN_B_MEN_AUS_ARMY_23_DN";
		role="Rifleman";
		cost=600000;
		camouflage=1.6;
		icon="iconManOfficer";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_officer_s"
				};
				speechPlural[]=
				{
					"veh_infantry_officer_p"
				};
			};
		};
		textSingular="$STR_A3_namesound_veh_infantry_officer_s";
		textPlural="$STR_A3_namesound_veh_infantry_officer_p";
		nameSound="veh_infantry_officer_s";
		model="\vn\characters_f_vietnam_03\BLUFOR\uniforms\vn_b_aus_bdu_01";
		uniformClass="vn_b_uniform_aus_01_01";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam_03\blufor\uniforms\data\vn_b_uniform_aus_01_co.paa"
		};
		editorPreview="\vn\editorpreviews_f_vietnam_02\characters\preview_vn_b_men_aus_army_66_23.jpg";
		weapons[]=
		{
			"vn_f1_smg",
			"vn_hp",
			"vn_m19_binocs_grey",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_hp_mag",
			"vn_hp_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag"
		};
		respawnweapons[]=
		{
			"vn_f1_smg",
			"vn_hp",
			"vn_m19_binocs_grey",
			"Throw",
			"Put"
		};
		respawnmagazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_hp_mag",
			"vn_hp_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag"
		};
		backpack="";
		linkedItems[]=
		{
			"vn_b_vest_anzac_10",
			"vn_b_beret_04_01",
			"vn_b_acc_goggles_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
		respawnLinkedItems[]=
		{
			"vn_b_vest_anzac_10",
			"vn_b_beret_04_01",
			"vn_b_acc_goggles_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
	};
	class vn_b_men_aus_army_68_24: vn_b_men_aus_army_68_01
	{
		author="$STR_VN_AUTHORSAVAGE";
		dlc="VN";
		appId=1227700;
		scope=2;
		scopeCurator=2;
		displayName="$STR_VN_B_MEN_AUS_ARMY_24_DN";
		role="Crewman";
		cost=90000;
		camouflage=1.6;
		model="\vn\characters_f_vietnam_03\BLUFOR\uniforms\vn_b_aus_bdu_01";
		uniformClass="vn_b_uniform_aus_01_01";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam_03\blufor\uniforms\data\vn_b_uniform_aus_01_co.paa"
		};
		editorPreview="\vn\editorpreviews_f_vietnam_02\characters\preview_vn_b_men_aus_army_66_24.jpg";
		weapons[]=
		{
			"vn_f1_smg",
			"vn_mx991",
			"vn_m19_binocs_grey",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag"
		};
		respawnweapons[]=
		{
			"vn_f1_smg",
			"vn_mx991",
			"vn_m19_binocs_grey",
			"Throw",
			"Put"
		};
		respawnmagazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag"
		};
		backpack="";
		linkedItems[]=
		{
			"vn_b_vest_anzac_09",
			"vn_b_helmet_t56_02_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
		respawnLinkedItems[]=
		{
			"vn_b_vest_anzac_09",
			"vn_b_helmet_t56_02_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
	};
	class vn_b_men_aus_army_68_25: vn_b_men_aus_army_68_01
	{
		author="$STR_VN_AUTHORSAVAGE";
		dlc="VN";
		appId=1227700;
		scope=2;
		scopeCurator=2;
		displayName="$STR_VN_B_MEN_AUS_ARMY_25_DN";
		role="Crewman";
		cost=90000;
		camouflage=1.6;
		model="\vn\characters_f_vietnam_03\BLUFOR\uniforms\vn_b_aus_bdu_01";
		uniformClass="vn_b_uniform_aus_01_01";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam_03\blufor\uniforms\data\vn_b_uniform_aus_01_co.paa"
		};
		editorPreview="\vn\editorpreviews_f_vietnam_02\characters\preview_vn_b_men_aus_army_66_25.jpg";
		weapons[]=
		{
			"vn_f1_smg",
			"vn_hp",
			"vn_m19_binocs_grey",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_hp_mag",
			"vn_hp_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag"
		};
		respawnweapons[]=
		{
			"vn_f1_smg",
			"vn_hp",
			"vn_m19_binocs_grey",
			"Throw",
			"Put"
		};
		respawnmagazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_hp_mag",
			"vn_hp_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag",
			"vn_f1_smg_t_mag"
		};
		backpack="";
		linkedItems[]=
		{
			"vn_b_vest_anzac_09",
			"vn_b_beret_04_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
		respawnLinkedItems[]=
		{
			"vn_b_vest_anzac_09",
			"vn_b_beret_04_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
	};
	class vn_b_men_aus_army_68_26: vn_b_men_aus_army_68_01
	{
		author="$STR_VN_AUTHORSAVAGE";
		dlc="VN";
		appId=1227700;
		scope=2;
		scopeCurator=2;
		displayName="$STR_VN_B_MEN_AUS_ARMY_26_DN";
		role="Rifleman";
		icon="iconManLeader";
		cost=500000;
		camouflage=1.4;
		canHideBodies=1;
		model="\vn\characters_f_vietnam_03\BLUFOR\uniforms\vn_b_aus_bdu_02";
		uniformClass="vn_b_uniform_aus_02_01";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam_03\blufor\uniforms\data\vn_b_uniform_aus_01_co.paa"
		};
		editorPreview="\vn\editorpreviews_f_vietnam_02\characters\preview_vn_b_men_aus_army_66_26.jpg";
		weapons[]=
		{
			"vn_m16",
			"vn_mx991",
			"vn_m19_binocs_grn",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_m16_20_t_mag",
			"vn_m16_20_t_mag",
			"vn_m16_20_t_mag",
			"vn_m16_20_t_mag"
		};
		respawnweapons[]=
		{
			"vn_m16",
			"vn_mx991",
			"vn_m19_binocs_grn",
			"Throw",
			"Put"
		};
		respawnmagazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_m16_20_t_mag",
			"vn_m16_20_t_mag",
			"vn_m16_20_t_mag",
			"vn_m16_20_t_mag"
		};
		backpack="";
		linkedItems[]=
		{
			"vn_b_vest_anzac_09",
			"vn_b_boonie_06_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
		respawnLinkedItems[]=
		{
			"vn_b_vest_anzac_09",
			"vn_b_boonie_06_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
	};
	class vn_b_men_aus_army_68_27: vn_b_men_aus_army_68_01
	{
		author="$STR_VN_AUTHORSAVAGE";
		dlc="VN";
		appId=1227700;
		scope=2;
		scopeCurator=2;
		displayName="$STR_VN_B_MEN_AUS_ARMY_27_DN";
		role="Rifleman";
		cost=100000;
		canHideBodies=0;
		detectSkill=12;
		canDeactivateMines=0;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_s"
				};
				speechPlural[]=
				{
					"veh_infantry_p"
				};
			};
		};
		textSingular="$STR_A3_namesound_veh_infantry_s";
		textPlural="$STR_A3_namesound_veh_infantry_p";
		nameSound="veh_infantry_s";
		maxSpeed=24;
		maxTurnAngularVelocity=3;
		lyingLimitSpeedHiding=0.80000001;
		crouchProbabilityHiding=0.80000001;
		lyingLimitSpeedCombat=1.8;
		crouchProbabilityCombat=0.40000001;
		crouchProbabilityEngage=0.75;
		lyingLimitSpeedStealth=2;
		model="\vn\characters_f_vietnam_03\BLUFOR\uniforms\vn_b_aus_bdu_01";
		uniformClass="vn_b_uniform_aus_01_01";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam_03\blufor\uniforms\data\vn_b_uniform_aus_01_co.paa"
		};
		editorPreview="\vn\editorpreviews_f_vietnam_02\characters\preview_vn_b_men_aus_army_66_27.jpg";
		weapons[]=
		{
			"vn_l1a1_01",
			"vn_mx991",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_m18_yellow_mag",
			"vn_m18_red_mag",
			"vn_l1a1_20_t_mag",
			"vn_l1a1_20_t_mag",
			"vn_l1a1_20_t_mag",
			"vn_l1a1_20_t_mag"
		};
		respawnweapons[]=
		{
			"vn_l1a1_01",
			"vn_mx991",
			"Throw",
			"Put"
		};
		respawnmagazines[]=
		{
			"vn_m61_grenade_mag",
			"vn_m61_grenade_mag",
			"vn_m18_yellow_mag",
			"vn_m18_red_mag",
			"vn_l1a1_20_t_mag",
			"vn_l1a1_20_t_mag",
			"vn_l1a1_20_t_mag",
			"vn_l1a1_20_t_mag"
		};
		backpack="";
		linkedItems[]=
		{
			"vn_b_vest_anzac_09",
			"vn_b_boonie_07_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
		respawnLinkedItems[]=
		{
			"vn_b_vest_anzac_09",
			"vn_b_boonie_07_01",
			"vn_b_item_map",
			"vn_b_item_compass",
			"vn_b_item_watch",
			"vn_b_item_radio_urc10"
		};
	};
	
	class vn_wheeled_lr2a_01_base;
	class vn_wheeled_lr2a_02_base;
	class vn_wheeled_lr2a_03_base;
	class vn_wheeled_lr2a_mg_01_base;
	class vn_wheeled_lr2a_mg_02_base;
	class vn_wheeled_lr2a_mg_03_base;
	class vn_b_armor_m113_01_aus_army: vn_armor_m113_01_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m125_01_aus_army: vn_armor_m125_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m577_02_aus_army: vn_armor_m577_02_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m577_01_aus_army: vn_armor_m577_01_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_aus_army_static_m101_02: vn_static_m101_02_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_aus_army_static_mortar_m2: vn_static_mortar_m2_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_aus_army_static_mortar_m29: vn_static_mortar_m29_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_wheeled_lr2a_01_aus_army: vn_wheeled_lr2a_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_02_aus_army: vn_wheeled_lr2a_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_03_aus_army: vn_wheeled_lr2a_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_mg_01_aus_army: vn_wheeled_lr2a_mg_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_mg_02_aus_army: vn_wheeled_lr2a_mg_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_mg_03_aus_army: vn_wheeled_lr2a_mg_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_01_aus_army: vn_wheeled_m54_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_02_aus_army: vn_wheeled_m54_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_03_aus_army: vn_wheeled_m54_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_ammo_aus_army: vn_wheeled_m54_ammo_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_fuel_aus_army: vn_wheeled_m54_fuel_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_repair_aus_army: vn_wheeled_m54_repair_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_01_aus_army: vn_wheeled_m151_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_02_aus_army: vn_wheeled_m151_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_02_aus_army: vn_wheeled_m151_mg_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_03_aus_army: vn_wheeled_m151_mg_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_06_aus_army: vn_wheeled_m151_mg_06_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_aus_army_static_m101_01: vn_static_m101_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_aus_army_static_m2_high: vn_static_m2_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_aus_army_static_m2_low: vn_static_m2_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_aus_army_static_m40a1rr: vn_static_m40a1rr_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_aus_army_static_m60_high: vn_static_m60_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_aus_army_static_m60_low: vn_static_m60_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};

//AUS 70
	class vn_b_men_aus_army_70_base: vn_b_men_aus_army_66_base
	{
		faction="B_vn_AUS_70";
		editorSubcategory="EdSubcat_Personnel";
	};
//AUS SAS
	class vn_b_men_aus_sas_66_base: vn_b_men_sog_base
	{
		faction="B_vn_AUS_66";
	};
	class vn_b_men_aus_sas_70_base: vn_b_men_aus_sas_66_base
	{
		faction="B_vn_AUS_70";
	};
//NZ 66
	class vn_b_men_nz_army_66_base: vn_b_men_aus_army_66_base
	{
		faction="B_vn_NZ_66";
		editorSubcategory="EdSubcat_Personnel";
	};
//NZ 68
	class vn_b_men_nz_army_68_base: vn_b_men_nz_army_66_base
	{
		faction="B_NZ";
		editorSubcategory="EdSubcat_Personnel";
	};
	
//NZ 70
	class vn_b_men_nz_army_70_base: vn_b_men_nz_army_66_base
	{
		faction="B_vn_NZ_70";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_nz_army_static_m101_02: vn_static_m101_02_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_nz_army_static_mortar_m2: vn_static_mortar_m2_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_nz_army_static_mortar_m29: vn_static_mortar_m29_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_wheeled_lr2a_01_nz_army: vn_wheeled_lr2a_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_02_nz_army: vn_wheeled_lr2a_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_03_nz_army: vn_wheeled_lr2a_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_mg_01_nz_army: vn_wheeled_lr2a_mg_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_mg_02_nz_army: vn_wheeled_lr2a_mg_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_lr2a_mg_03_nz_army: vn_wheeled_lr2a_mg_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_01_nz_army: vn_wheeled_m54_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_02_nz_army: vn_wheeled_m54_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_03_nz_army: vn_wheeled_m54_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_ammo_nz_army: vn_wheeled_m54_ammo_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_fuel_nz_army: vn_wheeled_m54_fuel_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_repair_nz_army: vn_wheeled_m54_repair_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_01_nz_army: vn_wheeled_m151_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_02_nz_army: vn_wheeled_m151_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_02_nz_army: vn_wheeled_m151_mg_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_03_nz_army: vn_wheeled_m151_mg_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_06_nz_army: vn_wheeled_m151_mg_06_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_nz_army_static_m101_01: vn_static_m101_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_nz_army_static_m2_high: vn_static_m2_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_nz_army_static_m2_low: vn_static_m2_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_nz_army_static_m40a1rr: vn_static_m40a1rr_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_nz_army_static_m60_high: vn_static_m60_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_nz_army_static_m60_low: vn_static_m60_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
//NZ SAS
	class vn_b_men_nz_sas_66_base: vn_b_men_aus_sas_66_base
	{
		faction="B_vn_NZ_66";
	};
	class vn_b_men_nz_sas_70_base: vn_b_men_nz_sas_66_base
	{
		faction="B_vn_NZ_70";
	};

//ROK Soldiers

	class vn_b_men_rok_army_68_base: vn_b_men_army_base	
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_rok_army_65_base: vn_b_men_rok_army_68_base	
	{
		faction="B_vn_ROK_army_65";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_rok_marine_65_base: vn_b_men_rok_army_68_base	
	{
		faction="B_vn_ROK_marines_65";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_b_men_rok_marine_68_base: vn_b_men_rok_army_68_base	
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Personnel";
	};

//ROK Artillery
	class vn_b_rok_army_static_m101_02: vn_static_m101_02_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_rok_army_static_mortar_m2: vn_static_mortar_m2_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_rok_army_static_mortar_m29: vn_static_mortar_m29_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};

//ROK Marines Artillery
	class vn_b_rok_marines_static_m101_02: vn_static_m101_02_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_rok_marines_static_mortar_m2: vn_static_mortar_m2_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_b_rok_marines_static_mortar_m29: vn_static_mortar_m29_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Artillery";
	};

//ROK APC
	class vn_b_armor_m113_01_rok_army: vn_armor_m113_01_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m113_acav_01_rok_army: vn_armor_m113_acav_m2_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m113_acav_02_rok_army: vn_armor_m113_acav_m1919_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m113_acav_03_rok_army: vn_armor_m113_acav_m60_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m113_acav_04_rok_army: vn_armor_m113_acav_m134_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m113_acav_05_rok_army: vn_armor_m113_acav_mk18_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m113_acav_06_rok_army: vn_armor_m113_acav_m40_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m125_01_rok_army: vn_armor_m125_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m577_01_rok_army: vn_armor_m577_01_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_b_armor_m577_02_rok_army: vn_armor_m577_02_base
    {
		editorSubcategory="EdSubcat_APCs";
	};

//ROK Cars
	class vn_b_wheeled_m54_01_rok_army: vn_wheeled_m54_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_02_rok_army: vn_wheeled_m54_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_03_rok_army: vn_wheeled_m54_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_ammo_rok_army: vn_wheeled_m54_ammo_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_fuel_rok_army: vn_wheeled_m54_fuel_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_repair_rok_army: vn_wheeled_m54_repair_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_01_rok_army: vn_wheeled_m151_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_02_rok_army: vn_wheeled_m151_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_wheeled_m151_mg_01_base;
	class vn_b_wheeled_m151_mg_01_rok_army: vn_wheeled_m151_mg_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_02_rok_army: vn_wheeled_m151_mg_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_06_rok_army: vn_wheeled_m151_mg_06_base
    {
		editorSubcategory="EdSubcat_Cars";
	};

//ROK Marines Cars
	class vn_b_wheeled_m151_01_rok_marines: vn_wheeled_m151_01_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_02_rok_marines: vn_wheeled_m151_02_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_01_rok_marines: vn_wheeled_m151_mg_01_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_02_rok_marines: vn_wheeled_m151_mg_02_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m151_mg_06_rok_marines: vn_wheeled_m151_mg_06_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_01_rok_marines: vn_wheeled_m54_01_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_02_rok_marines: vn_wheeled_m54_02_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_03_rok_marines: vn_wheeled_m54_03_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_repair_rok_marines: vn_wheeled_m54_ammo_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_fuel_rok_marines: vn_wheeled_m54_fuel_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_b_wheeled_m54_ammo_rok_marines: vn_wheeled_m54_repair_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Cars";
	};

//ROK Turrets
	class vn_b_rok_army_static_m101_01: vn_static_m101_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_army_static_m1919a4_high: vn_static_m1919a4_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_army_static_m1919a4_low: vn_static_m1919a4_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_army_static_m2_high: vn_static_m2_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_army_static_m2_low: vn_static_m2_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_army_static_m40a1rr: vn_static_m40a1rr_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_army_static_m60_high: vn_static_m60_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_army_static_m60_low: vn_static_m60_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};

//ROK Marine Turrets
	class vn_b_rok_marines_static_m101_01: vn_static_m101_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_marines_static_m1919a4_high: vn_static_m1919a4_high_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_marines_static_m1919a4_low: vn_static_m1919a4_low_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_marines_static_m2_high: vn_static_m2_high_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_marines_static_m2_low: vn_static_m2_low_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_marines_static_m40a1rr: vn_static_m40a1rr_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_marines_static_m60_high: vn_static_m60_high_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_b_rok_marines_static_m60_low: vn_static_m60_low_base
	{
		faction="B_vn_ROK_marines_68";
		editorSubcategory="EdSubcat_Turrets";
	};

//ARVN soldiers

	class SoldierGB;
	class vn_i_men_army_base: SoldierGB
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_i_men_ranger_base: vn_i_men_army_base
	{
		editorSubcategory="EdSubcat_Personnel_Ranger";
	};
	class vn_i_men_army_medic_base;
	class vn_i_men_ranger_medic_base: vn_i_men_army_medic_base
	{
	};
	class vn_i_men_sf_base: vn_i_men_ranger_base
	{
		faction="I_vn_ARVN_sf";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_i_men_sf_medic_base: vn_i_men_ranger_medic_base
	{
	};
	class vn_i_men_marine_base: vn_i_men_army_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Personnel";
	};

//RVNAF
	class vn_i_men_aircrew_base;
	class vn_i_men_aircrew_01: vn_i_men_aircrew_base
	{
		editorSubcategory="vn_i_men_rvnaf";
	};
	class vn_i_men_aircrew_02: vn_i_men_aircrew_01
	{
	};
	class vn_i_men_aircrew_03: vn_i_men_aircrew_01
	{
	};
	class vn_i_men_aircrew_04: vn_i_men_aircrew_03
	{
	};
	class vn_i_men_aircrew_05: vn_i_men_aircrew_01
	{
	};
	class vn_i_men_aircrew_06: vn_i_men_aircrew_05
	{
	};
	class vn_i_men_aircrew_07: vn_i_men_aircrew_05
	{
	};
	class vn_i_men_aircrew_08: vn_i_men_aircrew_05
	{
	};
	class vn_i_men_jetpilot_01: vn_i_men_aircrew_base
	{
		editorSubcategory="vn_i_men_rvnaf";
	};
	class vn_i_men_jetpilot_02: vn_i_men_jetpilot_01
	{
	};
	

//ARVN Anti-Air
	class vn_i_static_m45: vn_static_m45_base
	{
		editorSubcategory="EdSubcat_AAs";
	};
//ARVN Artillery
	class vn_i_static_m101_02: vn_static_m101_02_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_i_static_mortar_m29: vn_static_mortar_m29_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_i_static_mortar_m2: vn_static_mortar_m2_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
//ARVN Marines Artillery
	class vn_i_marines_static_m101_02: vn_static_m101_02_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_i_marines_static_mortar_m2: vn_static_mortar_m2_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_i_marines_static_mortar_m29: vn_static_mortar_m29_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Artillery";
	};

//ARVN APCs
	class vn_i_armor_m113_01: vn_armor_m113_01_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_01: vn_armor_m113_acav_m2_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_02: vn_armor_m113_acav_m1919_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_03: vn_armor_m113_acav_m60_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_04: vn_armor_m113_acav_m134_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_05: vn_armor_m113_acav_mk18_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_06: vn_armor_m113_acav_m40_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m125_01: vn_armor_m125_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m132_01: vn_armor_m132_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m577_01: vn_armor_m577_01_base
	{
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m577_02: vn_armor_m577_02_base
	{
		editorSubcategory="EdSubcat_APCs";
	};

//ARVN Cars
	class vn_i_wheeled_m151_01: vn_wheeled_m151_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_02: vn_wheeled_m151_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_01: vn_wheeled_m151_mg_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_06: vn_wheeled_m151_mg_06_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_01: vn_wheeled_m54_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_02: vn_wheeled_m54_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_03: vn_wheeled_m54_03_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_ammo: vn_wheeled_m54_ammo_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_fuel: vn_wheeled_m54_fuel_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_repair: vn_wheeled_m54_repair_base
	{
		editorSubcategory="EdSubcat_Cars";
	};

	class vn_i_wheeled_m151_01_marines: vn_wheeled_m151_01_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_02_marines: vn_wheeled_m151_02_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_01_marines: vn_wheeled_m151_mg_01_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_02_marines: vn_wheeled_m151_mg_02_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_05_marines: vn_wheeled_m151_mg_05_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_06_marines: vn_wheeled_m151_mg_06_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_01_marines: vn_wheeled_m54_01_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_02_marines: vn_wheeled_m54_02_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_03_marines: vn_wheeled_m54_03_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_ammo_marines: vn_wheeled_m54_ammo_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_fuel_marines: vn_wheeled_m54_fuel_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_repair_marines: vn_wheeled_m54_repair_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Cars";
	};
//VNAF Helicopters
	class vn_air_ch34_m1919_base;
	class vn_i_air_ch34_01_02: vn_air_ch34_m60_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_ch34_02_01: vn_air_ch34_m1919_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_ch34_02_02: vn_air_ch34_m1919_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_uh1c_01_01: vn_air_uh1c_01_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_uh1c_02_01: vn_air_uh1c_02_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_uh1c_07_01: vn_air_uh1c_07_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_uh1d_01_01: vn_air_uh1d_01_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_uh1d_02_01: vn_air_uh1d_02_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_ch47_01_01: vn_air_ch47_01_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_ch47_02_01: vn_air_ch47_02_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_ch47_03_01: vn_air_ch47_03_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
	class vn_i_air_ch47_04_01: vn_air_ch47_04_base
	{
		editorSubcategory="EdSubcat_Helicopters_RVNAF";
	};
//ARVN Tanks
	class vn_i_armor_m41_01_base;
	class vn_i_armor_m41_01: vn_i_armor_m41_01_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_i_armor_type63_01: vn_armor_type63_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_i_armor_m48_01_01: vn_armor_m48a3_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_i_armor_m67_01_01: vn_armor_m67a2_base
	{
		editorSubcategory="EdSubcat_Tanks";
	};

//ARVN Turrets
	class vn_i_static_m101_01: vn_static_m101_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_static_m2_high: vn_static_m2_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_static_m2_low: vn_static_m2_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_static_m40a1rr: vn_static_m40a1rr_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_static_m1919a6: vn_static_m1919a6_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_static_m1919a4_high: vn_static_m1919a4_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_static_m1919a4_low: vn_static_m1919a4_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_static_m60_high: vn_static_m60_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_static_m60_low: vn_static_m60_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_static_tow: vn_static_tow_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
//ARVN Marines Turrets
	class vn_i_marines_static_m101_01: vn_static_m101_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_marines_static_m1919a4_high: vn_static_m1919a4_high_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_marines_static_m1919a4_low: vn_static_m1919a4_low_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_marines_static_m2_high: vn_static_m2_high_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_marines_static_m2_low: vn_static_m2_low_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_marines_static_m40a1rr: vn_static_m40a1rr_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_marines_static_m60_high: vn_static_m60_high_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_marines_static_m60_low: vn_static_m60_low_base
	{
		faction="I_vn_ARVN_marines";
		editorSubcategory="EdSubcat_Turrets";
	};

//FANK 1971 soldiers
	class vn_i_men_fank_71_base: vn_i_men_army_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_i_men_fank_70_base: vn_i_men_fank_71_base
	{
		faction="I_CAM";
		editorSubcategory="EdSubcat_Personnel";
	};
//AAK 1970
	class vn_i_men_aircrew_09: vn_i_men_aircrew_01
	{
		editorSubcategory="vn_i_men_avnk";
	};

//FANK 1971 Anti-Air

	class vn_i_fank_71_static_l70mk2: vn_static_l70mk2_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_i_fank_71_static_m45: vn_static_m45_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_AAs";
	};
//FANK 1971 APCS
	class vn_i_armor_m113_01_fank_71: vn_armor_m113_01_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_01_fank_71: vn_armor_m113_acav_m2_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_02_fank_71: vn_armor_m113_acav_m1919_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_03_fank_71: vn_armor_m113_acav_m60_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_i_armor_m113_acav_06_fank_71: vn_armor_m113_acav_m40_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_APCs";
	};
//FANK 1971 artillery
	class vn_i_fank_71_static_mortar_m2: vn_static_mortar_m2_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_i_fank_71_static_mortar_m29: vn_static_mortar_m29_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Artillery";
	};

//FANK 1971 boats
	class vn_i_boat_12_01_fank_71: vn_boat_12_turret_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_i_boat_12_02_fank_71: vn_boat_12_turret_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_i_boat_12_03_fank_71: vn_boat_12_turret_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_i_boat_12_04_fank_71: vn_boat_12_turret_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Boats";
	};
//FANK 1971 cars
	class vn_i_wheeled_lr2a_mg_01_fank_71: vn_wheeled_lr2a_mg_01_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_01_fank_71: vn_wheeled_m151_01_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_02_fank_71: vn_wheeled_m151_02_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_01_fank_71: vn_wheeled_m151_mg_01_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_04_fank_71: vn_wheeled_m151_mg_04_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Cars";
	};
//FANK 1970
	class vn_i_fank_70_static_dshkm_high_02: vn_static_dshkm_high_02_base
	{
		editorSubCategory="EdSubcat_AAs";
	};
	class vn_i_fank_70_static_l60mk3: vn_static_l60mk3_base
	{
		editorSubCategory="EdSubcat_AAs";
	};
	class vn_i_fank_70_static_sgm_high_01: vn_static_sgm_high_base
	{
		editorSubCategory="EdSubcat_AAs";
	};
	class vn_i_fank_70_static_zgu1_01: vn_static_zgu1_base
	{
		editorSubCategory="EdSubcat_AAs";
	};
	class vn_i_fank_70_static_mortar_type53: vn_static_mortar_type53_base
	{
		editorSubCategory="EdSubcat_Artillery";
	};
	class vn_i_fank_70_static_mortar_type63: vn_static_mortar_type63_base
	{
		editorSubCategory="EdSubcat_Artillery";
	};
	class vn_i_boat_01_00_fank_70: vn_o_boat_01_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_01_01_fank_70: vn_o_boat_01_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_01_02_fank_70: vn_o_boat_01_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_01_03_fank_70: vn_o_boat_01_cargo_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_01_04_fank_70: vn_o_boat_01_cargo_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_00_fank_70: vn_o_boat_02_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_01_fank_70: vn_o_boat_02_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_02_fank_70: vn_o_boat_02_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_03_fank_70: vn_o_boat_02_cargo_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_04_fank_70: vn_o_boat_02_cargo_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_01_mg_00_fank_70: vn_o_boat_01_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_01_mg_01_fank_70: vn_o_boat_01_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_01_mg_02_fank_70: vn_o_boat_01_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_01_mg_03_fank_70: vn_o_boat_01_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_01_mg_04_fank_70: vn_o_boat_01_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_mg_00_fank_70: vn_o_boat_02_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_mg_01_fank_70: vn_o_boat_02_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_mg_02_fank_70: vn_o_boat_02_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_mg_03_fank_70: vn_o_boat_02_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_boat_02_mg_04_fank_70: vn_o_boat_02_mg_base
    {
		editorSubCategory="EdSubcat_Boats";
	};
	class vn_i_wheeled_btr40_mg_02_fank_70: vn_wheeled_btr40_mg_02_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_btr40_mg_01_fank_70: vn_wheeled_btr40_mg_01_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_btr40_mg_04_fank_70: vn_wheeled_btr40_mg_04_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_btr40_02_fank_70: vn_wheeled_btr40_ambulance_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_z157_ammo_fank_70: vn_wheeled_z157_ammo_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_z157_mg_01_fank_70: vn_wheeled_z157_mg_01_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_z157_fuel_fank_70: vn_wheeled_z157_fuel_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_z157_repair_fank_70: vn_wheeled_z157_repair_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_btr40_01_fank_70: vn_wheeled_btr40_01_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_z157_01_fank_70: vn_wheeled_z157_01_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_z157_02_fank_70: vn_wheeled_z157_02_base
    {
		editorSubCategory="EdSubcat_Cars";
	};
	class vn_i_air_uh1d_01_02: vn_air_uh1d_01_base
	{
		editorSubCategory="vn_i_helicopters_avnk";
	};
	class vn_i_air_uh1d_02_02: vn_air_uh1d_02_base
	{
		editorSubCategory="vn_i_helicopters_avnk";
	};
	class vn_i_fank_70_static_dp28_high: vn_static_dp28_high_base
	{
		editorSubCategory="EdSubcat_Turrets";
	};
	class vn_i_fank_70_static_dshkm_high_01: vn_static_dshkm_high_01_base
	{
		editorSubCategory="EdSubcat_Turrets";
	};
	class vn_i_fank_70_static_dshkm_low_02: vn_static_dshkm_low_02_base
	{
		editorSubCategory="EdSubcat_Turrets";
	};
	class vn_i_fank_70_static_dshkm_low_01: vn_static_dshkm_low_01_base
	{
		editorSubCategory="EdSubcat_Turrets";
	};
	class vn_i_fank_70_static_rpd_high: vn_static_rpd_high_base
	{
		editorSubCategory="EdSubcat_Turrets";
	};
	class vn_i_fank_70_static_sgm_low_02: vn_static_sgm_low_base
	{
		editorSubCategory="EdSubcat_Turrets";
	};
	class vn_i_fank_70_static_sgm_low_01: vn_static_sgm_low_base
	{
		editorSubCategory="EdSubcat_Turrets";
	};
	class vn_i_fank_70_static_type56rr: vn_static_type56rr_base
	{
		editorSubCategory="EdSubcat_Turrets";
	};
//FANK 1971 turrets
	class vn_i_fank_71_static_m2_high: vn_static_m2_high_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_fank_71_static_m2_low: vn_static_m2_low_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Turrets";
	};	
	class vn_i_fank_71_static_m40a1rr: vn_static_m40a1rr_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Turrets";
	};	
	class vn_i_fank_71_static_m60_high: vn_static_m60_high_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Turrets";
	};	
	class vn_i_fank_71_static_m60_low: vn_static_m60_low_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Turrets";
	};	
	class vn_i_fank_71_static_m1919a4_high: vn_static_m1919a4_high_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Turrets";
	};	
	class vn_i_fank_71_static_m1919a4_low: vn_static_m1919a4_low_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Turrets";
	};	
	class vn_i_fank_71_static_m1919a6: vn_static_m1919a6_base
	{
		faction="I_vn_CAM_71";
		editorSubcategory="EdSubcat_Turrets";
	};

//Khmer Rouge
	class vn_o_men_kr_70_base: vn_o_men_nva_base
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_men_kr_75_base: vn_o_men_kr_70_base
	{
		faction="O_vn_CAM_75";
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_kr_static_dshkm_high_02: vn_static_dshkm_high_02_base
    {
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_kr_static_m1910_high_01: vn_static_m1910_high_base
    {
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_kr_static_sgm_high_01: vn_static_sgm_high_base
    {
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_kr_static_zgu1_01: vn_static_zgu1_base
    {
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_armor_m113_01_kr: vn_armor_m113_01_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m113_acav_01_kr: vn_armor_m113_acav_m2_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m113_acav_02_kr: vn_armor_m113_acav_m1919_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m113_acav_03_kr: vn_armor_m113_acav_m60_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_armor_m113_acav_06_kr: vn_armor_m113_acav_m40_base
    {
		editorSubcategory="EdSubcat_APCs";
	};
	class vn_o_kr_static_h12: vn_static_h12_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_kr_static_mortar_type53: vn_static_mortar_type53_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_kr_static_mortar_type63: vn_static_mortar_type63_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_boat_01_00_kr: vn_o_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_01_kr: vn_o_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_02_kr: vn_o_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_03_kr: vn_o_boat_01_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_04_kr: vn_o_boat_01_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_00_kr: vn_o_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_01_kr: vn_o_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_02_kr: vn_o_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_03_kr: vn_o_boat_02_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_04_kr: vn_o_boat_02_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_00_kr: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_01_kr: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_02_kr: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_03_kr: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_04_kr: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_00_kr: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_01_kr: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_02_kr: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_03_kr: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_04_kr: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_07_01_kr: vn_o_boat_07_trans_base
	{
		crew="vn_o_men_kr_70_05";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_07_02_kr: vn_o_boat_07_cargo_base
	{
		crew="vn_o_men_kr_70_05";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_08_01_kr: vn_o_boat_08_trans_base
	{
		crew="vn_o_men_kr_70_05";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_08_02_kr: vn_o_boat_08_cargo_base
	{
		crew="vn_o_men_kr_70_05";
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_car_01_01_kr: vn_wheeled_car_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_car_02_01_kr: vn_wheeled_car_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_car_03_01_kr: vn_wheeled_car_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_car_04_01_kr: vn_wheeled_car_04_unarmed_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_car_04_mg_01_kr: vn_wheeled_car_04_mg_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_01_kr: vn_wheeled_btr40_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_02_kr: vn_wheeled_btr40_ambulance_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_01_kr: vn_wheeled_btr40_mg_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_02_kr: vn_wheeled_btr40_mg_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_04_kr: vn_wheeled_btr40_mg_04_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_01_kr: vn_wheeled_z157_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_02_kr: vn_wheeled_z157_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_ammo_kr: vn_wheeled_z157_ammo_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_fuel_kr: vn_wheeled_z157_fuel_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_repair_kr: vn_wheeled_z157_repair_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_mg_01_kr: vn_wheeled_z157_mg_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_kr_static_dp28_high: vn_static_dp28_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_kr_static_dshkm_high_01: vn_static_dshkm_high_01_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_kr_static_dshkm_low_02: vn_static_dshkm_low_02_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_kr_static_dshkm_low_01: vn_static_dshkm_low_01_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_kr_static_m1910_low_02: vn_o_nva_static_m1910_low_02
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_kr_static_m1910_low_01: vn_o_nva_static_m1910_low_01
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_kr_static_rpd_high: vn_static_rpd_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_kr_static_sgm_low_02: vn_static_sgm_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_kr_static_sgm_low_01: vn_static_sgm_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_kr_static_type56rr: vn_static_type56rr_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};

//RLA
	class vn_i_men_rla_base: vn_i_men_army_base
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_i_rla_static_m101_02: vn_static_m101_02_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_i_rla_static_mortar_m2: vn_static_mortar_m2_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_i_rla_static_mortar_m29: vn_static_mortar_m29_base
	{
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_i_wheeled_m54_03_rla: vn_wheeled_m54_03_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_01_rla: vn_wheeled_m151_mg_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_02_rla: vn_wheeled_m151_mg_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_mg_06_rla: vn_wheeled_m151_mg_06_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_01_rla: vn_wheeled_m151_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m151_02_rla: vn_wheeled_m151_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_repair_rla: vn_wheeled_m54_repair_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_fuel_rla: vn_wheeled_m54_fuel_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_ammo_rla: vn_wheeled_m54_ammo_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_01_rla: vn_wheeled_m54_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_wheeled_m54_02_rla: vn_wheeled_m54_02_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_i_rla_static_m101_01: vn_static_m101_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_rla_static_m1919a4_high: vn_static_m1919a4_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_rla_static_m1919a4_low: vn_static_m1919a4_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_rla_static_m2_high: vn_static_m2_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_rla_static_m2_low: vn_static_m2_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_rla_static_m40a1rr: vn_static_m40a1rr_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_rla_static_m60_high: vn_static_m60_high_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_i_rla_static_m60_low: vn_static_m60_low_base
	{
		editorSubcategory="EdSubcat_Turrets";
	};

//Pathet Lao
	class vn_o_men_pl_base: vn_o_men_nva_base
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_o_pl_static_dshkm_high_02: vn_static_dshkm_high_02_base
    {
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_pl_static_sgm_high_01: vn_static_sgm_high_base
    {
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_pl_static_zgu1_01: vn_static_zgu1_base
    {
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_pl_static_zpu4: vn_static_zpu4_base
    {
		editorSubcategory="EdSubcat_AAs";
	};
	class vn_o_pl_static_d44_01: vn_static_d44_01_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_pl_static_mortar_type53: vn_static_mortar_type53_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_pl_static_mortar_type63: vn_static_mortar_type63_base
    {
		editorSubcategory="EdSubcat_Artillery";
	};
	class vn_o_boat_01_00_pl: vn_o_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_01_pl: vn_o_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_02_pl: vn_o_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_03_pl: vn_o_boat_01_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_04_pl: vn_o_boat_01_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_00_pl: vn_o_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_01_pl: vn_o_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_02_pl: vn_o_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_03_pl: vn_o_boat_02_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_04_pl: vn_o_boat_02_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_00_pl: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_01_pl: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_02_pl: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_03_pl: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_01_mg_04_pl: vn_o_boat_01_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_00_pl: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_01_pl: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_02_pl: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_03_pl: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_boat_02_mg_04_pl: vn_o_boat_02_mg_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_o_bicycle_01_pl: vn_bicycle_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_bicycle_02_pl: vn_bicycle_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_01_pl: vn_wheeled_btr40_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_02_pl: vn_wheeled_btr40_ambulance_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_01_pl: vn_wheeled_btr40_mg_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_02_pl: vn_wheeled_btr40_mg_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_03_pl: vn_wheeled_btr40_mg_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_04_pl: vn_wheeled_btr40_mg_04_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_05_pl: vn_wheeled_btr40_mg_05_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_btr40_mg_06_pl: vn_wheeled_btr40_mg_06_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_01_pl: vn_wheeled_z157_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_02_pl: vn_wheeled_z157_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_ammo_pl: vn_wheeled_z157_ammo_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_fuel_pl: vn_wheeled_z157_fuel_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_repair_pl: vn_wheeled_z157_repair_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_mg_01_pl: vn_wheeled_z157_mg_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_wheeled_z157_mg_02_pl: vn_wheeled_z157_mg_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_o_armor_pt76a_01_pl: vn_armor_pt76a_base
    {
		editorSubcategory="EdSubcat_Tanks";
	};
	class vn_o_pl_static_at3: vn_static_at3_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_d44: vn_static_d44_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_dshkm_high_01: vn_static_dshkm_high_01_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_dshkm_low_02: vn_static_dshkm_low_02_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_dshkm_low_01: vn_static_dshkm_low_01_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_mg42_high: vn_static_mg42_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_mg42_low: vn_static_mg42_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_rpd_high: vn_static_rpd_high_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_sgm_low_02: vn_static_sgm_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_sgm_low_01: vn_static_sgm_low_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_spiderhole_01: vn_o_vc_spiderhole_01
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_vc_spiderhole_02;
	class vn_o_pl_spiderhole_02: vn_o_vc_spiderhole_02
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_vc_spiderhole_03;
	class vn_o_pl_spiderhole_03: vn_o_vc_spiderhole_03
    {
		editorSubcategory="EdSubcat_Turrets";
	};
	class vn_o_pl_static_type56rr: vn_static_type56rr_base
    {
		editorSubcategory="EdSubcat_Turrets";
	};

//Civ
	class Civilian_F;
	class vn_c_men_base: Civilian_F
	{
		editorSubcategory="EdSubcat_Personnel";
	};
	class vn_c_boat_01_base: vn_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_02_base: vn_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_01_cargo_base: vn_boat_01_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_02_cargo_base: vn_boat_02_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_01_00: vn_c_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_01_01: vn_c_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_01_02: vn_c_boat_01_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_01_03: vn_c_boat_01_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_01_04: vn_c_boat_01_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_02_00: vn_c_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_02_01: vn_c_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_02_02: vn_c_boat_02_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_02_03: vn_c_boat_02_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_02_04: vn_c_boat_02_cargo_base
    {
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_07_trans_base;
	class vn_c_boat_07_01: vn_c_boat_07_trans_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_07_cargo_base;
	class vn_c_boat_07_02: vn_c_boat_07_cargo_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_08_trans_base;
	class vn_c_boat_08_01: vn_c_boat_08_trans_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_boat_08_cargo_base;
	class vn_c_boat_08_02: vn_c_boat_08_cargo_base
	{
		editorSubcategory="EdSubcat_Boats";
	};
	class vn_c_bicycle_01: vn_bicycle_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_c_bicycle_02: vn_bicycle_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_c_car_01_01: vn_wheeled_car_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_c_car_01_02: vn_wheeled_car_01_base
	{
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_c_car_02_01: vn_wheeled_car_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_c_car_03_01: vn_wheeled_car_03_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_c_car_04_01: vn_wheeled_car_04_unarmed_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_c_wheeled_m151_01: vn_wheeled_m151_01_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
	class vn_c_wheeled_m151_02: vn_wheeled_m151_02_base
    {
		editorSubcategory="EdSubcat_Cars";
	};
};

class CfgGesturesMale
{
	class Default;
	class GestureReloadBase;
	class States
	{
		class vn_l1a1_gl_reloadmagazine_prone: GestureReloadBase
		{
			speed="-(180/30)";
		};
	};
};