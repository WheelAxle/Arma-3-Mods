
#include "CfgPatches.hpp"

class cfgWeapons
{
	class vn_m1_garand_sniper;
	class vn_m1_garand_sniper_clean: vn_m1_garand_sniper
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="vn_o_3x_m84";
			};
		};
	};
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

class vn_attribute_flag_raise;
class vn_attribute_flag
{
	class Values
	{
		class arvn;
		class aus;
		class cam01;
		class cam02;
		class cav_1st;
		class pavn;
		class pl;
		class rok;
		class usa;
		class usarmy;
		class usmc;
		class thai;
		class vc;
	};
};

class cfgVehicles
{
	class All
	{
		class EventHandlers
		{
			class vn_tow_spareMagUpdate;
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

//Air
	class vn_helicopter_base: Helicopter_Base_H{};
	class vn_air_ch34_01_base: vn_helicopter_base{};
	class vn_air_ch34_m60_base: vn_air_ch34_01_base{};
	class vn_air_ch34_m60_x2_base: vn_air_ch34_m60_base{};
	class vn_air_ch34_stinger_base: vn_air_ch34_m60_x2_base{};
	class vn_air_ch34_m1919_base: vn_air_ch34_m60_base{};
	class vn_b_air_ch34_01_01: vn_air_ch34_m60_base{};
	class vn_i_air_ch34_01_02: vn_air_ch34_m60_base{};
	class vn_i_air_ch34_02_01: vn_air_ch34_m1919_base{};
	class vn_i_air_ch34_02_02: vn_air_ch34_m1919_base{};
	class vn_b_air_ch34_03_01: vn_air_ch34_m60_x2_base{};
	class vn_b_air_ch34_04_01: vn_air_ch34_stinger_base{};
	class vn_b_air_ch34_04_02: vn_air_ch34_stinger_base{};
	class vn_b_air_ch34_04_03: vn_air_ch34_stinger_base{};
	class vn_b_air_ch34_04_04: vn_air_ch34_stinger_base{};
	class vn_air_ah1g_01_base: vn_helicopter_base{};
	class vn_air_ah1g_02_base: vn_air_ah1g_01_base{};
	class vn_air_ah1g_03_base: vn_air_ah1g_01_base{};
	class vn_air_ah1g_04_base: vn_air_ah1g_01_base{};
	class vn_air_ah1g_05_base: vn_air_ah1g_01_base{};
	class vn_air_ah1g_06_base: vn_air_ah1g_01_base{};
	class vn_air_ah1g_07_base: vn_air_ah1g_06_base{};
	class vn_air_ah1g_08_base: vn_air_ah1g_06_base{};
	class vn_air_ah1g_09_base: vn_air_ah1g_06_base{};
	class vn_air_ah1g_10_base: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_01: vn_air_ah1g_01_base{};
	class vn_b_air_ah1g_02: vn_air_ah1g_02_base{};
	class vn_b_air_ah1g_03: vn_air_ah1g_03_base{};
	class vn_b_air_ah1g_04: vn_air_ah1g_04_base{};
	class vn_b_air_ah1g_05: vn_air_ah1g_05_base{};
	class vn_b_air_ah1g_06: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_07: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_08: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_09: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_10: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_01_usmc: vn_air_ah1g_01_base{};
	class vn_b_air_ah1g_02_usmc: vn_air_ah1g_02_base{};
	class vn_b_air_ah1g_03_usmc: vn_air_ah1g_03_base{};
	class vn_b_air_ah1g_04_usmc: vn_air_ah1g_04_base{};
	class vn_b_air_ah1g_05_usmc: vn_air_ah1g_05_base{};
	class vn_b_air_ah1g_06_usmc: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_07_usmc: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_08_usmc: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_09_usmc: vn_air_ah1g_06_base{};
	class vn_b_air_ah1g_10_usmc: vn_air_ah1g_06_base{};
	class vn_air_uh1_01_base: vn_helicopter_base{};
	class vn_air_uh1c_base: vn_air_uh1_01_base{};
	class vn_air_uh1c_doorguns_base: vn_air_uh1c_base{};
	class vn_air_uh1c_01_base: vn_air_uh1c_doorguns_base{};
	class vn_air_uh1c_02_base: vn_air_uh1c_01_base{};
	class vn_air_uh1c_03_base: vn_air_uh1c_01_base{};
	class vn_air_uh1c_04_base: vn_air_uh1c_base{};
	class vn_air_uh1c_05_base: vn_air_uh1c_04_base{};
	class vn_air_uh1c_06_base: vn_air_uh1c_base{};
	class vn_air_uh1c_07_base: vn_air_uh1c_doorguns_base{};
	class vn_air_uh1d_base: vn_air_uh1_01_base
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
		};
	};
	class vn_air_uh1d_01_base: vn_air_uh1d_base{};
	class vn_air_uh1d_02_base: vn_air_uh1d_base
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: NewTurret
			{
			};
			class LeftDoorGun: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_01
			{
			};
			class CargoTurret_04: CargoTurret_01
			{
			};
		};
	};
	class vn_b_air_uh1c_01_01: vn_air_uh1c_01_base{};
	class vn_b_air_uh1c_01_02: vn_b_air_uh1c_01_01{};
	class vn_b_air_uh1c_01_03: vn_b_air_uh1c_01_01{};
	class vn_b_air_uh1c_01_04: vn_b_air_uh1c_01_01{};
	class vn_b_air_uh1c_01_05: vn_b_air_uh1c_01_01{};
	class vn_b_air_uh1c_01_06: vn_b_air_uh1c_01_01{};
	class vn_b_air_uh1c_01_07: vn_b_air_uh1c_01_01{};
	class vn_i_air_uh1c_01_01: vn_air_uh1c_01_base{};
	class vn_b_air_uh1c_01_07_test: vn_b_air_uh1c_01_01{};
	class vn_b_air_uh1c_02_01: vn_air_uh1c_02_base{};
	class vn_b_air_uh1c_02_02: vn_b_air_uh1c_02_01{};
	class vn_b_air_uh1c_02_03: vn_b_air_uh1c_02_01{};
	class vn_b_air_uh1c_02_04: vn_b_air_uh1c_02_01{};
	class vn_b_air_uh1c_02_05: vn_b_air_uh1c_02_01{};
	class vn_b_air_uh1c_02_06: vn_b_air_uh1c_02_01{};
	class vn_b_air_uh1c_02_07: vn_b_air_uh1c_02_01{};
	class vn_i_air_uh1c_02_01: vn_air_uh1c_02_base{};
	class vn_b_air_uh1c_03_01: vn_air_uh1c_03_base{};
	class vn_b_air_uh1c_04_01: vn_air_uh1c_04_base{};
	class vn_b_air_uh1c_04_02: vn_b_air_uh1c_04_01{};
	class vn_b_air_uh1c_04_03: vn_b_air_uh1c_04_01{};
	class vn_b_air_uh1c_04_04: vn_b_air_uh1c_04_01{};
	class vn_b_air_uh1c_04_05: vn_b_air_uh1c_04_01{};
	class vn_b_air_uh1c_04_06: vn_b_air_uh1c_04_01{};
	class vn_b_air_uh1c_04_07: vn_b_air_uh1c_04_01{};
	class vn_b_air_uh1c_05_01: vn_air_uh1c_05_base{};
	class vn_b_air_uh1c_05_02: vn_b_air_uh1c_05_01{};
	class vn_b_air_uh1c_05_03: vn_b_air_uh1c_05_01{};
	class vn_b_air_uh1c_05_04: vn_b_air_uh1c_05_01{};
	class vn_b_air_uh1c_05_05: vn_b_air_uh1c_05_01{};
	class vn_b_air_uh1c_05_06: vn_b_air_uh1c_05_01{};
	class vn_b_air_uh1c_05_07: vn_b_air_uh1c_05_01{};
	class vn_b_air_uh1c_06_01: vn_air_uh1c_06_base{};
	class vn_b_air_uh1c_06_02: vn_b_air_uh1c_06_01{};
	class vn_b_air_uh1c_07_01: vn_air_uh1c_07_base{};
	class vn_b_air_uh1c_07_02: vn_b_air_uh1c_07_01{};
	class vn_b_air_uh1c_07_03: vn_b_air_uh1c_07_01{};
	class vn_b_air_uh1c_07_04: vn_b_air_uh1c_07_01{};
	class vn_b_air_uh1c_07_05: vn_b_air_uh1c_07_01{};
	class vn_b_air_uh1c_07_06: vn_b_air_uh1c_07_01{};
	class vn_b_air_uh1c_07_07: vn_b_air_uh1c_07_01{};
	class vn_i_air_uh1c_07_01: vn_air_uh1c_07_base{};
	class vn_b_air_uh1d_01_01: vn_air_uh1d_01_base{};
	class vn_i_air_uh1d_01_01: vn_air_uh1d_01_base{};
	class vn_b_air_uh1d_01_02: vn_b_air_uh1d_01_01{};
	class vn_b_air_uh1d_01_03: vn_b_air_uh1d_01_01{};
	class vn_b_air_uh1d_01_04: vn_b_air_uh1d_01_01{};
	class vn_b_air_uh1d_01_05: vn_b_air_uh1d_01_01{};
	class vn_b_air_uh1d_01_06: vn_b_air_uh1d_01_01{};
	class vn_b_air_uh1d_01_07: vn_b_air_uh1d_01_01{};
	class vn_b_air_uh1d_02_01: vn_air_uh1d_02_base{};
	class vn_i_air_uh1d_02_01: vn_air_uh1d_02_base{};
	class vn_b_air_uh1d_02_02: vn_b_air_uh1d_02_01{};
	class vn_b_air_uh1d_02_03: vn_b_air_uh1d_02_01{};
	class vn_b_air_uh1d_02_04: vn_b_air_uh1d_02_01{};
	class vn_b_air_uh1d_02_05: vn_b_air_uh1d_02_01{};
	class vn_b_air_uh1d_02_06: vn_b_air_uh1d_02_01{};
	class vn_b_air_uh1d_02_07: vn_b_air_uh1d_02_01{};
	class vn_b_air_uh1d_02_07_test: vn_b_air_uh1d_02_01{};
	class vn_air_oh6a_base: vn_helicopter_base{};
	class vn_air_oh6a_cargo_base: vn_air_oh6a_base{};
	class vn_b_air_oh6a_01: vn_air_oh6a_cargo_base{};
	class vn_b_air_oh6a_02: vn_air_oh6a_base{};
	class vn_b_air_oh6a_03: vn_air_oh6a_base{};
	class vn_b_air_oh6a_04: vn_b_air_oh6a_02{};
	class vn_b_air_oh6a_05: vn_b_air_oh6a_04{};
	class vn_b_air_oh6a_06: vn_b_air_oh6a_04{};
	class vn_b_air_oh6a_07: vn_b_air_oh6a_04{};
	class vn_air_mi2_base: vn_helicopter_base{};
	class vn_air_mi2_01_base: vn_air_mi2_base{};
	class vn_air_mi2_02_base: vn_air_mi2_base{};
	class vn_air_mi2_03_01_base: vn_air_mi2_01_base{};
	class vn_air_mi2_03_02_base: vn_air_mi2_03_01_base{};
	class vn_air_mi2_03_03_base: vn_air_mi2_03_01_base{};
	class vn_air_mi2_04_01_base: vn_air_mi2_03_01_base{};
	class vn_air_mi2_04_02_base: vn_air_mi2_04_01_base{};
	class vn_air_mi2_04_03_base: vn_air_mi2_04_01_base{};
	class vn_air_mi2_05_01_base: vn_air_mi2_04_01_base{};
	class vn_air_mi2_05_02_base: vn_air_mi2_05_01_base{};
	class vn_air_mi2_05_03_base: vn_air_mi2_05_01_base{};
	class vn_o_air_mi2_02_01: vn_air_mi2_02_base{};
	class vn_o_air_mi2_02_02: vn_o_air_mi2_02_01{};
	class vn_o_air_mi2_01_01: vn_air_mi2_01_base{};
	class vn_o_air_mi2_01_02: vn_o_air_mi2_01_01{};
	class vn_o_air_mi2_01_03: vn_o_air_mi2_01_01{};
	class vn_o_air_mi2_03_01: vn_air_mi2_03_01_base{};
	class vn_o_air_mi2_03_02: vn_o_air_mi2_03_01{};
	class vn_o_air_mi2_03_03: vn_air_mi2_03_02_base{};
	class vn_o_air_mi2_03_04: vn_o_air_mi2_03_03{};
	class vn_o_air_mi2_03_05: vn_air_mi2_03_03_base{};
	class vn_o_air_mi2_03_06: vn_o_air_mi2_03_05{};
	class vn_o_air_mi2_04_01: vn_air_mi2_04_01_base{};
	class vn_o_air_mi2_04_02: vn_o_air_mi2_04_01{};
	class vn_o_air_mi2_04_03: vn_air_mi2_04_02_base{};
	class vn_o_air_mi2_04_04: vn_o_air_mi2_04_03{};
	class vn_o_air_mi2_04_05: vn_air_mi2_04_03_base{};
	class vn_o_air_mi2_04_06: vn_o_air_mi2_04_05{};
	class vn_o_air_mi2_05_01: vn_air_mi2_05_01_base{};
	class vn_o_air_mi2_05_02: vn_o_air_mi2_05_01{};
	class vn_o_air_mi2_05_03: vn_air_mi2_05_02_base{};
	class vn_o_air_mi2_05_04: vn_o_air_mi2_05_03{};
	class vn_o_air_mi2_05_05: vn_air_mi2_05_03_base{};
	class vn_o_air_mi2_05_06: vn_o_air_mi2_05_05{};
	class vn_air_f4_base: Plane_Base_F{};
	class vn_air_f4b_base: vn_air_f4_base{};
	class vn_air_f4c_base: vn_air_f4_base{};
	class vn_air_f4c_cap_base: vn_air_f4c_base{};
	class vn_air_f4c_cas_base: vn_air_f4c_base{};
	class vn_air_f4c_hcas_base: vn_air_f4c_base{};
	class vn_air_f4c_ehcas_base: vn_air_f4c_base{};
	class vn_air_f4c_ucas_base: vn_air_f4c_base{};
	class vn_air_f4c_at_base: vn_air_f4c_base{};
	class vn_air_f4c_mr_base: vn_air_f4c_base{};
	class vn_air_f4c_lrbmb_base: vn_air_f4c_base{};
	class vn_air_f4c_bmb_base: vn_air_f4c_base{};
	class vn_air_f4c_lbmb_base: vn_air_f4c_base{};
	class vn_air_f4c_mbmb_base: vn_air_f4c_base{};
	class vn_air_f4c_hbmb_base: vn_air_f4c_base{};
	class vn_air_f4c_gbu_base: vn_air_f4c_base{};
	class vn_air_f4c_cbu_base: vn_air_f4c_base{};
	class vn_air_f4c_sead_base: vn_air_f4c_base{};
	class vn_air_f4c_chico_base: vn_air_f4c_base{};
	class vn_air_f4b_cap_base: vn_air_f4b_base{};
	class vn_air_f4b_cas_base: vn_air_f4b_base{};
	class vn_air_f4b_hcas_base: vn_air_f4b_base{};
	class vn_air_f4b_ehcas_base: vn_air_f4b_base{};
	class vn_air_f4b_ucas_base: vn_air_f4b_base{};
	class vn_air_f4b_at_base: vn_air_f4b_base{};
	class vn_air_f4b_mr_base: vn_air_f4b_base{};
	class vn_air_f4b_lrbmb_base: vn_air_f4b_base{};
	class vn_air_f4b_bmb_base: vn_air_f4b_base{};
	class vn_air_f4b_lbmb_base: vn_air_f4b_base{};
	class vn_air_f4b_mbmb_base: vn_air_f4b_base{};
	class vn_air_f4b_hbmb_base: vn_air_f4b_base{};
	class vn_air_f4b_gbu_base: vn_air_f4b_base{};
	class vn_air_f4b_cbu_base: vn_air_f4b_base{};
	class vn_air_f4b_sead_base: vn_air_f4b_base{};
	class vn_b_air_f4c_cap: vn_air_f4c_cap_base{};
	class vn_b_air_f4c_cas: vn_air_f4c_cas_base{};
	class vn_b_air_f4c_hcas: vn_air_f4c_hcas_base{};
	class vn_b_air_f4c_ehcas: vn_air_f4c_ehcas_base{};
	class vn_b_air_f4c_ucas: vn_air_f4c_ucas_base{};
	class vn_b_air_f4c_at: vn_air_f4c_at_base{};
	class vn_b_air_f4c_mr: vn_air_f4c_mr_base{};
	class vn_b_air_f4c_lrbmb: vn_air_f4c_lrbmb_base{};
	class vn_b_air_f4c_lbmb: vn_air_f4c_lbmb_base{};
	class vn_b_air_f4c_bmb: vn_air_f4c_bmb_base{};
	class vn_b_air_f4c_mbmb: vn_air_f4c_mbmb_base{};
	class vn_b_air_f4c_hbmb: vn_air_f4c_hbmb_base{};
	class vn_b_air_f4c_gbu: vn_air_f4c_gbu_base{};
	class vn_b_air_f4c_cbu: vn_air_f4c_cbu_base{};
	class vn_b_air_f4c_sead: vn_air_f4c_sead_base{};
	class vn_b_air_f4c_chico: vn_air_f4c_chico_base{};
	class vn_b_air_f4b_usmc_cap: vn_air_f4b_cap_base{};
	class vn_b_air_f4b_usmc_cas: vn_air_f4b_cas_base{};
	class vn_b_air_f4b_usmc_hcas: vn_air_f4b_hcas_base{};
	class vn_b_air_f4b_usmc_ehcas: vn_air_f4b_ehcas_base{};
	class vn_b_air_f4b_usmc_ucas: vn_air_f4b_ucas_base{};
	class vn_b_air_f4b_usmc_at: vn_air_f4b_at_base{};
	class vn_b_air_f4b_usmc_mr: vn_air_f4b_mr_base{};
	class vn_b_air_f4b_usmc_lrbmb: vn_air_f4b_lrbmb_base{};
	class vn_b_air_f4b_usmc_lbmb: vn_air_f4b_lbmb_base{};
	class vn_b_air_f4b_usmc_bmb: vn_air_f4b_bmb_base{};
	class vn_b_air_f4b_usmc_mbmb: vn_air_f4b_mbmb_base{};
	class vn_b_air_f4b_usmc_hbmb: vn_air_f4b_hbmb_base{};
	class vn_b_air_f4b_usmc_gbu: vn_air_f4b_gbu_base{};
	class vn_b_air_f4b_usmc_cbu: vn_air_f4b_cbu_base{};
	class vn_b_air_f4b_usmc_sead: vn_air_f4b_sead_base{};
	class vn_b_air_f4b_navy_cap: vn_air_f4b_cap_base{};
	class vn_b_air_f4b_navy_cas: vn_air_f4b_cas_base{};
	class vn_b_air_f4b_navy_hcas: vn_air_f4b_hcas_base{};
	class vn_b_air_f4b_navy_ehcas: vn_air_f4b_ehcas_base{};
	class vn_b_air_f4b_navy_ucas: vn_air_f4b_ucas_base{};
	class vn_b_air_f4b_navy_at: vn_air_f4b_at_base{};
	class vn_b_air_f4b_navy_mr: vn_air_f4b_mr_base{};
	class vn_b_air_f4b_navy_lrbmb: vn_air_f4b_lrbmb_base{};
	class vn_b_air_f4b_navy_lbmb: vn_air_f4b_lbmb_base{};
	class vn_b_air_f4b_navy_bmb: vn_air_f4b_bmb_base{};
	class vn_b_air_f4b_navy_mbmb: vn_air_f4b_mbmb_base{};
	class vn_b_air_f4b_navy_hbmb: vn_air_f4b_hbmb_base{};
	class vn_b_air_f4b_navy_gbu: vn_air_f4b_gbu_base{};
	class vn_b_air_f4b_navy_cbu: vn_air_f4b_cbu_base{};
	class vn_b_air_f4b_navy_sead: vn_air_f4b_sead_base{};
	class vn_air_uh1b_01_base: vn_air_uh1c_base{};
	class vn_air_uh1b_01_med_base: vn_air_uh1b_01_base{};
	class vn_air_uh1f_01_base: vn_air_uh1c_07_base{};
	class vn_air_uh1e_03_base: vn_air_uh1f_01_base{};
	class vn_air_uh1b_02_base: vn_air_uh1c_02_base{};
	class vn_air_uh1e_01_base: vn_air_uh1c_01_base{};
	class vn_air_uh1e_02_base: vn_air_uh1e_01_base{};
	class vn_air_uh1d_04_base: vn_air_uh1d_base{};
	class vn_air_uh1d_03_base: vn_air_uh1d_02_base{};
	class vn_b_air_uh1b_01_09: vn_air_uh1b_01_base{};
	class vn_b_air_uh1b_01_01: vn_air_uh1b_01_med_base{};
	class vn_b_air_uh1b_01_02: vn_air_uh1b_01_med_base{};
	class vn_b_air_uh1b_01_03: vn_air_uh1b_01_med_base{};
	class vn_b_air_uh1b_01_04: vn_air_uh1b_01_med_base{};
	class vn_b_air_uh1b_01_05: vn_air_uh1b_01_med_base{};
	class vn_b_air_uh1b_01_06: vn_air_uh1b_01_med_base{};
	class vn_b_air_uh1f_01_03: vn_air_uh1f_01_base{};
	class vn_b_air_uh1e_03_04: vn_air_uh1e_03_base{};
	class vn_b_air_uh1b_02_04: vn_air_uh1b_02_base{};
	class vn_b_air_uh1b_02_05: vn_air_uh1b_02_base{};
	class vn_b_air_uh1e_01_04: vn_air_uh1e_01_base{};
	class vn_b_air_uh1e_02_04: vn_air_uh1e_02_base{};
	class vn_b_air_uh1d_04_09: vn_air_uh1d_04_base{};
	class vn_b_air_uh1d_03_06: vn_air_uh1d_03_base{};
	class vn_air_mig19_base: Plane_Base_F{};
	class vn_air_mig19_gun_base: vn_air_mig19_base{};
	class vn_air_mig19_cap_base: vn_air_mig19_base{};
	class vn_air_mig19_cas_base: vn_air_mig19_base{};
	class vn_air_mig19_at_base: vn_air_mig19_base{};
	class vn_air_mig19_mr_base: vn_air_mig19_base{};
	class vn_air_mig19_bmb_base: vn_air_mig19_base{};
	class vn_air_mig19_hbmb_base: vn_air_mig19_base{};
	class vn_o_air_mig19_gun: vn_air_mig19_gun_base{};
	class vn_o_air_mig19_cap: vn_air_mig19_cap_base{};
	class vn_o_air_mig19_cas: vn_air_mig19_cas_base{};
	class vn_o_air_mig19_at: vn_air_mig19_at_base{};
	class vn_o_air_mig19_mr: vn_air_mig19_mr_base{};
	class vn_o_air_mig19_bmb: vn_air_mig19_bmb_base{};
	class vn_o_air_mig19_hbmb: vn_air_mig19_hbmb_base{};
	class vn_air_f100d_base: Plane_Base_F{};
	class vn_air_f100d_cap_base: vn_air_f100d_base{};
	class vn_air_f100d_cas_base: vn_air_f100d_base{};
	class vn_air_f100d_hcas_base: vn_air_f100d_base{};
	class vn_air_f100d_ehcas_base: vn_air_f100d_base{};
	class vn_air_f100d_at_base: vn_air_f100d_base{};
	class vn_air_f100d_mr_base: vn_air_f100d_base{};
	class vn_air_f100d_bmb_base: vn_air_f100d_base{};
	class vn_air_f100d_lbmb_base: vn_air_f100d_base{};
	class vn_air_f100d_mbmb_base: vn_air_f100d_base{};
	class vn_air_f100d_hbmb_base: vn_air_f100d_base{};
	class vn_air_f100d_cbu_base: vn_air_f100d_base{};
	class vn_air_f100d_sead_base: vn_air_f100d_base{};
	class vn_b_air_f100d_cap: vn_air_f100d_cap_base{};
	class vn_b_air_f100d_cas: vn_air_f100d_cas_base{};
	class vn_b_air_f100d_hcas: vn_air_f100d_hcas_base{};
	class vn_b_air_f100d_ehcas: vn_air_f100d_ehcas_base{};
	class vn_b_air_f100d_at: vn_air_f100d_at_base{};
	class vn_b_air_f100d_mr: vn_air_f100d_mr_base{};
	class vn_b_air_f100d_bmb: vn_air_f100d_bmb_base{};
	class vn_b_air_f100d_lbmb: vn_air_f100d_lbmb_base{};
	class vn_b_air_f100d_mbmb: vn_air_f100d_mbmb_base{};
	class vn_b_air_f100d_hbmb: vn_air_f100d_hbmb_base{};
	class vn_b_air_f100d_cbu: vn_air_f100d_cbu_base{};
	class vn_b_air_f100d_sead: vn_air_f100d_sead_base{};
	class vn_i_air_uh1d_01_02: vn_air_uh1d_01_base{};
	class vn_i_air_uh1d_02_02: vn_air_uh1d_02_base{};
	class vn_air_ch47_base: vn_helicopter_base{};
	class vn_air_ch47_transport_base: vn_air_ch47_base{};
	class vn_air_ch47_base_2m60: vn_air_ch47_transport_base{};
	class vn_air_ch47_04_base: vn_air_ch47_base_2m60{};
	class vn_air_ch47_01_base: vn_air_ch47_04_base{};
	class vn_air_ch47_02_base: vn_air_ch47_transport_base{};
	class vn_air_ch47_03_base: vn_air_ch47_base_2m60{};
	class vn_air_ach47_base: vn_air_ch47_base{};
	class vn_air_ach47_01_base: vn_air_ach47_base{};
	class vn_air_ach47_02_base: vn_air_ach47_base{};
	class vn_air_ach47_03_base: vn_air_ach47_base{};
	class vn_air_ach47_04_base: vn_air_ach47_base{};
	class vn_air_ach47_05_base: vn_air_ach47_base{};
	class vn_i_air_ch47_01_01: vn_air_ch47_01_base{};
	class vn_i_air_ch47_02_01: vn_air_ch47_02_base{};
	class vn_i_air_ch47_03_01: vn_air_ch47_03_base{};
	class vn_i_air_ch47_04_01: vn_air_ch47_04_base{};
	class vn_b_air_ch47_01_01: vn_air_ch47_01_base{};
	class vn_b_air_ch47_02_01: vn_air_ch47_02_base{};
	class vn_b_air_ch47_03_01: vn_air_ch47_03_base{};
	class vn_b_air_ch47_04_01: vn_air_ch47_04_base{};
	class vn_b_air_ach47_01_01: vn_air_ach47_01_base{};
	class vn_b_air_ach47_02_01: vn_air_ach47_02_base{};
	class vn_b_air_ach47_03_01: vn_air_ach47_03_base{};
	class vn_b_air_ach47_04_01: vn_air_ach47_04_base{};
	class vn_b_air_ach47_05_01: vn_air_ach47_05_base{};
	class vn_b_air_ch47_01_02: vn_air_ch47_01_base{};
	class vn_b_air_ch47_02_02: vn_air_ch47_02_base{};
	class vn_b_air_ch47_03_02: vn_air_ch47_03_base{};
	class vn_b_air_ch47_04_02: vn_air_ch47_04_base{};
	class vn_air_mig21_base: Plane_Base_F{};
	class vn_air_mig21_gun_base: vn_air_mig21_base{};
	class vn_air_mig21_cap_base: vn_air_mig21_base{};
	class vn_air_mig21_cas_base: vn_air_mig21_base{};
	class vn_air_mig21_hcas_base: vn_air_mig21_base{};
	class vn_air_mig21_at_base: vn_air_mig21_base{};
	class vn_air_mig21_atgm_base: vn_air_mig21_base{};
	class vn_air_mig21_mr_base: vn_air_mig21_base{};
	class vn_air_mig21_bmb_base: vn_air_mig21_base{};
	class vn_air_mig21_hbmb_base: vn_air_mig21_base{};
	class vn_o_air_mig21_gun: vn_air_mig21_gun_base{};
	class vn_o_air_mig21_cap: vn_air_mig21_cap_base{};
	class vn_o_air_mig21_cas: vn_air_mig21_cas_base{};
	class vn_o_air_mig21_hcas: vn_air_mig21_hcas_base{};
	class vn_o_air_mig21_at: vn_air_mig21_at_base{};
	class vn_o_air_mig21_atgm: vn_air_mig21_atgm_base{};
	class vn_o_air_mig21_mr: vn_air_mig21_mr_base{};
	class vn_o_air_mig21_bmb: vn_air_mig21_bmb_base{};
	class vn_o_air_mig21_hbmb: vn_air_mig21_hbmb_base{};

