class RscUAVCombatMode
{
	access = 0;
	atomic = 0;
	title = "Combat Mode";
	vocabulary = "";
	class items
	{
		class Aware
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			title = "Aware";
			class Params
			{
				expression = "'COMBAT_AWARE' call BIS_fnc_guiMenuUAV";
			};
		};
		class Combat
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "Combat";
			class Params
			{
				expression = "'COMBAT_DANGER' call BIS_fnc_guiMenuUAV";
			};
		};
		class Safe
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "";
			title = "Safe";
			class Params
			{
				expression = "'COMBAT_SAFE' call BIS_fnc_guiMenuUAV";
			};
		};
		class Stealth
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			title = "Stealth";
			class Params
			{
				expression = "'COMBAT_STEALTH' call BIS_fnc_guiMenuUAV";
			};
		};
	};
};
