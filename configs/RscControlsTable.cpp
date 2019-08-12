class RscControlsTable
{
	firstIDC = -1;
	h = 1;
	headerHeight = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = -1;
	lastIDC = -1;
	lineSpacing = 0;
	rowHeight = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	selectedRowAnimLength = 1.2;
	selectedRowColorFrom[] = {0.7, 0.85, 1, 0.25};
	selectedRowColorTo[] = {0.7, 0.85, 1, 0.5};
	style = 16;
	type = 19;
	w = 1;
	x = 0;
	y = 0;
	class HeaderTemplate {};
	class HScrollBar: ScrollBar
	{
		height = 0.028;
	};
	class RowTemplate {};
	class VScrollBar: ScrollBar
	{
		width = 0.021;
	};
};
