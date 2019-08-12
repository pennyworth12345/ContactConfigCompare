class RscAttributeWaypointType: RscControlsGroupNoScrollbars
{
	h = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 31811;
	onSetFocus = "[_this,""RscAttributeWaypointType"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			colorText[] = {1, 1, 1, 0.5};
			h = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 30511;
			style = 2;
			w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 30513;
			text = "Select type:";
			w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value: RscToolbox
		{
			color[] = {1, 1, 1, 1};
			colorSelectedBg[] = {1, 1, 1, 1};
			colorTextSelect[] = {0, 0, 0, 1};
			columns = 3;
			font = "RobotoCondensedLight";
			h = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 31011;
			names[] = {"MOVE", "GETOUT", "UNLOAD", "TR UNLOAD", "%1/cfgWaypoints/A3/Land", "%1/cfgWaypoints/A3/Artillery", "UNHOOK"};
			rows = 3;
			sizeEx = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			strings[] = {"MOVE", "GET OUT", "UNLOAD", "TRANSPORT UNLOAD", "LAND", "FIRE MISSION", "DROP CARGO"};
			w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
