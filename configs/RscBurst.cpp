class RscBurst: RscSubmenu
{
	contexsensitive = 1;
	items[] = {"Item1", "Item2", "Item3", "Item4"};
	title = "Burst";
	vocabulary = "";
	class Item1
	{
		command = "CMD_FIRE_AT_POSITION_AMMO";
		cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
		enable = "NotEmpty";
		shortcuts[] = {2};
		shortcutsAction = "CommandingMenu1";
		show = "IsLeader";
		speechId = 0;
		title = "Single";
		class Params
		{
			artilleryBurst = 1;
		};
	};
	class Item2
	{
		command = "CMD_FIRE_AT_POSITION_AMMO";
		cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
		enable = "NotEmpty";
		shortcuts[] = {3};
		shortcutsAction = "CommandingMenu2";
		show = "IsLeader";
		speechId = 0;
		title = "Burst 2";
		class Params
		{
			artilleryBurst = 2;
		};
	};
	class Item3
	{
		command = "CMD_FIRE_AT_POSITION_AMMO";
		cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
		enable = "NotEmpty";
		shortcuts[] = {4};
		shortcutsAction = "CommandingMenu3";
		show = "IsLeader";
		speechId = 0;
		title = "Burst 3";
		class Params
		{
			artilleryBurst = 3;
		};
	};
	class Item4
	{
		command = "CMD_FIRE_AT_POSITION_AMMO";
		cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
		enable = "NotEmpty";
		shortcuts[] = {5};
		shortcutsAction = "CommandingMenu4";
		show = "IsLeader";
		speechId = 0;
		title = "Burst 4";
		class Params
		{
			artilleryBurst = 4;
		};
	};
};
