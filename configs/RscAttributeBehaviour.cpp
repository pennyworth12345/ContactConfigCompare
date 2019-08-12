class RscAttributeBehaviour: RscControlsGroupNoScrollbars
{
	h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 24569;
	onSetFocus = "[_this,""RscAttributeBehaviour"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Aware: Safe
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23474;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeBehaviour\aware_ca.paa";
			tooltip = "Aware";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23269;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Combat: Safe
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23475;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeBehaviour\combat_ca.paa";
			tooltip = "Combat";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Default: Safe
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23470;
			text = "\a3\ui_f_curator\Data\default_ca.paa";
			tooltip = "No change";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Safe: RscActivePicture
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23471;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeBehaviour\safe_ca.paa";
			tooltip = "Safe";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Stealth: Safe
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23469;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeBehaviour\stealth_ca.paa";
			tooltip = "Stealth";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23271;
			text = "Combat mode:";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
