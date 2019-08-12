class RscSavegameInfo: RscControlsGroupNoScrollbars
{
	h = "safezoneH";
	idc = -1;
	onLoad = "[""onLoad"",_this,""RscSavegameInfo"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscSavegameInfo"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscSavegameInfo";
	scriptPath = "ContactCommon";
	w = "safezoneWAbs";
	x = "safezoneXAbs";
	y = "safezoneY";
	class Controls
	{
		class Notification: RscControlsGroupNoScrollbars
		{
			fade = 0;
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 201;
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneWAbs / 2 - 	14 * 			(			((safezoneW / safezoneH) min 1.2) / 40) / 2";
			y = "safezoneH / 2 - 	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) / 2";
			class Controls
			{
				class Background: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.5};
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "\a3\UI_F_Contact\Data\RscTitles\RscSimpleNotification\background_ca.paa";
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = 0;
				};
				class Text: RscText
				{
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 202;
					style = 2;
					text = "Saving game. Please wait.";
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = 0;
				};
			};
		};
		class Overlay: RscText
		{
			colorBackground[] = {0, 0, 0, 0.4};
			fade = 0;
			h = "safezoneH";
			idc = 200;
			w = "safezoneWAbs";
			x = 0;
			y = 0;
		};
	};
};
