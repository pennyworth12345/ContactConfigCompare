class RscHCWPRootMenu
{
	access = 0;
	atomic = 0;
	title = "";
	vocabulary = "";
	class Items
	{
		class Back
		{
			command = -4;
			shortcuts[] = {14};
			shortcutsAction = "NavigateMenu";
			speechId = 0;
			title = "";
		};
		class CancelWP
		{
			command = -5;
			enable = "";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			show = "";
			speechId = 0;
			title = "Cancel Waypoint";
			class Params
			{
				expression = "'WP_CANCELWP' call BIS_HC_path_menu";
			};
		};
		class CombatMode
		{
			enable = "";
			menu = "RscHCWPCombatMode";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			speechId = 0;
			title = "Combat Mode";
		};
		class CreateTask
		{
			command = -5;
			enable = "";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "";
			speechId = 0;
			title = "Create Task";
			class Params
			{
				expression = "'WP_CREATETASK' call BIS_HC_path_menu";
			};
		};
		class Formations
		{
			enable = "";
			menu = "RscHCWPFormations";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			speechId = 0;
			title = "Formation";
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
		class Speed
		{
			enable = "";
			menu = "RscHCWPSpeedMode";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "";
			speechId = 0;
			title = "Speed";
		};
		class Type
		{
			enable = "";
			menu = "RscHCWPType";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			speechId = 0;
			title = "Type";
		};
		class Wait
		{
			enable = "";
			menu = "RscHCWPWait";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "";
			speechId = 0;
			title = "Timeout";
		};
		class WaitRadio
		{
			enable = "";
			menu = "#USER:HCWPWaitRadio";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "";
			speechId = 0;
			title = "Radio";
		};
		class WaitUntil
		{
			enable = "";
			menu = "#USER:HCWPWaitUntil";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "";
			speechId = 0;
			title = "Wait until";
		};
	};
};
