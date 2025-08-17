/*
    File: fn_respawn_none.sqf
    Original Author: Karel Moricky
    Edit Author: Ethan Johnson
    Date: 2020-02-13
    Last Update: 2020-05-27
    Public: No

    Description:
    Overwrite of the single player death screen

    Parameter(s):
    _player - Killed unit [OBJECT, defaults to OBJNULL]
    _killer - Killer unit [OBJECT, defaults to OBJNULL]

    Returns:
    NONE

    Example(s):
    [player, object_01] call vn_fnc_respawn_none
*/


private ["_soundvolume","_musicvolume"];

#define CONTROL	(_display displayctrl _n)

disableserialization;
params [["_player",objNull,[objNull]],["_killer",objNull,[objNull]]];
if (isnull _killer) then {_killer = _player};

private _musicvolume = musicvolume;
private _soundvolume = soundvolume;

private _start = isnil "bis_fnc_respawnNone_start";
if (_start) then
{
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
private _display = finddisplay 58;

//--- Black fade in
private _n = 1060;
CONTROL ctrlsetfade 1;
if (_start) then
{

	0 fadeSound 0;
	0 fadeMusic 0;
	
	CONTROL ctrlcommit 4;
}
else
{
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
date params ["_year","_month","_day","_hour","_minute"];

private _sitrep = [];
if (!isPlayer _player || name _player isEqualTo "Error: No unit") then
{
	_sitrep pushBack localize "STR_VN_DEATH_UKNOWN_SOLDIER";
}
else
{
	_sitrep pushBack format["%1 %2", localize format ["STR_%1",rank _player], name _player];
};
private _timenum = {params ["_num"]; if (_num <= 9) then {("0" + str _num)} else { str _num}};
_sitrep pushBack "|";
_sitrep pushBack format["♥%1❤",localize "STR_VN_DEATH_KIA"];
_sitrep pushBack "|";
_sitrep pushBack format["%4:%5 - %1 %2, %3",localize format["STR_3DEN_Attributes_Date_Month%1_text",_month],[_day] call BIS_fnc_ordinalNumber,_year,[_hour] call _timenum,[_minute] call _timenum];
_sitrep = _sitrep joinString "";
_sitrep = toupper _sitrep;

_n = 5858;
CONTROL ctrlsetposition
[
	((getResolution select 2) * 0.5 * pixelW) - (99 * (pixelW * pixelGrid *  0.50)),
	0.5 - (safezoneH min (160 * (pixelH * pixelGrid * 0.50))) * 0.5 + 6 * (pixelH * pixelGrid * 0.50),
	198 * (pixelW * pixelGrid * 0.50),
	75 * (pixelH * pixelGrid * 0.50)
];
CONTROL ctrlcommit 0;
[CONTROL,_sitrep] spawn
{
	scriptname "bis_fnc_respawnNone: SITREP";
	disableserialization;
	_control = _this select 0;
	_sitrepArray = toarray (_this select 1);
	{_sitrepArray set [_foreachindex,tostring [_x]]} foreach _sitrepArray;
	_sitrep = "";
	_sitrepFormat = "<t align='center' font='tt2020base_vn_bold' size='1.5' shadow='2'>%1</t>";

	sleep 1;
	for "_i" from 0 to (count _sitrepArray - 1) do
	{
		_letter = _sitrepArray select _i;
		_delay = switch (true) do
		{
			case (_letter isEqualTo "|"):
			{
			    _letter = "<br />"; 1.5
			};
			case (_letter isEqualTo "♥"):
			{
			    _letter = "<t size='2.75' color='#bf1b0f'>"; 0.1
			};
			case (_letter isEqualTo "❤"):
			{
			    _letter = "</t>"; 0.1
			};
			default
			{
				0.1
			};
		};
		if (_letter isEqualTo "|") then {_letter = "<br />"; 1.5} else {0.1};
		_sitrep = _sitrep + _letter;
		_control ctrlsetstructuredtext parsetext format [_sitrepFormat,_sitrep];
		playSound "click";
		sleep _delay;
		if (isnull _control) exitwith {};
	};
	_control ctrlsetstructuredtext parsetext format [_sitrepFormat,_sitrep];
};


//--- Create UAV camera
private _player_pos = getPosATL player;
private _camera = "camera" camcreate [(_player_pos#0),(_player_pos#1),((_player_pos#2) + 1)];
_camera cameraeffect ["internal","back"];
_camera campreparefov 0.4;
_camera campreparetarget _player;
showcinemaborder false;

//--- Set PP effects
private _saturation = 0.0 + random 0.3;
_ppColor = ppEffectCreate ["ColorCorrections", 1999];
_ppColor ppEffectEnable true;
_ppColor ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1 - _saturation, 1 - _saturation, 1 - _saturation, _saturation], [1, 0.25, 0, 1.0]];
_ppColor ppEffectCommit 7;

_ppGrain = ppEffectCreate ["filmGrain", 2012];
_ppGrain ppEffectEnable true;
_ppGrain ppEffectAdjust [0.25, 1, 2.01, 0, 1, 0];
_ppGrain ppEffectCommit 7;

//--- Camera update executed every frame
bis_fnc_respawnNone_player = _player;
bis_fnc_respawnNone_killer = _killer;
bis_fnc_respawnNone_camera = _camera;
vn_fnc_respawnNone_loop = {
	scriptname "bis_fnc_respawnNone: camera";

	params ["_display"];
	private _player = bis_fnc_respawnNone_player;
	private _killer = bis_fnc_respawnNone_killer;
	private _camera = bis_fnc_respawnNone_camera;

	private _pos = (vehicle _player) modelToWorld [0,0,7];

	if (camCommitted _camera && {_camera distance _pos > 0.5}) then
	{
		_camera camSetTarget _player;
		_camera camSetRelPos [0,0,7];
		_camera camCommit 7;
	};

	//--- HUD
	private _n = 5800;
	CONTROL ctrlShow false;
	CONTROL ctrlcommit 0;

	//--- Tiles
	private _n = 115099;
	CONTROL ctrlShow false;
	CONTROL ctrlcommit 0;
};

bis_fnc_respawnNone_vision = -1;

/* Disable NVG and TI on the death screen if before 1990 */
if (date#0 >= 1990) then {
	if (sunormoon < 1) then {bis_fnc_respawnNone_vision = 0;};
	camusenvg false;
	call compile 'false SetCamUseTi 0';
	_display displayaddeventhandler ["keydown","_this call bis_fnc_respawnNone_keydown"];
};
[-1,-1] call bis_fnc_respawnNone_keydown;

_display displayaddeventhandler ["mousemoving","_this call vn_fnc_respawnNone_loop"];
_display displayaddeventhandler ["mouseholding","_this call vn_fnc_respawnNone_loop"];

//--- Team Switch display opened
waituntil {isnull _display};
private _displayTeamSwitch = finddisplay 632;

//--- Team Switch display closed - cleanup and restart the view
waituntil {isnull _displayTeamSwitch};

_camera cameraeffect ["terminate","back"];
camdestroy _camera;

bis_fnc_respawnNone_player = nil;
bis_fnc_respawnNone_killer = nil;
bis_fnc_respawnNone_camera = nil;
vn_fnc_respawnNone_loop = nil;

ppeffectdestroy _ppColor;
ppeffectdestroy _ppGrain;

if (!alive player) exitwith {_this call bis_fnc_respawnNone;};


//--- Resurrection!
BIS_fnc_feedback_allowPP = true;
0 fadesound 1;
0 fademusic 1;
playmusic "";
bis_fnc_respawnNone_start = nil;
