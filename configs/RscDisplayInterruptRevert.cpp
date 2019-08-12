class RscDisplayInterruptRevert: RscStandardDisplay
{
	enableSimulation = 0;
	idd = 144;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayInterruptRevert"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayInterruptRevert"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayInterruptRevert";
	scriptPath = "GUI";
	class Controls
	{
		class CA_ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "20.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ButtonOK: RscButtonMenuOK
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "9.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "20.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_RevertTypes: RscListBox
		{
			h = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "13.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
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
			y = "12.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Title: RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			style = 0;
			text = "Load";
			w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "12.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
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
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "7.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = -1;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "13.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
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
		class Pause1: RscText
		{
			colorBackground[] = {1, 1, 1, 1};
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			shadow = 2;
			w = "0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Pause2: Pause1
		{
			idc = 1001;
			x = "safezoneX + safezoneW - 3.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			disableCustomColors = 1;
			h = "safezoneH";
			idc = 115099;
			onLoad = "[ctrlParent (_this select 0), ""RscDisplayInterruptRevert""] call (uiNamespace getVariable 'BIS_fnc_guiEffectTiles')";
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
			y = "12.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
