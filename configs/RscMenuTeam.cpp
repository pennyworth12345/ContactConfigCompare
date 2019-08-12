class RscMenuTeam: RscSubmenu
{
	title = "Assign";
	vocabulary = "";
	class Items
	{
		class AssignBlue
		{
			command = "CMD_ASSIGN_BLUE";
			enable = "NotEmpty";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "IsLeader";
			speechId = 0;
			title = "Assign Blue";
		};
		class AssignGreen
		{
			command = "CMD_ASSIGN_GREEN";
			enable = "NotEmpty";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "IsLeader";
			speechId = 0;
			title = "Assign Green";
		};
		class AssignMain
		{
			command = "CMD_ASSIGN_MAIN";
			enable = "NotEmpty";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "IsLeader";
			speechId = 0;
			title = "Assign White";
		};
		class AssignRed
		{
			command = "CMD_ASSIGN_RED";
			enable = "NotEmpty";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "IsLeader";
			speechId = 0;
			title = "Assign Red";
		};
		class AssignYellow
		{
			command = "CMD_ASSIGN_YELLOW";
			enable = "NotEmpty";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "IsLeader";
			speechId = 0;
			title = "Assign Yellow";
		};
		class SelectTeam
		{
			menu = "RscMenuSelectTeam";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			show = "IsLeader";
			title = "Team";
		};
		class Separator: Separator {};
	};
};
