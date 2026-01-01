class CfgPatches
{
	class ax_aegis_jca_ia_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"Weapons_F_JCA_IA"
		};
		author="Axle";
		//skipwhenmissingdependencies=1;
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class Single;
class Burst;
class FullAuto;
class single_close_optics1;
class single_medium_optics1;
class single_medium_optics2;
class single_far_optics1;
class fullauto_medium;
class SlotInfo;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
//class PointerSlot;
class UnderBarrelSlot;
class MuzzleSlot_762;
class CowsSlot_Rail;
class PointerSlot_Rail;

class PointerSlot
{
};
class M4A1_PointerSlot: PointerSlot
{
};

class asdg_MuzzleSlot_556;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class JCA_RailSLot_AR;

class cfgMagazines
{
	class JCA_HandFlare_Base;
    class JCA_HandFlare_Red: JCA_HandFlare_Base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_HandFlare_Green: JCA_HandFlare_Base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_SignalFlare_Base;
	class JCA_SignalFlare_Red: JCA_SignalFlare_Base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_SignalFlare_Green: JCA_SignalFlare_Base{scope=1;scopeCurator=1;scopeArsenal=1;};
};

class cfgWeapons
{
	class Item_Base_F;
	class JCA_arifle_M16A4_base_F;
	class JCA_arifle_M16A4_FG_base_F;
	class JCA_arifle_M16A4_GL_base_F;
	class JCA_arifle_M16A4_black_F: JCA_arifle_M16A4_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M16A4_FG_black_F: JCA_arifle_M16A4_FG_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M16A4_GL_black_F: JCA_arifle_M16A4_GL_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M16A4_sand_F: JCA_arifle_M16A4_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M16A4_FG_sand_F: JCA_arifle_M16A4_FG_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M16A4_GL_sand_F: JCA_arifle_M16A4_GL_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M16A4_olive_F: JCA_arifle_M16A4_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M16A4_FG_olive_F: JCA_arifle_M16A4_FG_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M16A4_GL_olive_F: JCA_arifle_M16A4_GL_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M4A1_base_F;
	class JCA_arifle_M4A1_GL_base_F;
	class JCA_arifle_M4A1_short_base_F;
	class JCA_arifle_M4A1_black_F: JCA_arifle_M4A1_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M4A1_GL_black_F: JCA_arifle_M4A1_GL_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M4A1_short_black_F: JCA_arifle_M4A1_short_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M4A1_sand_F: JCA_arifle_M4A1_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M4A1_GL_sand_F: JCA_arifle_M4A1_GL_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M4A1_short_sand_F: JCA_arifle_M4A1_short_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M4A1_olive_F: JCA_arifle_M4A1_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M4A1_GL_olive_F: JCA_arifle_M4A1_GL_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_M4A1_short_olive_F: JCA_arifle_M4A1_short_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_SR25_base_F;
	class JCA_arifle_SR25_black_F: JCA_arifle_SR25_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_SR25_sand_F: JCA_arifle_SR25_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_arifle_SR25_olive_F: JCA_arifle_SR25_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_hgun_P320_base_F;
	class JCA_hgun_P320_black_F: JCA_hgun_P320_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_hgun_P320_sand_F: JCA_hgun_P320_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_hgun_P320_olive_F: JCA_hgun_P320_base_F{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_optic_ACOG_base;
	class JCA_optic_ACOG_black: JCA_optic_ACOG_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_optic_ACOG_sand: JCA_optic_ACOG_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	//class JCA_optic_ACOG_olive: JCA_optic_ACOG_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_optic_ICO_base;
	class JCA_optic_ICO_black: JCA_optic_ICO_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_optic_ICO_sand: JCA_optic_ICO_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	//class JCA_optic_ICO_olive: JCA_optic_ICO_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_acc_LightModule_Pistol_base;
	class JCA_acc_LightModule_Pistol_black: JCA_acc_LightModule_Pistol_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_acc_LightModule_Pistol_sand: JCA_acc_LightModule_Pistol_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	//class JCA_acc_LightModule_Pistol_olive: JCA_acc_LightModule_Pistol_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_muzzle_snds_enhanced_base;
	class JCA_muzzle_snds_9MM_enhanced_black: JCA_muzzle_snds_enhanced_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	class JCA_muzzle_snds_9MM_enhanced_sand: JCA_muzzle_snds_enhanced_base{scope=1;scopeCurator=1;scopeArsenal=1;};
	//class JCA_muzzle_snds_9MM_enhanced_olive: JCA_muzzle_snds_enhanced_base{scope=1;scopeCurator=1;scopeArsenal=1;};

	
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	#include "m16.hpp"
	#include "m4.hpp"
	//#include "m4a4.hpp"
	//#include "sr10.hpp"
	#include "m110.hpp"
	#include "p320.hpp"

