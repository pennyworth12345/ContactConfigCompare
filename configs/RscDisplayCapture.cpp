class RscDisplayCapture
{
	idd = 149;
	class Controls
	{
		class Background: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "safezoneH - 4.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			moving = 1;
			w = "safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "safezoneY + 2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonAverages: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 110;
			shortcuts[] = {};
			text = "Averages";
			w = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "21.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.09 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonExport: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 105;
			text = "Copy";
			w = "6.09 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.19 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonExportAll: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 107;
			text = "Copy All";
			w = "6.09 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.38 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonImportAll: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 108;
			text = "Paste All";
			w = "6.09 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.57 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonPreviousData: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 109;
			shortcuts[] = {};
			text = "Show archived";
			w = "6.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.11 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonSavePreviousData: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 111;
			shortcuts[] = {};
			text = "Save archive";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "25.76 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonZoomIn: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 103;
			text = "Zoom +";
			w = "5.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneW + safezoneW - 7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			y = "safezoneY + 11.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonZoomOut: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			text = "Zoom -";
			w = "5.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneW + safezoneW - 13 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			y = "safezoneY + 11.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Index: RscTree
		{
			font = "RobotoCondensedLight";
			h = "safezoneH - 17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "safezoneW - 2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "safezoneY + 13.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Info: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 106;
			sizeEx = 0.027;
			text = "Info about the selection";
			w = "safezoneW - 2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "safezoneY + 12.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SearchEdit: RscEdit
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 112;
			w = "21.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "safezoneY + 11.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SearchText: RscText
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			text = "Search:";
			w = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "safezoneY + 11.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TimeLines: RscText
		{
			colorBackground[] = {1, 1, 1, 1};
			colorBar[] = {0.8, 0.8, 0.8, 1};
			colorLines[] = {0, 0, 0, 1};
			colorSelection[] = {1, 0, 0, 1};
			font = "TahomaB";
			h = "9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			shadow = 0;
			style = 0;
			type = 99;
			w = "safezoneW - 2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "safezoneY + 2.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Scrollbar {};
		};
		class Title: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			moving = 1;
			text = "DIAG CAPTURE";
			w = "safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "safezoneY + 1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class controlsBackground {};
};