//Armor
	class vn_armor_tank_base: Tank_F
	{
		class CargoTurret;
		class CommanderOptics;
		class EventHandlers;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints: HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class ViewOptics: RCWSOptics
				{
				};
				class ViewGunner: ViewPilot
				{
				};
			};
		};
		class ViewOptics;
	};
	class vn_armor_m41_base: vn_armor_tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderTurret: CommanderOptics
					{
					};
					class LoaderTurret: CommanderOptics
					{
					};
				};
			};
		};
	};
	class vn_b_armor_m41_01_01_base: vn_armor_m41_base{};
	class vn_b_armor_m41_01_02_base: vn_armor_m41_base{};
	class vn_i_armor_m41_01_base: vn_armor_m41_base{};
	class vn_o_armor_m41_01_base: vn_armor_m41_base{};
	class vn_o_armor_m41_02_base: vn_armor_m41_base{};
	class vn_b_armor_m41_01_01: vn_b_armor_m41_01_01_base{};
	class vn_b_armor_m41_01_02: vn_b_armor_m41_01_02_base{};
	class vn_i_armor_m41_01: vn_i_armor_m41_01_base{};
	class vn_o_armor_m41_01: vn_o_armor_m41_01_base{};
	class vn_o_armor_m41_02_vcmf: vn_o_armor_m41_02_base{};
	class vn_armor_type63_base: vn_armor_tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class vn_o_armor_type63_01: vn_armor_type63_base{};
	class vn_o_armor_type63_01_nva65: vn_armor_type63_base{};
	class vn_i_armor_type63_01: vn_armor_type63_base{};
	class vn_armor_m113_base: APC_Tracked_01_base_F
	{
		class Attributes
		{
			class vn_flag_raise;
		};
	};
	class vn_armor_m113_01_base: vn_armor_m113_base
	{
		class Turrets
		{
			class mg1_turret: NewTurret
			{
			};
			class commanderTurret: NewTurret
			{
			};
			class cargoTurret_05: CargoTurret
			{
			};
			class cargoTurret_10: cargoTurret_05
			{
			};
			class cargoTurret_12: CargoTurret
			{
			};
			class cargoTurret_13: cargoTurret_12
			{
			};
			class cargoTurret_14: cargoTurret_12
			{
			};
			class cargoTurret_15: cargoTurret_12
			{
			};
			class cargoTurret_16: cargoTurret_12
			{
			};
			class cargoTurret_17: cargoTurret_12
			{
			};
			class cargoTurret_18: cargoTurret_12
			{
			};
		};
	};
	class vn_armor_m113_acav_m2_base: vn_armor_m113_01_base
	{
		class Turrets: Turrets
		{
			class commanderTurret: commanderTurret
			{
			};
			class mg1_turret: mg1_turret
			{
			};
			class mg2_turret: NewTurret
			{
			};
			class mg3_turret: mg2_turret
			{
			};
			class cargoTurret_12: cargoTurret_12
			{
			};
			class cargoTurret_13: cargoTurret_13
			{
			};
			class cargoTurret_14: cargoTurret_14
			{
			};
			class cargoTurret_15: cargoTurret_15
			{
			};
		};
	};
	class vn_armor_m113_acav_m1919_base: vn_armor_m113_acav_m2_base{};
	class vn_armor_m113_acav_m60_base: vn_armor_m113_acav_m2_base{};
	class vn_armor_m113_acav_m134_base: vn_armor_m113_acav_m2_base{};
	class vn_armor_m113_acav_mk18_base: vn_armor_m113_acav_m2_base{};
	class vn_armor_m113_acav_m40_base: vn_armor_m113_acav_m2_base{};
	class vn_b_armor_m113_01: vn_armor_m113_01_base{};
	class vn_b_armor_m113_acav_01: vn_armor_m113_acav_m2_base{};
	class vn_b_armor_m113_acav_02: vn_armor_m113_acav_m1919_base{};
	class vn_b_armor_m113_acav_03: vn_armor_m113_acav_m60_base{};
	class vn_b_armor_m113_acav_04: vn_armor_m113_acav_m134_base{};
	class vn_b_armor_m113_acav_05: vn_armor_m113_acav_mk18_base{};
	class vn_b_armor_m113_acav_06: vn_armor_m113_acav_m40_base{};
	class vn_b_armor_m113_01_aus_army: vn_armor_m113_01_base{};
	class vn_b_armor_m113_01_rok_army: vn_armor_m113_01_base{};
	class vn_b_armor_m113_acav_01_rok_army: vn_armor_m113_acav_m2_base{};
	class vn_b_armor_m113_acav_02_rok_army: vn_armor_m113_acav_m1919_base{};
	class vn_b_armor_m113_acav_03_rok_army: vn_armor_m113_acav_m60_base{};
	class vn_b_armor_m113_acav_04_rok_army: vn_armor_m113_acav_m134_base{};
	class vn_b_armor_m113_acav_05_rok_army: vn_armor_m113_acav_mk18_base{};
	class vn_b_armor_m113_acav_06_rok_army: vn_armor_m113_acav_m40_base{};
	class vn_i_armor_m113_01: vn_armor_m113_01_base{};
	class vn_i_armor_m113_acav_01: vn_armor_m113_acav_m2_base{};
	class vn_i_armor_m113_acav_02: vn_armor_m113_acav_m1919_base{};
	class vn_i_armor_m113_acav_03: vn_armor_m113_acav_m60_base{};
	class vn_i_armor_m113_acav_04: vn_armor_m113_acav_m134_base{};
	class vn_i_armor_m113_acav_05: vn_armor_m113_acav_mk18_base{};
	class vn_i_armor_m113_acav_06: vn_armor_m113_acav_m40_base{};
	class vn_o_armor_m113_01: vn_armor_m113_01_base{};
	class vn_o_armor_m113_acav_01: vn_armor_m113_acav_m2_base{};
	class vn_o_armor_m113_acav_03: vn_armor_m113_acav_m60_base{};
	class vn_armor_pt76_base: vn_armor_tank_base{};
	class vn_armor_pt76a_base: vn_armor_pt76_base{};
	class vn_armor_pt76b_base: vn_armor_pt76_base{};
	class vn_o_armor_pt76a_01_pl: vn_armor_pt76a_base{};
	class vn_o_armor_pt76a_01_nva65: vn_armor_pt76a_base{};
	class vn_o_armor_pt76b_01_nva65: vn_armor_pt76b_base{};
	class vn_o_armor_pt76a_01: vn_armor_pt76a_base{};
	class vn_o_armor_pt76b_01: vn_armor_pt76b_base{};
	class vn_armor_btr50pk_base: vn_armor_tank_base{};
	class vn_armor_btr50pk_01_base: vn_armor_btr50pk_base{};
	class vn_armor_btr50pk_02_base: vn_armor_btr50pk_01_base{};
	class vn_armor_btr50pk_03_base: vn_armor_btr50pk_base{};
	class vn_o_armor_btr50pk_01_nva65: vn_armor_btr50pk_01_base{};
	class vn_o_armor_btr50pk_01: vn_armor_btr50pk_01_base{};
	class vn_o_armor_btr50pk_01_nvam: vn_armor_btr50pk_01_base{};
	class vn_o_armor_btr50pk_02_nva65: vn_armor_btr50pk_02_base{};
	class vn_o_armor_btr50pk_02: vn_armor_btr50pk_02_base{};
	class vn_o_armor_btr50pk_02_nvam: vn_armor_btr50pk_02_base{};
	class vn_o_armor_btr50pk_03_nva65: vn_armor_btr50pk_03_base{};
	class vn_o_armor_btr50pk_03: vn_armor_btr50pk_03_base{};
	class vn_o_armor_btr50pk_03_nvam: vn_armor_btr50pk_03_base{};
	class vn_armor_m125_base: vn_armor_m113_01_base
	{
		class Turrets: Turrets
		{
			class mg1_turret: mg1_turret
			{
			};
			class commanderTurret: commanderTurret
			{
			};
			class m29_turret: NewTurret
			{
			};
		};
	};
	class vn_armor_m132_base: vn_armor_m113_01_base{};
	class vn_armor_m577_base: vn_armor_m113_base
	{
		class Attributes: Attributes
		{
			class vn_tent
			{
			};
			class vn_flag_raise: vn_flag_raise
			{
			};
		};
	};
	class vn_armor_m577_01_base: vn_armor_m577_base{};
	class vn_armor_m577_02_base: vn_armor_m577_base{};
	class vn_i_armor_m125_01: vn_armor_m125_base{};
	class vn_i_armor_m132_01: vn_armor_m132_base{};
	class vn_i_armor_m577_01: vn_armor_m577_01_base{};
	class vn_i_armor_m577_02: vn_armor_m577_02_base{};
	class vn_b_armor_m125_01_aus_army: vn_armor_m125_base{};
	class vn_b_armor_m577_01_aus_army: vn_armor_m577_01_base{};
	class vn_b_armor_m577_02_aus_army: vn_armor_m577_02_base{};
	class vn_i_armor_m113_01_fank_71: vn_armor_m113_01_base{};
	class vn_i_armor_m113_acav_01_fank_71: vn_armor_m113_acav_m2_base{};
	class vn_i_armor_m113_acav_02_fank_71: vn_armor_m113_acav_m1919_base{};
	class vn_i_armor_m113_acav_03_fank_71: vn_armor_m113_acav_m60_base{};
	class vn_i_armor_m113_acav_06_fank_71: vn_armor_m113_acav_m40_base{};
	class vn_o_armor_m113_01_kr: vn_armor_m113_01_base{};
	class vn_o_armor_m113_acav_01_kr: vn_armor_m113_acav_m2_base{};
	class vn_o_armor_m113_acav_02_kr: vn_armor_m113_acav_m1919_base{};
	class vn_o_armor_m113_acav_03_kr: vn_armor_m113_acav_m60_base{};
	class vn_o_armor_m113_acav_06_kr: vn_armor_m113_acav_m40_base{};
	class vn_o_armor_m125_01: vn_armor_m125_base{};
	class vn_o_armor_m577_01: vn_armor_m577_01_base{};
	class vn_o_armor_m577_02: vn_armor_m577_02_base{};
	class vn_b_armor_m125_01_rok_army: vn_armor_m125_base{};
	class vn_b_armor_m577_01_rok_army: vn_armor_m577_01_base{};
	class vn_b_armor_m577_02_rok_army: vn_armor_m577_02_base{};
	class vn_b_armor_m125_01: vn_armor_m125_base{};
	class vn_b_armor_m132_01: vn_armor_m132_base{};
	class vn_b_armor_m577_01: vn_armor_m577_01_base{};
	class vn_b_armor_m577_02: vn_armor_m577_02_base{};
	class vn_armor_t54_base: vn_armor_tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderTurret: NewTurret
					{
					};
					class LoaderTurret: NewTurret
					{
					};
				};
			};
		};
	};
	class vn_armor_t54b_base: vn_armor_t54_base{};
	class vn_armor_ot54_base: vn_armor_t54_base{};
	class vn_o_armor_t54b_01_nva65: vn_armor_t54b_base{};
	class vn_o_armor_t54b_01: vn_armor_t54b_base{};
	class vn_o_armor_t54b_01_vcmf: vn_armor_t54b_base{};
	class vn_o_armor_ot54_01_nva65: vn_armor_ot54_base{};
	class vn_o_armor_ot54_01: vn_armor_ot54_base{};
	class vn_o_armor_ot54_01_vcmf: vn_armor_ot54_base{};
	class vn_armor_m48_base: vn_armor_tank_base
	{
		class Turrets: Turrets
		{
			class CargoTurret_1: CargoTurret
			{
			};
			class CargoTurret_2: CargoTurret_1
			{
			};
			class CargoTurret_3: CargoTurret_1
			{
			};
			class CargoTurret_4: CargoTurret_1
			{
			};
			class CargoTurret_5: CargoTurret_1
			{
			};
			class CargoTurret_6: CargoTurret_1
			{
			};
		};
	};
	class vn_armor_m48a3_base: vn_armor_m48_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderTurret: NewTurret
					{
					};
					class LoaderTurret: NewTurret
					{
					};
				};
			};
			class CargoTurret_1: CargoTurret_1
			{
			};
			class CargoTurret_2: CargoTurret_2
			{
			};
			class CargoTurret_3: CargoTurret_3
			{
			};
			class CargoTurret_4: CargoTurret_4
			{
			};
			class CargoTurret_5: CargoTurret_5
			{
			};
			class CargoTurret_6: CargoTurret_6
			{
			};
		};
	};
	class vn_armor_m67a2_base: vn_armor_m48_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderTurret: NewTurret
					{
					};
				};
			};
			class CargoTurret_1: CargoTurret_1
			{
			};
			class CargoTurret_2: CargoTurret_2
			{
			};
			class CargoTurret_3: CargoTurret_3
			{
			};
			class CargoTurret_4: CargoTurret_4
			{
			};
			class CargoTurret_5: CargoTurret_5
			{
			};
			class CargoTurret_6: CargoTurret_6
			{
			};
		};
	};
	class vn_b_armor_m48_01_01: vn_armor_m48a3_base{};
	class vn_b_armor_m67_01_01: vn_armor_m67a2_base{};
	class vn_b_armor_m48_01_02: vn_armor_m48a3_base{};
	class vn_b_armor_m67_01_02: vn_armor_m67a2_base{};
	class vn_i_armor_m48_01_01: vn_armor_m48a3_base{};
	class vn_i_armor_m67_01_01: vn_armor_m67a2_base{};

