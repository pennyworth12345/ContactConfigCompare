class RscDisplayOptionsLayout
{
	enableSimulation = 0;
	idd = 154;
	onLoad = "[""onLoad"",_this,""RscDisplayOptionsLayout"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayOptionsLayout"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayOptionsLayout";
	scriptPath = "GUI";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonOK: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "22.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonSave: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2400;
			text = "SAVE";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CenterH: RscText
		{
			colorBackground[] = {0, 1, 1, 1};
			h = "safezoneH";
			idc = 1006;
			w = "0.002*(3/4)";
			x = 0.5;
			y = "safezoneY";
		};
		class CenterW: RscText
		{
			colorBackground[] = {0, 1, 1, 1};
			h = 0.002;
			idc = 1005;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = 0.5;
		};
		class Presets: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2101;
			w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class PresetsLabel: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1003;
			text = "Preset:";
			w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Tags: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2100;
			w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TagsText: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			text = "Category:";
			w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Title: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "CUSTOMIZE LAYOUT";
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Tooltip: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1100;
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = 0;
		};
	};
	class controlsBackground
	{
		class Element000: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12000;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element001: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12001;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element002: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12002;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element003: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12003;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element004: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12004;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element005: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12005;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element006: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12006;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element007: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12007;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element008: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12008;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element009: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12009;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element010: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12010;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element011: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12011;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element012: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12012;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element013: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12013;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element014: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12014;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element015: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12015;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element016: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12016;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element017: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12017;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element018: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12018;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element019: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12019;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element020: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12020;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
		class Element021: RscActiveText
		{
			color[] = {1, 1, 1, 1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 0;
			idc = 12021;
			shadow = 0;
			style = 48;
			w = 0;
			x = 0;
			y = 0;
		};
	};
};
