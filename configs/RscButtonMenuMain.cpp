class RscButtonMenuMain: RscButtonMenu
{
	animTextureDefault = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureDisabled = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(0,0,0,1)";
	colorBackground[] = {1, 1, 1, 0.75};
	colorBackground2[] = {1, 1, 1, 1};
	colorBackgroundFocused[] = {1, 1, 1, 1};
	size = "(pixelH * pixelGrid * 2)";
	style = "0x00 + 0xC0";
	class Attributes
	{
		align = "left";
		color = "#ffffff";
		font = "PuristaLight";
	};
	class TextPos
	{
		bottom = "0.1 * 	1.5 * 	(pixelH * pixelGrid * 2)";
		left = "0.1 * 	1.5 * 	(pixelW * pixelGrid * 2)";
		right = "0.1 * 	1.5 * 	(pixelW * pixelGrid * 2)";
		top = "0.1 * 	1.5 * 	(pixelH * pixelGrid * 2)";
	};
};
