class RscAttributeTargetData: RscControlsGroupNoScrollbars
{
	h = "5.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 25801;
	onSetFocus = "[_this,""RscAttributeTargetData"",'BootcampCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class Value: RscListNBox
		{
			colorSelect2[] = {0.95, 0.95, 0.95, 1};
			colorSelectBackground[] = {1, 1, 1, 0.25};
			colorSelectBackground2[] = {1, 1, 1, 0.25};
			columns[] = {0, 0.2, 0.4, 0.6, 0.8};
			h = "5.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 25001;
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
