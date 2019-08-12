class RscDisplayCustomizeController
{
	axisActiveIcon = "#(argb,8,8,3)color(1,1,1,0.3)";
	idd = 150;
	onLoad = "[""onLoad"",_this,""RscDisplayCustomizeController"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayCustomizeController"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayCustomizeController";
	scriptPath = "GUI";
	class ActiveAxis: RscPicture
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 320;
		text = "#(argb,8,8,3)color(1,1,1,0.5)";
		w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class AxisValue: RscText
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 1002;
		style = 1;
		vspacing = 0.05;
		w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "20.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Controls
	{
		class CA_B_ADVANCED: RscButtonMenu
		{
			default = 0;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 106;
			text = "Show";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_B_Cancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Cancel";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_B_Default: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 103;
			text = "Default curves";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.35 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_B_Default_Bind: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 105;
			text = "Schemes";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20.05 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_B_OK: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_B_Unmap: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			shortcuts[] = {"0x00050000 + 3"};
			text = "Unmap";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_Customize_Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			w = "25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Curve1: RscPicture
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1201;
			text = "A3\ui_f\data\gui\rsc\rscdisplaycustomizecontroller\curve_convex_ca.paa";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Curve2: RscPicture
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1202;
			text = "A3\ui_f\data\gui\rsc\rscdisplaycustomizecontroller\curve_linear_ca.paa";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Curve3: RscPicture
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1203;
			text = "A3\ui_f\data\gui\rsc\rscdisplaycustomizecontroller\curve_concave_ca.paa";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class DescriptionDeadZoneSlider: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1004;
			style = 2;
			text = "Dead Zone (max 10%)";
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "25.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class DescriptionSlider: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1003;
			style = 2;
			text = "Sensitivity";
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class G_ControlsGroup: RscControlsGroup
		{
			h = "16 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			w = "37 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class Controls {};
			class HScrollbar
			{
				color[] = {1, 1, 1, 0};
				height = 0.001;
			};
		};
		class PlayersName: RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 601;
			style = 1;
			w = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground
	{
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "20.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1081;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscTitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			h = "safezoneH";
			idc = 115099;
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
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
	class DeadZoneSlider: RscXSliderH
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 1901;
		style = "0x400	+ 0x10";
		type = 43;
		vspacing = 0.05;
		w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "24.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Slider: RscXSliderH
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 1900;
		vspacing = 0.015;
		w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "10.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Steepness: RscCombo
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 2100;
		values[] = {"1.0", "1.2", "1.5", "1.9", "2.4", "3.0"};
		vspacing = 0.05;
		w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Title: RscText
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 1001;
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		style = 256;
		text = "";
		w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
};
