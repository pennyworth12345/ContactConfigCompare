class RscDisplayNotFreezeBig: RscStandardDisplay
{
	idd = 100002;
	class controls
	{
		class CA_Text: CA_Title
		{
			font = "RobotoCondensed";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			onLoad = "[missionNamespace, ""OnSaveGame""] call (missionNamespace getVariable ""BIS_fnc_callScriptedEventHandler"");";
			style = "0x02 + 0x100";
			text = "ERROR - replace";
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 14 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2) + 8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class controlsBackground
	{
		class BackgroundOverlay: RscText
		{
			colorBackground[] = {0, 0, 0, 0.4};
			h = "safezoneH";
			idc = 1080;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class CA_Background: IGUIBack
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1083;
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 14 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2) + 8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Pause1: RscText
		{
			colorBackground[] = {1, 1, 1, 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1081;
			shadow = 2;
			w = "0.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Pause2: Pause1
		{
			idc = 1082;
			x = "safezoneX + safezoneW - 3.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class Vignette: RscVignette {};
	};
};
