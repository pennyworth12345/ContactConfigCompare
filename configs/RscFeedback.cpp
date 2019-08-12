class RscFeedback: RscHTML
{
	colorBackground[] = {0.67451, 0.290196, 0.290196, 1};
	colorLink[] = {1, 1, 1, 1};
	colorLinkActive[] = {1, 1, 1, 1};
	h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 6455;
	shadow = 0;
	w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "safezoneY";
	class P
	{
		align = "center";
		font = "RobotoCondensedBold";
		fontBold = "RobotoCondensedBold";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
};
