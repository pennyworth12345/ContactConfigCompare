class RscCustomInfoSlingLoad
{
	idd = 312;
	onLoad = "[""onLoad"",_this,""RscCustomInfoSlingLoad"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscCustomInfoSlingLoad"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscCustomInfoSlingLoad";
	scriptPath = "IGUI";
	class controls
	{
		class Background: RscIGUIText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.2};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = 0;
			y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class LiftProgress: RscProgress
		{
			colorBar[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = 0;
			y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SLAControlsGroup: RscControlsGroupNoScrollbars
		{
			h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 17302;
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.125 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class AltBarLadder: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					text = "\A3\Ui_f\data\GUI\Rsc\RscSlingLoadAssistant\SLA_AltLadder_ca.paa";
					w = "0.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40) - 0.875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class HeightBar: RscProgress
				{
					h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 105;
					style = 1;
					w = "0.375 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
					x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40) - 3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueVDist: TextVDist
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 102;
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40) - 3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 2.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class TextMaxAlt: RscIGUIValue
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 106;
			style = 1;
			w = "0.5 * 		(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "0.5 * 		(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = 0;
		};
		class Title: RscIGUIText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 15112;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "SLA";
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = 0;
			y = 0;
		};
		class ValueStatus: RscStructuredText
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 103;
			shadow = 0;
			size = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = 0;
			y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Attributes
			{
				align = "center";
			};
		};
	};
	class controlsBackground
	{
		class BackgroundMap: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1200;
			text = "A3\Ui_f\data\IGUI\RscCustomInfo\background_ca.paa";
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = 0;
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SLABackgroundGroup: RscControlsGroupNoScrollbars
		{
			h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 17301;
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.125 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Controls
			{
				class Circles: RscPictureKeepAspect
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					text = "\A3\Ui_f\data\GUI\Rsc\RscSlingLoadAssistant\SLA_Circles_ca.paa";
					w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.625 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.625 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
					h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 2.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 100;
					ShowCountourInterval = 0;
					w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 2.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = 0;
				};
				class Viewport: RscControlsGroupNoScrollbars
				{
					h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					IDC = 107;
					w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.125 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
};
