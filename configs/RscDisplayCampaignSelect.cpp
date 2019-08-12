class RscDisplayCampaignSelect: RscStandardDisplay
{
	idd = 74;
	onLoad = "[""onLoad"",_this,""RscDisplayCampaignSelect"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayCampaignSelect"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayCampaignSelect";
	scriptPath = "GUI";
	class controls
	{
		class ButtonCancel: RscShortcutButton
		{
			default = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Back";
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonContinue: RscShortcutButton
		{
			default = 1;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			text = "Continue";
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "21 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Author: RscStructuredText
		{
			h = "1.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1102;
			w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "16.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Background: RscText
		{
			colorBackground[] = {0, 0, 0, 0.42};
			h = "7 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1002;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "2 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Campaign_Title: CA_Title
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 102;
			text = "Campaign";
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Campaigns: RscListBox
		{
			h = "15 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 101;
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "2.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Description: RscHTML
		{
			h = "15 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 103;
			w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "2.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_DescriptionStructured: RscStructuredText
		{
			h = "6.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1100;
			w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "9.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Picture: RscPicture
		{
			h = "7 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1200;
			w = "14 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "14 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "2 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
	class controlsBackground
	{
		class BcgCommon: RscBackgroundGUI
		{
			backgroundType = 0;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11000;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommon1: RscBackgroundGUI
		{
			backgroundType = 1;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 110001;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonBottom: RscBackgroundGUIBottom
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11001;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) 		 - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonBottom1: RscBackgroundGUIBottom
		{
			backgroundType = 1;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 110011;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonLeft: RscBackgroundGUILeft
		{
			backgroundType = 0;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11200;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonLeft1: RscBackgroundGUILeft
		{
			backgroundType = 1;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 112001;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonRight: RscBackgroundGUIRight
		{
			backgroundType = 0;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11201;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonRight1: RscBackgroundGUIRight
		{
			backgroundType = 1;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 112011;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonTop: RscBackgroundGUITop
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11002;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonTop1: RscBackgroundGUITop
		{
			backgroundType = 1;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 110021;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
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
