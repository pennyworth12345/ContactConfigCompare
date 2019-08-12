class RscWatchMoreDir: RscSubmenu
{
	atomic = 1;
	items[] = {"N", "NE", "E", "SE", "S", "SW", "W", "NW", "Back"};
	title = "Watch Direction";
	vocabulary = "";
	class E
	{
		command = "CMD_WATCH_DIR";
		enable = "NotEmpty";
		shortcuts[] = {4};
		shortcutsAction = "CommandingMenu3";
		show = "IsLeader";
		speechId = 0;
		title = "E";
		class Params
		{
			dir = 90;
		};
	};
	class N
	{
		command = "CMD_WATCH_DIR";
		enable = "NotEmpty";
		shortcuts[] = {2};
		shortcutsAction = "CommandingMenu1";
		show = "IsLeader";
		speechId = 0;
		title = "N";
		class Params
		{
			dir = 0;
		};
	};
	class NE
	{
		command = "CMD_WATCH_DIR";
		enable = "NotEmpty";
		shortcuts[] = {3};
		shortcutsAction = "CommandingMenu2";
		show = "IsLeader";
		speechId = 0;
		title = "NE";
		class Params
		{
			dir = 45;
		};
	};
	class NW
	{
		command = "CMD_WATCH_DIR";
		enable = "NotEmpty";
		shortcuts[] = {9};
		shortcutsAction = "CommandingMenu8";
		show = "IsLeader";
		speechId = 0;
		title = "NW";
		class Params
		{
			dir = 315;
		};
	};
	class S
	{
		command = "CMD_WATCH_DIR";
		enable = "NotEmpty";
		shortcuts[] = {6};
		shortcutsAction = "CommandingMenu5";
		show = "IsLeader";
		speechId = 0;
		title = "S";
		class Params
		{
			dir = 180;
		};
	};
	class SE
	{
		command = "CMD_WATCH_DIR";
		enable = "NotEmpty";
		shortcuts[] = {5};
		shortcutsAction = "CommandingMenu4";
		show = "IsLeader";
		speechId = 0;
		title = "SE";
		class Params
		{
			dir = 135;
		};
	};
	class SW
	{
		command = "CMD_WATCH_DIR";
		enable = "NotEmpty";
		shortcuts[] = {7};
		shortcutsAction = "CommandingMenu6";
		show = "IsLeader";
		speechId = 0;
		title = "SW";
		class Params
		{
			dir = 225;
		};
	};
	class W
	{
		command = "CMD_WATCH_DIR";
		enable = "NotEmpty";
		shortcuts[] = {8};
		shortcutsAction = "CommandingMenu7";
		show = "IsLeader";
		speechId = 0;
		title = "W";
		class Params
		{
			dir = 270;
		};
	};
};
