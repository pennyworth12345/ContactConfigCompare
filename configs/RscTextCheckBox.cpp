class RscTextCheckBox
{
	checked_strings[] = {"CHECKED"};
	color[] = {0, 0, 0, 0};
	colorBackground[] = {0, 0, 0, 0};
	colorDisable[] = {0.4, 0.4, 0.4, 1};
	colorSelect[] = {0, 0, 0, 1};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
	colorText[] = {1, 0, 0, 1};
	colorTextDisable[] = {0.4, 0.4, 0.4, 1};
	colorTextSelect[] = {0, 0.8, 0, 1};
	columns = 1;
	font = "RobotoCondensed";
	h = "0.04 * safezoneH";
	idc = -1;
	rows = 1;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	strings[] = {"UNCHECKED"};
	style = 0;
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	tooltipColorText[] = {1, 1, 1, 1};
	type = 7;
	w = "0.025 * safezoneW";
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
};
