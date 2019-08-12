class CfgNotifications
{
	class AddRespawnFailed: TaskFailed
	{
		description = "Cannot assign to a player";
		title = "Respawn Camp";
	};
	class AddRespawnSucceeded: TaskSucceeded
	{
		description = "Assigned to %1";
		title = "Respawn Camp";
	};
	class APTicketsAdd
	{
		description = "%1 Tickets Available";
		iconPicture = "a3\ui_f\data\gui\cfg\communicationmenu\call_ca.paa";
		priority = 0;
		title = "Tickets Increased";
	};
	class APTicketsAdd1: APTicketsAdd
	{
		description = "%1 Ticket Available";
	};
	class APTicketsGone: APTicketsAdd
	{
		color[] = {1, 0.3, 0.2, 1};
		description = "No Tickets Remaining";
		title = "Tickets Exhausted";
	};
	class ArmoryGearAdded: HubSysTemplate
	{
		description = "<t shadow='1' align='left'>%1</t><t shadow='1' align='right'>%2</t>";
		duration = 1;
		iconPicture = "%3";
		priority = 9;
		sound = "AddItemOK";
		title = "GEAR ADDED";
	};
	class ArmoryGearAddingFailed: ArmoryGearAdded
	{
		color[] = {0.8, 0, 0, 1};
		colorIconText[] = {0.8, 0, 0, 1};
		duration = 3;
		iconText = "X";
		priority = 8;
		sound = "AddItemFailed";
		title = "ADDING GEAR FAILED!";
	};
	class ArmoryInventoryFull: ArmoryGearAdded
	{
		color[] = {0.8, 0, 0, 1};
		colorIconPicture[] = {0.8, 0, 0, 1};
		colorIconText[] = {0.8, 0, 0, 1};
		description = "Some gear could not be added.";
		duration = 10;
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\ico_OFF_ca.paa";
		iconText = "";
		priority = 0;
		sound = "AddItemFailed";
		title = "INVENTORY FULL!";
	};
	class ArmoryMissingRequiredGear: ArmoryInventoryFull
	{
		color[] = {0.8, 0, 0, 1};
		colorIconPicture[] = {0.8, 0, 0, 1};
		colorIconText[] = {0.8, 0, 0, 1};
		description = "Grab the required items from the armory.";
		duration = 10;
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\ico_OFF_ca.paa";
		iconText = "";
		priority = 0;
		sound = "AddItemFailed";
		title = "MISSING REQUIRED GEAR!";
	};
	class ArmoryRearm: HubSysTemplate
	{
		description = "Adjust your loadout at the armory.";
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa";
		priority = 0;
		title = "REARM REMINDER";
	};
	class BootcampStageChanged
	{
		description = "%1";
		duration = 3;
		iconPicture = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		priority = 7;
		title = "Training Stage";
	};
	class BriefingNotification: BriefingWarningSkirmish
	{
		description = "The operational briefing begins in %1:%2.";
		title = "BRIEFING REMINDER";
	};
	class BriefingWarningHub: BriefingWarningSkirmish
	{
		description = "The operational briefing begins in %1:%2.";
		title = "ATTEND BRIEFING";
	};
	class BriefingWarningSkirmish: HubSysTemplate
	{
		color[] = {1, 1, 1, 0.8};
		colorIconPicture[] = {1, 1, 1, 0.8};
		description = "The next operation briefing starts in %1:%2.";
		iconPicture = "\A3\UI_F\data\IGUI\Cfg\Actions\settimer_ca.paa";
		iconText = "";
		priority = 0;
		title = "RETURN TO CAMP";
	};
	class CommunicationMenuItemAdded
	{
		description = "%1<br />(Press 0-8 to call Support)";
		iconPicture = "%2";
		iconText = "%3";
		priority = 4;
		sound = "communicationMenuItemAdded";
		title = "NEW SUPPORT AVAILABLE";
	};
	class Countdown
	{
		description = "%1 remaining";
		iconPicture = "\a3\Modules_F_Curator\Data\portraitCountdown_ca.paa";
		title = "COUNTDOWN SET";
	};
	class CuratorAddAddons
	{
		color[] = {1, 1, 0.4, 1};
		description = "%1";
		iconPicture = "\a3\ui_f_curator\data\logos\arma3_curator_eye_64_ca.paa";
		title = "NEW ASSETS UNLOCKED";
	};
	class CuratorAddArea
	{
		color[] = {1, 1, 0.4, 1};
		description = "%1";
		iconPicture = "\a3\ui_f_curator\data\logos\arma3_curator_eye_64_ca.paa";
		title = "NEW AREA AVAILABLE";
	};
	class CuratorAssign
	{
		color[] = {1, 1, 0.4, 1};
		description = "%2 is now %1";
		iconPicture = "\a3\ui_f_curator\data\logos\arma3_curator_eye_64_ca.paa";
		title = "ZEUS HAS ASCENDED";
	};
	class CuratorRemoveArea
	{
		color[] = {1, 1, 0.4, 1};
		description = "%1";
		iconPicture = "\a3\ui_f_curator\data\logos\arma3_curator_eye_64_ca.paa";
		title = "AREA NO LONGER AVAILABLE";
	};
	class CuratorUnassign: CuratorAssign
	{
		description = "%1 role is vacant";
		title = "ZEUS HAS LEFT";
	};
	class Default
	{
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorIconPicture[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorIconText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		description = "";
		difficulty[] = {};
		duration = 3;
		iconPicture = "";
		iconText = "";
		priority = 0;
		sound = "defaultNotification";
		soundClose = "defaultNotificationClose";
		soundRadio = "";
		title = "";
	};
	class DynamicGroups_Base
	{
		duration = 4;
		iconPicture = "\a3\Ui_f\data\GUI\Cfg\Ranks\general_gs.paa";
		priority = 10;
		sound = "defaultNotification";
		soundClose = "defaultNotificationClose";
	};
	class DynamicGroups_GroupDisbanded: DynamicGroups_Base
	{
		description = "%1 disbanded the group<br/>Press %2 for info";
		title = "Group Disbanded";
	};
	class DynamicGroups_InviteReceived: DynamicGroups_Base
	{
		description = "%1 invited you<br/>Press and hold %2 to accept";
		title = "New Invite Received";
	};
	class DynamicGroups_Joined: DynamicGroups_Base
	{
		description = "You joined %1";
		title = "Joined New Group";
	};
	class DynamicGroups_Kicked: DynamicGroups_Base
	{
		description = "%1 kicked you<br/>Press %2 for info";
		title = "Kicked";
	};
	class DynamicGroups_PlayerJoined: DynamicGroups_Base
	{
		description = "%1 joined your group - Press %2 for info";
		title = "New Group Member";
	};
	class DynamicGroups_PlayerJoinFailed: DynamicGroups_Base
	{
		description = "%1 is full";
		title = "JOIN FAILED";
	};
	class DynamicGroups_PlayerLeft: DynamicGroups_Base
	{
		description = "%1 left your group<br/>Press %2 for info";
		title = "Group Member Left";
	};
	class DynamicGroups_PromotedToLeader: DynamicGroups_Base
	{
		description = "%1 promoted you<br/>Press %2 for info";
		title = "Promoted";
	};
	class ExfilCommencing: BriefingWarningSkirmish
	{
		description = "%1";
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa";
		title = "COMMENCING OPERATION";
	};
	class ExfilNotification: BriefingWarningSkirmish
	{
		description = "The operation begins in %1:%2.";
		iconText = "";
		title = "ASSEMBLE";
	};
	class FiringRangeAborted: TimeTrialStarted
	{
		description = "You left the firing position";
		iconPicture = "\A3\ui_f\data\gui\cfg\Debriefing\endDefault_ca.paa";
		title = "Range Shooting Aborted";
	};
	class FiringRangeEnded: TimeTrialStarted
	{
		description = "Result: %1 Hits";
		iconPicture = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		title = "Range Shooting Ended";
	};
	class FiringRangeStarted: TimeTrialStarted
	{
		description = "Range Id: %1";
		iconPicture = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		title = "Range Shooting Started";
	};
	class HubSysTemplate
	{
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorIconPicture[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorIconText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		description = "";
		difficulty[] = {};
		duration = 5;
		iconPicture = "";
		iconText = "";
		priority = 0;
		sound = "defaultNotification";
		soundClose = "defaultNotificationClose";
		soundRadio = "";
		title = "";
	};
	class HVT_FobEstablished
	{
		description = "The enemy established their FOB";
		duration = 4;
		iconPicture = "A3\Ui_f\data\IGUI\Cfg\simpleTasks\types\Attack_ca.paa";
		priority = 100;
		sound = "defaultNotification";
		soundClose = "defaultNotificationClose";
		title = "Enemy FOB";
	};
	class HVT_OnDrop
	{
		description = "Schematics dropped by %1";
		duration = 4;
		iconPicture = "\a3\Ui_f\data\GUI\Cfg\Hints\ActionMenu_ca.paa";
		priority = 100;
		sound = "defaultNotification";
		soundClose = "defaultNotificationClose";
		title = "Drop";
	};
	class HVT_OnPickup
	{
		description = "%1 is now the carrier";
		duration = 4;
		iconPicture = "\a3\Ui_f\data\GUI\Cfg\Hints\Incapacitated_ca.paa";
		priority = 100;
		sound = "defaultNotification";
		soundClose = "defaultNotificationClose";
		title = "Pick-up";
	};
	class InstructorFigure: Default
	{
		description = "%1<br />(Press 0-8 to call Support)";
		iconPicture = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\instructor_ca.paa";
		priority = 0;
		title = "NEW ADVICE AVAILABLE";
	};
	class IntelAdded
	{
		description = "%1";
		iconPicture = "%2";
		title = "INTEL ADDED";
	};
	class RespawnAdded
	{
		description = "%2";
		iconPicture = "%3";
		priority = 4;
		soundRadio = "SentGenBaseUnlockRespawn";
		title = "NEW %1";
	};
	class RespawnVehicle
	{
		description = "%1 respawned at %2";
		iconPicture = "%3";
		priority = 4;
		soundRadio = "SentGenBaseUnlockVehicle";
		title = "VEHICLE RESPAWNED";
	};
	class ScoreAdded
	{
		color[] = {0.5, 1, 1, 1};
		description = "%1";
		difficulty[] = {"scoreTable"};
		iconText = "+%2";
		priority = 0;
		sound = "scoreAdded";
		title = "Score bonus";
	};
	class ScoreRemoved: ScoreAdded
	{
		color[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		iconText = "-%2";
		sound = "scoreRemoved";
		title = "Score penalty";
	};
	class SectorCapturedCIV: SectorCapturedWEST
	{
		colorIconPicture[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", "(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
	};
	class SectorCapturedEAST: SectorCapturedWEST
	{
		colorIconPicture[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
	};
	class SectorCapturedGUER: SectorCapturedWEST
	{
		colorIconPicture[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", "(profilenamespace getvariable ['Map_Independent_A',0.8])"};
	};
	class SectorCapturedWEST
	{
		colorIconPicture[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
		colorIconText[] = {0, 0, 0, 1};
		description = "%1 captured by %2";
		iconPicture = "%3";
		iconText = "%4";
		priority = 4;
		sound = "sectorCaptured";
		title = "SECTOR CAPTURED";
	};
	class SectorLostCIV: SectorCapturedCIV
	{
		sound = "sectorLost";
		title = "SECTOR LOST";
	};
	class SectorLostEAST: SectorCapturedEAST
	{
		sound = "sectorLost";
		title = "SECTOR LOST";
	};
	class SectorLostGUER: SectorCapturedGUER
	{
		sound = "sectorLost";
		title = "SECTOR LOST";
	};
	class SectorLostWEST: SectorCapturedWEST
	{
		sound = "sectorLost";
		title = "SECTOR LOST";
	};
	class SideLeader
	{
		colorIconPicture[] = {1, 1, 1, 1};
		description = "%1 is now the dominant faction.";
		difficulty[] = {"scoreTable"};
		iconPicture = "%2";
		title = "Prevailing force";
	};
	class SkirmishLeaving: HubSysTemplate
	{
		description = "Moving closer towards to the camp will end the patrol.";
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa";
		priority = 0;
		sound = "skirmishLeaving";
		title = "RETURNING TO CAMP";
	};
	class TaskAssigned
	{
		description = "%2";
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIcon_ca.paa";
		priority = 5;
		sound = "taskAssigned";
		title = "TASK ASSIGNED";
	};
	class TaskAssignedIcon: TaskCreatedIcon
	{
		colorIconPicture[] = {1, 0.7, 0, 1};
		sound = "taskAssigned";
		title = "TASK ASSIGNED";
	};
	class TaskAssignedVR: TaskAssigned
	{
		duration = 2;
	};
	class TaskAssignedVRLong: TaskAssigned
	{
		duration = 3;
	};
	class TaskCanceled: TaskAssigned
	{
		color[] = {0.7, 0.7, 0.7, 1};
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_ca.paa";
		priority = 6;
		sound = "taskCanceled";
		title = "TASK CANCELED";
	};
	class TaskCanceledIcon: TaskCreatedIcon
	{
		color[] = {0.7, 0.7, 0.7, 1};
		colorIconPicture[] = {0.7, 0.7, 0.7, 1};
		priority = 6;
		sound = "taskCanceled";
		title = "TASK CANCELED";
	};
	class TaskCanceledVR: TaskCanceled
	{
		duration = 2;
	};
	class TaskCanceledVRLong: TaskCanceled
	{
		duration = 3;
	};
	class TaskCreated: TaskAssigned
	{
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_ca.paa";
		priority = 5;
		sound = "taskCreated";
		title = "TASK CREATED";
	};
	class TaskCreatedIcon
	{
		colorIconPicture[] = {1, 1, 1, 1};
		description = "%2";
		iconPicture = "%1";
		iconSize = 0.5;
		priority = 5;
		sound = "taskCreated";
		title = "TASK CREATED";
	};
	class TaskCreatedVR: TaskCreated
	{
		duration = 2;
	};
	class TaskCreatedVRLong: TaskCreated
	{
		duration = 3;
	};
	class TaskFailed: TaskAssigned
	{
		color[] = {1, 0.3, 0.2, 1};
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa";
		priority = 6;
		sound = "taskFailed";
		title = "TASK FAILED";
	};
	class TaskFailedIcon: TaskCreatedIcon
	{
		color[] = {1, 0.3, 0.2, 1};
		colorIconPicture[] = {1, 0.3, 0.2, 1};
		priority = 6;
		sound = "taskFailed";
		title = "TASK FAILED";
	};
	class TaskFailedVR: TaskFailed
	{
		duration = 2;
	};
	class TaskFailedVRLong: TaskFailed
	{
		duration = 3;
	};
	class TaskSucceeded: TaskAssigned
	{
		color[] = {0.7, 1, 0.3, 1};
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIconDone_ca.paa";
		priority = 6;
		sound = "taskSucceeded";
		title = "TASK COMPLETED";
	};
	class TaskSucceededIcon: TaskCreatedIcon
	{
		color[] = {0.7, 1, 0.3, 1};
		colorIconPicture[] = {0.7, 1, 0.3, 1};
		priority = 6;
		sound = "taskSucceeded";
		title = "TASK COMPLETED";
	};
	class TaskSucceededVR: TaskSucceeded
	{
		duration = 2;
	};
	class TaskSucceededVRLong: TaskSucceeded
	{
		duration = 3;
	};
	class TaskUnassignedIcon: TaskCreatedIcon
	{
		title = "TASK UNASSIGNED";
	};
	class TaskUpdated: TaskAssigned
	{
		priority = 4;
		sound = "taskUpdated";
		title = "TASK UPDATED";
	};
	class TaskUpdatedIcon: TaskCreatedIcon
	{
		priority = 4;
		sound = "taskUpdated";
		title = "TASK UPDATED";
	};
	class TaskUpdatedVR: TaskUpdated
	{
		duration = 2;
	};
	class TaskUpdatedVRLong: TaskUpdated
	{
		duration = 3;
	};
	class TimeTrialAborted: TimeTrialStarted
	{
		description = "You left the track";
		iconPicture = "\A3\ui_f\data\gui\cfg\Debriefing\endDefault_ca.paa";
		title = "Time Trial Aborted";
	};
	class TimeTrialCheckpoint: TimeTrialStarted
	{
		description = "Checkpoint %1 Completed";
		iconPicture = "\A3\ui_f\data\gui\cfg\CommunicationMenu\instructor_ca.paa";
		title = "Time Trial Checkpoint";
	};
	class TimeTrialEnded: TimeTrialStarted
	{
		description = "Result: %1";
		duration = 5;
		iconPicture = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		title = "Time Trial Ended";
	};
	class TimeTrialStarted: BootcampStageChanged
	{
		description = "Trial Id: %1";
		iconPicture = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		title = "Time Trial Started";
	};
	class TridentEnemies: TridentFriendly
	{
		description = "%1 and %2 are now enemies";
		iconPicture = "\a3\Ui_f\data\GUI\Cfg\Notifications\tridentEnemy_ca.paa";
		priority = 5;
		sound = "tridentEnemies";
		soundRadio = "SentGenBaseSideEnemy%3";
	};
	class TridentFriendly
	{
		description = "%1 and %2 are now allies";
		iconPicture = "\a3\Ui_f\data\GUI\Cfg\Notifications\tridentFriendly_ca.paa";
		priority = 5;
		sound = "tridentAllies";
		soundRadio = "SentGenBaseSideFriendly%3";
		title = "DIPLOMACY UPDATE";
	};
	class Warning
	{
		color[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 1};
		iconPicture = "\a3\Ui_f\data\Map\Markers\Military\warning_ca.paa";
		sound = "defaultNotification";
		soundClose = "defaultNotificationClose";
		title = "Warning";
	};
	class WarningFireAreaRestricted: Warning
	{
		description = "Demining charges cannot be dropped outside of the allowed area.";
	};
	class WarningFireAreaRestrictedDetonate: Warning
	{
		description = "A demining charge landed outside of an allowed area and will not detonate.";
	};
	class ZR_AccessProhibited1: HubSysTemplate
	{
		description = "You are entering a restricted area!";
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa";
		priority = 0;
		sound = "skirmishEntering";
		title = "WARNING";
	};
	class ZR_AccessProhibited2: HubSysTemplate
	{
		description = "Access permissions breached!";
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\ico_OFF_ca.paa";
		priority = 0;
		sound = "taskFailed";
		title = "WARNING";
	};
	class ZR_AttendBriefing1: HubSysTemplate
	{
		description = "Your presence at the briefing is required.";
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\talk_ca.paa";
		priority = 0;
		sound = "skirmishEntering";
		title = "ATTEND BRIEFING";
	};
	class ZR_SkirmishEntering1: HubSysTemplate
	{
		description = "Moving away farther will start a patrol.";
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\gear_ca.paa";
		priority = 0;
		sound = "skirmishEntering";
		title = "GOING ON PATROL";
	};
	class ZR_StartOperation1: HubSysTemplate
	{
		description = "Gear up and join your squad.";
		iconPicture = "\A3\Ui_f\data\IGUI\Cfg\Actions\takeflag_ca.paa";
		priority = 0;
		sound = "skirmishEntering";
		title = "PREPARE FOR OPERATION";
	};
};
