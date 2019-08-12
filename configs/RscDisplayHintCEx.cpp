class RscDisplayHintCEx
{
	access = 0;
	idd = 72;
	indent = "\A3\ui_f\data\igui\rscingameui\rschint\indent_gr.paa";
	movingEnable = 1;
	soundOpen[] = {"", 0.5, 1};
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			colorText[] = {0, 0, 0, 0};
			fixedWidth = 0;
			font = "RobotoCondensed";
			h = 0.155;
			idc = 101;
			moving = 1;
			sizeEx = 0.1;
			style = 128;
			text = "";
			w = 0.7;
			x = 0.15;
			y = 0.4;
		};
		class continue: RscActiveText
		{
			color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorActive[] = {0.95, 0.95, 0.95, 1};
			font = "TahomaB";
			h = 0.035;
			idc = 104;
			SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 1;
			text = "Continue";
			w = 0.66;
			x = 0.17;
			y = 0.49;
		};
		class Hint: RscStructuredText
		{
			access = 0;
			h = 1;
			idc = 102;
			size = "( 16 / 408 )";
			style = 0;
			text = "STR_DISP_ERROR";
			type = 13;
			w = 0.66;
			x = 0.17;
			y = 0.48;
			class Attributes
			{
				color = "#FFFFFF";
				font = "RobotoCondensed";
				shadow = 0;
			};
		};
		class Line1: RscText
		{
			colorBackground[] = {0.8, 0.8, 0.8, 1};
			colorText[] = {1, 1, 1, 1};
			h = 0;
			idc = 105;
			style = 176;
			text = "";
			w = 0.66;
			x = 0.17;
			y = 0.48;
		};
		class Line2: RscText
		{
			color[] = {0.95, 0.95, 0.95, 1};
			colorBackground[] = {0.8, 0.8, 0.8, 1};
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = 0;
			idc = 106;
			style = 176;
			text = "";
			w = 0.66;
			x = 0.17;
			y = 0.48;
		};
		class Title: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			font = "TahomaB";
			h = 0.06;
			idc = 103;
			sizeEx = "( 21 / 408 )";
			style = 0;
			text = "STR_DISP_ERROR";
			w = 0.66;
			x = 0.17;
			y = 0.42;
		};
	};
};
