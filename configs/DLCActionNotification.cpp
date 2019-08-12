class DLCActionNotification: RscControlsGroup
{
	h = "4.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 2303;
	w = "17.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_MENU_X"",		(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)])";
	y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_MENU_Y"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)])";
	class controls
	{
		class ANBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "4.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1010;
			w = "15.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ANLogo: RscPicture
		{
			h = "3.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 100;
			w = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ANShortcut: RscText
		{
			colorBackground[] = {0.0313726, 0.721569, 0.917647, 1};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1011;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 2;
			text = "LShift+P";
			w = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ANText: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = "0x10+0x200";
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ANTitle: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			shadow = 0;
			sizeEx = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Vehicle Locked";
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
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
