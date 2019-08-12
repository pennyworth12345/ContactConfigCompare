class RscCombo
{
	access = 0;
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	colorActive[] = {1, 0, 0, 1};
	colorBackground[] = {0, 0, 0, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorPicture[] = {1, 1, 1, 1};
	colorPictureDisabled[] = {1, 1, 1, 0.25};
	colorPictureRight[] = {1, 1, 1, 1};
	colorPictureRightDisabled[] = {1, 1, 1, 0.25};
	colorPictureRightSelected[] = {1, 1, 1, 1};
	colorPictureSelected[] = {1, 1, 1, 1};
	colorScrollbar[] = {1, 0, 0, 1};
	colorSelect[] = {0, 0, 0, 1};
	colorSelect2Right[] = {0, 0, 0, 1};
	colorSelectBackground[] = {1, 1, 1, 0.7};
	colorSelectRight[] = {0, 0, 0, 1};
	colorText[] = {1, 1, 1, 1};
	colorTextRight[] = {1, 1, 1, 1};
	deletable = 0;
	fade = 0;
	font = "RobotoCondensed";
	h = 0.035;
	maxHistoryDelay = 1;
	shadow = 0;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse", 0.1, 1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand", 0.1, 1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect", 0.1, 1};
	style = "0x10 + 0x200";
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	tooltipColorText[] = {1, 1, 1, 1};
	type = 4;
	w = 0.12;
	wholeHeight = 0.45;
	x = 0;
	y = 0;
	class ComboScrollBar: ScrollBar
	{
		color[] = {1, 1, 1, 1};
	};
};
