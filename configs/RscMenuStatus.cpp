class RscMenuStatus: RscSubmenu
{
	title = "Status";
	vocabulary = "";
	class Items
	{
		class AmmoLow
		{
			command = "CMD_REPLY_AMMO_LOW";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			title = "Ammo low";
		};
		class FuelLow
		{
			command = "CMD_REPLY_FUEL_LOW";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			title = "Fuel low";
		};
		class Injured
		{
			command = "CMD_REPLY_INJURED";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			title = "Injured";
		};
		class IsDown
		{
			command = "CMD_REPLY_KILLED";
			enable = "NotEmpty";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			title = "... is down";
		};
		class OneLess
		{
			command = "CMD_REPLY_ONE_LESS";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			title = "One Less";
		};
		class Report
		{
			command = "CMD_REPORT";
			enable = "NotEmpty";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "IsLeader";
			title = "Report Status";
		};
		class Support
		{
			menu = "RscCallSupport";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			title = "Call support";
		};
		class UnderFire
		{
			command = "CMD_REPLY_UNDER_FIRE";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			title = "I'm under fire";
		};
		class WhereAreYou
		{
			command = "CMD_REPLY_WHERE_ARE_YOU";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "1 - IsLeader";
			title = "Where are you?";
		};
	};
};
