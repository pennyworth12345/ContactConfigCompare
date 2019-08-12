class RscMsgBox
{
	access = 0;
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscMsgBox";
	scriptPath = "GUI";
	class Bottom
	{
		class BackgroundButtonCancel: BackgroundButtonLater
		{
			idc = 11004;
			x = "23.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
		class BackgroundButtonLater: RscBackgroundGUI
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11002;
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class BackgroundButtonRestart: BackgroundButtonLater
		{
			idc = 11003;
			x = "16.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
		class CA_ButtonCancel: CA_ButtonOK
		{
			default = 0;
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Cancel";
			x = "23.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
		class CA_ButtonOK: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground {};
	class Middle
	{
		class BcgCommon: RscBackgroundGUI
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11000;
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_Text: RscStructuredText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class Top
	{
		class BcgCommonTop: RscBackgroundGUITop
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11001;
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
};
