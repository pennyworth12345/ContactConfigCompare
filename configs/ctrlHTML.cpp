class ctrlHTML: ctrlDefaultText
{
	colorBackground[] = {0, 0, 0, 0};
	colorBold[] = {1, 1, 1, 0.5};
	colorLink[] = {1, 1, 1, 1};
	colorLinkActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
	colorPicture[] = {1, 1, 1, 1};
	colorPictureBorder[] = {0, 0, 0, 0};
	colorPictureLink[] = {1, 1, 1, 1};
	colorPictureSelected[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	cycleAllLinks = 0;
	cycleLinks = 0;
	filename = "";
	nextPage = "\a3\3DEN\Data\Controls\CtrlHTML\nextPage_ca.paa";
	onCanDestroy = "";
	onDestroy = "";
	onHTMLLink = "";
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
	prevPage = "\a3\3DEN\Data\Controls\CtrlHTML\prevPage_ca.paa";
	type = 9;
	class H1: P
	{
		sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	};
	class H2: P
	{
		sizeEx = "4.86 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	};
	class H3: P {};
	class H4: P {};
	class H5: P {};
	class H6: P
	{
		font = "RobotoCondensedLight";
		fontBold = "RobotoCondensedLight";
	};
	class P
	{
		font = "RobotoCondensedLight";
		fontBold = "RobotoCondensedBold";
		sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	};
};
