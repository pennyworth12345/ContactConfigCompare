class ctrlShortcutButton: ctrlDefaultButton
{
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	color[] = {1, 1, 1, 1};
	color2[] = {1, 1, 1, 1};
	colorBackground[] = {0, 0, 0, 1};
	colorBackground2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
	colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorFocused[] = {1, 1, 1, 1};
	onButtonClick = "";
	onButtonDown = "";
	onButtonUp = "";
	onCanDestroy = "";
	onDestroy = "";
	onKeyDown = "";
	onKeyUp = "";
	onKillFocus = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseEnter = "";
	onMouseExit = "";
	onMouseHolding = "";
	onMouseMoving = "";
	onMouseZChanged = "";
	onSetFocus = "";
	period = 1;
	periodFocus = 1;
	periodOver = 0.5;
	shadow = 0;
	shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
	size = "4.86 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	style = 192;
	text = "";
	textureNoShortcut = "#(argb,8,8,3)color(1,1,1,1)";
	type = 16;
	class Attributes
	{
		align = "center";
		color = "#ffffff";
		font = "PuristaLight";
		shadow = 0;
	};
	class HitZone
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = 0;
	};
	class ShortcutPos
	{
		h = 0;
		left = 0;
		top = 0;
		w = 0;
	};
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = 0;
	};
};
