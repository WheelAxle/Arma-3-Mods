class CfgPatches
{
	class AX_remove_hud_elements_cpp
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder"
		};
		Author="Axle";
	};
};
class RscActiveText;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscPicture;
class RscText;
class RscInGameUI
{
	class RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft: RscControlsGroup
		{
			class controls
			{
				class CA_AmmoCount: RscText
				{
					idc=184;
					style=1;
					colorText[]=
					{
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
					};
					x="";
					y="";
					w="";
					h="";
					sizeEx="1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
};
class RscDisplayMainMap
{
	class controls
	{
		class TopRight: RscControlsGroup
		{
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					onbuttonclick="";
					style=48;
					color[]={1,1,1,0.69999999};
					idc=1202;
					text="";
					x="";
					y="";
					w="";
					h="";
					colorText[]={1,1,1,0.69999999};
					colorActive[]={1,1,1,1};
					tooltip="";
				};
				class ButtonTextures: RscActiveText
				{
					x="18.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Separator2: RscPicture
				{
					idc=1204;
					text="";
					x="";
					y="";
					w="";
					h="";
				};
				class Clock: RscText
				{
					idc=101;
					style=0;
					shadow=0;
					font="RobotoCondensedLight";
					x="";
					y="";
					w="";
					h="";
					colorText[]={1,1,1,0.69999999};
					sizeEx="";
				};
			};
		};
	};
};
class RscDisplayDiary
{
	class controls
	{
		class TopRight: RscControlsGroup
		{
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					onbuttonclick="";
					style=48;
					color[]={1,1,1,0.69999999};
					idc=1202;
					text="";
					x="";
					y="";
					w="";
					h="";
					colorText[]={1,1,1,0.69999999};
					colorActive[]={1,1,1,1};
					tooltip="";
				};
				class ButtonTextures: RscActiveText
				{
					x="18.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Separator2: RscPicture
				{
					idc=1204;
					text="";
					x="";
					y="";
					w="";
					h="";
				};
				class Clock: RscText
				{
					idc=101;
					style=0;
					shadow=0;
					font="RobotoCondensedLight";
					x="";
					y="";
					w="";
					h="";
					colorText[]={1,1,1,0.69999999};
					sizeEx="";
				};
			};
		};
	};
};
class RscDisplayGetReady: RscDisplayMainMap
{
	class controls
	{
		class TopRight: RscControlsGroup
		{
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					onbuttonclick="";
					style=48;
					color[]={1,1,1,0.69999999};
					idc=1202;
					text="";
					x="";
					y="";
					w="";
					h="";
					colorText[]={1,1,1,0.69999999};
					colorActive[]={1,1,1,1};
					tooltip="";
				};
				class ButtonTextures: RscActiveText
				{
					x="18.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Separator2: RscPicture
				{
					idc=1204;
					text="";
					x="";
					y="";
					w="";
					h="";
				};
				class Clock: RscText
				{
					idc=101;
					style=0;
					shadow=0;
					font="RobotoCondensedLight";
					x="";
					y="";
					w="";
					h="";
					colorText[]={1,1,1,0.69999999};
					sizeEx="";
				};
			};
		};
	};
};
class RscDisplayServerGetReady: RscDisplayGetReady
{
	class controls
	{
		class TopRight: RscControlsGroup
		{
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					onbuttonclick="";
					style=48;
					color[]={1,1,1,0.69999999};
					idc=1202;
					text="";
					x="";
					y="";
					w="";
					h="";
					colorText[]={1,1,1,0.69999999};
					colorActive[]={1,1,1,1};
					tooltip="";
				};
				class ButtonTextures: RscActiveText
				{
					x="18.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Separator2: RscPicture
				{
					idc=1204;
					text="";
					x="";
					y="";
					w="";
					h="";
				};
				class Clock: RscText
				{
					idc=101;
					style=0;
					shadow=0;
					font="RobotoCondensedLight";
					x="";
					y="";
					w="";
					h="";
					colorText[]={1,1,1,0.69999999};
					sizeEx="";
				};
			};
		};
	};
};
class RscDisplayClientGetReady: RscDisplayGetReady
{
	class controls
	{
	};
};
class RscFrame;
class RscStandardDisplay;
class RscDisplayMissionEnd: RscStandardDisplay
{
	class controlsBackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class TileFrame: RscFrame
				{
					idc=114999;
					x=0;
					y=0;
					w="safezoneW";
					h="safezoneH";
					colortext[]={0,0,0,0};
				};
				class Tile_0_0: RscText
				{
					idc=115000;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_1: RscText
				{
					idc=115001;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_2: RscText
				{
					idc=115002;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_3: RscText
				{
					idc=115003;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_4: RscText
				{
					idc=115004;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_5: RscText
				{
					idc=115005;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_0: RscText
				{
					idc=115010;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_1: RscText
				{
					idc=115011;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_2: RscText
				{
					idc=115012;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_3: RscText
				{
					idc=115013;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_4: RscText
				{
					idc=115014;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_5: RscText
				{
					idc=115015;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_0: RscText
				{
					idc=115020;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_1: RscText
				{
					idc=115021;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_2: RscText
				{
					idc=115022;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_3: RscText
				{
					idc=115023;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_4: RscText
				{
					idc=115024;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_5: RscText
				{
					idc=115025;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_0: RscText
				{
					idc=115030;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_1: RscText
				{
					idc=115031;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_2: RscText
				{
					idc=115032;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_3: RscText
				{
					idc=115033;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_4: RscText
				{
					idc=115034;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_5: RscText
				{
					idc=115035;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_0: RscText
				{
					idc=115040;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_1: RscText
				{
					idc=115041;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_2: RscText
				{
					idc=115042;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_3: RscText
				{
					idc=115043;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_4: RscText
				{
					idc=115044;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_5: RscText
				{
					idc=115045;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_0: RscText
				{
					idc=115050;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_1: RscText
				{
					idc=115051;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_2: RscText
				{
					idc=115052;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_3: RscText
				{
					idc=115053;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_4: RscText
				{
					idc=115054;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_5: RscText
				{
					idc=115055;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
			};
		};
	};
};
class RscDisplayInterrupt: RscStandardDisplay
{
	class controlsBackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class TileFrame: RscFrame
				{
					idc=114999;
					x=0;
					y=0;
					w="safezoneW";
					h="safezoneH";
					colortext[]={0,0,0,0};
				};
				class Tile_0_0: RscText
				{
					idc=115000;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_1: RscText
				{
					idc=115001;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_2: RscText
				{
					idc=115002;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_3: RscText
				{
					idc=115003;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_4: RscText
				{
					idc=115004;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_5: RscText
				{
					idc=115005;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_0: RscText
				{
					idc=115010;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_1: RscText
				{
					idc=115011;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_2: RscText
				{
					idc=115012;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_3: RscText
				{
					idc=115013;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_4: RscText
				{
					idc=115014;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_5: RscText
				{
					idc=115015;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_0: RscText
				{
					idc=115020;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_1: RscText
				{
					idc=115021;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_2: RscText
				{
					idc=115022;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_3: RscText
				{
					idc=115023;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_4: RscText
				{
					idc=115024;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_5: RscText
				{
					idc=115025;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_0: RscText
				{
					idc=115030;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_1: RscText
				{
					idc=115031;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_2: RscText
				{
					idc=115032;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_3: RscText
				{
					idc=115033;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_4: RscText
				{
					idc=115034;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_5: RscText
				{
					idc=115035;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_0: RscText
				{
					idc=115040;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_1: RscText
				{
					idc=115041;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_2: RscText
				{
					idc=115042;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_3: RscText
				{
					idc=115043;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_4: RscText
				{
					idc=115044;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_5: RscText
				{
					idc=115045;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_0: RscText
				{
					idc=115050;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_1: RscText
				{
					idc=115051;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_2: RscText
				{
					idc=115052;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_3: RscText
				{
					idc=115053;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_4: RscText
				{
					idc=115054;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_5: RscText
				{
					idc=115055;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
			};
		};
	};
};
class RscDisplayInterruptRevert: RscStandardDisplay
{
	class controlsBackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class TileFrame: RscFrame
				{
					idc=114999;
					x=0;
					y=0;
					w="safezoneW";
					h="safezoneH";
					colortext[]={0,0,0,0};
				};
				class Tile_0_0: RscText
				{
					idc=115000;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_1: RscText
				{
					idc=115001;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_2: RscText
				{
					idc=115002;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_3: RscText
				{
					idc=115003;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_4: RscText
				{
					idc=115004;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_5: RscText
				{
					idc=115005;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_0: RscText
				{
					idc=115010;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_1: RscText
				{
					idc=115011;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_2: RscText
				{
					idc=115012;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_3: RscText
				{
					idc=115013;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_4: RscText
				{
					idc=115014;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_5: RscText
				{
					idc=115015;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_0: RscText
				{
					idc=115020;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_1: RscText
				{
					idc=115021;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_2: RscText
				{
					idc=115022;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_3: RscText
				{
					idc=115023;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_4: RscText
				{
					idc=115024;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_5: RscText
				{
					idc=115025;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_0: RscText
				{
					idc=115030;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_1: RscText
				{
					idc=115031;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_2: RscText
				{
					idc=115032;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_3: RscText
				{
					idc=115033;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_4: RscText
				{
					idc=115034;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_5: RscText
				{
					idc=115035;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_0: RscText
				{
					idc=115040;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_1: RscText
				{
					idc=115041;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_2: RscText
				{
					idc=115042;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_3: RscText
				{
					idc=115043;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_4: RscText
				{
					idc=115044;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_5: RscText
				{
					idc=115045;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_0: RscText
				{
					idc=115050;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_1: RscText
				{
					idc=115051;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_2: RscText
				{
					idc=115052;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_3: RscText
				{
					idc=115053;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_4: RscText
				{
					idc=115054;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_5: RscText
				{
					idc=115055;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
			};
		};
	};
};
class RscDisplayMPInterrupt: RscStandardDisplay
{
	class controlsBackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class TileFrame: RscFrame
				{
					idc=114999;
					x=0;
					y=0;
					w="safezoneW";
					h="safezoneH";
					colortext[]={0,0,0,0};
				};
				class Tile_0_0: RscText
				{
					idc=115000;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_1: RscText
				{
					idc=115001;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_2: RscText
				{
					idc=115002;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_3: RscText
				{
					idc=115003;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_4: RscText
				{
					idc=115004;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_5: RscText
				{
					idc=115005;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_0: RscText
				{
					idc=115010;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_1: RscText
				{
					idc=115011;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_2: RscText
				{
					idc=115012;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_3: RscText
				{
					idc=115013;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_4: RscText
				{
					idc=115014;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_5: RscText
				{
					idc=115015;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_0: RscText
				{
					idc=115020;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_1: RscText
				{
					idc=115021;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_2: RscText
				{
					idc=115022;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_3: RscText
				{
					idc=115023;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_4: RscText
				{
					idc=115024;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_5: RscText
				{
					idc=115025;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_0: RscText
				{
					idc=115030;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_1: RscText
				{
					idc=115031;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_2: RscText
				{
					idc=115032;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_3: RscText
				{
					idc=115033;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_4: RscText
				{
					idc=115034;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_5: RscText
				{
					idc=115035;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_0: RscText
				{
					idc=115040;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_1: RscText
				{
					idc=115041;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_2: RscText
				{
					idc=115042;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_3: RscText
				{
					idc=115043;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_4: RscText
				{
					idc=115044;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_5: RscText
				{
					idc=115045;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_0: RscText
				{
					idc=115050;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_1: RscText
				{
					idc=115051;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_2: RscText
				{
					idc=115052;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_3: RscText
				{
					idc=115053;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_4: RscText
				{
					idc=115054;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_5: RscText
				{
					idc=115055;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
			};
		};
	};
};
class RscDisplayMovieInterrupt: RscStandardDisplay
{
	class controlsBackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			onLoad="";
		};
	};
};
class RscDisplayORBAT
{
	class Controls
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class TileFrame: RscFrame
				{
					idc=114999;
					x=0;
					y=0;
					w="safezoneW";
					h="safezoneH";
					colortext[]={0,0,0,0};
				};
				class Tile_0_0: RscText
				{
					idc=115000;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_1: RscText
				{
					idc=115001;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_2: RscText
				{
					idc=115002;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_3: RscText
				{
					idc=115003;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_4: RscText
				{
					idc=115004;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_5: RscText
				{
					idc=115005;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_0: RscText
				{
					idc=115010;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_1: RscText
				{
					idc=115011;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_2: RscText
				{
					idc=115012;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_3: RscText
				{
					idc=115013;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_4: RscText
				{
					idc=115014;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_5: RscText
				{
					idc=115015;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_0: RscText
				{
					idc=115020;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_1: RscText
				{
					idc=115021;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_2: RscText
				{
					idc=115022;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_3: RscText
				{
					idc=115023;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_4: RscText
				{
					idc=115024;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_5: RscText
				{
					idc=115025;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_0: RscText
				{
					idc=115030;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_1: RscText
				{
					idc=115031;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_2: RscText
				{
					idc=115032;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_3: RscText
				{
					idc=115033;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_4: RscText
				{
					idc=115034;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_5: RscText
				{
					idc=115035;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_0: RscText
				{
					idc=115040;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_1: RscText
				{
					idc=115041;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_2: RscText
				{
					idc=115042;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_3: RscText
				{
					idc=115043;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_4: RscText
				{
					idc=115044;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_5: RscText
				{
					idc=115045;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_0: RscText
				{
					idc=115050;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_1: RscText
				{
					idc=115051;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_2: RscText
				{
					idc=115052;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_3: RscText
				{
					idc=115053;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_4: RscText
				{
					idc=115054;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_5: RscText
				{
					idc=115055;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
			};
		};
	};
};
class RscDisplayStrategicMap
{
	class Controls
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class TileFrame: RscFrame
				{
					idc=114999;
					x=0;
					y=0;
					w="safezoneW";
					h="safezoneH";
					colortext[]={0,0,0,0};
				};
				class Tile_0_0: RscText
				{
					idc=115000;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_1: RscText
				{
					idc=115001;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_2: RscText
				{
					idc=115002;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_3: RscText
				{
					idc=115003;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_4: RscText
				{
					idc=115004;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_0_5: RscText
				{
					idc=115005;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_0: RscText
				{
					idc=115010;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_1: RscText
				{
					idc=115011;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_2: RscText
				{
					idc=115012;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_3: RscText
				{
					idc=115013;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_4: RscText
				{
					idc=115014;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_1_5: RscText
				{
					idc=115015;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_0: RscText
				{
					idc=115020;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_1: RscText
				{
					idc=115021;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_2: RscText
				{
					idc=115022;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_3: RscText
				{
					idc=115023;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_4: RscText
				{
					idc=115024;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_2_5: RscText
				{
					idc=115025;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_0: RscText
				{
					idc=115030;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_1: RscText
				{
					idc=115031;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_2: RscText
				{
					idc=115032;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_3: RscText
				{
					idc=115033;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_4: RscText
				{
					idc=115034;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_3_5: RscText
				{
					idc=115035;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_0: RscText
				{
					idc=115040;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_1: RscText
				{
					idc=115041;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_2: RscText
				{
					idc=115042;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_3: RscText
				{
					idc=115043;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_4: RscText
				{
					idc=115044;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_4_5: RscText
				{
					idc=115045;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_0: RscText
				{
					idc=115050;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_1: RscText
				{
					idc=115051;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_2: RscText
				{
					idc=115052;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_3: RscText
				{
					idc=115053;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_4: RscText
				{
					idc=115054;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
				class Tile_5_5: RscText
				{
					idc=115055;
					x="";
					y="";
					w="";
					h="";
					colorBackground[]={0,0,0,0};
				};
			};
		};
	};
};
