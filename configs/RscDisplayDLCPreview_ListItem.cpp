class RscDisplayDLCPreview_ListItem: RscControlsGroup
{
	h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 43183;
	w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
	y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
	class Controls
	{
		class Background: RscPicture
		{
			colorBackground[] = {1, 1, 1, 1};
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42085;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCPreview\background_co.paa";
			w = "5.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Button: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			colorBackgroundDisabled[] = {0, 0, 0, 0};
			colorDisabled[] = {0, 0, 0, 0};
			colorFocused[] = {0, 0, 0, 0};
			h = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42483;
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Hover: RscText
		{
			colorBackground[] = {1, 1, 1, 1};
			fade = 1;
			h = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41884;
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Picture: RscPictureKeepAspect
		{
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42083;
			text = "#(argb,8,8,3)color(1,0,1,1)";
			w = "5.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Select: RscText
		{
			colorBackground[] = {1, 1, 1, 1};
			fade = 1;
			h = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41883;
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SessionNotification: RscPicture
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42084;
			show = 0;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCPreview\session_ca.paa";
			w = "0.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
