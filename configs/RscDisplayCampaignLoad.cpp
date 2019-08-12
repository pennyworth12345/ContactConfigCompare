class RscDisplayCampaignLoad: RscStandardDisplay
{
	done = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\done_ca.paa";
	enableSimulation = 1;
	idd = 43;
	none = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\none_ca.paa";
	notOwned = "A3\ui_f\data\GUI\Rsc\RscDisplaySingleMission\mission_notOwned_ca.paa";
	onLoad = "[""onLoad"",_this,""RscDisplayCampaignLoad"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayCampaignLoad"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	played = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\played_ca.paa";
	scriptName = "RscDisplayCampaignLoad";
	scriptPath = "GUI";
	class controls
	{
		class Author: RscText
		{
			colorText[] = {1, 1, 1, 0.5};
			font = "RobotoCondensedLight";
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 105;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class BriefingName: RscText
		{
			h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ButtonBuyDLC: RscButtonMenuSteam
		{
			colorBackground[] = {0.0313726, 0.721569, 0.917647, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 110;
			shortcuts[] = {"1024+0x19"};
			text = "Purchase";
			tooltip = "Purchase the premium content package to play.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Back";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonGameOptions: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 307;
			text = "Game Options";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonMPCampaign: ButtonOK
		{
			default = 0;
			idc = 1020;
			onButtonClick = "";
			show = 0;
			text = "Open";
		};
		class ButtonOK: RscButtonMenuOK
		{
			default = 1;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			text = "Continue";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonRevert: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Revert";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class MissionsTree: RscTree
		{
			colorBackground[] = {0, 0, 0, 0.7};
			expandOnDoubleclick = 1;
			h = "SafezoneH - (5.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 101;
			idcSearch = 645;
			w = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class OverviewControlsGroup: RscControlsGroup
		{
			h = "SafezoneH - (18.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2301;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (15.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			class controls
			{
				class EstimatedDeployment: RscStructuredText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 108;
					text = "<br /><t align='center' color='#999999'>FREE TIME REMAINING</t><br /><br />";
					w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OverviewText: RscStructuredText
				{
					h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 107;
					w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ReleaseDate: RscHTML
				{
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 109;
					w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			class controls
			{
				class DLCIcon: RscPicture
				{
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 112;
					text = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DLCStripe: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 111;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplaySingleMission\Stripe_ca.paa";
					w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OverviewNoise: RscPicture
				{
					h = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					text = "#(argb,8,8,3)color(0,0,0,0)";
					w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OverviewPicture: RscPictureKeepAspect
				{
					h = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 106;
					text = "#(argb,8,8,3)color(0,0,0,0)";
					w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
		class PlayersName: Title
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 8434;
			style = 1;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Search: RscEdit
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 645;
			w = "14.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class SearchBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			w = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class SearchButton: RscButtonSearch
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 646;
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Title: RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			style = 0;
			text = "Campaigns";
			w = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ValueDifficulty: RscStructuredText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 103;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
	class controlsBackground
	{
		class NameAndAuthorBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1082;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class OverviewTextBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "7.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (1 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
			idc = 1083;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (15.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class PictureBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1081;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
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
		class TitleBackground2: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
