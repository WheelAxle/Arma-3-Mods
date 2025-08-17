0 = [] spawn
{
	if ( (isServer) and (AX_IsShoulderLightAppearOnSquad) and !(isMultiplayer) ) then
	{
		//SOG AI compat
		if (isClass (configfile >> "CfgPatches" >> "JBOY_SOGAI_mod")) then
		{
			if (vehicle player isNotEqualTo player and missionName isNotEqualTo "[SP]%20Deathwish%2e") then
			{
				//hint "SOG AI won't initialize until player exits vehicle.";
				//player allowDamage false;
				waitUntil {sleep 1; vehicle player isEqualTo player};
				//player allowDamage true;
			}
			else
			{
				sleep 5;
			};
		};
		//DRO Compat
		if (missionName find "Dynamic%20Recon%20Ops" >= 0) then
		{
			waitUntil {sleep 1; ((missionNameSpace getVariable ["playersReady", 0]) == 1)};
		};
		//Adding the light
		{
			_unit = _x;
			if !(_unit getVariable ["haslight",false]) then
			{
				_unit addItemToVest "AX_ShoulderLampItem_Regular";
				_unit setVariable ["haslight",true];
			};
		 }forEach units player;
	};
};