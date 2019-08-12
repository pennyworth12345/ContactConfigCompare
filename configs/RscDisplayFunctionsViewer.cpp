class RscDisplayFunctionsViewer
{
	enableSimulation = 0;
	idd = 1321;
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayFunctionsViewer"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayFunctionsViewer"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayFunctionsViewer";
	scriptPath = "GUI";
	class controls
	{
		class Author: RscText
		{
			colorText[] = {1, 1, 1, 0.5};
			font = "RobotoCondensedLight";
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "safezoneW - 15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class BackgroundLeft: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "safezoneH - 4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			w = "13.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class BackgroundMeta: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1003;
			w = "safezoneW - 15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class BackgroundRight: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "safezoneH - 4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			w = "safezoneW - 15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ButtonClose: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Close";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "safezoneY + safezoneH - 1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonRecompileAll: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2400;
			text = "Recompile All";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "safezoneY + safezoneH - 1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonRecompileSelected: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2401;
			text = "";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "safezoneY + safezoneH - 1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Categories: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2102;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Functions: RscListBox
		{
			h = "safezoneH - 9.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1500;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Name: RscEdit
		{
			canModify = 0;
			h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1401;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			style = 512;
			w = "safezoneW - 15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Preview: RscControlsGroup
		{
			h = "safezoneH - 6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "safezoneW - 15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class Code: RscEdit
				{
					canModify = 0;
					colorText[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "safezoneH - 6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1400;
					linespacing = 1;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = "0x00 + 0x10 + 0x200";
					w = 4;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CodeBackground: RscText
				{
					colorBackground[] = {1, 1, 1, 1};
					h = "safezoneH - 6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = "IDC_RSCDISPLAYFUNCTIONSVIEWER_CODEBACKGROUND";
					w = 4;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Sources: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2100;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Tags: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2101;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Title: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "IDC_RSCDISPLAYFUNCTIONSVIEWER_TITLE";
			moving = 1;
			text = "Functions Viewer";
			w = "safezoneW - 2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
	};
};
