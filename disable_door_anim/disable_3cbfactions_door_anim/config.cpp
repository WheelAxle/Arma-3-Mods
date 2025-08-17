class CfgPatches
{
	class disable_3cbfactions_door_anim
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"UK3CB_Factions_UN_I"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
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
	class MRAP_01_base_F: Car_F
	{
		class Sounds;
		class EventHandlers;
		class Components;
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
	class APC_Tracked_01_base_F: Tank_F
	{	
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
		class NewTurret;
		class Turrets
		{
			class CopilotTurret: NewTurret
			{
			};
		};
	};
	class VTOL_Base_F: Plane_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
		};
	};
	class VTOL_01_base_F: VTOL_Base_F
	{
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
//AAV
	class UK3CB_AAV: APC_Tracked_01_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				class Turrets
				{
				};
			};
			class CommanderOptics: NewTurret
			{
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_04: CargoTurret_03
			{
			};
			class CargoTurret_05: CargoTurret_03
			{
			};
			class CargoTurret_06: CargoTurret_03
			{
			};
			class CargoTurret_07: CargoTurret_03
			{
			};
			class CargoTurret_08: CargoTurret_03
			{
			};
		};
	};
//M270
	class UK3CB_M270_Base: APC_Tracked_01_base_F
	{
		driverDoor="";
	};
	class UK3CB_M270_MLRS_Base: UK3CB_M270_Base
	{
	};
	class UK3CB_M270_MLRS_HE_Base: UK3CB_M270_MLRS_Base
	{
		class Turrets: Turrets
		{
			class MLRS_Turret: MainTurret
			{
				gunnerDoor="";
				class Turrets: Turrets
				{
					class Commander_Turret: NewTurret
					{
						gunnerDoor="";
					};
				};
			};
		};
	};
	class UK3CB_M270_MLRS_Cluster_Base: UK3CB_M270_MLRS_Base
	{
		class Turrets: Turrets
		{
			class MLRS_Turret: MainTurret
			{
				gunnerDoor="";
				class Turrets: Turrets
				{
					class Commander_Turret: NewTurret
					{
						gunnerDoor="";
					};
				};
			};
		};
	};
//LAV25
	class UK3CB_LAV25_Base: Wheeled_APC_F
	{
		driverDoor="";
		class CargoTurret;
	};
	class UK3CB_LAV25: UK3CB_LAV25_Base
	{
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class LAVGunnerTurret: MainTurret
			{
				gunnerDoor="";
				class Turrets
				{
					class LAVCommanderOptics: NewTurret
					{
						gunnerDoor="";
					};
				};
			};
		};
	};
	class UK3CB_LAV25_HQ: UK3CB_LAV25_Base
	{
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class LAVCommanderOptics: NewTurret
			{
				gunnerDoor="";
			};
			class LAVGunnerTurret: NewTurret
			{
				gunnerDoor="";
			};
			class TopCoverFront: CargoTurret
			{
				gunnerDoor="";
			};
			class TopCoverRear: TopCoverFront
			{
				gunnerDoor="";
			};
		};
	};
//V22 Osprey
	class UK3CB_Osprey_Base: VTOL_01_base_F
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
//MAXXPRO
	class UK3CB_MaxxPro_Base: MRAP_01_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class CargoTurret;
	};
	class UK3CB_MaxxPro_M2: UK3CB_MaxxPro_Base
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class Passenger_Turret: CargoTurret
			{
				gunnerDoor="";
			};
			class M2_Turret: MainTurret
			{
				gunnerDoor="";
			};
		};
	};
	class UK3CB_MaxxPro_MK19: UK3CB_MaxxPro_Base
	{
		class Turrets: Turrets
		{
			class Passenger_Turret: CargoTurret
			{
				gunnerDoor="";
			};
			class MK19_Turret: MainTurret
			{
				gunnerDoor="";
			};
		};
	};
//M939
	class UK3CB_M939_Base: Truck_F
	{
	};
	class UK3CB_M939_Closed: UK3CB_M939_Base
	{
	};
//MTVR
	class UK3CB_MTVR_Base: Truck_02_base_F
	{
		driverDoor="";
		class CargoTurret;
		class Turrets
		{
			class TopCover_Turret: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class UK3CB_MTVR_Closed: UK3CB_MTVR_Base
	{
		class Turrets: Turrets
		{
			class TopCover_Turret: TopCover_Turret
			{
			};
			class Passenger_Turret: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_1: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_2: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class UK3CB_MTVR_Open: UK3CB_MTVR_Base
	{
		class Turrets: Turrets
		{
			class TopCover_Turret: TopCover_Turret
			{
			};
			class Passenger_Turret: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_1: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_2: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class UK3CB_MTVR_Refuel: UK3CB_MTVR_Base
	{
		class Turrets: Turrets
		{
			class TopCover_Turret: TopCover_Turret
			{
			};
			class Passenger_Turret: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_1: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_2: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class UK3CB_MTVR_Reammo: UK3CB_MTVR_Base
	{
		class Turrets: Turrets
		{
			class TopCover_Turret: TopCover_Turret
			{
			};
			class Passenger_Turret: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class UK3CB_MTVR_Repair: UK3CB_MTVR_Base
	{
		class Turrets: Turrets
		{
			class TopCover_Turret: TopCover_Turret
			{
			};
			class Passenger_Turret: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class UK3CB_MTVR_Recovery: UK3CB_MTVR_Base
	{
		class Turrets: Turrets
		{
			class TopCover_Turret: TopCover_Turret
			{
			};
			class Passenger_Turret: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class UK3CB_MTVR_Zu23: UK3CB_MTVR_Base
	{
		class Turrets: Turrets
		{
			class TopCover_Turret: TopCover_Turret
			{
			};
			class Passenger_Turret: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
	};
};