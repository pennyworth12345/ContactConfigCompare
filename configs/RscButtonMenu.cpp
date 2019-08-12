class RscButtonMenu: RscShortcutButton
{
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	color[] = {1, 1, 1, 1};
	color2[] = {0, 0, 0, 1};
	color2Secondary[] = {0, 0, 0, 1};
	colorBackground[] = {0, 0, 0, 0.8};
	colorBackground2[] = {0.75, 0.75, 0.75, 1};
	colorBackgroundFocused[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorDisabledSecondary[] = {1, 1, 1, 0.25};
	colorFocused[] = {0, 0, 0, 1};
	colorFocusedSecondary[] = {0, 0, 0, 1};
	colorSecondary[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	default = 0;
	fontSecondary = "PuristaLight";
	h = 0.039216;
	idc = -1;
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	shadow = 0;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick", 0.09, 1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter", 0.09, 1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape", 0.09, 1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush", 0.09, 1};
	style = "0x02 + 0xC0";
	textSecondary = "";
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	tooltipColorText[] = {1, 1, 1, 1};
	type = 16;
	w = 0.095589;
	x = 0;
	y = 0;
	class Attributes
	{
		align = "left";
		color = "#E5E5E5";
		font = "PuristaLight";
		shadow = "false";
	};
	class ShortcutPos
	{
		h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		left = "5.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = 0;
		w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	};
	class TextPos
	{
		bottom = 0;
		left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		right = 0.005;
		top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
	};
};
