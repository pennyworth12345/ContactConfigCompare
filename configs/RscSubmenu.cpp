class RscSubmenu
{
	access = 0;
	atomic = 0;
	vocabulary = "";
	class Back
	{
		command = -4;
		shortcuts[] = {14};
		shortcutsAction = "NavigateMenu";
		speechId = 0;
		title = "";
	};
	class Separator
	{
		command = -1;
		shortcuts[] = {0};
		title = "";
	};
	class SeparatorUnderWater
	{
		command = -1;
		shortcuts[] = {0};
		show = "CursorOnSwimmingCommands";
		title = "";
	};
};
