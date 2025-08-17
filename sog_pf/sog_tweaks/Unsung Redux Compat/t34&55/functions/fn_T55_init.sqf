// random camo textures
// Modified by TeTeT for unsung

params [["_vehicle", ObjNull]];

if (isNull _vehicle) exitWith {};
// run only once
if (!local _vehicle) exitWith {};

/*
private _plants = selectRandom [0, 1];  // random camo plants
_vehicle animateSource ["plants_source", _plants, true];
*/

private _fueltanks = selectRandom [0, 1];  // random external fuel tanks
_vehicle animateSource ["fueltanks_source", _fueltanks, true];

private _bumper = selectRandom [0, 1];  // random bumper
_vehicle animateSource ["bumper_source", _bumper, true];

private _snorkel = selectRandom [0, 1];  // random snorkel
_vehicle animateSource ["snorkel_source", _snorkel, true];

/*
_camo = round random 2;

switch (_camo) do
{
	case 0:
	{
		_vehicle setobjecttextureGlobal[0,"\uns_t34_t55\t55skins\t55_body_v_co.paa"];
		_vehicle setobjecttextureGlobal[1,"\uns_t34_t55\t55skins\t55_tower_nva_co.paa"];
	};
	case 1:
	{
		_vehicle setobjecttextureGlobal[0,"\uns_t34_t55\t55skins\t55_body_v_co.paa"];
		_vehicle setobjecttextureGlobal[1,"\uns_t34_t55\t55skins\t55_tower_vc_co.paa"];
	};
	case 2:
	{
		_vehicle setobjecttextureGlobal[0,"\uns_t34_t55\t55skins\t55_body_dac_co.paa"];
		_vehicle setobjecttextureGlobal[1,"\uns_t34_t55\t55skins\t55_tower_dac_co.paa"];
	};

}; // switch-do

*/