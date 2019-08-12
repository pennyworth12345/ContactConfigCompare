class RscMoveDir: RscSubmenu
{
	atomic = 1;
	items[] = {"N", "NE", "E", "SE", "S", "SW", "W", "NW", "Back"};
	title = "Move Direction";
	vocabulary = "";
	class E
	{
		enable = "NotEmpty";
		menu = "RscMoveDist";
		shortcuts[] = {4};
		shortcutsAction = "CommandingMenu3";
		show = "IsLeader";
		title = "E";
		class Params
		{
			dir = 90;
		};
	};
	class N
	{
		enable = "NotEmpty";
		menu = "RscMoveDist";
		shortcuts[] = {2};
		shortcutsAction = "CommandingMenu1";
		show = "IsLeader";
		title = "N";
		class Params
		{
			dir = 0;
		};
	};
	class NE
	{
		enable = "NotEmpty";
		menu = "RscMoveDist";
		shortcuts[] = {3};
		shortcutsAction = "CommandingMenu2";
		show = "IsLeader";
		title = "NE";
		class Params
		{
			dir = 45;
		};
	};
	class NW
	{
		enable = "NotEmpty";
		menu = "RscMoveDist";
		shortcuts[] = {9};
		shortcutsAction = "CommandingMenu8";
		show = "IsLeader";
		title = "NW";
		class Params
		{
			dir = 315;
		};
	};
	class S
	{
		enable = "NotEmpty";
		menu = "RscMoveDist";
		shortcuts[] = {6};
		shortcutsAction = "CommandingMenu5";
		show = "IsLeader";
		title = "S";
		class Params
		{
			dir = 180;
		};
	};
	class SE
	{
		enable = "NotEmpty";
		menu = "RscMoveDist";
		shortcuts[] = {5};
		shortcutsAction = "CommandingMenu4";
		show = "IsLeader";
		title = "SE";
		class Params
		{
			dir = 135;
		};
	};
	class SW
	{
		enable = "NotEmpty";
		menu = "RscMoveDist";
		shortcuts[] = {7};
		shortcutsAction = "CommandingMenu6";
		show = "IsLeader";
		title = "SW";
		class Params
		{
			dir = 225;
		};
	};
	class W
	{
		enable = "NotEmpty";
		menu = "RscMoveDist";
		shortcuts[] = {8};
		shortcutsAction = "CommandingMenu7";
		show = "IsLeader";
		title = "W";
		class Params
		{
			dir = 270;
		};
	};
};
