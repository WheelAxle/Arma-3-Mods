class CfgPatches
{
	class ax_gm_expanded_john_uh1h
	{
		units[]=
        {
			"gm_ge_army_uh1h_ov",
			"gm_ge_army_uh1h_2_ov"
    	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"gm_characters_xx_revolutionaries",
			"ax_gm_tweaks",
			"jh_uh1"
		};
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
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
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponFireMGun;
class WeaponCloudsGun;
class WeaponCloudsMGun;
class AirplaneHUD;
class Optics_Armored;
class RCWSOptics;
class VScrollbar;
class HScrollbar;
class RscControlsGroup;
class RscText;
class RscPicture;
class IGUIBack;

class cfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints;
		class Turrets;
	};
	class Helicopter_Base_h: Helicopter_Base_F
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
	class jh_uh1h_base: Helicopter_Base_h
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: CopilotTurret{};
			class uh1_LeftDoorGun: MainTurret{};
			class uh1_RightDoorGun: MainTurret{};
			class uh1_CargoTurret_01: CargoTurret{};
			class uh1_CargoTurret_02: uh1_CargoTurret_01{};
			class uh1_CargoTurret_03: uh1_CargoTurret_01{};
			class uh1_CargoTurret_04: uh1_CargoTurret_01{};
			class uh1_CargoTurret_Right: CargoTurret{};
			class uh1_CargoTurret_Left: uh1_CargoTurret_Right{};
		};
	};
	class jh_uh1h_unarmed_base: jh_uh1h_base
	{
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: uh1_CopilotTurret
			{
			};
			class uh1_CargoTurret_01: uh1_CargoTurret_01
			{
			};
			class uh1_CargoTurret_02: uh1_CargoTurret_02
			{
			};
			class uh1_CargoTurret_03: uh1_CargoTurret_03
			{
			};
			class uh1_CargoTurret_04: uh1_CargoTurret_04
			{
			};
		};
	};
	class jh_uh1h_unarmed_2_base: jh_uh1h_base
	{
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: uh1_CopilotTurret
			{
			};
			class uh1_CargoTurret_01: uh1_CargoTurret_01
			{
			};
			class uh1_CargoTurret_02: uh1_CargoTurret_02
			{
			};
			class uh1_CargoTurret_03: uh1_CargoTurret_03
			{
			};
			class uh1_CargoTurret_04: uh1_CargoTurret_04
			{
			};
		};
	};
	class jh_uh1h_medical_base: jh_uh1h_base
	{
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: uh1_CopilotTurret
			{
			};
			class uh1_CargoTurret_03: uh1_CargoTurret_03
			{
			};
			class uh1_CargoTurret_04: uh1_CargoTurret_04
			{
			};
		};
	};
	class gm_ge_army_uh1h_ov: jh_uh1h_unarmed_base
	{
		author="JohnHansen";
		scope=2;
		side=1;
		forceInGarage=0;
		scopeCurator=2;
		scopeArsenal=2;
		faction="gm_fc_ge";
		displayName="UH-1H";
		crew="gm_ge_army_pilot_p1_80_oli";
		animationList[]=
		{
			"selection_rwr",
			0,
			"selection_tail_antena",
			1,
			"selection_wirestrike",
			1
		};
		textureList[]=
		{
			"Heer_84",
			1
		};
		class UserActions
		{
			delete DoorL1_Open;
			delete DoorL2_Open;
			class DoorL3_Open
			{
				userActionID=52;
				displayName="Open left door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=4;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorL3";
				showWindow=1;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorL3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 1]";
			};
			delete DoorR1_Open;
			delete DoorR2_Open;
			class DoorR3_Open
			{
				userActionID=55;
				displayName="Open right door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=4;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorR3";
				showWindow=1;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorR3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 1]";
			};
			delete DoorL1_Close;
			delete DoorL2_Close;
			class DoorL3_Close
			{
				userActionID=58;
				displayName="Close left door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=4;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorL3";
				showWindow=1;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorL3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 0]";
			};
			delete DoorR1_Close;
			delete DoorR2_Close;
			class DoorR3_Close
			{
				userActionID=61;
				displayName="Close right door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=4;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorR3";
				showWindow=1;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorR3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 0]";
			};
		};
	};
	class gm_ge_army_uh1h_2_ov: jh_uh1h_unarmed_2_base
	{
		author="JohnHansen";
		scope=2;
		side=1;
		forceInGarage=0;
		scopeCurator=2;
		scopeArsenal=2;
		faction="gm_fc_ge";
		displayName="UH-1H CIV";
		crew="gm_ge_army_pilot_p1_80_oli";
		animationList[]=
		{
			"selection_rwr",
			0,
			"selection_tail_antena",
			1,
			"selection_wirestrike",
			1
		};
		textureList[]=
		{
			"Heer_84",
			1
		};
		class UserActions
		{
			delete DoorL1_Open;
			delete DoorL2_Open;
			class DoorL3_Open
			{
				userActionID=52;
				displayName="Open left door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=4;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorL3";
				showWindow=1;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorL3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 1]";
			};
			delete DoorR1_Open;
			delete DoorR2_Open;
			class DoorR3_Open
			{
				userActionID=55;
				displayName="Open right door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=4;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorR3";
				showWindow=1;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorR3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 1]";
			};
			delete DoorL1_Close;
			delete DoorL2_Close;
			class DoorL3_Close
			{
				userActionID=58;
				displayName="Close left door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=4;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorL3";
				showWindow=1;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorL3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 0]";
			};
			delete DoorR1_Close;
			delete DoorR2_Close;
			class DoorR3_Close
			{
				userActionID=61;
				displayName="Close right door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=4;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorR3";
				showWindow=1;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorR3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 0]";
			};
		};
	};
	class gm_ge_army_uh1h_ov_atm: gm_ge_army_uh1h_ov
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_autumn";
		crew="gm_ge_army_pilot_p1_parka_80_oli";
	};
	class gm_ge_army_uh1h_2_ov_atm: gm_ge_army_uh1h_2_ov
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_autumn";
		crew="gm_ge_army_pilot_p1_parka_80_oli";
	};
	class gm_ge_army_uh1h_ov_win: gm_ge_army_uh1h_ov
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};
	class gm_ge_army_uh1h_2_ov_win: gm_ge_army_uh1h_2_ov
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};
};
