class RscMenuCombatMode: RscSubmenu
{
	title = "Combat Mode";
	vocabulary = "";
	class Items
	{
		class Aware
		{
			command = "CMD_AWARE";
			enable = "NotEmpty";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "IsLeader";
			title = "Aware";
		};
		class Combat
		{
			command = "CMD_COMBAT";
			enable = "NotEmpty";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "IsLeader";
			title = "Combat";
		};
		class PosAuto
		{
			command = "CMD_POS_AUTO";
			enable = "NotEmptySoldiers";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			show = "IsLeader";
			speechId = 0;
			title = "Automatic stance";
		};
		class PosCrouch
		{
			command = "CMD_POS_MIDDLE";
			enable = "NotEmptySoldiers";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "IsLeader";
			speechId = 0;
			title = "Stay crouched";
		};
		class PosDown
		{
			command = "CMD_POS_DOWN";
			enable = "NotEmptySoldiers";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "IsLeader";
			speechId = 0;
			title = "Go Prone";
		};
		class PosUp
		{
			command = "CMD_POS_UP";
			enable = "NotEmptySoldiers";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "IsLeader";
			speechId = 0;
			title = "Stand Up";
		};
		class Safe
		{
			command = "CMD_SAFE";
			enable = "NotEmpty";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "IsLeader";
			title = "Safe";
		};
		class Separator1: Separator {};
		class Stealth
		{
			command = "CMD_STEALTH";
			enable = "NotEmpty";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "IsLeader";
			title = "Stealth";
		};
	};
};
