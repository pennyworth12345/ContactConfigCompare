class RscHCWPType
{
	access = 0;
	atomic = 0;
	title = "Type";
	vocabulary = "";
	class items
	{
		class Cycle
		{
			command = -5;
			enable = "";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "CYCLE";
			class Params
			{
				expression = "'WP_TYPE_CYCLE' call BIS_HC_path_menu";
			};
		};
		class GetIn
		{
			command = -5;
			enable = "";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "";
			title = "GET IN";
			class Params
			{
				expression = "'WP_TYPE_GETIN' call BIS_HC_path_menu";
			};
		};
		class GetOut
		{
			command = -5;
			enable = "";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "";
			title = "GET OUT";
			class Params
			{
				expression = "'WP_TYPE_GETOUT' call BIS_HC_path_menu";
			};
		};
		class Guard
		{
			command = -5;
			enable = "";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "";
			title = "GUARD";
			class Params
			{
				expression = "'WP_TYPE_GUARD' call BIS_HC_path_menu";
			};
		};
		class Load
		{
			command = -5;
			enable = "";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "";
			title = "LOAD";
			class Params
			{
				expression = "'WP_TYPE_LOAD' call BIS_HC_path_menu";
			};
		};
		class Move
		{
			command = -5;
			enable = "";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			title = "MOVE";
			class Params
			{
				expression = "'WP_TYPE_MOVE' call BIS_HC_path_menu";
			};
		};
		class SAD
		{
			command = -5;
			enable = "";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			title = "SEEK AND DESTROY";
			class Params
			{
				expression = "'WP_TYPE_SAD' call BIS_HC_path_menu";
			};
		};
		class Separator1
		{
			command = -1;
			shortcuts[] = {0};
			title = "";
		};
		class Separator2
		{
			command = -1;
			shortcuts[] = {0};
			title = "";
		};
		class Unload
		{
			command = -5;
			enable = "";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "";
			title = "UNLOAD";
			class Params
			{
				expression = "'WP_TYPE_UNLOAD' call BIS_HC_path_menu";
			};
		};
	};
};
