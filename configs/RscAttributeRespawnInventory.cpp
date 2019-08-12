class RscAttributeRespawnInventory: RscControlsGroupNoScrollbars
{
	h = "17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 43128;
	onSetFocus = "[_this,""RscAttributeRespawnInventory"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class Filter0: RscActivePictureKeepAspect
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42028;
			text = "\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_west_ca.paa";
			tooltip = "BLUFOR";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter1: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42029;
			text = "\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_east_ca.paa";
			tooltip = "OPFOR";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter2: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42030;
			text = "\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa";
			tooltip = "Independent";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter3: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42031;
			text = "\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa";
			tooltip = "Civilian";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class FilterBackground: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41830;
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "-2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListBackground: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			colorText[] = {1, 1, 1, 0.75};
			h = "15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41829;
			shadow = 0;
			sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TreeCiv: TreeWest
		{
			idc = 42331;
		};
		class TreeEast: TreeWest
		{
			idc = 42329;
		};
		class TreeGuer: TreeWest
		{
			idc = 42330;
		};
		class TreeWest: RscTree
		{
			colorBackground[] = {0, 0, 0, 0};
			colorSelect[] = {0, 0, 0, 0};
			colorSelectBackground[] = {0, 0, 0, 0};
			colorSelectText[] = {1, 1, 1, 1};
			h = "15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42328;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
