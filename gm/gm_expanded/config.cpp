#include "CfgPatches.hpp"

class cfgWeapons
{
};

class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class EventHandlers;
class RotorLibHelicopterProperties;
class AnimationSources;
class Turrets;
class CopilotTurret;
class MainTurret;
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponFireMGun;
class WeaponCloudsGun;
class WeaponCloudsMGun;
class AirplaneHUD;
class Optics_Armored;
class RCWSOptics;
class VScrollbar;
class HScrollbar;
class RscControlsGroup;
class RscText;
class RscPicture;
class IGUIBack;

class cfgVehicles
{
	class All
	{
		class EventHandlers
		{
		};
		class MarkerLights;
		class NVGMarkers;
		class NVGMarker;
		class Turrets;
		class HeadLimits;
		class ViewPilot;
		class ViewCargo;
		class ViewOptics;
		class PilotSpec;
		class CargoSpec
		{
			class Cargo1;
		};
		class TransportWeapons;
		class TransportMagazines;
		class SoundEnvironExt;
		class SoundEquipment;
		class SoundGear;
		class SoundBreath;
		class SoundBreathSwimming;
		class SoundBreathInjured;
		class SoundHitScream;
		class SoundInjured;
		class SoundBreathAutomatic;
		class SoundDrown;
		class SoundChoke;
		class SoundRecovered;
		class SoundBurning;
		class PulsationSound;
		class SoundDrowning;
		class Reflectors;
		class FxExplo;
		class AnimationSources;
		class GunFire: WeaponFireGun
		{
		};
		class GunClouds: WeaponCloudsGun
		{
		};
		class MGunClouds: WeaponCloudsMGun
		{
		};
		class DestructionEffects
		{
			class Light1;
			class Smoke1;
			class Fire1;
			class Sparks1;
			class Sound;
			class Light2;
			class Fire2;
			class Smoke1_2;
		};
		class camShakeGForce;
		class camShakeDamage;
		class SpeechVariants
		{
			class Default;
		};
		class SimpleObject;
	};
	class AllVehicles: All
	{
		class SquadTitles;
		class NewTurret
		{
			class ViewGunner;
			class TurretSpec;
			class Reflectors;
			class GunFire: WeaponFireGun
			{
			};
			class GunClouds: WeaponCloudsGun
			{
			};
			class MGunClouds: WeaponCloudsMGun
			{
			};
			class HitPoints
			{
				class HitTurret;
				class HitGun;
			};
			class Turrets;
			class ViewOptics;
			class TurnIn;
			class TurnOut: TurnIn
			{
			};
		};
		class ViewPilot;
		class ViewCargo;
		class ViewOptics;
		class PilotSpec;
		class CargoSpec
		{
			class Cargo1;
		};
		class MFD;
		class Sounds
		{
			class Engine;
			class Movement;
		};
		class SoundEvents;
		class RenderTargets;
		class CargoTurret: NewTurret
		{
			class ViewGunner: ViewCargo
			{
			};
		};
	};
	class Air: AllVehicles
	{
		class Components
		{
			class TransportCountermeasuresComponent
			{
			};
		};
		class MarkerLights
		{
			class RedStill;
			class GreenStill;
			class WhiteStill;
			class WhiteBlinking;
			class RedBlinking;
			class PositionRed;
			class PositionGreen;
			class PositionWhite;
			class CollisionRed;
			class CollisionWhite;
		};
		class AnimationSources
		{
			class CollisionLightRed_source;
			class CollisionLightWhite_source;
		};
		class TransportItems;
		class Exhausts
		{
			class Exhaust1;
			class Exhaust2;
		};
		class camShakeGForce;
		class camShakeDamage;
	};
	class Helicopter: Air
	{
		class ViewPilot;
		class CargoSpec
		{
			class Cargo1;
			class Cargo2;
		};
		class HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitMissiles;
			class HitRGlass;
			class HitLGlass;
			class HitEngine1;
			class HitEngine2;
			class HitEngine3;
			class HitWinch
			{
				class DestructionEffects
				{
					class Explo;
					class Sparks;
				};
			};
			class HitTransmission;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitLight;
			class HitHydraulics;
			class HitGear;
			class HitFuel;
			class HitHStabilizerL1;
			class HitHStabilizerR1;
			class HitVStabilizer1;
			class HitTail;
			class HitPitotTube;
			class HitStaticPort;
			class HitStarter1;
			class HitStarter2;
			class HitStarter3;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class TurretSpec;
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
		class ViewOptics;
		class MFD
		{
			class HUD: AirplaneHUD
			{
			};
		};
		class Reflectors
		{
			class Reflector;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class Exhausts;
		class RotorLibHelicopterProperties;
		class SpeechVariants
		{
			class Default;
		};
		class DestructionEffects;
		class AnimationSources: AnimationSources
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitEngine1;
			class HitEngine2;
			class HitWinch_Source;
		};
		class EventHandlers;
	};
	class Plane: Air
	{
		class ViewPilot;
		class ViewOptics;
		class WingVortices
		{
			class WingTipLeft;
			class WingTipRight;
		};
		class Reflectors
		{
			class Reflector;
		};
		class MFD
		{
			class HUD: AirplaneHUD
			{
				class pos10vector;
				class bones;
				class Draw;
			};
		};
		class GunFire;
		class GunClouds;
		class MGunFire;
		class MGunClouds;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class SpeechVariants
		{
			class Default;
		};
		class CamShake;
		class HitPoints
		{
			class HitHull;
		};
		class EventHandlers;
		class DestructionEffects;
	};
	class Plane_Base_F: Plane
	{
		class Turrets
		{
			class CopilotTurret: NewTurret
			{
				class ViewGunner;
			};
		};
		class TransportBackpacks;
		class TransportMagazines;
		class TransportWeapons;
		class TransportItems;
		class camShakeGForce;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewPilot;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Components;
		class EventHandlers;
	};
	class Plane_Canopy_Base_F;
	class Ejection_Seat_Base_F;
	class PlaneWreck;
	class HelicopterWreck;
	class Land: AllVehicles
	{
	};
	class nonstrategic;
	class LandVehicle: Land
	{
		class Components
		{
			class TransportCountermeasuresComponent;
		};
		class Exhausts
		{
			class Exhaust1;
		};
		class Reflectors
		{
			class Left;
			class Right;
		};
		class CommanderOptics: NewTurret
		{
			class ViewOptics: ViewOptics
			{
			};
			class ViewGunner: ViewCargo
			{
			};
		};
		class ViewPilot;
		class NewTurret;
		class eventhandlers;
	};
	class Tank: LandVehicle
	{
		class Components: Components
		{
			class AITankSteeringComponent;
		};
		class HitPoints
		{
			class HitEngine;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
		class ViewPilot: ViewPilot
		{
		};
		class ViewOptics: ViewOptics
		{
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
					};
				};
			};
		};
		class CargoLight;
		class Sounds: Sounds
		{
			class Engine: Engine
			{
			};
			class Movement: Movement
			{
			};
		};
		class SpeechVariants
		{
			class Default
			{
			};
		};
		class DestructionEffects
		{
			class LightBig1;
			class Sound;
			class FireBig1;
			class Refract1;
			class SmokeBig1;
			class SparksBig1;
			class FireSparksBig1;
			class FireBig2;
			class SmokeBig1_2;
			class SmokeBig2;
		};
	};
	class Tank_F: Tank
	{
		class CamShake;
		class Components;
		class EventHandlers: DefaultEventHandlers
		{
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
		};
		class TransportBackpacks;
		class TransportMagazines;
		class TransportWeapons;
		class TransportItems;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class Turrets;
			};
		};
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		class CargoTurret;
		class EventHandlers;
		class Turrets;
	};
	class Ship: AllVehicles
	{
		class Components
		{
			class TransportCountermeasuresComponent;
		};
		class Exhausts
		{
			class Exhaust1
			{
			};
		};
		class HitPoints
		{
			class HitEngine;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class ViewPilot;
		class ViewOptics;
		class MarkerLights
		{
			class RedStill;
			class GreenStill;
			class WhiteStill;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class SpeechVariants
		{
			class Default;
		};
	};
	class Ship_F: Ship
	{
		class HitPoints
		{
			class HitEngine;
		};
		class CamShake;
		class MarkerLights
		{
			class PositionRed;
			class PositionGreen;
			class PositionWhite;
		};
		class ViewPilot;
		class EventHandlers: DefaultEventHandlers
		{
		};
		class DestructionEffects
		{
		};
	};
	class Boat_F: Ship_F
	{
		class Turrets;
		class ViewPilot;
		class ViewOptics;
	};
	class Boat_Armed_01_base_F: Boat_F
	{
		class SpeechVariants
		{
			class Default;
		};
		class Sounds
		{
			class IdleOut;
			class Engine;
			class EngineMidOut;
			class EngineMaxOut;
			class WaternoiseOutW0;
			class WaternoiseOutW1;
			class WaternoiseOutW2;
			class WaternoiseOutW3;
			class WaternoiseOutW4;
			class WaternoiseOutW5;
			class scrubLandExt;
			class RainExt;
			class RainInt;
		};
		class RenderTargets
		{
			class driver_display_1
			{
				class CameraView1;
			};
			class Gunner_1
			{
				class CameraView1;
			};
			class Gunner_TV
			{
				class CameraView1;
			};
		};
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
		};
		class TransportItems
		{
		};
		class complexGearbox;
		class Exhausts
		{
			class Exhaust1;
		};
		class AnimationSources
		{
			class muzzle2_source;
			class muzzle_source;
			class muzzle2_source_rot;
			class muzzle_source_rot;
			class ReloadAnim;
			class ReloadMagazine;
			class Revolving;
			class HitTurret;
			class HitGun;
		};
		class ViewPilot: ViewPilot
		{
		};
		class Turrets: Turrets
		{
			class FrontTurret;
			class RearTurret;
		};
		class Library;
		class Damage;
		class Reflectors
		{
			class Right
			{
				class Attenuation;
			};
			class Right2: Right
			{
			};
		};
		class TextureSources
		{
			class Indep;
			class Opfor;
			class Blufor;
		};
	};
	class StaticWeapon: LandVehicle
	{
		class AnimationSources;
		class HitPoints;
		class ViewCargo;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class HitPoints;
				class ViewCargo;
				class ViewGunner;
			};
		};
		class UserActions
		{
			class PressXToFlipTheThing;
		};
	};
	class StaticATWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class Components;
	};
	class StaticSEARCHLight: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class StaticCannon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class Eventhandlers;
	};

	class Car: LandVehicle
	{
		class Components: Components
		{
			class AICarSteeringComponent;
		};
		class PlateInfos;
		class HitPoints
		{
			class HitEngine;
			class HitRGlass;
			class HitLGlass;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitRFWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitLBWheel;
			class HitRBWheel;
		};
		class ViewPilot;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class PlayerSteeringCoefficients;
		class SpeechVariants
		{
			class Default;
		};
		class DestructionEffects
		{
			class Light1;
			class Sound;
			class Fire1;
			class Refract1;
			class Smoke1;
			class Sparks1;
			class Firesparks1;
			class Fire2;
			class Smoke1_2;
			class Smoke2;
		};
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitEngine;
			class HitHull;
		};
		class PlayerSteeringCoefficients;
		class ViewPilot: ViewPilot
		{
		};
		class NewTurret: NewTurret
		{
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
				class ViewOptics;
				class ViewGunner;
			};
		};
		class NVGMarkers
		{
			class NVGMarker01;
		};
		class AnimationSources;
		class EventHandlers: DefaultEventHandlers
		{
		};
		class TransportBackpacks;
		class TransportMagazines;
		class TransportWeapons;
		class TransportItems;
		class Exhausts
		{
			class Exhaust1;
		};
		class Reflectors
		{
			class Left
			{
				class Attenuation;
			};
			class Right;
			class Right2;
			class Left2;
		};
		class CamShakeGForce;
		class Components: Components
		{
		};
	};
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitEngine;
		};
		class Exhausts
		{
			class Exhaust1;
		};
		class EventHandlers;
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret;
			class ViewGunner;
		};
	};
	class Truck_02_Base_F: Truck_F
	{
		class Turrets
		{
		};
	};

	class Man: Land
	{
		class EventHandlers;
	};
	class CAManBase: Man
	{
		class AnimationSources;
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase
	{
		class HitPoints;
	};
	class B_Soldier_base_F: SoldierWB
	{
		class HitPoints;
	};
	class SoldierGB: CAManBase
	{
		class HitPoints;
	};
	class SoldierEB;
	class O_Soldier_base_F: SoldierEB
	{
		class HitPoints;
	};
	class Civilian;
	class Civilian_F: Civilian
	{
		class HitPoints;
	};
	class O_Soldier_F: O_Soldier_base_F
	{
		class EventHandlers;
	};
    class O_R_Man_Base_F: O_Soldier_F
	{
	};

//Antiair
	class gm_ge_army_gepard1a1_base;
	class gm_gc_army_zsu234v1_base;
	class gm_pl_army_zsu234v1_base;
//APCs
	class gm_ge_army_m113a1g_apc_base;
	class gm_ge_army_m113a1g_apc_milan_base;
	class gm_ge_army_m113a1g_command_base;
	class gm_ge_army_m113a1g_medic_base;
	class gm_ge_army_luchsa1_base;
	class gm_ge_army_luchsa2_base;
	class gm_ge_army_marder1a1plus_base;
	class gm_ge_army_marder1a1a_base;
	class gm_ge_army_marder1a2_base;
	class gm_ge_army_fuchsa0_command_base;
	class gm_ge_army_fuchsa0_engineer_base;
	class gm_ge_army_fuchsa0_reconnaissance_base;
	class gm_ge_army_fuchsa0_medic_base;
	class gm_ge_army_fuchsa1_jammer_base;
	class gm_dk_army_m113a1dk_apc_base;
	class gm_dk_army_m113a1dk_command_base;
	class gm_dk_army_m113a1dk_engineer_base;
	class gm_dk_army_m113a1dk_medic_base;
	class gm_dk_army_m113a2dk_base;
	class gm_gc_army_bmp1sp2_base;
	class gm_gc_army_bmp1p_base;
	class gm_gc_army_brdm2_9p133_base;
	class gm_gc_army_brdm2_base;
	class gm_gc_army_brdm2rkh_base;
	class gm_gc_army_brdm2um_base;
	class gm_gc_army_btr60pa_base;
	class gm_gc_army_btr60pa_dshkm_base;
	class gm_gc_army_btr60pb_base;
	class gm_gc_army_btr60pu12_base;
	class gm_pl_army_brdm2_9p133_base;
	class gm_pl_army_brdm2_base;
	class gm_pl_army_brdm2rkh_base;
	class gm_pl_army_bmp1sp2_base;
	class gm_pl_army_ot64a_base;

//Artillery
	class gm_ge_army_kat1_463_mlrs_base;
	class gm_ge_army_m109g_base;
	class gm_ge_army_m113a1g_mortar_base;
	class gm_dk_army_m109_base;
	class gm_gc_army_ural375d_mlrs_base;
	class gm_gc_army_2s1_base;
	class gm_gc_army_2p16_base;
	class gm_pl_army_ural375d_mlrs_base;
	class gm_pl_army_2p16_base;
	class gm_pl_army_2s1_base;

//Cars
	class gm_wheeled_base: Car_F{};
	class gm_wheeled_truck_base: gm_wheeled_base{};
	class gm_ge_army_u1300l_firefighter_base;
	class gm_ge_army_typ247_firefighter_base;
	class gm_ge_army_k125_base;
	class gm_ge_army_typ1200_cargo_base;
	class gm_ge_army_typ247_cargo_base;
	class gm_ge_army_typ253_mp_base;
	class gm_ge_army_typ253_cargo_base;
	class gm_ge_army_w123_cargo_base;
	class gm_ge_army_iltis_cargo_base;
	class gm_ge_army_iltis_milan_base;
	class gm_ge_army_iltis_mg3_base;
	class gm_ge_army_kat1_454_reammo_base;
	class gm_ge_army_kat1_454_cargo_base;
	class gm_ge_army_u1300l_container_base;
	class gm_ge_army_u1300l_medic_base;
	class gm_ge_army_u1300l_repair_base;
	class gm_ge_army_u1300l_cargo_base;
	class gm_ge_army_kat1_451_reammo_base;
	class gm_ge_army_kat1_451_container_base;
	class gm_ge_army_kat1_451_refuel_base;
	class gm_ge_army_kat1_451_cargo_base;
	class gm_ge_army_kat1_452_container_base;
	class gm_dk_army_typ1200_cargo_base;
	class gm_dk_army_typ247_cargo_base;
	class gm_dk_army_typ253_cargo_base;
	class gm_dk_army_typ253_mp_base;
	class gm_dk_army_u1300l_container_base;
	class gm_gc_army_p601_base;
	class gm_gc_army_uaz469_cargo_base;
	class gm_gc_army_uaz469_dshkm_base;
	class gm_gc_army_uaz469_spg9_base;
	class gm_gc_army_ural4320_reammo_base;
	class gm_gc_army_ural375d_refuel_base;
	class gm_gc_army_ural375d_medic_base;
	class gm_gc_army_ural375d_cargo_base;
	class gm_gc_army_ural4320_repair_base;
	class gm_gc_army_ural44202_base;
	class gm_gc_army_ural4320_cargo_base;
	class gm_pl_army_ural4320_reammo_base;
	class gm_pl_army_ural375d_refuel_base;
	class gm_pl_army_ural375d_medic_base;
	class gm_pl_army_ural4320_repair_base;
	class gm_pl_army_ural4320_cargo_base;
	class gm_pl_army_uaz469_cargo_base;
	class gm_pl_army_uaz469_dshkm_base;
	class gm_ge_bgs_k125_base;
	class gm_ge_bgs_typ253_cargo_base;
	class gm_ge_bgs_w123_cargo_base;
	class gm_ge_bgs_bo105m_vbh_base;

//Helicopters
	class gm_ge_army_ch53g_base;
	class gm_ge_army_ch53gs_base;
	class gm_ge_army_bo105p_pah1_base;
	class gm_ge_army_bo105p_pah1a1_base;
	class gm_ge_army_bo105m_vbh_base;
	class gm_ge_army_bo105p1m_vbh_base;
	class gm_ge_army_bo105p1m_vbh_swooper_base;
	class gm_gc_airforce_mi2p_base;
	class gm_gc_airforce_mi2sr_base;
	class gm_gc_airforce_mi2t_base;
	class gm_gc_airforce_mi2urn_base;
	class gm_gc_airforce_mi2us_base;
	class gm_pl_airforce_mi2ch_base;
	class gm_pl_airforce_mi2p_base;
	class gm_pl_airforce_mi2platan_base;
	class gm_pl_airforce_mi2sr_base;
	class gm_pl_airforce_mi2t_base;
	class gm_pl_airforce_mi2urn_base;
	class gm_pl_airforce_mi2urp_base;
	class gm_pl_airforce_mi2urpg_base;
	class gm_pl_airforce_mi2urs_base;
	class gm_pl_airforce_mi2us_base;
	class gm_pl_airforce_mi2ch;
	class gm_pl_airforce_mi2p;
	class gm_pl_airforce_mi2platan;
	class gm_pl_airforce_mi2sr;
	class gm_pl_airforce_mi2t;
	class gm_pl_airforce_mi2urn;
	class gm_pl_airforce_mi2urp;
	class gm_pl_airforce_mi2urpg;
	class gm_pl_airforce_mi2urs;
	class gm_pl_airforce_mi2us;

//Men
	class gm_ge_army_crew_mp2a1_80_base;
	class gm_ge_army_pilot_p1_80_base;
	class gm_ge_army_rifleman_parka_80_win_base;
	class gm_dk_army_rifleman_84_oli_base;
	class gm_dk_army_rifleman_84_win_base;
	class gm_ge_army_sf_antiair_mp5a3_fim43_80_wdl;
	class gm_ge_army_sf_antitank_mp5a3_milan_80_wdl;
	class gm_ge_army_sf_demolition_mp5a2_80_wdl;
	class gm_ge_army_sf_antitank_mp5a2_pzf84_80_wdl;
	class gm_ge_army_sf_antitank_assistant_mp5a2_pzf84_80_wdl;
	class gm_ge_army_sf_grenadier_hk69a1_80_wdl;
	class gm_ge_army_sf_machinegunner_g8a2_80_wdl;
	class gm_ge_army_sf_marksman_g3a3_80_wdl;
	class gm_ge_army_sf_radioman_mp5a3_80_wdl;
	class gm_ge_army_sf_rifleman_g3a4_80_wdl;
	class gm_ge_army_sf_rifleman_mp5a3_80_wdl;
	class gm_ge_army_sf_squadleader_mp5sd3_p2a1_80_wdl;

	class gm_gc_army_rifleman_80_blk;
	class gm_gc_army_crew_mpiaks74nk_80_blk;
	class gm_gc_airforce_pilot_80_base;
	class gm_pl_army_rifleman_80_moro_base;
	class gm_pl_army_rifleman_80_autumn_moro_base;
	class gm_pl_army_rifleman_80_win_base;
	class gm_pl_airforce_pilot_80_base;
	class gm_pl_army_sf_antiair_pm63_9k32m_80_moro;
	class gm_pl_army_sf_antitank_akmn_rpg7_80_moro;
	class gm_pl_army_sf_antitank_akmn_fagot_80_moro;
	class gm_pl_army_sf_demolition_pm63_80_moro;
	class gm_pl_army_sf_grenadier_akm_pallad_80_moro;
	class gm_pl_army_sf_machinegunner_rpk_80_moro;
	class gm_pl_army_sf_marksman_svd_80_moro;
	class gm_pl_army_sf_engineer_pm63_80_moro;
	class gm_pl_army_sf_radioman_akmn_80_moro;
	class gm_pl_army_sf_rifleman_akmn_80_moro;
	class gm_pl_army_sf_rifleman_pm63_80_moro;
	class gm_pl_army_sf_squadleader_akmn_80_moro;

//Planes
	class gm_ge_airforce_do28d2_base;
	class gm_ge_airforce_do28d2_medevac_base;
	class gm_gc_airforce_l410s_salon_base;
	class gm_gc_airforce_l410t_base;

//Tanks
	class gm_ge_army_bpz2a0_base;
	class gm_ge_army_bibera0_base;
	class gm_ge_army_Leopard1a1_base;
	class gm_ge_army_Leopard1a1a1_base;
	class gm_ge_army_Leopard1a1a2_base;
	class gm_ge_army_Leopard1a1a3_base;
	class gm_ge_army_Leopard1a1a4_base;
	class gm_ge_army_Leopard1a3_base;
	class gm_ge_army_Leopard1a3a1_base;
	class gm_ge_army_Leopard1a3a2_base;
	class gm_ge_army_Leopard1a3a3_base;
	class gm_ge_army_Leopard1a4_base;
	class gm_ge_army_Leopard1a5_base;
	class gm_ge_army_Leopard1a5a1_base;
	class gm_ge_army_rakjpz2_base;
	class gm_dk_army_bpz2a0_base;
	class gm_dk_army_bibera0_base;
	class gm_dk_army_Leopard1a3_base;
	class gm_dk_army_Leopard1a5dk1_base;
	class gm_dk_army_Leopard1a5dk1_dozer_base;
	class gm_gc_army_pt76b_base;
	class gm_gc_army_t55_base;
	class gm_gc_army_t55a_base;
	class gm_gc_army_t55ak_base;
	class gm_gc_army_t55am2_base;
	class gm_gc_army_t55am2b_base;
	class gm_pl_army_pt76b_base;
	class gm_pl_army_t55_base;
	class gm_pl_army_t55a_base;
	class gm_pl_army_t55ak_base;

//Turrets
	class gm_ge_army_milan_launcher_tripod_base;
	class gm_ge_army_m120_base;
	class gm_ge_army_mg3_aatripod_base;
	class gm_dk_army_mg3_aatripod_base;
	class gm_gc_army_2b11_base;
	class gm_gc_army_dshkm_aatripod_base;
	class gm_gc_army_fagot_launcher_tripod_base;
	class gm_gc_army_spg9_tripod_base;
	class gm_pl_army_2b11_base;
	class gm_pl_army_dshkm_aatripod_base;
	class gm_pl_army_fagot_launcher_tripod_base;
	class gm_pl_army_spg9_tripod_base;

	#include "bundesautumn.hpp"
	#include "bundeswinter.hpp"

	#include "denmarkwinter.hpp"

	#include "nvawinter.hpp"

	#include "polandautumn.hpp"
	#include "polandwinter.hpp"
};
