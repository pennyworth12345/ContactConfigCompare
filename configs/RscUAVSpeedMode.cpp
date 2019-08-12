class RscUAVSpeedMode
{
	access = 0;
	atomic = 0;
	title = "Speed";
	vocabulary = "";
	class items
	{
		class Full
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "";
			title = "Full";
			class Params
			{
				expression = "'SPEED_FULL' call BIS_fnc_guiMenuUAV";
			};
		};
		class Limited
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "Limited";
			class Params
			{
				expression = "'SPEED_LIMITED' call BIS_fnc_guiMenuUAV";
			};
		};
		class Normal
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			title = "Normal";
			class Params
			{
				expression = "'SPEED_NORMAL' call BIS_fnc_guiMenuUAV";
			};
		};
	};
};
