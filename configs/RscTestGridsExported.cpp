class RscTestGridsExported
{
	idd = -1;
	class Controls
	{
		class Background: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "safezoneH";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class GUI_GRID: RscText
		{
			colorBackground[] = {1, 0.5, 0.5, 1};
			colorText[] = {0, 0, 0, 1};
			h = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			shadow = 0;
			style = 2;
			text = "GUI_GRID";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (safezoneW * 0.25) - ((10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.5)";
			y = "safezoneY + (safezoneH * 0.25) - ((10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) * 0.5)";
		};
		class Pixel: GUI_GRID
		{
			colorBackground[] = {0.5, 1, 0.5, 1};
			h = "100 * pixelH";
			text = "pixel";
			w = "100 * pixelW";
			x = "safezoneX + (safezoneW * 0.75) - ((100 * pixelW) * 0.5)";
			y = "safezoneY + (safezoneH * 0.25) - ((100 * pixelH) * 0.5)";
		};
		class PixelGrid: GUI_GRID
		{
			colorBackground[] = {0.5, 0.5, 1, 1};
			h = "20 * pixelGrid * pixelH";
			text = "pixelGrid";
			w = "20 * pixelGrid * pixelW";
			x = "safezoneX + (safezoneW * 0.25) - ((20 * pixelGrid * pixelW) * 0.5)";
			y = "safezoneY + (safezoneH * 0.75) - ((20 * pixelGrid * pixelH) * 0.5)";
		};
		class PixelGridNoUIScale: GUI_GRID
		{
			colorBackground[] = {1, 1, 0.5, 1};
			h = "20 * pixelGridNoUIScale * pixelH";
			text = "pixelGridNoUIScale";
			w = "20 * pixelGridNoUIScale * pixelW";
			x = "safezoneX + (safezoneW * 0.75) - ((20 * pixelGridNoUIScale * pixelW) * 0.5)";
			y = "safezoneY + (safezoneH * 0.75) - ((20 * pixelGridNoUIScale * pixelH) * 0.5)";
		};
	};
};
