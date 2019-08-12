class RscUAVMainMenu
{
	access = 0;
	atomic = 0;
	title = "High Command - Commander";
	vocabulary = "";
	class Items
	{
		class Action
		{
			enable = "HCNotEmpty";
			menu = "#USER:HC_Custom_0";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "";
			speechId = 0;
			title = "Action";
		};
		class Back
		{
			command = -4;
			shortcuts[] = {"BACK"};
			speechId = 0;
			title = "";
		};
		class CombatMode
		{
			enable = "HCNotEmpty";
			menu = "RscUAVCombatMode";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "";
			speechId = 0;
			title = "Combat Mode";
		};
		class Engage
		{
			enable = "HCNotEmpty";
			menu = "RscUAVWatchDir";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			speechId = 0;
			title = "Engage";
		};
		class Formations
		{
			enable = "HCNotEmpty";
			menu = "RscUAVFormations";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "";
			speechId = 0;
			title = "Formation";
		};
		class Mission
		{
			enable = "HCNotEmpty";
			menu = "#USER:HC_Missions_0";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "";
			speechId = 0;
			title = "Mission";
		};
		class Move
		{
			enable = "HCNotEmpty";
			menu = "RscUAVMoveHigh";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			speechId = 0;
			title = "Move";
		};
		class Reply
		{
			menu = "RscUAVReply";
			shortcuts[] = {11};
			shortcutsAction = "CommandingMenu0";
			speechId = 0;
			title = "Reply";
		};
		class Speed
		{
			enable = "HCNotEmpty";
			menu = "RscUAVSpeedMode";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "";
			speechId = 0;
			title = "Speed";
		};
		class Target
		{
			enable = "HCNotEmpty";
			menu = "#USER:HC_Targets_0";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			speechId = 0;
			title = "Target";
		};
		class Team
		{
			enable = "HCNotEmpty";
			menu = "RscUAVTeam";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			show = "";
			speechId = 0;
			title = "Team";
		};
	};
};
