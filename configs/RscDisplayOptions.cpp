class RscDisplayOptions
{
	enableDisplay = 1;
	idd = 3;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayOptions"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayOptions"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayOptions";
	scriptPath = "GUI";
	class controls
	{
		class BAudio: RscButtonMenu
		{
			h = 0.05;
			idc = 302;
			text = "AUDIO OPTIONS";
			tooltip = "Set audio settings here.";
			w = 0.25;
			x = "0 + (1*0.25)";
			y = "(0.04 * safezoneH + safezoneY) + 0.075";
		};
		class BConfigure: RscButtonMenu
		{
			h = 0.05;
			idc = 303;
			text = "CONTROLS";
			tooltip = "Set controllers settings here.";
			w = 0.25;
			x = "0 + (2*0.25)";
			y = "(0.04 * safezoneH + safezoneY) + 0.075";
		};
		class BGameOptions: RscButtonMenu
		{
			h = 0.05;
			idc = 307;
			text = "GAME OPTIONS";
			tooltip = "Set miscellaneous settings here.";
			w = 0.25;
			x = "0 + (3*0.25)";
			y = "(0.04 * safezoneH + safezoneY) + 0.075";
		};
		class ButtonCancel: RscButtonMenu
		{
			colorBackground[] = {0, 0, 0, 0};
			h = 0.05;
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "BACK";
			w = 0.1;
			x = 0;
			y = "(1 * safezoneH + safezoneY) - 0.05";
		};
		class BVideo: RscButtonMenu
		{
			h = 0.05;
			idc = 301;
			text = "VIDEO OPTIONS";
			tooltip = "Set visibility, details or resolution here.";
			w = 0.25;
			x = 0;
			y = "(0.04 * safezoneH + safezoneY) + 0.075";
		};
		class CA_PlayerName: RscText
		{
			h = 0.07;
			idc = 109;
			style = 1;
			text = "TEST Player Name";
			w = "3*0.25";
			x = "0 + (1*0.25)";
			y = "0.04 * safezoneH + safezoneY";
		};
		class Title: RscTitle
		{
			colorText[] = {0.95, 0.95, 0.95, 1};
			h = 0.07;
			idc = 1000;
			style = 0;
			text = "OPTIONS";
			w = "1*0.25";
			x = 0;
			y = "0.04 * safezoneH + safezoneY";
		};
	};
	class controlsBackground
	{
		class CA_DialogBack: RscPicture
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "(0.9 * safezoneH)";
			idc = 1202;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			w = "4*0.25";
			x = 0;
			y = "(0.04 * safezoneH + safezoneY) + 0.13";
		};
		class CA_PlayBack: RscPicture
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = 0.07;
			idc = 1201;
			text = "#(argb,8,8,3)color(0,0,0,0.8)";
			w = "4*0.25";
			x = 0;
			y = "0.04 * safezoneH + safezoneY";
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
	class KeyHints
	{
		class KeyA
		{
			hint = "";
			key = "0x00050000 + 0";
		};
	};
};
