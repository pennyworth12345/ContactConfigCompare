class RscDisplaySingleMission: RscStandardDisplay
{
	done = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\done_ca.paa";
	donePlayed = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\done_ca.paa";
	idd = 2;
	locked = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\locked_ca.paa";
	none = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\none_ca.paa";
	nonePlayed = "a3\ui_f\data\gui\rsc\rscdisplaysinglemission\played_ca.paa";
	notOwned = "A3\ui_f\data\GUI\Rsc\RscDisplaySingleMission\mission_notOwned_ca.paa";
	onChildDestroyed = "		_nextMission = uinamespace getvariable ['RscDisplaySingleMission_nextMission',''];_nextMission call bis_fnc_log;		if (ctrlidd (_this select 1) == 50 && _nextMission != '') then {(_this select 0) closedisplay 2; playMission['',_nextMission];};	";
	onLoad = "[""onLoad"",_this,""RscDisplaySingleMission"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplaySingleMission"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	overviewText = " ";
	package = "";
	picture = "A3\missions_f\data\overview_template_ca.paa";
	scriptName = "RscDisplaySingleMission";
	scriptPath = "GUI";
	class controls
	{
		class Author: RscText
		{
			colorText[] = {1, 1, 1, 0.5};
			font = "RobotoCondensedLight";
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 111;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class BriefingName: RscText
		{
			h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 110;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ButtonBuyDLC: RscButtonMenuSteam
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 120;
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
			text = "Back";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonContinue: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Continue";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonGameOptions: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 307;
			text = "Game Options";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.35 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonLoad: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 105;
			shortcuts[] = {"0x00050000 + 2"};
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonSteamWorkshop: RscButtonMenuSteam
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 117;
			text = "Workshop";
			tooltip = "Opens game workshop to browse and subscribe new content.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20.05 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_B_COPY: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 108;
			shortcuts[] = {"0x00050000 + 11"};
			text = "Copy";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_B_DELETE: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 107;
			shortcuts[] = {"0x00050000 + 11"};
			text = "Delete";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_B_EDIT: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 109;
			shortcuts[] = {"0x00050000 + 10"};
			text = "Edit";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class MissionsTree: RscTree
		{
			colorBackground[] = {0, 0, 0, 0.7};
			expandOnDoubleclick = 1;
			h = "SafezoneH - (6.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 101;
			idcSearch = 645;
			w = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
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
				class OverviewText: RscStructuredText
				{
					h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 113;
					w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
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
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			class controls
			{
				class DLCIcon: RscPicture
				{
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 122;
					text = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DLCStripe: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 121;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplaySingleMission\Stripe_ca.paa";
					w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OverviewNoise: RscPicture
				{
					colorText[] = {1, 1, 1, 0.2};
					h = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					text = "#(argb,8,8,3)color(1,1,1,1)";
					w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
					y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				};
				class OverviewPicture: RscPictureKeepAspect
				{
					h = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 112;
					text = "#(argb,8,8,3)color(0,0,0,0)";
					w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
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
			y = "SafezoneY + (3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class SearchBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			w = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class SearchButton: RscButtonSearch
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 646;
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class SortCombo: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 118;
			w = "14.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class SortOrder: RscCheckBox
		{
			colorBackground[] = {0, 0, 0, 0.7};
			colorBackgroundDisabled[] = {0, 0, 0, 0.7};
			colorBackgroundFocused[] = {0, 0, 0, 0.7};
			colorBackgroundHover[] = {0, 0, 0, 0.7};
			colorBackgroundPressed[] = {0, 0, 0, 0.7};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 119;
			textureChecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_down_ca.paa";
			textureDisabledChecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_down_ca.paa";
			textureDisabledUnchecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			textureFocusedChecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_down_ca.paa";
			textureFocusedUnchecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			textureHoverChecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_down_ca.paa";
			textureHoverUnchecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			texturePressedChecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_down_ca.paa";
			texturePressedUnchecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			textureUnchecked = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextLoading: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 114;
			text = "Loading picture ...";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "25.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Title: RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 106;
			style = 0;
			text = "Scenarios";
			w = "15.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ValueDifficulty: RscStructuredText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			shadow = 0;
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
		class TitleBackground: RscText
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