//Boats
	class vn_boat_armed_base: Boat_Armed_01_base_F{};
	class vn_boat_03_base: vn_boat_armed_base{};
	class vn_boat_03_turret_base: vn_boat_03_base{};
	class vn_boat_04_turret_base: vn_boat_03_base{};
	class vn_o_boat_03_base: vn_boat_03_turret_base{};
	class vn_o_boat_04_base: vn_boat_04_turret_base{};
	class vn_o_boat_03_01: vn_o_boat_03_base{};
	class vn_o_boat_03_02: vn_o_boat_03_01{};
	class vn_o_boat_04_01: vn_o_boat_04_base{};
	class vn_o_boat_04_02: vn_o_boat_04_01{};
	class vn_boat_01_base: Boat_F{};
	class vn_boat_01_cargo_base: vn_boat_01_base{};
	class vn_boat_02_base: vn_boat_01_base{};
	class vn_boat_02_cargo_base: vn_boat_02_base{};
	class vn_boat_01_mg_base: vn_boat_01_base{};
	class vn_boat_02_mg_base: vn_boat_02_base{};
	class vn_c_boat_01_base: vn_boat_01_base{};
	class vn_c_boat_02_base: vn_boat_02_base{};
	class vn_c_boat_01_cargo_base: vn_boat_01_cargo_base{};
	class vn_c_boat_02_cargo_base: vn_boat_02_cargo_base{};
	class vn_c_boat_01_00: vn_c_boat_01_base{};
	class vn_c_boat_01_01: vn_c_boat_01_base{};
	class vn_c_boat_01_02: vn_c_boat_01_base{};
	class vn_c_boat_01_03: vn_c_boat_01_cargo_base{};
	class vn_c_boat_01_04: vn_c_boat_01_cargo_base{};
	class vn_c_boat_02_00: vn_c_boat_02_base{};
	class vn_c_boat_02_01: vn_c_boat_02_base{};
	class vn_c_boat_02_02: vn_c_boat_02_base{};
	class vn_c_boat_02_03: vn_c_boat_02_cargo_base{};
	class vn_c_boat_02_04: vn_c_boat_02_cargo_base{};
	class vn_o_boat_01_base: vn_boat_01_base{};
	class vn_o_boat_02_base: vn_boat_02_base{};
	class vn_o_boat_01_cargo_base: vn_boat_01_cargo_base{};
	class vn_o_boat_02_cargo_base: vn_boat_02_cargo_base{};
	class vn_o_boat_01_mg_base: vn_boat_01_mg_base{};
	class vn_o_boat_02_mg_base: vn_boat_02_mg_base{};
	class vn_o_boat_01_00: vn_o_boat_01_base{};
	class vn_o_boat_01_01: vn_o_boat_01_base{};
	class vn_o_boat_01_02: vn_o_boat_01_base{};
	class vn_o_boat_01_03: vn_o_boat_01_cargo_base{};
	class vn_o_boat_01_04: vn_o_boat_01_cargo_base{};
	class vn_o_boat_02_00: vn_o_boat_02_base{};
	class vn_o_boat_02_01: vn_o_boat_02_base{};
	class vn_o_boat_02_02: vn_o_boat_02_base{};
	class vn_o_boat_02_03: vn_o_boat_02_cargo_base{};
	class vn_o_boat_02_04: vn_o_boat_02_cargo_base{};
	class vn_o_boat_01_mg_00: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_01: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_02: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_03: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_04: vn_o_boat_01_mg_base{};
	class vn_o_boat_02_mg_00: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_01: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_02: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_03: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_04: vn_o_boat_02_mg_base{};
	class vn_boat_05_base: vn_boat_armed_base{};
	class vn_boat_05_turret_base: vn_boat_05_base{};
	class vn_boat_06_turret_base: vn_boat_05_base{};
	class vn_b_boat_05_01: vn_boat_05_turret_base{};
	class vn_b_boat_05_02: vn_b_boat_05_01{};
	class vn_b_boat_06_01: vn_boat_06_turret_base{};
	class vn_b_boat_06_02: vn_b_boat_06_01{};
	class vn_boat_07_trans_base: Boat_F{};
	class vn_boat_07_cargo_base: vn_boat_07_trans_base{};
	class vn_boat_08_trans_base: vn_boat_07_trans_base{};
	class vn_boat_08_cargo_base: vn_boat_08_trans_base{};
	class vn_c_boat_07_trans_base: vn_boat_07_trans_base{};
	class vn_c_boat_07_cargo_base: vn_boat_07_cargo_base{};
	class vn_c_boat_07_01: vn_c_boat_07_trans_base{};
	class vn_c_boat_07_02: vn_c_boat_07_cargo_base{};
	class vn_c_boat_08_trans_base: vn_boat_08_trans_base{};
	class vn_c_boat_08_cargo_base: vn_boat_08_cargo_base{};
	class vn_c_boat_08_01: vn_c_boat_08_trans_base{};
	class vn_c_boat_08_02: vn_c_boat_08_cargo_base{};
	class vn_o_boat_07_trans_base: vn_boat_07_trans_base{};
	class vn_o_boat_07_cargo_base: vn_boat_07_cargo_base{};
	class vn_o_boat_07_01: vn_o_boat_07_trans_base{};
	class vn_o_boat_07_02: vn_o_boat_07_cargo_base{};
	class vn_o_boat_08_trans_base: vn_boat_08_trans_base{};
	class vn_o_boat_08_cargo_base: vn_boat_08_cargo_base{};
	class vn_o_boat_08_01: vn_o_boat_08_trans_base{};
	class vn_o_boat_08_02: vn_o_boat_08_cargo_base{};
	class vn_o_boat_01_00_pl: vn_o_boat_01_base{};
	class vn_o_boat_01_01_pl: vn_o_boat_01_base{};
	class vn_o_boat_01_02_pl: vn_o_boat_01_base{};
	class vn_o_boat_01_03_pl: vn_o_boat_01_cargo_base{};
	class vn_o_boat_01_04_pl: vn_o_boat_01_cargo_base{};
	class vn_o_boat_02_00_pl: vn_o_boat_02_base{};
	class vn_o_boat_02_01_pl: vn_o_boat_02_base{};
	class vn_o_boat_02_02_pl: vn_o_boat_02_base{};
	class vn_o_boat_02_03_pl: vn_o_boat_02_cargo_base{};
	class vn_o_boat_02_04_pl: vn_o_boat_02_cargo_base{};
	class vn_o_boat_01_mg_00_pl: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_01_pl: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_02_pl: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_03_pl: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_04_pl: vn_o_boat_01_mg_base{};
	class vn_o_boat_02_mg_00_pl: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_01_pl: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_02_pl: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_03_pl: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_04_pl: vn_o_boat_02_mg_base{};
	class vn_boat_12_base: vn_boat_armed_base
	{
		class Turrets
		{
			class mg1_turret;
			class mg2_turret;
			class commanderTurret_01;
			class commanderTurret_02;
			class cargoTurret_01;
			class cargoTurret_02;
			class cargoTurret_03;
			class cargoTurret_04;
		};
	};
	class vn_boat_12_turret_base: vn_boat_12_base
	{
		class Turrets: Turrets
		{
			class mg1_turret;
			class mg2_turret;
			class commanderTurret_01;
			class commanderTurret_02;
			class cargoTurret_01;
			class cargoTurret_02;
			class cargoTurret_03;
			class cargoTurret_04;
			class mg3_turret;
			class mg4_turret;
		};
	};
	class vn_boat_13_turret_base: vn_boat_12_base{};
	class vn_b_boat_12_01: vn_boat_12_turret_base{};
	class vn_b_boat_12_02: vn_boat_12_turret_base{};
	class vn_b_boat_12_03: vn_boat_12_turret_base{};
	class vn_b_boat_12_04: vn_boat_12_turret_base{};
	class vn_b_boat_13_01: vn_boat_13_turret_base{};
	class vn_b_boat_13_02: vn_boat_13_turret_base{};
	class vn_b_boat_13_03: vn_boat_13_turret_base{};
	class vn_b_boat_13_04: vn_boat_13_turret_base{};
	class vn_boat_09_base: vn_boat_armed_base{};
	class vn_boat_09_turret_base: vn_boat_09_base{};
	class vn_boat_10_turret_base: vn_boat_09_base{};
	class vn_boat_11_turret_base: vn_boat_09_base{};
	class vn_b_boat_09_01: vn_boat_09_turret_base{};
	class vn_b_boat_10_01: vn_boat_10_turret_base{};
	class vn_b_boat_11_01: vn_boat_11_turret_base{};
	class vn_o_boat_01_00_kr: vn_o_boat_01_base{};
	class vn_o_boat_01_01_kr: vn_o_boat_01_base{};
	class vn_o_boat_01_02_kr: vn_o_boat_01_base{};
	class vn_o_boat_01_03_kr: vn_o_boat_01_cargo_base{};
	class vn_o_boat_01_04_kr: vn_o_boat_01_cargo_base{};
	class vn_o_boat_02_00_kr: vn_o_boat_02_base{};
	class vn_o_boat_02_01_kr: vn_o_boat_02_base{};
	class vn_o_boat_02_02_kr: vn_o_boat_02_base{};
	class vn_o_boat_02_03_kr: vn_o_boat_02_cargo_base{};
	class vn_o_boat_02_04_kr: vn_o_boat_02_cargo_base{};
	class vn_o_boat_01_mg_00_kr: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_01_kr: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_02_kr: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_03_kr: vn_o_boat_01_mg_base{};
	class vn_o_boat_01_mg_04_kr: vn_o_boat_01_mg_base{};
	class vn_o_boat_02_mg_00_kr: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_01_kr: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_02_kr: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_03_kr: vn_o_boat_02_mg_base{};
	class vn_o_boat_02_mg_04_kr: vn_o_boat_02_mg_base{};
	class vn_i_boat_01_00_fank_70: vn_o_boat_01_base{};
	class vn_i_boat_01_01_fank_70: vn_o_boat_01_base{};
	class vn_i_boat_01_02_fank_70: vn_o_boat_01_base{};
	class vn_i_boat_01_03_fank_70: vn_o_boat_01_cargo_base{};
	class vn_i_boat_01_04_fank_70: vn_o_boat_01_cargo_base{};
	class vn_i_boat_02_00_fank_70: vn_o_boat_02_base{};
	class vn_i_boat_02_01_fank_70: vn_o_boat_02_base{};
	class vn_i_boat_02_02_fank_70: vn_o_boat_02_base{};
	class vn_i_boat_02_03_fank_70: vn_o_boat_02_cargo_base{};
	class vn_i_boat_02_04_fank_70: vn_o_boat_02_cargo_base{};
	class vn_i_boat_01_mg_00_fank_70: vn_o_boat_01_mg_base{};
	class vn_i_boat_01_mg_01_fank_70: vn_o_boat_01_mg_base{};
	class vn_i_boat_01_mg_02_fank_70: vn_o_boat_01_mg_base{};
	class vn_i_boat_01_mg_03_fank_70: vn_o_boat_01_mg_base{};
	class vn_i_boat_01_mg_04_fank_70: vn_o_boat_01_mg_base{};
	class vn_i_boat_02_mg_00_fank_70: vn_o_boat_02_mg_base{};
	class vn_i_boat_02_mg_01_fank_70: vn_o_boat_02_mg_base{};
	class vn_i_boat_02_mg_02_fank_70: vn_o_boat_02_mg_base{};
	class vn_i_boat_02_mg_03_fank_70: vn_o_boat_02_mg_base{};
	class vn_i_boat_02_mg_04_fank_70: vn_o_boat_02_mg_base{};
	class vn_o_boat_07_01_kr: vn_o_boat_07_trans_base{};
	class vn_o_boat_07_02_kr: vn_o_boat_07_cargo_base{};
	class vn_o_boat_08_01_kr: vn_o_boat_08_trans_base{};
	class vn_o_boat_08_02_kr: vn_o_boat_08_cargo_base{};
	class vn_i_boat_12_01_fank_71: vn_boat_12_turret_base{};
	class vn_i_boat_12_02_fank_71: vn_boat_12_turret_base{};
	class vn_i_boat_12_03_fank_71: vn_boat_12_turret_base{};
	class vn_i_boat_12_04_fank_71: vn_boat_12_turret_base{};

