class RscControlsGroup
{
	deletable = 0;
	fade = 0;
	h = 1;
	idc = -1;
	shadow = 0;
	style = 16;
	type = 15;
	w = 1;
	x = 0;
	y = 0;
	class Controls {};
	class HScrollbar: ScrollBar
	{
		color[] = {1, 1, 1, 1};
		height = 0.028;
	};
	class VScrollbar: ScrollBar
	{
		autoScrollEnabled = 1;
		color[] = {1, 1, 1, 1};
		width = 0.021;
	};
};
