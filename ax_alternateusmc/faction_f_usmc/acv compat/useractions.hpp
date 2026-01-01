        class UserActions
		{
			class Cargoramp_OpenOut
			{
				displayName="Open ACV-P Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5'/>";
				position="cargoramp";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" < 0.5 && !(player in this) && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 1];";
			};
			class Cargoramp_CloseOut
			{
				displayName="Close ACV-P Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5'/>";
				position="cargoramp";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" > 0.5 && !(player in this) && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 0];";
			};
			class Backupcam_Mode
			{
				displayName="Thermal Camera Mode";
				position="drivewheel";
				onlyforplayer=0;
				radius=2;
				showWindow=0;
				hideOnUse=1;
				condition="player isEqualTo driver this && count (actionKeys ""ACV_Backup_Cam_Mode"") <= 0";
				statement="[this] spawn ACV_fnc_backupcam;";
			};
			class Cargoramp_OpenDriver
			{
				displayName="Open Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5'/>";
				position="drivewheel";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" < 0.5 && player isEqualTo driver this && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 1];";
			};
			class Cargoramp_CloseDriver
			{
				displayName="Close Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5'/>";
				position="drivewheel";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" > 0.5 && player isEqualTo driver this && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 0];";
			};
			class Commander_Map_Mode
			{
				displayName="Map Mode";
				position="stick_cam_turret";
				onlyforplayer=0;
				radius=2;
				showWindow=0;
				hideOnUse=1;
				condition="(missionNamespace getVariable [""bis_fnc_moduleRemoteControl_unit"", player]) isEqualTo commander this && count (actionKeys ""ACV30_Map_Mode"") <= 0";
				statement="[this] spawn ACV_fnc_map_visual;";
			};
			class Commander_Map_Zoom
			{
				displayName="Map Zoom";
				position="stick_cam_turret";
				onlyforplayer=0;
				radius=2;
				showWindow=0;
				hideOnUse=1;
				condition="(missionNamespace getVariable [""bis_fnc_moduleRemoteControl_unit"", player]) isEqualTo commander this && count (actionKeys ""ACV30_Map_Zoom"") <= 0";
				statement="[this] spawn ACV_fnc_map_zoom;";
			};
			class Cargoramp_OpenCommander
			{
				displayName="Open Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5'/>";
				position="stick_cam_turret";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" < 0.5 && player isEqualTo commander this && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 1];";
			};
			class Cargoramp_CloseCommander
			{
				displayName="Close Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5'/>";
				position="stick_cam_turret";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" > 0.5 && player isEqualTo commander this && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 0];";
			};
			class Cargo_screen
			{
				displayName="Change Screen";
				position="cargo_screen";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="(missionNamespace getVariable [""bis_fnc_moduleRemoteControl_unit"", player]) isEqualTo (this turretUnit [4])";
				statement="[this] spawn ACV_fnc_cargoscreen_switch;";
			};
			class Cargomap_Map_Mode
			{
				displayName="Map Mode";
				position="cargo_screen";
				onlyforplayer=0;
				radius=2;
				showWindow=0;
				hideOnUse=1;
				condition="(missionNamespace getVariable [""bis_fnc_moduleRemoteControl_unit"", player]) isEqualTo (this turretUnit [4])";
				statement="[this, true] spawn ACV_fnc_map_visual;";
			};
			class Cargomap_Map_Zoom
			{
				displayName="Map Zoom";
				position="cargo_screen";
				onlyforplayer=0;
				radius=2;
				showWindow=0;
				hideOnUse=1;
				condition="(missionNamespace getVariable [""bis_fnc_moduleRemoteControl_unit"", player]) isEqualTo (this turretUnit [4])";
				statement="[this, true] spawn ACV_fnc_map_zoom;";
			};
			class Cargoramp_OpenLGuuner
			{
				displayName="Open Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5' />";
				position="cargoramp";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" < 0.5 && player isEqualTo (this turretUnit [2]) && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 1];";
			};
			class Cargoramp_CloseLGuuner
			{
				displayName="Close Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5'/>";
				position="cargoramp";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" > 0.5 && player isEqualTo (this turretUnit [2]) && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 0];";
			};
			class Cargoramp_OpenRGuuner
			{
				displayName="Open Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5'/>";
				position="cargoramp";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" < 0.5 && player isEqualTo (this turretUnit [3]) && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 1];";
			};
			class Cargoramp_CloseRGuuner
			{
				displayName="Close Cargoramp";
				displayNameDefault="<img image='\ACV\data\UI\open_ramp_ca.paa' size='2.5'/>";
				position="cargoramp";
				onlyforplayer=0;
				radius=0;
				showWindow=0;
				hideOnUse=1;
				condition="this animationPhase ""cargoramp_h"" > 0.5 && player isEqualTo (this turretUnit [3]) && count (actionKeys ""ACV_Cargoramp_Control"") <= 0";
				statement="this animateSource [""cargoramp"", 0];";
			};
		};