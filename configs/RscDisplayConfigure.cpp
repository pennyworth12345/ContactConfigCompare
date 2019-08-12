class RscDisplayConfigure
{
	enableDisplay = 1;
	idd = 4;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayConfigure"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayConfigure"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayConfigure";
	scriptPath = "GUI";
	class controls
	{
		class ButtonKeyboard: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2400;
			text = "Keyboard";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonMouse: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2401;
			text = "Mouse";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonPresets: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 114;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Presets";
			tooltip = "Assign a control preset.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.35 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_ButtonContinue: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_ButtonDefault: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Default";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.35 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_ValueJoystick: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 106;
			text = "Controller";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class KeyboardGroup: RscControlsGroup
		{
			h = "19.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class CA_ControlsPage: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 108;
					w = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ControlsPageText: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1002;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					style = 1;
					text = "Show:";
					w = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueKeys: RscListBoxKeys
				{
					h = "15.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 102;
					mainCollumW = 0.45;
					secndCollumW = 0.55;
					w = "25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EmptyText: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = -1;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextAction: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1003;
					text = "Action";
					w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextAssignedKeys: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1004;
					text = "Assigned keys";
					w = "14 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
		class MouseGroup: RscControlsGroup
		{
			h = "19.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class CA_MouseAcceleration: RscTextCheckBox
				{
					checked_strings[] = {"On"};
					colorSelectedBg[] = {0, 0, 0, 0};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 113;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					strings[] = {"Off"};
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_MouseFiltering: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 110;
					w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextMouseAcceleration: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1010;
					style = 1;
					text = "Acceleration:";
					w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextMouseSens: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1005;
					text = "Sensitivities";
					w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextMouseSmoothing: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1009;
					style = 1;
					text = "Smoothing:";
					w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueXAxis: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 103;
					w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueYAxis: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 104;
					w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueYReversed: RscXListBox
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 105;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextGeneral: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1011;
					text = "General";
					w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextXAxis: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1007;
					style = 1;
					text = "X Axis:";
					w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextYAxis: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1008;
					style = 1;
					text = "Y Axis:";
					w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextYReversed: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1006;
					style = 1;
					text = "Invert Y axis:";
					w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
			idc = 109;
			style = 1;
			w = "24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			style = 0;
			text = "Controls";
			w = "13.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
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
			idc = 1081;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TabsBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1082;
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
