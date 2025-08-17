class CfgPatches
{
	class disable_rhsusaf_door_anim
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsusf_melb"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
		};
	};
	class Truck_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
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
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
	};
	class Truck_01_base_F: Truck_F
	{
		class AnimationSources: AnimationSources
		{
			class HitGlass1;
		};
		class Components;
	};
	class MRAP_01_base_F: Car_F
	{
		class Sounds;
		class EventHandlers;
		class Components;
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class EventHandlers;
		class Components;
		class CommanderOptics;
	};
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
		class CommanderOptics;
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
	class APC_Tracked_03_base_F: Tank_F
	{
	};
	class MBT_01_base_F: Tank_F
	{
	};
	class MBT_01_arty_base_F: MBT_01_base_F
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
		class AnimationSources;
		class EventHandlers;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class EventHandlers;
	};
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
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
		};
		class AnimationSources;
		class Eventhandlers;
		class CargoTurret;
		class ViewOptics;
		class Reflectors
		{
			class Right;
		};
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine1;
			class HitEngine2;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitGlass7;
			class HitGlass8;
		};
		class Sounds;
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
		class HitPoints;
		class Components;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Sounds;
		class SoundsExt
		{
			class Sounds;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine1;
			class HitEngine2;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitGlass7;
			class HitGlass8;
		};
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
	};
	class Heli_Light_03_base_F: Helicopter_Base_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine1;
			class HitEngine2;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitGlass7;
			class HitGlass8;
		};
	};
	class HelicopterWreck;
	class ThingX;
	class Plane: Air
	{
		class HitPoints;
		class NewTurret;
	};
	class Plane_Base_F: Plane
	{
		class NewTurret: NewTurret
		{
			class ViewGunner;
		};
		class Turrets;
		class ViewPilot;
		class Components;
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class EventHandlers;
	};
	class Plane_CAS_01_base_F: Plane_Base_F
	{
	};
//Stryker
	class rhsusf_stryker_base: Wheeled_APC_F
	{
		driverDoor="";
	};
	class rhsusf_stryker_m1126_base: rhsusf_stryker_base
	{
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
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_02
			{
			};
		};
	};
	class rhsusf_stryker_m1126_m2_base: rhsusf_stryker_m1126_base
	{
	};
	class rhsusf_stryker_m1127_base: rhsusf_stryker_m1126_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor="";
			};
			class Turret_Weapon: MainTurret
			{
			};
			class Turret_LRAS: Turret_Weapon
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
		};
	};
	class rhsusf_stryker_m1134_base: rhsusf_stryker_m1126_m2_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class Turret_Weapon: MainTurret
			{
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
		};
	};
//M113
	class rhsusf_m113tank_base: APC_Tracked_02_base_F
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
				class Turrets
				{
				};
				gunnerDoor="";
			};
			class MainTurret_In: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
		};
	};
//M109
	class rhsusf_m109tank_base: MBT_01_arty_base_F
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
				};
				gunnerDoor="";
			};
		};
	};
