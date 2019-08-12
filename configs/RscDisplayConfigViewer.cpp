class RscDisplayConfigViewer
{
	enableSimulation = 0;
	idd = 2928;
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayConfigViewer"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayConfigViewer"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayConfigViewer";
	scriptPath = "GUI";
	class controls
	{
		class BackgroundCustom: RscText
		{
			colorbackground[] = {0, 0, 0, 0.5};
			h = 0;
			idc = 1005;
			w = 0;
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ButtonClose: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Close";
			w = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonOK: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2600;
			w = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ButtonPreviewClass: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2400;
			text = "Preview Class";
			w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonPreviewParam: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2401;
			text = "Preview Param";
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroupCustom: RscControlsGroup
		{
			h = "safezoneH - 4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			w = "safezoneW - (					((safezoneW / safezoneH) min 1.2) - (40-15.2) * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "14 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class CustomText: RscStructuredText
				{
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1100;
					w = "safezoneW - (					((safezoneW / safezoneH) min 1.2) - (40-15.2) * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class GroupDefault: RscControlsGroupNoScrollbars
		{
			h = "safezoneH - 4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "safezoneW - (					((safezoneW / safezoneH) min 1.2) - (40-15.2) * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "14 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class ListParams: ListClasses
				{
					h = "safezoneH - 7.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1501;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "safezoneW - (					((safezoneW / safezoneH) min 1.2) - (40-15.2) * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ParentsText: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1004;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "Parents:";
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneH - 7.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				};
				class ParentsValue: RscEdit
				{
					font = "EtelkaMonospacePro";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1401;
					shadow = 0;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "safezoneW - (					((safezoneW / safezoneH) min 1.2) - (40-18.2) * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneH - 7.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				};
				class PathText: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1003;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "Path:";
					w = "safezoneW - (					((safezoneW / safezoneH) min 1.2) - 16.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneH - 7.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				};
				class PathValue: RscEdit
				{
					font = "EtelkaMonospacePro";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1400;
					shadow = 0;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "safezoneW - (					((safezoneW / safezoneH) min 1.2) - (40-18.2) * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneH - 7.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				};
				class SearchParams: SearchClasses
				{
					font = "RobotoCondensedBold";
					h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1002;
					sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.55";
					w = "24.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class ListClasses: RscListBox
		{
			colorbackground[] = {0, 0, 0, 0.5};
			font = "EtelkaMonospacePro";
			h = "safezoneH - 4.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1500;
			sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ListFavorites: ListClasses
		{
			font = "RobotoCondensedBold";
			h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1502;
			sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "safezoneY + safezoneH - 7.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SearchClasses: RscText
		{
			font = "RobotoCondensedBold";
			h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.55";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Title: CA_Title
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "Splendid Config Viewer";
			w = "37 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TitleIcon: RscPicture
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1200;
			text = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_config_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
	};
	class controlsBackground
	{
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "SafezoneH - (4.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 11000;
			w = "safezoneW - 2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = -1;
			moving = 1;
			w = "safezoneW - 2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
	};
};
