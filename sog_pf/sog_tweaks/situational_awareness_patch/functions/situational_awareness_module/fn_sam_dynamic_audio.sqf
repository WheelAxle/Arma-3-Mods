/*
        FILE: fn_sam_dynamic_audio.sqf
        DATE: 13-06-2019
        AUTHOR: Ethan Johnson

        DESCRIPTION:
                Play situational awareness audio locally on users client based on predefined conditions, works for normal play, splended camera & zeus.
        PARAMETERS:
                (0): TEXT - Audio class to `say3d` from the object
                (1): OBJECT - Object to `say3d` the audio
        RETURNS:
                NONE
*/
params [["_object",objnull,[objNull]],["_audio","",[""]]];
if !(hasInterface && {!(_audio isEqualTo "") && {!(isNull _object) && {(simulationEnabled _object)}}}) exitwith {};
if !(isGameFocused) exitWith {};
private _dist_audio = missionNamespace getVariable [format["%1_dist",_audio],_audio];
private _tunnel_audio = missionNamespace getVariable [format["%1_tunnel",_audio],_audio];

// Lets use the camera's position rather then the position of the player. That way it will sound the same for everyone including zeus.
private _camerapos = positionCameraToWorld [0,0,0]; // <-- Exact position of the users camera
private _distance = _camerapos distance _object;

private _tunnel = missionNamespace getVariable ['vn_tunnel', false];

switch (true) do
{
        case (_distance <= 35):
        {
		if _tunnel then
		{
			_object say3D [_tunnel_audio, 150, 1, false];
		}
		else
		{
			_object say3D [_audio, 150, 1, false];
		};
        };
        case (!_tunnel && {_distance <= 350}):
        {
                _object say3D [_dist_audio, 350, 1, false];
        };
        default { /* Play no audio */ };
};
