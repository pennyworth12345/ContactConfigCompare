class RscMsgBoxKeysPreset: RscControlsGroupNoScrollbars
{
	deletable = 1;
	h = "safezoneH";
	idc = -1;
	onLoad = "[""onLoad"",_this,""RscMsgBoxKeysPreset"",'GUI',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscMsgBoxKeysPreset"",'GUI',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscMsgBoxKeysPreset";
	scriptPath = "GUI";
	w = "safezoneWAbs";
	x = "safezoneXAbs";
	y = "safezoneY";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.5};
			h = "safezoneH";
			w = "safezoneWAbs";
			x = 0;
			y = 0;
		};
		class MessageBox: RscControlsGroupNoScrollbars
		{
			h = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneWAbs - 18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y = "(safezoneH - 10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
			class controls
			{
				class BackgroundImage: RscPicture
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					text = "\a3\Ui_f\data\GUI\RscCommon\RscMsgBoxKeysPresets\background_ca.paa";
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonClose: RscButtonMenuCancel
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "ctrlDelete (ctrlParentControlsGroup ctrlParentControlsGroup (_this select 0));";
					text = "Not now";
					w = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonOK: RscButtonMenuOK
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "ctrlDelete (ctrlParentControlsGroup ctrlParentControlsGroup (_this select 0));";
					text = "Yes";
					w = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Logo: RscPicture
				{
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					text = "\A3\Data_F_Exp\Logos\arma3_exp_logo_ca.paa";
					w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LogoTextBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.6};
					colorText[] = {0, 0, 0, 0};
					h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1000;
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text: RscText
				{
					colorText[] = {1, 1, 1, 1};
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = "0x10+0x200";
					text = "Arma 3 Apex introduces new controls preset. Do you want to go to the controls menu and preview it?";
					w = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Vignette: RscVignette
		{
			h = "safezoneH";
			w = "safezoneWAbs";
			x = 0;
			y = 0;
		};
	};
};
