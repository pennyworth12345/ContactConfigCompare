class RscWIP: RscControlsGroup
{
	h = "5.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 2300;
	w = "9.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "safezoneX + safezoneW - 10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	y = "safezoneY + safezoneH - 5.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class WIP_VersionNumber: RscText
		{
			colorBackground[] = {0.2, 0.2, 0.2, 0.05};
			colorText[] = {1, 1, 1, 0.3};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			shadow = 0;
			style = 2;
			w = "9.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WIP_VersionText: RscText
		{
			colorBackground[] = {0.2, 0.2, 0.2, 0.05};
			colorText[] = {1, 1, 1, 0.3};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			shadow = 0;
			style = 2;
			text = "Development Build";
			w = "9.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class HScrollbar: HScrollbar
	{
		height = 0;
	};
	class VScrollbar: VScrollbar
	{
		width = 0;
	};
};
