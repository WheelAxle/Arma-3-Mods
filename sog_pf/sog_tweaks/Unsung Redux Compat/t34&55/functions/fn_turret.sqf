// modified by TeTeT for unsung

params [["_vehicle", ObjNull]];

if (isNull _vehicle) exitWith {};
// run only once
if (!local _vehicle) exitWith {};

private _pos = position _vehicle;
sleep 1;
private _turret = "uns_T54deadturret" createvehicle (position _vehicle);
_turret setPos (_vehicle modelToWorld [0,0,5]);

_turret setVectorDirAndUp [[(random -2),(random -2),(random -2)],[(random -2),(random -2),(random -2)]];
// _turret setVelocity [(random 5), (random 5), 25];

// TeTeT: this seems to let the turret fly off, maybe we could use addForce instead nowadays?
/**
private _counter = 0;
while {_counter < 50} do
{
	private _x1 = vectorDir _turret select 0;
	private _y1 = vectorDir _turret select 1;
	private _z1 = vectorDir _turret select 2;
	private _x2 = vectorUp _turret select 0;
	private _y2 = vectorUp _turret select 1;
	private _z2 = vectorUp _turret select 2;

	_turret setVectorDirAndUp [[_x1+(random 0.5),_y1+(random 0.5),_z1+(random 0.5)],[_x2+(random 0.5),_y2+(random 0.5),_z2+(random 0.5)]];
	if ((_counter > 10) && (getPos _turret select 2) < 1) exitWith {};

	sleep 0.01;
	_counter = _counter + 1;
};
**/

// addForce usage

_turret addForce [ [random 1000, random 1000, random 200000], [0,0,1] ];
_vehicle;