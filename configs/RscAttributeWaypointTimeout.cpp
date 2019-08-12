class RscAttributeWaypointTimeout: RscControlsGroupNoScrollbars
{
	h = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 40014;
	onSetFocus = "[_this,""RscAttributeWaypointTimeout"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "IDC_RSCATTRIBUTEWAYPOINTTIMEOUT_BACKGROUND";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonTime00: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			colorBackgroundDisabled[] = {1, 1, 1, 1};
			colorDisabled[] = {0, 0, 0, 1};
			colorFocused[] = {0, 0, 0, 0};
			font = "RobotoCondensedLight";
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 39314;
			shadow = 0;
			text = "No Wait";
			w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonTime05: ButtonTime00
		{
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 39316;
			w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonTime10: ButtonTime00
		{
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 39317;
			w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonTime15: ButtonTime00
		{
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 39318;
			w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonTime20: ButtonTime00
		{
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 39319;
			w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonTime25: ButtonTime00
		{
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 39320;
			w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonTime30: ButtonTime00
		{
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 39321;
			w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 38714;
			text = "Wait until";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
