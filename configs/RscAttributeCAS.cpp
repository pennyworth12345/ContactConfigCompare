class RscAttributeCAS: RscControlsGroupNoScrollbars
{
	h = "8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 12190;
	onSetFocus = "[_this,""RscAttributeCAS"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 10890;
			style = 16;
			text = "Plane";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value: RscListNBox
		{
			colorSelect[] = {0.95, 0.95, 0.95, 1};
			colorSelect2[] = {0.95, 0.95, 0.95, 1};
			colorSelectBackground[] = {1, 1, 1, 0.25};
			colorSelectBackground2[] = {1, 1, 1, 0.25};
			columns[] = {0, 0.1, 0.25};
			h = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11390;
			sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
