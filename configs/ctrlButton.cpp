class ctrlButton: ctrlDefaultButton
{
	borderSize = 0;
	colorBackground[] = {0, 0, 0, 1};
	colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
	colorBackgroundDisabled[] = {0, 0, 0, 0.5};
	colorBorder[] = {0, 0, 0, 0};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
	colorShadow[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	font = "PuristaLight";
	offsetPressedX = "pixelW";
	offsetPressedY = "pixelH";
	offsetX = 0;
	offsetY = 0;
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
	period = 0;
	periodFocus = 2;
	periodOver = 0.5;
	style = "0x02 + 0xC0";
	text = "";
	type = 1;
	class KeyHints
	{
		class A
		{
			hint = "KEY_XBOX_A";
			key = "0x00050000 + 0";
		};
	};
};
