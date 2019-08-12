class RscDisplayMultiplayerSetupParameter: RscStandardDisplay
{
	idd = 147;
	onLoad = "[""onLoad"",_this,""RscDisplayMultiplayerSetupParameter"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMultiplayerSetupParameter"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayMultiplayerSetupParameter";
	scriptPath = "GUI";
	class controls
	{
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ButtonOK: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (7.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class LB_ParamsTitles: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "SafezoneH - (4.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 103;
			w = "SafezoneW - (2.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class PlayersName: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 109;
			shadow = 0;
			style = 1;
			w = "(11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.25*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (28 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.75*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 105;
			text = "";
			w = "(27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.75*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
	};
	class controlsBackground
	{
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "SafezoneH - (4.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1081;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class RscTitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
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
