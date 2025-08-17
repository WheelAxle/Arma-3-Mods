class CfgPatches
{
	class disable_gm_door_anim
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"gm_characters_xx_revolutionaries"
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

	class gm_wheeled_base: Car_F
	{};
	class gm_wheeled_truck_base: gm_wheeled_base
	{};
	class gm_wheeled_car_base: gm_wheeled_base
	{};
	class gm_u1300l_base: gm_wheeled_truck_base
	{
		driverDoor="";
	};
	class gm_u1300l_firefighter_base: gm_u1300l_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
		};
	};
	class gm_typ2_base: gm_wheeled_car_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class gm_typ247_base: gm_typ2_base
	{};
	class gm_typ247_patrol_base: gm_typ247_base
	{};
	class gm_typ247_firefighter_base: gm_typ247_patrol_base
	{
		CargoDoors[]=
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
	class gm_typ1_base: gm_wheeled_car_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			""
		};
	};
	class gm_w123_base: gm_wheeled_car_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			""
		};
		class Turrets: Turrets
		{
			class cargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class gm_iltis_base: gm_wheeled_car_base
	{
		driverDoor="";
	};
	class gm_iltis_cargo_base: gm_iltis_base
	{
		class Turrets: Turrets
		{
			class cargoTurret_01: cargoTurret_01
			{
			};
			class cargoTurret_02: CargoTurret
			{
				gunnerDoor="";
			};
			class cargoTurret_03: cargoTurret_02
			{
				gunnerDoor="";
			};
		};
	};
	class gm_kat1_base: gm_wheeled_truck_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
		class MachineGunTurret_base;
		class Turrets: Turrets
		{
			class MachineGunTurret_01: MachineGunTurret_base
			{
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CommanderTurret: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class gm_u1300l_base: gm_wheeled_truck_base
	{
		driverDoor="";
		class MachineGunTurret_base;
		class Turrets: Turrets
		{
			class MachineGunTurret_01: MachineGunTurret_base
			{
				gunnerDoor="";
			};
			class MainTurret: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class gm_p601_base: gm_wheeled_car_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			"",
			""
		};
	};
	class gm_p601_patrol_base: gm_p601_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
		};
	};
	class gm_uaz469_base: gm_wheeled_car_base
	{
		driverDoor="";
	};
	class gm_uaz469_cargo_base: gm_uaz469_base
	{
		class Turrets: Turrets
		{
			class cargoTurret_01: cargoTurret_01
			{
			};
			class cargoTurret_02: CargoTurret
			{
				gunnerDoor="";
			};
			class cargoTurret_03: cargoTurret_02
			{
				gunnerDoor="";
			};
			class cargoTurret_04: cargoTurret_03
			{
				gunnerDoor="";
			};
			class cargoTurret_05: cargoTurret_03
			{
				gunnerDoor="";
			};
			class cargoTurret_06: cargoTurret_05
			{
			};
		};
	};
	class gm_ural4320_base: gm_wheeled_truck_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class gm_ural375d_cargo_base: gm_ural375d_base
	{
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret
			{
				maxTurn=0;//80
				minTurn=-80;//-80
			};
			class CargoTurret_03: CargoTurret_02
			{
			};
			class CargoTurret_04: CargoTurret_02
			{
			};
			class CargoTurret_05: CargoTurret_02
			{
			};
			class CargoTurret_06: CargoTurret_02
			{
			};
			class CargoTurret_07: CargoTurret_02
			{
			};
			class CargoTurret_08: CargoTurret_02
			{
			};
			class CargoTurret_09: CargoTurret_02
			{
			};
			class CargoTurret_10: CargoTurret_02
			{
			};
			class CargoTurret_11: CargoTurret_02
			{
			};
			class CargoTurret_12: CargoTurret_02
			{
			};
			class CargoTurret_13: CargoTurret_02
			{
			};
			class CargoTurret_14: CargoTurret_02
			{
			};
			class CargoTurret_15: CargoTurret_02
			{
			};
		};
	};
	class gm_ural4320_base: gm_wheeled_truck_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class gm_tracked_base: Tank_F
	{};
	class gm_tracked_Tank_base: gm_tracked_base
	{};
	class gm_Leopard1_base: gm_tracked_Tank_base
	{
		driverDoor="";
	};
	class gm_Leopard1a0_base: gm_Leopard1_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				gunnerGetInAction="GetinLow";
				gunnerGetOutAction="GetOutLow";
				class Turrets
				{
					class CommanderTurret: CommanderTurret_base
					{
						gunnerDoor="";
						gunnerGetInAction="GetinLow";
						gunnerGetOutAction="GetOutLow";
					};
					class LoaderTurret: LoaderTurret_base
					{
						gunnerDoor="";
						gunnerGetInAction="GetinLow";
						gunnerGetOutAction="GetOutLow";
					};
					class MachineGunTurret_01: MachineGunTurret_base
					{
						gunnerGetInAction="GetinLow";
						gunnerGetOutAction="GetOutLow";
					};
				};
			};
		};
	};
	class gm_rakjpz2_base: gm_tracked_Tank_base
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
			class CommanderTurret: CommanderTurret_base
			{
				gunnerDoor="";
			};
		};
	};
	class gm_BPz2_base: gm_Leopard1_base
	{
		class Turrets: Turrets
		{
			class CommanderTurret: CommanderTurret_base
			{
				gunnerDoor="";
				gunnerGetInAction="GetinLow";
				gunnerGetOutAction="GetOutLow";
			};
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				gunnerGetInAction="GetinLow";
				gunnerGetOutAction="GetOutLow";
			};
			class MachineGunTurret_01: MachineGunTurret_base
			{
				gunnerDoor="";
				gunnerGetInAction="GetinLow";
				gunnerGetOutAction="GetOutLow";
			};
		};
	};
	class gm_t55_base: gm_tracked_Tank_base
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				gunnerGetInAction="GetinLow";
				gunnerGetOutAction="GetOutLow";
				class Turrets
				{
					class CommanderTurret: CommanderTurret_base
					{
						gunnerDoor="";
						gunnerGetInAction="GetinLow";
						gunnerGetOutAction="GetOutLow";
					};
					class LoaderTurret: LoaderTurret_base
					{
						gunnerDoor="";
						gunnerGetInAction="GetinLow";
						gunnerGetOutAction="GetOutLow";
					};
				};
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
			class CargoTurret_05: CargoTurret_01
			{
			};
		};
	};
	class gm_pt76_base: gm_tracked_Tank_base
	{
		driverDoor="";
	};
	class gm_pt76b_base: gm_pt76_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				gunnerGetInAction="GetinLow";
				gunnerGetOutAction="GetOutLow";
			};
			class CommanderTurret: CommanderTurret_base
			{
				gunnerDoor="";
				gunnerGetInAction="GetinLow";
				gunnerGetOutAction="GetOutLow";
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
			class CargoTurret_05: CargoTurret_01
			{
			};
			class CargoTurret_06: CargoTurret_01
			{
			};
		};
	};
};