class RscSelectTeam: RscSubmenu
{
	items[] = {"TeamRed", "TeamGreen", "TeamBlue", "TeamYellow", "TeamMain", "Back"};
	title = "Team";
	vocabulary = "";
	class TeamBlue
	{
		command = "CMD_TEAM_BLUE";
		enable = "NotEmptyBlueTeam";
		shortcuts[] = {4};
		shortcutsAction = "CommandingMenu3";
		show = "IsLeader";
		title = "Blue";
	};
	class TeamGreen
	{
		command = "CMD_TEAM_GREEN";
		enable = "NotEmptyGreenTeam";
		shortcuts[] = {3};
		shortcutsAction = "CommandingMenu2";
		show = "IsLeader";
		title = "Green";
	};
	class TeamMain
	{
		command = "CMD_TEAM_MAIN";
		enable = "NotEmptyMainTeam";
		shortcuts[] = {6};
		shortcutsAction = "CommandingMenu5";
		show = "IsLeader";
		title = "White";
	};
	class TeamRed
	{
		command = "CMD_TEAM_RED";
		enable = "NotEmptyRedTeam";
		shortcuts[] = {2};
		shortcutsAction = "CommandingMenu1";
		show = "IsLeader";
		title = "Red";
	};
	class TeamYellow
	{
		command = "CMD_TEAM_YELLOW";
		enable = "NotEmptyYellowTeam";
		shortcuts[] = {5};
		shortcutsAction = "CommandingMenu4";
		show = "IsLeader";
		title = "Yellow";
	};
};
