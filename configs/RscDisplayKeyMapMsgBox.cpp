class RscDisplayKeyMapMsgBox
{
	enableDisplay = 1;
	idd = 180;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayKeyMapMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayKeyMapMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayKeyMapMsgBox";
	scriptPath = "GUI";
	class controls
	{
		class KeyMapMessageBox: RscControlsGroupNoScrollbars
		{
			h = "9.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "16.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class BackgroundImage: RscPicture
				{
					colorText[] = {1, 1, 1, 1};
					h = "8.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayBootcampMsgBox\bootcampMsgBox_background_ca.paa";
					w = "16.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonNo: RscButtonMenuCancel
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "No";
					w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonYes: RscButtonMenuOK
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "Yes";
					w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "10.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text: RscText
				{
					colorBackground[] = {0, 0, 0, 0.6};
					colorText[] = {1, 1, 1, 1};
					h = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1000;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = "0x10+0x200";
					text = "The Hold Breath feature is now bound to Left Shift in the Apex preset instead of Right Mouse Button. The Use Default Action feature and the Use Selected Action feature were differentiated in all presets. Would you like to update your preset?";
					w = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class controlsBackground
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.5};
			h = "safezoneH";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
