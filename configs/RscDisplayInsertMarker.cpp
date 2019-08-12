class RscDisplayInsertMarker
{
	idd = 54;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayInsertMarker"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayInsertMarker"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayInsertMarker";
	scriptPath = "GUI";
	class controls
	{
		class ButtonMenuCancel: RscButtonMenuCancel
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "13.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonMenuOK: RscButtonMenuOK
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "4.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "13.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Description: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1100;
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class DescriptionChannel: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1101;
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "11.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class MarkerChannel: RscCombo
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 103;
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "12.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class MarkerPicture: RscPicture
		{
			h = 0.0666667;
			idc = 102;
			w = 0.05;
			x = 0.259984;
			y = 0.4;
		};
		class MarkerText: RscEdit
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Title: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			text = "INSERT MARKER";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "8.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
	class controlsBackground
	{
		class RscText_1000: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "2.5 * GUI_GRID_INSERTMARKER_H";
			idc = 1000;
			w = "8 * GUI_GRID_INSERTMARKER_W";
			x = "0 * GUI_GRID_INSERTMARKER_W + GUI_GRID_INSERTMARKER_X";
			y = "0 * GUI_GRID_INSERTMARKER_H + GUI_GRID_INSERTMARKER_Y";
		};
	};
};
