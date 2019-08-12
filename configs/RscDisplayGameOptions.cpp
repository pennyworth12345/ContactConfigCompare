class RscDisplayGameOptions
{
	enableDisplay = 1;
	idd = 151;
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayGameOptions"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayGameOptions"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayGameOptions";
	scriptPath = "GUI";
	class controls
	{
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonDifficulty: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 304;
			text = "Difficulty";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonGeneral: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2402;
			text = "General";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonGUI: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2404;
			text = "Colors";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonLayout: RscButtonMenu
		{
			action = "finddisplay 151 createdisplay 'RscDisplayOptionsLayout'";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2405;
			text = "Layout";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "25 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonOK: RscButtonMenuOK
		{
			default = 0;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1;
			text = "OK";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -10;
			y = -10;
		};
		class ButtonOKscripted: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 999;
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ColorsGroup: RscControlsGroup
		{
			h = "19.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class Controls
			{
				class EmptyText: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = -1;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class listPresets: RscListBox
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1506;
					w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class listTags: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1504;
					w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class listVariables: RscListBox
				{
					colorPictureSelected[] = {1, 1, 1, 1};
					h = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1505;
					w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Preview: RscPicture
				{
					h = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					w = "14 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PreviewBackground: RscPicture
				{
					h = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class sliderColorA: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1906;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class sliderColorB: RscXSliderH
				{
					color[] = {0, 0, 1, 0.4};
					colorActive[] = {0, 0, 1, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1905;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class sliderColorG: RscXSliderH
				{
					color[] = {0, 1, 0, 0.4};
					colorActive[] = {0, 1, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1904;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class sliderColorR: RscXSliderH
				{
					color[] = {1, 0, 0, 0.4};
					colorActive[] = {1, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1903;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class textColorA: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1012;
					style = 1;
					text = "Alpha";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class textColorB: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1011;
					style = 1;
					text = "Blue";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class textColorG: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1010;
					style = 1;
					text = "Green";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class textColorR: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1009;
					style = 1;
					text = "Red";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class valueColorA: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1016;
					style = 1;
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "33.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class valueColorB: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1015;
					style = 1;
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "33.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class valueColorG: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1014;
					style = 1;
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "33.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class valueColorR: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1013;
					style = 1;
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "33.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
		class DifficultyGroup: RscControlsGroup
		{
			h = "19.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2302;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class DifficultyDescription: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0.3};
					h = "10.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1519;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DifficultyPicture: RscPicture
				{
					h = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1518;
					text = "#(argb,8,8,3)color(0,0,0,0.3)";
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DiffOptionsBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.3};
					h = "16.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1083;
					w = "20.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DiffOptionsGroup: RscControlsGroup
				{
					h = "16.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					highlightAnimLength = 1.2;
					highlightColorFrom[] = {1, 1, 1, 0.25};
					highlightColorTo[] = {1, 1, 1, 0.5};
					idc = 1520;
					lineHeight = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "20.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class controls
					{
						class AILevelOption: RscCombo
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1511;
							w = "7.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(2 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class AutoReportOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1539;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(38 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class AutoReportText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1065;
							optionDescription = "Enables automatic reporting of various situations by the player.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_AutomaticReporting_co.paa";
							shadow = 0;
							text = "Automatic Reporting";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(38 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class CameraShakeOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1534;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(24 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class CameraShakeText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1053;
							optionDescription = "Shakes camera if player is near explosion, passing vehicle or if player's vehicle is under G-load.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_CameraShake_co.paa";
							shadow = 0;
							text = "Camera shake";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(24 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class CommandsOption: RscCombo
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1526;
							w = "7.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(11 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class CommandsText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1043;
							optionDescription = "Displays command icons like target markers, get in command and others.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_Commands_co.paa";
							shadow = 0;
							text = "Commands";
							w = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(11 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class CrosshairOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1531;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(19 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class CrosshairText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1049;
							optionDescription = "Shows weapon crosshair both in 1st and 3rd person view.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_Crosshair_co.paa";
							shadow = 0;
							text = "Crosshair";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(19 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class EnemyTagOption: RscCombo
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1524;
							w = "7.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(9 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class EnemyTagText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1041;
							optionDescription = "Enemy unit identification. Works only when the player aims at a unit.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_EnemyTags_co.paa";
							shadow = 0;
							text = "Enemy Name Tags";
							w = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(9 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ExtendedMapOptionEnemy: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1543;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(33 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ExtendedMapOptionFriendy: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1538;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(32 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ExtendedMapOptionMines: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1544;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(34 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ExtendedMapOptionPing: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1546;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(35 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ExtendedMapTextEnemy: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1060;
							optionDescription = "Shows enemy units on the map.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_Map_Enemy_co.paa";
							shadow = 0;
							text = "Enemy";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(33 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ExtendedMapTextFriendly: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1059;
							optionDescription = "Shows friendly units on the map.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_Map_Friendly_co.paa";
							shadow = 0;
							text = "Friendly";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(32 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ExtendedMapTextMines: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1061;
							optionDescription = "Shows detected mines on the map.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_Map_Mines_co.paa";
							shadow = 0;
							text = "Mines";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(34 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ExtendedMapTextPing: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1067;
							optionDescription = "Allows to use tactical ping for pointing at places within the scene.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_Map_Ping_co.paa";
							shadow = 0;
							text = "Tactical Ping";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(35 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class FriendlyTagOption: RscCombo
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1523;
							w = "7.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(8 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class FriendlyTagText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1040;
							optionDescription = "Friendly unit identification. Works only when the player aims at a unit.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_FriendlyTags_co.paa";
							shadow = 0;
							text = "Friendly Name Tags";
							w = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(8 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class GroupIndicatorsOption: RscCombo
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1522;
							w = "7.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(7 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class GroupIndicatorsText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1039;
							optionDescription = "Shows indication icons on units in player's group.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_GroupIndicators_co.paa";
							shadow = 0;
							text = "Group Indicators";
							w = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(7 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class KilledByOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1536;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(28 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class KilledByText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1056;
							optionDescription = "Shows in chat window who killed the player.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_KilledBy_co.paa";
							shadow = 0;
							text = "Killed by";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(28 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class MapText: RscText
						{
							font = "RobotoCondensedBold";
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1058;
							shadow = 0;
							text = "Extended Map Content";
							w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(31 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class MinesOption: RscCombo
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1525;
							w = "7.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(10 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class MinesText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1042;
							optionDescription = "Shows icons indicating exact positions of mines.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_DetectedMines_co.paa";
							shadow = 0;
							text = "Detected Mines";
							w = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(10 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class MiscText: RscText
						{
							font = "RobotoCondensedBold";
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1064;
							shadow = 0;
							text = "Misc";
							w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(37 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class MultiplayerText: RscText
						{
							font = "RobotoCondensedBold";
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1054;
							shadow = 0;
							text = "Multiplayer";
							w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(26 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class MultipleSavesOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1540;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(39 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class MultipleSavesText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1066;
							optionDescription = "Allows player to create multiple saves in a mission.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_MultipleSaves_co.paa";
							shadow = 0;
							text = "Multiple Saves";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(39 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class PersonalAwarenessText: RscText
						{
							font = "RobotoCondensedBold";
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1045;
							shadow = 0;
							text = "Personal Awareness";
							w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(15 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ReducedDamageOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1521;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(1 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ReducedDamageText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1037;
							optionDescription = "Decreases damage dealt to player and members of his group.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_ReducedDamage_co.paa";
							shadow = 0;
							text = "Reduced Damage";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(1 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ScoreTableOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1535;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(27 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ScoreTableText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1055;
							optionDescription = "Displays table with kills, deaths and overall score in multiplayer.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_ScoreTable_co.paa";
							shadow = 0;
							text = "Score Table";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(27 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class SimulationText: RscText
						{
							font = "RobotoCondensedBold";
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1036;
							shadow = 0;
							text = "Simulation";
							w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(0 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class SituationalAwarenessText: RscText
						{
							font = "RobotoCondensedBold";
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1038;
							shadow = 0;
							text = "Situational Awareness";
							w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(6 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class SliderAIPrecision: RscXSliderH
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1516;
							w = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(4 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class SliderAISkill: RscXSliderH
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1513;
							w = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(3 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class StaminaBarOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1530;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(18 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class StaminaBarText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1048;
							optionDescription = "Manages visibility of stamina indicator.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_StaminaBar_co.paa";
							shadow = 0;
							text = "Stamina Bar";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(18 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class StanceIndicatorOption: RscCombo
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1529;
							w = "7.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(17 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class StanceIndicatorText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1047;
							optionDescription = "Displays stance indication (contains actual stance, weapon resting & deployment).";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_StanceIndicator_co.paa";
							shadow = 0;
							text = "Stance indicator";
							w = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(17 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class TacticalPingOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1542;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(13 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class TacticalPingText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1063;
							optionDescription = "Allows to use tactical ping for pointing at places within the scene.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_TacticalPing_co.paa";
							shadow = 0;
							text = "Tactical Ping";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(13 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class TextAILevel: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1510;
							optionDescription = "Presets for changing skill and precision of all AI controlled units.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_AILevel_co.paa";
							shadow = 0;
							text = "AI Level";
							w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(2 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class TextAIPrecision: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1515;
							optionDescription = "Weapon handling skill and aiming precision of AI controlled units.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_AIPrecision_co.paa";
							shadow = 0;
							text = "Precision";
							w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(4 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class TextAISkill: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1512;
							optionDescription = "Set of abilities determining the combat performance of AI controlled units.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_AISkill_co.paa";
							shadow = 0;
							text = "Skill";
							w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(3 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ThirdPersonOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1533;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(23 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ThirdPersonText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1052;
							optionDescription = "Enables camera switching to 3rd person view.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_3rdPerson_co.paa";
							shadow = 0;
							text = "3rd person view";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(23 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ValueAIPrecision: RscEdit
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1517;
							w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "18.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(4 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ValueAISkill: RscEdit
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1514;
							w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "18.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(3 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class ViewText: RscText
						{
							font = "RobotoCondensedBold";
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1051;
							shadow = 0;
							text = "View";
							w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(22 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class VisionAidOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1532;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(20 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class VisionAidText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1050;
							optionDescription = "Helps to detect units in visual range and identify friend from foe.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_VisionAid_co.paa";
							shadow = 0;
							text = "Vision aid";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(20 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class VONOption: RscCheckBox
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1537;
							w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(29 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class VONText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1057;
							optionDescription = "Indicates who is speaking through VON communication.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_VONID_co.paa";
							shadow = 0;
							text = "VON ID";
							w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(29 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class WaypointsOption: RscCombo
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1527;
							w = "7.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(12 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class WaypointsText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1044;
							optionDescription = "Manages visibility of waypoint markers.";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_Waypoints_co.paa";
							shadow = 0;
							text = "Waypoints";
							w = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(12 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class WeaponInfoOption: RscCombo
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1528;
							w = "7.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(16 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class WeaponInfoText: RscText
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 1046;
							optionDescription = "Shows weapon info box (contains round & magazine count, firing mode, etc.).";
							optionPicture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGameOptions\Diff_WeaponInfo_co.paa";
							shadow = 0;
							text = "Weapon info";
							w = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "(16 * 1.2) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
					};
					class HScrollbar: HScrollbar
					{
						height = 0;
					};
				};
				class EmptyText: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = -1;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OverallDifficulty: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 108;
					w = "13.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextDifficulty: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1022;
					style = 1;
					text = "Preset:";
					w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
		class GeneralGroup: RscControlsGroup
		{
			h = "19.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class CA_RadioSubtitles: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1004;
					style = 1;
					text = "Radio subtitles:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextFloatingZone: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1006;
					style = 1;
					text = "Aiming deadzone:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "14.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextGore: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 122;
					style = 1;
					text = "Blood:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextHeadBob: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1007;
					style = 1;
					text = "Head bob:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "16 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextLanguage: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1002;
					style = 1;
					text = "Language:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextSubtitles: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1003;
					style = 1;
					text = "Subtitles:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueBlood: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 119;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueFloatingZone: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 109;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "14.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueHeadBob: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 138;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "16 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueLanguage: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 135;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = "15 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueRadio: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 103;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueSubtitles: RscXListBox
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 102;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDTextAutoTrim: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1034;
					style = 1;
					text = "Auto-trim:";
					w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDTextEnable: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1030;
					style = 1;
					text = "Helicopter Flight Model:";
					w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDTextRoughLanding: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1032;
					style = 1;
					text = "Rough Landing:";
					w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDTextShowGauges: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1031;
					style = 1;
					text = "Show Gauges:";
					w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDTextStressDamage: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1035;
					style = 1;
					text = "Stress Damage:";
					w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDTextWindDyn: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1033;
					style = 1;
					text = "Wind Effects:";
					w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDValueAutoTrim: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 150;
					tooltip = "Enables automatic trimming for easier straight flight";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDValueEnable: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 146;
					tooltip = "Switches between standard or advanced flight model dynamics";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDValueRoughLanding: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 148;
					tooltip = "Allows harder landing without inflicting damage to the helicopter";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDValueShowGauges: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 147;
					tooltip = "Shows or hides gauges and indicators";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDValueStressDamage: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 151;
					tooltip = "Enables damaging the helicopter when flying dangerously";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RTDValueWindDyn: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 149;
					tooltip = "Enables the impact of wind upon flight dynamics";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextAdaptiveCrosshair: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1028;
					style = 1;
					text = "Adaptive Crosshair:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextInstructorFigure: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1029;
					style = 1;
					text = "Instructor figure:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextStreamFriendlyUI: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1027;
					style = 1;
					text = "Stream Friendly UI:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextTutorialHints: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1024;
					style = 1;
					text = "Tutorial Hints:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueAdaptiveCrosshair: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 144;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueInstructorFigure: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 145;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueStreamFriendlyUI: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 143;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueTutorialHints: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 140;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueVehicleFreelook: CA_ValueSubtitles
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 142;
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class VehicleFreelook: CA_TextLanguage
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1023;
					style = 1;
					text = "Vehicle Freelook:";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
		class PlayersName: Title
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 601;
			style = 1;
			w = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			style = 0;
			text = "Game Options";
			w = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "19.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1082;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TabsBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1081;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			h = "safezoneH";
			idc = 115099;
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
			class Controls
			{
				class Background: RscText
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "safezoneH";
					idc = 114999;
					w = "safezoneWAbs";
					x = 0;
					y = 0;
				};
			};
		};
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Vignette: RscVignette
		{
			idc = 114998;
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
	};
};