//Characters
	class vn_b_men_sog_base: B_Soldier_base_F{};
	class vn_b_men_sog_viet_base: vn_b_men_sog_base{};
	class vn_b_men_sog_indig_base: vn_b_men_sog_viet_base{};
	class vn_b_men_sog_asian_base: vn_b_men_sog_viet_base{};
	class vn_b_men_sog_medic_base: vn_b_men_sog_base{};
	class vn_b_men_sog_asian_medic_base: vn_b_men_sog_asian_base{};
	class vn_basecharacter_01: B_Soldier_base_F{};
	class vn_b_men_sog_01: vn_b_men_sog_base{};
	class vn_b_men_sog_02: vn_b_men_sog_base{};
	class vn_b_men_sog_03: vn_b_men_sog_base{};
	class vn_b_men_sog_13: vn_b_men_sog_base{};
	class vn_b_men_sog_14: vn_b_men_sog_base{};
	class vn_b_men_sog_15: vn_b_men_sog_base{};
	class vn_b_men_sog_04: vn_b_men_sog_indig_base{};
	class vn_b_men_sog_05: vn_b_men_sog_viet_base{};
	class vn_b_men_sog_06: vn_b_men_sog_indig_base{};
	class vn_b_men_sog_07: vn_b_men_sog_asian_base{};
	class vn_b_men_sog_08: vn_b_men_sog_indig_base{};
	class vn_b_men_sog_09: vn_b_men_sog_viet_base{};
	class vn_b_men_sog_10: vn_b_men_sog_asian_medic_base{};
	class vn_b_men_sog_11: vn_b_men_sog_indig_base{};
	class vn_b_men_sog_12: vn_b_men_sog_asian_base{};
	class vn_b_men_sog_16: vn_b_men_sog_indig_base{};
	class vn_b_men_sog_17: vn_b_men_sog_viet_base{};
	class vn_b_men_sog_18: vn_b_men_sog_indig_base{};
	class vn_b_men_sog_19: vn_b_men_sog_asian_base{};
	class vn_b_men_sog_20: vn_b_men_sog_indig_base{};
	class vn_b_men_sog_21: vn_b_men_sog_viet_base{};
	class vn_b_men_sog_22: vn_b_men_sog_base{};
	class vn_b_men_sog_23: vn_b_men_sog_22{};
	class vn_b_men_sog_24: vn_b_men_sog_23{};
	class vn_b_men_sog_25: vn_b_men_sog_24{};
	class vn_b_men_sog_26: vn_b_men_sog_24{};
	class vn_b_men_sog_27: vn_b_men_sog_24{};
	class vn_b_men_sog_28: vn_b_men_sog_asian_base{};
	class vn_b_men_sog_29: vn_b_men_sog_base{};
	class vn_b_men_sog_30: vn_b_men_sog_base{};
	class vn_b_men_sog_31: vn_b_men_sog_base{};
	class vn_b_men_sf_base: vn_b_men_sog_base{};
	class vn_b_men_sf_viet_base: vn_b_men_sf_base{};
	class vn_b_men_sf_indig_base: vn_b_men_sf_viet_base{};
	class vn_b_men_sf_asian_base: vn_b_men_sf_viet_base{};
	class vn_b_men_sf_medic_base: vn_b_men_sf_base{};
	class vn_b_men_sf_asian_medic_base: vn_b_men_sf_asian_base{};
	class vn_b_men_sf_01: vn_b_men_sf_base{};
	class vn_b_men_sf_02: vn_b_men_sf_base{};
	class vn_b_men_sf_03: vn_b_men_sf_base{};
	class vn_b_men_sf_04: vn_b_men_sf_base{};
	class vn_b_men_sf_05: vn_b_men_sf_base{};
	class vn_b_men_sf_06: vn_b_men_sf_base{};
	class vn_b_men_sf_07: vn_b_men_sf_viet_base{};
	class vn_b_men_sf_08: vn_b_men_sf_indig_base{};
	class vn_b_men_sf_09: vn_b_men_sf_asian_base{};
	class vn_b_men_sf_10: vn_b_men_sf_viet_base{};
	class vn_b_men_sf_11: vn_b_men_sf_indig_base{};
	class vn_b_men_sf_12: vn_b_men_sf_asian_base{};
	class vn_b_men_sf_13: vn_b_men_sf_indig_base{};
	class vn_b_men_sf_14: vn_b_men_sf_viet_base{};
	class vn_b_men_sf_15: vn_b_men_sf_indig_base{};
	class vn_b_men_sf_16: vn_b_men_sf_asian_base{};
	class vn_b_men_sf_17: vn_b_men_sf_indig_base{};
	class vn_b_men_sf_18: vn_b_men_sf_viet_base{};
	class vn_b_men_sf_19: vn_b_men_sf_indig_base{};
	class vn_b_men_sf_20: vn_b_men_sf_indig_base{};
	class vn_b_men_sf_21: vn_b_men_sf_asian_base{};
	class vn_b_men_sf_22: vn_b_men_sf_base{};
	class vn_b_men_cidg_base: vn_b_men_sog_base{};
	class vn_b_men_cidg_medic_base: vn_b_men_cidg_base{};
	class vn_b_men_cidg_viet_base: vn_b_men_cidg_base{};
	class vn_b_men_cidg_indig_base: vn_b_men_cidg_viet_base{};
	class vn_b_men_cidg_asian_base: vn_b_men_cidg_viet_base{};
	class vn_b_men_cidg_asian_medic_base: vn_b_men_cidg_viet_base{};
	class vn_b_men_cidg_01: vn_b_men_cidg_base{};
	class vn_b_men_cidg_02: vn_b_men_cidg_base{};
	class vn_b_men_cidg_03: vn_b_men_cidg_base{};
	class vn_b_men_cidg_04: vn_b_men_cidg_base{};
	class vn_b_men_cidg_05: vn_b_men_cidg_base{};
	class vn_b_men_cidg_06: vn_b_men_cidg_base{};
	class vn_b_men_cidg_07: vn_b_men_cidg_asian_base{};
	class vn_b_men_cidg_08: vn_b_men_cidg_indig_base{};
	class vn_b_men_cidg_09: vn_b_men_cidg_viet_base{};
	class vn_b_men_cidg_10: vn_b_men_cidg_asian_base{};
	class vn_b_men_cidg_11: vn_b_men_cidg_indig_base{};
	class vn_b_men_cidg_12: vn_b_men_cidg_viet_base{};
	class vn_b_men_cidg_13: vn_b_men_cidg_indig_base{};
	class vn_b_men_cidg_14: vn_b_men_cidg_asian_base{};
	class vn_b_men_cidg_15: vn_b_men_cidg_indig_base{};
	class vn_b_men_cidg_16: vn_b_men_cidg_viet_base{};
	class vn_b_men_cidg_17: vn_b_men_cidg_indig_base{};
	class vn_b_men_cidg_18: vn_b_men_cidg_asian_base{};
	class vn_b_men_cidg_19: vn_b_men_cidg_indig_base{};
	class vn_b_men_cidg_20: vn_b_men_cidg_indig_base{};
	class vn_b_men_cidg_21: vn_b_men_cidg_viet_base{};
	class vn_b_men_cidg_22: vn_b_men_cidg_base{};
	class vn_b_men_lrrp_base: vn_b_men_sog_base{};
	class vn_b_men_lrrp_medic_base: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_asian_base: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_asian_medic_base: vn_b_men_lrrp_asian_base{};
	class vn_b_men_lrrp_01: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_02: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_03: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_04: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_05: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_06: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_07: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_08: vn_b_men_lrrp_base{};
	class vn_b_men_lrrp_09: vn_b_men_lrrp_base{};
	class vn_b_men_army_base: vn_b_men_sog_base{};
	class vn_b_men_army_medic_base: vn_b_men_army_base{};
	class vn_b_men_army_01: vn_b_men_army_base{};
	class vn_b_men_army_02: vn_b_men_army_base{};
	class vn_b_men_army_03: vn_b_men_army_base{};
	class vn_b_men_army_04: vn_b_men_army_base{};
	class vn_b_men_army_05: vn_b_men_army_base{};
	class vn_b_men_army_06: vn_b_men_army_base{};
	class vn_b_men_army_07: vn_b_men_army_base{};
	class vn_b_men_army_08: vn_b_men_army_base{};
	class vn_b_men_army_09: vn_b_men_army_base{};
	class vn_b_men_army_10: vn_b_men_army_base{};
	class vn_b_men_army_11: vn_b_men_army_base{};
	class vn_b_men_army_12: vn_b_men_army_base{};
	class vn_b_men_army_13: vn_b_men_army_base{};
	class vn_b_men_army_14: vn_b_men_army_base{};
	class vn_b_men_army_15: vn_b_men_army_base{};
	class vn_b_men_army_16: vn_b_men_army_15{};
	class vn_b_men_army_17: vn_b_men_army_15{};
	class vn_b_men_army_18: vn_b_men_army_15{};
	class vn_b_men_army_19: vn_b_men_army_15{};
	class vn_b_men_army_20: vn_b_men_army_15{};
	class vn_b_men_army_21: vn_b_men_army_15{};
	class vn_b_men_army_22: vn_b_men_army_15{};
	class vn_b_men_army_23: vn_b_men_army_01{};
	class vn_b_men_army_24: vn_b_men_army_01{};
	class vn_b_men_army_25: vn_b_men_army_01{};
	class vn_b_men_army_26: vn_b_men_army_base{};
	class vn_b_men_army_27: vn_b_men_army_base{};
	class vn_b_men_army_28: vn_b_men_army_base{};
	class vn_b_men_army_29: vn_b_men_army_01{};
	class vn_b_men_army_30: vn_b_men_army_01{};
	class vn_b_men_army_31: vn_b_men_army_01{};
	class vn_b_men_navy_base: vn_b_men_army_base{};
	class vn_b_men_navy_01: vn_b_men_navy_base{};
	class vn_b_men_navy_02: vn_b_men_navy_base{};
	class vn_b_men_navy_03: vn_b_men_navy_base{};
	class vn_b_men_navy_04: vn_b_men_navy_base{};
	class vn_b_men_navy_05: vn_b_men_navy_base{};
	class vn_b_men_navy_06: vn_b_men_navy_base{};
	class vn_b_men_navy_07: vn_b_men_navy_base{};
	class vn_b_men_navy_08: vn_b_men_navy_base{};
	class vn_b_men_navy_09: vn_b_men_navy_base{};
	class vn_b_men_aircrew_base: SoldierWB{};
	class vn_b_men_aircrew_01: vn_b_men_aircrew_base{};
	class vn_b_men_aircrew_02: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_03: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_04: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_05: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_06: vn_b_men_aircrew_02{};
	class vn_b_men_aircrew_07: vn_b_men_aircrew_03{};
	class vn_b_men_aircrew_08: vn_b_men_aircrew_04{};
	class vn_b_men_aircrew_09: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_10: vn_b_men_aircrew_02{};
	class vn_b_men_aircrew_11: vn_b_men_aircrew_03{};
	class vn_b_men_aircrew_12: vn_b_men_aircrew_04{};
	class vn_b_men_aircrew_13: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_14: vn_b_men_aircrew_02{};
	class vn_b_men_aircrew_15: vn_b_men_aircrew_03{};
	class vn_b_men_aircrew_16: vn_b_men_aircrew_04{};
	class vn_b_men_aircrew_17: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_18: vn_b_men_aircrew_02{};
	class vn_b_men_aircrew_19: vn_b_men_aircrew_03{};
	class vn_b_men_aircrew_20: vn_b_men_aircrew_04{};
	class vn_b_men_aircrew_21: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_22: vn_b_men_aircrew_02{};
	class vn_b_men_aircrew_23: vn_b_men_aircrew_03{};
	class vn_b_men_aircrew_24: vn_b_men_aircrew_04{};
	class vn_b_men_aircrew_25: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_26: vn_b_men_aircrew_02{};
	class vn_b_men_jetpilot_01: vn_b_men_aircrew_base{};
	class vn_b_men_jetpilot_02: vn_b_men_jetpilot_01{};
	class vn_b_men_jetpilot_03: vn_b_men_jetpilot_01{};
	class vn_b_men_jetpilot_04: vn_b_men_jetpilot_03{};
	class vn_b_men_jetpilot_05: vn_b_men_jetpilot_03{};
	class vn_b_men_jetpilot_06: vn_b_men_jetpilot_03{};
	class vn_b_men_jetpilot_07: vn_b_men_jetpilot_01{};
	class vn_b_men_jetpilot_08: vn_b_men_jetpilot_07{};
	class vn_b_men_jetpilot_09: vn_b_men_jetpilot_01{};
	class vn_b_men_jetpilot_10: vn_b_men_jetpilot_09{};
	class vn_i_men_army_base: SoldierGB{};
	class vn_i_men_army_medic_base: vn_i_men_army_base{};
	class vn_i_men_army_01: vn_i_men_army_base{};
	class vn_i_men_army_02: vn_i_men_army_base{};
	class vn_i_men_army_03: vn_i_men_army_base{};
	class vn_i_men_army_04: vn_i_men_army_base{};
	class vn_i_men_army_05: vn_i_men_army_base{};
	class vn_i_men_army_06: vn_i_men_army_base{};
	class vn_i_men_army_07: vn_i_men_army_base{};
	class vn_i_men_army_08: vn_i_men_army_base{};
	class vn_i_men_army_09: vn_i_men_army_base{};
	class vn_i_men_army_10: vn_i_men_army_base{};
	class vn_i_men_army_11: vn_i_men_army_base{};
	class vn_i_men_army_12: vn_i_men_army_base{};
	class vn_i_men_army_13: vn_i_men_army_base{};
	class vn_i_men_army_14: vn_i_men_army_base{};
	class vn_i_men_army_15: vn_i_men_army_base{};
	class vn_i_men_army_16: vn_i_men_army_15{};
	class vn_i_men_army_17: vn_i_men_army_15{};
	class vn_i_men_army_18: vn_i_men_army_15{};
	class vn_i_men_army_19: vn_i_men_army_15{};
	class vn_i_men_army_20: vn_i_men_army_15{};
	class vn_i_men_army_21: vn_i_men_army_15{};
	class vn_i_men_army_22: vn_i_men_army_15{};
	class vn_i_men_army_23: vn_i_men_army_01{};
	class vn_i_men_army_24: vn_i_men_army_01{};
	class vn_i_men_army_25: vn_i_men_army_01{};
	class vn_i_men_army_26: vn_i_men_army_base{};
	class vn_i_men_ranger_base: vn_i_men_army_base{};
	class vn_i_men_ranger_medic_base: vn_i_men_army_medic_base{};
	class vn_i_men_ranger_01: vn_i_men_ranger_base{};
	class vn_i_men_ranger_02: vn_i_men_ranger_base{};
	class vn_i_men_ranger_03: vn_i_men_ranger_base{};
	class vn_i_men_ranger_04: vn_i_men_ranger_base{};
	class vn_i_men_ranger_05: vn_i_men_ranger_base{};
	class vn_i_men_ranger_06: vn_i_men_ranger_base{};
	class vn_i_men_ranger_07: vn_i_men_ranger_base{};
	class vn_i_men_ranger_08: vn_i_men_ranger_base{};
	class vn_i_men_ranger_09: vn_i_men_ranger_base{};
	class vn_i_men_ranger_10: vn_i_men_ranger_base{};
	class vn_i_men_ranger_11: vn_i_men_ranger_base{};
	class vn_i_men_ranger_12: vn_i_men_ranger_base{};
	class vn_i_men_ranger_13: vn_i_men_ranger_base{};
	class vn_i_men_ranger_14: vn_i_men_ranger_base{};
	class vn_i_men_ranger_15: vn_i_men_ranger_base{};
	class vn_i_men_ranger_16: vn_i_men_ranger_15{};
	class vn_i_men_ranger_17: vn_i_men_ranger_15{};
	class vn_i_men_ranger_18: vn_i_men_ranger_15{};
	class vn_i_men_ranger_19: vn_i_men_ranger_15{};
	class vn_i_men_ranger_20: vn_i_men_ranger_15{};
	class vn_i_men_ranger_21: vn_i_men_ranger_15{};
	class vn_i_men_ranger_22: vn_i_men_ranger_base{};
	class vn_i_men_sf_base: vn_i_men_ranger_base{};
	class vn_i_men_sf_medic_base: vn_i_men_sf_base{};
	class vn_i_men_sf_01: vn_i_men_sf_base{};
	class vn_i_men_sf_02: vn_i_men_sf_base{};
	class vn_i_men_sf_03: vn_i_men_sf_base{};
	class vn_i_men_sf_04: vn_i_men_sf_base{};
	class vn_i_men_sf_05: vn_i_men_sf_base{};
	class vn_i_men_sf_06: vn_i_men_sf_base{};
	class vn_i_men_sf_07: vn_i_men_sf_base{};
	class vn_i_men_sf_08: vn_i_men_sf_base{};
	class vn_i_men_sf_09: vn_i_men_sf_base{};
	class vn_i_men_sf_10: vn_i_men_sf_base{};
	class vn_i_men_sf_11: vn_i_men_sf_base{};
	class vn_i_men_sf_12: vn_i_men_sf_base{};
	class vn_i_men_sf_13: vn_i_men_sf_base{};
	class vn_i_men_aircrew_base: SoldierGB{};
	class vn_i_men_aircrew_01: vn_i_men_aircrew_base{};
	class vn_i_men_aircrew_02: vn_i_men_aircrew_01{};
	class vn_i_men_aircrew_03: vn_i_men_aircrew_01{};
	class vn_i_men_aircrew_04: vn_i_men_aircrew_03{};
	class vn_i_men_jetpilot_01: vn_i_men_aircrew_base{};
	class vn_i_men_jetpilot_02: vn_i_men_jetpilot_01{};
	class vn_o_men_nva_base: O_Soldier_base_F{};
	class vn_o_men_nva_medic_base: vn_o_men_nva_base{};
	class vn_basecharacter_02: O_Soldier_base_F{};
	class vn_o_men_nva_01: vn_o_men_nva_base{};
	class vn_o_men_nva_02: vn_o_men_nva_base{};
	class vn_o_men_nva_03: vn_o_men_nva_base{};
	class vn_o_men_nva_04: vn_o_men_nva_base{};
	class vn_o_men_nva_05: vn_o_men_nva_base{};
	class vn_o_men_nva_06: vn_o_men_nva_base{};
	class vn_o_men_nva_07: vn_o_men_nva_base{};
	class vn_o_men_nva_08: vn_o_men_nva_medic_base{};
	class vn_o_men_nva_09: vn_o_men_nva_base{};
	class vn_o_men_nva_10: vn_o_men_nva_base{};
	class vn_o_men_nva_11: vn_o_men_nva_base{};
	class vn_o_men_nva_12: vn_o_men_nva_base{};
	class vn_o_men_nva_13: vn_o_men_nva_base{};
	class vn_o_men_nva_14: vn_o_men_nva_base{};
	class vn_o_men_nva_29: vn_o_men_nva_base{};
	class vn_o_men_nva_30: vn_o_men_nva_base{};
	class vn_o_men_nva_31: vn_o_men_nva_base{};
	class vn_o_men_nva_32: vn_o_men_nva_base{};
	class vn_o_men_nva_37: vn_o_men_nva_base{};
	class vn_o_men_nva_38: vn_o_men_nva_base{};
	class vn_o_men_nva_39: vn_o_men_nva_base{};
	class vn_o_men_nva_43: vn_o_men_nva_base{};
	class vn_o_men_nva_45: vn_o_men_nva_base{};
	class vn_o_men_nva_47: vn_o_men_nva_base{};
	class vn_o_men_nva_49: vn_o_men_nva_base{};
	class vn_o_men_nva_15: vn_o_men_nva_01{};
	class vn_o_men_nva_16: vn_o_men_nva_02{};
	class vn_o_men_nva_17: vn_o_men_nva_03{};
	class vn_o_men_nva_18: vn_o_men_nva_04{};
	class vn_o_men_nva_19: vn_o_men_nva_05{};
	class vn_o_men_nva_20: vn_o_men_nva_06{};
	class vn_o_men_nva_21: vn_o_men_nva_07{};
	class vn_o_men_nva_22: vn_o_men_nva_08{};
	class vn_o_men_nva_23: vn_o_men_nva_09{};
	class vn_o_men_nva_24: vn_o_men_nva_10{};
	class vn_o_men_nva_25: vn_o_men_nva_11{};
	class vn_o_men_nva_26: vn_o_men_nva_12{};
	class vn_o_men_nva_27: vn_o_men_nva_13{};
	class vn_o_men_nva_28: vn_o_men_nva_14{};
	class vn_o_men_nva_33: vn_o_men_nva_29{};
	class vn_o_men_nva_34: vn_o_men_nva_30{};
	class vn_o_men_nva_35: vn_o_men_nva_31{};
	class vn_o_men_nva_36: vn_o_men_nva_32{};
	class vn_o_men_nva_40: vn_o_men_nva_37{};
	class vn_o_men_nva_41: vn_o_men_nva_38{};
	class vn_o_men_nva_42: vn_o_men_nva_39{};
	class vn_o_men_nva_44: vn_o_men_nva_43{};
	class vn_o_men_nva_46: vn_o_men_nva_45{};
	class vn_o_men_nva_48: vn_o_men_nva_47{};
	class vn_o_men_nva_50: vn_o_men_nva_49{};
	class vn_o_men_nva_dc_base: vn_o_men_nva_base{};
	class vn_o_men_nva_dc_01: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_02: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_03: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_04: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_05: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_06: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_07: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_08: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_09: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_10: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_11: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_12: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_13: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_14: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_15: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_16: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_17: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_dc_18: vn_o_men_nva_dc_base{};
	class vn_o_men_nva_65_base: vn_o_men_nva_base{};
	class vn_o_men_nva_65_01: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_02: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_03: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_04: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_05: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_06: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_07: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_08: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_09: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_10: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_11: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_12: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_13: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_14: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_29: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_30: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_31: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_35: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_36: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_37: vn_o_men_nva_65_base{};
	class vn_o_men_nva_65_15: vn_o_men_nva_65_01{};
	class vn_o_men_nva_65_16: vn_o_men_nva_65_02{};
	class vn_o_men_nva_65_17: vn_o_men_nva_65_03{};
	class vn_o_men_nva_65_18: vn_o_men_nva_65_04{};
	class vn_o_men_nva_65_19: vn_o_men_nva_65_05{};
	class vn_o_men_nva_65_20: vn_o_men_nva_65_06{};
	class vn_o_men_nva_65_21: vn_o_men_nva_65_07{};
	class vn_o_men_nva_65_22: vn_o_men_nva_65_08{};
	class vn_o_men_nva_65_23: vn_o_men_nva_65_09{};
	class vn_o_men_nva_65_24: vn_o_men_nva_65_10{};
	class vn_o_men_nva_65_25: vn_o_men_nva_65_11{};
	class vn_o_men_nva_65_26: vn_o_men_nva_65_12{};
	class vn_o_men_nva_65_27: vn_o_men_nva_65_13{};
	class vn_o_men_nva_65_28: vn_o_men_nva_65_14{};
	class vn_o_men_nva_65_32: vn_o_men_nva_65_29{};
	class vn_o_men_nva_65_33: vn_o_men_nva_65_30{};
	class vn_o_men_nva_65_34: vn_o_men_nva_65_31{};
	class vn_o_men_nva_65_38: vn_o_men_nva_65_35{};
	class vn_o_men_nva_65_39: vn_o_men_nva_65_36{};
	class vn_o_men_nva_65_40: vn_o_men_nva_65_37{};
	class vn_o_men_nva_navy_base: vn_o_men_nva_base{};
	class vn_o_men_nva_navy_medic_base: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_01: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_02: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_03: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_04: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_05: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_06: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_07: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_08: vn_o_men_nva_navy_medic_base{};
	class vn_o_men_nva_navy_09: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_10: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_11: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_12: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_13: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_navy_14: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_marine_base: vn_o_men_nva_navy_base{};
	class vn_o_men_nva_marine_medic_base: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_01: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_02: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_03: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_04: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_05: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_06: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_07: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_08: vn_o_men_nva_marine_medic_base{};
	class vn_o_men_nva_marine_09: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_10: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_11: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_12: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_13: vn_o_men_nva_marine_base{};
	class vn_o_men_nva_marine_14: vn_o_men_nva_marine_base{};
	class vn_o_men_aircrew_base: vn_o_men_nva_base{};
	class vn_o_men_aircrew_01: vn_o_men_aircrew_base{};
	class vn_o_men_aircrew_02: vn_o_men_aircrew_01{};
	class vn_o_men_aircrew_03: vn_o_men_aircrew_01{};
	class vn_o_men_aircrew_04: vn_o_men_aircrew_02{};
	class vn_o_men_aircrew_05: vn_o_men_aircrew_01{};
	class vn_o_men_aircrew_06: vn_o_men_aircrew_05{};
	class vn_o_men_aircrew_07: vn_o_men_aircrew_05{};
	class vn_o_men_aircrew_08: vn_o_men_aircrew_06{};
	class vn_o_men_vc_base: vn_o_men_nva_base{};
	class vn_o_men_vc_medic_base: vn_o_men_vc_base{};
	class vn_o_men_vc_01: vn_o_men_vc_base{};
	class vn_o_men_vc_02: vn_o_men_vc_base{};
	class vn_o_men_vc_03: vn_o_men_vc_base{};
	class vn_o_men_vc_04: vn_o_men_vc_base{};
	class vn_o_men_vc_05: vn_o_men_vc_base{};
	class vn_o_men_vc_06: vn_o_men_vc_base{};
	class vn_o_men_vc_07: vn_o_men_vc_base{};
	class vn_o_men_vc_08: vn_o_men_vc_medic_base{};
	class vn_o_men_vc_09: vn_o_men_vc_base{};
	class vn_o_men_vc_10: vn_o_men_vc_base{};
	class vn_o_men_vc_11: vn_o_men_vc_base{};
	class vn_o_men_vc_12: vn_o_men_vc_base{};
	class vn_o_men_vc_13: vn_o_men_vc_base{};
	class vn_o_men_vc_14: vn_o_men_vc_base{};
	class vn_o_men_vc_15: vn_o_men_vc_base{};
	class vn_o_men_vc_16: vn_o_men_vc_base{};
	class vn_o_men_vc_17: vn_o_men_vc_base{};
	class vn_o_men_vc_local_base: vn_o_men_vc_base{};
	class vn_o_men_vc_local_medic_base: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_01: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_02: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_03: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_04: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_05: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_06: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_07: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_08: vn_o_men_vc_local_medic_base{};
	class vn_o_men_vc_local_09: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_10: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_11: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_12: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_13: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_14: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_15: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_16: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_17: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_18: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_19: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_20: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_21: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_22: vn_o_men_vc_local_medic_base{};
	class vn_o_men_vc_local_23: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_24: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_25: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_26: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_27: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_28: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_29: vn_o_men_vc_local_medic_base{};
	class vn_o_men_vc_local_30: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_31: vn_o_men_vc_local_base{};
	class vn_o_men_vc_local_32: vn_o_men_vc_local_base{};
	class vn_o_men_vc_regional_base: vn_o_men_vc_base{};
	class vn_o_men_vc_regional_medic_base: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_01: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_02: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_03: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_04: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_05: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_06: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_07: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_08: vn_o_men_vc_regional_medic_base{};
	class vn_o_men_vc_regional_09: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_10: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_11: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_12: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_13: vn_o_men_vc_regional_base{};
	class vn_o_men_vc_regional_14: vn_o_men_vc_regional_base{};
	class vn_c_men_base: Civilian_F{};
	class vn_c_men_01: vn_c_men_base{};
	class vn_c_men_02: vn_c_men_01{};
	class vn_c_men_03: vn_c_men_01{};
	class vn_c_men_04: vn_c_men_01{};
	class vn_c_men_05: vn_c_men_base{};
	class vn_c_men_06: vn_c_men_05{};
	class vn_c_men_07: vn_c_men_05{};
	class vn_c_men_08: vn_c_men_05{};
	class vn_c_men_09: vn_c_men_base{};
	class vn_c_men_10: vn_c_men_09{};
	class vn_c_men_11: vn_c_men_09{};
	class vn_c_men_12: vn_c_men_09{};
	class vn_c_men_13: vn_c_men_base{};
	class vn_c_men_14: vn_c_men_base{};
	class vn_c_men_15: vn_c_men_base{};
	class vn_c_men_16: vn_c_men_base{};
	class vn_c_men_17: vn_c_men_base{};
	class vn_c_men_18: vn_c_men_base{};
	class vn_c_men_19: vn_c_men_base{};
	class vn_c_men_20: vn_c_men_base{};
	class vn_c_men_21: vn_c_men_base{};
	class vn_c_men_22: vn_c_men_base{};
	class vn_c_men_23: vn_c_men_base{};
	class vn_c_men_24: vn_c_men_base{};
	class vn_c_men_25: vn_c_men_base{};
	class vn_c_men_26: vn_c_men_base{};
	class vn_c_men_27: vn_c_men_base{};
	class vn_c_men_28: vn_c_men_base{};
	class vn_c_men_29: vn_c_men_base{};
	class vn_c_men_30: vn_c_men_base{};
	class vn_c_men_31: vn_c_men_base{};
	class vn_c_men_32: vn_c_men_base{};
	class vn_b_men_seal_base: vn_b_men_sog_base{};
	class vn_b_men_seal_diver_base: vn_b_men_seal_base{};
	class vn_b_men_seal_asian_base: vn_b_men_seal_base{};
	class vn_b_men_seal_medic_base: vn_b_men_seal_base{};
	class vn_b_men_seal_asian_medic_base: vn_b_men_seal_asian_base{};
	class vn_b_men_seal_01: vn_b_men_seal_base{};
	class vn_b_men_seal_02: vn_b_men_seal_base{};
	class vn_b_men_seal_03: vn_b_men_seal_base{};
	class vn_b_men_seal_04: vn_b_men_seal_base{};
	class vn_b_men_seal_05: vn_b_men_seal_base{};
	class vn_b_men_seal_06: vn_b_men_seal_base{};
	class vn_b_men_seal_07: vn_b_men_seal_base{};
	class vn_b_men_seal_08: vn_b_men_seal_base{};
	class vn_b_men_seal_09: vn_b_men_seal_base{};
	class vn_b_men_seal_10: vn_b_men_seal_base{};
	class vn_b_men_seal_11: vn_b_men_seal_base{};
	class vn_b_men_seal_12: vn_b_men_seal_base{};
	class vn_b_men_seal_13: vn_b_men_seal_base{};
	class vn_b_men_seal_14: vn_b_men_seal_base{};
	class vn_b_men_seal_15: vn_b_men_seal_base{};
	class vn_b_men_seal_16: vn_b_men_seal_base{};
	class vn_b_men_seal_17: vn_b_men_seal_base{};
	class vn_b_men_seal_18: vn_b_men_seal_base{};
	class vn_b_men_seal_19: vn_b_men_seal_18{};
	class vn_b_men_seal_20: vn_b_men_seal_18{};
	class vn_b_men_seal_21: vn_b_men_seal_base{};
	class vn_b_men_seal_22: vn_b_men_seal_18{};
	class vn_b_men_seal_23: vn_b_men_seal_base{};
	class vn_b_men_seal_24: vn_b_men_seal_base{};
	class vn_b_men_seal_25: vn_b_men_seal_23{};
	class vn_b_men_seal_26: vn_b_men_seal_23{};
	class vn_b_men_seal_27: vn_b_men_seal_23{};
	class vn_b_men_seal_28: vn_b_men_seal_diver_base{};
	class vn_b_men_seal_29: vn_b_men_seal_diver_base{};
	class vn_b_men_seal_30: vn_b_men_seal_diver_base{};
	class vn_b_men_seal_31: vn_b_men_seal_diver_base{};
	class vn_b_men_seal_32: vn_b_men_seal_diver_base{};
	class vn_b_men_seal_33: vn_b_men_seal_diver_base{};
	class vn_b_men_seal_34: vn_b_men_seal_diver_base{};
	class vn_b_men_seal_35: vn_b_men_seal_diver_base{};
	class vn_b_men_seal_36: vn_b_men_seal_diver_base{};
	class vn_b_men_seal_37: vn_b_men_seal_asian_base{};
	class vn_b_men_seal_38: vn_b_men_seal_asian_base{};
	class vn_b_men_seal_39: vn_b_men_seal_38{};
	class vn_b_men_seal_40: vn_b_men_seal_38{};
	class vn_b_men_seal_41: vn_b_men_seal_38{};
	class vn_b_men_seal_42: vn_b_men_seal_asian_base{};
	class vn_b_men_seal_43: vn_b_men_seal_asian_base{};
	class vn_b_men_seal_44: vn_b_men_seal_43{};
	class vn_b_men_seal_45: vn_b_men_seal_43{};
	class vn_b_men_seal_46: vn_b_men_seal_43{};
	class vn_b_men_seal_47: vn_b_men_seal_43{};
	class vn_b_men_seal_48: vn_b_men_seal_43{};
	class vn_b_men_seal_49: vn_b_men_seal_43{};
	class vn_b_men_seal_50: vn_b_men_seal_43{};
	class vn_b_men_seal_51: vn_b_men_seal_42{};
	class vn_b_men_aus_army_66_base: vn_b_men_sog_base	{};
	class vn_b_men_aus_army_66_01: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_02: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_03: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_04: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_05: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_06: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_07: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_08: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_09: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_10: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_11: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_12: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_13: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_14: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_15: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_66_16: vn_b_men_aus_army_66_15{};
	class vn_b_men_aus_army_66_17: vn_b_men_aus_army_66_15{};
	class vn_b_men_aus_army_66_18: vn_b_men_aus_army_66_15{};
	class vn_b_men_aus_army_66_19: vn_b_men_aus_army_66_15{};
	class vn_b_men_aus_army_66_20: vn_b_men_aus_army_66_15{};
	class vn_b_men_aus_army_66_21: vn_b_men_aus_army_66_15{};
	class vn_b_men_aus_army_66_22: vn_b_men_aus_army_66_15{};
	class vn_b_men_aus_army_66_23: vn_b_men_aus_army_66_01{};
	class vn_b_men_aus_army_66_24: vn_b_men_aus_army_66_01{};
	class vn_b_men_aus_army_66_25: vn_b_men_aus_army_66_01{};
	class vn_b_men_aus_army_66_26: vn_b_men_aus_army_66_01{};
	class vn_b_men_aus_army_66_27: vn_b_men_aus_army_66_01{};
	class vn_b_men_aus_army_68_base: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_68_01: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_02: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_03: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_04: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_05: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_06: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_07: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_08: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_09: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_10: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_11: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_12: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_13: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_14: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_15: vn_b_men_aus_army_68_base{};
	class vn_b_men_aus_army_68_16: vn_b_men_aus_army_68_15{};
	class vn_b_men_aus_army_68_17: vn_b_men_aus_army_68_15{};
	class vn_b_men_aus_army_68_18: vn_b_men_aus_army_68_15{};
	class vn_b_men_aus_army_68_19: vn_b_men_aus_army_68_15{};
	class vn_b_men_aus_army_68_20: vn_b_men_aus_army_68_15{};
	class vn_b_men_aus_army_68_21: vn_b_men_aus_army_68_15{};
	class vn_b_men_aus_army_68_22: vn_b_men_aus_army_68_15{};
	class vn_b_men_aus_army_70_base: vn_b_men_aus_army_66_base{};
	class vn_b_men_aus_army_70_01: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_02: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_03: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_04: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_05: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_06: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_07: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_08: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_09: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_10: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_11: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_12: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_13: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_14: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_15: vn_b_men_aus_army_70_base{};
	class vn_b_men_aus_army_70_16: vn_b_men_aus_army_70_15{};
	class vn_b_men_aus_army_70_17: vn_b_men_aus_army_70_15{};
	class vn_b_men_aus_army_70_18: vn_b_men_aus_army_70_15{};
	class vn_b_men_aus_army_70_19: vn_b_men_aus_army_70_15{};
	class vn_b_men_aus_army_70_20: vn_b_men_aus_army_70_15{};
	class vn_b_men_aus_army_70_21: vn_b_men_aus_army_70_15{};
	class vn_b_men_aus_army_70_22: vn_b_men_aus_army_70_15{};
	class vn_b_men_aus_army_70_23: vn_b_men_aus_army_70_01{};
	class vn_b_men_aus_army_70_24: vn_b_men_aus_army_70_01{};
	class vn_b_men_aus_army_70_25: vn_b_men_aus_army_70_01{};
	class vn_b_men_aus_army_70_26: vn_b_men_aus_army_70_01{};
	class vn_b_men_aus_army_70_27: vn_b_men_aus_army_70_01{};
	class vn_b_men_nz_army_66_base: vn_b_men_aus_army_66_base{};
	class vn_b_men_nz_army_66_01: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_02: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_03: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_04: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_05: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_06: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_07: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_08: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_09: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_10: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_11: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_12: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_13: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_66_14: vn_b_men_nz_army_66_13{};
	class vn_b_men_nz_army_66_15: vn_b_men_nz_army_66_13{};
	class vn_b_men_nz_army_66_16: vn_b_men_nz_army_66_13{};
	class vn_b_men_nz_army_66_17: vn_b_men_nz_army_66_13{};
	class vn_b_men_nz_army_66_18: vn_b_men_nz_army_66_13{};
	class vn_b_men_nz_army_66_19: vn_b_men_nz_army_66_13{};
	class vn_b_men_nz_army_66_20: vn_b_men_nz_army_66_13{};
	class vn_b_men_nz_army_66_21: vn_b_men_nz_army_66_01{};
	class vn_b_men_nz_army_66_22: vn_b_men_nz_army_66_01{};
	class vn_b_men_nz_army_68_base: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_68_01: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_02: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_03: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_04: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_05: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_06: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_07: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_08: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_09: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_10: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_11: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_12: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_13: vn_b_men_nz_army_68_base{};
	class vn_b_men_nz_army_68_14: vn_b_men_nz_army_68_13{};
	class vn_b_men_nz_army_68_15: vn_b_men_nz_army_68_13{};
	class vn_b_men_nz_army_68_16: vn_b_men_nz_army_68_13{};
	class vn_b_men_nz_army_68_17: vn_b_men_nz_army_68_13{};
	class vn_b_men_nz_army_68_18: vn_b_men_nz_army_68_13{};
	class vn_b_men_nz_army_68_19: vn_b_men_nz_army_68_13{};
	class vn_b_men_nz_army_68_20: vn_b_men_nz_army_68_13{};
	class vn_b_men_nz_army_70_base: vn_b_men_nz_army_66_base{};
	class vn_b_men_nz_army_70_01: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_02: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_03: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_04: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_05: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_06: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_07: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_08: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_09: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_10: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_11: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_12: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_13: vn_b_men_nz_army_70_base{};
	class vn_b_men_nz_army_70_14: vn_b_men_nz_army_70_13{};
	class vn_b_men_nz_army_70_15: vn_b_men_nz_army_70_13{};
	class vn_b_men_nz_army_70_16: vn_b_men_nz_army_70_13{};
	class vn_b_men_nz_army_70_17: vn_b_men_nz_army_70_13{};
	class vn_b_men_nz_army_70_18: vn_b_men_nz_army_70_13{};
	class vn_b_men_nz_army_70_19: vn_b_men_nz_army_70_13{};
	class vn_b_men_nz_army_70_20: vn_b_men_nz_army_70_13{};
	class vn_b_men_aus_sas_66_base: vn_b_men_sog_base{};
	class vn_b_men_aus_sas_66_01: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_02: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_03: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_04: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_05: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_06: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_07: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_08: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_09: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_10: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_11: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_12: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_13: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_66_14: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_70_base: vn_b_men_aus_sas_66_base{};
	class vn_b_men_aus_sas_70_01: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_02: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_03: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_04: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_05: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_06: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_07: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_08: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_09: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_10: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_11: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_12: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_13: vn_b_men_aus_sas_70_base{};
	class vn_b_men_aus_sas_70_14: vn_b_men_aus_sas_70_base{};
	class vn_b_men_nz_sas_66_base: vn_b_men_aus_sas_66_base{};
	class vn_b_men_nz_sas_66_01: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_02: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_03: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_04: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_05: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_06: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_07: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_08: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_09: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_10: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_11: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_12: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_13: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_66_14: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_70_base: vn_b_men_nz_sas_66_base{};
	class vn_b_men_nz_sas_70_01: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_02: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_03: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_04: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_05: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_06: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_07: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_08: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_09: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_10: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_11: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_12: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_13: vn_b_men_nz_sas_70_base{};
	class vn_b_men_nz_sas_70_14: vn_b_men_nz_sas_70_base{};
	class vn_b_men_aircrew_27: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_28: vn_b_men_aircrew_27{};
	class vn_b_men_aircrew_29: vn_b_men_aircrew_27{};
	class vn_b_men_aircrew_30: vn_b_men_aircrew_28{};
	class vn_b_men_aircrew_31: vn_b_men_aircrew_27{};
	class vn_b_men_aircrew_32: vn_b_men_aircrew_31{};
	class vn_b_men_aircrew_33: vn_b_men_aircrew_31{};
	class vn_b_men_aircrew_34: vn_b_men_aircrew_32{};
	class vn_b_men_jetpilot_11: vn_b_men_jetpilot_07{};
	class vn_b_men_jetpilot_12: vn_b_men_jetpilot_08{};
	class vn_b_men_aircrew_35: vn_b_men_aircrew_09{};
	class vn_b_men_aircrew_36: vn_b_men_aircrew_10{};
	class vn_b_men_aircrew_37: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_38: vn_b_men_aircrew_37{};
	class vn_b_men_aircrew_39: vn_b_men_aircrew_37{};
	class vn_b_men_aircrew_40: vn_b_men_aircrew_37{};
	class vn_o_men_pl_base: vn_o_men_nva_base{};
	class vn_o_men_pl_01: vn_o_men_pl_base{};
	class vn_o_men_pl_02: vn_o_men_pl_base{};
	class vn_o_men_pl_03: vn_o_men_pl_base{};
	class vn_o_men_pl_04: vn_o_men_pl_base{};
	class vn_o_men_pl_05: vn_o_men_pl_base{};
	class vn_o_men_pl_06: vn_o_men_pl_base{};
	class vn_o_men_pl_07: vn_o_men_pl_base{};
	class vn_o_men_pl_08: vn_o_men_pl_base{};
	class vn_o_men_pl_09: vn_o_men_pl_base{};
	class vn_o_men_pl_10: vn_o_men_pl_base{};
	class vn_o_men_pl_11: vn_o_men_pl_base{};
	class vn_o_men_pl_12: vn_o_men_pl_base{};
	class vn_o_men_pl_13: vn_o_men_pl_base{};
	class vn_o_men_pl_14: vn_o_men_pl_base{};
	class vn_o_men_pl_15: vn_o_men_pl_base{};
	class vn_o_men_pl_16: vn_o_men_pl_base{};
	class vn_o_men_pl_17: vn_o_men_pl_base{};
	class vn_o_men_pl_18: vn_o_men_pl_base{};
	class vn_o_men_pl_19: vn_o_men_pl_base{};
	class vn_o_men_pl_20: vn_o_men_pl_base{};
	class vn_o_men_pl_21: vn_o_men_pl_base{};
	class vn_o_men_pl_22: vn_o_men_pl_base{};
	class vn_o_men_pl_23: vn_o_men_pl_base{};
	class vn_o_men_pl_24: vn_o_men_pl_base{};
	class vn_o_men_pl_25: vn_o_men_pl_base{};
	class vn_o_men_pl_26: vn_o_men_pl_base{};
	class vn_o_men_pl_27: vn_o_men_pl_base{};
	class vn_o_men_pl_28: vn_o_men_pl_base{};
	class vn_o_men_pl_29: vn_o_men_pl_base{};
	class vn_o_men_pl_30: vn_o_men_pl_base{};
	class vn_o_men_pl_31: vn_o_men_pl_base{};
	class vn_i_men_marine_base: vn_i_men_army_base{};
	class vn_i_men_marine_01: vn_i_men_marine_base{};
	class vn_i_men_marine_02: vn_i_men_marine_base{};
	class vn_i_men_marine_03: vn_i_men_marine_base{};
	class vn_i_men_marine_04: vn_i_men_marine_base{};
	class vn_i_men_marine_05: vn_i_men_marine_base{};
	class vn_i_men_marine_06: vn_i_men_marine_base{};
	class vn_i_men_marine_07: vn_i_men_marine_base{};
	class vn_i_men_marine_08: vn_i_men_marine_base{};
	class vn_i_men_marine_09: vn_i_men_marine_base{};
	class vn_i_men_marine_10: vn_i_men_marine_base{};
	class vn_i_men_marine_11: vn_i_men_marine_base{};
	class vn_i_men_marine_12: vn_i_men_marine_base{};
	class vn_i_men_marine_13: vn_i_men_marine_base{};
	class vn_i_men_marine_14: vn_i_men_marine_base{};
	class vn_i_men_marine_15: vn_i_men_marine_base{};
	class vn_i_men_marine_16: vn_i_men_marine_15{};
	class vn_i_men_marine_17: vn_i_men_marine_15{};
	class vn_i_men_marine_18: vn_i_men_marine_15{};
	class vn_i_men_marine_19: vn_i_men_marine_15{};
	class vn_i_men_marine_20: vn_i_men_marine_15{};
	class vn_i_men_marine_21: vn_i_men_marine_15{};
	class vn_i_men_marine_22: vn_i_men_marine_base{};
	class vn_i_men_marine_23: vn_i_men_marine_base{};
	class vn_i_men_marine_24: vn_i_men_marine_base{};
	class vn_i_men_marine_25: vn_i_men_marine_base{};
	class vn_i_men_rla_base: vn_i_men_army_base{};
	class vn_i_men_rla_01: vn_i_men_rla_base{};
	class vn_i_men_rla_02: vn_i_men_rla_base{};
	class vn_i_men_rla_03: vn_i_men_rla_base{};
	class vn_i_men_rla_04: vn_i_men_rla_base{};
	class vn_i_men_rla_05: vn_i_men_rla_base{};
	class vn_i_men_rla_06: vn_i_men_rla_base{};
	class vn_i_men_rla_07: vn_i_men_rla_base{};
	class vn_i_men_rla_08: vn_i_men_rla_base{};
	class vn_i_men_rla_09: vn_i_men_rla_base{};
	class vn_i_men_rla_10: vn_i_men_rla_base{};
	class vn_i_men_rla_11: vn_i_men_rla_base{};
	class vn_i_men_rla_12: vn_i_men_rla_base{};
	class vn_i_men_rla_13: vn_i_men_rla_base{};
	class vn_i_men_rla_14: vn_i_men_rla_base{};
	class vn_i_men_rla_15: vn_i_men_rla_base{};
	class vn_i_men_rla_16: vn_i_men_rla_15{};
	class vn_i_men_rla_17: vn_i_men_rla_15{};
	class vn_i_men_rla_18: vn_i_men_rla_15{};
	class vn_i_men_rla_19: vn_i_men_rla_15{};
	class vn_i_men_rla_20: vn_i_men_rla_15{};
	class vn_i_men_rla_21: vn_i_men_rla_15{};
	class vn_i_men_rla_22: vn_i_men_rla_base{};
	class vn_i_men_rla_23: vn_i_men_rla_base{};
	class vn_i_men_rla_24: vn_i_men_rla_base{};
	class vn_i_men_rla_25: vn_i_men_rla_base{};
	class vn_b_men_rok_army_68_base: vn_b_men_army_base{};
	class vn_b_men_rok_army_68_01: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_02: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_03: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_04: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_05: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_06: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_07: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_08: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_09: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_10: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_11: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_12: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_13: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_14: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_15: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_16: vn_b_men_rok_army_68_15{};
	class vn_b_men_rok_army_68_17: vn_b_men_rok_army_68_15{};
	class vn_b_men_rok_army_68_18: vn_b_men_rok_army_68_15{};
	class vn_b_men_rok_army_68_19: vn_b_men_rok_army_68_15{};
	class vn_b_men_rok_army_68_20: vn_b_men_rok_army_68_15{};
	class vn_b_men_rok_army_68_21: vn_b_men_rok_army_68_15{};
	class vn_b_men_rok_army_68_23: vn_b_men_rok_army_68_01{};
	class vn_b_men_rok_army_68_24: vn_b_men_rok_army_68_01{};
	class vn_b_men_rok_army_68_25: vn_b_men_rok_army_68_01{};
	class vn_b_men_rok_army_68_26: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_27: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_28: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_68_29: vn_b_men_rok_army_68_01{};
	class vn_b_men_rok_army_68_30: vn_b_men_rok_army_68_01{};
	class vn_b_men_rok_army_68_31: vn_b_men_rok_army_68_01{};
	class vn_b_men_rok_army_65_base: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_army_65_01: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_02: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_03: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_04: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_05: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_06: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_07: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_08: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_09: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_10: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_11: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_12: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_13: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_14: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_15: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_16: vn_b_men_rok_army_65_15{};
	class vn_b_men_rok_army_65_17: vn_b_men_rok_army_65_15{};
	class vn_b_men_rok_army_65_18: vn_b_men_rok_army_65_15{};
	class vn_b_men_rok_army_65_19: vn_b_men_rok_army_65_15{};
	class vn_b_men_rok_army_65_20: vn_b_men_rok_army_65_15{};
	class vn_b_men_rok_army_65_21: vn_b_men_rok_army_65_15{};
	class vn_b_men_rok_army_65_26: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_27: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_28: vn_b_men_rok_army_65_base{};
	class vn_b_men_rok_army_65_29: vn_b_men_rok_army_65_01{};
	class vn_b_men_rok_army_65_30: vn_b_men_rok_army_65_01{};
	class vn_b_men_rok_army_65_31: vn_b_men_rok_army_65_01{};
	class vn_b_men_rok_marine_68_base: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_marine_68_01: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_02: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_03: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_04: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_05: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_06: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_07: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_08: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_09: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_10: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_11: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_12: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_13: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_14: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_15: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_16: vn_b_men_rok_marine_68_15{};
	class vn_b_men_rok_marine_68_17: vn_b_men_rok_marine_68_15{};
	class vn_b_men_rok_marine_68_18: vn_b_men_rok_marine_68_15{};
	class vn_b_men_rok_marine_68_19: vn_b_men_rok_marine_68_15{};
	class vn_b_men_rok_marine_68_20: vn_b_men_rok_marine_68_15{};
	class vn_b_men_rok_marine_68_21: vn_b_men_rok_marine_68_15{};
	class vn_b_men_rok_marine_68_28: vn_b_men_rok_marine_68_base{};
	class vn_b_men_rok_marine_68_29: vn_b_men_rok_marine_68_01{};
	class vn_b_men_rok_marine_68_30: vn_b_men_rok_marine_68_01{};
	class vn_b_men_rok_marine_68_31: vn_b_men_rok_marine_68_01{};
	class vn_b_men_rok_marine_65_base: vn_b_men_rok_army_68_base{};
	class vn_b_men_rok_marine_65_01: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_02: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_03: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_04: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_05: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_06: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_07: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_08: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_09: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_10: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_11: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_12: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_13: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_14: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_15: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_16: vn_b_men_rok_marine_65_15{};
	class vn_b_men_rok_marine_65_17: vn_b_men_rok_marine_65_15{};
	class vn_b_men_rok_marine_65_18: vn_b_men_rok_marine_65_15{};
	class vn_b_men_rok_marine_65_19: vn_b_men_rok_marine_65_15{};
	class vn_b_men_rok_marine_65_20: vn_b_men_rok_marine_65_15{};
	class vn_b_men_rok_marine_65_21: vn_b_men_rok_marine_65_15{};
	class vn_b_men_rok_marine_65_28: vn_b_men_rok_marine_65_base{};
	class vn_b_men_rok_marine_65_29: vn_b_men_rok_marine_65_01{};
	class vn_b_men_rok_marine_65_30: vn_b_men_rok_marine_65_01{};
	class vn_b_men_rok_marine_65_31: vn_b_men_rok_marine_65_01{};
	class vn_b_men_usmc_66_base: vn_b_men_army_base{};
	class vn_b_men_usmc_66_01: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_02: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_03: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_04: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_05: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_06: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_07: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_08: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_09: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_10: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_11: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_12: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_13: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_14: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_15: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_16: vn_b_men_usmc_66_15{};
	class vn_b_men_usmc_66_17: vn_b_men_usmc_66_15{};
	class vn_b_men_usmc_66_18: vn_b_men_usmc_66_15{};
	class vn_b_men_usmc_66_19: vn_b_men_usmc_66_15{};
	class vn_b_men_usmc_66_20: vn_b_men_usmc_66_15{};
	class vn_b_men_usmc_66_21: vn_b_men_usmc_66_15{};
	class vn_b_men_usmc_66_22: vn_b_men_usmc_66_base{};
	class vn_b_men_usmc_66_23: vn_b_men_usmc_66_01{};
	class vn_b_men_usmc_66_24: vn_b_men_usmc_66_01{};
	class vn_b_men_usmc_66_25: vn_b_men_usmc_66_01{};
	class vn_b_men_usmc_66_26: vn_b_men_usmc_66_01{};
	class vn_b_men_usmc_66_27: vn_b_men_usmc_66_01{};
	class vn_b_men_usmc_66_28: vn_b_men_usmc_66_01{};
	class vn_b_men_usmc_68_base: vn_b_men_army_base{};
	class vn_b_men_usmc_68_01: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_02: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_03: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_04: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_05: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_06: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_07: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_08: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_09: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_10: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_11: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_12: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_13: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_14: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_15: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_16: vn_b_men_usmc_68_15{};
	class vn_b_men_usmc_68_17: vn_b_men_usmc_68_15{};
	class vn_b_men_usmc_68_18: vn_b_men_usmc_68_15{};
	class vn_b_men_usmc_68_19: vn_b_men_usmc_68_15{};
	class vn_b_men_usmc_68_20: vn_b_men_usmc_68_15{};
	class vn_b_men_usmc_68_21: vn_b_men_usmc_68_15{};
	class vn_b_men_usmc_68_22: vn_b_men_usmc_68_base{};
	class vn_b_men_usmc_68_23: vn_b_men_usmc_68_01{};
	class vn_b_men_usmc_68_24: vn_b_men_usmc_68_01{};
	class vn_b_men_usmc_68_25: vn_b_men_usmc_68_01{};
	class vn_b_men_usmc_68_26: vn_b_men_usmc_68_01{};
	class vn_b_men_usmc_68_27: vn_b_men_usmc_68_01{};
	class vn_b_men_usmc_68_28: vn_b_men_usmc_68_01{};
	class vn_b_men_usmc_70_base: vn_b_men_army_base{};
	class vn_b_men_usmc_70_01: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_02: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_03: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_04: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_05: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_06: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_07: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_08: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_09: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_10: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_11: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_12: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_13: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_14: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_15: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_16: vn_b_men_usmc_70_15{};
	class vn_b_men_usmc_70_17: vn_b_men_usmc_70_15{};
	class vn_b_men_usmc_70_18: vn_b_men_usmc_70_15{};
	class vn_b_men_usmc_70_19: vn_b_men_usmc_70_15{};
	class vn_b_men_usmc_70_20: vn_b_men_usmc_70_15{};
	class vn_b_men_usmc_70_21: vn_b_men_usmc_70_15{};
	class vn_b_men_usmc_70_22: vn_b_men_usmc_70_base{};
	class vn_b_men_usmc_70_23: vn_b_men_usmc_70_01{};
	class vn_b_men_usmc_70_24: vn_b_men_usmc_70_01{};
	class vn_b_men_usmc_70_25: vn_b_men_usmc_70_01{};
	class vn_b_men_usmc_70_26: vn_b_men_usmc_70_01{};
	class vn_b_men_usmc_70_27: vn_b_men_usmc_70_01{};
	class vn_b_men_usmc_70_28: vn_b_men_usmc_70_01{};
	class vn_b_men_usmc_recon_66_base: vn_b_men_sog_base{};
	class vn_b_men_usmc_recon_66_01: vn_b_men_usmc_recon_66_base{};
	class vn_b_men_usmc_recon_66_02: vn_b_men_usmc_recon_66_base{};
	class vn_b_men_usmc_recon_66_03: vn_b_men_usmc_recon_66_base{};
	class vn_b_men_usmc_recon_66_04: vn_b_men_usmc_recon_66_base{};
	class vn_b_men_usmc_recon_66_05: vn_b_men_usmc_recon_66_base{};
	class vn_b_men_usmc_recon_66_06: vn_b_men_usmc_recon_66_base{};
	class vn_b_men_usmc_recon_66_07: vn_b_men_usmc_recon_66_base{};
	class vn_b_men_usmc_recon_66_08: vn_b_men_usmc_recon_66_base{};
	class vn_b_men_usmc_recon_66_09: vn_b_men_usmc_recon_66_base{};
	class vn_b_men_usmc_recon_68_base: vn_b_men_sog_base{};
	class vn_b_men_usmc_recon_68_01: vn_b_men_usmc_recon_68_base{};
	class vn_b_men_usmc_recon_68_02: vn_b_men_usmc_recon_68_base{};
	class vn_b_men_usmc_recon_68_03: vn_b_men_usmc_recon_68_base{};
	class vn_b_men_usmc_recon_68_04: vn_b_men_usmc_recon_68_base{};
	class vn_b_men_usmc_recon_68_05: vn_b_men_usmc_recon_68_base{};
	class vn_b_men_usmc_recon_68_06: vn_b_men_usmc_recon_68_base{};
	class vn_b_men_usmc_recon_68_07: vn_b_men_usmc_recon_68_base{};
	class vn_b_men_usmc_recon_68_08: vn_b_men_usmc_recon_68_base{};
	class vn_b_men_usmc_recon_68_09: vn_b_men_usmc_recon_68_base{};
	class vn_b_men_usmc_recon_70_base: vn_b_men_sog_base{};
	class vn_b_men_usmc_recon_70_01: vn_b_men_usmc_recon_70_base{};
	class vn_b_men_usmc_recon_70_02: vn_b_men_usmc_recon_70_base{};
	class vn_b_men_usmc_recon_70_03: vn_b_men_usmc_recon_70_base{};
	class vn_b_men_usmc_recon_70_04: vn_b_men_usmc_recon_70_base{};
	class vn_b_men_usmc_recon_70_05: vn_b_men_usmc_recon_70_base{};
	class vn_b_men_usmc_recon_70_06: vn_b_men_usmc_recon_70_base{};
	class vn_b_men_usmc_recon_70_07: vn_b_men_usmc_recon_70_base{};
	class vn_b_men_usmc_recon_70_08: vn_b_men_usmc_recon_70_base{};
	class vn_b_men_usmc_recon_70_09: vn_b_men_usmc_recon_70_base{};
	class vn_b_men_medt_base: vn_b_men_sog_base{};
	class vn_b_men_medt_01: vn_b_men_medt_base{};
	class vn_b_men_medt_02: vn_b_men_medt_base{};
	class vn_b_men_medt_03: vn_b_men_medt_base{};
	class vn_b_men_medt_04: vn_b_men_medt_base{};
	class vn_b_men_medt_05: vn_b_men_medt_base{};
	class vn_b_men_medt_06: vn_b_men_medt_base{};
	class vn_b_men_aircrew_41: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_42: vn_b_men_aircrew_41{};
	class vn_b_men_aircrew_43: vn_b_men_aircrew_41{};
	class vn_b_men_aircrew_44: vn_b_men_aircrew_43{};
	class vn_b_men_aircrew_45: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_46: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_47: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_48: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_49: vn_b_men_aircrew_01{};
	class vn_b_men_aircrew_50: vn_b_men_aircrew_49{};
	class vn_i_men_fank_71_base: vn_i_men_army_base{};
	class vn_i_men_fank_71_01: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_02: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_03: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_04: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_05: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_06: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_07: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_08: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_09: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_10: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_11: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_12: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_13: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_14: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_15: vn_i_men_fank_71_base{};
	class vn_i_men_fank_71_16: vn_i_men_fank_71_15{};
	class vn_i_men_fank_71_17: vn_i_men_fank_71_15{};
	class vn_i_men_fank_71_18: vn_i_men_fank_71_15{};
	class vn_i_men_fank_71_19: vn_i_men_fank_71_15{};
	class vn_i_men_fank_71_20: vn_i_men_fank_71_15{};
	class vn_i_men_fank_71_21: vn_i_men_fank_71_15{};
	class vn_i_men_fank_71_22: vn_i_men_fank_71_15{};
	class vn_i_men_fank_71_23: vn_i_men_fank_71_01{};
	class vn_i_men_fank_71_24: vn_i_men_fank_71_01{};
	class vn_i_men_fank_71_25: vn_i_men_fank_71_01{};
	class vn_i_men_fank_71_26: vn_i_men_fank_71_base{};
	class vn_i_men_fank_70_base: vn_i_men_fank_71_base{};
	class vn_i_men_fank_70_01: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_02: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_03: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_04: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_05: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_06: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_07: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_08: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_09: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_10: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_11: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_12: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_13: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_14: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_15: vn_i_men_fank_70_base{};
	class vn_i_men_fank_70_16: vn_i_men_fank_70_15{};
	class vn_i_men_fank_70_17: vn_i_men_fank_70_15{};
	class vn_i_men_fank_70_18: vn_i_men_fank_70_15{};
	class vn_i_men_fank_70_19: vn_i_men_fank_70_15{};
	class vn_i_men_fank_70_20: vn_i_men_fank_70_15{};
	class vn_i_men_fank_70_21: vn_i_men_fank_70_15{};
	class vn_i_men_fank_70_22: vn_i_men_fank_70_15{};
	class vn_i_men_fank_70_23: vn_i_men_fank_70_01{};
	class vn_i_men_fank_70_24: vn_i_men_fank_70_01{};
	class vn_i_men_fank_70_25: vn_i_men_fank_70_01{};
	class vn_i_men_fank_70_26: vn_i_men_fank_70_base{};
	class vn_i_men_aircrew_05: vn_i_men_aircrew_01{};
	class vn_i_men_aircrew_06: vn_i_men_aircrew_05{};
	class vn_i_men_aircrew_07: vn_i_men_aircrew_05{};
	class vn_i_men_aircrew_08: vn_i_men_aircrew_05{};
	class vn_i_men_aircrew_09: vn_i_men_aircrew_01{};
	class vn_i_men_aircrew_10: vn_i_men_aircrew_09{};
	class vn_i_men_aircrew_11: vn_i_men_aircrew_09{};
	class vn_i_men_aircrew_12: vn_i_men_aircrew_09{};
	class vn_o_men_kr_70_base: vn_o_men_nva_base{};
	class vn_o_men_kr_70_01: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_02: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_03: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_04: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_05: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_06: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_07: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_08: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_09: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_10: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_11: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_12: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_13: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_14: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_15: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_16: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_17: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_18: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_19: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_20: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_21: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_22: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_23: vn_o_men_kr_70_base{};
	class vn_o_men_kr_70_24: vn_o_men_kr_70_base{};
	class vn_o_men_kr_75_base: vn_o_men_kr_70_base{};
	class vn_o_men_kr_75_01: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_02: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_03: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_04: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_05: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_06: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_07: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_08: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_09: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_10: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_11: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_12: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_13: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_14: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_15: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_16: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_17: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_18: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_19: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_20: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_21: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_22: vn_o_men_kr_75_base{};
	class vn_o_men_kr_75_23: vn_o_men_kr_75_base{};

