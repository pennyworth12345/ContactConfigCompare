class RscDisplayCustomArcade: RscStandardDisplay
{
	enableDisplay = 1;
	idd = 25;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayCustomArcade"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayCustomArcade"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayCustomArcade";
	scriptPath = "GUI";
	class controls
	{
		class Button3DEN: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 106;
			text = "3D Editor";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonDelete: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Delete";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonEdit: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 103;
			text = "2D Editor";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonPlay: RscButtonMenuOK
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			text = "Play";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Game: RscTree
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "SafezoneH - (4.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 101;
			style = 2;
			w = "38 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Title: RscTitle
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 0;
			text = "ALL MISSIONS (FOR DESIGNERS)";
			w = "38 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
	};
	class ControlsBackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			h = "safezoneH";
			idc = 115099;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
			class Controls
			{
				class Background: RscText
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "safezoneH";
					idc = 114999;
					w = "safezoneWAbs";
					x = 0;
					y = 0;
				};
			};
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
