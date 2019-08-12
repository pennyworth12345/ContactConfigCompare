class RscMapSignalBackground: RscText
{
	colorBackground[] = {0.1, 0.1, 0.1, 0.8};
	h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	w = "15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
};
