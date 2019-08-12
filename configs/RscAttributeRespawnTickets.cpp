class RscAttributeRespawnTickets: RscControlsGroupNoScrollbars
{
	h = "9.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 36632;
	onSetFocus = "[_this,""RscAttributeRespawnTickets"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35332;
			w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CIV: WEST
		{
			colorText[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35535;
			text = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CIVText: WESTText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35336;
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CIVValue: WESTValue
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 36235;
			tooltip = "Civilian";
			w = "22.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class EAST: WEST
		{
			colorText[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35533;
			text = "\a3\Ui_f\data\Map\Markers\NATO\o_unknown.paa";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class EASTText: WESTText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35334;
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class EASTValue: WESTValue
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 36233;
			tooltip = "OPFOR";
			w = "22.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GUER: WEST
		{
			colorText[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35534;
			text = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GuerText: WESTText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35335;
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GUERValue: WESTValue
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 36234;
			tooltip = "Independent";
			w = "22.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35337;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Bleed Tickets";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value: RscToolboxButton
		{
			columns = 2;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35338;
			rows = 1;
			strings[] = {"Disabled", "Enabled"};
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WEST: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35532;
			text = "\a3\Ui_f\data\Map\Markers\NATO\b_unknown.paa";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WESTText: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35333;
			shadow = 2;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "No playable slots are available.";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WESTValue: RscXSliderH
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 36232;
			tooltip = "BLUFOR";
			w = "22.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
