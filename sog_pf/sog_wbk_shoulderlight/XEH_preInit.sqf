WBK_HeadlampsAndFlashlights append ["AX_ShoulderLampItem_Weak", "AX_ShoulderLampItem_Regular", "AX_ShoulderLampItem_Strong"];

[ 
    "AX_Lights_AddShoulderLights", 
    "LIST", 
    "Auto add shoulder lights to player squad? (SP)",
    "WebKnight HeadLamps",
    [[false, true], ["NO", "YES"], 0],
    1,
    {   
        params ["_value"]; 
        AX_IsShoulderLightAppearOnSquad = _value; 
    }
] call CBA_fnc_addSetting;

WBK_CustomFlashlight = {
	_unit = _this;
	if (!(isNil {_unit getVariable "WBK_AttachedFlaslights"})) exitWith {
		{
			deleteVehicle _x;
		} forEach (_unit getVariable "WBK_AttachedFlaslights");
		_unit setVariable ["WBK_AttachedFlaslights",nil,true]; 
		switch true do {
			case ("WBK_HandFlashlight" in items _unit || "WBK_HandFlashlight_Weak" in items _unit || "WBK_HandFlashlight_Strong" in items _unit): {
				_unit playActionNow "WBK_lantern_flashlight_off";
				[_unit, "\WBK_Headlamps\gunlight_off.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			};
			case ("WBK_LampItem_Green" in items _unit || "WBK_LampItem_Black" in items _unit || "WBK_LampItem_Red" in items _unit || "WBK_LampItem_Blue" in items _unit): {
				_unit playActionNow "WBK_lantern_flashlight_off";
				[_unit, "\WBK_Headlamps\lamp_off.ogg"] spawn WBK_FLASHLIGHT_PlaySound;
			};
			case ("WBK_ShoulderLampItem_Weak" in items _unit || "WBK_ShoulderLampItem_Strong" in items _unit || "WBK_ShoulderLampItem_Regular" in items _unit || "AX_ShoulderLampItem_Regular" in items _unit): {
				_unit playActionNow "WBK_shoulder_flashlight_off";
				[_unit, "\WBK_Headlamps\gunlight_off.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			};
			default {
				_unit playActionNow "WBK_head_flashlight_off";
				[_unit, "\WBK_Headlamps\headlamp_off.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			};
		};
	};
	switch true do {
		case ("WBK_ShoulderLampItem_Strong" in items _unit): {
			[_unit, "\WBK_Headlamps\gunlight_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_shoulder_flashlight";
			_light_head = "Reflector_Cone_01_long_white_F" createVehicle [0,0,0];
			_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			_light_head attachto [_unit,[-0.15,0.041,0.25], "spine3",true]; 
			_volumetric_l attachto [_unit,[-0.13,-0.01,0.22], "spine3",true];     
			[[_volumetric_l,_light_head], { 
				_y = 0;      
				_p = 185;      
				_r  = 80;     
				(_this select 0) setVectorDirAndUp [            
				 [sin _y * cos _p, cos _y * cos _p, sin _p],            
				 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
				];   
				_y = -2;      
				_p = 0;      
				_r  = 0;     
				(_this select 1) setVectorDirAndUp [            
				 [sin _y * cos _p, cos _y * cos _p, sin _p],            
				 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
				];    
			}] remoteExec ["call",0];
			_unit spawn WBK_ForceFlashlightOff;
		};
		case ("WBK_ShoulderLampItem_Regular" in items _unit || "AX_ShoulderLampItem_Regular" in items _unit): {
			[_unit, "\WBK_Headlamps\gunlight_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_shoulder_flashlight";
			_light_head = "Reflector_Cone_01_narrow_white_F" createVehicle [0,0,0];
			_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			_light_head attachto [_unit,[-0.15,0.041,0.25], "spine3",true]; 
			_volumetric_l attachto [_unit,[-0.13,-0.01,0.22], "spine3",true];     
			[[_volumetric_l,_light_head], { 
				_y = 0;      
				_p = 185;      
				_r  = 80;     
				(_this select 0) setVectorDirAndUp [            
				 [sin _y * cos _p, cos _y * cos _p, sin _p],            
				 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
				];   
				_y = -2;      
				_p = 0;      
				_r  = 0;     
				(_this select 1) setVectorDirAndUp [            
				 [sin _y * cos _p, cos _y * cos _p, sin _p],            
				 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
				];    
			}] remoteExec ["call",0];
			_unit spawn WBK_ForceFlashlightOff;
		};
		case ("WBK_ShoulderLampItem_Weak" in items _unit): {
			[_unit, "\WBK_Headlamps\gunlight_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_shoulder_flashlight";
			_light_head = "WBK_HeadLampLightObject" createVehicle [0,0,0];
			_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			_light_head attachto [_unit,[-0.15,0.041,0.25], "spine3",true]; 
			_volumetric_l attachto [_unit,[-0.13,-0.01,0.22], "spine3",true];     
			[[_volumetric_l,_light_head], { 
				_y = 0;      
				_p = 185;      
				_r  = 80;     
				(_this select 0) setVectorDirAndUp [            
				 [sin _y * cos _p, cos _y * cos _p, sin _p],            
				 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
				];   
				_y = -2;      
				_p = 0;      
				_r  = 0;     
				(_this select 1) setVectorDirAndUp [            
				 [sin _y * cos _p, cos _y * cos _p, sin _p],            
				 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
				];    
			}] remoteExec ["call",0];
			_unit spawn WBK_ForceFlashlightOff;
		};
		case ("WBK_HandFlashlight_Strong" in items _unit): {
			if !(isClass (configFile >> "CfgPatches" >> "WBK_MeleeMechanics")) then {
				if (currentWeapon _unit == primaryWeapon _unit && currentWeapon _unit != "") exitWith {
					systemChat "Cannot use it with primary weapon";
				};
				[_unit, "\WBK_Headlamps\gunlight_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
				if (currentWeapon _unit == "") then {
					_unit playActionNow "WBK_leftHand_flashlight_unarmed";
				}else{
					_unit playActionNow "WBK_leftHand_flashlight";
				};
				_flashlight = "WBK_Flashlight_Model" createVehicle [0,0,0];
				_flashlight attachto [_unit,[0.015,0.01,0.015], "leftHand",true];
				_light_head = "Reflector_Cone_01_long_white_F" createVehicle [0,0,0];
				_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
				_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head,_flashlight],true]; 
				_light_head attachto [_unit,[0.02,-0.07,-0.01], "leftHand",true];     
				_volumetric_l attachto [_unit,[0.02,0,0], "leftHand",true];     
				[[_volumetric_l,_light_head], { 
					_y = 0;      
					_p = 0;      
					_r  = 0;     
					(_this select 0) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];   
					_y =  0;      
					_p = 180;      
					_r  = 0;     
					(_this select 1) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];     
				 }] remoteExec ["call",0];
				[_unit, _light_head] spawn {
					while {!isNull (_this select 1)} do {
						if (gestureState (_this select 0) == "<none>") then {
							if (currentWeapon (_this select 0) == "") then {
							(_this select 0) playActionNow "WBK_leftHand_flashlight_unarmed";
							}else{
							(_this select 0) playActionNow "WBK_leftHand_flashlight";
							};
						};
						uiSleep 0.2;
					};
				};
				_unit spawn WBK_ForceFlashlightOff_HandHeld;
			}else{
				if ((currentWeapon _unit == primaryWeapon _unit && currentWeapon _unit != "") || (currentWeapon _unit in IMS_Melee_Heavy) || (currentWeapon _unit in IMS_Melee_Alebard) || (currentWeapon _unit in IMS_Melee_Greatswords)) exitWith {
					systemChat "Cannot use flashlight with this weapon";
				};
				[_unit, "\WBK_Headlamps\gunlight_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
				if (currentWeapon _unit == "" || currentWeapon _unit in IMS_Melee_Weapons) then {
					_unit playActionNow "WBK_leftHand_flashlight_unarmed";
				}else{
					_unit playActionNow "WBK_leftHand_flashlight";
				};
				_flashlight = "WBK_Flashlight_Model" createVehicle [0,0,0];
				_flashlight attachto [_unit,[0.015,0.01,0.015], "leftHand",true];
				_light_head = "Reflector_Cone_01_long_white_F" createVehicle [0,0,0];
				_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
				_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head,_flashlight],true]; 
				_light_head attachto [_unit,[0.02,-0.07,-0.01], "leftHand",true];     
				_volumetric_l attachto [_unit,[0.02,0,0], "leftHand",true];    
				[[_volumetric_l,_light_head], { 
					_y = 0;      
					_p = 0;      
					_r  = 0;     
					(_this select 0) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];   
					_y =  0;      
					_p = 180;      
					_r  = 0;     
					(_this select 1) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];     
				 }] remoteExec ["call",0];
				[_unit, _light_head] spawn {
					while {!isNull (_this select 1)} do {
						if (gestureState (_this select 0) == "<none>") then {
							if (currentWeapon (_this select 0) == "" || currentWeapon (_this select 0) in IMS_Melee_Weapons) then {
							(_this select 0) playActionNow "WBK_leftHand_flashlight_unarmed";
							}else{
							(_this select 0) playActionNow "WBK_leftHand_flashlight";
							};
						};
						uiSleep 0.2;
					};
				};
				_unit spawn WBK_ForceFlashlightOff_HandHeld;
			};
		};
		case ("WBK_HandFlashlight_Weak" in items _unit): {
			if !(isClass (configFile >> "CfgPatches" >> "WBK_MeleeMechanics")) then {
				if (currentWeapon _unit == primaryWeapon _unit && currentWeapon _unit != "") exitWith {
					systemChat "Cannot use it with primary weapon";
				};
				[_unit, "\WBK_Headlamps\gunlight_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
				if (currentWeapon _unit == "") then {
					_unit playActionNow "WBK_leftHand_flashlight_unarmed";
				}else{
					_unit playActionNow "WBK_leftHand_flashlight";
				};
				_flashlight = "WBK_Flashlight_Model" createVehicle [0,0,0];
				_flashlight attachto [_unit,[0.015,0.01,0.015], "leftHand",true];
				_light_head = "WBK_HeadLampLightObject" createVehicle [0,0,0];
				_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
				_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head,_flashlight],true]; 
				_light_head attachto [_unit,[0.02,-0.07,-0.01], "leftHand",true];     
				_volumetric_l attachto [_unit,[0.02,0,0], "leftHand",true];      
				[[_volumetric_l,_light_head], { 
					_y = 0;      
					_p = 0;      
					_r  = 0;     
					(_this select 0) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];   
					_y =  0;      
					_p = 180;      
					_r  = 0;     
					(_this select 1) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];     
				 }] remoteExec ["call",0];
				[_unit, _light_head] spawn {
					while {!isNull (_this select 1)} do {
						if (gestureState (_this select 0) == "<none>") then {
							if (currentWeapon (_this select 0) == "") then {
							(_this select 0) playActionNow "WBK_leftHand_flashlight_unarmed";
							}else{
							(_this select 0) playActionNow "WBK_leftHand_flashlight";
							};
						};
						uiSleep 0.2;
					};
				};
				_unit spawn WBK_ForceFlashlightOff_HandHeld;
			}else{
				if ((currentWeapon _unit == primaryWeapon _unit && currentWeapon _unit != "") || (currentWeapon _unit in IMS_Melee_Heavy) || (currentWeapon _unit in IMS_Melee_Alebard) || (currentWeapon _unit in IMS_Melee_Greatswords)) exitWith {
					systemChat "Cannot use flashlight with this weapon";
				};
				[_unit, "\WBK_Headlamps\gunlight_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
				if (currentWeapon _unit == "" || currentWeapon _unit in IMS_Melee_Weapons) then {
					_unit playActionNow "WBK_leftHand_flashlight_unarmed";
				}else{
					_unit playActionNow "WBK_leftHand_flashlight";
				};
				_flashlight = "WBK_Flashlight_Model" createVehicle [0,0,0];
				_flashlight attachto [_unit,[0.015,0.01,0.015], "leftHand",true];
				_light_head = "WBK_HeadLampLightObject" createVehicle [0,0,0];
				_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
				_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head,_flashlight],true]; 
				_light_head attachto [_unit,[0.02,-0.07,-0.01], "leftHand",true];     
				_volumetric_l attachto [_unit,[0.02,0,0], "leftHand",true];      
				[[_volumetric_l,_light_head], { 
					_y = 0;      
					_p = 0;      
					_r  = 0;     
					(_this select 0) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];   
					_y =  0;      
					_p = 180;      
					_r  = 0;     
					(_this select 1) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];     
				 }] remoteExec ["call",0];
				[_unit, _light_head] spawn {
					while {!isNull (_this select 1)} do {
						if (gestureState (_this select 0) == "<none>") then {
							if (currentWeapon (_this select 0) == "" || currentWeapon (_this select 0) in IMS_Melee_Weapons) then {
							(_this select 0) playActionNow "WBK_leftHand_flashlight_unarmed";
							}else{
							(_this select 0) playActionNow "WBK_leftHand_flashlight";
							};
						};
						uiSleep 0.2;
					};
				};
				_unit spawn WBK_ForceFlashlightOff_HandHeld;
			};
		};
		case ("WBK_HandFlashlight" in items _unit): {
			if !(isClass (configFile >> "CfgPatches" >> "WBK_MeleeMechanics")) then {
				if (currentWeapon _unit == primaryWeapon _unit && currentWeapon _unit != "") exitWith {
					systemChat "Cannot use it with primary weapon";
				};
				[_unit, "\WBK_Headlamps\gunlight_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
				if (currentWeapon _unit == "") then {
					_unit playActionNow "WBK_leftHand_flashlight_unarmed";
				}else{
					_unit playActionNow "WBK_leftHand_flashlight";
				};
				_flashlight = "WBK_Flashlight_Model" createVehicle [0,0,0];
				_flashlight attachto [_unit,[0.015,0.01,0.015], "leftHand",true];
				_light_head = "Reflector_Cone_01_narrow_white_F" createVehicle [0,0,0];
				_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
				_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head,_flashlight],true]; 
				_light_head attachto [_unit,[0.02,-0.07,-0.01], "leftHand",true];     
				_volumetric_l attachto [_unit,[0.02,0,0], "leftHand",true];      
				[[_volumetric_l,_light_head], { 
					_y = 0;      
					_p = 0;      
					_r  = 0;     
					(_this select 0) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];   
					_y =  0;      
					_p = 180;      
					_r  = 0;     
					(_this select 1) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];     
				 }] remoteExec ["call",0];
				[_unit, _light_head] spawn {
					while {!isNull (_this select 1)} do {
						if (gestureState (_this select 0) == "<none>") then {
							if (currentWeapon (_this select 0) == "") then {
							(_this select 0) playActionNow "WBK_leftHand_flashlight_unarmed";
							}else{
							(_this select 0) playActionNow "WBK_leftHand_flashlight";
							};
						};
						uiSleep 0.2;
					};
				};
				_unit spawn WBK_ForceFlashlightOff_HandHeld;
			}else{
				if ((currentWeapon _unit == primaryWeapon _unit && currentWeapon _unit != "") || (currentWeapon _unit in IMS_Melee_Heavy) || (currentWeapon _unit in IMS_Melee_Alebard) || (currentWeapon _unit in IMS_Melee_Greatswords)) exitWith {
					systemChat "Cannot use flashlight with this weapon";
				};
				[_unit, "\WBK_Headlamps\gunlight_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
				if (currentWeapon _unit == "" || currentWeapon _unit in IMS_Melee_Weapons) then {
					_unit playActionNow "WBK_leftHand_flashlight_unarmed";
				}else{
					_unit playActionNow "WBK_leftHand_flashlight";
				};
				_flashlight = "WBK_Flashlight_Model" createVehicle [0,0,0];
				_flashlight attachto [_unit,[0.015,0.01,0.015], "leftHand",true];
				_light_head = "Reflector_Cone_01_narrow_white_F" createVehicle [0,0,0];
				_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
				_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head,_flashlight],true]; 
				_light_head attachto [_unit,[0.02,-0.07,-0.01], "leftHand",true];     
				_volumetric_l attachto [_unit,[0.02,0,0], "leftHand",true];     
				[[_volumetric_l,_light_head], { 
					_y = 0;      
					_p = 0;      
					_r  = 0;     
					(_this select 0) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];   
					_y =  0;      
					_p = 180;      
					_r  = 0;     
					(_this select 1) setVectorDirAndUp [            
					 [sin _y * cos _p, cos _y * cos _p, sin _p],            
					 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D            
					];     
				 }] remoteExec ["call",0];
				[_unit, _light_head] spawn {
					while {!isNull (_this select 1)} do {
						if (gestureState (_this select 0) == "<none>") then {
							if (currentWeapon (_this select 0) == "" || currentWeapon (_this select 0) in IMS_Melee_Weapons) then {
							(_this select 0) playActionNow "WBK_leftHand_flashlight_unarmed";
							}else{
							(_this select 0) playActionNow "WBK_leftHand_flashlight";
							};
						};
						uiSleep 0.2;
					};
				};
				_unit spawn WBK_ForceFlashlightOff_HandHeld;
			};
		};
		case ("WBK_HeadLampItem_Double" in items _unit): {
			[_unit, "\WBK_Headlamps\headlamp_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_head_flashlight";
			_light_head = "Reflector_Cone_01_narrow_white_F" createVehicle [0,0,0];
			_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
			_light_head1 = "Reflector_Cone_01_narrow_white_F" createVehicle [0,0,0]; 
			_volumetric_2 = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
			_light_head1 attachto [_unit,[-0.17,0.041,0.22], "head",true];   
			_volumetric_2 attachto [_unit,[-0.17,-0.01,0.2], "head",true];    
			_light_head attachto [_unit,[0.05,0.041,0.22], "head",true];  
			_volumetric_l attachto [_unit,[0.05,-0.01,0.2], "head",true];  
			[_volumetric_l, {
				_y = 0;  
				_p = 190;  
				_r  = 80; 
				_this setVectorDirAndUp [        
				 [sin _y * cos _p, cos _y * cos _p, sin _p],        
				 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D        
				]; 
			}] remoteExec ["call", 0];
			[_volumetric_2, {
				_y = 0;  
				_p = 190;  
				_r  = 80; 
				_this setVectorDirAndUp [        
				 [sin _y * cos _p, cos _y * cos _p, sin _p],        
				 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D        
				]; 
			}] remoteExec ["call", 0];
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head,_volumetric_2,_light_head1],true]; 
			_unit spawn WBK_ForceFlashlightOff;
		};
		case ("WBK_HeadLampItem_Long" in items _unit): {
			[_unit, "\WBK_Headlamps\headlamp_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_head_flashlight";
			_light_head = "Reflector_Cone_01_long_white_F" createVehicle [0,0,0];
			_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			if (typeOf _unit isKindOf "TIOWSpaceMarine_Base") exitWith {
				_light_head attachto [_unit,[0.05,-0.13,0.12], "head",true];   
				_volumetric_l attachto [_unit,[0.04,-0.19,0.09], "head",true];    
				[[_volumetric_l,_light_head], { 
				 _y = -8;   
				 _p = 190;   
				 _r  = 80;  
				 (_this select 0) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];
				 _y = -5;   
				 _p = 10;   
				 _r  = 0;  
				 (_this select 1) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];  
				}] remoteExec ["call",0];
			}; 
			_light_head attachto [_unit,[0,0.041,0.22], "head",true];  
			_volumetric_l attachto [_unit,[0,-0.01,0.2], "head",true];   
			[[_volumetric_l,_light_head], { 
				 _y = -8;   
				 _p = 190;   
				 _r  = 80;  
				 (_this select 0) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];
				 _y = -5;   
				 _p = 10;   
				 _r  = 0;  
				 (_this select 1) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];  
				}] remoteExec ["call",0];
			_unit spawn WBK_ForceFlashlightOff;
		};
		case ("WBK_HeadLampItem_Narrow" in items _unit): {
			[_unit, "\WBK_Headlamps\headlamp_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_head_flashlight";
			_light_head = "Reflector_Cone_01_narrow_white_F" createVehicle [0,0,0];
			_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			if (typeOf _unit isKindOf "TIOWSpaceMarine_Base") exitWith {
				_light_head attachto [_unit,[0.05,-0.13,0.12], "head",true];   
				_volumetric_l attachto [_unit,[0.04,-0.19,0.09], "head",true];    
				[[_volumetric_l,_light_head], { 
				 _y = -8;   
				 _p = 190;   
				 _r  = 80;  
				 (_this select 0) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];
				 _y = -5;   
				 _p = 10;   
				 _r  = 0;  
				 (_this select 1) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];  
				}] remoteExec ["call",0];
			}; 
			_light_head attachto [_unit,[0,0.041,0.22], "head",true];  
			_volumetric_l attachto [_unit,[0,-0.01,0.2], "head",true];   
			[[_volumetric_l,_light_head], { 
				 _y = -8;   
				 _p = 190;   
				 _r  = 80;  
				 (_this select 0) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];
				 _y = -5;   
				 _p = 10;   
				 _r  = 0;  
				 (_this select 1) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];  
				}] remoteExec ["call",0];
			_unit spawn WBK_ForceFlashlightOff;
		};
		case ("WBK_LampItem_Red" in items _unit): {
			[_unit, "\WBK_Headlamps\lamp_on.ogg"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_lantern_flashlight";
			_light_head = "Lantern_01_red_F" createVehicle [0,0,0];
			_volumetric_l = "WBK_HeadLampLightObject_Orange" createVehicle [0,0,0];
			_light_head attachTo [_unit,[-0.21,-0.15,-0.15],"Pelvis",true]; 
			_volumetric_l attachto [_unit,[-0.21,-0.15,-0.15],"Pelvis",true]; 
			_light_head setDir 90;
			_light_head setDamage 1;
			[_light_head,{
				if (isDedicated) exitWith {};
				player disableCollisionWith _this;
			}] remoteExec ["spawn",0];
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			_unit spawn WBK_ForceFlashlightOff;
		};
		case ("WBK_LampItem_Green" in items _unit): {
			[_unit, "\WBK_Headlamps\lamp_on.ogg"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_lantern_flashlight";
			_light_head = "Lantern_01_green_F" createVehicle [0,0,0];
			_volumetric_l = "WBK_HeadLampLightObject_Orange" createVehicle [0,0,0];
			_light_head attachTo [_unit,[-0.21,-0.15,-0.15],"Pelvis",true]; 
			_volumetric_l attachto [_unit,[-0.21,-0.15,-0.15],"Pelvis",true]; 
			_light_head setDir 90;
			_light_head setDamage 1;
			[_light_head,{
				if (isDedicated) exitWith {};
				player disableCollisionWith _this;
			}] remoteExec ["spawn",0];
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			_unit spawn WBK_ForceFlashlightOff;
		};
		case ("WBK_LampItem_Blue" in items _unit): {
			[_unit, "\WBK_Headlamps\lamp_on.ogg"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_lantern_flashlight";
			_light_head = "Lantern_01_blue_F" createVehicle [0,0,0];
			_volumetric_l = "WBK_HeadLampLightObject_Orange" createVehicle [0,0,0];
			_light_head attachTo [_unit,[-0.21,-0.15,-0.15],"Pelvis",true]; 
			_volumetric_l attachto [_unit,[-0.21,-0.15,-0.15],"Pelvis",true]; 
			_light_head setDir 90;
			_light_head setDamage 1;
			[_light_head,{
				if (isDedicated) exitWith {};
				player disableCollisionWith _this;
			}] remoteExec ["spawn",0];
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			_unit spawn WBK_ForceFlashlightOff;
		};
		case ("WBK_LampItem_Black" in items _unit): {
			[_unit, "\WBK_Headlamps\lamp_on.ogg"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_lantern_flashlight";
			_light_head = "Lantern_01_black_F" createVehicle [0,0,0];
			_volumetric_l = "WBK_HeadLampLightObject_Orange" createVehicle [0,0,0];
			_light_head attachTo [_unit,[-0.21,-0.15,-0.15],"Pelvis",true]; 
			_volumetric_l attachto [_unit,[-0.21,-0.15,-0.15],"Pelvis",true]; 
			_light_head setDir 90;
			_light_head setDamage 1;
			[_light_head,{
				if (isDedicated) exitWith {};
				player disableCollisionWith _this;
			}] remoteExec ["spawn",0];
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			_unit spawn WBK_ForceFlashlightOff;
		};
		default {
			[_unit, "\WBK_Headlamps\headlamp_on.wav"] spawn WBK_FLASHLIGHT_PlaySound;
			_unit playActionNow "WBK_head_flashlight";
			_light_head = "WBK_HeadLampLightObject" createVehicle [0,0,0];
			_volumetric_l = createSimpleObject ["A3\data_f\VolumeLight_searchLightSmall", getPosASL _unit]; 
			_unit setVariable ["WBK_AttachedFlaslights",[_volumetric_l,_light_head],true]; 
			if (typeOf _unit isKindOf "TIOWSpaceMarine_Base") exitWith {
				_light_head attachto [_unit,[0.05,-0.13,0.12], "head",true];   
				_volumetric_l attachto [_unit,[0.04,-0.19,0.09], "head",true];    
				[[_volumetric_l,_light_head], { 
				 _y = -8;   
				 _p = 190;   
				 _r  = 80;  
				 (_this select 0) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];
				 _y = -5;   
				 _p = 10;   
				 _r  = 0;  
				 (_this select 1) setVectorDirAndUp [         
				  [sin _y * cos _p, cos _y * cos _p, sin _p],         
				  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
				 ];  
				}] remoteExec ["call",0];
			}; 
			_light_head attachto [_unit,[0,0.041,0.22], "head",true];  
			_volumetric_l attachto [_unit,[0,-0.01,0.2], "head",true];   
			[[_volumetric_l,_light_head], { 
			 _y = -8;   
			 _p = 190;   
			 _r  = 80;  
			 (_this select 0) setVectorDirAndUp [         
			  [sin _y * cos _p, cos _y * cos _p, sin _p],         
			  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
			 ];
			 _y = -5;   
			 _p = 10;   
			 _r  = 0;  
			 (_this select 1) setVectorDirAndUp [         
			  [sin _y * cos _p, cos _y * cos _p, sin _p],         
			  [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D         
			 ];  
			}] remoteExec ["call",0];
			_unit spawn WBK_ForceFlashlightOff;
		};
	};
};