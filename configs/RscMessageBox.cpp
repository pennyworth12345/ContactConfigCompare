class RscMessageBox: RscControlsGroupNoScrollbars
{
	h = 0;
	idc = 2351;
	w = 0;
	x = -1;
	y = -1;
	class Controls
	{
		class BackgroundButtonCancel: BackgroundButtonOK
		{
			idc = 235105;
			x = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class BackgroundButtonMiddle: BackgroundButtonOK
		{
			idc = 235104;
			x = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class BackgroundButtonOK: RscBackgroundGUI
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 235103;
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BcgCommon: RscBackgroundGUI
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 235101;
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BcgCommonTop: RscBackgroundGUITop
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 235100;
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = 0;
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 235107;
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonOK: RscButtonMenuOK
		{
			colorBackground[] = {0, 0, 0, 1};
			default = 1;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 235106;
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Text: RscStructuredText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 235102;
			w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
