class cfgPatches
{
	class mute_ui
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder"
		};
	};
};

class CfgFunctions
{
	class A3
	{
		class Respawn
		{
			delete respawnNone;
		};
	};
	class Mute_UI
	{
		tag = "BIS";
		class a3_modded
		{
			file = "\mute_ui\Functions";
			class respawnNone
			{	
			};
		};
	};
};

class cfgMusic
{
	class EventTrack01_F_Curator
	{
		sound[] = {"", 1, 1};
	};
	class EventTrack02_F_Curator
	{
		sound[] = {"", 1, 1};
	};
	class EventTrack03_F_Curator
	{
		sound[] = {"", 1, 1};
	};
};

class RscButton
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
class RscShortcutButton
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
class RscButtonMenu: RscShortcutButton
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
class RscButtonMenuOK: RscButtonMenu
{
    soundPush[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscListBox
{
    soundSelect[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscXListBox
{
	soundSelect[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscActiveText
{
	soundEnter[]=
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
	soundClick[]=
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
};
class RscCombo
{
    soundSelect[]=
	{
		"",
		0.1,
		1
	};
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
};
class RscButtonNoColor: RscButton
{
	soundEnter[]=
	{
		"",
		0.5,
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
		0.5,
		1
	};
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class RscDisplayCampaignLobby
{
    class ControlsBackground
	{

    };
};
class RscTestControlTypes
{
    class Controls
	{
		class _CT_BUTTON
		{
            soundClick[]=
			{
				"",
				0.090000004,
				1
			};
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
			soundEscape[]=
			{
				"",
				0.090000004,
				1
			};
        };
        class _CT_COMBO
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
        class _CT_ACTIVETEXT
		{
		};
		class _CT_LISTBOX
		{
            soundSelect[]=
			{
				"",
				0.090000004,
				1
			};
        };
        class _CT_SHORTCUTBUTTON
		{
            soundClick[]=
			{
				"",
				0.090000004,
				1
			};
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
			soundEscape[]=
			{
				"",
				0.090000004,
				1
			};
        };
        class _CT_XBUTTON
		{
            soundClick[]=
			{
				"",
				0.090000004,
				1
			};
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
			soundEscape[]=
			{
				"",
				0.090000004,
				1
			};
        };
        class _CT_XLISTBOX
		{
            soundSelect[]=
			{
				"",
				0.090000004,
				1
			};
        };
        class _CT_XCOMBO
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
        class _CT_LISTNBOX
		{
            soundSelect[]=
			{
				"",
				0.090000004,
				1
			};
        };
        class _CT_CHECKBOX
		{
            soundClick[]=
			{
				"",
				0.090000004,
				1
			};
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
			soundEscape[]=
			{
				"",
				0.090000004,
				1
			};
        };
        class _ST_UPPERCASE
		{
            soundClick[]=
			{
				"",
				0.090000004,
				1
			};
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
			soundEscape[]=
			{
				"",
				0.090000004,
				1
			};
        };
    };
};
class ctrlDefault
{
};
class ctrlCheckbox: ctrlDefault
{
	soundClick[]=
	{
		"",
		0.090000004,
		1
	};
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
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};
class ctrlDefaultText: ctrlDefault
{
};
class ctrlDefaultButton: ctrlDefaultText
{
	soundClick[]=
	{
		"",
		0.090000004,
		1
	};
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
	soundEscape[]=
	{
		"",
		0.090000004,
		1
	};
};

class CfgSounds
{
    class hintExpand
	{
		sound[]=
		{
			"",
			0.89125091,
			1
		};
		titles[]={};
	};
	class hint
	{
		sound[]=
		{
			"",
			0.89125091,
			1
		};
		titles[]={};
	};
	class hintCollapse
	{
		sound[]=
		{
			"",
			0.89125091,
			1
		};
		titles[]={};
	};
	class taskAssigned
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskCanceled
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskCreated
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskFailed
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskSucceeded
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class taskUpdated
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
    class defaultNotification
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class defaultNotificationClose
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class scoreAdded
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class scoreRemoved
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class sectorCaptured
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class sectorLost
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class skirmishEntering
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class skirmishLeaving
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class TacticalPing
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class TacticalPing2
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class TacticalPing3
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class TacticalPing4
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
    class readoutClick
	{
		sound[]=
		{
			"",
			0.89125091,
			1
		};
		titles[]={};
	};
	class ReadoutHideClick2
	{
		sound[]=
		{
			"",
			0.31622776,
			1
		};
		titles[]={};
	};
	class ReadoutHideClick1
	{
		sound[]=
		{
			"",
			0.31622776,
			1
		};
		titles[]={};
	};
	class soundEscape
	{
		sound[]=
		{
			"",
			0.090000004,
			1
		};
		titles[]={};
	};
	class soundPush
	{
		sound[]=
		{
			"",
			0.090000004,
			1
		};
		titles[]={};
	};
	class soundClick
	{
		sound[]=
		{
			"",
			0.090000004,
			1
		};
		titles[]={};
	};
	class soundEnter
	{
		sound[]=
		{
			"",
			0.090000004,
			1
		};
		titles[]={};
	};
	class soundExpand
	{
		sound[]=
		{
			"",
			0.1,
			1
		};
		titles[]={};
	};
	class soundSelect
	{
		sound[]=
		{
			"",
			0.1,
			1
		};
		titles[]={};
	};
	class soundCollapse
	{
		sound[]=
		{
			"",
			0.1,
			1
		};
		titles[]={};
	};
	class RscTilesGroup_Expand
	{
		sound[]=
		{
			"",
			0.0017782792,
			1
		};
		titles[]={};
	};
	class RscTilesGroup_Collapse
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
class CfgInGameUI
{
	class Hint
	{
		sound[]=
		{
			"",
			0.056234129,
			1
		};
	};
};