	class ItemCore;
	class acc_no_rail_cover: ItemCore
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_A_acc_no_rail_cover0";
		descriptionUse="";
		picture="";
		model="";
		descriptionShort="$STR_A3_A_acc_no_rail_cover_descriptionShort0";
		inertia=0.1;
	};

	class srifle_DMR_06_camo_F;
	class srifle_DMR_06_black_F: srifle_DMR_06_camo_F
	{
		magazines[]=
		{
			"20Rnd_Mk14_762x51_Mag"
		};
	};
	class srifle_DMR_06_hunter_F: srifle_DMR_06_camo_F
	{
		picture="\ax_weapons_f_jca_aegis\data\ui\gear_DMR_06_hunter_X_CA.paa";
		magazines[]=
		{
			"20Rnd_Mk14_762x51_Mag"
		};
	};
	class arifle_SPAR_02_base_F;
	class Aegis_arifle_SPAR_02_Inf_base_F: arifle_SPAR_02_base_F
	{
		modes[]=
		{
			"FullAuto",
			"Single",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
	};
};

class CfgAmmo
{
	class B_45ACP_Ball;
	class B_45ACP_Ball_Red: B_45ACP_Ball
	{
	};
	class B_45ACP_Ball_IR: B_45ACP_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		nvgOnly=1;
	};
	class B_9x21_Ball_Tracer_Green;
	class B_9x21_Ball_Tracer_IR: B_9x21_Ball_Tracer_Green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		nvgOnly=1;
	};
	class B_762x51_Ball;
	class B_762x51_Tracer_IR: B_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		nvgOnly=1;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class JCA_12Rnd_45ACP_Mk23_Mag: CA_Magazine{ammo="B_45ACP_Ball";};
	class JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag: JCA_12Rnd_45ACP_Mk23_Mag{ammo="B_45ACP_Ball_Red";};
	class JCA_12Rnd_45ACP_Mk23_Tracer_Green_Mag: JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag{ammo="B_45ACP_Ball_Green";};
	class JCA_12Rnd_45ACP_Mk23_Tracer_Yellow_Mag: JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag{ammo="B_45ACP_Ball_Yellow";};
	class JCA_12Rnd_45ACP_Mk23_Tracer_IR_Mag: JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag{ammo="B_45ACP_Ball_IR";};
	class JCA_15Rnd_9x21_M9A1_Mag: CA_Magazine{ammo="B_9x21_Ball";};
	class JCA_15Rnd_9x21_M9A1_Red_Mag: JCA_15Rnd_9x21_M9A1_Mag{ammo="B_9x21_Ball_Tracer_Red";};
	class JCA_15Rnd_9x21_M9A1_Green_Mag: JCA_15Rnd_9x21_M9A1_Red_Mag{ammo="B_9x21_Ball_Tracer_Green";};
	class JCA_15Rnd_9x21_M9A1_Yellow_Mag: JCA_15Rnd_9x21_M9A1_Red_Mag{ammo="B_9x21_Ball_Tracer_Yellow";};
	class JCA_15Rnd_9x21_M9A1_IR_Mag: JCA_15Rnd_9x21_M9A1_Red_Mag{ammo="B_9x21_Ball_Tracer_IR";};
	class JCA_15Rnd_9x21_P226_Mag: CA_Magazine{ammo="B_9x21_Ball";};
	class JCA_15Rnd_9x21_P226_Red_Mag: JCA_15Rnd_9x21_P226_Mag{ammo="B_9x21_Ball_Tracer_Red";};
	class JCA_15Rnd_9x21_P226_Green_Mag: JCA_15Rnd_9x21_P226_Red_Mag{ammo="B_9x21_Ball_Tracer_Green";};
	class JCA_15Rnd_9x21_P226_Yellow_Mag: JCA_15Rnd_9x21_P226_Red_Mag{ammo="B_9x21_Ball_Tracer_Yellow";};
	class JCA_15Rnd_9x21_P226_IR_Mag: JCA_15Rnd_9x21_P226_Red_Mag{ammo="B_9x21_Ball_Tracer_IR";};
	class JCA_17Rnd_9x21_P320_Mag: CA_Magazine{ammo="B_9x21_Ball";};
	class JCA_17Rnd_9x21_P320_Red_Mag: JCA_17Rnd_9x21_P320_Mag{ammo="B_9x21_Ball_Tracer_Red";};
	class JCA_17Rnd_9x21_P320_Green_Mag: JCA_17Rnd_9x21_P320_Red_Mag{ammo="B_9x21_Ball_Tracer_Green";};
	class JCA_17Rnd_9x21_P320_Yellow_Mag: JCA_17Rnd_9x21_P320_Red_Mag{ammo="B_9x21_Ball_Tracer_Yellow";};
	class JCA_17Rnd_9x21_P320_IR_Mag: JCA_17Rnd_9x21_P320_Red_Mag{ammo="B_9x21_Ball_Tracer_IR";};
	class JCA_30Rnd_9x21_MP5_Mag: CA_Magazine{ammo="B_9x21_Ball";};
	class JCA_30Rnd_9x21_MP5_Red_Mag: JCA_30Rnd_9x21_MP5_Mag{ammo="B_9x21_Ball_Tracer_Red";};
	class JCA_30Rnd_9x21_MP5_Green_Mag: JCA_30Rnd_9x21_MP5_Red_Mag{ammo="B_9x21_Ball_Tracer_Green";};
	class JCA_30Rnd_9x21_MP5_Yellow_Mag: JCA_30Rnd_9x21_MP5_Red_Mag{ammo="B_9x21_Ball_Tracer_Yellow";};
	class JCA_30Rnd_9x21_MP5_IR_Mag: JCA_30Rnd_9x21_MP5_Red_Mag{ammo="B_9x21_Ball_Tracer_IR";};
	class JCA_30Rnd_9x21_MP5_Tracer_Red_Mag: JCA_30Rnd_9x21_MP5_Red_Mag{ammo="B_9x21_Ball_Tracer_Red";};
	class JCA_30Rnd_9x21_MP5_Tracer_Green_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Mag{ammo="B_9x21_Ball_Tracer_Green";};
	class JCA_30Rnd_9x21_MP5_Tracer_Yellow_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Mag{ammo="B_9x21_Ball_Tracer_Yellow";};
	class JCA_30Rnd_9x21_MP5_Tracer_IR_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Mag{ammo="B_9x21_Ball_Tracer_IR";};
	class JCA_30Rnd_9x21_MP5_Sand_Mag: JCA_30Rnd_9x21_MP5_Mag{ammo="B_9x21_Ball";};
	class JCA_30Rnd_9x21_MP5_Red_Sand_Mag: JCA_30Rnd_9x21_MP5_Sand_Mag{ammo="B_9x21_Ball_Tracer_Red";};
	class JCA_30Rnd_9x21_MP5_Green_Sand_Mag: JCA_30Rnd_9x21_MP5_Red_Sand_Mag{ammo="B_9x21_Ball_Tracer_Green";};
	class JCA_30Rnd_9x21_MP5_Yellow_Sand_Mag: JCA_30Rnd_9x21_MP5_Red_Sand_Mag{ammo="B_9x21_Ball_Tracer_Yellow";};
	class JCA_30Rnd_9x21_MP5_IR_Sand_Mag: JCA_30Rnd_9x21_MP5_Red_Sand_Mag{ammo="B_9x21_Ball_Tracer_IR";};
	class JCA_30Rnd_9x21_MP5_Tracer_Red_Sand_Mag: JCA_30Rnd_9x21_MP5_Red_Sand_Mag{ammo="B_9x21_Ball_Tracer_Red";};
	class JCA_30Rnd_9x21_MP5_Tracer_Green_Sand_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Sand_Mag{ammo="B_9x21_Ball_Tracer_Green";};
	class JCA_30Rnd_9x21_MP5_Tracer_Yellow_Sand_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Sand_Mag{ammo="B_9x21_Ball_Tracer_Yellow";};
	class JCA_30Rnd_9x21_MP5_Tracer_IR_Sand_Mag: JCA_30Rnd_9x21_MP5_Tracer_Red_Sand_Mag{ammo="B_9x21_Ball_Tracer_IR";};
	class JCA_25Rnd_45ACP_UMP_Mag: CA_Magazine{ammo="B_45ACP_Ball";};
	class JCA_25Rnd_45ACP_UMP_Red_Mag: JCA_25Rnd_45ACP_UMP_Mag{ammo="B_45ACP_Ball_Red";};
	class JCA_25Rnd_45ACP_UMP_Green_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag{ammo="B_45ACP_Ball_Green";};
	class JCA_25Rnd_45ACP_UMP_Yellow_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag{ammo="B_45ACP_Ball_Yellow";};
	class JCA_25Rnd_45ACP_UMP_IR_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag{ammo="B_45ACP_Ball_IR";};
	class JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag{ammo="B_45ACP_Ball_Red";};
	class JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag{ammo="B_45ACP_Ball_Green";};
	class JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag{ammo="B_45ACP_Ball_Yellow";};
	class JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag{ammo="B_45ACP_Ball_IR";};
	class JCA_25Rnd_45ACP_UMP_Sand_Mag: JCA_25Rnd_45ACP_UMP_Mag{ammo="B_45ACP_Ball";};
	class JCA_25Rnd_45ACP_UMP_Red_Sand_Mag: JCA_25Rnd_45ACP_UMP_Sand_Mag{ammo="B_45ACP_Ball_Red";};
	class JCA_25Rnd_45ACP_UMP_Green_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag{ammo="B_45ACP_Ball_Green";};
	class JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag{ammo="B_45ACP_Ball_Yellow";};
	class JCA_25Rnd_45ACP_UMP_IR_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag{ammo="B_45ACP_Ball_IR";};
	class JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag{ammo="B_45ACP_Ball_Red";};
	class JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag{ammo="B_45ACP_Ball_Green";};
	class JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag{ammo="B_45ACP_Ball_Yellow";};
	class JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag{ammo="B_45ACP_Ball_IR";};

