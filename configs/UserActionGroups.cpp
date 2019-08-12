class UserActionGroups
{
	class BuldozerControls
	{
		group[] = {"BuldSwitchCamera", "BuldFreeLook", "BuldSelect", "BuldResetCamera", "BuldMagnetizePoints", "BuldMagnetizePlanes", "BuldMagnetizeYFixed", "BuldTerrainRaise1m", "BuldTerrainRaise10cm", "BuldTerrainLower1m", "BuldTerrainLower10cm", "BuldTerrainRaise5m", "BuldTerrainRaise50cm", "BuldTerrainLower5m", "BuldTerrainLower50cm", "BuldTerrainShowNode", "BuldSelectionType", "BuldLeft", "BuldRight", "BuldForward", "BuldBack", "BuldMoveLeft", "BuldMoveRight", "BuldMoveForward", "BuldMoveBack", "BuldTurbo", "BuldUp", "BuldDown", "BuldLookLeft", "BuldLookRight", "BuldLookUp", "BuldLookDown", "BuldZoomIn", "BuldZoomOut", "BuldTextureInfo", "BuldBrushRatio", "BuldBrushStrength", "BuldBrushSmooth", "BuldBrushRandomize", "BuldBrushSetHeight", "BuldBrushOuter", "BuldUndo", "BuldRedo", "BuldCreateObj", "BuldDuplicateSel", "BuldRemoveSel", "BuldRotateSelX", "BuldRotateSelZ", "BuldScaleSel", "BuldElevateSel", "BuldKeepAbsoluteElevationSel", "BuldClearAllElevationLocks", "SeagullUp", "SeagullDown", "SeagullForward", "SeagullBack", "SeagullFastForward", "cheat1", "cheat2"};
		name = "Development";
	};
	class Camera
	{
		group[] = {"cameraMoveForward", "cameraMoveBackward", "cameraMoveLeft", "cameraMoveRight", "cameraMoveUp", "cameraMoveDown", "cameraMoveTurbo1", "cameraMoveTurbo2", "cameraZoomIn", "cameraZoomOut", "cameraLookUp", "cameraLookDown", "cameraLookLeft", "cameraLookRight", "cameraReset", "cameraTarget", "cameraVisionMode", "cameraFlashlight", "cameraInterface"};
		name = "Camera";
	};
	class CameraEditor
	{
		group[] = {"editorCameraMoveForward", "editorCameraMoveBackward", "editorCameraMoveLeft", "editorCameraMoveRight", "editorCameraMoveUp", "editorCameraMoveDown", "editorCameraMoveTurbo", "editorCameraLookUp", "editorCameraLookDown", "editorCameraLookLeft", "editorCameraLookRight", "editorCameraReset"};
		name = "Editor Camera";
	};
	class Command
	{
		group[] = {"selectAll", "switchCommand", "SelectGroupUnit1", "SelectGroupUnit2", "SelectGroupUnit3", "SelectGroupUnit4", "SelectGroupUnit5", "SelectGroupUnit6", "SelectGroupUnit7", "SelectGroupUnit8", "SelectGroupUnit9", "SelectGroupUnit0", "GroupPagePrev", "GroupPageNext", "SetTeamRed", "SetTeamGreen", "SetTeamBlue", "SetTeamYellow", "SetTeamWhite", "SelectTeamRed", "SelectTeamGreen", "SelectTeamBlue", "SelectTeamYellow", "SelectTeamWhite", "CommandingMenu1", "CommandingMenu2", "CommandingMenu3", "CommandingMenu4", "CommandingMenu5", "CommandingMenu6", "CommandingMenu7", "CommandingMenu8", "CommandingMenu9", "CommandingMenu0", "CommandingMenuSelect1", "CommandingMenuSelect2", "CommandingMenuSelect3", "CommandingMenuSelect4", "CommandingMenuSelect5", "CommandingMenuSelect6", "CommandingMenuSelect7", "CommandingMenuSelect8", "CommandingMenuSelect9", "CommandingMenuSelect0", "commandWatch", "commandLeft", "commandRight", "commandForward", "commandBack", "commandFast", "commandSlow"};
		name = "Command";
	};
	class Common
	{
		group[] = {"gear", "showMap", "hideMap", "diary", "tasks", "MiniMap", "MiniMapToggle", "uavView", "uavViewToggle", "pilotCamera", "openDlcScreen", "compass", "compassToggle", "watch", "watchToggle", "ListLeftVehicleDisplay", "ListRightVehicleDisplay", "ListPrevLeftVehicleDisplay", "ListPrevRightVehicleDisplay", "CloseLeftVehicleDisplay", "CloseRightVehicleDisplay", "NextModeLeftVehicleDisplay", "NextModeRightVehicleDisplay", "nightVision", "TransportNightVision", "binocular", "headlights", "prevAction", "nextAction", "Action", "ActionContext", "ActionInMap", "navigateMenu", "closeContext", "LiteUnitInfoToggle", "help", "engineToggle", "vehicleTurbo", "GetOut", "Eject", "swapGunner", "teamSwitch", "teamSwitchPrev", "teamSwitchNext", "timeDec", "timeInc", "copyVersion", "ingamePause"};
		name = "Common";
	};
	class Curator
	{
		group[] = {"curatorInterface", "curatorRotateMod", "curatorMoveY", "curatorDelete", "curatorDestroy", "curatorGetOut", "curatorContentWaypoint", "curatorMoveCamTo", "curatorLockCameraTo", "curatorLevelObject", "curatorGroupMod", "curatorMultipleMod", "CuratorCollapseParent", "curatorNightvision", "curatorPersonView", "curatorPingView", "curatorToggleInterface", "curatorToggleEdit", "curatorToggleCreate", "curatorMapTextures", "curatorCompass", "curatorWatch"};
		name = "Zeus";
	};
	class MovementAir
	{
		group[] = {"HeliForward", "HeliBack", "AirBankLeft", "AirBankRight", "HeliFastForward", "HeliUp", "HeliDown", "HeliThrottlePos", "AirPlaneBrake", "HeliRudderLeft", "HeliRudderRight", "HeliLeft", "HeliRight", "vtolVectoring", "vtolVectoringCancel", "LandGear", "LandGearUp", "FlapsDown", "FlapsUp", "HeliThrottleNeg"};
		name = "Plane Movement";
	};
	class MovementCar
	{
		group[] = {"CarForward", "CarBack", "CarLeft", "CarRight", "CarLinearLeft", "CarLinearRight", "CarFastForward", "CarSlowForward", "CarHandBrake", "CarWheelLeft", "CarWheelRight", "CarAimUp", "CarAimDown", "CarAimLeft", "CarAimRight", "TurnIn", "TurnOut"};
		name = "Vehicle Movement";
	};
	class MovementHelicopter
	{
		group[] = {"HeliCyclicForward", "HeliCyclicBack", "HeliCyclicLeft", "HeliCyclicRight", "HeliCollectiveRaise", "HeliCollectiveLower", "HeliRudderLeft", "HeliRudderRight", "HeliLeft", "HeliRight", "AutoHover", "AutoHoverCancel", "LandGear", "LandGearUp", "HeliCollectiveRaiseCont", "HeliCollectiveLowerCont", "HeliWheelsBrake", "HelicopterTrimOn", "HelicopterTrimOff", "HeliTrimLeft", "HeliTrimRight", "HeliTrimForward", "HeliTrimBackward", "HeliTrimRudderLeft", "HeliTrimRudderRight", "HeliRopeAction", "HeliSlingLoadManager"};
		name = "Helicopter Movement";
	};
	class MovementInfantry
	{
		group[] = {"MoveForward", "MoveBack", "TurnLeft", "TurnRight", "MoveFastForward", "MoveSlowForward", "turbo", "TurboToggle", "MoveLeft", "MoveRight", "TactTemp", "TactToggle", "TactShort", "WalkRunTemp", "WalkRunToggle", "AdjustUp", "AdjustDown", "AdjustLeft", "AdjustRight", "Stand", "Crouch", "Prone", "MoveUp", "MoveDown", "SwimUp", "SwimDown", "EvasiveLeft", "EvasiveRight", "LeanLeft", "LeanLeftToggle", "LeanRight", "LeanRightToggle", "GetOver", "Salute", "SitDown"};
		name = "Infantry Movement";
	};
	class MovementSubmarine
	{
		group[] = {"submarineUp", "submarineDown", "submarineLeft", "submarineRight", "submarineForward", "submarineBack", "submarineCyclicForward", "submarineCyclicBack"};
		name = "Submarine Movement";
	};
	class Multiplayer
	{
		group[] = {"networkStats", "networkPlayers", "prevChannel", "nextChannel", "chat", "pushToTalk", "voiceOverNet", "PushToTalkAll", "PushToTalkSide", "PushToTalkCommand", "PushToTalkGroup", "PushToTalkVehicle", "PushToTalkDirect", "TacticalPing"};
		name = "Multiplayer";
	};
	class UserActionsControls
	{
		group[] = {"User1", "User2", "User3", "User4", "User5", "User6", "User7", "User8", "User9", "User10", "User11", "User12", "User13", "User14", "User15", "User16", "User17", "User18", "User19", "User20"};
		name = "Custom controls";
	};
	class View
	{
		group[] = {"AimUp", "AimDown", "AimLeft", "AimRight", "AimHeadUp", "AimHeadDown", "AimHeadLeft", "AimHeadRight", "personView", "tacticalView", "zoomTemp", "lookAround", "commandWatch", "lookAroundToggle", "lookLeftUp", "lookUp", "lookRightUp", "lookLeft", "lookCenter", "lookRight", "lookLeftDown", "lookDown", "lookRightDown", "zoomIn", "zoomInToggle", "zoomOut", "zoomOutToggle", "lookShiftUp", "lookShiftDown", "lookShiftForward", "lookShiftLeft", "lookShiftCenter", "lookShiftRight", "lookShiftBack", "lookRollLeft", "lookRollRight", "lookLeftCont", "lookRightCont", "lookDownCont", "lookUpCont", "zoomContIn", "zoomContOut", "lookShiftLeftCont", "lookShiftRightCont", "lookShiftUpCont", "lookShiftDownCont", "lookShiftForwardCont", "lookShiftBackCont", "lookRollLeftCont", "lookRollRightCont", "turretElevationUp", "turretElevationDown"};
		name = "View";
	};
	class Weapons
	{
		group[] = {"defaultAction", "fire", "reloadMagazine", "SwitchPrimary", "SwitchHandgun", "SwitchSecondary", "SwitchWeaponGrp1", "SwitchWeaponGrp2", "SwitchWeaponGrp3", "SwitchWeaponGrp4", "nextWeapon", "prevWeapon", "switchWeapon", "handgun", "optics", "opticsTemp", "opticsMode", "holdBreath", "deployWeaponAuto", "tempRaiseWeapon", "toggleRaiseWeapon", "throw", "cycleThrownItems", "zeroingUp", "zeroingDown", "gunElevUp", "gunElevDown", "gunElevSlow", "gunElevAuto", "ActiveSensorsToggle", "lockTarget", "lockTargetToggle", "revealTarget", "lockTargets", "lockEmptyTargets", "vehLockTargets", "vehLockEmptyTargets", "vehLockTurretView", "switchGunnerWeapon", "heliManualFire", "launchCM", "nextCM"};
		name = "Weapons";
	};
};
