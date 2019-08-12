class RscDisplaySelectSignal
{
	enableSimulation = 1;
	idd = -1;
	onLoad = "[""onLoad"",_this,""RscDisplaySelectSignal"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplaySelectSignal"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplaySelectSignal";
	scriptPath = "ContactDisplays";
	class Controls
	{
		class AntennaName: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			text = "Showing signals for %1";
			w = "(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "0.5 - 	(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y = "0.5 + 	(3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 4 * pixelH";
		};
		class BorderLeft: RscText
		{
			colorBackground[] = {0.5, 0.5, 0.5, 1};
			h = "(3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "pixelW";
			x = "0.5 - 	(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2 - pixelW";
			y = 0.5;
		};
		class BorderRight: BorderLeft
		{
			x = "0.5 + 	(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2";
		};
		class Types: RscControlsGroup
		{
			h = "(3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1000;
			w = "(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "0.5 - 	(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y = 0.5;
			class Controls
			{
				class Background: RscPicture
				{
					colorText[] = {0.25, 0.25, 0.25, 0.75};
					h = "(3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					idc = 2000;
					text = "\a3\UI_F_Contact\Data\Displays\RscDisplaySelectSignal\types_background_ca.paa";
					w = "(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = 0;
					y = 0;
				};
			};
		};
		class Vignette: RscVignette
		{
			colorText[] = {0, 0, 0, 0.2};
		};
	};
	class ControlsBackground
	{
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 999;
			style = "0x10 + 0x200";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
	};
};
