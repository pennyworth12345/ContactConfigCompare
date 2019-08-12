class RSCATTRIBUTEMISSIONNAME: RscControlsGroupNoScrollbars
{
	h = "8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 21475;
	onSetFocus = "[_this,""RSCATTRIBUTEMISSIONNAME"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class Preview: RscStructuredText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 20275;
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class PreviewTitle: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 20176;
			text = "Preview";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 20175;
			text = "Name";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value: RscEdit
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 20575;
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
