class RscDisplayBootcampMsgBox
{
	enableDisplay = 1;
	idd = 171;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayBootcampMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayBootcampMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayBootcampMsgBox";
	scriptPath = "GUI";
	class controls
	{
		class BootcampMessageBox: RscControlsGroupNoScrollbars
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
				class ButtonClose: RscButtonMenuCancel
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "No";
					w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonStart: RscButtonMenuOK
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "Yes";
					w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "10.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Logo: RscPicture
				{
					h = "2.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayBootcampMsgBox\bootcampMsgBox_logo_ca.paa";
					w = "2.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LogoTextBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.6};
					colorText[] = {0, 0, 0, 0};
					h = "2.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1000;
					w = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text: RscText
				{
					colorText[] = {1, 1, 1, 1};
					h = "2.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = "0x10+0x200";
					text = "New to Arma 3? The best place to begin is Bootcamp. Start now?";
					w = "13.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
