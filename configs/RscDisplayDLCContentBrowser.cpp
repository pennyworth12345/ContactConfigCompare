class RscDisplayDLCContentBrowser
{
	enableDisplay = 1;
	idd = 174;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayDLCContentBrowser"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDLCContentBrowser"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayDLCContentBrowser";
	scriptPath = "GUI";
	class Controls
	{
		class ButtonClose: RscButtonMenuCancel
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Close";
			w = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class DLCGroup: RscControlsGroupNoScrollbars
		{
			h = "(0.8 * safezoneH)";
			idc = 1001;
			w = "(0.8 * safezoneW)";
			x = "0.5 - 0.5 * 	(0.8 * safezoneW)";
			y = "0.5 - 0.5 * 	(0.8 * safezoneH)";
			class Controls {};
		};
	};
	class ControlsBackground
	{
		class Background: RscText
		{
			colorBackground[] = {0.2, 0.2, 0.2, 1};
			h = "safezoneH";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class BohemiaInteractive: RscPicture
		{
			h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "\a3\Ui_f\data\Logos\bi_white_ca.paa";
			w = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1003;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY + safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class DLCBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "safezoneH";
			idc = 1002;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class Interlacing: RscInterlacingScreen {};
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 999;
			style = 16;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class Picture: RscPicture
		{
			colorText[] = {1, 1, 1, 0.15};
			h = "safezoneW * 1200/1920 * 4/3";
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCContentBrowser\background.jpg";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class Vinette: RscVignette
		{
			colorText[] = {0, 0, 0, 1};
		};
	};
};
