class RscMsgBoxKeysPresetJets: RscControlsGroupNoHScrollbars
{
	deletable = 1;
	h = "safezoneH";
	idc = -1;
	onLoad = "[""onLoad"",_this,""RscMsgBoxKeysPresetJets"",'GUI',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscMsgBoxKeysPresetJets"",'GUI',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscMsgBoxKeysPresetJets";
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
			h = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneWAbs - 18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y = "(safezoneH - 10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
			class controls
			{
				class BackgroundImage: RscPicture
				{
					h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					text = "\a3\Ui_f\data\GUI\RscCommon\RscMsgBoxKeysPresetsJets\background_ca.paa";
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonClose: RscButtonMenuCancel
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "ctrlDelete (ctrlParentControlsGroup ctrlParentControlsGroup (_this select 0));";
					text = "Close";
					w = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonOK: RscButtonMenuOK
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "ctrlDelete (ctrlParentControlsGroup ctrlParentControlsGroup (_this select 0));";
					text = "Controls";
					tooltip = "View or change game controls.";
					w = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Logo: RscPicture
				{
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					text = "\A3\Data_F_Jets\Logos\jets_logo_ca.paa";
					w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LogoTextBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.6};
					colorText[] = {0, 0, 0, 0};
					h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1000;
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text: RscStructuredText
				{
					colorText[] = {1, 1, 1, 1};
					h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = "0x10+0x200";
					text = "With the addition of these new features and deepening of existing gameplay, there have been several <t color='%1'>control additions and tweaks</t>. You can inspect these in the CONTROLS section of the OPTIONS menu. It's also possible to reset to the Arma 3 or now standard Arma 3 Apex PRESETS, but please be aware that doing so will remove any customized control bindings.";
					w = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
