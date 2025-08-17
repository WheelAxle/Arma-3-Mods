class CfgPatches
{
	class disable_rhsafrf_door_anim
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhs_btr70_camo"
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
	class rhs_btr_base: Wheeled_APC_F
	{
		class AnimationSources;
		class ViewPilot;
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
			class CommanderOptics: CommanderOptics
			{
				gunnerDoor="";
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
			class CargoTurret_07: CargoTurret_01
			{
			};
			class CargoTurret_08: CargoTurret_01
			{
			};
			class Commander_Out: CargoTurret
			{
			};
		
		};
	};
//2s1
	class rhs_2s1tank_base: Tank_F
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
					class LoaderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
				};
			};
		};
	};
//2s3
	class rhs_2s3tank_base: Tank_F
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
				};
			};
		};
	};
//BTR60
	class rhs_btr60_base: rhs_btr_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			"",
			""
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
			class CommanderOptics: CommanderOptics
			{
				gunnerDoor="";
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
			class CargoTurret_07: CargoTurret_01
			{
			};
			class CargoTurret_08: CargoTurret_01
			{
			};
			class Commander_Out: CargoTurret
			{
			};
		};
	};
	class rhs_zsutank_base: APC_Tracked_02_base_F
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
					gunnerDoor="";
				};
			};
		};
	};
//BTR70
	class rhs_btr70_vmf: rhs_btr_base
	{
	};
//BM21 and ural
	class RHS_Ural_BaseTurret: Truck_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			""
		};
	};
	class RHS_BM21_MSV_01: RHS_Ural_BaseTurret
	{
	};
//Tigr
	class rhs_tigr_base: MRAP_02_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
		};
	};
	class rhs_tigr_vdv: rhs_tigr_base
	{
	};
	class rhs_tigr_sts_vdv: rhs_tigr_vdv
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
			class AGS_Turret: MainTurret
			{
			};
		};
	};
	class rhs_tigr_m_vdv: rhs_tigr_vdv
	{
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
//UAZ
	class RHS_UAZ_Base: Offroad_01_base_F
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
	class rhs_uaz_open_Base: RHS_UAZ_Base
	{
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerDoor="";
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerDoor="";
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerDoor="";
			};
		};
	};
	class RHS_UAZ_DShKM_Base: RHS_UAZ_Base
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
//mi24
/* //THIS SHIT IS ALL BROKEN FOR SOME REASON?????
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
		driverDoor="";
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
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
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
		class EventHandlers: Eventhandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init";
				postInit="_this call rhs_fnc_reapplyTextures";
				getIn="";
				getOut="";
			};
		};
	};
//mi8
	class RHS_Mi8_base: Heli_Light_02_base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
			};
			class BackTurret: MainTurret
			{
			};
		};
		class EventHandlers: Eventhandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init";
				postInit="_this call rhs_fnc_reapplyTextures";
			};
			class BIS_Randomisation
			{
				init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
			};
		};
	};
	class rhs_mi8t_base: RHS_Mi8_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_01
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getIn="";
				getOut="";
			};
		};
	};
	class rhs_mi8amt_base: RHS_Mi8_base
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_01
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getIn="";
				getOut="";
			};
		};
	};
	class RHS_Mi8_VVS_Base: RHS_Mi8_base
	{};
	class RHS_Mi8mt_vvs: RHS_Mi8_VVS_Base
	{};
	class RHS_Mi8mt_Cargo_vvs: RHS_Mi8mt_vvs
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_01
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getIn="";
				getOut="";
			};
		};
	};
	class rhs_mi8mtv3_base: RHS_Mi8_base
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class SideTurret: MainTurret
			{
			};
			class BackTurret: BackTurret
			{
			};
			class FrontTurret: MainTurret
			{
			};
		};
	};
	class RHS_Mi8MTV3_VVS_Base: rhs_mi8mtv3_base
	{};
	class RHS_Mi8MTV3_vvs: RHS_Mi8MTV3_VVS_Base
	{};
	class RHS_Mi8mtv3_Cargo_vvs: RHS_Mi8MTV3_vvs
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class FrontTurret: FrontTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_01
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getIn="";
				getOut="";
			};
		};
	};
*/
//ka52
	class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
		};
	};
