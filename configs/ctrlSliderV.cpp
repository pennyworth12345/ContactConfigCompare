class ctrlSliderV: ctrlDefault
{
	color[] = {0, 0, 0, 1};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	lineSize = 0.1;
	onCanDestroy = "";
	onDestroy = "";
	onKeyDown = "";
	onKeyUp = "";
	onKillFocus = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseHolding = "";
	onMouseMoving = "";
	onMouseZChanged = "";
	onSetFocus = "";
	onSliderPosChanged = "";
	pageSize = 3;
	sliderPosition = 1;
	sliderRange[] = {0, 1};
	style = 0;
	type = 3;
	class Title
	{
		colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
		colorBase[] = {1, 1, 1, 1};
		idc = -1;
	};
	class Value
	{
		colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
		colorBase[] = {1, 1, 1, 1};
		format = "%.f";
		idc = -1;
		type = "SPTPlain";
	};
};
