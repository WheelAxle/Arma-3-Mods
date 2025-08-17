class CfgPatches
{
	class ax_sog_tweaks_patrol_craft
	{
        addonRootClass="ax_sog_tweaks";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"jzra_boat"
		};
        skipWhenMissingDependencies=1;
	};
};

class cfgVehicles
{
	class Ship;
	class Ship_F: Ship
	{
		class NewTurret;
		class Sounds;
		class Hitpoints;
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
		class Eventhandlers;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class Attributes;
	};
    class jzra_boat: Ship_F
    {
        class textureSources
		{
			class hazegray
			{
				Displayname="Haze Gray";
				author="jeckzerippa";
				textures[]=
				{
					"\jzra_sb\textures\sb_hull_co.paa",
					"\jzra_sb\textures\sb_mg_co.paa",
					"\jzra_sb\RefGlasTut_glass\glass_ca",
					"\jzra_sb\textures\number_ca",
					"\jzra_sb\textures\clanempty_ca.paa"
				};
				factions[]={};
			};
			class deckgray: hazegray
			{
				Displayname="Deck Gray";
				textures[]=
				{
					"\jzra_sb\textures\sb_hull_deckgray_co.paa",
					"\jzra_sb\textures\sb_mg_deckgray_co.paa"
				};
			};
			class dullgreen: deckgray
			{
				Displayname="Dull Green";
				textures[]=
				{
					"\jzra_sb\textures\sb_hull_dullgreen_co.paa",
					"\jzra_sb\textures\sb_mg_dullgreen_co.paa"
				};
			};
			class camo1: dullgreen
			{
				Displayname="Deckgray Camo 1";
				textures[]=
				{
					"\jzra_sb\textures\sb_hull_camo1_co.paa",
					"\jzra_sb\textures\sb_mg_deckgray_co.paa"
				};
			};
			class camo2: camo1
			{
				Displayname="Deckgray Camo 2";
				textures[]=
				{
					"\jzra_sb\textures\sb_hull_camo1_2_co.paa"
				};
			};
			class camo3: camo2
			{
				Displayname="Deckgray Camo 3";
				textures[]=
				{
					"\jzra_sb\textures\sb_hull_camo1_3_co.paa"
				};
			};
			class camo4: camo3
			{
				Displayname="Dull Green Camo 1";
				textures[]=
				{
					"\jzra_sb\textures\sb_hull_camo2_1_co.paa",
					"\jzra_sb\textures\sb_mg_dullgreen_co.paa"
				};
			};
			class camo5: camo4
			{
				Displayname="Dull Green Camo 2";
				textures[]=
				{
					"\jzra_sb\textures\sb_hull_camo2_2_co.paa"
				};
			};
		};
    };
	class swift_boat_mk1_deckgray: jzra_boat
    {
		faction="B_vn_USN";
		displayName="Swift Boat MK1 (Gray)";
		crew="vn_b_men_navy_02";
/*        class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType="vn_b_men_navy_05";
            };
            class RearTurret: MainTurret
			{
				gunnerName="Rear M2 Gunner";
				gunnerType="vn_b_men_navy_05";
            };
			class CargoTurret_01: CargoTurret
            {
				gunnerType="vn_b_men_navy_05";
            };
			class CargoTurret_02: CargoTurret_01
            {
				gunnerType="vn_b_men_navy_06";
            };
			class CargoTurret_03: CargoTurret
            {
				gunnerName="Rear Left Gunner";
				gunnerType="vn_b_men_navy_09";
            };
			class CargoTurret_04: CargoTurret_03
            {
				gunnerName="Rear Right Gunner";
				gunnerType="vn_b_men_navy_03";
            };
			class CargoTurret_05: CargoTurret_04
            {
				gunnerName="Very Rear Deck Gunner";
				gunnerType="vn_b_men_navy_07";
            };
			class CargoTurret_06: CargoTurret_05
            {
				gunnerType="vn_b_men_navy_08";
            };
			class CargoTurret_07: CargoTurret_06
            {
				gunnerType="vn_b_men_navy_01";
            };
			class CargoTurret_08: CargoTurret_05
            {
				gunnerType="vn_b_men_navy_07";
            };
        };
*/
        class UserActions
		{
            class Open_Door_Left
			{
				displayName="Open Left Door";
				position="door_knob_left";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase 'door_left' < 0.5";
				statement="this animate ['door_left', 1]";
			};
			class Close_Door_Left
			{
				displayName="Close Left Door";
				position="door_knob_left";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase 'door_left' >= 0.5";
				statement="this animate ['door_left', 0]";
			};
			class Open_Door_Right
			{
				displayName="Open Right Door";
				position="door_knob_right";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase 'door_right' < 0.5";
				statement="this animate ['door_right', 1]";
			};
			class Close_Door_Right
			{
				displayName="Close Right Door";
				position="door_knob_right";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase 'door_right' >= 0.5";
				statement="this animate ['door_right', 0]";
			};
			class Open_Door_Back
			{
				displayName="Open Back Door";
				position="door_knob_back";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase 'door_back' < 0.5";
				statement="this animate ['door_back', 1]";
			};
			class Close_Door_Back
			{
				displayName="Close Back Door";
				position="door_knob_back";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase 'door_ back' >= 0.5";
				statement="this animate ['door_back', 0]";
			};
			class Open_Hatch_Front
			{
				displayName="Open Front Hatch";
				position="hatch_knob_front";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase 'hatch_front' < 0.5";
				statement="this animate ['hatch_front', 1]";
			};
			class Close_Hatch_Front
			{
				displayName="Close Front Hatch";
				position="hatch_knob_front";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase 'hatch_front' >= 0.5";
				statement="this animate ['hatch_front', 0]";
			};
            class Open_Window_Left_1
			{
				displayName="Open Leftside Front Window";
				position="window_knob_1";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_left_1' < 0.5";
				statement="this animate ['window_left_1', 1]";
			};
			class Close_Window_Left_1
			{
				displayName="Close Leftside Front Window";
				position="window_knob_1";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_left_1' >= 0.5";
				statement="this animate ['window_left_1', 0]";
			};
			class Open_Window_Left_2
			{
				displayName="Open Leftside Rear Window";
				position="window_knob_2";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_left_2' < 0.5";
				statement="this animate ['window_left_2', 1]";
			};
			class Close_Window_Left_2
			{
				displayName="Close Leftside Rear Window";
				position="window_knob_2";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_left_2' >= 0.5";
				statement="this animate ['window_left_2', 0]";
			};
			class Open_Window_Right_1
			{
				displayName="Open Rightside Front Window";
				position="window_knob_3";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_right_1' < 0.5";
				statement="this animate ['window_right_1', 1]";
			};
			class Close_Window_Right_1
			{
				displayName="Close Rightside Front Window";
				position="window_knob_3";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_right_1' >= 0.5";
				statement="this animate ['window_right_1', 0]";
			};
			class Open_Window_Right_2
			{
				displayName="Open Rightside Rear Window";
				position="window_knob_4";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_right_2' < 0.5";
				statement="this animate ['window_right_2', 1]";
			};
			class Close_Window_Right_2
			{
				displayName="Close Rightside Rear Window";
				position="window_knob_4";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_right_2' >= 0.5";
				statement="this animate ['window_right_2', 0]";
			};
			class Open_Window_Back_1
			{
				displayName="Open Left Rear Window";
				position="window_back_2_knob";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_back_2' < 0.5";
				statement="this animate ['window_back_2', 1]";
			};
			class Close_Window_Back_1
			{
				displayName="Close Left Rear Window";
				position="window_back_2_knob";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_back_2' >= 0.5";
				statement="this animate ['window_back_2', 0]";
			};
			class Open_Window_Back_2
			{
				displayName="Open Right Rear Window";
				position="window_back_1_knob";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_back_1' < 0.5";
				statement="this animate ['window_back_1', 1]";
			};
			class Close_Window_Back_2
			{
				displayName="Close Right Rear Window";
				position="window_back_1_knob";
				radius=0;
				onlyForPlayer=0;
				condition="this animationPhase 'window_back_1' >= 0.5";
				statement="this animate ['window_back_1', 0]";
			};
        };
    };
	class swift_boat_mk1_coast: swift_boat_mk1_deckgray
    {
        scope=1;
        scopeCurator=1;
    };
};