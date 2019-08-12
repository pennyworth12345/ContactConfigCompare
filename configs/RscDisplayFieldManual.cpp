class RscDisplayFieldManual: RscStandardDisplay
{
	idd = 162;
	onLoad = "[""onLoad"",_this,""RscDisplayFieldManual"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayFieldManual"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayFieldManual";
	scriptPath = "GUI";
	class controls
	{
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Back";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonTopicsSortDirection: RscActiveText
		{
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1006;
			style = 48;
			text = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			tooltip = "Sorted ascending.";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ButtonTopicsSortType: RscActiveText
		{
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			text = "L";
			tooltip = "Sorted logically.";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class DescriptionControlsGroup: RscControlsGroup
		{
			h = "SafezoneH - (9.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2300;
			w = "safezoneW - ((40 - 22.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "16.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (7.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			class controls
			{
				class HintDescription: RscStructuredText
				{
					h = "SafezoneH - (9.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					idc = 1100;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					w = "safezoneW - ((40 - 22) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class HintTitle: RscStructuredText
		{
			h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1101;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			w = "safezoneW - ((40 - 17.6) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class List: RscTree
		{
			colorBackground[] = {0, 0, 0, 0.7};
			colorPicture[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			colorPictureSelected[] = {0, 0, 0, 1};
			h = "SafezoneH - (5.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1500;
			idcSearch = 1400;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (3.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ListSearch: RscEdit
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1400;
			w = "13 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Picture: RscPicture
		{
			h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,0.1)";
			w = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class PlayersName: Title
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 8434;
			style = 1;
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - (11 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class StatGroup: RscControlsGroup
		{
			h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			show = 0;
			w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW -	(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "safezoneY + (2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			class controls
			{
				class Stat1: RscProgress
				{
					colorBar[] = {1, 1, 1, 1};
					colorFrame[] = {0, 0, 0, 0};
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1800;
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Stat2: Stat1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1801;
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Stat3: Stat1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1802;
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Stat4: Stat1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1803;
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatText1: RscText
				{
					colorBackground[] = {1, 1, 1, 0.1};
					colorShadow[] = {1, 1, 1, 1};
					colorText[] = {0, 0, 0, 1};
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1010;
					shadow = 1;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatText2: StatText1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1011;
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatText3: StatText1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1012;
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatText4: StatText1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1013;
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class TextTopics: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			text = "";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Title: RscTitle
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "Field Manual";
			w = "safezoneW - (2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
	};
	class controlsBackground
	{
		class HintContent: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "SafezoneH - (4.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = -1;
			w = "safezoneW - ((40 - 22.9) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "safezoneX + (16.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ModelBackground: RscPicture
		{
			colorText[] = {1, 1, 1, 0.2};
			fade = 1;
			h = "SafezoneH - (5.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 798;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayFieldManual\gradient_ca.paa";
			w = "safezoneW - ((40 - 22.9) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "safezoneX + (16.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + (3.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
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
		class Title: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = -1;
			w = "SafezoneW - (2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
	class Objects
	{
		class ObjectPreview: RscObject
		{
			direction[] = {-0.7, 0, 1};
			idc = 789;
			model = "\A3\Weapons_f\empty";
			scale = 1.2;
			type = 80;
			up[] = {0, 1, -0.1};
			x = "safezoneX + (16.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (safezoneW - 16.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			z = 1;
		};
	};
};
