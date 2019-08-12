class RscDisplaySelectSignal_Type: RscControlsGroup
{
	h = "(3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
	w = "(38 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
	x = 0;
	y = 0;
	class Controls
	{
		class Background: RscPicture
		{
			colorText[] = {0.25, 0.25, 0.25, 0};
			h = "(3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2002;
			text = "\a3\UI_F_Contact\Data\Displays\RscDisplaySelectSignal\types_background_ca.paa";
			w = "(38 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = 0;
			y = 0;
		};
		class Button: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			colorBackgroundDisabled[] = {0, 0, 0, 0};
			colorDisabled[] = {0, 0, 0, 0};
			colorFocused[] = {0, 0, 0, 0};
			h = "(3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2000;
			w = "(38 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = 0;
			y = 0;
		};
		class Text: RscText
		{
			font = "RobotoCondensedLight";
			h = 0;
			idc = 2003;
			shadow = 2;
			sizeEx = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			w = 0;
			x = 0;
			y = 0;
		};
	};
};
