class RscDisplayCampaignMP: RscStandardDisplay
{
	done = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\done_ca.paa";
	idd = 176;
	none = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\none_ca.paa";
	onLoad = "[""onLoad"",_this,""RscDisplayCampaignMP"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayCampaignMP"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayCampaignMP";
	scriptPath = "GUI";
	class Controls
	{
		class Author: RscText
		{
			colorText[] = {1, 1, 1, 0.5};
			font = "RobotoCondensedLight";
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BriefingName: RscText
		{
			h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 103;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonBuyDLC: RscButtonMenuSteam
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 110;
			shortcuts[] = {"1024+0x19"};
			shpw = 0;
			text = "Purchase";
			tooltip = "Purchase the premium content package to play.";
			w = "(	11) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(39 - 	11) * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "22 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Back";
			w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "22 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonHost: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 108;
			text = "Host a game";
			w = "(	11) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(39 - 	11) * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonJoin: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 109;
			text = "Find a game";
			w = "(	11) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(39 - 	11) * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "22 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonSolo: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 107;
			text = "Play solo";
			w = "(	11 - 0.1) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(39 - 2 * 	11) * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class MissionsList: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0.7};
			colorPictureSelected[] = {0, 0, 0, 1};
			h = "19.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			w = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class OverviewControlsGroup: RscControlsGroup
		{
			h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class OverviewText: RscStructuredText
				{
					h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 106;
					w = "20.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
		};
		class OverviewGroup: RscControlsGroupNoScrollbars
		{
			h = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class OverviewPicture: RscPictureKeepAspect
				{
					h = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 105;
					text = "#(argb,8,8,3)color(0,0,0,0)";
					w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class controlsBackground
	{
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 999;
			style = 16;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class NameAndAuthorBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1082;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class OverviewTextBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1083;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class PictureBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1081;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
