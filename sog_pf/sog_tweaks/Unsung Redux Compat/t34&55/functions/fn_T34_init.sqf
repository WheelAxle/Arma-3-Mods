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

/*
_camo = round random 2;

switch (_camo) do
{
	case 0:
	{
		_vehicle setobjecttextureGlobal[0,"\uns_t34_t55\t34skins\t34_body01_v_co.paa"];
		_vehicle setobjecttextureGlobal[1,"\uns_t34_t55\t34skins\t34_body02_co.paa"];
		_vehicle setobjecttextureGlobal[2,"\uns_t34_t55\t34skins\t34_turret_nva_co.paa"];
		_vehicle setobjecttextureGlobal[3,"\uns_t34_t55\t34skins\t34_wheels_ind_co.paa"];
		_vehicle setobjecttextureGlobal[4,"\uns_t34_t55\t34skins\t34_body03_co.paa"];
	};
	case 1:
	{
		_vehicle setobjecttextureGlobal[0,"\uns_t34_t55\t34skins\t34_body01_v_co.paa"];
		_vehicle setobjecttextureGlobal[1,"\uns_t34_t55\t34skins\t34_body02_co.paa"];
		_vehicle setobjecttextureGlobal[2,"\uns_t34_t55\t34skins\t34_turret_vc_co.paa"];
		_vehicle setobjecttextureGlobal[3,"\uns_t34_t55\t34skins\t34_wheels_ind_co.paa"];
		_vehicle setobjecttextureGlobal[4,"\uns_t34_t55\t34skins\t34_body03_co.paa"];
	};
	case 2:
	{
		_vehicle setobjecttextureGlobal[0,"\uns_t34_t55\t34skins\t34_body01_dac_co.paa"];
		_vehicle setobjecttextureGlobal[1,"\uns_t34_t55\t34skins\t34_body02_ind_co.paa"];
		_vehicle setobjecttextureGlobal[2,"\uns_t34_t55\t34skins\t34_turret_dac_co.paa"];
		_vehicle setobjecttextureGlobal[3,"\uns_t34_t55\t34skins\t34_wheels_ind_co.paa"];
		_vehicle setobjecttextureGlobal[4,"\uns_t34_t55\t34skins\t34_body03_ind_co.paa"];
	};

}; // switch-do

*/