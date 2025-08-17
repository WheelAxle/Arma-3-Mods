class CfgPatches
{
	class disable_csla_door_anim
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CSLA_CIV"
		};
		author="Axle";
	};
};

class EventHandlers;
class RotorLibHelicopterProperties;
class AnimationSources;
class Turrets;
class CopilotTurret;
class MainTurret;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponCloudsMGun;
class AirplaneHUD;
class DefaultEventHandlers;
class Weaponfiremgun;
class NewTurret;
class Rcwsoptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class wide;
	class medium;
	class narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class All
	{
		class EventHandlers;
		class MarkerLights;
		class NvgMarkers;
		class nvgMarker;
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
		class SoundEnvironext;
		class Soundequipment;
		class Soundgear;
		class Soundbreath;
		class Soundbreathswimming;
		class Soundbreathinjured;
		class Soundhitscream;
		class Soundinjured;
		class Soundbreathautomatic;
		class Sounddrown;
		class Soundchoke;
		class Soundrecovered;
		class Soundburning;
		class PulsationSound;
		class Sounddrowning;
		class Reflectors;
		class FxExplo;
		class AnimationSources;
		class Gunfire: Weaponfiregun
		{
		};
		class Gunclouds: Weaponcloudsgun
		{
		};
		class Mgunclouds: Weaponcloudsmgun
		{
		};
		class Damage;
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
		class Camshakegforce;
		class Camshakedamage;
		class SpeechVariants
		{
			class Default;
		};
		class SimpleObject;
	};
	class Logic: All
	{
	};
	class AllVehicles: All
	{
		class SquadTitles;
		class NewTurret
		{
			class ViewGunner;
			class TurretSpec;
			class Reflectors;
			class Gunfire: Weaponfiregun
			{
			};
			class Gunclouds: Weaponcloudsgun
			{
			};
			class Mgunclouds: Weaponcloudsmgun
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
		class viewpilot;
		class viewcargo;
		class viewoptics;
		class pilotspec;
		class cargospec
		{
			class cargo1;
		};
		class mfd;
		class sounds
		{
			class engine;
			class movement;
		};
		class soundevents;
		class rendertargets;
		class cargoturret: NewTurret
		{
			class viewgunner: viewcargo
			{
			};
		};
	};
	class Land: AllVehicles
	{
	};
	class LandVehicle: Land
	{
		class Components
		{
			class TransportCounterMeasuresComponent;
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
			class ViewGunner: viewcargo
			{
			};
		};
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
		class Sounds: sounds
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
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class ViewOptics: ViewOptics
				{
				};
				class ViewGunner: ViewGunner
				{
				};
				class Components
				{
				};
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
	class APC_Tracked_02_base_F;
	class Truck_02_MRL_base_F;
	class B_APC_Wheeled_01_cannon_F;
	class StaticCannon;

	class CSLA_Car_base_F: Car_F{};
	class CSLA_AZU_base: CSLA_Car_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			""
		};
	};
	class CSLA_AZU_para_base: CSLA_AZU_base
	{
		driverDoor="";
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				GunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_02
			{
			};
		};
	};
	class CSLA_Truck_base_F: Truck_F{};
	class CSLA_F813: CSLA_Truck_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			"",
			"",
			""
		};
	};
	class CSLA_V3SLizard_base: CSLA_Truck_base_F
	{
		driverDoor="";
		commanderDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class CSLA_PLdvK59V3S: CSLA_V3SLizard_base
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerDoor="";
			};
			class CommanderOptics: NewTurret
			{
			};
		};
	};
	class CSLA_V3S_base: CSLA_Truck_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class Tractor_01_base_F: Car_F{};
	class CSLA_Tractor_base_F: Tractor_01_base_F{};
	class CSLA_base_CATOR: CSLA_Tractor_base_F
	{
		driverDoor="";
	};
	class CSLA_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F{};
	class CSLA_APC_Tracked_base_F: APC_Tracked_02_base_F{};
	class CSLA_BVP1_base: CSLA_APC_Tracked_base_F
	{
		cargoDoors[]=
		{
			"",
			""
		};
		class CargoTurret;
		class NewTurret;
		class Turrets
		{
			class CommanderOptics: NewTurret
			{
			};
		};
	};
	class CSLA_BVP1: CSLA_BVP1_base
	{
		cargoDoors[]=
		{
			"",
			""
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
			class CargoTurret_01: CargoTurret
			{
				GunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				GunnerDoor="";
			};
			class CargoTurret_03: CargoTurret_01
			{
				GunnerDoor="";
			};
			class CargoTurret_04: CargoTurret_03
			{
				GunnerDoor="";
			};
		};
	};
	class CSLA_DTP90: CSLA_BVP1_base
	{
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class CSLA_OZV90: CSLA_BVP1_base
	{
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class CSLA_MU90: CSLA_BVP1_base
	{
		cargoDoors[]=
		{
			""
		};
	};
	class CSLA_OT62: CSLA_BVP1_base
	{
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class CSLA_Truck_MRL_base_F: Truck_02_MRL_base_F{};
	class CSLA_RM51: CSLA_Truck_MRL_base_F
	{
		driverDoor="";
		gunnerDoor="";
	};
	class CSLA_RM70: CSLA_Truck_MRL_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
	};
	class CSLA_Helicopter_Base_H: Helicopter_Base_H{};
	class CSLA_Mi24_Base: CSLA_Helicopter_Base_H
	{
		driverDoor="";
		gunnerDoor="";
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
		};
	};
	class CSLA_PLdvK59_Stat: StaticCannon
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
//US
	class US85_Car_base_F: Car_F{};
	class US85_M1008_base: US85_Car_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class US85_M1025_base: US85_Car_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			""
		};
	};
	class US85_Truck_base_F: Truck_F{};
	class US85_M923_base: US85_Truck_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
	};
	class US85_M923o: US85_M923_base
	{
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class US85_APC_Tracked_base_F: CSLA_APC_Tracked_base_F{};
	class US85_M113_base: US85_APC_Tracked_base_F
	{
		cargoDoors[]=
		{
			""
		};
	};
	class US85_M113_turret: US85_M113_base{};
	class US85_M113: US85_M113_turret
	{
		class CargoTurret;
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				GunnerDoor="";
			};
		};
	};
	class US85_APC_Wheeled_01_cannon_F: CSLA_APC_Wheeled_01_cannon_F{};
	class US85_LAV25_base: US85_APC_Wheeled_01_cannon_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
		gunnerDoor="";
		commanderDoor="";
		class CargoTurret;
		class NewTurret;
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
			class CargoTurret_01: CargoTurret
			{
				GunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				GunnerDoor="";
			};
		};
	};
	class US85_Helicopter_Base_H: Helicopter_Base_H{};
	class US85_AH1_BASE: US85_Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
		};
	};
	class US85_AH1F: US85_AH1_BASE
	{
		driverDoor="";
		gunnerDoor="";
	};
	class US85_H60: US85_Helicopter_Base_H
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerDoor="";
			};
		};
	};
	class FIA_Car_base_F: Car_F
	{
	};
	class FIA_BTR40_base: FIA_Car_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			""
		};
	};
	class FIA_BTR40_DSKM: FIA_BTR40_base
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
};