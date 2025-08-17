class CfgPatches
{
	class wbk_shoulderlight_ax
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"WBK_Headlamps"
		};
		requiredVersion=0.1;
		author="Axle";
		skipwhenmissingdependencies=1;
	}; 
};

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class WBK_HeadLampItem: ItemCore {};
	class WBK_ShoulderLampItem_Weak: WBK_HeadLampItem {};
	class AX_ShoulderLampItem_Weak: WBK_ShoulderLampItem_Weak
	{
		scope=1;
		class ItemInfo: InventoryItem_Base_F
		{
			mass=0;
			scope=1;
			type=620;
		};
	};
	class AX_ShoulderLampItem_Regular: AX_ShoulderLampItem_Weak
	{
		scope=1;
		displayName="Shoulder flashlight (Regular)";
	};
	class AX_ShoulderLampItem_Strong: AX_ShoulderLampItem_Weak
	{
		scope=1;
		displayName="Shoulder flashlight (Strong)";
	};
};

class Extended_PreInit_EventHandlers
{
	class AX_Lights_PreInit
	{
		init="call compile preprocessFileLineNumbers '\sog_wbk_shoulderlight\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class AX_Lights_PostInit
	{
		init="call compile preprocessFileLineNumbers '\sog_wbk_shoulderlight\XEH_postInit.sqf'";
	};
};