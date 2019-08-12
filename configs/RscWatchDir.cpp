class RscWatchDir: RscSubmenu
{
	items[] = {"OpenFire", "HoldFire", "Fire", "Separator", "Engage", "EngageAtWill", "Disengage", "Separator", "LookAround", "WatchDir", "Separator", "Suppress", "Back"};
	title = "Engage";
	vocabulary = "";
	class Auto
	{
		command = "CMD_WATCH_AUTO";
		enable = "NotEmpty";
		shortcuts[] = {8};
		shortcutsAction = "CommandingMenu7";
		show = "IsLeader";
		title = "No target";
	};
	class Disengage
	{
		command = "CMD_KEEP_FORM";
		enable = "NotEmpty";
		shortcuts[] = {7};
		shortcutsAction = "CommandingMenu6";
		show = "IsLeader";
		title = "Disengage";
	};
	class Engage
	{
		command = "CMD_ENGAGE";
		enable = "NotEmpty";
		shortcuts[] = {5};
		shortcutsAction = "CommandingMenu4";
		show = "IsLeader";
		title = "Engage";
	};
	class EngageAtWill
	{
		command = "CMD_LOOSE_FORM";
		enable = "NotEmpty";
		shortcuts[] = {6};
		shortcutsAction = "CommandingMenu5";
		show = "IsLeader";
		title = "Engage at will";
	};
	class Fire
	{
		command = "CMD_FIRE";
		enable = "NotEmpty";
		shortcuts[] = {4};
		shortcutsAction = "CommandingMenu3";
		show = "IsLeader";
		title = "Fire";
	};
	class HoldFire
	{
		command = "CMD_HOLD_FIRE";
		enable = "NotEmpty + CommandsToGunner";
		shortcuts[] = {3};
		shortcutsAction = "CommandingMenu2";
		show = "IsLeader + VehicleCommander";
		title = "Hold fire";
	};
	class LookAround
	{
		command = "CMD_WATCH_AROUND";
		enable = "NotEmpty";
		shortcuts[] = {8};
		shortcutsAction = "CommandingMenu7";
		show = "IsLeader";
		speechId = 0;
		title = "Scan horizon";
	};
	class OpenFire
	{
		command = "CMD_OPEN_FIRE";
		enable = "NotEmpty + CommandsToGunner";
		shortcuts[] = {2};
		shortcutsAction = "CommandingMenu1";
		show = "IsLeader + VehicleCommander";
		title = "Open fire";
	};
	class Suppress
	{
		command = "CMD_SUPPRESS";
		enable = "NotEmpty";
		shortcuts[] = {10};
		shortcutsAction = "CommandingMenu9";
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		speechId = 0;
		title = "Suppressive fire";
	};
	class WatchDir
	{
		enable = "NotEmpty";
		menu = "RscWatchMoreDir";
		shortcuts[] = {9};
		shortcutsAction = "CommandingMenu8";
		show = "IsLeader";
		speechId = 0;
		title = "Watch Direction";
	};
};
