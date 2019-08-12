class RscShortcutButtonMain: RscShortcutButton
{
	action = "";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\disabled_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\focus_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\over_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\down_ca.paa";
	color[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	default = 0;
	font = "RobotoCondensed";
	h = 0.104575;
	idc = -1;
	period = 0.5;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	style = 0;
	text = "";
	w = 0.313726;
	class Attributes
	{
		align = "left";
		color = "#E5E5E5";
		font = "RobotoCondensed";
		shadow = "false";
	};
	class AttributesImage
	{
		align = "false";
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
		h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
		left = 0.0145;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		w = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
	};
	class TextPos
	{
		bottom = 0;
		left = "(		((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
		right = 0.005;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
	};
};
