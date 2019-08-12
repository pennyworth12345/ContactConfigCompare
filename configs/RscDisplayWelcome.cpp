class RscDisplayWelcome
{
	idd = 999999;
	onLoad = "[""onLoad"",_this,""RscDisplayWelcome"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayWelcome"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayWelcome";
	scriptPath = "GUI";
	class controls
	{
		class ButtonContinue: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Continue";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class MainControlsGroup: RscControlsGroupNoHScrollbars
		{
			h = "20.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class ButtonSpoiler: RscButtonMenu
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 2400;
					text = "Show Spoiler";
					w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SpoilerText: RscStructuredText
				{
					h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1101;
					w = "37 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class WelcomeHTML: RscHTML
				{
					h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					w = "37 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class WelcomeStructuredText1: RscStructuredText
				{
					h = "7.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1100;
					w = "37 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class WelcomeStructuredText2: RscStructuredText
				{
					h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1102;
					w = "37 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "14 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			style = 0;
			text = "Welcome!";
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "2 * 	10";
			w = "safezoneX + 	10";
			x = "-	10";
			y = "-	10";
		};
		class BackgroundRight: BackgroundLeft
		{
			w = 10;
			x = "safezoneX + safezoneW";
		};
		class Picture: RscPicture
		{
			h = "safezoneW * 4/3";
			idc = 998;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\backgroundGrey.jpg";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class RightBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "20.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1081;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
};
