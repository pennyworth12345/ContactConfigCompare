class RscGroupRootMenu
{
	access = 0;
	atomic = 0;
	contexsensitive = 1;
	title = "";
	vocabulary = "";
	class Items
	{
		class ActivateMine
		{
			command = "CMD_ACTIVATE_MINE";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * (CursorOnInactiveMine) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Activate mine";
		};
		class AmmoLow
		{
			command = "CMD_REPLY_AMMO_LOW";
			shortcuts[] = {0};
			show = "AmmoLow * (1 - Injured)";
			title = "Ammo low";
		};
		class Attack
		{
			command = "CMD_ATTACK_AUTO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnEnemy * (1 - IsWatchCommanded) * (1 - SelectedArtillery) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Target %POINTED_TARGET_NAME";
		};
		class CancelTarget
		{
			command = "CMD_NOTARGET";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * (1 - CursorOnGround) * SomeSelectedHaveTarget * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "No target";
		};
		class Carry
		{
			command = "CMD_CARRY";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnCarry * (1 - IsWatchCommanded))";
			speechId = 0;
			title = "Carry";
		};
		class Communication
		{
			enable = "1";
			menu = "#User:BIS_fnc_addCommMenuItem_menu";
			shortcuts[] = {0};
			show = "1";
			speechId = 0;
			title = "Supports";
		};
		class Copy
		{
			command = "CMD_REPLY_COPY";
			enable = "CanAnswer";
			shortcuts[] = {0};
			show = "(1 - IsLeader) * (1 - IsAlone)";
			title = "Copy";
		};
		class Deselect
		{
			command = "CMD_DESELECT_AUTO";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * (CursorOnGroupMemberSelected) * IsSelectedToAdd";
			speechId = 0;
			title = "Deselect unit %POINTED_UNIT_ID";
		};
		class DeselectTeamFromBar
		{
			command = "CMD_DESELECT_TEAM_FROM_BAR";
			enable = "NotEmpty";
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox  * CanDeselectTeamFromBar";
			speechId = 0;
			title = "Deselect team %FOCUSED_TEAM_COLOR";
		};
		class DeselectUnitFromBar
		{
			command = "CMD_DESELECT_UNIT_FROM_BAR";
			enable = "NotEmpty";
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox  * CanDeselectUnitFromBar";
			speechId = 0;
			title = "Deselect %FOCUSED_UNIT_ID";
		};
		class DeselectVehicleFromBar
		{
			command = "CMD_DESELECT_VEHICLE_FROM_BAR";
			enable = "NotEmpty";
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox  * CanDeselectVehicleFromBar";
			speechId = 0;
			title = "Deselect all in %FOCUSED_VEHICLE_NAME";
		};
		class DisableMine
		{
			command = "CMD_DISABLE_MINE";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * (CursorOnActiveMine) * (SelectedCanDisableMine) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Deactivate mine";
		};
		class Done
		{
			command = "CMD_REPLY_DONE";
			enable = "CanAnswer";
			shortcuts[] = {0};
			show = "(1 - IsLeader) * (1 - IsAlone)";
			title = "Done";
		};
		class DropCarried
		{
			command = "CMD_DROP_CARRIED";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnDropCarried * (1 - IsWatchCommanded))";
			speechId = 0;
			title = "Drop Carried";
		};
		class Empty1
		{
			command = 0;
			enable = "0";
			shortcuts[] = {0};
			show = "(IsLeader * (1 - IsAlone)) * ((IsLeader * (1 - CursorOnVehicleCanGetIn) * ((1 - PlayerVehicleCanGetIn) + (1 - NotEmptySoldiers)) * (1 - CursorOnEnemy) * (1 - SelectedArtillery) * (1 - NotEmptyInVehicle) * (1 - IsWatchCommanded) * (1 - SomeSelectedHaveTarget) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)) + (IsLeader * CursorOnGround * SomeSelectedHaveTarget) + (1 - IsLeader))";
			speechId = 0;
			title = "Interact";
		};
		class Empty10: Empty1
		{
			show = "(1 - FuelLow) * (1 - AmmoLow) * (1 - Injured)";
			title = "Support";
		};
		class Empty2: Empty1
		{
			show = "IsLeader * (1 - CursorOnGround) * (IsWatchCommanded)";
			title = "Move There";
		};
		class Empty5: Empty1
		{
			show = " (IsLeader * (1 - CursorOnGroupMember))";
			title = "Unit, Move";
		};
		class Empty6: Empty1
		{
			show = "(IsLeader * (1 - CursorOnGroupMember))";
			title = "Unit, Fire Mode";
		};
		class Empty7: Empty1
		{
			show = "(IsLeader * (1 - CursorOnGroupMember) * (1 - CursorOnGroupMemberSelected))";
			title = "Command Unit";
		};
		class Empty9: Empty1
		{
			show = "(IsXbox) * (1 - (IsLeader) * (1 - (IsLeader * (1 - CanSelectUnitFromBar) * (1 - CanDeselectUnitFromBar) * (1 - CanSelectVehicleFromBar) * (1 - CanDeselectVehicleFromBar) * (1 - CanSelectTeamFromBar) * (1 - CanDeselectTeamFromBar))))";
			title = "Select unit from bar";
		};
		class EmptyBlank1
		{
			command = 0;
			enable = "0";
			shortcuts[] = {0};
			show = "(1 - IsLeader) * IsAlone * (1 - CursorOnGround)";
			speechId = 0;
			title = "";
		};
		class EmptyBlank2: Empty1
		{
			show = "IsAlone";
			title = "";
		};
		class EmptyBlank3: Empty1
		{
			show = "IsAlone";
			title = "";
		};
		class EmptyBlank4: Empty1
		{
			show = "IsAlone";
			title = "";
		};
		class EmptyBlank5: Empty1
		{
			show = "IsAlone";
			title = "";
		};
		class EmptyBlank6: Empty1
		{
			show = "IsAlone";
			title = "";
		};
		class EmptyBlank7: Empty1
		{
			show = "IsAlone";
			title = "";
		};
		class EmptyBlank8: Empty1
		{
			show = "IsAlone";
			title = "";
		};
		class EmptyBlank9: Empty1
		{
			enable = "0";
			show = "(1 - IsXbox) * (1 - (IsLeader) * (1 - (IsLeader * (1 - CanSelectUnitFromBar) * (1 - CanDeselectUnitFromBar) * (1 - CanSelectVehicleFromBar) * (1 - CanDeselectVehicleFromBar) * (1 - CanSelectTeamFromBar) * (1 - CanDeselectTeamFromBar))))";
			title = "";
		};
		class Engage
		{
			command = "CMD_ENGAGE_AUTO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnEnemyTargeted * EnemyTargeted * (1-EnemyEngaged) * (1 - IsWatchCommanded) * (1 - SelectedArtillery) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Engage";
		};
		class Fail
		{
			command = "CMD_REPLY_FAIL";
			enable = "CanAnswer";
			shortcuts[] = {0};
			show = "(1 - IsLeader) * (1 - IsAlone)";
			title = "Negative";
		};
		class Fire
		{
			command = "CMD_FIRE_AUTO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnEnemyEngaged * EnemyEngaged * (1 - IsWatchCommanded) * (1 - SelectedArtillery) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Fire";
		};
		class FireArtilery
		{
			cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
			enable = "NotEmpty";
			menu = "#ARTILLERY";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGround * SelectedArtillery * (1 - IsWatchCommanded)";
			speechId = 0;
			title = "Fire artillery";
			class Params
			{
				artillerySavePos = 1;
				itemCursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
				itemsCmd = -2;
				itemSubmenu = "RscBurst";
			};
		};
		class FireArtileryAgain
		{
			command = "CMD_FIRE_AT_POSITION_AMMO";
			cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGround * SelectedArtillery * (1 - IsWatchCommanded) * NoEmptyLastArtilleryAmmo";
			speechId = 0;
			title = "Repeat artillery fire";
			class Params
			{
				artillerySavePos = 1;
				itemsCmd = -2;
			};
		};
		class FireAtPosition
		{
			command = "CMD_FIRE_AT_POSITION_AUTO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGround * SelectedArtillery * (1 - IsWatchCommanded)";
			speechId = 0;
			title = "Fire at position";
		};
		class FirstAid
		{
			command = "CMD_HEAL";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnNeedFirstAID * (1 - IsWatchCommanded))";
			speechId = 0;
			title = "Heal %POINTED_TARGET_NAME";
		};
		class FormationDiamond
		{
			command = "CMD_FORM_DIAMOND";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * (1 - NotEmptySoldiers) * (1 - NotEmptyInVehicle) * (1 - NotEmptySubgroups) * FormationLine";
			speechId = 0;
			title = "Formation Diamond";
		};
		class FormationLine
		{
			command = "CMD_FORM_LINE";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * (1 - NotEmptySoldiers) * (1 - NotEmptyInVehicle) * (1 - NotEmptySubgroups) * (1 - FormationLine)";
			speechId = 0;
			title = "Formation Line";
		};
		class FuelLow
		{
			command = "CMD_REPLY_FUEL_LOW";
			shortcuts[] = {0};
			show = "FuelLow * (1 - AmmoLow) * (1 - Injured)";
			title = "Fuel low";
		};
		class GetIn
		{
			command = "CMD_GETIN_AUTO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * (CursorOnVehicleCanGetIn) * (1 - PlayerVehicleCanGetIn) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Get In %POINTED_TARGET_NAME";
		};
		class GetInCurrent
		{
			command = "CMD_GETIN_AUTO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * (PlayerVehicleCanGetIn) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Get In";
		};
		class GetOut
		{
			command = "CMD_GETOUT";
			enable = "(1-IsInHelicopter) + IsRopeEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((1 - NotEmptySoldiers) + (NotEmptyInVehicle)) * ((1 - NotEmptySoldiers) + ((1 - CursorOnVehicleCanGetIn) * (1 - PlayerVehicleCanGetIn))) * (NotEmptySoldiers + NotEmptyInVehicle) * (1 - CursorOnEnemy) * (1 - SelectedArtillery) * (1 - IsWatchCommanded) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Disembark";
		};
		class Heal
		{
			command = "CMD_HEAL";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnNeedHeal * (1 - IsWatchCommanded))";
			speechId = 0;
			title = "Treat %POINTED_TARGET_NAME";
		};
		class HealSelf
		{
			command = "CMD_HEAL_SELF";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnNeedHealSelf * (1 - IsWatchCommanded))";
			speechId = 0;
			title = "Treat self";
		};
		class HoldFire
		{
			command = "CMD_HOLD_FIRE";
			enable = "NotEmpty";
			shortcuts[] = {0, "0x00050000 + 2"};
			show = "IsLeader * (1 - SomeSelectedHoldingFire)";
			speechId = 0;
			title = "Hold Fire";
		};
		class HoldFireAuto
		{
			command = "CMD_HOLD_FIRE_AUTO";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGroupMember * (1 - CursorOnHoldingFire)";
			speechId = 0;
			title = "%POINTED_UNIT_ID, Hold Fire";
		};
		class HookCargo
		{
			command = "CMD_HOOK_CARGO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * IsHelicopterPilotSelected * IsRopeEmpty * CursorOnHookable";
			speechId = 0;
			title = "Lift cargo";
		};
		class HookCargoCurrent
		{
			command = "CMD_HOOK_CARGO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * IsHelicopterPilotSelected * IsRopeEmpty * PlayerVehicleIsHookable * (1-CursorOnHookable)";
			speechId = 0;
			title = "Lift cargo";
		};
		class Injured
		{
			command = "CMD_REPLY_INJURED";
			shortcuts[] = {0};
			show = "Injured";
			title = "Injured";
		};
		class JoinAuto
		{
			command = "CMD_JOIN_AUTO";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGroupMember * (CursorOnNotEmptySubgroups)";
			speechId = 0;
			title = "%POINTED_UNIT_ID, Get back";
		};
		class Move
		{
			command = "CMD_MOVE_AUTO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGround * (1 - IsWatchCommanded) * (1-(IsRopeEmpty * CursorOnHookable))";
			speechId = 0;
			title = "Move There";
		};
		class NextWP
		{
			command = "CMD_NEXT_WAYPOINT";
			enable = "NotEmpty + CommandsToPilot";
			shortcuts[] = {0};
			show = "IsLeader * (1 - CursorOnGround) * (1 - IsWatchCommanded)";
			speechId = 0;
			title = "Next waypoint";
		};
		class OneLess
		{
			command = "CMD_REPLY_ONE_LESS";
			shortcuts[] = {0};
			show = "(1 - IsLeader) * (1 - IsAlone)";
			title = "One Less";
		};
		class OpenFire
		{
			command = "CMD_OPEN_FIRE";
			enable = "NotEmpty";
			shortcuts[] = {0, "0x00050000 + 2", "0x00050000 + 2"};
			show = "IsLeader * SomeSelectedHoldingFire";
			speechId = 0;
			title = "Open Fire";
		};
		class OpenFireAuto
		{
			command = "CMD_OPEN_FIRE_AUTO";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGroupMember * CursorOnHoldingFire";
			speechId = 0;
			title = "%POINTED_UNIT_ID, Open Fire";
		};
		class OpenParachute
		{
			command = "CMD_OPENPARACHUTE";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnOpenParachute * (1 - IsWatchCommanded)";
			speechId = 0;
			title = "Open Parachute";
		};
		class PatchSoldier
		{
			command = "CMD_HEALBLEEDING";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnHealBleeding * (1 - IsWatchCommanded))";
			speechId = 0;
			title = "Help %POINTED_TARGET_NAME";
		};
		class PutIn
		{
			command = "CMD_PUTIN";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * (CursorOnPutInVehicle) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Load in Vehicle";
		};
		class Regroup
		{
			command = "CMD_JOIN";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * NotEmptySubgroups * (NotEmptySoldiers + NotEmptyInVehicle)";
			speechId = 0;
			title = "Regroup";
		};
		class RepairVehicle
		{
			command = "CMD_REPAIR_VEHICLE";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnNeedRepair * (1 - IsWatchCommanded))";
			speechId = 0;
			title = "Repair %POINTED_TARGET_NAME";
		};
		class Repeat
		{
			command = "CMD_REPLY_REPEAT";
			enable = "CanAnswer";
			shortcuts[] = {0};
			show = "(1 - IsLeader) * (1 - IsAlone)";
			title = "Repeat";
		};
		class Select
		{
			command = "CMD_SELECT_AUTO";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGroupMember * (1 - IsSelectedToAdd)";
			speechId = 0;
			title = "Select unit %POINTED_UNIT_ID only";
		};
		class SelectAdd
		{
			command = "CMD_SELECT_AUTO_ADD";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGroupMember * (1 - CursorOnGroupMemberSelected) * IsSelectedToAdd";
			speechId = 0;
			title = "Select unit %POINTED_UNIT_ID";
		};
		class SelectTeamFromBar
		{
			command = "CMD_SELECT_TEAM_FROM_BAR";
			enable = "NotEmpty";
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox  * CanSelectTeamFromBar";
			speechId = 0;
			title = "Select team %FOCUSED_TEAM_COLOR";
		};
		class SelectUnitFromBar
		{
			command = "CMD_SELECT_UNIT_FROM_BAR";
			enable = "NotEmpty";
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox  * CanSelectUnitFromBar";
			speechId = 0;
			title = "Select %FOCUSED_UNIT_ID";
		};
		class SelectVehicleFromBar
		{
			command = "CMD_SELECT_VEHICLE_FROM_BAR";
			enable = "NotEmpty";
			shortcuts[] = {0, "0x00050000 + 3"};
			show = "IsXbox  * CanSelectVehicleFromBar";
			speechId = 0;
			title = "Select all in %FOCUSED_VEHICLE_NAME";
		};
		class Separator
		{
			enable = "0";
			shortcuts[] = {0};
			show = "(1 - IsAlone)";
			title = "";
		};
		class Stop
		{
			command = "CMD_STOP";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * (1 - NotEmptySubgroups) * (NotEmptySoldiers + NotEmptyInVehicle)";
			speechId = 0;
			title = "Stop";
		};
		class StopAuto
		{
			command = "CMD_STOP_AUTO";
			enable = "1";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGroupMember * (1 - CursorOnNotEmptySubgroups)";
			speechId = 0;
			title = "%POINTED_UNIT_ID, Stop";
		};
		class Surpress
		{
			command = "CMD_SUPPRESS";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * (IsWatchCommanded) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Suppressive fire";
		};
		class SwitchToLeader
		{
			command = "CMD_SWITCH_TO_LEADER";
			enable = "1";
			shortcuts[] = {0};
			show = "(1 - IsLeader) * (1 - IsAlone) * PlayableLeader";
			speechId = 0;
			title = "Switch to the leader";
		};
		class SwitchToSelected
		{
			command = "CMD_SWITCH_TO_SELECTED";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * PlayableSelected";
			speechId = 0;
			title = "Switch to unit %SELECTED_UNIT_ID";
		};
		class Team
		{
			menu = "RscTeam";
			shortcuts[] = {0};
			show = "IsLeader * (1 - PlayableSelected)";
			speechId = 0;
			title = "Team";
		};
		class UnhookCargo
		{
			command = "CMD_UNHOOK_CARGO";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGround * IsHelicopterPilotSelected * (1 - IsRopeEmpty)";
			speechId = 0;
			title = "Move and drop cargo";
		};
		class UnLoadFrom
		{
			command = "CMD_UNLOADFROM";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * (CursorOnUnloadFromVehicle) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Unload from Vehicle";
		};
		class UseContainerMagazine
		{
			command = "CMD_USE_CONTAINER_MAGAZINE";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * ((NotEmptySoldiers) * (CursorOnUsableContainerMagazine) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			speechId = 0;
			title = "Activate mine";
		};
		class UserRadio
		{
			menu = "#CUSTOM_RADIO";
			shortcuts[] = {0};
			show = "(1 - IsLeader) * (1 - IsAlone)";
			title = "Custom";
		};
		class VehicleInVehicleGetIn
		{
			command = "CMD_VIV_GETIN";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CanTransportTargetVehicle * IsDriverSelected";
			speechId = 0;
			title = "Load vehicle";
		};
		class VehicleInVehicleGetOut
		{
			command = "CMD_VIV_GETOUT";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * (IsLoadedInsideVehicle + HasSomeVehicleInside) * (1 - IsLandContact) * IsDriverSelected";
			speechId = 0;
			title = "Drop vehicle";
		};
		class VehicleInVehicleUnload
		{
			command = "CMD_VIV_UNLOAD";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGround * (IsLoadedInsideVehicle + HasSomeVehicleInside) * IsDriverSelected";
			speechId = 0;
			title = "Unload vehicle";
		};
		class Watch
		{
			command = "CMD_WATCH_CTX";
			enable = "NotEmpty";
			shortcuts[] = {0};
			show = "IsLeader * CursorOnGround * IsWatchCommanded";
			speechId = 0;
			title = "Watch There";
		};
		class WhereAreYou
		{
			command = "CMD_REPLY_WHERE_ARE_YOU";
			shortcuts[] = {0};
			show = "(1 - IsLeader) * (1 - IsAlone)";
			title = "Where are you?";
		};
	};
};
