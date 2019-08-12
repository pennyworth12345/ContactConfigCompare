class RscAttributeTargetDataStore: RscControlsGroupNoScrollbars
{
	h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 38435;
	onSetFocus = "[_this,""RscAttributeTargetDataStore"",'BootcampCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			colorText[] = {1, 1, 1, 0.5};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 37135;
			style = 2;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 37137;
			text = "Store Shooter Data";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value: RscToolbox
		{
			columns = 2;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 37136;
			rows = 1;
			strings[] = {"Enabled", "Disabled"};
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