/*
	class JCA_20Rnd_762x51_PMAG: CA_Magazine
	class JCA_20Rnd_762x51_Red_PMAG: JCA_20Rnd_762x51_PMAG
	class JCA_20Rnd_762x51_Green_PMAG: JCA_20Rnd_762x51_Red_PMAG
	class JCA_20Rnd_762x51_Yellow_PMAG: JCA_20Rnd_762x51_Red_PMAG
	class JCA_20Rnd_762x51_IR_PMAG: JCA_20Rnd_762x51_Red_PMAG
	class JCA_20Rnd_762x51_Tracer_Red_PMAG: JCA_20Rnd_762x51_Red_PMAG
	class JCA_20Rnd_762x51_Tracer_Green_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
	class JCA_20Rnd_762x51_Tracer_Yellow_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
	class JCA_20Rnd_762x51_Tracer_IR_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
	class JCA_20Rnd_762x51_Sand_PMAG: JCA_20Rnd_762x51_PMAG
	class JCA_20Rnd_762x51_Red_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
	class JCA_20Rnd_762x51_Green_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
	class JCA_20Rnd_762x51_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
	class JCA_20Rnd_762x51_IR_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
	class JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
	class JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
	class JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
	class JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
	class JCA_20Rnd_762x51_SMAG: CA_Magazine
	class JCA_20Rnd_762x51_Red_SMAG: JCA_20Rnd_762x51_SMAG
	class JCA_20Rnd_762x51_Green_SMAG: JCA_20Rnd_762x51_Red_SMAG
	class JCA_20Rnd_762x51_Yellow_SMAG: JCA_20Rnd_762x51_Red_SMAG
	class JCA_20Rnd_762x51_IR_SMAG: JCA_20Rnd_762x51_Red_SMAG
	class JCA_20Rnd_762x51_Tracer_Red_SMAG: JCA_20Rnd_762x51_Red_SMAG
	class JCA_20Rnd_762x51_Tracer_Green_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
	class JCA_20Rnd_762x51_Tracer_Yellow_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
	class JCA_20Rnd_762x51_Tracer_IR_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
	class JCA_20Rnd_762x51_Sand_SMAG: JCA_20Rnd_762x51_SMAG
	class JCA_20Rnd_762x51_Red_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
	class JCA_20Rnd_762x51_Green_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
	class JCA_20Rnd_762x51_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
	class JCA_20Rnd_762x51_IR_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
	class JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
	class JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
	class JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
	class JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG

	class JCA_30Rnd_556x45_PMAG: CA_Magazine
	class JCA_30Rnd_556x45_Red_PMAG: JCA_30Rnd_556x45_PMAG
	class JCA_30Rnd_556x45_Green_PMAG: JCA_30Rnd_556x45_Red_PMAG
	class JCA_30Rnd_556x45_Yellow_PMAG: JCA_30Rnd_556x45_Red_PMAG
	class JCA_30Rnd_556x45_IR_PMAG: JCA_30Rnd_556x45_Red_PMAG
	class JCA_30Rnd_556x45_Tracer_Red_PMAG: JCA_30Rnd_556x45_Red_PMAG
	class JCA_30Rnd_556x45_Tracer_Green_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
	class JCA_30Rnd_556x45_Tracer_Yellow_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
	class JCA_30Rnd_556x45_Tracer_IR_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
	class JCA_30Rnd_556x45_sand_PMAG: JCA_30Rnd_556x45_PMAG
	class JCA_30Rnd_556x45_Red_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
	class JCA_30Rnd_556x45_Green_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
	class JCA_30Rnd_556x45_Yellow_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
	class JCA_30Rnd_556x45_IR_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
	class JCA_30Rnd_556x45_Tracer_Red_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
	class JCA_30Rnd_556x45_Tracer_Green_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
	class JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
	class JCA_30Rnd_556x45_Tracer_IR_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
*/
};

class CfgVehicles
{
};