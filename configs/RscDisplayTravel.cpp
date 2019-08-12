class RscDisplayTravel
{
	enableSimulation = 1;
	idd = -1;
	onLoad = "[""onLoad"",_this,""RscDisplayTravel"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayTravel"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayTravel";
	scriptPath = "ContactDisplays";
	class Controls
	{
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonOK: RscButtonMenuOK
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Destination: TitleDestination
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			sizeEx = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Base Foxtrot";
			y = "safezoneY + 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class Fade: RscText
		{
			colorBackground[] = {0, 0, 0, 0.9};
			h = "safezoneH";
			onLoad = "_ctrl = _this # 0; _ctrl ctrlsetfade 1; _ctrl ctrlcommit 0.5;";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class Hint: TitleDestination
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLoad = "(_this # 0) ctrlenable false;";
			style = 16;
			text = "Drag the minute hand to adjust time\nup to 12 hours forward.";
			y = "safezoneY + 16 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class MouseArea: RscText
		{
			h = "safezoneH - 2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 999;
			style = 16;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class Time: Destination
		{
			idc = 1002;
			y = "safezoneY + 7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class TimeArrival: Destination
		{
			idc = 1003;
			y = "safezoneY + 12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class TitleArrival: TitleDestination
		{
			text = "Arrival Time";
			y = "safezoneY + 11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class TitleDestination: RscText
		{
			colorText[] = {1, 1, 1, 0.45};
			font = "RobotoCondensedLight";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			shadow = 0;
			text = "Destination";
			w = "safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class TitleTime: TitleDestination
		{
			text = "Current Time";
			y = "safezoneY + 6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
	};
	class ControlsBackground
	{
		class Black: RscText
		{
			colorBackground[] = {0, 0, 0, 0.9};
			h = "safezoneH";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class ButtonBackground: RscPicture
		{
			colorText[] = {1, 1, 1, 0.075};
			h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayFieldManual\gradient_ca.paa";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY + safezoneH - 4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class Objects
	{
		class Watch: RscWatch
		{
			enableZoom = 0;
			idc = 1000;
			inBack = 0;
			model = "\a3\UI_F_Contact\Data\Objects\WatchDummy.p3d";
			position[] = {0, 0, 0.15};
			scale = 2;
			selectionDate1 = "";
			selectionDate2 = "";
			selectionDay = "";
		};
	};
};
