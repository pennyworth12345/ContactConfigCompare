class RscMapSignalText: RscText
{
	colorText[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
	h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	style = 2;
	text = "Cannot connect to the positioning system.";
	w = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
};
