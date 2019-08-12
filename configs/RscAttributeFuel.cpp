class RscAttributeFuel: RscControlsGroupNoScrollbars
{
	h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 14774;
	onSetFocus = "[_this,""RscAttributeFuel"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13474;
			text = "Fuel";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value: RscXSliderH
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14374;
			w = "15.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
