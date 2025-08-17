#include "\vn\modules_f_vietnam\vn_sam_defines.inc"
/*
    File: fn_sam_getUnitVoiceIndex.sqf
    Author: veteran29
    Date: 2022-02-12
    Last Update: 2022-02-12
    Public: No

    Description:
        Get index of the voice which should be used to fetch the voice array from "vn_sam_masteraudioarray".

    Parameter(s):
        _unit - Unit which should be used to get the voice array [OBJECT, defaults to objNull]

    Returns:
        NOTHING

    Example(s):
        [player] call vn_fnc_sam_getUnitVoiceIndex
*/

params [
    ["_unit", objNull]
];

private _faceType = getText (configFile >> "CfgFaces" >> "Man_A3" >> face _unit >> "vn_sam_faceType");

private _voiceType = vn_sam_voiceHash get [faction _unit, _faceType];
if (isNil "_voiceType") then {
    _voiceType = vn_sam_voiceHash get side group _unit;
};

_voiceType // return
