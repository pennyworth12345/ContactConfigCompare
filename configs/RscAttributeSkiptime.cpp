class RscAttributeSkiptime: RscControlsGroupNoScrollbars
{
	h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 22438;
	onSetFocus = "[_this,""RscAttributeSkiptime"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21140;
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Skiptime: RscText
		{
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21141;
			sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			w = "25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Time: RscText
		{
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21139;
			sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			w = "25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21138;
			text = "Time";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value: RscXSliderH
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 22038;
			w = "25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