//Himars
	class rhsusf_himars_base: Truck_01_base_F
	{
		driverDoor="";
		class CargoTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
//Humvee M1025
	class rhsusf_hmmwe_base: MRAP_01_base_F
	{
	};
	class rhsusf_m998_w_2dr: rhsusf_hmmwe_base
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerDoor="";
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerDoor="";
			};
		};
		class useractions;
	};
	class rhsusf_m998_w_2dr_halftop: rhsusf_m998_w_2dr
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerDoor="";
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerDoor="";
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerDoor="";
			};
			class CargoTurret_05: CargoTurret_03
			{
				gunnerDoor="";
			};
		};
	};
	class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			""
		};
	};
	class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop
	{
	};
	class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerDoor="";
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerDoor="";
			};
		};
		class UserActions: UserActions
		{
			class trunk_open
			{
				displayName="Open Trunk";
				position="trunk_action";
				radius=2;
				onlyForplayer=0;
				condition="this animationPhase 'ani_trunk_1'<0.5";
				statement="this animate ['ani_trunk_1', 1];";
			};
			class trunk_close: trunk_open
			{
				displayName="Close Trunk";
				condition="this animationPhase 'ani_trunk_1'==1";
				statement="this animate ['ani_trunk_1', 0]";
			};
			class window_action
			{
				userActionID=101;
				displayName="Raise/Lower window";
				position="pos_driverpos";
				radius=14;
				onlyForplayer=0;
				condition="((call rhsusf_fnc_findPlayer) in this) AND ((gunner this) != (call rhsusf_fnc_findPlayer) )";
				statement="this call rhs_fnc_m1025_windowHandler";
			};
			class door_action: window_action
			{
				radius=0;
				userActionID=102;
				displayName="Door toggle";
				condition="((call rhsusf_fnc_findPlayer) in this)";
				statement="call rhs_fnc_m1025_doorToggle";
			};
		};
	};
	class rhsusf_m1025_w_m2: rhsusf_m1025_w
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerDoor="";
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
		};
	};
	class rhsusf_m966_w: rhsusf_m1025_w
	{
		class Turrets: Turrets
		{
			class TOW_Turret: MainTurret
			{
				gunnerDoor="";
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
		};
	};
//M1151
	class rhsusf_m1151_base: MRAP_01_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
		class CargoTurret;
		class Turrets
		{
			class CoDriverTurret: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class rhsusf_m1151_GPK_base: rhsusf_m1151_base
	{
		class Turrets: Turrets
		{
			class GPK_Turret: NewTurret
			{
				gunnerDoor="";
			};
			class CoDriverTurret: CoDriverTurret
			{
			};
		};
	};
	class rhsusf_M1151_GPK_M2_base: rhsusf_m1151_GPK_base
	{
	};
	class rhsusf_M1151_M2_LRAS3_base: rhsusf_M1151_GPK_M2_base
	{
		class Turrets: Turrets
		{
			class GPK_Turret: GPK_Turret
			{
			};
			class Turret_Weapon: GPK_Turret
			{
				gunnerDoor="";
			};
			class Turret_LRAS: Turret_Weapon
			{
			};
			class CoDriverTurret: CoDriverTurret
			{
			};
		};
	};
	class rhsusf_m1151_CROWS_base: rhsusf_m1151_base
	{
		cargoDoors[]=
		{
			""
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: NewTurret
			{
				gunnerDoor="";
			};
			class CoDriverTurret: CoDriverTurret
			{
			};
		};
	};
	class rhsusf_M1165A1_GMV_SAG2_base: rhsusf_m1151_base
	{
		class Turrets: Turrets
		{
			class SAG_Turret: NewTurret
			{
				gunnerDoor="";
			};
			class SwingArm_L_Turret: NewTurret
			{
				gunnerDoor="";
			};
			class CoDriverTurret: CoDriverTurret
			{
			};
			class SwingArm_R_Turret: SwingArm_L_Turret
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
			class CargoTurret_04: CargoTurret_02
			{
			};

		};
	};
	class rhsusf_m1152_base: rhsusf_m1151_base
	{
	};
	class rhsusf_m1152_sicps_base: rhsusf_m1152_base
	{
		cargoDoors[]=
		{
			""
		};
	};
//Viper
	class RHS_AH1Z_base: Heli_Attack_01_base_F
	{
	};
	class RHS_AH1Z: RHS_AH1Z_base
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
	class RHS_CH_47F_base: Heli_Transport_02_base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
			};
			class RightDoorGun: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
		};
	};
	class RHS_UH60_Base: Heli_Transport_01_base_F
	{
	};
	class RHS_UH60M_base: RHS_UH60_Base
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
			"",
			""
		};
	};
	class RHS_UH60M_US_base: RHS_UH60M_base
	{
	};
	class RHS_UH60M: RHS_UH60M_US_base
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerDoor="";
			};
			class MainTurret: MainTurret
			{
			};
			class RightDoorGun: MainTurret
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
				gunnerDoor="";
			};
			class CargoTurret_04: CargoTurret_03
			{
			};
		};
	};
	class RHS_UH60M_MEV: RHS_UH60M
	{
		cargoDoors[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
	};
	class RHS_UH60M_MEV2: RHS_UH60M_MEV
	{
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
				gunnerDoor="";
			};
			class CargoTurret_04: CargoTurret_03
			{
			};
		};
	};
	class RHS_UH1_Base: Heli_Light_03_base_F
	{
	};
	class RHS_UH1Y_base: RHS_UH1_Base
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
	};
	class RHS_UH1Y_US_base: RHS_UH1Y_base
	{
	};
	class RHS_UH1Y: RHS_UH1Y_US_base
	{
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				gunnerDoor="";
			};
			class MainTurret: MainTurret
			{
			};
			class RightDoorGun: MainTurret
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
	class RHS_UH1Y_FFAR: RHS_UH1Y
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_07: CargoTurret_01
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
				gunnerDoor="";
			};
			class CargoTurret_05: CargoTurret_05
			{
				gunnerDoor="";
			};
			class CargoTurret_06: CargoTurret_06
			{
				gunnerDoor="";
			};
			class CargoTurret_08: CargoTurret_04
			{
			};
		};
	};
	class RHS_C130J_Base: Plane_Base_F
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
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class Turrets: Turrets
		{
			class CopilotTurret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
//Bradley
	class RHS_M2A2_Base: APC_Tracked_03_base_F
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
	class RHS_M2A2: RHS_M2A2_Base
	{
		cargoDoors[]=
		{
			""
		};
	};
//M1117
	class rhsusf_M1117_base: Wheeled_APC_F
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
				class Turrets
				{
					class commanderOptics: CommanderOptics
					{
						gunnerDoor="";
					};
				};
			};
			class MainTurret_Out: CargoTurret
			{
			};
			class MainTurret2_Out: MainTurret_Out
			{
			};
		};
	};
