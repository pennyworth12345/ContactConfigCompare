class RscShortcutButton
{
	action = "";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	color[] = {1, 1, 1, 1};
	color2[] = {0.95, 0.95, 0.95, 1};
	color2Secondary[] = {0.95, 0.95, 0.95, 1};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
	colorBackground2[] = {1, 1, 1, 1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorDisabledSecondary[] = {1, 1, 1, 0.25};
	colorFocused[] = {1, 1, 1, 1};
	colorFocusedSecondary[] = {1, 1, 1, 1};
	colorSecondary[] = {1, 1, 1, 1};
	default = 0;
	deletable = 0;
	fade = 0;
	font = "RobotoCondensed";
	fontSecondary = "RobotoCondensed";
	h = "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	idc = -1;
	period = 0.4;
	periodFocus = 1.2;
	periodOver = 0.8;
	shadow = 1;
	shortcuts[] = {};
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
	style = 0;
	text = "";
	textSecondary = "";
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	type = 16;
	url = "";
	w = 0.183825;
	x = 0.1;
	y = 0.1;
	class Attributes
	{
		align = "left";
		color = "#E5E5E5";
		font = "RobotoCondensed";
		shadow = "true";
	};
	class AttributesImage
	{
		align = "left";
		color = "#E5E5E5";
		font = "RobotoCondensed";
	};
	class HitZone
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = 0;
	};
	class ShortcutPos
	{
		h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		left = 0;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
	};
	class TextPos
	{
		bottom = 0;
		left = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		right = 0.005;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
	};
};
