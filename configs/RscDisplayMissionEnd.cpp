class RscDisplayMissionEnd: RscStandardDisplay
{
	effectTilesAlpha = 0.15;
	idd = 58;
	onLoad = "[""onLoad"",_this,""RscDisplayMissionEnd"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMissionEnd"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayMissionEnd";
	scriptPath = "GUI";
	class controls
	{
		class Black: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "safezoneH";
			idc = 1060;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class ButtonCancel: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "End";
			tooltip = "Abort current mission, return to menu.";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "20.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class ShortcutPos: ShortcutPos
			{
				left = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			};
		};
		class ButtonReturnToHub: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2403;
			onButtonClick = "endmission 'A';";
			text = "Camp Maxwell";
			tooltip = "Return to Camp Maxwell.";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "19.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_LoadAuto: RscButtonMenu
		{
			default = 1;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			text = "Load";
			tooltip = "Revert to a save or restart mission.";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "18.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class KeyHints
			{
				class A
				{
					hint = "";
					key = "0x00050000 + 0";
				};
			};
		};
		class CA_TeamSwitch: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 107;
			text = "Team Switch";
			tooltip = "Switch between opposing sides.";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "19.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class KeyHints
			{
				class A
				{
					hint = "";
					key = "0x00050000 + 0";
				};
			};
		};
		class MissionTitle: RscText
		{
			font = "RobotoCondensedLight";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 120;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "SafezoneW - (15 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class PlayersName: Title
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 109;
			style = 1;
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Title: RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 523;
			style = 0;
			text = "You died...";
			w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TraffLight: RscTrafficLight
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 121;
			show = 0;
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Version: RscText
		{
			font = "RobotoCondensedLight";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 1;
			w = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (13 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
	class controlsBackground
	{
		class Lock: RscPicture
		{
			h = 0;
			idc = 5800;
			w = 0;
			x = 0;
			y = 0;
		};
		class MissionNameBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = -1;
			w = "SafezoneW - (2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Sitrep: RscStructuredText
		{
			h = 0;
			idc = 5858;
			w = 0;
			x = 0;
			y = 0;
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			disableCustomColors = 1;
			h = "safezoneH";
			idc = 115099;
			onLoad = "[ctrlParent (_this select 0), ""RscDisplayMissionEnd""] call (uiNamespace getVariable 'BIS_fnc_guiEffectTiles')";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
			class Controls
			{
				class Tile_0_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115000;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_0_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115001;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_0_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115002;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_0_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115003;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_0_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115004;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_0_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115005;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_1_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115010;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_1_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115011;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_1_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115012;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_1_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115013;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_1_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115014;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_1_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115015;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_2_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115020;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_2_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115021;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_2_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115022;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_2_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115023;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_2_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115024;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_2_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115025;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_3_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115030;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_3_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115031;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_3_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115032;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_3_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115033;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_3_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115034;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_3_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115035;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_4_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115040;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_4_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115041;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_4_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115042;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_4_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115043;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_4_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115044;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_4_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115045;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_5_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115050;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_5_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115051;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_5_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115052;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_5_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115053;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_5_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115054;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_5_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115055;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class TileFrame: RscFrame
				{
					colortext[] = {0, 0, 0, 1};
					h = "safezoneH";
					idc = 114999;
					w = "safezoneW";
					x = 0;
					y = 0;
				};
			};
		};
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1050;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
