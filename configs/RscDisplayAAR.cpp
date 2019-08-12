class RscDisplayAAR
{
	enableSimulation = 0;
	idd = 2121;
	onLoad = "[""onLoad"",_this,""RscDisplayAAR"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAAR"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAAR";
	scriptPath = "GUI";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {0.65, 0.65, 0.65, 1};
			colorText[] = {0, 0, 0, 1};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			shadow = 0;
			w = "safezoneW";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class BackgroundGradient: RscPicture
		{
			colorText[] = {0, 0, 0, 0.25};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1201;
			text = "\A3\ui_f\data\map\diary\gradient_gs.paa";
			w = "safezoneW";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class BackgroundTop: RscStructuredText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1100;
			w = "safezoneW";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class BackgroundTopGradient: RscPicture
		{
			colorText[] = {1, 1, 1, 0.15};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1200;
			text = "\A3\ui_f\data\map\diary\gradient_gs.paa";
			w = "safezoneW";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_0: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11380;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_1: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11381;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_10: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 113810;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_2: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11382;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_3: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11383;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_4: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11384;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_5: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11385;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_6: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11386;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_7: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11387;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_8: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11388;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Dead_9: RscText
		{
			colorBackground[] = {1, 0, 0, 0};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11389;
			w = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ListMissions: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2100;
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ListSessions: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2101;
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TimeLine: RscSlider
		{
			color[] = {0, 0, 0, 1};
			colorActive[] = {0, 0, 0, 1};
			h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1900;
			w = "safezoneW - 3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
	};
	class controlsBackground
	{
		class Map: RscMapControl
		{
			alphaFadeEndScale = 0;
			alphaFadeStartScale = 0;
			h = "safezoneH - 2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 2201;
			maxSatelliteAlpha = 0;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
	};
};
