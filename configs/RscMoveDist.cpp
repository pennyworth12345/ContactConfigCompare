class RscMoveDist: RscSubmenu
{
	items[] = {"D50", "D100", "D200", "D500", "D1000", "D2000", "Back"};
	title = "Move Distance";
	vocabulary = "";
	class D100
	{
		command = "CMD_MOVE";
		enable = "NotEmpty";
		shortcuts[] = {3};
		shortcutsAction = "CommandingMenu2";
		show = "IsLeader";
		title = "100 m";
		class Params
		{
			dist = 100;
		};
	};
	class D1000
	{
		command = "CMD_MOVE";
		enable = "NotEmpty";
		shortcuts[] = {6};
		shortcutsAction = "CommandingMenu5";
		show = "IsLeader";
		title = "1 km";
		class Params
		{
			dist = 1000;
		};
	};
	class D200
	{
		command = "CMD_MOVE";
		enable = "NotEmpty";
		shortcuts[] = {4};
		shortcutsAction = "CommandingMenu3";
		show = "IsLeader";
		title = "200 m";
		class Params
		{
			dist = 200;
		};
	};
	class D2000
	{
		command = "CMD_MOVE";
		enable = "NotEmpty";
		shortcuts[] = {7};
		shortcutsAction = "CommandingMenu6";
		show = "IsLeader";
		title = "2 km";
		class Params
		{
			dist = 2000;
		};
	};
	class D50
	{
		command = "CMD_MOVE";
		enable = "NotEmpty";
		shortcuts[] = {2};
		shortcutsAction = "CommandingMenu1";
		show = "IsLeader";
		title = "50 m";
		class Params
		{
			dist = 50;
		};
	};
	class D500
	{
		command = "CMD_MOVE";
		enable = "NotEmpty";
		shortcuts[] = {5};
		shortcutsAction = "CommandingMenu4";
		show = "IsLeader";
		title = "500 m";
		class Params
		{
			dist = 500;
		};
	};
};
