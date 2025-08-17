/*
	Author: Karel Moricky

	Description:
	Death screen.

	Parameter(s):
		0: OBJECT - killed unit
		1: OBJECT - killer

	Returns:
	NOTHING
	
	Edited: Lines 54-55,128
*/
private ["_soundvolume","_musicvolume"];

#define CONTROL	(_display displayctrl _n)

disableserialization;
_player = _this select 0;
_killer = _this select 1;
if (isnull _killer) then {_killer = _player};

_musicvolume = musicvolume;
_soundvolume = soundvolume; //MUF-TODO: check if this is done before sound is faded in fn_feedbackMain.fsm

_start = isnil "bis_fnc_respawnNone_start";
if (_start) then {
	bis_fnc_respawnNone_start = [daytime,time / 3600];

	//3.5 fadesound 0; //MUF-commented

	sleep 2;
	if (alive player) exitwith {};
	cutText ["","BLACK OUT",1];
	sleep 1.5;
        BIS_fnc_feedback_allowPP = false; //MUF-switch health PP off
	//(["HealthPP_black"] call bis_fnc_rscLayer) cutText ["","BLACK IN",1];//MUF-black in (remove black screen that was launched in FSM PP)

	if (ismultiplayer) then {(finddisplay 46) createdisplay "RscDisplayMissionEnd";} else {enableenddialog};
};
if (alive player) exitwith {cuttext ["","plain"];}; //--- Terminate when player manages to switch do different unit already

waituntil {!isnull (finddisplay 58)};
_display = finddisplay 58;

//--- Black fade in
_n = 1060;
CONTROL ctrlsetfade 1;
if (_start) then {

	setacctime 1;
	0 fadeSound 0;
	0 fadeMusic 0;

	CONTROL ctrlcommit 4;
} else {
	CONTROL ctrlcommit 0;
};
cuttext ["","plain"];

//--- HUD
_n = 5800;
CONTROL ctrlsettext gettext (configfile >> "cfgingameui" >> "cursor" >> "select");
CONTROL ctrlsetposition [-10,-10,safezoneH * 0.07 * 3/4,safezoneH * 0.07];
CONTROL ctrlsettextcolor [1,1,1,1];
CONTROL ctrlcommit 0;

//--- SITREP (ToDO: Localize)
_sitrep = "SITREP||";
if (name _player != "Error: No unit") then {
	_sitrep = _sitrep + "KIA: %4. %5|";
};
_sitrep = _sitrep + "TOD: %2 [%3]|LOC: %6 \ %7";

private _vehicleKiller = vehicle _killer;
private _weaponKiller = currentweapon _killer;

if (_killer != _player) then {
	_sitrep = _sitrep + "||ENY: %8";
	if(_vehicleKiller != _killer)then
	{
		{
			if((_vehicleKiller turretUnit _x) isEqualTo _killer)exitWith{_weaponKiller = _vehicleKiller currentWeaponTurret _x};
		}foreach ([[-1]] + allTurrets _vehicleKiller);
	};
	if (_weaponKiller != "") then {
		_sitrep = _sitrep + "|ENW: %9</t>"
	};
};
_sitrep = format [
	_sitrep,
	1 * safezoneH,
	[bis_fnc_respawnNone_start select 0,"HH:MM:SS"] call bis_fnc_timetostring,
	[bis_fnc_respawnNone_start select 1,"HH:MM:SS"] call bis_fnc_timetostring,
	toupper localize format ["STR_SHORT_%1",rank _player],
	toupper name _player,
	mapGridPosition _player,
	toupper gettext (configfile >> "CfgWorlds" >> worldname >> "description"),
	toupper ((configfile >> "cfgvehicles" >> typeof _vehicleKiller) call bis_fnc_displayname),
	toupper ((configfile >> "cfgweapons" >> _weaponKiller) call bis_fnc_displayname)

];