//Turrets
	class vn_static_m2_high_base: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class vn_static_m2_low_base: vn_static_m2_high_base{};
	class vn_static_m1919a6_base: vn_static_m2_low_base{};
	class vn_static_m1919a4_high_base: vn_static_m1919a6_base{};
	class vn_static_m1919a4_low_base: vn_static_m1919a4_high_base{};
	class vn_static_m60_high_base: vn_static_m2_low_base{};
	class vn_static_m60_low_base: vn_static_m60_high_base{};
	class vn_static_dp28_high_base: vn_static_m2_high_base
	{
		class Turrets;
	};
	class vn_static_rpd_high_base: vn_static_dp28_high_base
	{
		class GunParticles
		{
			class effect1;
			class effect2;
			class effect4;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class assembleInfo;
		class AnimationSources;
	};
	class vn_static_dshkm_high_01_base: vn_static_dp28_high_base{};
	class vn_static_dshkm_high_02_base: vn_static_dshkm_high_01_base{};
	class vn_static_dshkm_low_01_base: vn_static_dshkm_high_01_base{};
	class vn_static_dshkm_low_02_base: vn_static_dshkm_low_01_base{};
	class vn_static_pk_high_base: vn_static_rpd_high_base{};
	class vn_static_pk_low_base: vn_static_pk_high_base{};
	class vn_static_mortar_m29_base: Mortar_01_base_F{};
	class vn_static_mortar_m2_base: vn_static_mortar_m29_base{};
	class vn_static_mortar_type63_base: vn_static_mortar_m2_base{};
	class vn_static_mortar_type53_base: vn_static_mortar_m29_base{};
	class vn_howitzer_base: StaticCannon{};
	class vn_static_d44_base: vn_howitzer_base{};
	class vn_static_d44_01_base: vn_static_d44_base{};
	class vn_static_m101_base: vn_howitzer_base{};
	class vn_static_m101_02_base: vn_static_m101_base{};
	class vn_static_m45_base: vn_static_m2_high_base{};
	class vn_static_zpu4_base: vn_static_m2_high_base{};
	class vn_o_static_rsna75: StaticMGWeapon{};
	class vn_sa2: StaticMGWeapon{};
	class vn_launcher_sa2_ammo_02: nonstrategic{};
	class vn_static_at3_base: StaticMGWeapon{};
	class vn_static_tow_base: vn_static_at3_base{};
	class vn_b_army_static_m2_high: vn_static_m2_high_base{};
	class vn_b_army_static_m2_low: vn_static_m2_low_base{};
	class vn_b_army_static_m1919a6: vn_static_m1919a6_base{};
	class vn_b_army_static_m1919a4_high: vn_static_m1919a4_high_base{};
	class vn_b_army_static_m1919a4_low: vn_static_m1919a4_low_base{};
	class vn_b_army_static_m60_high: vn_static_m60_high_base{};
	class vn_b_army_static_m60_low: vn_static_m60_low_base{};
	class vn_b_army_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_b_army_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_b_army_static_m45: vn_static_m45_base{};
	class vn_b_army_static_m101_01: vn_static_m101_base{};
	class vn_b_army_static_m101_02: vn_static_m101_02_base{};
	class vn_b_army_static_tow: vn_static_tow_base{};
	class vn_b_sf_static_m2_high: vn_static_m2_high_base{};
	class vn_b_sf_static_m2_low: vn_static_m2_low_base{};
	class vn_b_sf_static_m1919a6: vn_static_m1919a6_base{};
	class vn_b_sf_static_m1919a4_high: vn_static_m1919a4_high_base{};
	class vn_b_sf_static_m1919a4_low: vn_static_m1919a4_low_base{};
	class vn_b_sf_static_m60_high: vn_static_m60_high_base{};
	class vn_b_sf_static_m60_low: vn_static_m60_low_base{};
	class vn_b_sf_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_b_sf_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_b_sf_static_m45: vn_static_m45_base{};
	class vn_b_sf_static_m101_01: vn_static_m101_base{};
	class vn_b_sf_static_m101_02: vn_static_m101_02_base{};
	class vn_b_sf_static_tow: vn_static_tow_base{};
	class vn_i_static_m2_high: vn_static_m2_high_base{};
	class vn_i_static_m2_low: vn_static_m2_low_base{};
	class vn_i_static_m1919a6: vn_static_m1919a6_base{};
	class vn_i_static_m1919a4_high: vn_static_m1919a4_high_base{};
	class vn_i_static_m1919a4_low: vn_static_m1919a4_low_base{};
	class vn_i_static_m60_high: vn_static_m60_high_base{};
	class vn_i_static_m60_low: vn_static_m60_low_base{};
	class vn_i_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_i_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_i_static_m45: vn_static_m45_base{};
	class vn_i_static_m101_01: vn_static_m101_base{};
	class vn_i_static_m101_02: vn_static_m101_02_base{};
	class vn_i_static_tow: vn_static_tow_base{};
	class vn_o_vc_static_rpd_high: vn_static_rpd_high_base{};
	class vn_o_vc_static_dp28_high: vn_static_dp28_high_base{};
	class vn_o_vc_static_mortar_type63: vn_static_mortar_type63_base{};
	class vn_o_vc_static_mortar_type53: vn_static_mortar_type53_base{};
	class vn_o_vc_static_dshkm_high_01: vn_static_dshkm_high_01_base{};
	class vn_o_vc_static_dshkm_high_02: vn_static_dshkm_high_02_base{};
	class vn_o_vc_static_dshkm_low_01: vn_static_dshkm_low_01_base{};
	class vn_o_vc_static_dshkm_low_02: vn_static_dshkm_low_02_base{};
	class vn_o_vc_static_d44: vn_static_d44_base{};
	class vn_o_vc_static_d44_01: vn_static_d44_01_base{};
	class vn_o_vc_static_pk_high: vn_static_pk_high_base{};
	class vn_o_vc_static_pk_low: vn_static_pk_low_base{};
	class vn_o_nva_static_rpd_high: vn_static_rpd_high_base{};
	class vn_o_nva_static_mortar_type63: vn_static_mortar_type63_base{};
	class vn_o_nva_static_mortar_type53: vn_static_mortar_type53_base{};
	class vn_o_nva_static_dshkm_high_01: vn_static_dshkm_high_01_base{};
	class vn_o_nva_static_dshkm_high_02: vn_static_dshkm_high_02_base{};
	class vn_o_nva_static_dshkm_low_01: vn_static_dshkm_low_01_base{};
	class vn_o_nva_static_dshkm_low_02: vn_static_dshkm_low_02_base{};
	class vn_o_nva_static_zpu4: vn_static_zpu4_base{};
	class vn_o_nva_static_at3: vn_static_at3_base{};
	class vn_o_nva_static_d44: vn_static_d44_base{};
	class vn_o_nva_static_d44_01: vn_static_d44_01_base{};
	class vn_o_nva_static_pk_high: vn_static_pk_high_base{};
	class vn_o_nva_static_pk_low: vn_static_pk_low_base{};
	class vn_o_nva_65_static_rpd_high: vn_static_rpd_high_base{};
	class vn_o_nva_65_static_mortar_type63: vn_static_mortar_type63_base{};
	class vn_o_nva_65_static_mortar_type53: vn_static_mortar_type53_base{};
	class vn_o_nva_65_static_dshkm_high_01: vn_static_dshkm_high_01_base{};
	class vn_o_nva_65_static_dshkm_high_02: vn_static_dshkm_high_02_base{};
	class vn_o_nva_65_static_dshkm_low_01: vn_static_dshkm_low_01_base{};
	class vn_o_nva_65_static_dshkm_low_02: vn_static_dshkm_low_02_base{};
	class vn_o_nva_65_static_zpu4: vn_static_zpu4_base{};
	class vn_o_nva_65_static_d44: vn_static_d44_base{};
	class vn_o_nva_65_static_d44_01: vn_static_d44_01_base{};
	class vn_o_nva_65_static_pk_high: vn_static_pk_high_base{};
	class vn_o_nva_65_static_pk_low: vn_static_pk_low_base{};
	class vn_o_nva_navy_static_rpd_high: vn_static_rpd_high_base{};
	class vn_o_nva_navy_static_mortar_type63: vn_static_mortar_type63_base{};
	class vn_o_nva_navy_static_mortar_type53: vn_static_mortar_type53_base{};
	class vn_o_nva_navy_static_dshkm_high_01: vn_static_dshkm_high_01_base{};
	class vn_o_nva_navy_static_dshkm_high_02: vn_static_dshkm_high_02_base{};
	class vn_o_nva_navy_static_dshkm_low_01: vn_static_dshkm_low_01_base{};
	class vn_o_nva_navy_static_dshkm_low_02: vn_static_dshkm_low_02_base{};
	class vn_o_nva_navy_static_zpu4: vn_static_zpu4_base{};
	class vn_o_nva_navy_static_at3: vn_static_at3_base{};
	class vn_o_nva_navy_static_d44: vn_static_d44_base{};
	class vn_o_nva_navy_static_d44_01: vn_static_d44_01_base{};
	class vn_o_nva_navy_static_pk_high: vn_static_pk_high_base{};
	class vn_o_nva_navy_static_pk_low: vn_static_pk_low_base{};
	class vn_static_l60mk3_base: StaticCannon{};
	class vn_b_navy_static_l60mk3: vn_static_l60mk3_base{};
	class vn_static_l70mk2_base: StaticCannon{};
	class vn_b_navy_static_l70mk2: vn_static_l70mk2_base{};
	class vn_static_type56rr_base: StaticCannon{};
	class vn_o_nva_static_type56rr: vn_static_type56rr_base{};
	class vn_o_nva_65_static_type56rr: vn_static_type56rr_base{};
	class vn_o_nva_navy_static_type56rr: vn_static_type56rr_base{};
	class vn_o_vc_static_type56rr: vn_static_type56rr_base{};
	class vn_static_v11m_base: StaticCannon{};
	class vn_o_nva_navy_static_v11m: vn_static_v11m_base{};
	class vn_o_pl_static_at3: vn_static_at3_base{};
	class vn_o_pl_static_d44: vn_static_d44_base{};
	class vn_o_pl_static_d44_01: vn_static_d44_01_base{};
	class vn_o_pl_static_dshkm_high_01: vn_static_dshkm_high_01_base{};
	class vn_o_pl_static_dshkm_high_02: vn_static_dshkm_high_02_base{};
	class vn_o_pl_static_dshkm_low_01: vn_static_dshkm_low_01_base{};
	class vn_o_pl_static_dshkm_low_02: vn_static_dshkm_low_02_base{};
	class vn_static_h12_base: Mortar_01_base_F{};
	class vn_o_vc_static_h12: vn_static_h12_base{};
	class vn_o_nva_static_h12: vn_static_h12_base{};
	class vn_o_nva_65_static_h12: vn_static_h12_base{};
	class vn_b_seal_static_m2_high: vn_static_m2_high_base{};
	class vn_b_seal_static_m2_low: vn_static_m2_low_base{};
	class vn_b_rok_army_static_m2_high: vn_static_m2_high_base{};
	class vn_b_rok_army_static_m2_low: vn_static_m2_low_base{};
	class vn_b_rok_marines_static_m2_high: vn_static_m2_high_base{};
	class vn_b_rok_marines_static_m2_low: vn_static_m2_low_base{};
	class vn_b_aus_army_static_m2_high: vn_static_m2_high_base{};
	class vn_b_aus_army_static_m2_low: vn_static_m2_low_base{};
	class vn_b_nz_army_static_m2_high: vn_static_m2_high_base{};
	class vn_b_nz_army_static_m2_low: vn_static_m2_low_base{};
	class vn_i_marines_static_m2_high: vn_static_m2_high_base{};
	class vn_i_marines_static_m2_low: vn_static_m2_low_base{};
	class vn_i_rla_static_m2_high: vn_static_m2_high_base{};
	class vn_i_rla_static_m2_low: vn_static_m2_low_base{};
	class vn_static_m40a1rr_base: StaticCannon{};
	class vn_b_army_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_b_sf_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_b_seal_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_b_rok_army_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_b_rok_marines_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_b_aus_army_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_b_nz_army_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_i_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_i_marines_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_i_rla_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_b_seal_static_m60_high: vn_static_m60_high_base{};
	class vn_b_seal_static_m60_low: vn_static_m60_low_base{};
	class vn_b_rok_army_static_m60_high: vn_static_m60_high_base{};
	class vn_b_rok_army_static_m60_low: vn_static_m60_low_base{};
	class vn_b_rok_marines_static_m60_high: vn_static_m60_high_base{};
	class vn_b_rok_marines_static_m60_low: vn_static_m60_low_base{};
	class vn_b_aus_army_static_m60_high: vn_static_m60_high_base{};
	class vn_b_aus_army_static_m60_low: vn_static_m60_low_base{};
	class vn_b_nz_army_static_m60_high: vn_static_m60_high_base{};
	class vn_b_nz_army_static_m60_low: vn_static_m60_low_base{};
	class vn_i_marines_static_m60_high: vn_static_m60_high_base{};
	class vn_i_marines_static_m60_low: vn_static_m60_low_base{};
	class vn_i_rla_static_m60_high: vn_static_m60_high_base{};
	class vn_i_rla_static_m60_low: vn_static_m60_low_base{};
	class vn_b_rok_army_static_m101_01: vn_static_m101_base{};
	class vn_b_rok_army_static_m101_02: vn_static_m101_02_base{};
	class vn_b_rok_marines_static_m101_01: vn_static_m101_base{};
	class vn_b_rok_marines_static_m101_02: vn_static_m101_02_base{};
	class vn_b_aus_army_static_m101_01: vn_static_m101_base{};
	class vn_b_aus_army_static_m101_02: vn_static_m101_02_base{};
	class vn_b_nz_army_static_m101_01: vn_static_m101_base{};
	class vn_b_nz_army_static_m101_02: vn_static_m101_02_base{};
	class vn_i_marines_static_m101_01: vn_static_m101_base{};
	class vn_i_marines_static_m101_02: vn_static_m101_02_base{};
	class vn_i_rla_static_m101_01: vn_static_m101_base{};
	class vn_i_rla_static_m101_02: vn_static_m101_02_base{};
	class vn_b_rok_army_static_m1919a4_high: vn_static_m1919a4_high_base{};
	class vn_b_rok_army_static_m1919a4_low: vn_static_m1919a4_low_base{};
	class vn_b_rok_marines_static_m1919a4_high: vn_static_m1919a4_high_base{};
	class vn_b_rok_marines_static_m1919a4_low: vn_static_m1919a4_low_base{};
	class vn_i_marines_static_m1919a4_high: vn_static_m1919a4_high_base{};
	class vn_i_marines_static_m1919a4_low: vn_static_m1919a4_low_base{};
	class vn_i_rla_static_m1919a4_high: vn_static_m1919a4_high_base{};
	class vn_i_rla_static_m1919a4_low: vn_static_m1919a4_low_base{};
	class vn_static_mg42_high_base: vn_static_rpd_high_base{};
	class vn_static_mg42_low_base: vn_static_mg42_high_base{};
	class vn_o_vc_static_mg42_high: vn_static_mg42_high_base{};
	class vn_o_vc_static_mg42_low: vn_static_mg42_low_base{};
	class vn_o_pl_static_mg42_high: vn_static_mg42_high_base{};
	class vn_o_pl_static_mg42_low: vn_static_mg42_low_base{};
	class vn_static_mk18_base: StaticCannon{};
	class vn_b_army_static_mk18: vn_static_mk18_base{};
	class vn_b_sf_static_mk18: vn_static_mk18_base{};
	class vn_b_seal_static_mk18: vn_static_mk18_base{};
	class vn_b_rok_army_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_b_rok_marines_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_b_aus_army_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_b_nz_army_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_i_marines_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_i_rla_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_b_rok_army_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_b_rok_marines_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_b_aus_army_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_b_nz_army_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_i_marines_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_i_rla_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_o_pl_static_mortar_type53: vn_static_mortar_type53_base{};
	class vn_o_pl_static_mortar_type63: vn_static_mortar_type63_base{};
	class vn_o_pl_static_rpd_high: vn_static_rpd_high_base{};
	class vn_static_sgm_base: StaticMGWeapon
	{
		class AnimationSources;
	};
	class vn_static_sgm_high_base: vn_static_sgm_base
	{
		class AnimationSources: AnimationSources
		{
		};
	};
	class vn_static_sgm_low_base: vn_static_sgm_high_base
	{
		class AnimationSources: AnimationSources
		{
			class hide_shield;
		};
	};
	class vn_o_nva_static_sgm_low_01: vn_static_sgm_low_base{};
	class vn_o_nva_static_sgm_low_02: vn_static_sgm_low_base{};
	class vn_o_nva_static_sgm_high_01: vn_static_sgm_high_base{};
	class vn_o_nva_65_static_sgm_low_01: vn_static_sgm_low_base{};
	class vn_o_nva_65_static_sgm_low_02: vn_static_sgm_low_base{};
	class vn_o_nva_65_static_sgm_high_01: vn_static_sgm_high_base{};
	class vn_o_nva_navy_static_sgm_low_01: vn_static_sgm_low_base{};
	class vn_o_nva_navy_static_sgm_low_02: vn_static_sgm_low_base{};
	class vn_o_nva_navy_static_sgm_high_01: vn_static_sgm_high_base{};
	class vn_o_vc_static_sgm_low_01: vn_o_nva_static_sgm_low_01{};
	class vn_o_vc_static_sgm_low_02: vn_o_nva_static_sgm_low_02{};
	class vn_o_vc_static_sgm_high_01: vn_o_nva_static_sgm_high_01{};
	class vn_o_pl_static_sgm_low_01: vn_static_sgm_low_base{};
	class vn_o_pl_static_sgm_low_02: vn_static_sgm_low_base{};
	class vn_o_pl_static_sgm_high_01: vn_static_sgm_high_base{};
	class vn_o_pl_static_type56rr: vn_static_type56rr_base{};
	class vn_o_pl_static_zpu4: vn_static_zpu4_base{};
	class vn_static_zgu1_base: StaticCannon{};
	class vn_o_nva_static_zgu1_01: vn_static_zgu1_base{};
	class vn_o_nva_65_static_zgu1_01: vn_static_zgu1_base{};
	class vn_o_nva_navy_static_zgu1_01: vn_static_zgu1_base{};
	class vn_o_vc_static_zgu1_01: vn_static_zgu1_base{};
	class vn_o_pl_static_zgu1_01: vn_static_zgu1_base{};
	class vn_o_kr_static_zgu1_01: vn_static_zgu1_base{};
	class vn_i_fank_70_static_zgu1_01: vn_static_zgu1_base{};
	class vn_static_m1910_base: StaticMGWeapon{};
	class vn_static_m1910_low_base: vn_static_m1910_base{};
	class vn_static_m1910_low_noshield_base: vn_static_m1910_low_base{};
	class vn_static_m1910_high_base: vn_static_m1910_base{};
	class vn_o_nva_static_m1910_low_01: vn_static_m1910_low_base{};
	class vn_o_nva_static_m1910_low_02: vn_static_m1910_low_noshield_base{};
	class vn_o_nva_static_m1910_high_01: vn_static_m1910_high_base{};
	class vn_o_nva_65_static_m1910_low_01: vn_o_nva_static_m1910_low_01{};
	class vn_o_nva_65_static_m1910_low_02: vn_o_nva_static_m1910_low_02{};
	class vn_o_nva_65_static_m1910_high_01: vn_static_m1910_high_base{};
	class vn_o_nva_navy_static_m1910_low_01: vn_o_nva_static_m1910_low_01{};
	class vn_o_nva_navy_static_m1910_low_02: vn_o_nva_static_m1910_low_02{};
	class vn_o_nva_navy_static_m1910_high_01: vn_static_m1910_high_base{};
	class vn_o_vc_static_m1910_low_01: vn_o_nva_static_m1910_low_01{};
	class vn_o_vc_static_m1910_low_02: vn_o_nva_static_m1910_low_02{};
	class vn_o_vc_static_m1910_high_01: vn_o_nva_static_m1910_high_01{};
	class vn_o_kr_static_m1910_low_01: vn_o_nva_static_m1910_low_01{};
	class vn_o_kr_static_m1910_low_02: vn_o_nva_static_m1910_low_02{};
	class vn_o_kr_static_m1910_high_01: vn_static_m1910_high_base{};
	class vn_b_static_m2_scoped_high_base: vn_static_m2_high_base{};
	class vn_static_m2_scoped_low_base: vn_static_m2_high_base{};
	class vn_b_army_static_m2_scoped_high: vn_b_static_m2_scoped_high_base{};
	class vn_b_army_static_m2_scoped_low: vn_static_m2_scoped_low_base{};
	class vn_b_sf_static_m2_scoped_high: vn_b_static_m2_scoped_high_base{};
	class vn_b_sf_static_m2_scoped_low: vn_static_m2_scoped_low_base{};
	class vn_b_usmc_static_m2_scoped_high: vn_b_static_m2_scoped_high_base{};
	class vn_b_usmc_static_m2_scoped_low: vn_static_m2_scoped_low_base{};
	class vn_b_usmc_static_m2_high: vn_static_m2_high_base{};
	class vn_b_usmc_static_m2_low: vn_static_m2_low_base{};
	class vn_i_fank_71_static_m2_high: vn_static_m2_high_base{};
	class vn_i_fank_71_static_m2_low: vn_static_m2_low_base{};
	class vn_o_kr_static_dp28_high: vn_static_dp28_high_base{};
	class vn_i_fank_70_static_dp28_high: vn_static_dp28_high_base{};
	class vn_o_kr_static_dshkm_high_01: vn_static_dshkm_high_01_base{};
	class vn_o_kr_static_dshkm_high_02: vn_static_dshkm_high_02_base{};
	class vn_o_kr_static_dshkm_low_01: vn_static_dshkm_low_01_base{};
	class vn_o_kr_static_dshkm_low_02: vn_static_dshkm_low_02_base{};
	class vn_i_fank_70_static_dshkm_high_01: vn_static_dshkm_high_01_base{};
	class vn_i_fank_70_static_dshkm_high_02: vn_static_dshkm_high_02_base{};
	class vn_i_fank_70_static_dshkm_low_01: vn_static_dshkm_low_01_base{};
	class vn_i_fank_70_static_dshkm_low_02: vn_static_dshkm_low_02_base{};
	class vn_o_kr_static_h12: vn_static_h12_base{};
	class vn_b_usmc_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_i_fank_71_static_m40a1rr: vn_static_m40a1rr_base{};
	class vn_b_usmc_static_m60_high: vn_static_m60_high_base{};
	class vn_b_usmc_static_m60_low: vn_static_m60_low_base{};
	class vn_i_fank_71_static_m60_high: vn_static_m60_high_base{};
	class vn_i_fank_71_static_m60_low: vn_static_m60_low_base{};
	class vn_b_usmc_static_m101_01: vn_static_m101_base{};
	class vn_b_usmc_static_m101_02: vn_static_m101_02_base{};
	class vn_i_fank_71_static_m1919a4_high: vn_static_m1919a4_high_base{};
	class vn_i_fank_71_static_m1919a4_low: vn_static_m1919a4_low_base{};
	class vn_i_fank_71_static_m1919a6: vn_static_m1919a6_base{};
	class vn_i_fank_71_static_m45: vn_static_m45_base{};
	class vn_b_usmc_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_i_fank_71_static_mortar_m2: vn_static_mortar_m2_base{};
	class vn_b_usmc_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_i_fank_71_static_mortar_m29: vn_static_mortar_m29_base{};
	class vn_o_kr_static_mortar_type53: vn_static_mortar_type53_base{};
	class vn_i_fank_70_static_mortar_type53: vn_static_mortar_type53_base{};
	class vn_o_kr_static_mortar_type63: vn_static_mortar_type63_base{};
	class vn_i_fank_70_static_mortar_type63: vn_static_mortar_type63_base{};
	class vn_o_kr_static_rpd_high: vn_static_rpd_high_base{};
	class vn_i_fank_70_static_rpd_high: vn_static_rpd_high_base{};
	class vn_o_kr_static_sgm_low_01: vn_static_sgm_low_base{};
	class vn_o_kr_static_sgm_low_02: vn_static_sgm_low_base{};
	class vn_o_kr_static_sgm_high_01: vn_static_sgm_high_base{};
	class vn_i_fank_70_static_sgm_low_01: vn_static_sgm_low_base{};
	class vn_i_fank_70_static_sgm_low_02: vn_static_sgm_low_base{};
	class vn_i_fank_70_static_sgm_high_01: vn_static_sgm_high_base{};
	class vn_o_kr_static_type56rr: vn_static_type56rr_base{};
	class vn_i_fank_70_static_type56rr: vn_static_type56rr_base{};
	class vn_i_fank_70_static_l60mk3: vn_static_l60mk3_base{};
	class vn_i_fank_71_static_l70mk2: vn_static_l70mk2_base{};

//Structures
	class vn_o_vc_spiderhole_01: StaticWeapon
	{
		class CargoTurret;
		class Turrets
		{
			class CargoTurretMain: CargoTurret
			{
			};
		};
	};
	class vn_o_vc_spiderhole_02: vn_o_vc_spiderhole_01{};
	class vn_o_vc_spiderhole_03: vn_o_vc_spiderhole_01
	{
		class Turrets: Turrets
		{
			class CargoTurretMain: CargoTurretMain
			{
			};
			class CargoTurretNew: CargoTurretMain
			{
			};
		};
	};
	class vn_o_nva_spiderhole_01: vn_o_vc_spiderhole_01{};
	class vn_o_nva_spiderhole_02: vn_o_vc_spiderhole_02{};
	class vn_o_nva_spiderhole_03: vn_o_vc_spiderhole_03{};
	class vn_o_pl_spiderhole_01: vn_o_vc_spiderhole_01{};
	class vn_o_pl_spiderhole_02: vn_o_vc_spiderhole_02{};
	class vn_o_pl_spiderhole_03: vn_o_vc_spiderhole_03{};

//Wheeled

	class vn_wheeled_car_base: Car_F{};
	class vn_wheeled_truck_base: Truck_02_Base_F{};
	class vn_bicycle_base: vn_wheeled_car_base{};
	class vn_bicycle_01_base: vn_bicycle_base{};
	class vn_bicycle_02_base: vn_bicycle_base{};
	class vn_c_bicycle_01: vn_bicycle_01_base{};
	class vn_o_bicycle_01: vn_bicycle_01_base{};
	class vn_o_bicycle_01_nva65: vn_bicycle_01_base{};
	class vn_o_bicycle_01_nvam: vn_bicycle_01_base{};
	class vn_o_bicycle_01_vcmf: vn_bicycle_01_base{};
	class vn_c_bicycle_02: vn_bicycle_02_base{};
	class vn_o_bicycle_02: vn_bicycle_02_base{};
	class vn_o_bicycle_02_nva65: vn_bicycle_02_base{};
	class vn_o_bicycle_02_vcmf: vn_bicycle_02_base{};
	class vn_wheeled_m54_base: vn_wheeled_truck_base
	{
		class Turrets
		{
			class codriver_ffv: cargoturret
			{
			};
		};
	};
	class vn_wheeled_m54_cab_base: vn_wheeled_m54_base{};
	class vn_wheeled_m54_01_base: vn_wheeled_m54_cab_base
	{
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class cargoturret_left: cargoturret
			{
			};
			class cargoturret_right: cargoturret_left
			{
			};
		};
	};
	class vn_wheeled_m54_02_base: vn_wheeled_m54_01_base{};
	class vn_wheeled_m54_ammo_base: vn_wheeled_m54_01_base{};
	class vn_wheeled_m54_fuel_base: vn_wheeled_m54_cab_base{};
	class vn_wheeled_m54_03_base: vn_wheeled_m54_cab_base{};
	class vn_wheeled_m54_repair_base: vn_wheeled_m54_03_base{};
	class vn_wheeled_m54_mg_02_base: vn_wheeled_m54_base
	{
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_wheeled_m54_mg_01_base: vn_wheeled_m54_base
	{
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class mg1turret: NewTurret
			{
			};
			class mg2turret: mg1turret
			{
			};
			class mg3turret: mg1turret
			{
			};
			class guntruck_front: cargoturret
			{
			};
			class guntruck_right: guntruck_front
			{
			};
			class guntruck_left: guntruck_front
			{
			};
			class guntruck_rear: guntruck_front
			{
			};
		};
	};
	class vn_wheeled_m54_mg_03_base: vn_wheeled_m54_mg_01_base
	{
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class mg1turret: mg1turret
			{
			};
			class mg2turret: mg2turret
			{
			};
			class mg3turret: mg3turret
			{
			};
			class guntruck_left: cargoturret
			{
			};
			class guntruck_right: guntruck_left
			{
			};
			class guntruck_rear: guntruck_left
			{
			};
		};
	};
	class vn_b_wheeled_m54_01: vn_wheeled_m54_01_base{};
	class vn_b_wheeled_m54_01_airport: vn_b_wheeled_m54_01{};
	class vn_b_wheeled_m54_01_sog: vn_b_wheeled_m54_01{};
	class vn_i_wheeled_m54_01: vn_wheeled_m54_01_base{};
	class vn_b_wheeled_m54_02: vn_wheeled_m54_02_base{};
	class vn_b_wheeled_m54_02_sog: vn_b_wheeled_m54_02{};
	class vn_i_wheeled_m54_02: vn_wheeled_m54_02_base{};
	class vn_b_wheeled_m54_ammo: vn_wheeled_m54_ammo_base{};
	class vn_b_wheeled_m54_ammo_airport: vn_b_wheeled_m54_ammo{};
	class vn_i_wheeled_m54_ammo: vn_wheeled_m54_ammo_base{};
	class vn_b_wheeled_m54_fuel: vn_wheeled_m54_fuel_base{};
	class vn_b_wheeled_m54_fuel_airport: vn_b_wheeled_m54_fuel{};
	class vn_i_wheeled_m54_fuel: vn_wheeled_m54_fuel_base{};
	class vn_b_wheeled_m54_03: vn_wheeled_m54_03_base{};
	class vn_i_wheeled_m54_03: vn_wheeled_m54_03_base{};
	class vn_b_wheeled_m54_repair: vn_wheeled_m54_repair_base{};
	class vn_b_wheeled_m54_repair_airport: vn_b_wheeled_m54_repair{};
	class vn_i_wheeled_m54_repair: vn_wheeled_m54_repair_base{};
	class vn_b_wheeled_m54_mg_02: vn_wheeled_m54_mg_02_base{};
	class vn_b_wheeled_m54_mg_01: vn_wheeled_m54_mg_01_base{};
	class vn_b_wheeled_m54_mg_03: vn_wheeled_m54_mg_03_base{};
	class vn_wheeled_m151_base: vn_wheeled_car_base{};
	class vn_wheeled_m151_01_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class codriver_ffv: cargoturret
			{
			};
			class cargoturret_rear: codriver_ffv
			{
			};
		};
	};
	class vn_wheeled_m151_02_base: vn_wheeled_m151_01_base{};
	class vn_wheeled_m151_mg_01_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class codriver_ffv: cargoturret
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_wheeled_m151_mg_02_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class codriver_ffv: cargoturret
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_wheeled_m151_mg_03_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class mg2turret: NewTurret
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_wheeled_m151_mg_04_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_b_wheeled_m151_01: vn_wheeled_m151_01_base{};
	class vn_b_wheeled_m151_01_mp: vn_b_wheeled_m151_01{};
	class vn_b_wheeled_m151_02: vn_wheeled_m151_02_base{};
	class vn_b_wheeled_m151_02_mp: vn_b_wheeled_m151_02{};
	class vn_b_wheeled_m151_mg_02: vn_wheeled_m151_mg_02_base{};
	class vn_b_wheeled_m151_mg_02_mp: vn_b_wheeled_m151_mg_02{};
	class vn_b_wheeled_m151_mg_03: vn_wheeled_m151_mg_03_base{};
	class vn_b_wheeled_m151_mg_03_mp: vn_b_wheeled_m151_mg_03{};
	class vn_b_wheeled_m151_mg_04: vn_wheeled_m151_mg_04_base{};
	class vn_b_wheeled_m151_mg_04_mp: vn_b_wheeled_m151_mg_04{};
	class vn_i_wheeled_m151_01: vn_wheeled_m151_01_base{};
	class vn_i_wheeled_m151_01_mp: vn_i_wheeled_m151_01{};
	class vn_i_wheeled_m151_02: vn_wheeled_m151_02_base{};
	class vn_i_wheeled_m151_02_mp: vn_i_wheeled_m151_02{};
	class vn_i_wheeled_m151_mg_01: vn_wheeled_m151_mg_01_base{};
	class vn_i_wheeled_m151_mg_01_mp: vn_i_wheeled_m151_mg_01{};
	class vn_c_wheeled_m151_01: vn_wheeled_m151_01_base{};
	class vn_c_wheeled_m151_02: vn_wheeled_m151_02_base{};
	class vn_wheeled_z157_base: vn_wheeled_truck_base
	{
		class Turrets: Turrets
		{
			class Codriver: cargoturret
			{
			};
		};
	};
	class vn_wheeled_z157_01_base: vn_wheeled_z157_base
	{
		class Turrets: Turrets
		{
			class Codriver: Codriver
			{
			};
			class cargoturret_left: cargoturret
			{
			};
			class cargoturret_right: cargoturret_left
			{
			};
		};
	};
	class vn_wheeled_z157_02_base: vn_wheeled_z157_01_base
	{
		class Turrets: Turrets
		{
			class Codriver: Codriver
			{
			};
			class cargoturret_left: cargoturret
			{
			};
			class cargoturret_right: cargoturret_left
			{
			};
		};
	};
	class vn_wheeled_z157_ammo_base: vn_wheeled_z157_01_base{};
	class vn_wheeled_z157_fuel_base: vn_wheeled_z157_base{};
	class vn_wheeled_z157_repair_base: vn_wheeled_z157_base{};
	class vn_wheeled_z157_03_base: vn_wheeled_z157_base{};
	class vn_wheeled_z157_04_base: vn_wheeled_z157_base{};
	class vn_wheeled_z157_mg_01_base: vn_wheeled_z157_base
	{
		class Turrets: Turrets
		{
			class Codriver: Codriver
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_wheeled_z157_mg_02_base: vn_wheeled_z157_base
	{
		class Turrets: Turrets
		{
			class Codriver: Codriver
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_o_wheeled_z157_01: vn_wheeled_z157_01_base{};
	class vn_o_wheeled_z157_02: vn_wheeled_z157_02_base{};
	class vn_o_wheeled_z157_ammo: vn_wheeled_z157_ammo_base{};
	class vn_o_wheeled_z157_fuel: vn_wheeled_z157_fuel_base{};
	class vn_o_wheeled_z157_repair: vn_wheeled_z157_repair_base{};
	class vn_o_wheeled_z157_03: vn_wheeled_z157_03_base{};
	class vn_o_wheeled_z157_04: vn_wheeled_z157_04_base{};
	class vn_o_wheeled_z157_mg_01: vn_wheeled_z157_mg_01_base{};
	class vn_o_wheeled_z157_mg_02: vn_wheeled_z157_mg_02_base{};
	class vn_o_wheeled_z157_01_nva65: vn_wheeled_z157_01_base{};
	class vn_o_wheeled_z157_02_nva65: vn_wheeled_z157_02_base{};
	class vn_o_wheeled_z157_ammo_nva65: vn_wheeled_z157_ammo_base{};
	class vn_o_wheeled_z157_fuel_nva65: vn_wheeled_z157_fuel_base{};
	class vn_o_wheeled_z157_repair_nva65: vn_wheeled_z157_repair_base{};
	class vn_o_wheeled_z157_03_nva65: vn_wheeled_z157_03_base{};
	class vn_o_wheeled_z157_04_nva65: vn_wheeled_z157_04_base{};
	class vn_o_wheeled_z157_mg_01_nva65: vn_wheeled_z157_mg_01_base{};
	class vn_o_wheeled_z157_mg_02_nva65: vn_wheeled_z157_mg_02_base{};
	class vn_o_wheeled_z157_01_vcmf: vn_wheeled_z157_01_base{};
	class vn_o_wheeled_z157_02_vcmf: vn_wheeled_z157_02_base{};
	class vn_o_wheeled_z157_ammo_vcmf: vn_wheeled_z157_ammo_base{};
	class vn_o_wheeled_z157_fuel_vcmf: vn_wheeled_z157_fuel_base{};
	class vn_o_wheeled_z157_repair_vcmf: vn_wheeled_z157_repair_base{};
	class vn_o_wheeled_z157_03_vcmf: vn_wheeled_z157_03_base{};
	class vn_o_wheeled_z157_04_vcmf: vn_wheeled_z157_04_base{};
	class vn_o_wheeled_z157_mg_01_vcmf: vn_wheeled_z157_mg_01_base{};
	class vn_o_wheeled_z157_mg_02_vcmf: vn_wheeled_z157_mg_02_base{};
	class vn_o_wheeled_z157_01_nvam: vn_wheeled_z157_01_base{};
	class vn_o_wheeled_z157_02_nvam: vn_wheeled_z157_02_base{};
	class vn_o_wheeled_z157_ammo_nvam: vn_wheeled_z157_ammo_base{};
	class vn_o_wheeled_z157_fuel_nvam: vn_wheeled_z157_fuel_base{};
	class vn_o_wheeled_z157_repair_nvam: vn_wheeled_z157_repair_base{};
	class vn_o_wheeled_z157_03_nvam: vn_wheeled_z157_03_base{};
	class vn_o_wheeled_z157_04_nvam: vn_wheeled_z157_04_base{};
	class vn_o_wheeled_z157_mg_01_nvam: vn_wheeled_z157_mg_01_base{};
	class vn_o_wheeled_z157_mg_02_nvam: vn_wheeled_z157_mg_02_base{};
	class vn_wheeled_btr40_base: vn_wheeled_car_base{};
	class vn_wheeled_btr40_01_base: vn_wheeled_btr40_base
	{
		class Turrets
		{
		};
	};
	class vn_wheeled_btr40_ambulance_base: vn_wheeled_btr40_base
	{
		class Turrets
		{
		};
	};
	class vn_wheeled_btr40_mg_01_base: vn_wheeled_btr40_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class vn_wheeled_btr40_mg_02_base: vn_wheeled_btr40_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class vn_wheeled_btr40_mg_03_base: vn_wheeled_btr40_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class vn_o_wheeled_btr40_01: vn_wheeled_btr40_01_base{};
	class vn_o_wheeled_btr40_02: vn_wheeled_btr40_ambulance_base{};
	class vn_o_wheeled_btr40_mg_01: vn_wheeled_btr40_mg_01_base{};
	class vn_o_wheeled_btr40_mg_02: vn_wheeled_btr40_mg_02_base{};
	class vn_o_wheeled_btr40_mg_03: vn_wheeled_btr40_mg_03_base{};
	class vn_o_wheeled_btr40_01_nva65: vn_wheeled_btr40_01_base{};
	class vn_o_wheeled_btr40_02_nva65: vn_wheeled_btr40_ambulance_base{};
	class vn_o_wheeled_btr40_mg_01_nva65: vn_wheeled_btr40_mg_01_base{};
	class vn_o_wheeled_btr40_mg_02_nva65: vn_wheeled_btr40_mg_02_base{};
	class vn_o_wheeled_btr40_mg_03_nva65: vn_wheeled_btr40_mg_03_base{};
	class vn_o_wheeled_btr40_01_nvam: vn_wheeled_btr40_01_base{};
	class vn_o_wheeled_btr40_02_nvam: vn_wheeled_btr40_ambulance_base{};
	class vn_o_wheeled_btr40_mg_01_nvam: vn_wheeled_btr40_mg_01_base{};
	class vn_o_wheeled_btr40_mg_02_nvam: vn_wheeled_btr40_mg_02_base{};
	class vn_o_wheeled_btr40_mg_03_nvam: vn_wheeled_btr40_mg_03_base{};
	class vn_o_wheeled_btr40_01_vcmf: vn_wheeled_btr40_01_base{};
	class vn_o_wheeled_btr40_02_vcmf: vn_wheeled_btr40_ambulance_base{};
	class vn_o_wheeled_btr40_mg_01_vcmf: vn_wheeled_btr40_mg_01_base{};
	class vn_o_wheeled_btr40_mg_02_vcmf: vn_wheeled_btr40_mg_02_base{};
	class vn_o_wheeled_btr40_mg_03_vcmf: vn_wheeled_btr40_mg_03_base{};
	class vn_wheeled_car_base2: vn_wheeled_car_base{};
	class vn_wheeled_car_01_base: vn_wheeled_car_base2{};
	class vn_wheeled_car_02_base: vn_wheeled_car_base2{};
	class vn_wheeled_car_03_base: vn_wheeled_car_base2{};
	class vn_wheeled_car_04_base: vn_wheeled_car_base2{};
	class vn_wheeled_car_04_unarmed_base: vn_wheeled_car_04_base{};
	class vn_wheeled_car_04_mg_base: vn_wheeled_car_04_base{};
	class vn_c_car_01_01: vn_wheeled_car_01_base{};
	class vn_c_car_02_01: vn_wheeled_car_02_base{};
	class vn_c_car_03_01: vn_wheeled_car_03_base{};
	class vn_c_car_04_01: vn_wheeled_car_04_unarmed_base{};
	class vn_o_car_01_01: vn_wheeled_car_01_base{};
	class vn_o_car_02_01: vn_wheeled_car_02_base{};
	class vn_o_car_03_01: vn_wheeled_car_03_base{};
	class vn_o_car_04_01: vn_wheeled_car_04_unarmed_base{};
	class vn_o_car_04_mg_01: vn_wheeled_car_04_mg_base{};
	class vn_wheeled_m151_mg_05_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_b_wheeled_m151_mg_05: vn_wheeled_m151_mg_05_base{};
	class vn_o_bicycle_01_pl: vn_bicycle_01_base{};
	class vn_o_bicycle_02_pl: vn_bicycle_02_base{};
	class vn_o_wheeled_btr40_01_pl: vn_wheeled_btr40_01_base{};
	class vn_o_wheeled_btr40_02_pl: vn_wheeled_btr40_ambulance_base{};
	class vn_o_wheeled_btr40_mg_01_pl: vn_wheeled_btr40_mg_01_base{};
	class vn_o_wheeled_btr40_mg_02_pl: vn_wheeled_btr40_mg_02_base{};
	class vn_o_wheeled_btr40_mg_03_pl: vn_wheeled_btr40_mg_03_base{};
	class vn_wheeled_m151_mg_06_base: vn_wheeled_m151_base
	{
		class Turrets
		{
			class codriver_ffv: CargoTurret
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
	};
	class vn_i_wheeled_m151_mg_06: vn_wheeled_m151_mg_06_base{};
	class vn_i_wheeled_m151_01_marines: vn_wheeled_m151_01_base{};
	class vn_i_wheeled_m151_02_marines: vn_wheeled_m151_02_base{};
	class vn_i_wheeled_m151_mg_01_marines: vn_wheeled_m151_mg_01_base{};
	class vn_i_wheeled_m151_mg_02_marines: vn_wheeled_m151_mg_02_base{};
	class vn_i_wheeled_m151_mg_05_marines: vn_wheeled_m151_mg_05_base{};
	class vn_i_wheeled_m151_mg_06_marines: vn_wheeled_m151_mg_06_base{};
	class vn_b_wheeled_m151_01_aus_army: vn_wheeled_m151_01_base{};
	class vn_b_wheeled_m151_02_aus_army: vn_wheeled_m151_02_base{};
	class vn_b_wheeled_m151_mg_02_aus_army: vn_wheeled_m151_mg_02_base{};
	class vn_b_wheeled_m151_mg_03_aus_army: vn_wheeled_m151_mg_03_base{};
	class vn_b_wheeled_m151_mg_06_aus_army: vn_wheeled_m151_mg_06_base{};
	class vn_b_wheeled_m151_01_nz_army: vn_wheeled_m151_01_base{};
	class vn_b_wheeled_m151_02_nz_army: vn_wheeled_m151_02_base{};
	class vn_b_wheeled_m151_mg_02_nz_army: vn_wheeled_m151_mg_02_base{};
	class vn_b_wheeled_m151_mg_03_nz_army: vn_wheeled_m151_mg_03_base{};
	class vn_b_wheeled_m151_mg_06_nz_army: vn_wheeled_m151_mg_06_base{};
	class vn_b_wheeled_m151_mg_06: vn_wheeled_m151_mg_06_base{};
	class vn_i_wheeled_m151_01_rla: vn_wheeled_m151_01_base{};
	class vn_i_wheeled_m151_02_rla: vn_wheeled_m151_02_base{};
	class vn_i_wheeled_m151_mg_01_rla: vn_wheeled_m151_mg_01_base{};
	class vn_i_wheeled_m151_mg_02_rla: vn_wheeled_m151_mg_02_base{};
	class vn_i_wheeled_m151_mg_06_rla: vn_wheeled_m151_mg_06_base{};
	class vn_b_wheeled_m151_01_rok_army: vn_wheeled_m151_01_base{};
	class vn_b_wheeled_m151_02_rok_army: vn_wheeled_m151_02_base{};
	class vn_b_wheeled_m151_mg_01_rok_army: vn_wheeled_m151_mg_01_base{};
	class vn_b_wheeled_m151_mg_02_rok_army: vn_wheeled_m151_mg_02_base{};
	class vn_b_wheeled_m151_mg_06_rok_army: vn_wheeled_m151_mg_06_base{};
	class vn_b_wheeled_m151_01_rok_marines: vn_wheeled_m151_01_base{};
	class vn_b_wheeled_m151_02_rok_marines: vn_wheeled_m151_02_base{};
	class vn_b_wheeled_m151_mg_01_rok_marines: vn_wheeled_m151_mg_01_base{};
	class vn_b_wheeled_m151_mg_02_rok_marines: vn_wheeled_m151_mg_02_base{};
	class vn_b_wheeled_m151_mg_06_rok_marines: vn_wheeled_m151_mg_06_base{};
	class vn_i_wheeled_m54_01_marines: vn_wheeled_m54_01_base{};
	class vn_i_wheeled_m54_02_marines: vn_wheeled_m54_02_base{};
	class vn_i_wheeled_m54_03_marines: vn_wheeled_m54_03_base{};
	class vn_i_wheeled_m54_ammo_marines: vn_wheeled_m54_ammo_base{};
	class vn_i_wheeled_m54_fuel_marines: vn_wheeled_m54_fuel_base{};
	class vn_i_wheeled_m54_repair_marines: vn_wheeled_m54_repair_base{};
	class vn_b_wheeled_m54_01_aus_army: vn_wheeled_m54_01_base{};
	class vn_b_wheeled_m54_02_aus_army: vn_wheeled_m54_02_base{};
	class vn_b_wheeled_m54_03_aus_army: vn_wheeled_m54_03_base{};
	class vn_b_wheeled_m54_ammo_aus_army: vn_wheeled_m54_ammo_base{};
	class vn_b_wheeled_m54_fuel_aus_army: vn_wheeled_m54_fuel_base{};
	class vn_b_wheeled_m54_repair_aus_army: vn_wheeled_m54_repair_base{};
	class vn_b_wheeled_m54_01_nz_army: vn_wheeled_m54_01_base{};
	class vn_b_wheeled_m54_02_nz_army: vn_wheeled_m54_02_base{};
	class vn_b_wheeled_m54_03_nz_army: vn_wheeled_m54_03_base{};
	class vn_b_wheeled_m54_ammo_nz_army: vn_wheeled_m54_ammo_base{};
	class vn_b_wheeled_m54_fuel_nz_army: vn_wheeled_m54_fuel_base{};
	class vn_b_wheeled_m54_repair_nz_army: vn_wheeled_m54_repair_base{};
	class vn_i_wheeled_m54_01_rla: vn_wheeled_m54_01_base{};
	class vn_i_wheeled_m54_02_rla: vn_wheeled_m54_02_base{};
	class vn_i_wheeled_m54_03_rla: vn_wheeled_m54_03_base{};
	class vn_i_wheeled_m54_ammo_rla: vn_wheeled_m54_ammo_base{};
	class vn_i_wheeled_m54_fuel_rla: vn_wheeled_m54_fuel_base{};
	class vn_i_wheeled_m54_repair_rla: vn_wheeled_m54_repair_base{};
	class vn_b_wheeled_m54_01_rok_army: vn_wheeled_m54_01_base{};
	class vn_b_wheeled_m54_02_rok_army: vn_wheeled_m54_02_base{};
	class vn_b_wheeled_m54_03_rok_army: vn_wheeled_m54_03_base{};
	class vn_b_wheeled_m54_ammo_rok_army: vn_wheeled_m54_ammo_base{};
	class vn_b_wheeled_m54_fuel_rok_army: vn_wheeled_m54_fuel_base{};
	class vn_b_wheeled_m54_repair_rok_army: vn_wheeled_m54_repair_base{};
	class vn_b_wheeled_m54_01_rok_marines: vn_wheeled_m54_01_base{};
	class vn_b_wheeled_m54_02_rok_marines: vn_wheeled_m54_02_base{};
	class vn_b_wheeled_m54_03_rok_marines: vn_wheeled_m54_03_base{};
	class vn_b_wheeled_m54_ammo_rok_marines: vn_wheeled_m54_ammo_base{};
	class vn_b_wheeled_m54_fuel_rok_marines: vn_wheeled_m54_fuel_base{};
	class vn_b_wheeled_m54_repair_rok_marines: vn_wheeled_m54_repair_base{};
	class vn_o_wheeled_z157_01_pl: vn_wheeled_z157_01_base{};
	class vn_o_wheeled_z157_02_pl: vn_wheeled_z157_02_base{};
	class vn_o_wheeled_z157_ammo_pl: vn_wheeled_z157_ammo_base{};
	class vn_o_wheeled_z157_fuel_pl: vn_wheeled_z157_fuel_base{};
	class vn_o_wheeled_z157_repair_pl: vn_wheeled_z157_repair_base{};
	class vn_o_wheeled_z157_mg_01_pl: vn_wheeled_z157_mg_01_base{};
	class vn_o_wheeled_z157_mg_02_pl: vn_wheeled_z157_mg_02_base{};
	class vn_wheeled_btr40_mg_04_base: vn_wheeled_btr40_mg_01_base
	{
		class Turrets: Turrets
		{
			class mg1_turret: MainTurret
			{
			};
		};
	};
	class vn_wheeled_btr40_mg_05_base: vn_wheeled_btr40_mg_04_base{};
	class vn_wheeled_btr40_mg_06_base: vn_wheeled_btr40_mg_04_base{};
	class vn_o_wheeled_btr40_mg_04: vn_wheeled_btr40_mg_04_base{};
	class vn_o_wheeled_btr40_mg_04_nva65: vn_wheeled_btr40_mg_04_base{};
	class vn_o_wheeled_btr40_mg_04_nvam: vn_wheeled_btr40_mg_04_base{};
	class vn_o_wheeled_btr40_mg_04_vcmf: vn_wheeled_btr40_mg_04_base{};
	class vn_o_wheeled_btr40_mg_04_pl: vn_wheeled_btr40_mg_04_base{};
	class vn_o_wheeled_btr40_mg_05: vn_wheeled_btr40_mg_05_base{};
	class vn_o_wheeled_btr40_mg_05_nva65: vn_wheeled_btr40_mg_05_base{};
	class vn_o_wheeled_btr40_mg_05_nvam: vn_wheeled_btr40_mg_05_base{};
	class vn_o_wheeled_btr40_mg_05_vcmf: vn_wheeled_btr40_mg_05_base{};
	class vn_o_wheeled_btr40_mg_05_pl: vn_wheeled_btr40_mg_05_base{};
	class vn_o_wheeled_btr40_mg_06: vn_wheeled_btr40_mg_06_base{};
	class vn_o_wheeled_btr40_mg_06_nva65: vn_wheeled_btr40_mg_06_base{};
	class vn_o_wheeled_btr40_mg_06_nvam: vn_wheeled_btr40_mg_06_base{};
	class vn_o_wheeled_btr40_mg_06_vcmf: vn_wheeled_btr40_mg_06_base{};
	class vn_o_wheeled_btr40_mg_06_pl: vn_wheeled_btr40_mg_06_base{};
	class vn_o_wheeled_btr40_01_kr: vn_wheeled_btr40_01_base{};
	class vn_o_wheeled_btr40_02_kr: vn_wheeled_btr40_ambulance_base{};
	class vn_o_wheeled_btr40_mg_01_kr: vn_wheeled_btr40_mg_01_base{};
	class vn_o_wheeled_btr40_mg_02_kr: vn_wheeled_btr40_mg_02_base{};
	class vn_o_wheeled_btr40_mg_04_kr: vn_wheeled_btr40_mg_04_base{};
	class vn_i_wheeled_btr40_01_fank_70: vn_wheeled_btr40_01_base{};
	class vn_i_wheeled_btr40_02_fank_70: vn_wheeled_btr40_ambulance_base{};
	class vn_i_wheeled_btr40_mg_01_fank_70: vn_wheeled_btr40_mg_01_base{};
	class vn_i_wheeled_btr40_mg_02_fank_70: vn_wheeled_btr40_mg_02_base{};
	class vn_i_wheeled_btr40_mg_04_fank_70: vn_wheeled_btr40_mg_04_base{};
	class vn_c_car_01_02: vn_wheeled_car_01_base{};
	class vn_o_car_01_01_kr: vn_wheeled_car_01_base{};
	class vn_o_car_02_01_kr: vn_wheeled_car_02_base{};
	class vn_o_car_03_01_kr: vn_wheeled_car_03_base{};
	class vn_o_car_04_01_kr: vn_wheeled_car_04_unarmed_base{};
	class vn_o_car_04_mg_01_kr: vn_wheeled_car_04_mg_base{};
	class vn_wheeled_lr2a_base: vn_wheeled_car_base{};
	class vn_wheeled_lr2a_01_base: vn_wheeled_lr2a_base{};
	class vn_wheeled_lr2a_02_base: vn_wheeled_lr2a_01_base{};
	class vn_wheeled_lr2a_03_base: vn_wheeled_lr2a_base{};
	class vn_wheeled_lr2a_mg_01_base: vn_wheeled_lr2a_base
	{
		class Turrets
		{
			class commanderTurret: CargoTurret
			{
			};
			class mg1_turret: NewTurret
			{
			};
			
		};
	};
	class vn_wheeled_lr2a_mg_02_base: vn_wheeled_lr2a_mg_01_base{};
	class vn_wheeled_lr2a_mg_03_base: vn_wheeled_lr2a_mg_01_base{};
	class vn_b_wheeled_lr2a_01_aus_army: vn_wheeled_lr2a_01_base{};
	class vn_b_wheeled_lr2a_02_aus_army: vn_wheeled_lr2a_02_base{};
	class vn_b_wheeled_lr2a_03_aus_army: vn_wheeled_lr2a_03_base{};
	class vn_b_wheeled_lr2a_mg_01_aus_army: vn_wheeled_lr2a_mg_01_base{};
	class vn_b_wheeled_lr2a_mg_02_aus_army: vn_wheeled_lr2a_mg_02_base{};
	class vn_b_wheeled_lr2a_mg_03_aus_army: vn_wheeled_lr2a_mg_03_base{};
	class vn_b_wheeled_lr2a_01_nz_army: vn_wheeled_lr2a_01_base{};
	class vn_b_wheeled_lr2a_02_nz_army: vn_wheeled_lr2a_02_base{};
	class vn_b_wheeled_lr2a_03_nz_army: vn_wheeled_lr2a_03_base{};
	class vn_b_wheeled_lr2a_mg_01_nz_army: vn_wheeled_lr2a_mg_01_base{};
	class vn_b_wheeled_lr2a_mg_02_nz_army: vn_wheeled_lr2a_mg_02_base{};
	class vn_b_wheeled_lr2a_mg_03_nz_army: vn_wheeled_lr2a_mg_03_base{};
	class vn_i_wheeled_lr2a_mg_01_fank_71: vn_wheeled_lr2a_mg_01_base{};
	class vn_b_wheeled_m151_01_usmc: vn_wheeled_m151_01_base{};
	class vn_b_wheeled_m151_02_usmc: vn_wheeled_m151_02_base{};
	class vn_b_wheeled_m151_mg_02_usmc: vn_wheeled_m151_mg_02_base{};
	class vn_b_wheeled_m151_mg_03_usmc: vn_wheeled_m151_mg_03_base{};
	class vn_b_wheeled_m151_mg_04_usmc: vn_wheeled_m151_mg_04_base{};
	class vn_i_wheeled_m151_01_fank_71: vn_wheeled_m151_01_base{};
	class vn_i_wheeled_m151_02_fank_71: vn_wheeled_m151_02_base{};
	class vn_i_wheeled_m151_mg_01_fank_71: vn_wheeled_m151_mg_01_base{};
	class vn_i_wheeled_m151_mg_04_fank_71: vn_wheeled_m151_mg_04_base{};
	class vn_wheeled_m274_base: vn_wheeled_car_base{};
	class vn_wheeled_m274_01_base: vn_wheeled_m274_base
	{
		class Turrets
		{
			class CargoTurret_1: CargoTurret
			{
			};
			class CargoTurret_2: CargoTurret_1
			{
			};
			class CargoTurret_3: CargoTurret_1
			{
			};
		};
	};
	class vn_wheeled_m274_02_base: vn_wheeled_m274_base{};
	class vn_wheeled_m274_mg_01_base: vn_wheeled_m274_base
	{
		class Turrets
		{
			class mg1_turret: NewTurret
			{
			};
		};
	};
	class vn_wheeled_m274_mg_02_base: vn_wheeled_m274_base
	{
		class Turrets
		{
			class cargoTurret_1: CargoTurret
			{
			};
			class mg1_turret: NewTurret
			{
			};

		};
	};
	class vn_wheeled_m274_mg_03_base: vn_wheeled_m274_base
	{
		class Turrets
		{
			class mg1_turret: NewTurret
			{
			};
		};
	};
	class vn_b_wheeled_m274_01_01: vn_wheeled_m274_01_base{};
	class vn_b_wheeled_m274_01_03: vn_wheeled_m274_01_base{};
	class vn_b_wheeled_m274_02_01: vn_wheeled_m274_02_base{};
	class vn_b_wheeled_m274_02_03: vn_wheeled_m274_02_base{};
	class vn_b_wheeled_m274_mg_01_01: vn_wheeled_m274_mg_01_base{};
	class vn_b_wheeled_m274_mg_02_01: vn_wheeled_m274_mg_02_base{};
	class vn_b_wheeled_m274_mg_03_01: vn_wheeled_m274_mg_03_base{};
	class vn_b_wheeled_m274_01_02: vn_wheeled_m274_01_base{};
	class vn_b_wheeled_m274_02_02: vn_wheeled_m274_02_base{};
	class vn_b_wheeled_m274_mg_01_02: vn_wheeled_m274_mg_01_base{};
	class vn_b_wheeled_m274_mg_02_02: vn_wheeled_m274_mg_02_base{};
	class vn_b_wheeled_m274_mg_03_02: vn_wheeled_m274_mg_03_base{};
	class vn_b_wheeled_m54_01_usmc: vn_wheeled_m54_01_base{};
	class vn_b_wheeled_m54_02_usmc: vn_wheeled_m54_02_base{};
	class vn_b_wheeled_m54_03_usmc: vn_wheeled_m54_03_base{};
	class vn_b_wheeled_m54_ammo_usmc: vn_wheeled_m54_ammo_base{};
	class vn_b_wheeled_m54_fuel_usmc: vn_wheeled_m54_fuel_base{};
	class vn_b_wheeled_m54_repair_usmc: vn_wheeled_m54_repair_base{};
	class vn_o_wheeled_z157_01_kr: vn_wheeled_z157_01_base{};
	class vn_o_wheeled_z157_02_kr: vn_wheeled_z157_02_base{};
	class vn_o_wheeled_z157_ammo_kr: vn_wheeled_z157_ammo_base{};
	class vn_o_wheeled_z157_fuel_kr: vn_wheeled_z157_fuel_base{};
	class vn_o_wheeled_z157_repair_kr: vn_wheeled_z157_repair_base{};
	class vn_o_wheeled_z157_mg_01_kr: vn_wheeled_z157_mg_01_base{};
	class vn_i_wheeled_z157_01_fank_70: vn_wheeled_z157_01_base{};
	class vn_i_wheeled_z157_02_fank_70: vn_wheeled_z157_02_base{};
	class vn_i_wheeled_z157_ammo_fank_70: vn_wheeled_z157_ammo_base{};
	class vn_i_wheeled_z157_fuel_fank_70: vn_wheeled_z157_fuel_base{};
	class vn_i_wheeled_z157_repair_fank_70: vn_wheeled_z157_repair_base{};
	class vn_i_wheeled_z157_mg_01_fank_70: vn_wheeled_z157_mg_01_base{};

	#include "ussradvisors.hpp"

	#include "pavn1965.hpp"
	#include "pavndaccong.hpp"

	#include "vclocal.hpp"
	#include "vcregional.hpp"

	#include "kr1975.hpp"

	#include "ciafieldop.hpp"

	#include "kot1968.hpp"

	#include "rok1965.hpp"
	#include "rokmarines1965.hpp"

	#include "adf1966.hpp"
	#include "adf1970.hpp"

	#include "nzdf1966.hpp"
	#include "nzdf1970.hpp"

	#include "usmc1966.hpp"
	#include "usmc1970.hpp"

	#include "usn.hpp"

	#include "arvn1965.hpp"
	#include "arvnlldb.hpp"
	#include "fank1971.hpp"
};
