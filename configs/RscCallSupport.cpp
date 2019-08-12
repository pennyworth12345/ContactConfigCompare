class RscCallSupport: RscSubmenu
{
	items[] = {"Medic", "Ambulance", "Repair", "Rearm", "Refuel", "Done", "Back"};
	title = "Call support";
	vocabulary = "";
	class Ambulance
	{
		command = "CMD_SUPPORT_AMBULANCE";
		shortcuts[] = {3};
		shortcutsAction = "CommandingMenu2";
		show = "IsLeader";
		speechId = 0;
		title = "Ambulance";
	};
	class Done
	{
		command = "CMD_SUPPORT_DONE";
		shortcuts[] = {7};
		shortcutsAction = "CommandingMenu6";
		show = "IsLeader";
		speechId = 0;
		title = "Done";
	};
	class Medic
	{
		command = "CMD_SUPPORT_MEDIC";
		shortcuts[] = {2};
		shortcutsAction = "CommandingMenu1";
		show = "IsLeader";
		speechId = 0;
		title = "Medic";
	};
	class Rearm
	{
		command = "CMD_SUPPORT_REARM";
		shortcuts[] = {5};
		shortcutsAction = "CommandingMenu4";
		show = "IsLeader";
		speechId = 0;
		title = "Rearm truck";
	};
	class Refuel
	{
		command = "CMD_SUPPORT_REFUEL";
		shortcuts[] = {6};
		shortcutsAction = "CommandingMenu5";
		show = "IsLeader";
		speechId = 0;
		title = "Refuel truck";
	};
	class Repair
	{
		command = "CMD_SUPPORT_REPAIR";
		shortcuts[] = {4};
		shortcutsAction = "CommandingMenu3";
		show = "IsLeader";
		speechId = 0;
		title = "Repair truck";
	};
};
