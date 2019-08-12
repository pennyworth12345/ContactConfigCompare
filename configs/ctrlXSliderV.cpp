class ctrlXSliderV: ctrlDefault
{
	arrowEmpty = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowEmpty_ca.paa";
	arrowFull = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowFull_ca.paa";
	border = "\a3\3DEN\Data\Controls\CtrlXSlider\border_ca.paa";
	color[] = {1, 1, 1, 0.6};
	colorActive[] = {1, 1, 1, 1};
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
	sliderPosition = 1;
	sliderRange[] = {0, 1};
	style = 0;
	thumb = "\a3\3DEN\Data\Controls\CtrlXSlider\thumb_ca.paa";
	type = 43;
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