//BMP
	class rhs_bmp1tank_base: Tank_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
			class Com_BMP1: NewTurret
			{
				gunnerDoor="";
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
			class CargoTurret_07: CargoTurret_06
			{
			};
			class CargoTurret_08: CargoTurret_06
			{
			};
			class CargoTurret_09: CargoTurret_06
			{
			};
			class CargoTurret_10: CargoTurret_01
			{
			};
		};
	};
	class rhs_bmp_base: rhs_bmp1tank_base
	{
	};
	class rhs_bmp1_vdv: rhs_bmp_base
	{
	};
	class rhs_bmp1p_vdv: rhs_bmp1_vdv
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{
						gunnerDoor="";
					};
				};
			};
			class Com_BMP1: Com_BMP1
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
			class CargoTurret_07: CargoTurret_07
			{
			};
			class CargoTurret_08: CargoTurret_08
			{
			};
			class CargoTurret_09: CargoTurret_09
			{
			};
			class CargoTurret_10: CargoTurret_10
			{
			};
		};	
	};
	class rhs_bmp2e_vdv: rhs_bmp1_vdv
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerDoor="";
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
			class CargoTurret_06: CargoTurret_01
			{
			};
			class CargoTurret_07: CargoTurret_06
			{
			};
			class CargoTurret_08: CargoTurret_06
			{
			};
			class CargoTurret_09: CargoTurret_06
			{
			};
			class CargoTurret_10: CargoTurret_01
			{
			};
		};
	};
//BMD
	class rhs_bmd_base: Tank_F
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
				gunnerDoor="";
			};
			class GPMGTurret1: NewTurret
			{
				gunnerDoor="";
			};
			class LeftBack: NewTurret
			{
			};
			class RightBack: LeftBack
			{
			};
			class MainBack: LeftBack
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
			class CargoTurret_05: CargoTurret_04
			{
			};
			class CargoTurret_06: CargoTurret_04
			{
			};
		};
	};
	class rhs_bmd1_base: rhs_bmd_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics1: CommanderOptics
			{
			};
			class GPMGTurretBMD1: GPMGTurret1
			{
			};
			class LeftBack1: LeftBack
			{
			};
			class RightBack1: RightBack
			{
			};
			class MainBack1: MainBack
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
	};
	class rhs_bmd2_base: rhs_bmd_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{
						gunnerDoor="";
					};
				};
			};
			class CommanderOptics1: CommanderOptics
			{
			};
			class GPMGTurretBMD1: GPMGTurret1
			{
			};
			class LeftBack1: LeftBack
			{
			};
			class RightBack1: RightBack
			{
			};
			class MainBack1: MainBack
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
	};
	class rhs_bmd1p: rhs_bmd1_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{
						gunnerDoor="";
					};
				};
			};
			class CommanderOptics1: CommanderOptics1
			{
			};
			class GPMGTurretBMD1: GPMGTurret1
			{
			};
			class LeftBack1: LeftBack
			{
			};
			class RightBack1: RightBack
			{
			};
			class MainBack1: MainBack
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
	};
//GAZ
	class rhs_truck: Truck_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
//KAMAZ
	class rhs_kamaz5350: O_Truck_02_covered_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerDoor="";
			};
		};
	};
//KRAZ255
	class rhs_kraz255_base: O_Truck_02_covered_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
//ZIL131
	class rhs_zil131_base: Truck_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			""
		};
	};
//SPRUT
	class rhs_a3spruttank_base: Tank_F
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
				};
			};
		};
	};
	class rhs_bmd4_vdv: rhs_a3spruttank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
				};
			};
			class GPMGTurret1: NewTurret
			{
				gunnerDoor="";
			};
			class LeftBack: NewTurret
			{
				gunnerDoor="";
			};
			class RightBack: LeftBack
			{
				gunnerDoor="";
			};
			class MainFront: LeftBack
			{
			};
		};
	};
	class rhs_bmd4m_vdv: rhs_bmd4_vdv
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
			class GPMGTurret1: GPMGTurret1
			{
			};
			class GPMGTurret2: GPMGTurret1
			{
				gunnerDoor="";
			};
			class RightBack: RightBack
			{
			};
			class LeftBack: LeftBack
			{
				gunnerDoor="";
			};
			class MiddleBack: LeftBack
			{
			};
		};
	};
//T72
	class rhs_a3t72tank_base: Tank_F
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
					class CommanderMG: CommanderOptics
					{
					};
				};
			};
		};
	};
//T80
	class rhs_tank_base: Tank_F
	{
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
					class CommanderMG: CommanderOptics
					{
					};
				};
			};
		};
	};
	class rhs_t80b: rhs_tank_base
	{
	};
	class rhs_t80bv: rhs_t80b
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
					class CommanderMG: CommanderOptics
					{
					};
				};
			};
		};
	};
};