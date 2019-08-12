class RscMapCategoriesSimple: RscMapCategories
{
	h = "((	1.5 * 	2 + 4) * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	idc = 2069;
	show = 0;
	y = "0.5 - 0.5 * ((	1.5 * 	2 + 4) * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	class Controls: Controls
	{
		class Categories: Categories
		{
			h = "1.5 * 	2 * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			rows = 2;
		};
		class GradientBottom: GradientBottom
		{
			rows = 2;
			y = "(	1.5 * 	2 + 2) * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class GradientTop: GradientTop {};
	};
};
