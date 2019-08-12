class RscUAVWPAltitude
{
	access = 0;
	atomic = 0;
	title = "Altitude";
	vocabulary = "";
	class items
	{
		class AltDefault
		{
			command = -5;
			enable = "";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "";
			title = "Default Altitude";
			class Params
			{
				expression = "'WP_ALT_100' call BIS_fnc_guiMenuUAV";
			};
		};
		class AltHigh
		{
			command = -5;
			enable = "";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			title = "High Altitude";
			class Params
			{
				expression = "'WP_ALT_1000' call BIS_fnc_guiMenuUAV";
			};
		};
		class AltLow
		{
			command = -5;
			enable = "";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			title = "Copy Ground";
			class Params
			{
				expression = "'WP_ALT_20' call BIS_fnc_guiMenuUAV";
			};
		};
		class AltMed
		{
			command = -5;
			enable = "";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "Travel Altitude";
			class Params
			{
				expression = "'WP_ALT_300' call BIS_fnc_guiMenuUAV";
			};
		};
	};
};
