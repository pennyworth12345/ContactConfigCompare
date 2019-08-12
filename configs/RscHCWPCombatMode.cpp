class RscHCWPCombatMode
{
	access = 0;
	atomic = 0;
	title = "Combat Mode";
	vocabulary = "";
	class items
	{
		class Aware
		{
			command = -5;
			enable = "";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			title = "Aware";
			class Params
			{
				expression = "'WP_COMBAT_AWARE' call BIS_HC_path_menu";
			};
		};
		class Combat
		{
			command = -5;
			enable = "";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "Combat";
			class Params
			{
				expression = "'WP_COMBAT_DANGER' call BIS_HC_path_menu";
			};
		};
		class Safe
		{
			command = -5;
			enable = "";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "";
			title = "Safe";
			class Params
			{
				expression = "'WP_COMBAT_SAFE' call BIS_HC_path_menu";
			};
		};
		class Stealth
		{
			command = -5;
			enable = "";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			title = "Stealth";
			class Params
			{
				expression = "'WP_COMBAT_STEALTH' call BIS_HC_path_menu";
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
				expression = "'WP_COMBAT_UNCHANGED' call BIS_HC_path_menu";
			};
		};
	};
};
