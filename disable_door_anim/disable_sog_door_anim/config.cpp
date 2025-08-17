class CfgPatches
{
	class disable_sog_door_anim
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"loadorder_f_vietnam"
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
	class vn_wheeled_truck_base: Truck_02_base_F
	{
	};
	class vn_wheeled_m54_base: vn_wheeled_truck_base
	{
		driverDoor="";
		class Turrets
		{
			class codriver_ffv: cargoturret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_wheeled_m54_cab_base: vn_wheeled_m54_base
	{
	};
	class vn_wheeled_m54_01_base: vn_wheeled_m54_cab_base
	{
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class cargoturret_left: cargoturret
			{
				gunnerDoor="";
			};
			class cargoturret_right: cargoturret_left
			{
			};
		};
	};
	class vn_wheeled_m54_mg_02_base: vn_wheeled_m54_base
	{
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class MainTurret: NewTurret
			{
				gunnerDoor="";
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
				gunnerDoor="";
			};
			class mg2turret: mg1turret
			{
			};
			class mg3turret: mg1turret
			{
			};
			class guntruck_front: cargoturret
			{
				gunnerDoor="";
			};
			class guntruck_right: guntruck_front
			{
				gunnerDoor="";
			};
			class guntruck_left: guntruck_front
			{
				gunnerDoor="";
			};
			class guntruck_rear: guntruck_front
			{
				gunnerDoor="";
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
				gunnerDoor="";
			};
			class guntruck_right: guntruck_left
			{
				gunnerDoor="";
			};
			class guntruck_rear: guntruck_left
			{
				gunnerDoor="";
			};
		};
	};
	class vn_wheeled_z157_base: vn_wheeled_truck_base
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class Codriver: cargoturret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_wheeled_z157_01_base: vn_wheeled_z157_base
	{
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class Codriver: Codriver
			{
			};
			class cargoturret_left: cargoturret
			{
				gunnerDoor="";
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
				gunnerDoor="";
			};
			class cargoturret_right: cargoturret_left
			{
			};
		};
	};
	class vn_wheeled_z157_mg_01_base: vn_wheeled_z157_base
	{
	};
	class vn_wheeled_car_base: Car_F
	{
		class AnimationSources;
		class CargoTurret;
		class EventHandlers;
		class NewTurret: NewTurret
		{
			class ViewOptics;
		};
		class PlateInfos;
	};
//Wheeled_02
	class vn_wheeled_car_base2: vn_wheeled_car_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
		class Turrets
		{
			class codriver_ffv: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_wheeled_car_02_base: vn_wheeled_car_base2
	{
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class cargo2_ffv: CargoTurret
			{
				gunnerDoor="";
			};
			class cargo3_ffv: CargoTurret
			{
				gunnerDoor="";
			};
			class cargo4_ffv: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_wheeled_car_03_base: vn_wheeled_car_base2
	{
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class cargo2_ffv: CargoTurret
			{
				gunnerDoor="";
			};
			class cargo3_ffv: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_wheeled_car_04_base: vn_wheeled_car_base2
	{
	};
	class vn_wheeled_car_04_unarmed_base: vn_wheeled_car_04_base
	{
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class cargo2_ffv: CargoTurret
			{
				gunnerDoor="";
			};
			class cargo3_ffv: CargoTurret
			{
				gunnerDoor="";
			};
			class cargo4_ffv: CargoTurret
			{
				gunnerDoor="";
			};
			class cargo5_ffv: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_wheeled_car_04_mg_base: vn_wheeled_car_04_base
	{
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
			};
			class mg1_turret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_helicopter_base: Helicopter_Base_H
	{
	};
	class vn_air_ch34_01_base: vn_helicopter_base
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerDoor="";
			};
			class MainTurret: MainTurret
			{
			};
		};
	};
	class vn_air_ah1g_01_base: vn_helicopter_base
	{
		driverDoor="";
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_air_uh1_01_base: vn_helicopter_base
	{
		driverDoor="";
		class Turrets
		{
			class CopilotTurret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_air_mi2_base: vn_helicopter_base
	{
		driverDoor="";
		class Turrets
		{
			class CopilotTurret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
	class vn_air_mi2_01_base: vn_air_mi2_base
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
//Wheeled_04
	class vn_wheeled_lr2a_base: vn_wheeled_car_base
	{
	};
	class vn_wheeled_lr2a_01_base: vn_wheeled_lr2a_base
	{
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class codriver_ffv: CargoTurret
			{
			};
			class cargo5_ffv: CargoTurret
			{
				gunnerDoor="";
			};
			class cargo6_ffv: cargo5_ffv
			{
			};
		};
	};
	class vn_wheeled_lr2a_02_base: vn_wheeled_lr2a_01_base
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
				gunnerDoor="";
			};
			class cargo5_ffv: cargo5_ffv
			{
			};
			class cargo6_ffv: cargo6_ffv
			{
			};
		};
	};
	class vn_wheeled_lr2a_03_base: vn_wheeled_lr2a_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class codriver_ffv: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
//air_f_02
	class vn_air_uh1c_base: vn_air_uh1_01_base
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
		};
	};
	class vn_air_uh1c_doorguns_base: vn_air_uh1c_base
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
		};
	};
	class vn_air_uh1c_01_base: vn_air_uh1c_doorguns_base
	{
	};
	class vn_air_uh1e_01_base: vn_air_uh1c_01_base
	{
		class Turrets: Turrets
		{
			class CopilotTurret: NewTurret
			{
				gunnerDoor="";
			};
			class MainTurret: MainTurret
			{
			};
			class LeftDoorGun: LeftDoorGun
			{
			};
			class CargoTurret_01: CargoTurret
			{
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
		};
	};
};