_n = 11000;
_bcgPos = ctrlposition CONTROL;
_n = 5858;
//CONTROL ctrlsetposition [_bcgPos select 0,safezoneY + ((_bcgPos select 0) - safezoneX) * 4/3,safezoneW - 2 * (_bcgPos select 2),safezoneH / 2];
CONTROL ctrlsetposition [(((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX),
			 ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY),
			 safezoneW - 2 * (_bcgPos select 2),
			 safezoneH / 2];
CONTROL ctrlcommit 0;
[CONTROL,_sitrep] spawn {
	scriptname "bis_fnc_respawnNone: SITREP";
	disableserialization;
	_control = _this select 0;
	_sitrepArray = toarray (_this select 1);
	{_sitrepArray set [_foreachindex,tostring [_x]]} foreach _sitrepArray;
	_sitrep = "";
	//_sitrepFormat = "<t align='left' font='EtelkaMonospacePro' shadow='1' size='" + str safezoneH + "'>%1</t>";
	_sitrepFormat = "<t align='left' font='EtelkaMonospacePro' shadow='1'>%1</t>";

	sleep 1;
	for "_i" from 0 to (count _sitrepArray - 1) do {
		_letter = _sitrepArray select _i;
		_delay = if (_letter == "|") then {_letter = "<br />"; 0.5} else {0.001};
		_sitrep = _sitrep + _letter;
		_control ctrlsetstructuredtext parsetext format [_sitrepFormat,_sitrep + "_"];
		//playsound ["IncomingChallenge",true];
		sleep _delay;
		if (isnull _control) exitwith {};
	};
	_control ctrlsetstructuredtext parsetext format [_sitrepFormat,_sitrep];
};


//--- Create UAV camera
_camera = "camera" camcreate position player;
_camera cameraeffect ["internal","back"];
_camera campreparefov 0.4;
_camera campreparetarget _killer;
showcinemaborder false;

//--- Set PP effects
_saturation = 0.0 + random 0.3;
_ppColor = ppEffectCreate ["ColorCorrections", 1999];
_ppColor ppEffectEnable true;
_ppColor ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1 - _saturation, 1 - _saturation, 1 - _saturation, _saturation], [1, 0.25, 0, 1.0]];
_ppColor ppEffectCommit 0;

_ppGrain = ppEffectCreate ["filmGrain", 2012];
_ppGrain ppEffectEnable true;
_ppGrain ppEffectAdjust [random 0.2, 1, 1, 0, 1];
_ppGrain ppEffectCommit 0;

//--- Camera update executed every frame
bis_fnc_respawnNone_player = _player;
bis_fnc_respawnNone_killer = _killer;
bis_fnc_respawnNone_camera = _camera;

//bis_fnc_respawnNone_vision = (1 + floor random 3) % 4; //--- Random vision (not NVG)
bis_fnc_respawnNone_vision = -1;
if (sunormoon < 1) then {bis_fnc_respawnNone_vision = 0;};
[-1,-1] call bis_fnc_respawnNone_keydown;

_display displayaddeventhandler ["mousemoving","_this call bis_fnc_respawnNone_loop"];
_display displayaddeventhandler ["mouseholding","_this call bis_fnc_respawnNone_loop"];
_display displayaddeventhandler ["keydown","_this call bis_fnc_respawnNone_keydown"];


//--- Team Switch display opened
waituntil {isnull _display};
_displayTeamSwitch = finddisplay 632;

//--- Team Switch display closed - cleanup and restart the view
waituntil {isnull _displayTeamSwitch};

_camera cameraeffect ["terminate","back"];
camdestroy _camera;

bis_fnc_respawnNone_player = nil;
bis_fnc_respawnNone_killer = nil;
bis_fnc_respawnNone_camera = nil;

ppeffectdestroy _ppColor;
ppeffectdestroy _ppGrain;

if (!alive player) exitwith {_this call bis_fnc_respawnNone;};


//--- Resurrection!
BIS_fnc_feedback_allowPP = true;
0 fadesound _soundvolume;
0 fademusic _musicvolume;
playmusic "";
bis_fnc_respawnNone_start = nil;