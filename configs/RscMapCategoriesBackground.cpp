class RscMapCategoriesBackground: RscText
{
	colorBackground[] = {0, 0, 0, 1};
	h = "((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	w = 0;
	x = "safezoneX";
	y = "0.5 - 		((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / 2";
};
