class RscMsgBoxError
{
	access = 0;
	class Bottom
	{
		class Button1: RscShortcutButton
		{
			action = "";
			color[] = {1, 1, 1, 1};
			colorActiveBackground[] = {1, 0.537, 0, 1};
			colorBackground[] = {1, 0.537, 0, 0.6};
			colorDisabled[] = {1, 1, 1, 0.25};
			colorText[] = {1, 0.537, 0, 1};
			default = 0;
			font = "TahomaB";
			h = 0.04;
			idc = 1;
			period = 0.5;
			size = 0.04;
			sizeEx = 0.04;
			soundClick[] = {"", 0.1, 1};
			soundEnter[] = {"", 0.1, 1};
			soundEscape[] = {"", 0.1, 1};
			soundPush[] = {"", 0.1, 1};
			style = 0;
			text = "OK";
			type = 16;
			w = 0.2;
			x = 0.4;
			y = 0.54;
			class Attributes
			{
				align = "center";
				color = "#E5E5E5";
				font = "TahomaB";
			};
			class AttributesImage
			{
				align = "center";
				color = "#E5E5E5";
				font = "TahomaB";
			};
		};
		class Button2: Button1
		{
			default = 1;
			idc = 2;
			text = "Cancel";
			x = 0.63;
		};
	};
	class Middle
	{
		class Background: RscText
		{
			colorBackground[] = {0.25, 0.25, 0.25, 1};
			h = 0.2;
			w = 0.7;
			x = 0.15;
			y = 0.4;
		};
		class SubBackground: RscText
		{
			colorBackground[] = {0.75, 0.75, 0.75, 1};
			h = 0.04;
			w = 0.66;
			x = 0.17;
			y = 0.48;
		};
		class Text: RscStructuredText
		{
			h = 0;
			idc = 101;
			size = 0.04;
			w = 0.62;
			x = 0.19;
			y = 0.5;
			class Attributes
			{
				align = "center";
				color = "#000000";
				font = "TahomaB";
				shadow = 0;
			};
		};
	};
	class Top
	{
		class Title: RscText
		{
			colorBackground[] = {0.2, 0.2, 0.2, 1};
			h = 0.1;
			style = 2;
			text = "Arma 3";
			w = 0.7;
			x = 0.15;
			y = 0.4;
		};
	};
};
