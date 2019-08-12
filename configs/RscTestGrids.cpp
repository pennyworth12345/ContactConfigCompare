class RscTestGrids
{
	idd = -1;
	onLoad = "[""onLoad"",_this,""RscTestGrids"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscTestGrids"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscTestGrids";
	scriptPath = "GUI";
	class Controls
	{
		class Menu: RscControlsGroup
		{
			h = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class Aspect: RscListBox
				{
					h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1501;
					w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Background: RscText
				{
					colorBackground[] = {0, 0, 0, 0.7};
					h = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonClose: RscButtonMenuCancel
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "Close";
					w = "8.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonCopy: RscButtonMenu
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 2400;
					text = "Copy to Clipboard";
					w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Resolution: RscListBox
				{
					h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1500;
					w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Title: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1000;
					text = "GUI Grids";
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TitleAspect: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1003;
					text = "Aspect ratio:";
					w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TitleResolution: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1002;
					text = "Resolution:";
					w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TitleUISize: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1004;
					text = "Interface size:";
					w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class UISize: RscListBox
				{
					h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1502;
					w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class ControlsBackground
	{
		class Background: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "safezoneH";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class Grid1: RscText
		{
			h = "safezoneH / 2";
			idc = 111;
			style = "0x10 + 0x200";
			w = "safezoneW / 2";
			x = "safezoneX";
			y = "safezoneY";
		};
		class Grid2: Grid1
		{
			idc = 112;
			x = "safezoneX + safezoneW / 2";
			y = "safezoneY";
		};
		class Grid3: Grid1
		{
			idc = 113;
			x = "safezoneX";
			y = "safezoneY + safezoneH / 2";
		};
		class Grid4: Grid1
		{
			idc = 114;
			x = "safezoneX + safezoneW / 2";
			y = "safezoneY + safezoneH / 2";
		};
		class Grids: RscControlsGroupNoScrollbars
		{
			h = 1;
			idc = 101;
			w = 1;
			x = 0;
			y = 0;
		};
	};
};
