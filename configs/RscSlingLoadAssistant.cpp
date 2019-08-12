class RscSlingLoadAssistant
{
	idd = 173;
	onLoad = "[""onLoad"",_this,""RscSlingLoadAssistant"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscSlingLoadAssistant"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscSlingLoadAssistant";
	scriptPath = "GUI";
	class controls
	{
		class SLAControlsGroup: RscControlsGroupNoScrollbars
		{
			h = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			idc = 17302;
			w = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_W',	(7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_X',	(safezoneX + safezoneW - 8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_Y',	(safezoneY + safezoneH - 19.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class AltBarLadder: RscPicture
				{
					h = "5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					text = "\A3\Ui_f\data\GUI\Rsc\RscSlingLoadAssistant\SLA_AltLadder_ca.paa";
					w = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Background: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.8};
					h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_W',	(7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class HeightBar: RscProgress
				{
					h = "5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 105;
					style = 1;
					w = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LiftProgress: RscProgress
				{
					colorBar[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
					h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 104;
					w = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_W',	(7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextHDist: RscText
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "HDIST:";
					w = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextMaxAlt: RscText
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 106;
					shadow = 0;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "5.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextStatus: RscText
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1006;
					shadow = 0;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "ROPE STAT:";
					w = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextVDist: RscText
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1004;
					shadow = 0;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					text = "ALT";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 2.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Title: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.8};
					h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1000;
					shadow = 0;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "SL Assistant";
					w = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_W',	(7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueHDist: RscText
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 101;
					shadow = 0;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "5.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueStatus: RscStructuredText
				{
					h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 103;
					shadow = 0;
					size = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					w = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_W',	(7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						align = "center";
					};
				};
				class ValueVDist: RscText
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 102;
					shadow = 0;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "5.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 2.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class controlsBackground
	{
		class SLABackgroundGroup: RscControlsGroupNoScrollbars
		{
			h = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 17301;
			w = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_W',	(7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_X',	(safezoneX + safezoneW - 8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_Y',	(safezoneY + safezoneH - 19.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Controls
			{
				class BackgroundMap: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					text = "\A3\ui_f\data\igui\rscingameui\rscminimap\gradient_gs.paa";
					w = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_W',	(7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = 0;
					y = 0;
				};
				class Circles: RscPictureKeepAspect
				{
					h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					text = "\A3\Ui_f\data\GUI\Rsc\RscSlingLoadAssistant\SLA_Circles_ca.paa";
					w = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Map: RscMapControlEmpty
				{
					colorBackground[] = {0, 0, 0, 0};
					colorMainRoads[] = {0, 0, 0, 0};
					colorMainRoadsFill[] = {0, 0, 0, 0};
					colorOutside[] = {0, 0, 0, 0};
					colorRoads[] = {0, 0, 0, 0};
					colorRoadsFill[] = {0, 0, 0, 0};
					colorTracks[] = {0, 0, 0, 0};
					colorTracksFill[] = {0, 0, 0, 0};
					h = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_H',	(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 100;
					ShowCountourInterval = 0;
					w = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_W',	(7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_X',	(safezoneX + safezoneW - 8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					y = "(profilenamespace getvariable ['IGUI_GRID_SLINGLOADASSISTANT_Y',	(safezoneY + safezoneH - 19.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
};
