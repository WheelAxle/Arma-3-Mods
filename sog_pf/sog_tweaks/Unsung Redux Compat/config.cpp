class CfgPatches
{
	class ax_sog_tweaks_unsung_redux
	{
		addonRootClass="ax_sog_tweaks";
		units[]=
		{
			"uns_mg42_low_NVA_65",
			"uns_Type36_57mm_NVA_65"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"UNS_Buildings2"
		};
		skipWhenMissingDependencies = 1;
	};
};
class DefaultEventHandlers;
class ViewOptics;
class ViewCargo;
class WeaponFireGun
{
	class Table
	{
		class T0;
		class T1;
		class T2;
		class T3;
		class T4;
		class T5;
		class T6;
		class T7;
		class T8;
		class T9;
		class T10;
		class T11;
		class T12;
		class T13;
		class T14;
		class T15;
		class T16;
		class T17;
		class T18;
		class T19;
		class T20;
		class T21;
		class T22;
	};
};
class WeaponFireMGun;
class WeaponCloudsGun
{
	class Table
	{
		class T0;
	};
};
class WeaponCloudsMGun: WeaponCloudsGun
{
	class Table
	{
		class T0;
	};
};
class AirplaneHUD
{
	class Pos10Vector;
	class Bones
	{
		class AGLMove1;
		class AGLMove2;
		class ASLMove1;
		class ASLMove2;
		class VertSpeed;
		class SpdMove2;
		class ILS;
		class WeaponAim: Pos10Vector
		{
		};
		class Target: Pos10Vector
		{
		};
		class TargetDistanceMissile;
		class TargetDistanceMGun;
		class Level0: Pos10Vector
		{
		};
		class LevelP5: Level0
		{
		};
		class LevelM5: Level0
		{
		};
		class LevelP10: Level0
		{
		};
		class LevelM10: Level0
		{
		};
		class LevelP15: Level0
		{
		};
		class LevelM15: Level0
		{
		};
		class Velocity: Pos10Vector
		{
		};
		class PlaneW;
	};
	class Draw
	{
		class Altitude;
		class DimmedBase
		{
			class AltitudeBase;
		};
		class Speed;
		class SpeedNumber;
		class PlaneW
		{
			class LineHL;
			class Velocity;
		};
		class MGun
		{
			class Circle;
		};
		class Missile
		{
			class Circle;
			class Target;
		};
		class Horizont
		{
			class Dimmed
			{
				class Level0;
			};
			class LevelP5;
			class LevelM5;
			class LevelP10;
			class LevelM10;
			class LevelP15;
			class LevelM15;
		};
		class ILS
		{
			class Glideslope;
			class AOABracket;
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components;
};
class VehicleSystemsTemplateLeftSensorsCommander: DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateRightSensorsCommander: DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateLeftSensorsGunner: DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateRightSensorsGunner: DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateLeftSensorsPilot: DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateRightSensorsPilot: DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components: components
	{
	};
};

class cfgVehicles
{
	class All
	{
		class EventHandlers;
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
		class GunFire;
		class GunClouds;
		class MGunClouds;
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
			class TurnOut;
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
			class TransportCountermeasuresComponent;
		};
		class MarkerLights
		{
			class RedStill;
			class GreenStill;
			class WhiteStill;
			class WhiteBlinking;
			class RedBlinking;
			class PositionRed
			{
				class Attenuation;
			};
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
		class EventHandlers: DefaultEventHandlers
		{
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
		class EventHandlers;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class EventHandlers;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class NewTurret;
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
	};
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewOptics;
		class ViewGunner;
		class CommanderOptics;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class Turrets
		{
			class MainTurret;
		};
		class ViewOptics: ViewOptics
		{
		};
		class ViewGunner: ViewGunner
		{
		};
		class CommanderOptics: CommanderOptics
		{
		};
		class HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class EventHandlers;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class EventHandlers;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class StaticWeapon: LandVehicle{};
	class StaticMortar: StaticWeapon{};
	class StaticCannon: StaticWeapon{};
	class Mortar_01_base_F: StaticMortar{};
	class uns_plane;
	class StaticGrenadeLauncher;
	class StaticAAWeapon;
	class StaticMGWeapon;
	class MBT_01_arty_base_F;
	class Car_F;

	class B_Soldier_base_F;
	class uns_simc_tcu_tee_long_base: B_Soldier_base_F
	{
		scope=1;
	};

	#include "a1h.hpp"
    #include "a3.hpp"
    #include "a4.hpp"
    #include "a6.hpp"
	#include "a7.hpp"
	#include "a37.hpp"
	#include "aaa.hpp"
	#include "ac47.hpp"
	#include "an2.hpp"
	#include "arty.hpp"
	#include "b52.hpp"
	#include "boats.hpp"
	#include "c1a.hpp"
	#include "c130.hpp"
	#include "ch46.hpp"
	#include "ch47.hpp"
	#include "ch53.hpp"
	#include "c123.hpp"
	#include "e2.hpp"
	#include "f8.hpp"
	#include "f105.hpp"
	#include "f111.hpp"
	#include "hc21.hpp"
	#include "m48.hpp"
	#include "m107.hpp"
	#include "m113.hpp"
	#include "m274.hpp"
	#include "m551.hpp"
	#include "mig21.hpp"
	#include "o1.hpp"
	#include "o2skymaster.hpp"
	#include "ov1mohawk.hpp"
	#include "ov10.hpp"
	#include "pbr.hpp"
	#include "static.hpp"
	#include "t34.hpp"
	#include "t55.hpp"
	#include "uh13.hpp"
	#include "xm706.hpp"
};