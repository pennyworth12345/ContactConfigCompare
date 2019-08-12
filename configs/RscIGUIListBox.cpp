class RscIGUIListBox: RscListBox
{
	color[] = {1, 1, 1, 1};
	colorBackground[] = {0, 0, 0, 0};
	colorScrollbar[] = {0.95, 0.95, 0.95, 1};
	colorSelect[] = {0.95, 0.95, 0.95, 1};
	colorSelect2[] = {0.95, 0.95, 0.95, 1};
	colorSelectBackground[] = {0, 0, 0, 0.4};
	colorSelectBackground2[] = {0, 0, 0, 1};
	colorText[] = {1, 1, 1, 1};
	period = 0;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	class ScrollBar: ScrollBar {};
};