//Caiman M1220
	class rhsusf_caiman_base: Truck_01_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class rhsusf_caiman_GPK_base: rhsusf_caiman_base
	{
	};
	class rhsusf_M1220_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
	class rhsusf_M1220_M153_M2_usarmy_d: rhsusf_M1220_M2_usarmy_d
	{
		class Turrets: Turrets
		{
			class CROWS_Turret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
	class rhsusf_M1230_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
//RG33 M1232
	class rhsusf_RG33L_base: MRAP_01_base_F
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
			class CargoTurret_03: CargoTurret_01
			{
			};
			class CargoTurret_04: CargoTurret_01
			{
			};
		};
	};
	class rhsusf_RG33L_GPK_base: rhsusf_RG33L_base
	{
	};
	class rhsusf_M1232_M2_usarmy_d: rhsusf_RG33L_GPK_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerDoor="";
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
		};
	};
	class rhsusf_M1237_base: rhsusf_RG33L_GPK_base
	{
	};
	class rhsusf_M1237_M2_usarmy_d: rhsusf_M1237_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerDoor="";
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
		};
	};
//RG 33
	class rhsusf_RG33_base: MRAP_01_base_F
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
	class rhsusf_RG33_CROWS_base: rhsusf_RG33_base
	{
		class Turrets: Turrets
		{
			class CROWS_Turret: NewTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
	};
//Cougar
	class rhsusf_Cougar_base: MRAP_01_base_F
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
		};
	};
	class rhsusf_cougar_GPK_base: rhsusf_Cougar_base
	{
	};
	class rhsusf_CGRCAT1A2_M2_usmc_d: rhsusf_cougar_GPK_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
		};
	};
//MATV
	class rhsusf_MATV_base: MRAP_01_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			""
		};
		class CargoTurret;
		class Turrets
		{
			class CoDriverTurret: CargoTurret
			{
				gunnerDoor="";
			};
		};
	};
	class rhsusf_MATV_armed_base: rhsusf_MATV_base
	{
	};
	class rhsusf_MATV_OGPK_base: rhsusf_MATV_armed_base
	{
		class Turrets: Turrets
		{
			class OGPK_Turret: NewTurret
			{
				gunnerDoor="";
			};
			class CoDriverTurret: CoDriverTurret
			{
			};
		};
	};
	class rhsusf_MATV_CROWS_base: rhsusf_MATV_armed_base
	{
		cargoDoors[]=
		{
			"",
			""
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: NewTurret
			{
				gunnerDoor="";
			};
			class CoDriverTurret: CoDriverTurret
			{
			};
		};
	};
	class rhsusf_MATV_SOF_CROWS_base: rhsusf_MATV_CROWS_base
	{
		cargoDoors[]=
		{
			"",
			"",
			""
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
			};
			class CoDriverTurret: CoDriverTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
		};
	};
//Abrams
	class rhsusf_m1a1tank_base: MBT_01_base_F
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
					class Loader: CommanderOptics
					{
						gunnerDoor="";
					};
					class LoaderMG: Loader
					{
					};
				};
				gunnerDoor="";
			};
		};
	};
	class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base
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
					class Loader: CommanderOptics
					{
						gunnerDoor="";
					};
					class CommanderMG: CommanderOptics
					{
						gunnerDoor="";
					};
					class LoaderMG: Loader
					{
					};
				};
			};
		};
	};
	class rhsusf_m1a2sep2_base: rhsusf_m1a2tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CROWS_Turret: CommanderOptics
					{
						gunnerDoor="";
					};
					class Loader: Loader
					{
					};
					class LoaderMG: LoaderMG
					{
					};
				};
			};
		};
	};
//FMTV
	class rhsusf_fmtv_base: Truck_01_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			"",
			"",
			""
		};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
		};
	};
	class rhsusf_M1078A1P2_fmtv_usarmy: rhsusf_fmtv_base
	{
	};
	class rhsusf_M1078A1P2_B_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
	};
	class rhsusf_M1078A1P2_B_M2_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
	};
	class rhsusf_M1078A1P2_B_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class rhsusf_M1083A1P2_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
	};
	class rhsusf_M1083A1P2_B_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy
	{
		cargoDoors[]=
		{
			"",
			""
		};
	};
	class rhsusf_M1083A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
	};
	class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom: rhsusf_M1078A1P2_B_M2_fmtv_usarmy
	{
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class M2_Turret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
	class rhsusf_M1084A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy
	{
	};
	class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom: rhsusf_M1084A1P2_B_M2_fmtv_usarmy
	{
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="";
			};
			class M2_Turret: NewTurret
			{
			};
		};
	};
//HEMTT
	class rhsusf_HEMTT_A4_base: Truck_01_base_F
	{
		driverDoor="";
		cargoDoors[]=
		{
			""
		};
	};
	class rhsusf_M977A4_usarmy_wd: rhsusf_HEMTT_A4_base
	{
	};
	class rhsusf_M977A4_BKIT_M2_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				gunnerDoor="";
			};
		};
	};
};