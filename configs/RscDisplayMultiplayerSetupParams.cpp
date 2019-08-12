class RscDisplayMultiplayerSetupParams: RscStandardDisplay
{
	idd = 146;
	onLoad = "[""onLoad"",_this,""RscDisplayMultiplayerSetupParams"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMultiplayerSetupParams"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayMultiplayerSetupParams";
	scriptPath = "GUI";
	class controls
	{
		class ButtonBack: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Back";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_B_Edit: RscButtonMenuOK
		{
			default = 0;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			text = "Edit";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (7.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_LB_ParamsTitles: RscListNBox
		{
			columns[] = {0, 0.7};
			default = 1;
			h = "SafezoneH - (4.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 102;
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
			w = "(27.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "Parameters";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
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
