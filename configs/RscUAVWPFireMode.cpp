class RscUAVWPFireMode
{
	access = 0;
	atomic = 0;
	title = "Fire mode";
	vocabulary = "";
	class items
	{
		class Fire
		{
			command = -5;
			enable = "";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			title = "Fire";
			class Params
			{
				expression = "'WP_FIRE_FIRE' call BIS_fnc_guiMenuUAV";
			};
		};
		class Full
		{
			command = -5;
			enable = "";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "0";
			title = "Full";
			class Params
			{
				expression = "'WP_SPEED_FULL' call BIS_fnc_guiMenuUAV";
			};
		};
		class HoldFire
		{
			command = -5;
			enable = "";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "Hold fire";
			class Params
			{
				expression = "'WP_FIRE_HOLD' call BIS_fnc_guiMenuUAV";
			};
		};
		class Limited
		{
			command = -5;
			enable = "";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "0";
			title = "Limited";
			class Params
			{
				expression = "'WP_SPEED_LIMITED' call BIS_fnc_guiMenuUAV";
			};
		};
		class Normal
		{
			command = -5;
			enable = "";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "0";
			title = "Normal";
			class Params
			{
				expression = "'WP_SPEED_NORMAL' call BIS_fnc_guiMenuUAV";
			};
		};
		class Unchanged
		{
			command = -5;
			enable = "";
			shortcuts[] = {11};
			shortcutsAction = "CommandingMenu0";
			show = "0";
			title = "No change";
			class Params
			{
				expression = "'WP_SPEED_UNCHANGED' call BIS_fnc_guiMenuUAV";
			};
		};
	};
};
