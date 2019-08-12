class RscDisplayControlSchemes: RscStandardDisplay
{
	IDD = 163;
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayControlSchemes"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayControlSchemes"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayControlSchemes";
	scriptPath = "GUI";
	class controls
	{
		class ButtonCancel: RscButtonMenuCancel
		{
			colorBackground[] = {0, 0, 0, 1};
			default = 0;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			text = "Cancel";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "17.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonOK: RscButtonMenuOK
		{
			colorBackground[] = {0, 0, 0, 1};
			default = 1;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1;
			text = "OK";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20.05 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "17.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ControlsSchemes: RscListBox
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			rows = 10;
			w = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Title: RscTitle
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			moving = 1;
			text = "Select keyboard preset";
			w = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground {};
};
