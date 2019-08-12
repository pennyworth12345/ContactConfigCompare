class RscDisplayDLCPreview_ListItemSquare: RscDisplayDLCPreview_ListItem
{
	w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	class Controls: Controls
	{
		class Background: Background
		{
			text = "#(argb,8,8,3)color(0,0,0,0)";
			w = "2.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class Button: Button
		{
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class Hover: Hover
		{
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class Picture: Picture
		{
			w = "2.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class Select: Select
		{
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
	};
};
