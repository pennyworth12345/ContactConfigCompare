class RscHCWPSpeedMode
{
	access = 0;
	atomic = 0;
	title = "Speed";
	vocabulary = "";
	class items
	{
		class Full
		{
			command = -5;
			enable = "";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			title = "Full";
			class Params
			{
				expression = "'WP_SPEED_FULL' call BIS_HC_path_menu";
			};
		};
		class Limited
		{
			command = -5;
			enable = "";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			title = "Limited";
			class Params
			{
				expression = "'WP_SPEED_LIMITED' call BIS_HC_path_menu";
			};
		};
		class Normal
		{
			command = -5;
			enable = "";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "Normal";
			class Params
			{
				expression = "'WP_SPEED_NORMAL' call BIS_HC_path_menu";
			};
		};
		class Unchanged
		{
			command = -5;
			enable = "";
			shortcuts[] = {11};
			shortcutsAction = "CommandingMenu0";
			show = "";
			title = "No change";
			class Params
			{
				expression = "'WP_SPEED_UNCHANGED' call BIS_HC_path_menu";
			};
		};
	};
};
