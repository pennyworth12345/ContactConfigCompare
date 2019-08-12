class RadioProtocolBase
{
	access = 0;
	class Arguments
	{
		class AggrTargets
		{
			modes[] = {"Default"};
		};
		class Direction
		{
			class Compass1
			{
				class 0
				{
					speech[] = {"North"};
					text = "North";
				};
				class 135
				{
					speech[] = {"SouthEast"};
					text = "South-east";
				};
				class 180
				{
					speech[] = {"South"};
					text = "South";
				};
				class 225
				{
					speech[] = {"SouthWest"};
					text = "South-west";
				};
				class 270
				{
					speech[] = {"West"};
					text = "West";
				};
				class 315
				{
					speech[] = {"NorthWest"};
					text = "North-west";
				};
				class 45
				{
					speech[] = {"NorthEast"};
					text = "North-east";
				};
				class 90
				{
					speech[] = {"East"};
					text = "East";
				};
			};
			class Compass2
			{
				class 0
				{
					speech[] = {"North2"};
					text = "North";
				};
				class 135
				{
					speech[] = {"SouthEast2"};
					text = "South-east";
				};
				class 180
				{
					speech[] = {"South2"};
					text = "South";
				};
				class 225
				{
					speech[] = {"SouthWest2"};
					text = "South-west";
				};
				class 270
				{
					speech[] = {"West2"};
					text = "West";
				};
				class 315
				{
					speech[] = {"NorthWest2"};
					text = "North-west";
				};
				class 45
				{
					speech[] = {"NorthEast2"};
					text = "North-east";
				};
				class 90
				{
					speech[] = {"East2"};
					text = "East";
				};
			};
			class Relative1
			{
				class 0
				{
					speach[] = {"InFrontOf"};
					text = "in front of";
				};
				class 180
				{
					speach[] = {"Behind"};
					text = "behind";
				};
				class 270
				{
					speach[] = {"LeftOf"};
					text = "left of";
				};
				class 90
				{
					speach[] = {"RightOf"};
					text = "right of";
				};
			};
		};
		class Distance1
		{
			class Level0
			{
				speech[] = {"DangerCloseTo"};
				text = "";
			};
			class Level1
			{
				speech[] = {"NotFarFrom"};
				text = "";
			};
			class Level2
			{
				speech[] = {"FarFrom"};
				text = "";
			};
		};
	};
	class ClausePosition
	{
		speech[] = {};
		text = "";
	};
	class ClausePositionNear
	{
		speech[] = {};
		text = "";
	};
	class CombatShout: Default
	{
		noRadio = 1;
	};
	class Completition
	{
		priority = 400;
		timeout = 5;
	};
	class Confirmation
	{
		priority = 300;
		timeout = 3;
	};
	class CriticalReport
	{
		priority = 850;
		timeout = 60;
	};
	class Default
	{
		priority = 0;
		timeout = 1000;
	};
	class Design
	{
		priority = 950;
		timeout = 1000;
	};
	class Detected
	{
		priority = 700;
		timeout = 5;
	};
	class Failure
	{
		priority = 500;
		timeout = 30;
	};
	class JoinCompleted
	{
		priority = 400;
		timeout = 30;
	};
	class NormalCommand
	{
		priority = 800;
		timeout = 1000;
	};
	class Notify
	{
		priority = 600;
		timeout = 5;
	};
	class PriorityReport
	{
		priority = 200;
		timeout = 60;
	};
	class Report
	{
		priority = 100;
		timeout = 30;
	};
	class SelectCmdMoveSentence
	{
		sentences[] = {};
	};
	class SelectEnemyDetectedSentence
	{
		sentences[] = {};
	};
	class SelectVehicleMoveSentence
	{
		sentences[] = {};
	};
	class SentAmmoCritical: CriticalReport
	{
		versions[] = {};
	};
	class SentAmmoLow: Report
	{
		versions[] = {};
	};
	class SentARTYCannotExecuteAdjustCoordinates: NormalCommand
	{
		versions[] = {};
	};
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope: NormalCommand
	{
		versions[] = {};
	};
	class SentARTYFireAt: UrgentCommand
	{
		versions[] = {};
	};
	class SentARTYFireAtWithAmmo: UrgentCommand
	{
		versions[] = {};
	};
	class SentARTYRoundsComplete: NormalCommand
	{
		versions[] = {};
	};
	class SentAssemble: NormalCommand
	{
		versions[] = {};
	};
	class SentAttackNoTarget: UrgentCommand
	{
		versions[] = {};
	};
	class SentBehaviourAware: NormalCommand
	{
		versions[] = {};
	};
	class SentBehaviourCareless: NormalCommand
	{
		versions[] = {};
	};
	class SentBehaviourCombat: NormalCommand
	{
		versions[] = {};
	};
	class SentBehaviourSafe: NormalCommand
	{
		versions[] = {};
	};
	class SentBehaviourStealth: NormalCommand
	{
		versions[] = {};
	};
	class SentCeaseFire: UrgentCommand
	{
		versions[] = {};
	};
	class SentCeaseFireInsideGroup: UrgentCommand
	{
		versions[] = {};
	};
	class SentCheering: Report
	{
		versions[] = {};
	};
	class SentClear: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdAction: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdActionAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdActionDropBag: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdActionFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdActionNear: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdActionOpenBag: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdActionTakeBag: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdActivateMine: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdActivateTimer: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdAttack: UrgentCommand
	{
		versions[] = {};
	};
	class SentCmdCarrySomeone {};
	class SentCmdCloseDoor: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdCloseDoorAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdCloseDoorFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdDeactivateBomb: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdDeactivateMine: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdDetonate: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdDismiss: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdDropMagazine: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdDropWeapon: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdEject: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdExpect: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdFire: UrgentCommand
	{
		versions[] = {};
	};
	class SentCmdFollow: UrgentCommand
	{
		versions[] = {};
	};
	class SentCmdFollowMe: UrgentCommand
	{
		versions[] = {};
	};
	class SentCmdGetIn: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdGetInCargo: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdGetInCommander: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdGetInDriver: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdGetInGunner: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdGetInPilot: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdGetOut: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdHeal: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdHealAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdHealFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdHealSelf: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdHealSomeone: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdHide: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdLightFire: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdLightFireAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdLightFireFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdMoveGroupRelative: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdMoveLocationRelative: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdMoveRecipientsRelative: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdMoveToGrid: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdMoveToObject: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdMoveToTarget: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdOpenDoor: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdOpenDoorAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdOpenDoorFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdPatchSomeone {};
	class SentCmdPlaceCharge: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdPutOutFire: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdPutOutFireAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdPutOutFireFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdRearm: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdRearmAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdRearmFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdRefuel: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdRefuelAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdRefuelFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdRepair: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdRepairAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdRepairFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdReturnFlag: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdReturnFlagAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdReturnFlagFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdStop: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdSupport: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdSupportAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdSupportFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdSuppress: UrgentCommand
	{
		versions[] = {};
	};
	class SentCmdSwitchToCargo: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdSwitchToCommander: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdSwitchToDriver: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdSwitchToGunner: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeFlag: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeFlagAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeFlagFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeMagazine: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeMagazineAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeMagazineFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeMine: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeWeapon: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeWeaponAt: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdTakeWeaponFar: NormalCommand
	{
		versions[] = {};
	};
	class SentCmdUseContainerMagazine: NormalCommand
	{
		versions[] = {};
	};
	class SentCombatGeneric: Report
	{
		versions[] = {};
	};
	class SentCommandCompleted: Completition
	{
		versions[] = {};
	};
	class SentCommandFailed: Failure
	{
		versions[] = {};
	};
	class SentConfirmAttack: Confirmation
	{
		versions[] = {};
	};
	class SentConfirmMove: Confirmation
	{
		versions[] = {};
	};
	class SentConfirmOther: Confirmation
	{
		versions[] = {};
	};
	class SentConfirmSuppress: Confirmation
	{
		versions[] = {};
	};
	class SentContact: UrgentCommand
	{
		versions[] = {};
	};
	class SentCovering: Confirmation
	{
		versions[] = {};
	};
	class SentCoverMe: Confirmation
	{
		versions[] = {};
	};
	class SentDammageCritical: CriticalReport
	{
		versions[] = {};
	};
	class SentDestinationUnreacheable: Failure
	{
		versions[] = {};
	};
	class SentDetectedBomb: Completition
	{
		versions[] = {};
	};
	class SentDetectedExplosive: Completition
	{
		versions[] = {};
	};
	class SentDetectedMine: Completition
	{
		versions[] = {};
	};
	class SentDisassemble: NormalCommand
	{
		versions[] = {};
	};
	class SentEndangered: Report
	{
		versions[] = {};
	};
	class SentEnemyContact: Report
	{
		versions[] = {};
	};
	class SentEnemyDetectedGroupCoreRelative: Detected
	{
		versions[] = {};
	};
	class SentEnemyDetectedLocationRelative: Detected
	{
		versions[] = {};
	};
	class SentEnemyDetectedOnGridReference: Detected
	{
		versions[] = {};
	};
	class SentEnemyDetectedSenderRelative: Detected
	{
		versions[] = {};
	};
	class SentEnemyDetectedUnitRelative: Detected
	{
		versions[] = {};
	};
	class SentEngage: NormalCommand
	{
		versions[] = {};
	};
	class SentEngageNoTarget: NormalCommand
	{
		versions[] = {};
	};
	class SentFire: NormalCommand
	{
		versions[] = {};
	};
	class SentFireNegative: Completition
	{
		versions[] = {};
	};
	class SentFireNoTarget: NormalCommand
	{
		versions[] = {};
	};
	class SentFireReady: Completition
	{
		versions[] = {};
	};
	class SentFormColumn: NormalCommand
	{
		versions[] = {};
	};
	class SentFormDiamond: NormalCommand
	{
		versions[] = {};
	};
	class SentFormEcholonLeft: NormalCommand
	{
		versions[] = {};
	};
	class SentFormEcholonRight: NormalCommand
	{
		versions[] = {};
	};
	class SentFormFile: NormalCommand
	{
		versions[] = {};
	};
	class SentFormLine: NormalCommand
	{
		versions[] = {};
	};
	class SentFormPosAdvance: NormalCommand
	{
		versions[] = {};
	};
	class SentFormPosFlankLeft: NormalCommand
	{
		versions[] = {};
	};
	class SentFormPosFlankRight: NormalCommand
	{
		versions[] = {};
	};
	class SentFormPosStayBack: NormalCommand
	{
		versions[] = {};
	};
	class SentFormStaggeredColumn: NormalCommand
	{
		versions[] = {};
	};
	class SentFormVee: NormalCommand
	{
		versions[] = {};
	};
	class SentFormWedge: NormalCommand
	{
		versions[] = {};
	};
	class SentFuelCritical: CriticalReport
	{
		versions[] = {};
	};
	class SentFuelLow: Report
	{
		versions[] = {};
	};
	class SentHealthCritical: CriticalReport
	{
		versions[] = {};
	};
	class SentHealthNormal: CriticalReport
	{
		versions[] = {};
	};
	class SentHealthUnconscious: CriticalReport
	{
		versions[] = {};
	};
	class SentHoldFire: UrgentCommand
	{
		versions[] = {};
	};
	class SentHoldFireInCombat: UrgentCommand
	{
		versions[] = {};
	};
	class SentIncomingGrenade: Report
	{
		versions[] = {};
	};
	class SentIsLeader: CriticalReport
	{
		versions[] = {};
	};
	class SentJoinCompleted: JoinCompleted
	{
		versions[] = {};
	};
	class SentKeepFormation: NormalCommand
	{
		versions[] = {};
	};
	class SentLightsOff: NormalCommand
	{
		versions[] = {};
	};
	class SentLightsOn: NormalCommand
	{
		versions[] = {};
	};
	class SentLooseFormation: NormalCommand
	{
		versions[] = {};
	};
	class SentNoTarget: NormalCommand
	{
		versions[] = {};
	};
	class SentNotifyAttack: Notify
	{
		versions[] = {};
	};
	class SentNotifyAttackSubgroup: SentNotifyAttack {};
	class SentNotifySupport: Notify
	{
		versions[] = {};
	};
	class SentNotifySuppress: Notify
	{
		versions[] = {};
	};
	class SentObjectDestroyed: Completition
	{
		versions[] = {};
	};
	class SentObjectDestroyedUnknown: Completition
	{
		versions[] = {};
	};
	class SentObjectUnconscious {};
	class SentObjectUnconsciousUnknown {};
	class SentOpenFire: NormalCommand
	{
		versions[] = {};
	};
	class SentOpenFireInCombat: NormalCommand
	{
		versions[] = {};
	};
	class SentOutOfFirstAidKits: Report
	{
		versions[] = {};
	};
	class SentPointersOff: NormalCommand
	{
		versions[] = {};
	};
	class SentPointersOn: NormalCommand
	{
		versions[] = {};
	};
	class SentReloading: Confirmation
	{
		versions[] = {};
	};
	class SentRepairThat: UrgentCommand
	{
		versions[] = {};
	};
	class SentRepeatCommand: NormalCommand
	{
		versions[] = {};
	};
	class SentReportPosition: Report
	{
		versions[] = {};
	};
	class SentReportStatus: NormalCommand
	{
		versions[] = {};
	};
	class SentReturnToFormation: NormalCommand
	{
		versions[] = {};
	};
	class SentRouted: Report
	{
		versions[] = {};
	};
	class SentScreaming: Report
	{
		versions[] = {};
	};
	class SentSupportAskHeal: NormalCommand
	{
		versions[] = {};
	};
	class SentSupportAskRearm: NormalCommand
	{
		versions[] = {};
	};
	class SentSupportAskRefuel: NormalCommand
	{
		versions[] = {};
	};
	class SentSupportAskRepair: NormalCommand
	{
		versions[] = {};
	};
	class SentSupportConfirm: NormalCommand
	{
		versions[] = {};
	};
	class SentSupportDone: NormalCommand
	{
		versions[] = {};
	};
	class SentSupportNotAvailable: NormalCommand
	{
		versions[] = {};
	};
	class SentSupportReady: NormalCommand
	{
		versions[] = {};
	};
	class SentSuppressing: Report
	{
		versions[] = {};
	};
	class SentTarget: UrgentCommand
	{
		versions[] = {};
	};
	class SentTeam: NormalCommand
	{
		versions[] = {};
	};
	class SentTeamPlural: NormalCommand
	{
		versions[] = {};
	};
	class SentThrowingGrenade: Confirmation
	{
		versions[] = {};
	};
	class SentThrowingSmoke: Report
	{
		versions[] = {};
	};
	class SentUnderFire: UrgentCommand
	{
		versions[] = {};
	};
	class SentUnitKilled: CriticalReport
	{
		versions[] = {};
	};
	class SentUnitPosAuto: NormalCommand
	{
		versions[] = {};
	};
	class SentUnitPosDown: NormalCommand
	{
		versions[] = {};
	};
	class SentUnitPosMiddle: NormalCommand
	{
		versions[] = {};
	};
	class SentUnitPosUp: NormalCommand
	{
		versions[] = {};
	};
	class SentWatchAround: NormalCommand
	{
		versions[] = {};
	};
	class SentWatchDir: NormalCommand
	{
		versions[] = {};
	};
	class SentWatchPos: NormalCommand
	{
		versions[] = {};
	};
	class SentWatchTgt: NormalCommand
	{
		versions[] = {};
	};
	class SentWhereAreYou: NormalCommand
	{
		versions[] = {};
	};
	class SentWitnessDeadBody: Report
	{
		versions[] = {};
	};
	class SentWitnessKilled: Report
	{
		versions[] = {};
	};
	class UICommand
	{
		priority = 1000;
		timeout = 1000;
	};
	class UrgentCommand
	{
		priority = 900;
		timeout = 1000;
	};
	class VehicleAzimut
	{
		versions[] = {};
	};
	class VehicleBackward
	{
		versions[] = {};
	};
	class VehicleCancelManualFire
	{
		versions[] = {};
	};
	class VehicleCeaseFire
	{
		versions[] = {};
	};
	class VehicleDirectFire
	{
		versions[] = {};
	};
	class VehicleFaster
	{
		versions[] = {};
	};
	class VehicleFire
	{
		versions[] = {};
	};
	class VehicleFireFailed
	{
		versions[] = {};
	};
	class VehicleForward
	{
		versions[] = {};
	};
	class VehicleJoin
	{
		versions[] = {};
	};
	class VehicleLeft
	{
		versions[] = {};
	};
	class VehicleLoad
	{
		versions[] = {};
	};
	class VehicleLoadMagazine
	{
		versions[] = {};
	};
	class VehicleManualFire
	{
		versions[] = {};
	};
	class VehicleMoveGroupRelative: NormalCommand
	{
		versions[] = {};
	};
	class VehicleMoveLocationRelative: NormalCommand
	{
		versions[] = {};
	};
	class VehicleMoveRecipientsRelative: NormalCommand
	{
		versions[] = {};
	};
	class VehicleMoveToGrid: NormalCommand
	{
		versions[] = {};
	};
	class VehicleMoveToObject: NormalCommand
	{
		versions[] = {};
	};
	class VehicleNoTarget
	{
		versions[] = {};
	};
	class VehicleRight
	{
		versions[] = {};
	};
	class VehicleSlower
	{
		versions[] = {};
	};
	class VehicleStop
	{
		versions[] = {};
	};
	class VehicleTarget
	{
		versions[] = {};
	};
	class VehicleWatchPos
	{
		versions[] = {};
	};
	class VehicleWatchTgt
	{
		versions[] = {};
	};
	class Words
	{
		all[] = {};
		allGroup[] = {};
		alpha[] = {};
		and[] = {};
		at1[] = {};
		at10[] = {};
		at11[] = {};
		at12[] = {};
		at2[] = {};
		at3[] = {};
		at4[] = {};
		at5[] = {};
		at6[] = {};
		at7[] = {};
		at8[] = {};
		at9[] = {};
		behind[] = {};
		blueTeam[] = {};
		bravo[] = {};
		charlie[] = {};
		closeTo[] = {};
		damnClose[] = {};
		dangerCloseTo[] = {};
		delta[] = {};
		dist100[] = {};
		dist1000[] = {};
		dist200[] = {};
		dist2000[] = {};
		dist50[] = {};
		dist500[] = {};
		east[] = {};
		echo[] = {};
		eight[] = {};
		eight2[] = {};
		eighteen[] = {};
		eighty[] = {};
		eleven[] = {};
		eleven2[] = {};
		enemy[] = {};
		far[] = {};
		farFrom[] = {};
		fifteen[] = {};
		fifty[] = {};
		five[] = {};
		five2[] = {};
		forty[] = {};
		four[] = {};
		four2[] = {};
		fourteen[] = {};
		foxtrot[] = {};
		friendly[] = {};
		front[] = {};
		golf[] = {};
		greenTeam[] = {};
		hotel[] = {};
		hundred[] = {};
		india[] = {};
		inFrontOf[] = {};
		juliet[] = {};
		kilo[] = {};
		left[] = {};
		leftFlank[] = {};
		leftOf[] = {};
		lima[] = {};
		loop[] = {};
		mike[] = {};
		neutral[] = {};
		nine[] = {};
		nine2[] = {};
		nineteen[] = {};
		ninety[] = {};
		north[] = {};
		northEast[] = {};
		northWest[] = {};
		notFar[] = {};
		notFarFrom[] = {};
		november[] = {};
		one[] = {};
		one2[] = {};
		oscar[] = {};
		papa[] = {};
		pause[] = {};
		quebec[] = {};
		rear[] = {};
		redTeam[] = {};
		right[] = {};
		rightFlank[] = {};
		rightOf[] = {};
		romeo[] = {};
		seven[] = {};
		seven2[] = {};
		seventeen[] = {};
		seventy[] = {};
		sierra[] = {};
		six[] = {};
		six2[] = {};
		sixteen[] = {};
		sixty[] = {};
		south[] = {};
		southEast[] = {};
		southWest[] = {};
		tango[] = {};
		ten[] = {};
		ten2[] = {};
		thirteen[] = {};
		thirty[] = {};
		three[] = {};
		three2[] = {};
		twelve[] = {};
		twelve2[] = {};
		twenty[] = {};
		two[] = {};
		two2[] = {};
		uniform[] = {};
		unknown[] = {};
		victor[] = {};
		west[] = {};
		whiskey[] = {};
		whiteTeam[] = {};
		xmit[] = {};
		xray[] = {};
		yankee[] = {};
		yellowTeam[] = {};
		zero[] = {};
		zero2[] = {};
		zulu[] = {};
	};
};
