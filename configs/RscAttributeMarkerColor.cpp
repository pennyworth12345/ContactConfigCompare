class RscAttributeMarkerColor: RscControlsGroupNoScrollbars
{
	h = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 28633;
	onSetFocus = "[_this,""RscAttributeMarkerColor"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27333;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color1: RscActivePicture
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27535;
			shadow = 0;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color10: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27542;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color11: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27543;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color12: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27544;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color13: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27545;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color14: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27546;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color2: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27538;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color3: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27533;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color4: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27534;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color5: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27536;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color6: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27537;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color7: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27539;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color8: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27540;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color9: Color1
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27541;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27335;
			text = "Color:";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
