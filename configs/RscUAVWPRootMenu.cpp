class RscUAVWPRootMenu
{
	access = 0;
	atomic = 0;
	title = "";
	vocabulary = "";
	class Items
	{
		class Altitude
		{
			enable = "";
			menu = "RscUAVWPAltitude";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			speechId = 0;
			title = "Altitude";
		};
		class Back
		{
			command = -4;
			shortcuts[] = {14};
			speechId = 0;
			title = "";
		};
		class CancelWP
		{
			command = -5;
			enable = "";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "";
			speechId = 0;
			title = "Cancel Waypoint";
			class Params
			{
				expression = "'WP_CANCELWP' call BIS_fnc_guiMenuUAV";
			};
		};
		class CombatMode
		{
			enable = "";
			menu = "RscHCWPCombatMode";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "0";
			speechId = 0;
			title = "Combat Mode";
		};
		class CreateTask
		{
			command = -5;
			enable = "";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "0";
			speechId = 0;
			title = "Create Task";
			class Params
			{
				expression = "'WP_CREATETASK' call BIS_HC_path_menu";
			};
		};
		class FireMode
		{
			enable = "";
			menu = "RscUAVWPFireMode";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			speechId = 0;
			title = "Fire Mode";
		};
		class Formations
		{
			enable = "";
			menu = "RscUAVWPFormations";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
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
		class Speed
		{
			enable = "";
			menu = "RscHCWPSpeedMode";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "0";
			speechId = 0;
			title = "Speed";
		};
		class Type
		{
			enable = "";
			menu = "RscUAVWPType";
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
			show = "0";
			speechId = 0;
			title = "Timeout";
		};
		class WaitRadio
		{
			enable = "";
			menu = "#USER:HCWPWaitRadio";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "0";
			speechId = 0;
			title = "Radio";
		};
		class WaitUntil
		{
			enable = "";
			menu = "#USER:HCWPWaitUntil";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "0";
			speechId = 0;
			title = "Wait until";
		};
	};
};
