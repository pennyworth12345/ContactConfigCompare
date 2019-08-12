class RscMainMenu: RscSubmenu
{
	access = 0;
	atomic = 0;
	title = "Command";
	vocabulary = "";
	class Items
	{
		class Action
		{
			enable = "AreActions";
			menu = "#ACTION";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "IsLeader";
			speechId = 0;
			title = "Action";
		};
		class Back
		{
			command = -4;
			shortcuts[] = {14};
			shortcutsAction = "NavigateMenu";
			speechId = 0;
			title = "";
		};
		class CombatMode
		{
			enable = "NotEmpty + CommandsToGunner";
			menu = "RscMenuCombatMode";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "IsLeader + VehicleCommander";
			speechId = 0;
			title = "Combat Mode";
		};
		class Engage
		{
			enable = "NotEmpty + CommandsToGunner";
			menu = "RscMenuEngage";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "IsLeader + VehicleCommander";
			speechId = 0;
			title = "Engage";
		};
		class Formations
		{
			menu = "RscMenuFormations";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "IsLeader";
			speechId = 0;
			title = "Formation";
		};
		class GetIn
		{
			enable = "NotEmpty";
			menu = "#GET_IN";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "IsLeader";
			speechId = 0;
			title = "Mount";
		};
		class Move
		{
			enable = "NotEmpty + CommandsToPilot";
			menu = "RscMenuMove";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "IsLeader + VehicleCommander";
			speechId = 0;
			title = "Move";
		};
		class Reply
		{
			menu = "RscMenuReply";
			shortcuts[] = {11};
			shortcutsAction = "CommandingMenu0";
			speechId = 0;
			title = "Reply";
		};
		class Status
		{
			menu = "RscMenuStatus";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			speechId = 0;
			title = "Status";
		};
		class Target
		{
			enable = "NotEmpty + CommandsToGunner";
			menu = "#WATCH";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "IsLeader + VehicleCommander";
			speechId = 0;
			title = "Target";
		};
		class Team
		{
			menu = "RscMenuTeam";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			show = "IsLeader";
			speechId = 0;
			title = "Team";
		};
	};
};
