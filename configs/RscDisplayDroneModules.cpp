class RscDisplayDroneModules
{
	enableSimulation = 1;
	idd = 9.9999e+006;
	onLoad = "[""onLoad"",_this,""RscDisplayDroneModules"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDroneModules"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayDroneModules";
	scriptPath = "ContactDisplays";
	class Controls
	{
		class Height_Edit: RscEdit
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1402;
			text = "-1";
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-20.2 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class IGUIBack_2200: IGUIBack
		{
			h = "38 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2200;
			w = "24.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-29.2 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "-7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Interval_Edit: RscEdit
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1400;
			text = "1";
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-20.2 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Radius_Edit: RscEdit
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1401;
			text = "1";
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-20.2 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscButtonMenu_2400: RscButtonMenu
		{
			colorBackground[] = {0, 0, 0, 0.8};
			colorText[] = {1, 1, 1, 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2400;
			text = "Create modules";
			w = "16.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-26.5 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "-6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscButtonMenu_2401: RscButtonMenu
		{
			colorBackground[] = {0, 0, 0, 0.8};
			colorText[] = {1, 1, 1, 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2401;
			text = "Delete modules";
			w = "16.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-26.5 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "-3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscButtonMenu_2402: RscButtonMenu
		{
			colorBackground[] = {0, 0, 0, 0.8};
			colorText[] = {1, 1, 1, 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2402;
			text = "Copy parameters";
			w = "16.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-26.5 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscSlider_1900: RscXSliderH
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1900;
			text = "Radius";
			w = "22.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-27.4 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "18.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscSlider_1901: RscXSliderH
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1901;
			text = "Interval";
			w = "22.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-27.4 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "12.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscSlider_1902: RscXSliderH
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1902;
			text = "Height offset";
			w = "22.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-27.4 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscSlider_1903: RscXSliderH
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1903;
			text = "Time to rotation";
			w = "22.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-27.5 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "24.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscText_1000: RscText
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "Interval";
			w = "22.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-27.4 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscText_1001: RscText
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			text = "Radius";
			w = "22.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-27.4 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "17 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscText_1004: RscText
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "Height offset";
			w = "22.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-27.4 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class RscText_1006: RscText
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			text = "Time to rotation";
			w = "22.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-27.5 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "22.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Time_Edit: RscEdit
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1403;
			text = "1";
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7";
			x = "(-20.5 + 2) * 					(			((safezoneW / safezoneH) min 1.2) / 40) * 0.7 + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "27 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class ControlsBackground
	{
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 6300;
			style = 16;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
	};
};
