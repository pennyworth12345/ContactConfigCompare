class RscMenuMove: RscSubmenu
{
	title = "Move";
	vocabulary = "";
	class Items
	{
		class Advance
		{
			command = "CMD_ADVANCE";
			enable = "NotEmpty";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "IsLeader";
			speechId = 0;
			title = "Advance";
		};
		class FlankLeft
		{
			command = "CMD_FLANK_LEFT";
			enable = "NotEmpty";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "IsLeader";
			title = "Flank Left";
		};
		class FlankRight
		{
			command = "CMD_FLANK_RIGHT";
			enable = "NotEmpty";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "IsLeader";
			title = "Flank Right";
		};
		class Hide
		{
			command = "CMD_HIDE";
			enable = "NotEmpty";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "IsLeader";
			title = "Find cover";
		};
		class Join
		{
			command = "CMD_JOIN";
			enable = "NotEmpty + CommandsToPilot";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "IsLeader + VehicleCommander";
			speechId = 0;
			title = "Return to Formation";
		};
		class NextWP
		{
			command = "CMD_NEXT_WAYPOINT";
			enable = "NotEmpty + CommandsToPilot";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "IsLeader + VehicleCommander";
			speechId = 0;
			title = "Next waypoint";
		};
		class Separator1: Separator {};
		class Separator2: Separator {};
		class StayBack
		{
			command = "CMD_STAY_BACK";
			enable = "NotEmpty";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "IsLeader";
			speechId = 0;
			title = "Stay Back";
		};
		class Stop
		{
			command = "CMD_STOP";
			enable = "NotEmpty";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "IsLeader";
			speechId = 0;
			title = "Stop";
		};
	};
};
