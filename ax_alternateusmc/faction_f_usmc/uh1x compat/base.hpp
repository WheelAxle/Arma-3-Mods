    class AX_Heli_Transport_uh1x_base_F: jj_uh1h_base
    {
        driverDoor="";
		class UserActions
		{
            class DoorL1_Open
			{
				userActionID=50;
				displayName="Open Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=0;//
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorL1";
				showWindow=0;//
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorL1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 1]";
			};
			class DoorL2_Open: DoorL1_Open
			{
				userActionID=51;
				displayName="Open left auxiliary door";
				position="action_doorL2";
				condition="((this animationPhase 'DoorL2_Open') == 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 1]";
			};
			class DoorL3_Open: DoorL1_Open
			{
				userActionID=52;
				displayName="Open left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID=53;
				displayName="Open Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 1]";
			};
			class DoorR2_Open: DoorL1_Open
			{
				userActionID=54;
				displayName="Open right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') == 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 1]";
			};
			class DoorR3_Open: DoorL1_Open
			{
				userActionID=55;
				displayName="Open right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID=56;
				displayName="Close Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this DoorPhase 'DoorL1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 0]";
			};
			class DoorL2_Close: DoorL1_Close
			{
				userActionID=57;
				displayName="Close left auxiliary door";
				position="action_doorL2_front";
				condition="((this animationPhase 'DoorL2_Open') > 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 0]";
			};
			class DoorL3_Close: DoorL1_Close
			{
				userActionID=58;
				displayName="Close left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID=59;
				displayName="Close Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 0]";
			};
			class DoorR2_Close: DoorL1_Close
			{
				userActionID=60;
				displayName="Close right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') > 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 0]";
			};
			class DoorR3_Close: DoorL1_Close
			{
				userActionID=61;
				displayName="Close right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 0]";
			};
		};
        class Turrets: Turrets
        {
            class uh1_CopilotTurret: CopilotTurret
            {
                GunnerDoor="";
            };
            class uh1_LeftDoorGun: MainTurret
            {
            };
            class uh1_RightDoorGun: uh1_LeftDoorGun
            {
            };
            class uh1_CargoTurret_01: CargoTurret
            {
            };
            class uh1_CargoTurret_02: uh1_CargoTurret_01
            {
            };
            class uh1_CargoTurret_03: uh1_CargoTurret_01
            {
            };
            class uh1_CargoTurret_04: uh1_CargoTurret_01
            {
            };
            class uh1_CargoTurret_Right: CargoTurret
            {
            };
            class uh1_CargoTurret_Left: uh1_CargoTurret_Right
            {
            };
        };
		#include "mfd.hpp"
		#include "fm.hpp"
	};
    class AX_Heli_Transport_uh1x_unarmed1_base_F: jj_uh1h_unarmed_base
    {
        driverDoor="";
        class UserActions
		{
			class DoorL1_Open
			{
				userActionID=50;
				displayName="Open Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=0;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorL1";
				showWindow=0;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorL1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 1]";
			};
			class DoorL2_Open: DoorL1_Open
			{
				userActionID=51;
				displayName="Open left auxiliary door";
				position="action_doorL2";
				condition="((this animationPhase 'DoorL2_Open') == 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 1]";
			};
			class DoorL3_Open: DoorL1_Open
			{
				userActionID=52;
				displayName="Open left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID=53;
				displayName="Open Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 1]";
			};
			class DoorR2_Open: DoorL1_Open
			{
				userActionID=54;
				displayName="Open right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') == 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 1]";
			};
			class DoorR3_Open: DoorL1_Open
			{
				userActionID=55;
				displayName="Open right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID=56;
				displayName="Close Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this DoorPhase 'DoorL1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 0]";
			};
			class DoorL2_Close: DoorL1_Close
			{
				userActionID=57;
				displayName="Close left auxiliary door";
				position="action_doorL2_front";
				condition="((this animationPhase 'DoorL2_Open') > 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 0]";
			};
			class DoorL3_Close: DoorL1_Close
			{
				userActionID=58;
				displayName="Close left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID=59;
				displayName="Close Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 0]";
			};
			class DoorR2_Close: DoorL1_Close
			{
				userActionID=60;
				displayName="Close right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') > 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 0]";
			};
			class DoorR3_Close: DoorL1_Close
			{
				userActionID=61;
				displayName="Close right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 0]";
			};
		};
        class Turrets: Turrets
		{
			class uh1_CopilotTurret: uh1_CopilotTurret
			{
                GunnerDoor="";
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
		#include "mfd.hpp"
		#include "fm.hpp"
	};
    class AX_Heli_Transport_uh1x_unarmed2_base_F: jj_uh1h_unarmed_2_base
    {
        driverDoor="";
        class UserActions
		{
			class DoorL1_Open
			{
				userActionID=50;
				displayName="Open Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=0;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorL1";
				showWindow=0;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorL1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 1]";
			};
			class DoorL2_Open: DoorL1_Open
			{
				userActionID=51;
				displayName="Open left auxiliary door";
				position="action_doorL2";
				condition="((this animationPhase 'DoorL2_Open') == 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 1]";
			};
			class DoorL3_Open: DoorL1_Open
			{
				userActionID=52;
				displayName="Open left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID=53;
				displayName="Open Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 1]";
			};
			class DoorR2_Open: DoorL1_Open
			{
				userActionID=54;
				displayName="Open right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') == 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 1]";
			};
			class DoorR3_Open: DoorL1_Open
			{
				userActionID=55;
				displayName="Open right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID=56;
				displayName="Close Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this DoorPhase 'DoorL1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 0]";
			};
			class DoorL2_Close: DoorL1_Close
			{
				userActionID=57;
				displayName="Close left auxiliary door";
				position="action_doorL2_front";
				condition="((this animationPhase 'DoorL2_Open') > 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 0]";
			};
			class DoorL3_Close: DoorL1_Close
			{
				userActionID=58;
				displayName="Close left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID=59;
				displayName="Close Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 0]";
			};
			class DoorR2_Close: DoorL1_Close
			{
				userActionID=60;
				displayName="Close right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') > 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 0]";
			};
			class DoorR3_Close: DoorL1_Close
			{
				userActionID=61;
				displayName="Close right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 0]";
			};
		};
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: uh1_CopilotTurret
			{
                GunnerDoor="";
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
		#include "mfd.hpp"
		#include "fm.hpp"
	};
    class AX_Heli_Transport_uh1x_armed_base_F: jj_uh1h_doorgunner_base
    {
        driverDoor="";
        class UserActions
		{
			class DoorL1_Open
			{
				userActionID=50;
				displayName="Open Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=0;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorL1";
				showWindow=0;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorL1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 1]";
			};
			class DoorL2_Open: DoorL1_Open
			{
				userActionID=51;
				displayName="Open left auxiliary door";
				position="action_doorL2";
				condition="((this animationPhase 'DoorL2_Open') == 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 1]";
			};
			class DoorL3_Open: DoorL1_Open
			{
				userActionID=52;
				displayName="Open left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID=53;
				displayName="Open Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 1]";
			};
			class DoorR2_Open: DoorL1_Open
			{
				userActionID=54;
				displayName="Open right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') == 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 1]";
			};
			class DoorR3_Open: DoorL1_Open
			{
				userActionID=55;
				displayName="Open right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID=56;
				displayName="Close Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this DoorPhase 'DoorL1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 0]";
			};
			class DoorL2_Close: DoorL1_Close
			{
				userActionID=57;
				displayName="Close left auxiliary door";
				position="action_doorL2_front";
				condition="((this animationPhase 'DoorL2_Open') > 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 0]";
			};
			class DoorL3_Close: DoorL1_Close
			{
				userActionID=58;
				displayName="Close left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID=59;
				displayName="Close Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 0]";
			};
			class DoorR2_Close: DoorL1_Close
			{
				userActionID=60;
				displayName="Close right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') > 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 0]";
			};
			class DoorR3_Close: DoorL1_Close
			{
				userActionID=61;
				displayName="Close right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 0]";
			};
		};
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: uh1_CopilotTurret
			{
                GunnerDoor="";
			};
			class uh1_CargoTurret_01: uh1_CargoTurret_01
			{
			};
			class uh1_CargoTurret_02: uh1_CargoTurret_02
			{
			};
			class uh1_CargoTurret_Right: uh1_CargoTurret_Right
			{
			};
			class uh1_CargoTurret_Left: uh1_CargoTurret_Left
			{
			};
			class uh1_LeftDoorGun: uh1_LeftDoorGun
			{
			};
			class uh1_RightDoorGun: uh1_RightDoorGun
			{
			};
		};
		#include "mfd.hpp"
		#include "fm.hpp"
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_19Rnd_missiles_gray_RF";
						priority=5;
						hardpoints[]=
						{
							"O_SKYFIRE",
							"DAGR",
							"DAR",
							"I_ORCA_RIGHT_PYLON",
							"B_SHIEKER",
							"20MM_TWIN_CANNON",
							"UNI_SCALPEL",
							"B_ASRRAM_EJECTOR"
						};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonRight1: PylonLeft1
					{
						attachment="PylonRack_19Rnd_missiles_gray_RF";
						mirroredMissilePos=1;
						hardpoints[]=
						{
							"O_SKYFIRE",
							"DAGR",
							"DAR",
							"B_ORCA_RIGHT_PYLON",
							"20MM_TWIN_CANNON",
							"B_SHIEKER",
							"UNI_SCALPEL",
							"B_ASRRAM_EJECTOR"
						};
						UIposition[]={0.58999997,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonWeapon_2000Rnd_65x39_belt",
							"PylonRack_19Rnd_missiles_gray_RF"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_19Rnd_PG_missiles_gray_RF",
							"PylonRack_19Rnd_PG_missiles_gray_RF"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_19Rnd_missiles_gray_RF",
							"PylonRack_19Rnd_missiles_gray_RF"
						};
					};
				};
			};
		};
	};
    class AX_Heli_Transport_uh1x_medical_base_F: jj_uh1h_medical_base
    {
        driverDoor="";
        class UserActions
		{
			class DoorL1_Open
			{
				userActionID=50;
				displayName="Open Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority=1.5;
				radius=0;
				radiusView=2.5;
				showIn3D=17;
				available=0;
				position="action_doorL1";
				showWindow=0;
				onlyForPlayer=0;
				shortcut="";
				condition="((this DoorPhase 'DoorL1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 1]";
			};
			class DoorL2_Open: DoorL1_Open
			{
				userActionID=51;
				displayName="Open left auxiliary door";
				position="action_doorL2";
				condition="((this animationPhase 'DoorL2_Open') == 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 1]";
			};
			class DoorL3_Open: DoorL1_Open
			{
				userActionID=52;
				displayName="Open left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 1]";
			};
			class DoorR1_Open: DoorL1_Open
			{
				userActionID=53;
				displayName="Open Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 1]";
			};
			class DoorR2_Open: DoorL1_Open
			{
				userActionID=54;
				displayName="Open right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') == 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 1]";
			};
			class DoorR3_Open: DoorL1_Open
			{
				userActionID=55;
				displayName="Open right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') == 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 1]";
			};
			class DoorL1_Close: DoorL1_Open
			{
				userActionID=56;
				displayName="Close Co-pilot door";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this DoorPhase 'DoorL1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL1_Open', 0]";
			};
			class DoorL2_Close: DoorL1_Close
			{
				userActionID=57;
				displayName="Close left auxiliary door";
				position="action_doorL2_front";
				condition="((this animationPhase 'DoorL2_Open') > 0) && (alive this)";
				statement="this animate ['DoorL2_Open', 0]";
			};
			class DoorL3_Close: DoorL1_Close
			{
				userActionID=58;
				displayName="Close left rear door";
				position="action_doorL3";
				condition="((this DoorPhase 'DoorL3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorL3_Open', 0]";
			};
			class DoorR1_Close: DoorL1_Close
			{
				userActionID=59;
				displayName="Close Pilot door";
				position="action_doorR1";
				condition="((this DoorPhase 'DoorR1_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR1_Open', 0]";
			};
			class DoorR2_Close: DoorL1_Close
			{
				userActionID=60;
				displayName="Close right auxiliary door";
				position="action_doorR2";
				condition="((this animationPhase 'DoorR2_Open') > 0) && (alive this)";
				statement="this animate ['DoorR2_Open', 0]";
			};
			class DoorR3_Close: DoorL1_Close
			{
				userActionID=61;
				displayName="Close right rear door";
				position="action_doorR3";
				condition="((this DoorPhase 'DoorR3_Open') > 0) && (alive this)";
				statement="this animatedoor ['DoorR3_Open', 0]";
			};
		};
		class Turrets: Turrets
		{
			class uh1_CopilotTurret: uh1_CopilotTurret
			{
                GunnerDoor="";
			};
			class uh1_CargoTurret_03: uh1_CargoTurret_03
			{
			};
			class uh1_CargoTurret_04: uh1_CargoTurret_04
			{
			};
		};
		#include "mfd.hpp"
		#include "fm.hpp"
	};