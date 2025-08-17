class CfgPatches
{
	class remove_gps_units_unsung_redux
	{
		addonRootClass="remove_gps_units";
		units[]={};
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
	class LandVehicle;
	class Tank_F;
	class StaticWeapon: LandVehicle{};
	class StaticMortar: StaticWeapon{};
	class StaticCannon: StaticWeapon{};
	class Mortar_01_base_F: StaticMortar{};
	class Plane: Air
	{
		class ViewPilot: ViewPilot
		{
		};
		class ViewOptics: ViewOptics
		{
		};
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
				class pos10vector: Pos10Vector
				{
				};
				class bones: Bones
				{
				};
				class Draw: Draw
				{
					class DimmedBase: DimmedBase
					{
					};
					class PlaneW: PlaneW
					{
					};
					class MGun: MGun
					{
					};
					class Missile: Missile
					{
					};
					class Horizont: Horizont
					{
						class Dimmed: Dimmed
						{
						};
					};
					class ILS: ILS
					{
						class Glideslope: Glideslope
						{
						};
					};
				};
			};
		};
		class GunFire: WeaponFireGun
		{
		};
		class GunClouds: WeaponCloudsGun
		{
		};
		class MGunFire: WeaponFireMGun
		{
		};
		class MGunClouds: WeaponCloudsMGun
		{
		};
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
			class Default;
		};
		class CamShake;
		class HitPoints
		{
			class HitHull;
		};
		class EventHandlers: DefaultEventHandlers
		{
		};
		class DestructionEffects;
	};
	class Plane_Base_F: Plane
	{
		class Turrets
		{
			class CopilotTurret: NewTurret
			{
				class ViewGunner: ViewPilot
				{
				};
			};
		};
		class HitPoints: HitPoints
		{
		};
		class EventHandlers: EventHandlers
		{
		};
	};
	class uns_plane: Plane_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
			};
		};
		class NewTurret;
		class ViewPilot;
		class ViewGunner;
		class ViewOptics;
		class AnimationSources;
		class Eventhandlers;
		class Components;
		enableGPS=0;
	};
	class StaticGrenadeLauncher;
	class StaticAAWeapon;
	class StaticMGWeapon;
	class MBT_01_arty_base_F;
	class Car_F;

	class uns_A1J: uns_plane
	{
		enableGPS=0;
	};
	class uns_a7_base: uns_plane
	{
		enableGPS=0;
	};
	class uns_a37_base: uns_plane
	{
		enableGPS=0;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={6000,3000,1500};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4500,2500};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_AC47: uns_plane
	{
		enableGPS=0;
	};
	class uns_b52h: uns_plane
	{
		enableGPS=0;
	};
	class uns_c1a: uns_plane
	{
        enableGPS=0;
	};
	class uns_c123: uns_plane
	{
		enableGPS=0;
	};
	class uns_C130_Base;
	class uns_C130_H_Base: uns_C130_Base
	{
		enableGPS=0;
	};
	class uns_ch46d: Helicopter_Base_H
	{
		enableGPS=0;
	};
	class uns_ch53_base: Helicopter_Base_H
	{
		enableGPS=0;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
				};
			};
		};
	};
	class uns_f105D_CAP: uns_plane
	{
		enableGPS=0;
	};
	class uns_f105F_base: uns_f105D_CAP
	{
		enableGPS=0;
	};
	class UNS_F111_base: uns_plane
	{
		enableGPS=0;
	};
	class uns_o1: uns_plane
	{
		enableGPS=0;
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[] = {6000,3000,1500};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[] = {4500,2500};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_skymaster_base: uns_plane
	{
		enableGPS=0;
	};
	class uns_skymaster_CAS: uns_skymaster_base
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class UNS_skymaster_HCAS: uns_skymaster_CAS
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_navy: uns_plane
	{
		enableGPS=0;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usaf: uns_ov10_navy{};
	class uns_ov10_usmc: uns_ov10_navy{};
	class uns_ov10_navy_CAS: uns_ov10_navy
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usaf_CAS: uns_ov10_usaf
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usmc_CAS: uns_ov10_usmc
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_navy_HCAS: uns_ov10_navy
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usaf_HCAS: uns_ov10_usaf
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usmc_HCAS: uns_ov10_usmc
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_navy_MR: uns_ov10_navy
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usaf_MR: uns_ov10_usaf
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usmc_MR: uns_ov10_usmc
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_navy_FAC: uns_ov10_navy
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usaf_FAC: uns_ov10_usaf
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usmc_FAC: uns_ov10_usmc
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_navy_CBU: uns_ov10_navy
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_ov10_usaf_CBU: uns_ov10_usaf
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftSensorsPilot
			{
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightSensorsPilot
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class CrewDisplay
					{
					};
					class SensorDisplay
					{
						componentType="EmptyDisplayComponent";
						range[]={4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class uns_H13_base: Helicopter_Base_H
	{
		enableGPS=0;
	};
};