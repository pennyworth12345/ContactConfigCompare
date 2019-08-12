class RscHCWPWait
{
	access = 0;
	atomic = 0;
	title = "Timeout";
	vocabulary = "";
	class items
	{
		class 10min
		{
			command = -5;
			enable = "";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "";
			title = "10 min";
			class Params
			{
				expression = "'WP_WAIT_10MIN' call BIS_HC_path_menu";
			};
		};
		class 15min
		{
			command = -5;
			enable = "";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "";
			title = "15 min";
			class Params
			{
				expression = "'WP_WAIT_15MIN' call BIS_HC_path_menu";
			};
		};
		class 1min
		{
			command = -5;
			enable = "";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "1 min";
			class Params
			{
				expression = "'WP_WAIT_1MIN' call BIS_HC_path_menu";
			};
		};
		class 20min
		{
			command = -5;
			enable = "";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "";
			title = "20 min";
			class Params
			{
				expression = "'WP_WAIT_20MIN' call BIS_HC_path_menu";
			};
		};
		class 25min
		{
			command = -5;
			enable = "";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "";
			title = "25 min";
			class Params
			{
				expression = "'WP_WAIT_25MIN' call BIS_HC_path_menu";
			};
		};
		class 30min
		{
			command = -5;
			enable = "";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "";
			title = "30 min";
			class Params
			{
				expression = "'WP_WAIT_30MIN' call BIS_HC_path_menu";
			};
		};
		class 45min
		{
			command = -5;
			enable = "";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			show = "";
			title = "45 min";
			class Params
			{
				expression = "'WP_WAIT_45MIN' call BIS_HC_path_menu";
			};
		};
		class 5min
		{
			command = -5;
			enable = "";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			title = "5 min";
			class Params
			{
				expression = "'WP_WAIT_5MIN' call BIS_HC_path_menu";
			};
		};
		class 60min
		{
			command = -5;
			enable = "";
			shortcuts[] = {11};
			shortcutsAction = "CommandingMenu0";
			show = "";
			title = "60 min";
			class Params
			{
				expression = "'WP_WAIT_60MIN' call BIS_HC_path_menu";
			};
		};
		class NoWait
		{
			command = -5;
			enable = "";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			title = "No Wait";
			class Params
			{
				expression = "'WP_WAIT_NO' call BIS_HC_path_menu";
			};
		};
	};
};
