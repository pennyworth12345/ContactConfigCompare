class ctrlControlsGroup: ctrlDefault
{
	h = 1;
	onCanDestroy = "";
	onDestroy = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseHolding = "";
	onMouseMoving = "";
	onMouseZChanged = "";
	style = 16;
	type = 15;
	w = 1;
	x = 0;
	y = 0;
	class HScrollBar: ScrollBar
	{
		height = "2 * (pixelH * pixelGrid * 	0.50)";
		width = 0;
	};
	class VScrollBar: ScrollBar
	{
		autoScrollDelay = 1;
		autoScrollEnabled = 0;
		autoScrollRewind = 1;
		autoScrollSpeed = 1;
		height = 0;
		width = "2 * (pixelW * pixelGrid * 	0.50)";
	};
};
