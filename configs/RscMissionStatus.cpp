class RscMissionStatus: RscControlsGroupNoScrollbars
{
	h = "(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
	idc = 15283;
	w = "(2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
	x = "0 * 						(			((safezoneW / safezoneH) min 1.2) / 40) + 			(profilenamespace getvariable [""IGUI_GRID_MP_X"",		(safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(profilenamespace getvariable [""IGUI_GRID_MP_Y"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)])";
	class controls
	{
		class BarBridge: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13983;
			w = "1.5 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BarCIV: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", 0.75};
			h = "14.9 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13987;
			w = "0.5 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BarEAST: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", 0.75};
			h = "14.9 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13985;
			w = "0.5 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BarGUER: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", 0.75};
			h = "14.9 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13986;
			w = "0.5 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BarUnknown: RscText
		{
			colorBackground[] = {0.25, 0.25, 0.25, 0.75};
			h = "14.9 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13988;
			style = 16;
			w = "0.5 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BarWEST: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", 0.75};
			h = "14.9 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13984;
			w = "0.5 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot0: Slot1
		{
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14192;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "13.6 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot0Background: Slot1Background
		{
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14007;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "13.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot0Progress: Slot1Progress
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14008;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "13.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot0Text: Slot1Text
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 14102;
			y = "13.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot1: RscActivePictureKeepAspect
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14183;
			shadow = 0;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.1 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot1Background: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13989;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot1Progress: RscProgress
		{
			colorBar[] = {1, 1, 1, 0.5};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13990;
			style = 1;
			texture = "\a3\Ui_f\data\IGUI\RscTitles\MPProgress\progress_ca.paa";
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot1Text: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14093;
			shadow = 0;
			sizeEx = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			w = "2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.3 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot2: Slot1
		{
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14184;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.6 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot2Background: Slot1Background
		{
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13991;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot2Progress: Slot1Progress
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13992;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot2Text: Slot1Text
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 14094;
			y = "1.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot3: Slot1
		{
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14185;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3.1 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot3Background: Slot1Background
		{
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13993;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot3Progress: Slot1Progress
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13994;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot3Text: Slot1Text
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 14095;
			y = "3 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot4: Slot1
		{
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14186;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.6 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot4Background: Slot1Background
		{
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13995;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot4Progress: Slot1Progress
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13996;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot4Text: Slot1Text
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 14096;
			y = "4.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot5: Slot1
		{
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14187;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "6.1 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot5Background: Slot1Background
		{
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13997;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "6 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot5Progress: Slot1Progress
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13998;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "6 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot5Text: Slot1Text
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 14097;
			y = "6 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot6: Slot1
		{
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14188;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "7.6 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot6Background: Slot1Background
		{
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13999;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "7.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot6Progress: Slot1Progress
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14000;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "7.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot6Text: Slot1Text
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 14098;
			y = "7.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot7: Slot1
		{
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14189;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9.1 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot7Background: Slot1Background
		{
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14001;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot7Progress: Slot1Progress
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14002;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot7Text: Slot1Text
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 14099;
			y = "9 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot8: Slot1
		{
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14190;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "10.6 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot8Background: Slot1Background
		{
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14003;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "10.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot8Progress: Slot1Progress
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14004;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "10.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot8Text: Slot1Text
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 14100;
			y = "10.5 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot9: Slot1
		{
			h = "1.2 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14191;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "1.2 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.7 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "12.1 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot9Background: Slot1Background
		{
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14005;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "12 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot9Progress: Slot1Progress
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.4 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14006;
			w = "1.4 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 						(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "12 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Slot9Text: Slot1Text
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 14101;
			y = "12 * 						(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
