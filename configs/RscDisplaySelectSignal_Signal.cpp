class RscDisplaySelectSignal_Signal: RscControlsGroup
{
	h = "(4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
	w = "(38 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
	x = 0;
	y = 0;
	class Controls
	{
		class Background: RscText
		{
			colorBackground[] = {0.25, 0.25, 0.25, 0.7};
			h = "(4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2000;
			w = "(38 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = 0;
			y = 0;
		};
		class Button: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			colorBackgroundDisabled[] = {0, 0, 0, 0};
			colorDisabled[] = {0, 0, 0, 0};
			colorFocused[] = {0, 0, 0, 0};
			h = "(4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2004;
			style = 0;
			text = "";
			w = "(38 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = 0;
			y = 0;
		};
		class Duration: RscText
		{
			colorText[] = {1, 1, 1, 0.5};
			font = "RobotoCondensedLight";
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2011;
			shadow = 0;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 1;
			w = 0;
			x = 0;
			y = 0;
		};
		class Frame1: RscPicture
		{
			h = 0;
			idc = 2007;
			text = "#(rgb,1,1,1)color(1,1,1,1)";
			w = 0;
		};
		class Frame2: Frame1
		{
			idc = 2008;
		};
		class Frame3: Frame1
		{
			idc = 2009;
		};
		class Frame4: Frame1
		{
			idc = 2010;
		};
		class Gradient: RscPicture
		{
			colorText[] = {0, 0, 0, 0};
			h = "(4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2005;
			style = 48;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayFieldManual\gradient_ca.paa";
			w = "(38 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = 0;
			y = 0;
		};
		class MenuText: Text
		{
			font = "RobotoCondensedLight";
			idc = 2012;
			shadow = 1;
			show = 0;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "";
		};
		class Progress: RscText
		{
			colorBackground[] = {1, 1, 1, 0.24};
			fade = 1;
			h = 0;
			idc = 2013;
			w = 0;
			x = 0;
			y = 0;
		};
		class Text: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 0};
			h = 0;
			idc = 2002;
			shadow = 2;
			size = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "Schnobble";
			w = 0;
			x = 0;
			y = 0;
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class Waveform: RscPicture
		{
			colorText[] = {0.7, 0.7, 0.7, 1};
			h = "(4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2001;
			w = "(38 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = 0;
			y = 0;
		};
		class WaveformLine: RscPicture
		{
			colorText[] = {0.7, 0.7, 0.7, 1};
			h = "pixelH";
			idc = 2003;
			text = "#(rgb,1,1,1)color(1,1,1,1)";
			w = "(38 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = 0;
			y = 0;
		};
	};
};
