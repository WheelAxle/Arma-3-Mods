class CfgPatches
{
	class mute_ui_sog
	{
		addonRootClass = "mute_ui";
        requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"A3_Data_F_Decade_Loadorder",
			"loadorder_f_vietnam"
		};
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class functions_f_vietnam
	{
		class vn_respawn_functions
		{
			delete respawn_none;
		};
	};
	class Mute_UI_SOG
	{
		tag = "VN";
		class sog_functions_modded
		{
			file = "\mute_ui\SOG\Functions";
			class respawn_none
			{
			};
		};
	};
};

class vn_RscListNBox
{
	soundSelect[]=
	{
		"",
		0.090000004,
		1
	};
};
class vn_RscListBox
{
	soundSelect[]=
	{
		"",
		0.090000004,
		1
	};
};
class vn_RscButton
{
	soundEnter[]=
	{
		"",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class vn_RscButton_ImgSwitch
{
	soundClick[]=
	{
		"",
		0.1,
		1
	};
	soundEnter[]=
	{
		"",
		0.1,
		1
	};
	soundEscape[]=
	{
		"",
		0.1,
		1
	};
	soundPush[]=
	{
		"",
		0.1,
		1
	};
};
class vn_RscCombo
{
	soundExpand[]=
	{
		"",
		0.1,
		1
	};
	soundCollapse[]=
	{
		"",
		0.1,
		1
	};
	soundSelect[]=
	{
		"",
		0.1,
		1
	};
};
class vn_RscShortcutButton
{
	soundEnter[]=
	{
		"",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class vn_RscButtonMenu: vn_RscShortcutButton
{
	soundEnter[]=
	{
		"",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};

class cfgSounds
{
	class hintexpand
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class hint
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class click
	{
		sound[]=
		{
			"",
			0.090000004,
			1
		};
		titles[]={};
	};
	class hintcollapse
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskcanceled
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskcreated
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskfailed
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class tasksucceeded
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskupdated
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class tridentAllies
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class tridentEnemies
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class addItemFailed
	{
		sound[]=
		{
			"",
			0.31622776,
			1
		};
		titles[]={};
	};
	class addItemOK
	{
		sound[]=
		{
			"",
			0.31622776,
			1
		};
		titles[]={};
	};
	class communicationMenuItemAdded
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class defaultnotification
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class defaultnotificationclose
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class scoreadded
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class scoreremoved
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class sectorcaptured
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class sectorlost
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class skirmishentering
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class skirmishleaving
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class tacticalping
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class tacticalping2
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class tacticalping3
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class tacticalping4
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskassigned
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class readoutclick
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class readouthideclick2
	{
		sound[]=
		{
			"",
			0.31622776,
			1
		};
		titles[]={};
	};
	class readouthideclick1
	{
		sound[]=
		{
			"",
			0.31622776,
			1
		};
		titles[]={};
	};
	class soundescape
	{
		sound[]=
		{
			"",
			0.090000004,
			1
		};
		titles[]={};
	};
	class soundpush
	{
		sound[]=
		{
			"",
			0.090000004,
			1
		};
		titles[]={};
	};
	class soundclick
	{
		sound[]=
		{
			"",
			0.090000004,
			1
		};
		titles[]={};
	};
	class soundenter
	{
		sound[]=
		{
			"",
			0.090000004,
			1
		};
		titles[]={};
	};
	class soundexpand
	{
		sound[]=
		{
			"",
			0.1,
			1
		};
		titles[]={};
	};
	class soundselect
	{
		sound[]=
		{
			"",
			0.1,
			1
		};
		titles[]={};
	};
	class soundcollapse
	{
		sound[]=
		{
			"",
			0.1,
			1
		};
		titles[]={};
	};
	class rsctilesgroup_expand
	{
		sound[]=
		{
			"",
			0.0017782792,
			1
		};
		titles[]={};
	};
	class rsctilesgroup_collapse
	{
		sound[]=
		{
			"",
			0.0017782792,
			1
		};
		titles[]={};
	};
};