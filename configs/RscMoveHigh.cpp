class RscMoveHigh: RscSubmenu
{
	items[] = {"Join", "Separator", "Advance", "StayBack", "FlankLeft", "FlankRight", "Separator", "Stop", "SeparatorUnderWater", "Ascend", "AscendRelative", "KeepDepthLeader", "Descend", "DescendRelative", "Expect", "Hide", "Separator", "NextWP", "Back"};
	title = "Move";
	vocabulary = "";
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
	class Ascend
	{
		command = "CMD_KEEP_DEPTH_ABOVESURFACE";
		enable = "NotEmpty";
		shortcuts[] = {8};
		shortcutsAction = "CommandingMenu7";
		show = "IsLeader * CursorOnSwimmingCommands";
		speechId = 0;
		title = "Ascend to surface";
	};
	class AscendRelative
	{
		command = "CMD_KEEP_DEPTH_RELATIVE_UP";
		enable = "NotEmpty";
		shortcuts[] = {0};
		show = "IsLeader * CursorOnSwimmingCommands * IsOutsideLeaderVehicle";
		speechId = 0;
		title = "Ascend (relatively)";
	};
	class Descend
	{
		command = "CMD_KEEP_DEPTH_BOTTOM";
		enable = "NotEmpty";
		shortcuts[] = {0};
		show = "IsLeader * CursorOnSwimmingCommands";
		speechId = 0;
		title = "Descend to bottom";
	};
	class DescendRelative
	{
		command = "CMD_KEEP_DEPTH_RELATIVE_DOWN";
		enable = "NotEmpty";
		shortcuts[] = {0};
		show = "IsLeader * CursorOnSwimmingCommands  * IsOutsideLeaderVehicle";
		speechId = 0;
		title = "Descend (relatively)";
	};
	class Expect
	{
		command = "CMD_EXPECT";
		enable = "NotEmpty";
		shortcuts[] = {8};
		shortcutsAction = "CommandingMenu7";
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		title = "Wait for me";
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
		shortcuts[] = {9};
		shortcutsAction = "CommandingMenu8";
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
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
	class KeepDepthLeader
	{
		command = "CMD_KEEP_DEPTH_LEADER";
		enable = "NotEmpty";
		shortcuts[] = {0};
		show = "IsLeader * CursorOnSwimmingCommands * IsOutsideLeaderVehicle";
		speechId = 0;
		title = "Copy my depth";
	};
	class NextWP
	{
		command = "CMD_NEXT_WAYPOINT";
		enable = "NotEmpty + CommandsToPilot";
		shortcuts[] = {10};
		shortcutsAction = "CommandingMenu9";
		show = "IsLeader + VehicleCommander";
		speechId = 0;
		title = "Next waypoint";
	};
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
