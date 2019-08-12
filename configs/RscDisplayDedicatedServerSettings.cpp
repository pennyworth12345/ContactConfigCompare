class RscDisplayDedicatedServerSettings: RscStandardDisplay
{
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayDedicatedServerSettings"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDedicatedServerSettings"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayDedicatedServerSettings";
	scriptPath = "GUI";
	class controls
	{
		class CA_B_Cancel: RscShortcutButton
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Cancel";
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_B_OK: RscShortcutButton
		{
			default = 1;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			text = "OK";
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "21 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_SliderMaxSlots: CA_SliderPrivateSlots
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 101;
			w = "29 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "16.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			class Value: Value
			{
				idc = 103;
			};
		};
		class CA_SliderPrivateSlots: RscXSliderH
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 104;
			w = "29 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "14.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			class Value
			{
				colorActive[] = {0.95, 0.95, 0.95, 1};
				colorBase[] = {0.95, 0.95, 0.95, 1};
				format = "%.0f%";
				idc = 106;
			};
		};
		class CA_Title_dedicated: CA_Title
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1000;
			text = "Dedicated Host";
			w = "30 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "12 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TitleMaxSlots: RscText
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 102;
			text = "Max. slots for typical mission:";
			w = "14.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "15.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TitlePrivateSlots: RscText
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 105;
			text = "Number of private slots:";
			w = "14.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "13.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ValueMaxSlots: CA_ValuePrivateSlots
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 103;
			w = "14.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "16 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "15.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ValuePrivateSlots: CA_TitlePrivateSlots
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 106;
			w = "14.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "16 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "13.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
	class controlsBackground
	{
		class BcgCommon: RscBackgroundGUI
		{
			backgroundType = 0;
			h = "7 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11000;
			w = "30 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "12 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonBottom: RscBackgroundGUIBottom
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11001;
			w = "30 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "12 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			7 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) 		 - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonLeft: RscBackgroundGUILeft
		{
			backgroundType = 0;
			h = "7 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11200;
			w = "30 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "12 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonRight: RscBackgroundGUIRight
		{
			backgroundType = 0;
			h = "7 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11201;
			w = "30 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "12 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonTop: RscBackgroundGUITop
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11002;
			w = "30 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "12 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
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
