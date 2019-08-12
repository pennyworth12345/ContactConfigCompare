class RscDisplayDLCContentBrowser_DLC: RscControlsGroupNoScrollbars
{
	class Controls
	{
		class Button: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			colorBackgroundDisabled[] = {0, 0, 0, 0};
			colorDisabled[] = {0, 0, 0, 0};
			colorFocused[] = {0, 0, 0, 0};
			idc = 2009;
		};
		class Hover: RscText
		{
			colorBackground[] = {1, 1, 1, 0.2};
			fade = 1;
			idc = 2011;
		};
		class Icon: RscPicture
		{
			idc = 2004;
		};
		class LineB: LineL
		{
			h = "pixelH";
			idc = 2008;
		};
		class LineL: RscText
		{
			fade = 1;
			idc = 2005;
			w = "pixelW";
		};
		class LineR: LineL
		{
			idc = 2006;
		};
		class LineT: LineL
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2007;
			style = 2;
			text = "Purchase";
		};
		class Picture: RscPicture
		{
			idc = 2001;
		};
		class PictureBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			idc = 2000;
		};
		class Title: RscText
		{
			font = "RobotoCondensedBold";
			h = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2010;
			shadow = 0;
			sizeEx = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
		};
		class Video: RscControlsGroupNoScrollbars
		{
			idc = 2002;
			class Controls {};
		};
	};
};
