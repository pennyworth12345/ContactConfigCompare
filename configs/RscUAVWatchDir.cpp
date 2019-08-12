class RscUAVWatchDir
{
	access = 0;
	atomic = 0;
	title = "Engage";
	vocabulary = "";
	class items
	{
		class HoldFire
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "Hold fire";
			class Params
			{
				expression = "'HOLDFIRE' call BIS_fnc_guiMenuUAV";
			};
		};
		class OpenFire
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			title = "Open fire";
			class Params
			{
				expression = "'OPENFIRE' call BIS_fnc_guiMenuUAV";
			};
		};
	};
};
