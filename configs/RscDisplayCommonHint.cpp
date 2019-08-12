class RscDisplayCommonHint: RscDisplayCommon
{
	enablesimulation = 0;
	name = "Common";
	onload = "uinamespace setvariable ['Hsim_RscDisplayCommonHint',_this select 0];";
	onunload = "uinamespace setvariable ['Hsim_RscDisplayCommonHint',nil];";
	class Controls
	{
		class ButtonLeft: RscShortcutButton
		{
			h = "0 * 1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1700;
			shortcuts[] = {"0x00050000 + 1"};
			w = "0 * 7 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "10 + 16 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 + 15 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonMiddle: RscShortcutButton
		{
			h = "0 * 1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1702;
			shortcuts[] = {"0x00050000 + 2"};
			w = "0 * 7 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "10 + 13 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 + 15 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonRight: RscShortcutButton
		{
			h = "0 * 1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1701;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			w = "0 * 7 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "10 + 9 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 + 15 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class HintGroup: RscControlsGroup
		{
			h = "0 * 4.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 2300;
			w = "0 * 8 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "10 + 14.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 + 10 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class HintText: RscStructuredText
				{
					h = "4.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 1100;
					w = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
		class HintHeader: RscStructuredText
		{
			h = "0 * 1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1101;
			w = "0 * 14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "10 + 9 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 + 4 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class HintListbox: RscListBox
		{
			idc = 1500;
			x = "10 + 14.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 + 5.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class HintPicture: RscPicture
		{
			h = "0 * 9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "0 * 4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "10 + 9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 + 5.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class ControlsBackground
	{
		class BcgCommon: RscBackgroundGUI
		{
			backgroundType = 0;
			h = "(uinamespace getvariable 'RscBackground_H')";
			idc = 11000;
			w = "(uinamespace getvariable 'RscBackground_W')";
			x = "(uinamespace getvariable 'RscBackground_X')";
			y = "(uinamespace getvariable 'RscBackground_Y')";
		};
		class BcgCommonBottom: RscBackgroundGUIBottom
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11001;
			w = "(uinamespace getvariable 'RscBackground_W')";
			x = "(uinamespace getvariable 'RscBackground_X')";
			y = "(uinamespace getvariable 'RscBackground_Y') +  		(uinamespace getvariable 'RscBackground_H') 	 - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonLeft: RscBackgroundGUILeft
		{
			backgroundType = 0;
			h = "(uinamespace getvariable 'RscBackground_H')";
			idc = 11200;
			w = "(uinamespace getvariable 'RscBackground_W')";
			x = "(uinamespace getvariable 'RscBackground_X')";
			y = "(uinamespace getvariable 'RscBackground_Y')";
		};
		class BcgCommonRight: RscBackgroundGUIRight
		{
			backgroundType = 0;
			h = "(uinamespace getvariable 'RscBackground_H')";
			idc = 11201;
			w = "(uinamespace getvariable 'RscBackground_W')";
			x = "(uinamespace getvariable 'RscBackground_X')";
			y = "(uinamespace getvariable 'RscBackground_Y')";
		};
		class BcgCommonTop: RscBackgroundGUITop
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11002;
			w = "(uinamespace getvariable 'RscBackground_W')";
			x = "(uinamespace getvariable 'RscBackground_X')";
			y = "(uinamespace getvariable 'RscBackground_Y')";
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
};
