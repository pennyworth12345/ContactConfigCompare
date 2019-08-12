class RscHCMoveHigh
{
	access = 0;
	atomic = 0;
	title = "Move";
	vocabulary = "";
	class Items
	{
		class Back
		{
			command = -4;
			shortcuts[] = {"BACK"};
			speechId = 0;
			title = "";
		};
		class CancelAllWPs
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			speechId = 0;
			title = "Cancel All Waypoints";
			class Params
			{
				expression = "'CANCELALLWP' call BIS_HC_path_menu";
			};
		};
		class CancelWP
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			speechId = 0;
			title = "Cancel Last Waypoint";
			class Params
			{
				expression = "'CANCELWP' call BIS_HC_path_menu";
			};
		};
		class NextWP
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			speechId = 0;
			title = "Next Waypoint";
			class Params
			{
				expression = "'NEXTWP' call BIS_HC_path_menu";
			};
		};
	};
};
