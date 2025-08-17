class CfgPatches
{
	class remove_gps_units_nickel_steel
	{
        addonRootClass="remove_gps_units";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"air_f_vietnam_04_c"
		};
        skipWhenMissingDependencies = 1;
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
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
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponCloudsMGun;
class AirplaneHUD;
class CfgVehicles
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
			class GunFire;
			class GunClouds;
			class MGunClouds;
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
			class ViewGunner;
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
	class vnx_helicopter_base: Helicopter_Base_H
	{
		class AnimationSources;
		class Components;
		class EventHandlers: EventHandlers
		{
		};
		class HitPoints: HitPoints
		{
			class HitAvionics;
			class HitEngine;
			class HitFuel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHRotor;
			class HitHull;
			class HitHydraulics;
			class HitMissiles;
			class HitVRotor;
			class HitWinch;
		};
		class MFD
		{
		};
		class NewTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
			};
		};
		class ViewOptics;
		class ViewPilot;
	};
    class vnx_air_c119_base: Plane_Base_F
	{
		enableGPS=0;
    };
};