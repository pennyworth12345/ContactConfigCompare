class RscHCGroupRootMenu
{
	access = 0;
	atomic = 0;
	contexsensitive = 1;
	title = "";
	vocabulary = "";
	class Items
	{
		class Attack
		{
			command = -5;
			cursorTexture = "\A3\ui_f\data\igui\cfg\cursors\assault_ca.paa";
			enable = "HCNotEmpty";
			priority = 2;
			shortcuts[] = {0};
			show = "HCIsLeader * HCCursorOnIconEnemy";
			speechId = 0;
			title = "Attack %POINTED_TARGET_NAME";
			class Params
			{
				expression = "['ATTACK',_pos,_is3D,hcselected player] call BIS_HC_path_menu";
			};
		};
		class Deselect
		{
			command = "CMD_HC_DESELECT_AUTO";
			cursorTexture = "\A3\ui_f\data\igui\cfg\cursors\selectOver_ca.paa";
			enable = "1";
			priority = 2;
			shortcuts[] = {0};
			show = "HCIsLeader * HCCursorOnIconSelectable * (HCCursorOnIconSelectableSelected) * IsSelectedToAdd";
			speechId = 0;
			title = "Deselect unit %POINTED_UNIT_ID";
		};
		class DeselectTeamFromBar
		{
			command = "CMD_DESELECT_TEAM_FROM_BAR";
			enable = "HCNotEmpty";
			priority = 3;
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox * HCCanDeselectTeamFromBar";
			speechId = 0;
			title = "Deselect team %FOCUSED_TEAM_COLOR";
		};
		class DeselectUnitFromBar
		{
			command = "CMD_DESELECT_UNIT_FROM_BAR";
			enable = "HCNotEmpty";
			priority = 3;
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox * HCCanDeselectUnitFromBar";
			speechId = 0;
			title = "Deselect %FOCUSED_UNIT_ID";
		};
		class Empty1
		{
			command = "";
			enable = "0";
			shortcuts[] = {0};
			show = "HCIsLeader * (1 - HCCursorOnIconEnemy)";
			speechId = 0;
			title = "Interact";
		};
		class Empty10: Empty1
		{
			show = "1";
			title = "";
		};
		class Empty3: Empty1
		{
			show = "(HCIsLeader)";
			title = "Group, Move";
		};
		class Empty4: Empty1
		{
			show = "(HCIsLeader)";
			title = "Group, Fire Mode";
		};
		class Empty5: Empty1
		{
			show = "(HCIsLeader)";
			title = "Group, Move";
		};
		class Empty6: Empty1
		{
			show = "(HCIsLeader)";
			title = "Group, Fire Mode";
		};
		class Empty7: Empty1
		{
			show = "HCIsLeader * (1 - HCCursorOnIconSelectable) * (1 - HCCursorOnIconSelectableSelected)";
			title = "Command Group";
		};
		class Empty8: Empty1
		{
			command = -1;
			show = "1 - (HCIsLeader) * (1 - (HCIsLeader * (1 - HCCanSelectUnitFromBar) * (1 - HCCanDeselectUnitFromBar) * (1 - HCCanSelectTeamFromBar) * (1 - HCCanDeselectTeamFromBar)))";
			title = "";
		};
		class Empty9: Empty1
		{
			show = "1";
			title = "";
		};
		class EmptyBlank1: Empty1
		{
			enable = "0";
			show = "(1 - HCIsLeader)";
			title = "";
		};
		class EmptyBlank2: Empty1
		{
			enable = "0";
			show = "(1 - HCIsLeader) + (HCIsLeader * (1 - CursorOnGround)) + (HCCursorOnIconSelectable)";
			title = "Move There";
		};
		class EmptyBlank7: Empty1
		{
			show = "(1 - HCIsLeader)";
			title = "";
		};
		class Move
		{
			command = -5;
			cursorTexture = "\A3\ui_f\data\igui\cfg\cursors\tactical_ca.paa";
			enable = "HCNotEmpty";
			priority = 1;
			shortcuts[] = {0};
			show = "HCIsLeader * CursorOnGround * (1 - IsWatchCommanded) * (1 - HCCursorOnIconSelectable) * (1 - IsSelectedToAdd)";
			speechId = 0;
			title = "Set Waypoint";
			class Params
			{
				expression = "['MOVE',_pos,_is3D,hcselected player,false] call BIS_HC_path_menu";
			};
		};
		class MoveAdd
		{
			command = -5;
			cursorTexture = "\A3\ui_f\data\igui\cfg\cursors\tactical_ca.paa";
			enable = "HCNotEmpty";
			priority = 2;
			shortcuts[] = {0};
			show = "HCIsLeader * CursorOnGround * (1 - IsWatchCommanded) * (1 - HCCursorOnIconSelectable) * IsSelectedToAdd";
			speechId = 0;
			title = "Add Waypoint";
			class Params
			{
				expression = "['MOVE',_pos,_is3D,hcselected player,true] call BIS_HC_path_menu";
			};
		};
		class Reply
		{
			enable = "1";
			menu = "#User:BIS_fnc_addCommMenuItem_menu";
			shortcuts[] = {0};
			show = "1";
			speechId = 0;
			title = "Supports";
		};
		class Select
		{
			command = "CMD_HC_SELECT_AUTO";
			cursorTexture = "\A3\ui_f\data\igui\cfg\cursors\selectOver_ca.paa";
			enable = "1";
			priority = 2;
			shortcuts[] = {0};
			show = "HCIsLeader * HCCursorOnIconSelectable * (1 - IsSelectedToAdd)";
			speechId = 0;
			title = "Select unit %POINTED_UNIT_ID only";
		};
		class SelectAdd
		{
			command = "CMD_HC_SELECT_AUTO_ADD";
			cursorTexture = "\A3\ui_f\data\igui\cfg\cursors\selectOver_ca.paa";
			enable = "1";
			priority = 2;
			shortcuts[] = {0};
			show = "HCIsLeader * HCCursorOnIconSelectable * (1 - HCCursorOnIconSelectableSelected) * IsSelectedToAdd";
			speechId = 0;
			title = "Select unit %POINTED_UNIT_ID";
		};
		class SelectTeamFromBar
		{
			command = "CMD_SELECT_TEAM_FROM_BAR";
			enable = "HCNotEmpty";
			priority = 3;
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox * HCCanSelectTeamFromBar";
			speechId = 0;
			title = "Select team %FOCUSED_TEAM_COLOR";
		};
		class SelectUnitFromBar
		{
			command = "CMD_SELECT_UNIT_FROM_BAR";
			enable = "HCNotEmpty";
			priority = 3;
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox * HCCanSelectUnitFromBar";
			speechId = 0;
			title = "Select %FOCUSED_UNIT_ID";
		};
		class Separator
		{
			command = -1;
			shortcuts[] = {0};
			title = "";
		};
		class Watch
		{
			command = "CMD_WATCH_CTX";
			cursorTexture = "\A3\ui_f\data\igui\cfg\cursors\watch_ca.paa";
			enable = "HCNotEmpty";
			priority = 2;
			shortcuts[] = {0};
			show = "HCIsLeader * CursorOnGround * IsWatchCommanded";
			speechId = 0;
			title = "Watch There";
		};
	};
};
