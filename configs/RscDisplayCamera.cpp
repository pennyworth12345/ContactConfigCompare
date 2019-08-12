class RscDisplayCamera
{
	enableSimulation = 1;
	iconCamera = "\A3\ui_f\data\GUI\Rsc\RscDisplayMissionEditor\iconCamera_ca.paa";
	idd = 314;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayCamera"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayCamera"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayCamera";
	scriptPath = "GUI";
	class Controls
	{
		class Overlay: RscControlsGroup
		{
			h = "8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 3143;
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Controls
			{
				class Slider1: RscXSliderH
				{
					arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
					arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
					border = "#(argb,8,8,3)color(0,0,0,0.1)";
					color[] = {1, 1, 1, 0.4};
					colorActive[] = {1, 1, 1, 0.6};
					h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31430;
					thumb = "#(argb,8,8,3)color(1,1,1,1)";
					w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
				};
				class Slider2: Slider1
				{
					idc = 31432;
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Slider3: Slider1
				{
					idc = 31434;
					y = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Slider4: Slider1
				{
					idc = 31436;
					y = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Slider5: Slider1
				{
					idc = 31438;
					y = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Slider6: Slider1
				{
					idc = 31440;
					y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Slider7: Slider1
				{
					idc = 31442;
					y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Slider8: Slider1
				{
					idc = 31444;
					y = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text1: RscText
				{
					font = "RobotoCondensedLight";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					shadow = 1;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					text = "Focus";
					w = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = 0;
				};
				class Text2: Text1
				{
					text = "Aperture";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text3: Text1
				{
					text = "Daytime";
					y = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text4: Text1
				{
					text = "Overcast";
					y = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text5: Text1
				{
					text = "Acctime";
					y = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text6: Text1
				{
					text = "Brightness:";
					y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text7: Text1
				{
					text = "Contrast:";
					y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text8: Text1
				{
					text = "Saturation:";
					y = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Value1: Text1
				{
					colorText[] = {1, 1, 1, 1};
					idc = 31431;
					style = 2;
					text = "0";
					w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Value2: Value1
				{
					idc = 31433;
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Value3: Value1
				{
					idc = 31435;
					y = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Value4: Value1
				{
					idc = 31437;
					y = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Value5: Value1
				{
					idc = 31439;
					y = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Value6: Value1
				{
					idc = 31441;
					y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Value7: Value1
				{
					idc = 31443;
					y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Value8: Value1
				{
					idc = 31445;
					y = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
	};
	class ControlsBackground
	{
		class Map: RscMapControl
		{
			h = "0.8 * safezoneH";
			idc = 3141;
			onLoad = "(_this # 0) call bin_fnc_debugDrawMapInit;";
			w = "0.8 * safezoneW";
			x = -10;
			y = -10;
		};
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 3140;
			style = 16;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class Overlay: RscControlsGroup
		{
			h = "safezoneH";
			idc = 3142;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
			class Controls
			{
				class CrossHorizontal: LineHorizontalTop
				{
					h = "0.001 * safezoneH";
					w = 0.1;
					x = "(safezoneW / 2) - (0.1 / 2)";
					y = "(safezoneH / 2)";
				};
				class CrossVertical: LineHorizontalTop
				{
					h = 0.1;
					w = "0.001 * safezoneH";
					x = "(safezoneW / 2)";
					y = "(safezoneH / 2) - (0.1 / 2)";
				};
				class Debug: Header
				{
					h = "8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31420;
					shadow = 1;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 16;
					text = "";
					x = 0;
					y = "safezoneH - 8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Header: RscText
				{
					colorBackground[] = {0, 0, 0, 0};
					colorText[] = {1, 1, 1, 1};
					font = "RobotoCondensedLight";
					h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					shadow = 1;
					sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "SPLENDID CAMERA";
					w = "safezoneW";
					x = 0;
					y = 0;
				};
				class LineHorizontalBottom: LineHorizontalTop
				{
					h = "0.001 * safezoneH";
					w = "safezoneW";
					x = 0;
					y = "0.66 * safezoneH";
				};
				class LineHorizontalTop: RscText
				{
					colorBackground[] = {0.75, 0.75, 0.75, 0.75};
					h = "0.001 * safezoneH";
					w = "safezoneW";
					x = 0;
					y = "0.33 * safezoneH";
				};
				class LineVerticalLeft: LineHorizontalTop
				{
					h = "safezoneH";
					w = "0.001 * safezoneH";
					x = "0.66 * safezoneW";
					y = 0;
				};
				class LineVerticalRight: LineHorizontalTop
				{
					h = "safezoneH";
					w = "0.001 * safezoneH";
					x = "0.33 * safezoneW";
					y = 0;
				};
				class Positions: Header
				{
					h = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31422;
					shadow = 1;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 16;
					text = "";
					w = 0.2;
					x = "safezoneW - 0.2";
					y = 0;
				};
				class SubHeader: Header
				{
					h = "14 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 16;
					text = "ULTIMATE SCREENSHOT SIMULATOR\n\nControls can be previewed and configured\nin 'Camera' controls options.\n\nAdditional controls:\nRMB - camera rotation and pitch\nCtrl + RMB - camera bank\nF1 - open debug console\nSpace - teleport player under crosshair\nCtrl + X - export camera params\nCtrl + C - copy camera params\nCtrl + V - paste camera params\n\nEsc - Exit";
					w = "safezoneW";
					x = 0;
					y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Unit: RscFrame
				{
					colorText[] = {1, 1, 1, 1};
					h = 0;
					idc = 31421;
					w = 0;
					x = -10;
					y = -10;
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
	};
};
