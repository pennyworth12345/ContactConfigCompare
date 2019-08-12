class RscHintGroup: RscControlsGroupNoScrollbars
{
	h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 12957;
	onLoad = "		params ['_ctrl'];		ctrlposition _ctrl params ['_ctrlX','','_ctrlW'];		if (_ctrlX == (['IGUI_Grid','Hint'] call BIS_fnc_GUIgrid) # 0) then {			_ctrl ctrlsetpositionX (_ctrlX min (safezoneX + safezoneW - _ctrlW - (ctrlposition (finddisplay 12 displayctrl 2068) # 2) * 1.1));			_ctrl ctrlcommit 0;		};	";
	w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
	x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_HINT_X"",		((safezoneX + safezoneW) - 		(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_HINT_Y"",		(safezoneY + 6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	class controls
	{
		class Hint: RscStructuredText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.7};
			h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11757;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11657;
			w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
