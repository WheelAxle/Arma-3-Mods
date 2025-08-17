class CfgPatches
{
	class disable_rhsgref_door_anim
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsgref_a2port_armor"
		};
		author="Axle";
	};
};

class cfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
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
		class EventHandlers;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Components;
	};
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class Sounds;
	};
	class Offroad_01_base_F: Car_F
	{
	};
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class AnimationSources;
	};
	class Truck_02_base_F: Truck_F
	{
	};
	class O_Truck_02_covered_F: Truck_02_base_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
		};
		class EventHandlers;
	};
	class MRAP_02_base_F: Car_F
	{
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class EventHandlers;
		class CommanderOptics;
	};
	class ThingX;
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitMissiles;
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class CargoTurret;
		class RotorLibHelicopterProperties;
		class Reflectors
		{
			class Right;
		};
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class Sounds;
		class HitPoints: HitPoints
		{
			class HitEngine1;
		};
		class Components;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class RotorLibHelicopterProperties;
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class Components;
	};
	class Plane: Air
	{
		class HitPoints;
		class EventHandlers;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};
	class Plane_CAS_02_base_F;
	class O_Plane_CAS_02_F: Plane_CAS_02_base_F
	{
		class EventHandlers;
		class AnimationSources;
		class ViewPilot;
	};
	class UAV: Plane
	{
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
		class AnimationSources;
	};
	class rhsgref_BRDM2: Wheeled_APC_F
	{
		driverDoor="";
		class CargoTurret;
		class Turrets: Turrets
		{
			class CommanderOptics: NewTurret
			{
				gunnerDoor="";
			};
			class MainTurret: MainTurret
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
			class CargoTurret_05: CargoTurret_01
			{
			};
			class CargoTurret_06: CargoTurret_01
			{
			};
		};
	};
};