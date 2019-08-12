class RscMapSignalPicture: RscPicture
{
	colorText[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
	h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	text = "\A3\ui_f\data\map\diary\signal_ca.paa";
	w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
};
