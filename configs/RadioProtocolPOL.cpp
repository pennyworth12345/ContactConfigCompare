class RadioProtocolPOL: RadioProtocolBase
{
	class Arguments
	{
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
					speech[] = {"bearing000"};
					text = "Due North.";
				};
				class 105
				{
					speech[] = {"bearing105"};
					text = "Bearing 105.";
				};
				class 120
				{
					speech[] = {"bearing120"};
					text = "Bearing 120.";
				};
				class 135
				{
					speech[] = {"bearing135"};
					text = "Bearing 135.";
				};
				class 15
				{
					speech[] = {"bearing015"};
					text = "Bearing 015.";
				};
				class 150
				{
					speech[] = {"bearing150"};
					text = "Bearing 150.";
				};
				class 165
				{
					speech[] = {"bearing165"};
					text = "Bearing 165.";
				};
				class 180
				{
					speech[] = {"bearing180"};
					text = "Due South.";
				};
				class 195
				{
					speech[] = {"bearing195"};
					text = "Bearing 195.";
				};
				class 210
				{
					speech[] = {"bearing210"};
					text = "Bearing 210.";
				};
				class 225
				{
					speech[] = {"bearing225"};
					text = "Bearing 225.";
				};
				class 240
				{
					speech[] = {"bearing240"};
					text = "Bearing 240.";
				};
				class 255
				{
					speech[] = {"bearing255"};
					text = "Bearing 255";
				};
				class 270
				{
					speech[] = {"bearing270"};
					text = "Due West.";
				};
				class 285
				{
					speech[] = {"bearing285"};
					text = "Bearing 285.";
				};
				class 30
				{
					speech[] = {"bearing030"};
					text = "Bearing 030.";
				};
				class 300
				{
					speech[] = {"bearing300"};
					text = "Bearing 300.";
				};
				class 315
				{
					speech[] = {"bearing315"};
					text = "Bearing 315.";
				};
				class 330
				{
					speech[] = {"bearing330"};
					text = "Bearing 330.";
				};
				class 345
				{
					speech[] = {"bearing345"};
					text = "Bearing 345.";
				};
				class 360
				{
					speech[] = {"bearing360"};
					text = "Due North.";
				};
				class 45
				{
					speech[] = {"bearing045"};
					text = "Bearing 045.";
				};
				class 60
				{
					speech[] = {"bearing060"};
					text = "Bearing 060.";
				};
				class 75
				{
					speech[] = {"bearing075"};
					text = "Bearing 075.";
				};
				class 90
				{
					speech[] = {"bearing090"};
					text = "Due East.";
				};
			};
			class Relative1
			{
				class 0
				{
					speech[] = {"front"};
					text = "Front";
				};
				class 180
				{
					speech[] = {"back"};
					text = "Back";
				};
				class 270
				{
					speech[] = {"left"};
					text = "Left";
				};
				class 90
				{
					speech[] = {"right"};
					text = "Right";
				};
			};
			class Relative2
			{
				class 0
				{
					speech[] = {"moveUp"};
					text = "Front";
				};
				class 180
				{
					speech[] = {"moveBack"};
					text = "Back";
				};
				class 270
				{
					speech[] = {"moveLeft"};
					text = "Left";
				};
				class 90
				{
					speech[] = {"moveRight"};
					text = "Right";
				};
			};
			class Relative3
			{
				class 0
				{
					speech[] = {"reportFront"};
					text = "Front";
				};
				class 180
				{
					speech[] = {"reportBack"};
					text = "Back";
				};
				class 270
				{
					speech[] = {"reportLeft"};
					text = "Left";
				};
				class 90
				{
					speech[] = {"reportRight"};
					text = "Right";
				};
			};
		};
		class Distance1 {};
	};
	class ClausePosition
	{
		versions[] = {};
	};
	class ClausePositionNear
	{
		versions[] = {};
	};
	class curatorModuleCAS
	{
		versions[] = {"Normal_RequestAcknowledgedSGCASBombing", "(1 - Stealth) * 1", "Stealth_RequestAcknowledgedSGCASBombing", "(Stealth) * 1", "Normal_RequestAcknowledgedSGCASHelicopter", "(1 - Stealth) * 1", "Stealth_RequestAcknowledgedSGCASHelicopter", "(Stealth) * 1"};
		class Normal_RequestAcknowledgedSGCASBombing
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedSGCASBombing"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_RequestAcknowledgedSGCASHelicopter
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedSGCASHelicopter"};
			text = "";
			wordsClass = "Normal";
		};
		class Stealth_RequestAcknowledgedSGCASBombing
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedSGCASBombing"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_RequestAcknowledgedSGCASHelicopter
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedSGCASHelicopter"};
			text = "";
			wordsClass = "Stealth";
		};
	};
	class curatorObjectDestroyed
	{
		versions[] = {"Normal_ScreamingE", "(1 - Stealth) * 1", "Stealth_ScreamingE", "(Stealth) * 1"};
		class Normal_ScreamingE
		{
			gesture = "";
			speech[] = {"XMIT", "ScreamingE"};
			text = "";
			wordsClass = "Normal";
		};
		class Stealth_ScreamingE
		{
			gesture = "";
			speech[] = {"XMIT", "ScreamingE"};
			text = "";
			wordsClass = "Stealth";
		};
	};
	class CuratorObjectPlaced
	{
		versions[] = {"Normal_AwaitingOrders", "(1 - Stealth) * 1", "Stealth_AwaitingOrders", "(Stealth) * 1", "Normal_IAmReady", "(1 - Stealth) * 1", "Stealth_IAmReady", "(Stealth) * 1", "Normal_ReadyForOrders", "(1 - Stealth) * 1", "Stealth_ReadyForOrders", "(Stealth) * 1", "Normal_StandingBy", "(1 - Stealth) * 1", "Stealth_StandingBy", "(Stealth) * 1", "Normal_Waiting", "(1 - Stealth) * 1", "Stealth_Waiting", "(Stealth) * 1"};
		class Normal_AwaitingOrders
		{
			gesture = "";
			speech[] = {"XMIT", "AwaitingOrders"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_IAmReady
		{
			gesture = "";
			speech[] = {"XMIT", "IAmReady"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_ReadyForOrders
		{
			gesture = "";
			speech[] = {"XMIT", "ReadyForOrders"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_StandingBy
		{
			gesture = "";
			speech[] = {"XMIT", "StandingBy"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_Waiting
		{
			gesture = "";
			speech[] = {"XMIT", "Waiting"};
			text = "";
			wordsClass = "Normal";
		};
		class Stealth_AwaitingOrders
		{
			gesture = "";
			speech[] = {"XMIT", "AwaitingOrders"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_IAmReady
		{
			gesture = "";
			speech[] = {"XMIT", "IAmReady"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_ReadyForOrders
		{
			gesture = "";
			speech[] = {"XMIT", "ReadyForOrders"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_StandingBy
		{
			gesture = "";
			speech[] = {"XMIT", "StandingBy"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_Waiting
		{
			gesture = "";
			speech[] = {"XMIT", "Waiting"};
			text = "";
			wordsClass = "Stealth";
		};
	};
	class CuratorWaypointPlaced
	{
		versions[] = {"Normal_OnTheWay", "(1 - Stealth) * 1", "Stealth_OnTheWay", "(Stealth) * 1", "Normal_Confirmation1", "(1 - Stealth) * 1", "Stealth_Confirmation1", "(Stealth) * 1", "Normal_Confirmation2", "(1 - Stealth) * 1", "Stealth_Confirmation2", "(Stealth) * 1"};
		class Normal_Confirmation1
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_Confirmation2
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_OnTheWay
		{
			gesture = "";
			speech[] = {"XMIT", "OnTheWay"};
			text = "";
			wordsClass = "Normal";
		};
		class Stealth_Confirmation1
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_Confirmation2
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_OnTheWay
		{
			gesture = "";
			speech[] = {"XMIT", "OnTheWay"};
			text = "";
			wordsClass = "Stealth";
		};
	};
	class CuratorWaypointPlacedAttack
	{
		versions[] = {"Normal_CopyIAmOnHim", "(1 - Stealth) * 1", "Stealth_CopyIAmOnHim", "(Stealth) * 1", "Normal_LockAndLoad", "(1 - Stealth) * 1", "Stealth_LockAndLoad", "(Stealth) * 1", "Normal_TargetAcquired", "(1 - Stealth) * 1", "Stealth_TargetAcquired", "(Stealth) * 1", "Normal_TargetInSight", "(1 - Stealth) * 1", "Stealth_TargetInSight", "(Stealth) * 1"};
		class Normal_CopyIAmOnHim
		{
			gesture = "";
			speech[] = {"XMIT", "CopyIAmOnHim"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_LockAndLoad
		{
			gesture = "";
			speech[] = {"XMIT", "LockAndLoad"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_TargetAcquired
		{
			gesture = "";
			speech[] = {"XMIT", "TargetAcquired"};
			text = "";
			wordsClass = "Normal";
		};
		class Normal_TargetInSight
		{
			gesture = "";
			speech[] = {"XMIT", "TargetInSight"};
			text = "";
			wordsClass = "Normal";
		};
		class Stealth_CopyIAmOnHim
		{
			gesture = "";
			speech[] = {"XMIT", "CopyIAmOnHim"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_LockAndLoad
		{
			gesture = "";
			speech[] = {"XMIT", "LockAndLoad"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_TargetAcquired
		{
			gesture = "";
			speech[] = {"XMIT", "TargetAcquired"};
			text = "";
			wordsClass = "Stealth";
		};
		class Stealth_TargetInSight
		{
			gesture = "";
			speech[] = {"XMIT", "TargetInSight"};
			text = "";
			wordsClass = "Stealth";
		};
	};
	class Dummy
	{
		versions[] = {"__1_1___KIA_4", 0.14, "__1___Regroup_5", 0.5, "__1___Engage_____2____6_3_3", "0.3*(1 - (Combat))*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Target_____2____6_3_1", "0.3*(1 - (Combat))*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "_mUNIT___Move__test_____mOBJ", 1};
		class __1_1___KIA_4
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsDeadE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Normal";
		};
		class __1___Engage_____2____6_3_3
		{
			gesture = "";
			speech[] = {"XMIT", "%6.3"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6.3";
			wordsClass = "NormalEngage";
		};
		class __1___Regroup_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "ReturnToFormation"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Stealth";
		};
		class __1___Target_____2____6_3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.3"};
			text = "%1 - Target -  %2 - %6";
			textOrig = "%1 ? Target ?  %2 ? %6.3";
			wordsClass = "NormalTarget";
		};
		class _mUNIT___Move__test_____mOBJ
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15"};
			text = "";
			textOrig = "%1 ? Move (test) ? %8";
			wordsClass = "Normal";
		};
	};
	class SelectCmdMoveSentence: NormalCommand
	{
		sentences[] = {"SelectCmdMoveSentenceVeryCloseStealth", "Stealth*(1 - (((DistanceToGroup - 50) min 1 max 0)))", "SelectCmdMoveSentenceMediumStealth", "Stealth*((DistanceToGroup - 350) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "SelectCmdMoveSentenceLocationStealth", "Stealth*InsideLocation*(1 - ((1 - (((DistanceToLocation - 50) min 1 max 0)))))", "SelectCmdMoveSentenceFarStealth", "Stealth*((DistanceToGroup - 1050) min 1 max 0)", "SelectCmdMoveSentenceCloseStealth", "Stealth*((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 350) min 1 max 0)))", "SelectCmdMoveSentenceLocation", "(1 - (Stealth))*InsideLocation*(1 - ((1 - (((DistanceToLocation - 50) min 1 max 0)))))", "SelectCmdMoveSentenceClose", "(1 - (Stealth))*((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 350) min 1 max 0)))", "SelectCmdMoveSentenceMedium", "(1 - (Stealth))*((DistanceToGroup - 350) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "SelectCmdMoveSentenceFar", "(1 - (Stealth))*((DistanceToGroup - 1050) min 1 max 0)", "SelectCmdMoveSentenceVeryClose", "(1 - (Stealth))*(1 - (((DistanceToGroup - 50) min 1 max 0)))"};
	};
	class SelectCmdMoveSentenceClose: NormalCommand
	{
		versions[] = {"_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1_2", "Combat", "_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1", "(1 - (Combat))"};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.1"};
			text = "%1 - Move - %3.101 - %4.1";
			textOrig = "%1 ? Move ? %3.101 ? %4.1";
			wordsClass = "Normal";
		};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.1"};
			text = "%1 - Move - %3.101 - %4.1";
			textOrig = "%1 ? Move ? %3.101 ? %4.1";
			wordsClass = "Combat";
		};
	};
	class SelectCmdMoveSentenceClose_1: NormalCommand
	{
		versions[] = {"_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1_3", "Combat", "_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1_1", "(1 - (Combat))"};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.1"};
			text = "%1 - Move - %3.101 - %4.1";
			textOrig = "%1 ? Move ? %3.101 ? %4.1";
			wordsClass = "Normal";
		};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.1"};
			text = "%1 - Move - %3.101 - %4.1";
			textOrig = "%1 ? Move ? %3.101 ? %4.1";
			wordsClass = "Combat";
		};
	};
	class SelectCmdMoveSentenceCloseStealth: NormalCommand
	{
		versions[] = {"_mUNIT___Move____mGRPDIR_1", 1};
		class _mUNIT___Move____mGRPDIR_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.1"};
			text = "%1 - Move - %4.1";
			textOrig = "%1 ? Move ? %4.1";
			wordsClass = "Stealth";
		};
	};
	class SelectCmdMoveSentenceFar: NormalCommand
	{
		versions[] = {"_mUNIT___Move___Grid___mGRID_3", "(1 - (Combat))", "_mUNIT___Move___Grid___mGRID", "Combat"};
		class _mUNIT___Move___Grid___mGRID
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Move - Grid: %2";
			textOrig = "%1 ? Move ? Grid: %2";
			wordsClass = "Combat";
		};
		class _mUNIT___Move___Grid___mGRID_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Move - Grid: %2";
			textOrig = "%1 ? Move ? Grid: %2";
			wordsClass = "Normal";
		};
	};
	class SelectCmdMoveSentenceFar_1: NormalCommand
	{
		versions[] = {"_mUNIT___Move___Grid___mGRID_4", "(1 - (Combat))", "_mUNIT___Move___Grid___mGRID_1", "Combat"};
		class _mUNIT___Move___Grid___mGRID_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Move - Grid: %2";
			textOrig = "%1 ? Move ? Grid: %2";
			wordsClass = "Combat";
		};
		class _mUNIT___Move___Grid___mGRID_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Move - Grid: %2";
			textOrig = "%1 ? Move ? Grid: %2";
			wordsClass = "Normal";
		};
	};
	class SelectCmdMoveSentenceFarStealth: NormalCommand
	{
		versions[] = {"_mUNIT___Move___Grid___mGRID_2", 1};
		class _mUNIT___Move___Grid___mGRID_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Move - Grid: %2";
			textOrig = "%1 ? Move ? Grid: %2";
			wordsClass = "Stealth";
		};
	};
	class SelectCmdMoveSentenceLocation: NormalCommand
	{
		versions[] = {"_mUNIT___Move__test_____mLOC", 1};
		class _mUNIT___Move__test_____mLOC
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%7"};
			text = "%1 - Move - %7";
			textOrig = "%1 ? Move (test) ? %7";
			wordsClass = "Normal";
		};
	};
	class SelectCmdMoveSentenceLocation_1: NormalCommand
	{
		versions[] = {"_mUNIT___Move__test_____mLOC_1", 1};
		class _mUNIT___Move__test_____mLOC_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%7"};
			text = "%1 - Move - %7";
			textOrig = "%1 ? Move (test) ? %7";
			wordsClass = "Normal";
		};
	};
	class SelectCmdMoveSentenceLocationStealth: NormalCommand
	{
		versions[] = {"_mUNIT___Move__test_____mLOC_2", 1};
		class _mUNIT___Move__test_____mLOC_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%7"};
			text = "%1 - Move - %7";
			textOrig = "%1 ? Move (test) ? %7";
			wordsClass = "Stealth";
		};
	};
	class SelectCmdMoveSentenceMedium: NormalCommand
	{
		versions[] = {"_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS_3", "(1 - (Combat))", "_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS", "Combat"};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.101"};
			text = "%1 - Move - %3.101 - %4.101";
			textOrig = "%1 ? Move ? %3.101 ? %4.101";
			wordsClass = "Combat";
		};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.101"};
			text = "%1 - Move - %3.101 - %4.101";
			textOrig = "%1 ? Move ? %3.101 ? %4.101";
			wordsClass = "Normal";
		};
	};
	class SelectCmdMoveSentenceMedium_1: NormalCommand
	{
		versions[] = {"_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS_4", "(1 - (Combat))", "_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS_1", "Combat"};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.101"};
			text = "%1 - Move - %3.101 - %4.101";
			textOrig = "%1 ? Move ? %3.101 ? %4.101";
			wordsClass = "Combat";
		};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.101"};
			text = "%1 - Move - %3.101 - %4.101";
			textOrig = "%1 ? Move ? %3.101 ? %4.101";
			wordsClass = "Normal";
		};
	};
	class SelectCmdMoveSentenceMediumStealth: NormalCommand
	{
		versions[] = {"_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS_2", 1};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3.300", "%4.101"};
			text = "%1 - Move - %3.101 - %4.101";
			textOrig = "%1 ? Move ? %3.101 ? %4.101";
			wordsClass = "Stealth";
		};
	};
	class SelectCmdMoveSentenceVeryClose: NormalCommand
	{
		versions[] = {"_mUNIT___Move____mGRPDIR_2_1", "Combat", "_mUNIT___Move____mGRPDIR_2", "(1 - (Combat))"};
		class _mUNIT___Move____mGRPDIR_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%4.2"};
			text = "%1 - Move - %4.2";
			textOrig = "%1 ? Move ? %4.2";
			wordsClass = "Normal";
		};
		class _mUNIT___Move____mGRPDIR_2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%4.2"};
			text = "%1 - Move - %4.2";
			textOrig = "%1 ? Move ? %4.2";
			wordsClass = "Combat";
		};
	};
	class SelectCmdMoveSentenceVeryClose_1: NormalCommand
	{
		versions[] = {"_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_2_1", "Combat", "_mUNIT___Move____mGRPDIS_ABS____mGRPDIR_2", "(1 - (Combat))"};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%4.2"};
			text = "%1 - Move - %3.101 - %4.2";
			textOrig = "%1 ? Move ? %3.101 ? %4.2";
			wordsClass = "Normal";
		};
		class _mUNIT___Move____mGRPDIS_ABS____mGRPDIR_2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%4.2"};
			text = "%1 - Move - %3.101 - %4.2";
			textOrig = "%1 ? Move ? %3.101 ? %4.2";
			wordsClass = "Combat";
		};
	};
	class SelectCmdMoveSentenceVeryCloseStealth: NormalCommand
	{
		versions[] = {"_mUNIT___Move____mGRPDIR_2_2", 1};
		class _mUNIT___Move____mGRPDIR_2_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%4.2"};
			text = "%1 - Move - %4.2";
			textOrig = "%1 ? Move ? %4.2";
			wordsClass = "Stealth";
		};
	};
	class SelectEnemyDetectedSentence
	{
		sentences[] = {"SentEnemyDetectedMediumStealth", "Stealth*((DistanceToGroup - 250) min 1 max 0) * (1 - (((DistanceToGroup - 850) min 1 max 0)))", "SentEnemyDetectedLong", "(1 - (Stealth))*((DistanceToGroup - 850) min 1 max 0) * (1 - (((DistanceToGroup - 2000) min 1 max 0)))", "SentEnemyDetectedDangerClose", "(1 - (Stealth))*(1 - (((DistanceToGroup - 50) min 1 max 0)))", "SentEnemyDetectedClose", "(1 - (Stealth))*((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "SentEnemyDetectedVeryLong", "(1 - (Stealth))*((DistanceToGroup - 2000) min 1 max 0)", "SentEnemyDetectedMedium", "(1 - (Stealth))*((DistanceToGroup - 250) min 1 max 0) * (1 - (((DistanceToGroup - 850) min 1 max 0)))", "SentEnemyDetectedLongStealth", "Stealth*((DistanceToGroup - 850) min 1 max 0) * (1 - (((DistanceToGroup - 2000) min 1 max 0)))", "SentEnemyDetectedDangerCloseStealth", "Stealth*(1 - (((DistanceToGroup - 50) min 1 max 0)))", "SentEnemyDetectedCloseStealth", "Stealth*((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "SentEnemyDetectedVeryLongStealth", "Stealth*((DistanceToGroup - 2000) min 1 max 0)"};
	};
	class SelectVehicleMoveSentence
	{
		sentences[] = {"SelectCmdMoveSentenceFar", "((DistanceToGroup - 1050) min 1 max 0)", "SelectCmdMoveSentenceClose", "((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 350) min 1 max 0)))", "SelectCmdMoveSentenceVeryClose", "(1 - (((DistanceToGroup - 50) min 1 max 0)))", "SelectCmdMoveSentenceMedium", "((DistanceToGroup - 350) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))"};
	};
	class SentAmmoCritical: CriticalReport
	{
		versions[] = {"No_ammo_1", "Stealth", "No_ammo", "(1 - (Stealth))"};
		class No_ammo
		{
			gesture = "";
			speech[] = {"XMIT", "AmmoCritical"};
			text = "No ammo";
			textOrig = "No ammo";
			wordsClass = "Normal";
		};
		class No_ammo_1
		{
			gesture = "";
			speech[] = {"XMIT", "AmmoCritical"};
			text = "No ammo";
			textOrig = "No ammo";
			wordsClass = "Stealth";
		};
	};
	class SentAmmoLow: Report
	{
		versions[] = {"Low_ammo_1", "Stealth", "Low_ammo", "(1 - (Stealth))"};
		class Low_ammo
		{
			gesture = "";
			speech[] = {"XMIT", "AmmoLow"};
			text = "Low ammo";
			textOrig = "Low ammo";
			wordsClass = "Normal";
		};
		class Low_ammo_1
		{
			gesture = "";
			speech[] = {"XMIT", "AmmoLow"};
			text = "Low ammo";
			textOrig = "Low ammo";
			wordsClass = "Stealth";
		};
	};
	class SentARTYCannotExecuteAdjustCoordinates: NormalCommand
	{
		versions[] = {"Cannot_execute__adjust_coordinates_", 1};
		class Cannot_execute__adjust_coordinates_
		{
			gesture = "";
			speech[] = {"XMIT", "CannotExecuteAdjustCoordinates"};
			text = "Cannot execute, adjust coordinates.";
			textOrig = "Cannot execute, adjust coordinates.";
			wordsClass = "Normal";
		};
	};
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope: NormalCommand
	{
		versions[] = {"Cannot_execute__outside_firing_envelope_", 1};
		class Cannot_execute__outside_firing_envelope_
		{
			gesture = "";
			speech[] = {"XMIT", "CannotExecuteOutsideEnvelope"};
			text = "Cannot execute, outside firing envelope.";
			textOrig = "Cannot execute, outside firing envelope.";
			wordsClass = "Normal";
		};
	};
	class SentARTYFireAt: UrgentCommand
	{
		versions[] = {"__1___Fire____2", 1};
		class __1___Fire____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Fire", "%2"};
			text = "%1 - Fire - %2";
			textOrig = "%1 ? Fire ? %2";
			wordsClass = "Normal";
		};
	};
	class SentARTYFireAtWithAmmo: UrgentCommand
	{
		versions[] = {"__1___Requesting_support___Grid___2", 1};
		class __1___Requesting_support___Grid___2
		{
			gesture = "";
			speech[] = {"XMIT", "RequestingSupport", "%1", "%2"};
			text = "%1 - Requesting support - Grid: %2";
			textOrig = "%1 ? Requesting support ? Grid: %2";
			wordsClass = "Normal";
		};
	};
	class SentARTYRoundsComplete: NormalCommand
	{
		versions[] = {"Rounds_complete_", 1};
		class Rounds_complete_
		{
			gesture = "";
			speech[] = {"XMIT", "RoundsComplete"};
			text = "Rounds complete.";
			textOrig = "Rounds complete.";
			wordsClass = "Normal";
		};
	};
	class SentArtySGSupportRoundsComplete: NormalCommand
	{
		versions[] = {"Rounds_complete__Out_", 1};
		class Rounds_complete__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "ArtySGSupportRoundsComplete"};
			text = "Rounds complete. Out.";
			textOrig = "Rounds complete. Out.";
			wordsClass = "Normal";
		};
	};
	class SentAssemble: NormalCommand
	{
		versions[] = {"__1_1___Assemble____2_1", "Stealth", "__1_1___Assemble____2", "(1 - (Stealth))"};
		class __1_1___Assemble____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "AssembleThatWeapon"};
			text = "%1.1 - Assemble - %2";
			textOrig = "%1.1 ? Assemble ? %2";
			wordsClass = "Normal";
		};
		class __1_1___Assemble____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "AssembleThatWeapon"};
			text = "%1.1 - Assemble - %2";
			textOrig = "%1.1 ? Assemble ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentAttackNoTargetDefault: UrgentCommand
	{
		versions[] = {"__1___Engage_4", "Combat", "__1___Engage_1", "(1 - (Combat))"};
		class __1___Engage_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Attack"};
			text = "%1 - Engage";
			textOrig = "%1 ? Engage";
			wordsClass = "Normal";
		};
		class __1___Engage_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Attack"};
			text = "%1 - Engage";
			textOrig = "%1 ? Engage";
			wordsClass = "Combat";
		};
	};
	class SentAttackNoTargetStealth: UrgentCommand
	{
		versions[] = {"__1___Engage_7", 1};
		class __1___Engage_7
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Attack"};
			text = "%1 - Engage";
			textOrig = "%1 ? Engage";
			wordsClass = "Stealth";
		};
	};
	class SentBehaviourAware: NormalCommand
	{
		sentences[] = {"SentBehaviourAwareStealth", "Stealth", "SentBehaviourAwareDefault", "(1 - (Stealth))"};
	};
	class SentBehaviourAwareDefault: NormalCommand
	{
		versions[] = {"__1___Aware_1", "0.3*(1 - (Combat))", "__1___Aware_4", "0.7*Combat", "__1___Aware_5", "0.3*Combat", "__1___Aware", "0.7*(1 - (Combat))"};
		class __1___Aware
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "KeepFocused"};
			text = "%1 - Aware";
			textOrig = "%1 ? Aware";
			wordsClass = "Normal";
		};
		class __1___Aware_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "StayAlert"};
			text = "%1 - Aware";
			textOrig = "%1 ? Aware";
			wordsClass = "Normal";
		};
		class __1___Aware_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "KeepFocused"};
			text = "%1 - Aware";
			textOrig = "%1 ? Aware";
			wordsClass = "Combat";
		};
		class __1___Aware_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "StayAlert"};
			text = "%1 - Aware";
			textOrig = "%1 ? Aware";
			wordsClass = "Combat";
		};
	};
	class SentBehaviourAwareStealth: NormalCommand
	{
		versions[] = {"__1___Aware_3", 0.3, "__1___Aware_2", 0.7};
		class __1___Aware_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "KeepFocused"};
			text = "%1 - Aware";
			textOrig = "%1 ? Aware";
			wordsClass = "Stealth";
		};
		class __1___Aware_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "StayAlert"};
			text = "%1 - Aware";
			textOrig = "%1 ? Aware";
			wordsClass = "Stealth";
		};
	};
	class SentBehaviourCareless: NormalCommand
	{
		versions[] = {};
	};
	class SentBehaviourCombat: NormalCommand
	{
		sentences[] = {"SentBehaviourCombatStealth", "Stealth", "SentBehaviourCombatDefault", "(1 - (Stealth))"};
	};
	class SentBehaviourCombatDefault: NormalCommand
	{
		versions[] = {"__1___Combat_1", "0.1*(1 - (Combat))", "__1___Combat_2", "0.1*(1 - (Combat))", "__1___Combat_3", "0.6*(1 - (Combat))", "__1___Combat_8", "Combat", "__1___Combat_9", "Combat", "__1___Combat_10", "Combat", "__1___Combat_11", "Combat", "__1___Combat", "0.2*(1 - (Combat))"};
		class __1___Combat
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "PrepareForContact"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Normal";
		};
		class __1___Combat_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "GetReadyToFight"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Normal";
		};
		class __1___Combat_10
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "GetReadyToFight"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Combat";
		};
		class __1___Combat_11
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "PrepareForContact"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Combat";
		};
		class __1___Combat_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "LockAndLoad"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Normal";
		};
		class __1___Combat_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Danger"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Normal";
		};
		class __1___Combat_8
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Danger"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Combat";
		};
		class __1___Combat_9
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "LockAndLoad"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Combat";
		};
	};
	class SentBehaviourCombatStealth: NormalCommand
	{
		versions[] = {"__1___Combat_5", 0.1, "__1___Combat_6", 0.1, "__1___Combat_7", 0.6, "__1___Combat_4", 0.2};
		class __1___Combat_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "PrepareForContact"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Stealth";
		};
		class __1___Combat_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "GetReadyToFight"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Stealth";
		};
		class __1___Combat_6
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "LockAndLoad"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Stealth";
		};
		class __1___Combat_7
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Danger"};
			text = "%1 - Combat";
			textOrig = "%1 ? Combat";
			wordsClass = "Stealth";
		};
	};
	class SentBehaviourSafe: NormalCommand
	{
		sentences[] = {"SentBehaviourSafeStealth", "Stealth", "SentBehaviourSafeDefault", "(1 - (Stealth))"};
	};
	class SentBehaviourSafeDefault: NormalCommand
	{
		versions[] = {"__1___Relax_1", 0.3, "__1___Relax", 0.7};
		class __1___Relax
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Safe"};
			text = "%1 - Relax";
			textOrig = "%1 ? Relax";
			wordsClass = "Normal";
		};
		class __1___Relax_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Relax"};
			text = "%1 - Relax";
			textOrig = "%1 ? Relax";
			wordsClass = "Normal";
		};
	};
	class SentBehaviourSafeStealth: NormalCommand
	{
		versions[] = {"__1___Relax_3", 0.3, "__1___Relax_2", 0.7};
		class __1___Relax_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Safe"};
			text = "%1 - Relax";
			textOrig = "%1 ? Relax";
			wordsClass = "Stealth";
		};
		class __1___Relax_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Relax"};
			text = "%1 - Relax";
			textOrig = "%1 ? Relax";
			wordsClass = "Stealth";
		};
	};
	class SentBehaviourStealth: NormalCommand
	{
		versions[] = {"__1___Stealth_1", 0.1, "__1___Stealth_2", 0.7, "__1___Stealth", 0.2};
		class __1___Stealth
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Silence"};
			text = "%1 - Stealth";
			textOrig = "%1 ? Stealth";
			wordsClass = "Normal";
		};
		class __1___Stealth_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "DownAndQuiet"};
			text = "%1 - Stealth";
			textOrig = "%1 ? Stealth";
			wordsClass = "Normal";
		};
		class __1___Stealth_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "CommStealth"};
			text = "%1 - Stealth";
			textOrig = "%1 ? Stealth";
			wordsClass = "Normal";
		};
	};
	class SentCeaseFire: UrgentCommand
	{
		sentences[] = {"SentCeaseFireDefault", "Stealth", "SentCeaseFireDefault", "(1 - (Stealth))"};
	};
	class SentCeaseFireDefault: UrgentCommand
	{
		versions[] = {"__2_1___Cease_fire_1", "(1 - (Combat))", "__2_1___Cease_fire_4", "Combat", "__2_1___Cease_fire_5", "Combat", "__2_1___Cease_fire", "(1 - (Combat))"};
		class __2_1___Cease_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%2.1", "CheckYourFire"};
			text = "%2.1 - Cease fire";
			textOrig = "%2.1 ? Cease fire";
			wordsClass = "Normal";
		};
		class __2_1___Cease_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%2.1", "CeaseFire"};
			text = "%2.1 - Cease fire";
			textOrig = "%2.1 ? Cease fire";
			wordsClass = "Normal";
		};
		class __2_1___Cease_fire_4
		{
			gesture = "";
			speech[] = {"XMIT", "%2.1", "HoldFire"};
			text = "%2.1 - Cease fire";
			textOrig = "%2.1 ? Cease fire";
			wordsClass = "Combat";
		};
		class __2_1___Cease_fire_5
		{
			gesture = "";
			speech[] = {"XMIT", "%2.1", "DoNotFire"};
			text = "%2.1 - Cease fire";
			textOrig = "%2.1 ? Cease fire";
			wordsClass = "Combat";
		};
	};
	class SentCeaseFireDefault_1: UrgentCommand
	{
		versions[] = {"__2_1___Cease_fire_3", 0.5, "__2_1___Cease_fire_2", 0.5};
		class __2_1___Cease_fire_2
		{
			gesture = "";
			speech[] = {"XMIT", "CheckYourFire"};
			text = "%2.1 - Cease fire";
			textOrig = "%2.1 ? Cease fire";
			wordsClass = "Stealth";
		};
		class __2_1___Cease_fire_3
		{
			gesture = "";
			speech[] = {"XMIT", "%2.1", "CeaseFire"};
			text = "%2.1 - Cease fire";
			textOrig = "%2.1 ? Cease fire";
			wordsClass = "Stealth";
		};
	};
	class SentCeaseFireInsideGroup: UrgentCommand
	{
		sentences[] = {"SentCeaseFireInsideGroupStealth", "Stealth", "SentCeaseFireInsideGroupDefault", "(1 - (Stealth))"};
	};
	class SentCeaseFireInsideGroupDefault: UrgentCommand
	{
		versions[] = {"__1_1___Hold_fire_9", "Combat", "__1_1___Cease_fire", "(1 - (Combat))"};
		class __1_1___Cease_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CeaseFire"};
			text = "%1.1 - Cease fire";
			textOrig = "%1.1 ? Cease fire";
			wordsClass = "Normal";
		};
		class __1_1___Hold_fire_9
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CeaseFire", "DoNotFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Combat";
		};
	};
	class SentCeaseFireInsideGroupStealth: UrgentCommand
	{
		versions[] = {"__1_1___Cease_fire_1", 1};
		class __1_1___Cease_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CeaseFire"};
			text = "%1.1 - Cease fire";
			textOrig = "%1.1 ? Cease fire";
			wordsClass = "Stealth";
		};
	};
	class SentCheering: CombatShout
	{
		versions[] = {"__50", "Stealth", "__30", "(1 - (Stealth))"};
		class __30
		{
			gesture = "";
			speech[] = {"XMIT", "CheeringE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __50
		{
			gesture = "";
			speech[] = {"XMIT", "CheeringE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentClear: NormalCommand
	{
		sentences[] = {"SentClearStealth", "Stealth", "SentClearDefault", "(1 - (Stealth))"};
	};
	class SentClearDefault: NormalCommand
	{
		versions[] = {"Area_clear_1", 0.5, "Area_clear", 0.5};
		class Area_clear
		{
			gesture = "";
			speech[] = {"XMIT", "Clear"};
			text = "Area clear";
			textOrig = "Area clear";
			wordsClass = "Normal";
		};
		class Area_clear_1
		{
			gesture = "";
			speech[] = {"XMIT", "AreaClear"};
			text = "Area clear";
			textOrig = "Area clear";
			wordsClass = "Normal";
		};
	};
	class SentClearStealth: NormalCommand
	{
		versions[] = {"Area_clear_3", 0.5, "Area_clear_2", 0.5};
		class Area_clear_2
		{
			gesture = "";
			speech[] = {"XMIT", "Clear"};
			text = "Area clear";
			textOrig = "Area clear";
			wordsClass = "Stealth";
		};
		class Area_clear_3
		{
			gesture = "";
			speech[] = {"XMIT", "AreaClear"};
			text = "Area clear";
			textOrig = "Area clear";
			wordsClass = "Stealth";
		};
	};
	class SentCmdAction: NormalCommand
	{
		versions[] = {"__11", 1};
		class __11
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdActionAt: NormalCommand
	{
		versions[] = {"__11", 1};
		class __11
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdActionDropBag: NormalCommand
	{
		versions[] = {"__1_1___Drop_pack_1", "Stealth", "__1_1___Drop_pack", "(1 - (Stealth))"};
		class __1_1___Drop_pack
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DropYourPack"};
			text = "%1.1 - Drop pack";
			textOrig = "%1.1 ? Drop pack";
			wordsClass = "Normal";
		};
		class __1_1___Drop_pack_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DropYourPack"};
			text = "%1.1 - Drop pack";
			textOrig = "%1.1 ? Drop pack";
			wordsClass = "Stealth";
		};
	};
	class SentCmdActionFar: NormalCommand
	{
		versions[] = {"__11", 1};
		class __11
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdActionNear: NormalCommand
	{
		versions[] = {"__11", 1};
		class __11
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdActionOpenBag: NormalCommand
	{
		versions[] = {"__1_1___Open_pack_1", "Stealth", "__1_1___Open_pack", "(1 - (Stealth))"};
		class __1_1___Open_pack
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OpenUpYourPack"};
			text = "%1.1 - Open pack";
			textOrig = "%1.1 ? Open pack";
			wordsClass = "Normal";
		};
		class __1_1___Open_pack_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OpenUpYourPack"};
			text = "%1.1 - Open pack";
			textOrig = "%1.1 ? Open pack";
			wordsClass = "Stealth";
		};
	};
	class SentCmdActionTakeBag: NormalCommand
	{
		versions[] = {"__1_1___Take_pack_1", "Stealth", "__1_1___Take_pack", "(1 - (Stealth))"};
		class __1_1___Take_pack
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "TakeThatPack"};
			text = "%1.1 - Take pack";
			textOrig = "%1.1 ? Take pack";
			wordsClass = "Normal";
		};
		class __1_1___Take_pack_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "TakeThatPack"};
			text = "%1.1 - Take pack";
			textOrig = "%1.1 ? Take pack";
			wordsClass = "Stealth";
		};
	};
	class SentCmdActivateTimer: NormalCommand
	{
		versions[] = {"__1_1___Set_timer_1", "Stealth", "__1_1___Set_timer", "(1 - (Stealth))"};
		class __1_1___Set_timer
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SetTheTimer"};
			text = "%1.1 - Set timer";
			textOrig = "%1.1 ? Set timer";
			wordsClass = "Normal";
		};
		class __1_1___Set_timer_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SetTheTimer"};
			text = "%1.1 - Set timer";
			textOrig = "%1.1 ? Set timer";
			wordsClass = "Stealth";
		};
	};
	class SentCmdAttack
	{
		sentences[] = {"SentEngageStealth", "Stealth", "SentEngageDefault", "(1 - (Stealth))"};
	};
	class SentCmdCarrySomeone: UrgentCommand
	{
		versions[] = {"__1_1___Carry____2_1", "Stealth", "__1_1___Carry____2", "(1 - (Stealth))"};
		class __1_1___Carry____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CarryThatSoldier"};
			text = "%1.1 - Carry - %2";
			textOrig = "%1.1 ? Carry ? %2";
			wordsClass = "Normal";
		};
		class __1_1___Carry____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CarryThatSoldier"};
			text = "%1.1 - Carry - %2";
			textOrig = "%1.1 ? Carry ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdCloseDoor: NormalCommand
	{
		versions[] = {"__1_1___Close_door_1", "Stealth", "__1_1___Close_door", "(1 - (Stealth))"};
		class __1_1___Close_door
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CloseThatDoor"};
			text = "%1.1 - Close door";
			textOrig = "%1.1 ? Close door";
			wordsClass = "Normal";
		};
		class __1_1___Close_door_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CloseThatDoor"};
			text = "%1.1 - Close door";
			textOrig = "%1.1 ? Close door";
			wordsClass = "Stealth";
		};
	};
	class SentCmdCloseDoorAt: NormalCommand
	{
		versions[] = {"__1_1___Close_door_1", "Stealth", "__1_1___Close_door", "(1 - (Stealth))"};
		class __1_1___Close_door
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CloseThatDoor"};
			text = "%1.1 - Close door";
			textOrig = "%1.1 ? Close door";
			wordsClass = "Normal";
		};
		class __1_1___Close_door_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CloseThatDoor"};
			text = "%1.1 - Close door";
			textOrig = "%1.1 ? Close door";
			wordsClass = "Stealth";
		};
	};
	class SentCmdCloseDoorFar: NormalCommand
	{
		versions[] = {"__1_1___Close_door_1", "Stealth", "__1_1___Close_door", "(1 - (Stealth))"};
		class __1_1___Close_door
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CloseThatDoor"};
			text = "%1.1 - Close door";
			textOrig = "%1.1 ? Close door";
			wordsClass = "Normal";
		};
		class __1_1___Close_door_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CloseThatDoor"};
			text = "%1.1 - Close door";
			textOrig = "%1.1 ? Close door";
			wordsClass = "Stealth";
		};
	};
	class SentCmdDeactivateBomb: NormalCommand
	{
		versions[] = {"__1_1___Deactivate_charge_1", "Stealth", "__1_1___Deactivate_charge", "(1 - (Stealth))"};
		class __1_1___Deactivate_charge
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DeactivateCharge"};
			text = "%1.1 - Deactivate charge";
			textOrig = "%1.1 ? Deactivate charge";
			wordsClass = "Normal";
		};
		class __1_1___Deactivate_charge_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DeactivateCharge"};
			text = "%1.1 - Deactivate charge";
			textOrig = "%1.1 ? Deactivate charge";
			wordsClass = "Stealth";
		};
	};
	class SentCmdDeactivateMine: NormalCommand
	{
		versions[] = {"__1_1___Disarm_mine_1", "Stealth", "__1_1___Disarm_mine", "(1 - (Stealth))"};
		class __1_1___Disarm_mine
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DisarmThatMine"};
			text = "%1.1 - Disarm mine";
			textOrig = "%1.1 ? Disarm mine";
			wordsClass = "Normal";
		};
		class __1_1___Disarm_mine_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DisarmThatMine"};
			text = "%1.1 - Disarm mine";
			textOrig = "%1.1 ? Disarm mine";
			wordsClass = "Stealth";
		};
	};
	class SentCmdDetonate: NormalCommand
	{
		versions[] = {"__1_1___Detonate_charge_1", "Stealth", "__1_1___Detonate_charge", "(1 - (Stealth))"};
		class __1_1___Detonate_charge
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DetonateCharge"};
			text = "%1.1 - Detonate charge";
			textOrig = "%1.1 ? Detonate charge";
			wordsClass = "Normal";
		};
		class __1_1___Detonate_charge_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DetonateCharge"};
			text = "%1.1 - Detonate charge";
			textOrig = "%1.1 ? Detonate charge";
			wordsClass = "Stealth";
		};
	};
	class SentCmdDismiss: NormalCommand
	{
		versions[] = {"__17", 1};
		class __17
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdDropMagazine: NormalCommand
	{
		versions[] = {"__1_1___Drop_magazine____2_1", "Stealth", "__1_1___Drop_magazine____2", "(1 - (Stealth))"};
		class __1_1___Drop_magazine____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DropThatMagazine"};
			text = "%1.1 - Drop magazine - %2";
			textOrig = "%1.1 ? Drop magazine ? %2";
			wordsClass = "Normal";
		};
		class __1_1___Drop_magazine____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DropThatMagazine"};
			text = "%1.1 - Drop magazine - %2";
			textOrig = "%1.1 ? Drop magazine ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdDropWeapon: NormalCommand
	{
		versions[] = {"__1_1___Drop_weapon____2_1", "Stealth", "__1_1___Drop_weapon____2", "(1 - (Stealth))"};
		class __1_1___Drop_weapon____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DropTheWeapon"};
			text = "%1.1 - Drop weapon - %2";
			textOrig = "%1.1 ? Drop weapon ? %2";
			wordsClass = "Normal";
		};
		class __1_1___Drop_weapon____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DropTheWeapon"};
			text = "%1.1 - Drop weapon - %2";
			textOrig = "%1.1 ? Drop weapon ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdEject: NormalCommand
	{
		versions[] = {"__1_1___Eject_1", "Stealth", "__1_1___Eject_2", "Combat", "__1_1___Eject", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Eject
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Eject"};
			text = "%1.1 - Eject";
			textOrig = "%1.1 ? Eject";
			wordsClass = "Normal";
		};
		class __1_1___Eject_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Eject"};
			text = "%1.1 - Eject";
			textOrig = "%1.1 ? Eject";
			wordsClass = "Stealth";
		};
		class __1_1___Eject_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Eject"};
			text = "%1.1 - Eject";
			textOrig = "%1.1 ? Eject";
			wordsClass = "Combat";
		};
	};
	class SentCmdExpect: NormalCommand
	{
		versions[] = {"__1_1___Stop", "(1 - (Stealth))*(1 - (Combat))", "__1_1___Halt_1", "Stealth", "__1_1___Stop_1", "Stealth", "__1_1___Stop_2", "Combat", "__1_1___Halt_2", "Combat", "__1_1___Halt", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Halt
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Halt"};
			text = "%1.1 - Halt";
			textOrig = "%1.1 ? Halt";
			wordsClass = "Normal";
		};
		class __1_1___Halt_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Halt"};
			text = "%1.1 - Halt";
			textOrig = "%1.1 ? Halt";
			wordsClass = "Stealth";
		};
		class __1_1___Halt_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Halt"};
			text = "%1.1 - Halt";
			textOrig = "%1.1 ? Halt";
			wordsClass = "Combat";
		};
		class __1_1___Stop
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Stop"};
			text = "%1.1 - Stop";
			textOrig = "%1.1 ? Stop";
			wordsClass = "Normal";
		};
		class __1_1___Stop_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Stop"};
			text = "%1.1 - Stop";
			textOrig = "%1.1 ? Stop";
			wordsClass = "Stealth";
		};
		class __1_1___Stop_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Stop"};
			text = "%1.1 - Stop";
			textOrig = "%1.1 ? Stop";
			wordsClass = "Combat";
		};
	};
	class SentCmdFire: UrgentCommand
	{
		sentences[] = {"SentEngageStealth", "Stealth", "SentEngageDefault", "(1 - (Stealth))"};
	};
	class SentCmdFollow: UrgentCommand
	{
		versions[] = {"__1_1___Join_group____2_1_1", "Stealth", "__1_1___Join_group____2_1_2", "Combat", "__1_1___Join_group____2_1", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Join_group____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "JoinThatGroup"};
			text = "%1.1 - Join group - %2.1";
			textOrig = "%1.1 ? Join group ? %2.1";
			wordsClass = "Normal";
		};
		class __1_1___Join_group____2_1_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "JoinThatGroup"};
			text = "%1.1 - Join group - %2.1";
			textOrig = "%1.1 ? Join group ? %2.1";
			wordsClass = "Stealth";
		};
		class __1_1___Join_group____2_1_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "JoinThatGroup"};
			text = "%1.1 - Join group - %2.1";
			textOrig = "%1.1 ? Join group ? %2.1";
			wordsClass = "Combat";
		};
	};
	class SentCmdFollowMe: NormalCommand
	{
		sentences[] = {"SentCmdFollowMeStealth", "Stealth", "SentCmdFollowMeDefault", "(1 - (Stealth))"};
	};
	class SentCmdFollowMeDefault: UrgentCommand
	{
		versions[] = {"__1___Regroup_1", "(1 - (Combat))", "__1___Regroup_10", "Combat", "__1___Regroup_11", "Combat", "__1___Regroup", "(1 - (Combat))"};
		class __1___Regroup
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "FallBack"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Normal";
		};
		class __1___Regroup_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "ReturnToFormation"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Normal";
		};
		class __1___Regroup_10
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "FallBack"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Combat";
		};
		class __1___Regroup_11
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "ReturnToFormation"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Combat";
		};
	};
	class SentCmdFollowMeStealth: UrgentCommand
	{
		versions[] = {"__1___Regroup_4", 0.5};
		class __1___Regroup_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "FallBack"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Stealth";
		};
	};
	class SentCmdGetIn: NormalCommand
	{
		versions[] = {"__1_1___Get_in_1", "Stealth", "__1_1___Get_in_2", "Combat", "__1_1___Get_in", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Get_in
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicle"};
			text = "%1.1 - Get in";
			textOrig = "%1.1 ? Get in";
			wordsClass = "Normal";
		};
		class __1_1___Get_in_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicle"};
			text = "%1.1 - Get in";
			textOrig = "%1.1 ? Get in";
			wordsClass = "Stealth";
		};
		class __1_1___Get_in_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicle"};
			text = "%1.1 - Get in";
			textOrig = "%1.1 ? Get in";
			wordsClass = "Combat";
		};
	};
	class SentCmdGetInCargo: NormalCommand
	{
		versions[] = {"__1_1___Get_in___Passenger_1", "Stealth", "__1_1___Get_in___Passenger_2", "Combat", "__1_1___Get_in___Passenger", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Get_in___Passenger
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "BoardThatVehicle"};
			text = "%1.1 - Get in - Passenger";
			textOrig = "%1.1 ? Get in - Passenger";
			wordsClass = "Normal";
		};
		class __1_1___Get_in___Passenger_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "BoardThatVehicle"};
			text = "%1.1 - Get in - Passenger";
			textOrig = "%1.1 ? Get in - Passenger";
			wordsClass = "Stealth";
		};
		class __1_1___Get_in___Passenger_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "BoardThatVehicle"};
			text = "%1.1 - Get in - Passenger";
			textOrig = "%1.1 ? Get in - Passenger";
			wordsClass = "Combat";
		};
	};
	class SentCmdGetInCommander: NormalCommand
	{
		versions[] = {"__1_1___Get_in___Commander_1", "Stealth", "__1_1___Get_in___Commander_2", "Combat", "__1_1___Get_in___Commander", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Get_in___Commander
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicleCommander"};
			text = "%1.1 - Get in - Commander";
			textOrig = "%1.1 ? Get in ? Commander";
			wordsClass = "Normal";
		};
		class __1_1___Get_in___Commander_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicleCommander"};
			text = "%1.1 - Get in - Commander";
			textOrig = "%1.1 ? Get in ? Commander";
			wordsClass = "Stealth";
		};
		class __1_1___Get_in___Commander_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicleCommander"};
			text = "%1.1 - Get in - Commander";
			textOrig = "%1.1 ? Get in ? Commander";
			wordsClass = "Combat";
		};
	};
	class SentCmdGetInDriver: NormalCommand
	{
		versions[] = {"__1_1___Get_in___Driver_1", "Stealth", "__1_1___Get_in___Driver_2", "Combat", "__1_1___Get_in___Driver", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Get_in___Driver
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicleDriver"};
			text = "%1.1 - Get in - Driver";
			textOrig = "%1.1 ? Get in ? Driver";
			wordsClass = "Normal";
		};
		class __1_1___Get_in___Driver_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicleDriver"};
			text = "%1.1 - Get in - Driver";
			textOrig = "%1.1 ? Get in ? Driver";
			wordsClass = "Stealth";
		};
		class __1_1___Get_in___Driver_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicleDriver"};
			text = "%1.1 - Get in - Driver";
			textOrig = "%1.1 ? Get in ? Driver";
			wordsClass = "Combat";
		};
	};
	class SentCmdGetInGunner: NormalCommand
	{
		versions[] = {"__1_1___Get_in___Gunner_1", "Stealth", "__1_1___Get_in___Gunner_2", "Combat", "__1_1___Get_in___Gunner", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Get_in___Gunner
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicleGunner"};
			text = "%1.1 - Get in - Gunner";
			textOrig = "%1.1 ? Get in ? Gunner";
			wordsClass = "Normal";
		};
		class __1_1___Get_in___Gunner_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicleGunner"};
			text = "%1.1 - Get in - Gunner";
			textOrig = "%1.1 ? Get in ? Gunner";
			wordsClass = "Stealth";
		};
		class __1_1___Get_in___Gunner_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehicleGunner"};
			text = "%1.1 - Get in - Gunner";
			textOrig = "%1.1 ? Get in ? Gunner";
			wordsClass = "Combat";
		};
	};
	class SentCmdGetInPilot: NormalCommand
	{
		versions[] = {"__1_1___Get_in___Pilot_1", "Stealth", "__1_1___Get_in___Pilot_2", "Combat", "__1_1___Get_in___Pilot", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Get_in___Pilot
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehiclePilot"};
			text = "%1.1 - Get in - Pilot";
			textOrig = "%1.1 ? Get in ? Pilot";
			wordsClass = "Normal";
		};
		class __1_1___Get_in___Pilot_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehiclePilot"};
			text = "%1.1 - Get in - Pilot";
			textOrig = "%1.1 ? Get in ? Pilot";
			wordsClass = "Stealth";
		};
		class __1_1___Get_in___Pilot_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetInThatVehiclePilot"};
			text = "%1.1 - Get in - Pilot";
			textOrig = "%1.1 ? Get in ? Pilot";
			wordsClass = "Combat";
		};
	};
	class SentCmdGetOut: NormalCommand
	{
		versions[] = {"__1_1___Dismount_1", "Stealth", "__1_1___Dismount_2", "Combat", "__1_1___Dismount", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Dismount
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Dismount"};
			text = "%1.1 - Dismount";
			textOrig = "%1.1 ? Dismount";
			wordsClass = "Normal";
		};
		class __1_1___Dismount_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Dismount"};
			text = "%1.1 - Dismount";
			textOrig = "%1.1 ? Dismount";
			wordsClass = "Stealth";
		};
		class __1_1___Dismount_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Dismount"};
			text = "%1.1 - Dismount";
			textOrig = "%1.1 ? Dismount";
			wordsClass = "Combat";
		};
	};
	class SentCmdHeal: NormalCommand
	{
		versions[] = {"__1_1___Go_to_medic____2____3_1", "Stealth", "__1_1___Go_to_medic____2____3_2", "Combat", "__1_1___Go_to_medic____2____3", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Go_to_medic____2____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoToThatMedic"};
			text = "%1.1 - Go to medic - %2 - %3";
			textOrig = "%1.1 ? Go to medic ? %2 ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Go_to_medic____2____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoToThatMedic"};
			text = "%1.1 - Go to medic - %2 - %3";
			textOrig = "%1.1 ? Go to medic ? %2 ? %3";
			wordsClass = "Stealth";
		};
		class __1_1___Go_to_medic____2____3_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoToTheMedic"};
			text = "%1.1 - Go to medic - %2 - %3";
			textOrig = "%1.1 ? Go to medic ? %2 ? %3";
			wordsClass = "Combat";
		};
	};
	class SentCmdHealAt: NormalCommand
	{
		versions[] = {"__1_1___Go_to_medic___2_____3_1", "Stealth", "__1_1___Go_to_medic___2_____3_2", "Combat", "__1_1___Go_to_medic___2_____3", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Go_to_medic___2_____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoToTheMedic"};
			text = "%1.1 - Go to medic (%2) - %3";
			textOrig = "%1.1 ? Go to medic (%2) ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Go_to_medic___2_____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoToTheMedic"};
			text = "%1.1 - Go to medic (%2) - %3";
			textOrig = "%1.1 ? Go to medic (%2) ? %3";
			wordsClass = "Stealth";
		};
		class __1_1___Go_to_medic___2_____3_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoToTheMedic"};
			text = "%1.1 - Go to medic (%2) - %3";
			textOrig = "%1.1 ? Go to medic (%2) ? %3";
			wordsClass = "Combat";
		};
	};
	class SentCmdHealFar: NormalCommand
	{
		versions[] = {"__1_1___Go_to_medic___Grid___2_1", "Stealth", "__1_1___Go_to_medic___Grid___2_2", "Combat", "__1_1___Go_to_medic___Grid___2", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Go_to_medic___Grid___2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoToThatMedic", "%2"};
			text = "%1.1 - Go to medic - Grid: %2";
			textOrig = "%1.1 ? Go to medic ? Grid: %2";
			wordsClass = "Normal";
		};
		class __1_1___Go_to_medic___Grid___2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoToThatMedic", "%2"};
			text = "%1.1 - Go to medic - Grid: %2";
			textOrig = "%1.1 ? Go to medic ? Grid: %2";
			wordsClass = "Stealth";
		};
		class __1_1___Go_to_medic___Grid___2_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoToTheMedic"};
			text = "%1.1 - Go to medic - Grid: %2";
			textOrig = "%1.1 ? Go to medic ? Grid: %2";
			wordsClass = "Combat";
		};
	};
	class SentCmdHealSelf: NormalCommand
	{
		versions[] = {"__1_1___Patch_yourself_up_1", "Stealth", "__1_1___Patch_yourself_up", "(1 - (Stealth))"};
		class __1_1___Patch_yourself_up
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PatchYourself"};
			text = "%1.1 - Patch yourself up";
			textOrig = "%1.1 ? Patch yourself up";
			wordsClass = "Normal";
		};
		class __1_1___Patch_yourself_up_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PatchYourself"};
			text = "%1.1 - Patch yourself up";
			textOrig = "%1.1 ? Patch yourself up";
			wordsClass = "Stealth";
		};
	};
	class SentCmdHealSomeone: UrgentCommand
	{
		versions[] = {"__1_1___Heal____2_1", "Stealth", "__1_1___Heal____2", "(1 - (Stealth))"};
		class __1_1___Heal____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HealThatSoldier"};
			text = "%1.1 - Heal - %2";
			textOrig = "%1.1 ? Heal ? %2";
			wordsClass = "Normal";
		};
		class __1_1___Heal____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HealThatSoldier"};
			text = "%1.1 - Heal - %2";
			textOrig = "%1.1 ? Heal ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdHide: NormalCommand
	{
		versions[] = {"__1___Take_cover_1", "Stealth", "__1___Take_cover_2", "Combat", "__1___Take_cover", "(1 - (Stealth))*(1 - (Combat))"};
		class __1___Take_cover
		{
			gesture = "";
			speech[] = {"XMIT", "TakeCover"};
			text = "%1 - Take cover";
			textOrig = "%1 ? Take cover";
			wordsClass = "Normal";
		};
		class __1___Take_cover_1
		{
			gesture = "";
			speech[] = {"XMIT", "TakeCover"};
			text = "%1 - Take cover";
			textOrig = "%1 ? Take cover";
			wordsClass = "Stealth";
		};
		class __1___Take_cover_2
		{
			gesture = "";
			speech[] = {"XMIT", "TakeCover"};
			text = "%1 - Take cover";
			textOrig = "%1 ? Take cover";
			wordsClass = "Combat";
		};
	};
	class SentCmdLightFire: NormalCommand
	{
		versions[] = {"__1_1___Light_fire", "Stealth", "__1_1___Light_fire_1", "(1 - (Stealth))"};
		class __1_1___Light_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "LightThatFire"};
			text = "%1.1 - Light fire";
			textOrig = "%1.1 ? Light fire";
			wordsClass = "Stealth";
		};
		class __1_1___Light_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "LightThatFire"};
			text = "%1.1 - Light fire";
			textOrig = "%1.1 ? Light fire";
			wordsClass = "Normal";
		};
	};
	class SentCmdLightFireAt: NormalCommand
	{
		versions[] = {"__1_1___Light_fire", "Stealth", "__1_1___Light_fire_1", "(1 - (Stealth))"};
		class __1_1___Light_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "LightThatFire"};
			text = "%1.1 - Light fire";
			textOrig = "%1.1 ? Light fire";
			wordsClass = "Stealth";
		};
		class __1_1___Light_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "LightThatFire"};
			text = "%1.1 - Light fire";
			textOrig = "%1.1 ? Light fire";
			wordsClass = "Normal";
		};
	};
	class SentCmdLightFireFar: NormalCommand
	{
		versions[] = {"__1_1___Light_fire", "Stealth", "__1_1___Light_fire_1", "(1 - (Stealth))"};
		class __1_1___Light_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "LightThatFire"};
			text = "%1.1 - Light fire";
			textOrig = "%1.1 ? Light fire";
			wordsClass = "Stealth";
		};
		class __1_1___Light_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "LightThatFire"};
			text = "%1.1 - Light fire";
			textOrig = "%1.1 ? Light fire";
			wordsClass = "Normal";
		};
	};
	class SentCmdMoveToObject: NormalCommand
	{
		sentences[] = {"SelectCmdMoveSentenceVeryCloseStealth", "Stealth*(1 - (((DistanceToGroup - 50) min 1 max 0)))", "SelectCmdMoveSentenceLocationStealth", "Stealth*InsideLocation*(1 - ((1 - (((DistanceToLocation - 50) min 1 max 0)))))", "SelectCmdMoveSentenceFarStealth", "Stealth*((DistanceToGroup - 1050) min 1 max 0)", "SelectCmdMoveSentenceCloseStealth", "Stealth*((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 350) min 1 max 0)))", "SelectCmdMoveSentenceMediumStealth", "Stealth*((DistanceToGroup - 350) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "SelectCmdMoveSentenceMedium", "(1 - (Stealth))*((DistanceToGroup - 350) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "SelectCmdMoveSentenceFar", "(1 - (Stealth))*((DistanceToGroup - 1050) min 1 max 0)", "SelectCmdMoveSentenceClose", "(1 - (Stealth))*((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 350) min 1 max 0)))", "SelectCmdMoveSentenceVeryClose", "(1 - (Stealth))*(1 - (((DistanceToGroup - 50) min 1 max 0)))"};
	};
	class SentCmdMoveToTarget: NormalCommand
	{
		sentences[] = {"SelectCmdMoveSentenceVeryCloseStealth", "Stealth*(1 - (((DistanceToGroup - 50) min 1 max 0)))", "SelectCmdMoveSentenceLocationStealth", "Stealth*InsideLocation*(1 - ((1 - (((DistanceToLocation - 50) min 1 max 0)))))", "SelectCmdMoveSentenceFarStealth", "Stealth*((DistanceToGroup - 1050) min 1 max 0)", "SelectCmdMoveSentenceCloseStealth", "Stealth*((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 350) min 1 max 0)))", "SelectCmdMoveSentenceMediumStealth", "Stealth*((DistanceToGroup - 350) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "SelectCmdMoveSentenceMedium", "(1 - (Stealth))*((DistanceToGroup - 350) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "SelectCmdMoveSentenceFar", "(1 - (Stealth))*((DistanceToGroup - 1050) min 1 max 0)", "SelectCmdMoveSentenceClose", "(1 - (Stealth))*((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 350) min 1 max 0)))", "SelectCmdMoveSentenceVeryClose", "(1 - (Stealth))*(1 - (((DistanceToGroup - 50) min 1 max 0)))"};
	};
	class SentCmdOpenDoor: NormalCommand
	{
		versions[] = {"__1_1___Open_door", "Stealth", "__1_1___Open_door_1", "(1 - (Stealth))"};
		class __1_1___Open_door
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OpenThatDoor"};
			text = "%1.1 - Open door";
			textOrig = "%1.1 ? Open door";
			wordsClass = "Stealth";
		};
		class __1_1___Open_door_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OpenThatDoor"};
			text = "%1.1 - Open door";
			textOrig = "%1.1 ? Open door";
			wordsClass = "Normal";
		};
	};
	class SentCmdOpenDoorAt: NormalCommand
	{
		versions[] = {"__1_1___Open_door", "Stealth", "__1_1___Open_door_1", "(1 - (Stealth))"};
		class __1_1___Open_door
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OpenThatDoor"};
			text = "%1.1 - Open door";
			textOrig = "%1.1 ? Open door";
			wordsClass = "Stealth";
		};
		class __1_1___Open_door_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OpenThatDoor"};
			text = "%1.1 - Open door";
			textOrig = "%1.1 ? Open door";
			wordsClass = "Normal";
		};
	};
	class SentCmdOpenDoorFar: NormalCommand
	{
		versions[] = {"__1_1___Open_door", "Stealth", "__1_1___Open_door_1", "(1 - (Stealth))"};
		class __1_1___Open_door
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OpenThatDoor"};
			text = "%1.1 - Open door";
			textOrig = "%1.1 ? Open door";
			wordsClass = "Stealth";
		};
		class __1_1___Open_door_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OpenThatDoor"};
			text = "%1.1 - Open door";
			textOrig = "%1.1 ? Open door";
			wordsClass = "Normal";
		};
	};
	class SentCmdPatchSomeone: UrgentCommand
	{
		versions[] = {"__1_1___Help____2_1", "Stealth", "__1_1___Help____2", "(1 - (Stealth))"};
		class __1_1___Help____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HelpThatSoldier"};
			text = "%1.1 - Help - %2";
			textOrig = "%1.1 ? Help ? %2";
			wordsClass = "Normal";
		};
		class __1_1___Help____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HelpThatSoldier"};
			text = "%1.1 - Help - %2";
			textOrig = "%1.1 ? Help ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdPlaceCharge: NormalCommand
	{
		versions[] = {"__1_1___Set_charge_1", "Stealth", "__1_1___Set_charge", "(1 - (Stealth))"};
		class __1_1___Set_charge
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SetCharge"};
			text = "%1.1 - Set charge";
			textOrig = "%1.1 ? Set charge";
			wordsClass = "Normal";
		};
		class __1_1___Set_charge_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SetCharge"};
			text = "%1.1 - Set charge";
			textOrig = "%1.1 ? Set charge";
			wordsClass = "Stealth";
		};
	};
	class SentCmdPutOutFire: NormalCommand
	{
		versions[] = {"__1_1___Extinguish_fire_1", "Stealth", "__1_1___Extinguish_fire", "(1 - (Stealth))"};
		class __1_1___Extinguish_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PutOutThatFire"};
			text = "%1.1 - Extinguish fire";
			textOrig = "%1.1 ? Extinguish fire";
			wordsClass = "Normal";
		};
		class __1_1___Extinguish_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PutOutThatFire"};
			text = "%1.1 - Extinguish fire";
			textOrig = "%1.1 ? Extinguish fire";
			wordsClass = "Stealth";
		};
	};
	class SentCmdPutOutFireAt: NormalCommand
	{
		versions[] = {"__1_1___Extinguish_fire_1", "Stealth", "__1_1___Extinguish_fire", "(1 - (Stealth))"};
		class __1_1___Extinguish_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PutOutThatFire"};
			text = "%1.1 - Extinguish fire";
			textOrig = "%1.1 ? Extinguish fire";
			wordsClass = "Normal";
		};
		class __1_1___Extinguish_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PutOutThatFire"};
			text = "%1.1 - Extinguish fire";
			textOrig = "%1.1 ? Extinguish fire";
			wordsClass = "Stealth";
		};
	};
	class SentCmdPutOutFireFar: NormalCommand
	{
		versions[] = {"__1_1___Extinguish_fire_1", "Stealth", "__1_1___Extinguish_fire", "(1 - (Stealth))"};
		class __1_1___Extinguish_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PutOutThatFire"};
			text = "%1.1 - Extinguish fire";
			textOrig = "%1.1 ? Extinguish fire";
			wordsClass = "Normal";
		};
		class __1_1___Extinguish_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PutOutThatFire"};
			text = "%1.1 - Extinguish fire";
			textOrig = "%1.1 ? Extinguish fire";
			wordsClass = "Stealth";
		};
	};
	class SentCmdRearm: NormalCommand
	{
		versions[] = {"__1_1___Rearm____2____3_1", "Stealth", "__1_1___Rearm____2____3", "(1 - (Stealth))"};
		class __1_1___Rearm____2____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Rearm"};
			text = "%1.1 - Rearm - %2 - %3";
			textOrig = "%1.1 ? Rearm ? %2 ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Rearm____2____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Rearm"};
			text = "%1.1 - Rearm - %2 - %3";
			textOrig = "%1.1 ? Rearm ? %2 ? %3";
			wordsClass = "Stealth";
		};
	};
	class SentCmdRearmAt: NormalCommand
	{
		versions[] = {"__1_1___Rearm___2_____3_1", "Stealth", "__1_1___Rearm___2_____3", "(1 - (Stealth))"};
		class __1_1___Rearm___2_____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Rearm"};
			text = "%1.1 - Rearm (%2) - %3";
			textOrig = "%1.1 ? Rearm (%2) ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Rearm___2_____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Rearm"};
			text = "%1.1 - Rearm (%2) - %3";
			textOrig = "%1.1 ? Rearm (%2) ? %3";
			wordsClass = "Stealth";
		};
	};
	class SentCmdRearmFar: NormalCommand
	{
		versions[] = {"__1_1___Rearm___Grid___2_1", "Stealth", "__1_1___Rearm___Grid___2", "(1 - (Stealth))"};
		class __1_1___Rearm___Grid___2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Rearm", "%2"};
			text = "%1.1 - Rearm - Grid: %2";
			textOrig = "%1.1 ? Rearm ? Grid: %2";
			wordsClass = "Normal";
		};
		class __1_1___Rearm___Grid___2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Rearm", "%2"};
			text = "%1.1 - Rearm - Grid: %2";
			textOrig = "%1.1 ? Rearm ? Grid: %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdRefuel: NormalCommand
	{
		versions[] = {"__1_1___Refuel_vehicle____2____3_1", "Stealth", "__1_1___Refuel_vehicle____2____3", "(1 - (Stealth))"};
		class __1_1___Refuel_vehicle____2____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RefuelThatVehicle"};
			text = "%1.1 - Refuel vehicle - %2 - %3";
			textOrig = "%1.1 ? Refuel vehicle ? %2 ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Refuel_vehicle____2____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RefuelThatVehicle"};
			text = "%1.1 - Refuel vehicle - %2 - %3";
			textOrig = "%1.1 ? Refuel vehicle ? %2 ? %3";
			wordsClass = "Stealth";
		};
	};
	class SentCmdRefuelAt: NormalCommand
	{
		versions[] = {"__1_1___Refuel_vehicle___2_____3_1", "Stealth", "__1_1___Refuel_vehicle___2_____3", "(1 - (Stealth))"};
		class __1_1___Refuel_vehicle___2_____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RefuelTheVehicle"};
			text = "%1.1 - Refuel vehicle (%2) - %3";
			textOrig = "%1.1 ? Refuel vehicle (%2) ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Refuel_vehicle___2_____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RefuelTheVehicle"};
			text = "%1.1 - Refuel vehicle (%2) - %3";
			textOrig = "%1.1 ? Refuel vehicle (%2) ? %3";
			wordsClass = "Stealth";
		};
	};
	class SentCmdRefuelFar: NormalCommand
	{
		versions[] = {"__1_1___Refuel_vehicle___Grid___2_1", "Stealth", "__1_1___Refuel_vehicle___Grid___2", "(1 - (Stealth))"};
		class __1_1___Refuel_vehicle___Grid___2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RefuelTheVehicle", "%2"};
			text = "%1.1 - Refuel vehicle - Grid: %2";
			textOrig = "%1.1 ? Refuel vehicle ? Grid: %2";
			wordsClass = "Normal";
		};
		class __1_1___Refuel_vehicle___Grid___2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RefuelTheVehicle", "%2"};
			text = "%1.1 - Refuel vehicle - Grid: %2";
			textOrig = "%1.1 ? Refuel vehicle ? Grid: %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdRepair: NormalCommand
	{
		versions[] = {"__1_1___Repair_vehicle____2____3_1", "Stealth", "__1_1___Repair_vehicle____2____3", "(1 - (Stealth))"};
		class __1_1___Repair_vehicle____2____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RepairThatVehicle"};
			text = "%1.1 - Repair vehicle - %2 - %3";
			textOrig = "%1.1 ? Repair vehicle ? %2 ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Repair_vehicle____2____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RepairThatVehicle"};
			text = "%1.1 - Repair vehicle - %2 - %3";
			textOrig = "%1.1 ? Repair vehicle ? %2 ? %3";
			wordsClass = "Stealth";
		};
	};
	class SentCmdRepairAt: NormalCommand
	{
		versions[] = {"__1_1___Repair_vehicle___2_____3_1", "Stealth", "__1_1___Repair_vehicle___2_____3", "(1 - (Stealth))"};
		class __1_1___Repair_vehicle___2_____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RepairTheVehicle"};
			text = "%1.1 - Repair vehicle (%2) - %3";
			textOrig = "%1.1 ? Repair vehicle (%2) ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Repair_vehicle___2_____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RepairTheVehicle"};
			text = "%1.1 - Repair vehicle (%2) - %3";
			textOrig = "%1.1 ? Repair vehicle (%2) ? %3";
			wordsClass = "Stealth";
		};
	};
	class SentCmdRepairFar: NormalCommand
	{
		versions[] = {"__1_1___Repair_vehicle___Grid___2_1", "Stealth", "__1_1___Repair_vehicle___Grid___2", "(1 - (Stealth))"};
		class __1_1___Repair_vehicle___Grid___2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RepairTheVehicle", "%2"};
			text = "%1.1 - Repair vehicle - Grid: %2";
			textOrig = "%1.1 ? Repair vehicle ? Grid: %2";
			wordsClass = "Normal";
		};
		class __1_1___Repair_vehicle___Grid___2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "RepairTheVehicle", "%2"};
			text = "%1.1 - Repair vehicle - Grid: %2";
			textOrig = "%1.1 ? Repair vehicle ? Grid: %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdReturnFlag: NormalCommand
	{
		versions[] = {"__13", 1};
		class __13
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdReturnFlagAt: NormalCommand
	{
		versions[] = {"__13", 1};
		class __13
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdReturnFlagFar: NormalCommand
	{
		versions[] = {"__13", 1};
		class __13
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdStop: NormalCommand
	{
		versions[] = {"__1_1___Stop", "(1 - (Stealth))*(1 - (Combat))", "__1_1___Halt_1", "Stealth", "__1_1___Stop_1", "Stealth", "__1_1___Stop_2", "Combat", "__1_1___Halt_2", "Combat", "__1_1___Halt", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Halt
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Halt"};
			text = "%1.1 - Halt";
			textOrig = "%1.1 ? Halt";
			wordsClass = "Normal";
		};
		class __1_1___Halt_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Halt"};
			text = "%1.1 - Halt";
			textOrig = "%1.1 ? Halt";
			wordsClass = "Stealth";
		};
		class __1_1___Halt_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Halt"};
			text = "%1.1 - Halt";
			textOrig = "%1.1 ? Halt";
			wordsClass = "Combat";
		};
		class __1_1___Stop
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Stop"};
			text = "%1.1 - Stop";
			textOrig = "%1.1 ? Stop";
			wordsClass = "Normal";
		};
		class __1_1___Stop_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Stop"};
			text = "%1.1 - Stop";
			textOrig = "%1.1 ? Stop";
			wordsClass = "Stealth";
		};
		class __1_1___Stop_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Stop"};
			text = "%1.1 - Stop";
			textOrig = "%1.1 ? Stop";
			wordsClass = "Combat";
		};
	};
	class SentCmdSupport: NormalCommand
	{
		versions[] = {"__1_1___Get_support____2____3_1", "Stealth", "__1_1___Get_support____2____3", "(1 - (Stealth))"};
		class __1_1___Get_support____2____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetSupport"};
			text = "%1.1 - Get support - %2 - %3";
			textOrig = "%1.1 ? Get support ? %2 ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Get_support____2____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetSupport"};
			text = "%1.1 - Get support - %2 - %3";
			textOrig = "%1.1 ? Get support ? %2 ? %3";
			wordsClass = "Stealth";
		};
	};
	class SentCmdSupportAt: NormalCommand
	{
		versions[] = {"__1_1___Get_support___2_____3_CMPS", "Stealth", "__1_1___Get_support___2_____3", "(1 - (Stealth))"};
		class __1_1___Get_support___2_____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetSupport"};
			text = "%1.1 - Get support (%2) - %3";
			textOrig = "%1.1 ? Get support (%2) ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Get_support___2_____3_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetSupport"};
			text = "%1.1 - Get support (%2) - %3.101";
			textOrig = "%1.1 ? Get support (%2) ? %3.101";
			wordsClass = "Stealth";
		};
	};
	class SentCmdSupportFar: NormalCommand
	{
		versions[] = {"__1_1___Get_support___Grid___2_1", "Stealth", "__1_1___Get_support___Grid___2", "(1 - (Stealth))"};
		class __1_1___Get_support___Grid___2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetSupport", "%2"};
			text = "%1.1 - Get support - Grid: %2";
			textOrig = "%1.1 ? Get support ? Grid: %2";
			wordsClass = "Normal";
		};
		class __1_1___Get_support___Grid___2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GetSupport", "%2"};
			text = "%1.1 - Get support - Grid: %2";
			textOrig = "%1.1 ? Get support ? Grid: %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdSuppress: NormalCommand
	{
		versions[] = {"Suppressive_fire_", 1};
		class Suppressive_fire_
		{
			gesture = "";
			speech[] = {"XMIT", "SuppressiveFire"};
			text = "Suppressive fire";
			textOrig = "Suppressive fire!";
			wordsClass = "Normal";
		};
	};
	class SentCmdSwitchToCargo: NormalCommand
	{
		versions[] = {"__1_1___Switch_to_cargo_1", "Stealth", "__1_1___Switch_to_cargo", "(1 - (Stealth))"};
		class __1_1___Switch_to_cargo
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "MoveToCargo"};
			text = "%1.1 - Switch to Cargo";
			textOrig = "%1.1 ? Switch to cargo";
			wordsClass = "Normal";
		};
		class __1_1___Switch_to_cargo_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "MoveToCargo"};
			text = "%1.1 - Switch to Cargo";
			textOrig = "%1.1 ? Switch to cargo";
			wordsClass = "Stealth";
		};
	};
	class SentCmdSwitchToCommander: NormalCommand
	{
		versions[] = {"__1_1___Switch_to_commander_1", "Stealth", "__1_1___Switch_to_commander", "(1 - (Stealth))"};
		class __1_1___Switch_to_commander
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SwitchToCommander"};
			text = "%1.1 - Switch to Commander";
			textOrig = "%1.1 ? Switch to commander";
			wordsClass = "Normal";
		};
		class __1_1___Switch_to_commander_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SwitchToCommander"};
			text = "%1.1 - Switch to Commander";
			textOrig = "%1.1 ? Switch to commander";
			wordsClass = "Stealth";
		};
	};
	class SentCmdSwitchToDriver: NormalCommand
	{
		versions[] = {"__1_1___Switch_to_driver_1", "Stealth", "__1_1___Switch_to_driver", "(1 - (Stealth))"};
		class __1_1___Switch_to_driver
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SwitchToDriver"};
			text = "%1.1 - Switch to Driver";
			textOrig = "%1.1 ? Switch to driver";
			wordsClass = "Normal";
		};
		class __1_1___Switch_to_driver_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SwitchToDriver"};
			text = "%1.1 - Switch to Driver";
			textOrig = "%1.1 ? Switch to driver";
			wordsClass = "Stealth";
		};
	};
	class SentCmdSwitchToGunner: NormalCommand
	{
		versions[] = {"__1_1___Switch_to_gunner_1", "Stealth", "__1_1___Switch_to_gunner", "(1 - (Stealth))"};
		class __1_1___Switch_to_gunner
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SwitchToGunner"};
			text = "%1.1 - Switch to Gunner";
			textOrig = "%1.1 ? Switch to gunner";
			wordsClass = "Normal";
		};
		class __1_1___Switch_to_gunner_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "SwitchToGunner"};
			text = "%1.1 - Switch to Gunner";
			textOrig = "%1.1 ? Switch to gunner";
			wordsClass = "Stealth";
		};
	};
	class SentCmdTakeFlag: NormalCommand
	{
		versions[] = {"__12", 1};
		class __12
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdTakeFlagAt: NormalCommand
	{
		versions[] = {"__12", 1};
		class __12
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdTakeFlagFar: NormalCommand
	{
		versions[] = {"__12", 1};
		class __12
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentCmdTakeMagazine: NormalCommand
	{
		versions[] = {"__1_1___Take_magazine____2____3_2", "Stealth", "__1_1___Take_magazine____2____3", "(1 - (Stealth))"};
		class __1_1___Take_magazine____2____3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "TakeThatMagazine"};
			text = "%1.1 - Take magazine - %2 - %3";
			textOrig = "%1.1 ? Take magazine ? %2 ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Take_magazine____2____3_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "TakeThatMagazine"};
			text = "%1.1 - Take magazine - %2 - %3";
			textOrig = "%1.1 ? Take magazine ? %2 ? %3";
			wordsClass = "Stealth";
		};
	};
	class SentCmdTakeMagazineAt: NormalCommand
	{
		versions[] = {"__1_1___Take_magazine____2____3_3", "Stealth", "__1_1___Take_magazine____2____3_1", "(1 - (Stealth))"};
		class __1_1___Take_magazine____2____3_1
		{
			gesture = "";
			speech[] = {"XMIT", "TakeTheMagazine", "%1.1"};
			text = "%1.1 - Take magazine - %2 - %3";
			textOrig = "%1.1 ? Take magazine ? %2 ? %3";
			wordsClass = "Normal";
		};
		class __1_1___Take_magazine____2____3_3
		{
			gesture = "";
			speech[] = {"XMIT", "TakeTheMagazine", "%1.1"};
			text = "%1.1 - Take magazine - %2 - %3";
			textOrig = "%1.1 ? Take magazine ? %2 ? %3";
			wordsClass = "Stealth";
		};
	};
	class SentCmdTakeMagazineFar: NormalCommand
	{
		versions[] = {"__1_1___Take_magazine___Grid___2_1", "Stealth", "__1_1___Take_magazine___Grid___2", "(1 - (Stealth))"};
		class __1_1___Take_magazine___Grid___2
		{
			gesture = "";
			speech[] = {"XMIT", "TakeTheMagazine", "%1.1"};
			text = "%1.1 - Take magazine - Grid: %2";
			textOrig = "%1.1 ? Take magazine ? Grid: %2";
			wordsClass = "Normal";
		};
		class __1_1___Take_magazine___Grid___2_1
		{
			gesture = "";
			speech[] = {"XMIT", "TakeTheMagazine", "%1.1"};
			text = "%1.1 - Take magazine - Grid: %2";
			textOrig = "%1.1 ? Take magazine ? Grid: %2";
			wordsClass = "Stealth";
		};
	};
	class SentCmdTakeMine: NormalCommand
	{
		versions[] = {"__1_1___Take_mine_1", "Stealth", "__1_1___Take_mine", "(1 - (Stealth))"};
		class __1_1___Take_mine
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "TakeThatMine"};
			text = "%1.1 - Take mine";
			textOrig = "%1.1 ? Take mine";
			wordsClass = "Normal";
		};
		class __1_1___Take_mine_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "TakeThatMine"};
			text = "%1.1 - Take mine";
			textOrig = "%1.1 ? Take mine";
			wordsClass = "Stealth";
		};
	};
	class SentCmdTakeWeapon: NormalCommand
	{
		versions[] = {"__1_1___Take_weapon____2____3____4_1", "Stealth", "__1_1___Take_weapon____2____3____4", "(1 - (Stealth))"};
		class __1_1___Take_weapon____2____3____4
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "TakeThatWeapon"};
			text = "%1.1 - Take weapon - %2 - %3 - %4";
			textOrig = "%1.1 ? Take weapon ? %2 ? %3 ? %4";
			wordsClass = "Normal";
		};
		class __1_1___Take_weapon____2____3____4_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "TakeThatWeapon"};
			text = "%1.1 - Take weapon - %2 - %3 - %4";
			textOrig = "%1.1 ? Take weapon ? %2 ? %3 ? %4";
			wordsClass = "Stealth";
		};
	};
	class SentCmdTakeWeaponAt: NormalCommand
	{
		versions[] = {"__1_1___Take_weapon____3___2_____4_1", "Stealth", "__1_1___Take_weapon____3___2_____4", "(1 - (Stealth))"};
		class __1_1___Take_weapon____3___2_____4
		{
			gesture = "";
			speech[] = {"XMIT", "TakeTheWeapon", "%1.1"};
			text = "%1.1 - Take weapon - %3 (%2) - %4";
			textOrig = "%1.1 ? Take weapon ? %3 (%2) ? %4";
			wordsClass = "Normal";
		};
		class __1_1___Take_weapon____3___2_____4_1
		{
			gesture = "";
			speech[] = {"XMIT", "TakeTheWeapon", "%1.1"};
			text = "%1.1 - Take weapon - %3 (%2) - %4";
			textOrig = "%1.1 ? Take weapon ? %3 (%2) ? %4";
			wordsClass = "Stealth";
		};
	};
	class SentCmdTakeWeaponFar: NormalCommand
	{
		versions[] = {"__1_1___Take_weapon____2___Grid___3_1", "Stealth", "__1_1___Take_weapon____2___Grid___3", "(1 - (Stealth))"};
		class __1_1___Take_weapon____2___Grid___3
		{
			gesture = "";
			speech[] = {"XMIT", "TakeTheWeapon", "%1.1"};
			text = "%1.1 - Take weapon - %2 - Grid: %3";
			textOrig = "%1.1 ? Take weapon ? %2 ? Grid: %3";
			wordsClass = "Normal";
		};
		class __1_1___Take_weapon____2___Grid___3_1
		{
			gesture = "";
			speech[] = {"XMIT", "TakeTheWeapon", "%1.1"};
			text = "%1.1 - Take weapon - %2 - Grid: %3";
			textOrig = "%1.1 ? Take weapon ? %2 ? Grid: %3";
			wordsClass = "Stealth";
		};
	};
	class SentCombatGeneric: CombatShout
	{
		versions[] = {"__21", 0.7, "__48", "Stealth", "__28", "0.3*(1 - (Stealth))"};
		class __21
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __28
		{
			gesture = "";
			speech[] = {"XMIT", "CombatGenericE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __48
		{
			gesture = "";
			speech[] = {"XMIT", "CombatGenericE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentCommandCompleted: Completition
	{
		sentences[] = {"SentCommandCompletedStealth", "Stealth", "SentCommandCompletedDefault", "(1 - (Stealth))"};
	};
	class SentCommandCompletedDefault: Completition
	{
		versions[] = {"__1", "(1 - (Combat))", "__2", "(1 - (Combat))", "__62", "Combat", "__63", "Combat", "__64", "Combat", "_", "(1 - (Combat))"};
		class _
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __1
		{
			gesture = "";
			speech[] = {"XMIT", "Waiting"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __2
		{
			gesture = "";
			speech[] = {"XMIT", "StandingBy"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __62
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __63
		{
			gesture = "";
			speech[] = {"XMIT", "Waiting"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __64
		{
			gesture = "";
			speech[] = {"XMIT", "StandingBy"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
	};
	class SentCommandCompletedStealth: Completition
	{
		versions[] = {"__37", 0.33, "__38", 0.33, "__36", 0.33};
		class __36
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
		class __37
		{
			gesture = "";
			speech[] = {"XMIT", "Waiting"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
		class __38
		{
			gesture = "";
			speech[] = {"XMIT", "StandingBy"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentCommandFailed: Failure
	{
		sentences[] = {"SentCommandFailedStealth", "Stealth", "SentCommandFailedDefault", "(1 - (Stealth))"};
	};
	class SentCommandFailedDefault: Failure
	{
		versions[] = {"Negative_1", "(1 - (Combat))", "Negative_6", "(1 - (Combat))", "Negative_18", "Combat", "Negative_19", "Combat", "Negative_20", "Combat", "Negative", "(1 - (Combat))"};
		class Negative
		{
			gesture = "";
			speech[] = {"XMIT", "Negative"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Normal";
		};
		class Negative_1
		{
			gesture = "";
			speech[] = {"XMIT", "NoCanDo"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Normal";
		};
		class Negative_18
		{
			gesture = "";
			speech[] = {"XMIT", "Negative"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Combat";
		};
		class Negative_19
		{
			gesture = "";
			speech[] = {"XMIT", "NoCanDo"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Combat";
		};
		class Negative_20
		{
			gesture = "";
			speech[] = {"XMIT", "CannotComply"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Combat";
		};
		class Negative_6
		{
			gesture = "";
			speech[] = {"XMIT", "CannotComply"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Normal";
		};
	};
	class SentCommandFailedStealth: Failure
	{
		versions[] = {"Negative_10", 0.25, "Negative_11", 0.25, "Negative_9", 0.25};
		class Negative_10
		{
			gesture = "";
			speech[] = {"XMIT", "NoCanDo"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Stealth";
		};
		class Negative_11
		{
			gesture = "";
			speech[] = {"XMIT", "CannotComply"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Stealth";
		};
		class Negative_9
		{
			gesture = "";
			speech[] = {"XMIT", "Negative"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Stealth";
		};
	};
	class SentConfirmAttack: Confirmation
	{
		sentences[] = {"SentConfirmAttackStealth", "Stealth", "SentConfirmAttackDefault", "(1 - (Stealth))"};
	};
	class SentConfirmAttackDefault: Confirmation
	{
		versions[] = {"Copy_1", "(1 - (Combat))", "Copy_4", "Combat", "Copy_5", "Combat", "Copy", "(1 - (Combat))"};
		class Copy
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Normal";
		};
		class Copy_1
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Normal";
		};
		class Copy_4
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Combat";
		};
		class Copy_5
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Combat";
		};
	};
	class SentConfirmAttackStealth: Confirmation
	{
		versions[] = {"Copy_3", 0.5, "Copy_2", 0.5};
		class Copy_2
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Stealth";
		};
		class Copy_3
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Stealth";
		};
	};
	class SentConfirmMove: Confirmation
	{
		sentences[] = {"SentConfirmMoveStealth", "Stealth", "SentConfirmMoveDefault", "(1 - (Stealth))"};
	};
	class SentConfirmMoveDefault: Confirmation
	{
		versions[] = {"Copy_1", "(1 - (Combat))", "__3", "(1 - (Combat))", "Copy_4", "Combat", "Copy_5", "Combat", "__65", "Combat", "Copy", "(1 - (Combat))"};
		class __3
		{
			gesture = "";
			speech[] = {"XMIT", "OnTheWay"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __65
		{
			gesture = "";
			speech[] = {"XMIT", "OnTheWay"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class Copy
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Normal";
		};
		class Copy_1
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Normal";
		};
		class Copy_4
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Combat";
		};
		class Copy_5
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Combat";
		};
	};
	class SentConfirmMoveStealth: Confirmation
	{
		versions[] = {"Copy_3", 0.4, "__41", 0.2, "Copy_2", 0.4};
		class __41
		{
			gesture = "";
			speech[] = {"XMIT", "OnTheWay"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
		class Copy_2
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Stealth";
		};
		class Copy_3
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Stealth";
		};
	};
	class SentConfirmOther: Confirmation
	{
		sentences[] = {"SentConfirmOtherStealth", "Stealth", "SentConfirmOtherDefault", "(1 - (Stealth))"};
	};
	class SentConfirmOtherDefault: Confirmation
	{
		versions[] = {"Copy_1", "(1 - (Combat))", "Copy_4", "Combat", "Copy_5", "Combat", "Copy", "(1 - (Combat))"};
		class Copy
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Normal";
		};
		class Copy_1
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Normal";
		};
		class Copy_4
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Combat";
		};
		class Copy_5
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Combat";
		};
	};
	class SentConfirmOtherStealth: Confirmation
	{
		versions[] = {"Copy_3", 0.5, "Copy_2", 0.5};
		class Copy_2
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Stealth";
		};
		class Copy_3
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Stealth";
		};
	};
	class SentConfirmSuppress: Report
	{
		versions[] = {"Copy_6", 0.1, "Copy_7", 0.1, "Suppressing", 0.8};
		class Copy_6
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Normal";
		};
		class Copy_7
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Copy";
			textOrig = "Copy";
			wordsClass = "Normal";
		};
		class Suppressing
		{
			gesture = "";
			speech[] = {"XMIT", "Suppressing"};
			text = "Suppressing";
			textOrig = "Suppressing";
			wordsClass = "Normal";
		};
	};
	class SentContact: UrgentCommand
	{
		versions[] = {"Contact_1", "(1 - (Stealth))", "Contact_2", "(1 - (Stealth))", "Contact_6", "Stealth", "Contact_7", "Stealth", "Contact_8", "Stealth", "Contact", "(1 - (Stealth))"};
		class Contact
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_1"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Combat";
		};
		class Contact_1
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_2"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Combat";
		};
		class Contact_2
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_3"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Combat";
		};
		class Contact_6
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_1"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Stealth";
		};
		class Contact_7
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_2"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Stealth";
		};
		class Contact_8
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_3"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Stealth";
		};
	};
	class SentCovering: CombatShout
	{
		versions[] = {"__24", 0.6, "__45", "0.2*Stealth", "__22", "0.4*(1 - (Stealth))"};
		class __22
		{
			gesture = "";
			speech[] = {"XMIT", "CoveringE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __24
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __45
		{
			gesture = "";
			speech[] = {"XMIT", "CoveringE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentCoverMe: CombatShout
	{
		versions[] = {"__23", 0.6, "__44", "0.1*Stealth", "__20", "0.4*(1 - (Stealth))"};
		class __20
		{
			gesture = "";
			speech[] = {"XMIT", "CoverMeE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __23
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __44
		{
			gesture = "";
			speech[] = {"XMIT", "CoverMeE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentDammageCritical: CriticalReport
	{
		versions[] = {"Critical_damage_1", "Stealth", "Critical_damage", "(1 - (Stealth))"};
		class Critical_damage
		{
			gesture = "";
			speech[] = {"XMIT", "CriticalDamage"};
			text = "Critical damage";
			textOrig = "Critical damage";
			wordsClass = "Normal";
		};
		class Critical_damage_1
		{
			gesture = "";
			speech[] = {"XMIT", "CriticalDamage"};
			text = "Critical damage";
			textOrig = "Critical damage";
			wordsClass = "Stealth";
		};
	};
	class SentDestinationUnreacheable: Failure
	{
		sentences[] = {"SentDestinationUnreacheableStealth", "Stealth", "SentDestinationUnreacheableDefault", "(1 - (Stealth))"};
	};
	class SentDestinationUnreacheableDefault: Failure
	{
		versions[] = {"Negative_3", "(1 - (Combat))", "Negative_16", "Combat", "Negative_17", "Combat", "Negative_2", "(1 - (Combat))"};
		class Negative_16
		{
			gesture = "";
			speech[] = {"XMIT", "CantGetThere"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Combat";
		};
		class Negative_17
		{
			gesture = "";
			speech[] = {"XMIT", "NegativeCantMakeItThere"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Combat";
		};
		class Negative_2
		{
			gesture = "";
			speech[] = {"XMIT", "CantGetThere"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Normal";
		};
		class Negative_3
		{
			gesture = "";
			speech[] = {"XMIT", "NegativeCantMakeItThere"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Normal";
		};
	};
	class SentDestinationUnreacheableStealth: Failure
	{
		versions[] = {"Negative_13", 0.5, "Negative_12", 0.5};
		class Negative_12
		{
			gesture = "";
			speech[] = {"XMIT", "CantGetThere"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Stealth";
		};
		class Negative_13
		{
			gesture = "";
			speech[] = {"XMIT", "NegativeCantMakeItThere"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Stealth";
		};
	};
	class SentDetectedBomb: NormalCommand
	{
		versions[] = {"Bomb_detected_1", "(1 - (Stealth))", "Bomb_detected", "Stealth"};
		class Bomb_detected
		{
			gesture = "";
			speech[] = {"XMIT", "BombDetected"};
			text = "Bomb detected";
			textOrig = "Bomb detected";
			wordsClass = "Stealth";
		};
		class Bomb_detected_1
		{
			gesture = "";
			speech[] = {"XMIT", "BombDetected"};
			text = "Bomb detected";
			textOrig = "Bomb detected";
			wordsClass = "Normal";
		};
	};
	class SentDetectedExplosive: NormalCommand
	{
		versions[] = {"Explosive_detected_2", "(1 - (Stealth))", "Explosive_detected_1", "Stealth"};
		class Explosive_detected_1
		{
			gesture = "";
			speech[] = {"XMIT", "ExplosiveDetected"};
			text = "Explosive detected";
			textOrig = "Explosive detected";
			wordsClass = "Stealth";
		};
		class Explosive_detected_2
		{
			gesture = "";
			speech[] = {"XMIT", "ExplosiveDetected"};
			text = "Explosive detected";
			textOrig = "Explosive detected";
			wordsClass = "Normal";
		};
	};
	class SentDetectedMine: NormalCommand
	{
		versions[] = {"Mine_detected_1", "Stealth", "Mine_detected", "(1 - (Stealth))"};
		class Mine_detected
		{
			gesture = "";
			speech[] = {"XMIT", "MineDetected"};
			text = "Mine detected";
			textOrig = "Mine detected";
			wordsClass = "Normal";
		};
		class Mine_detected_1
		{
			gesture = "";
			speech[] = {"XMIT", "MineDetected"};
			text = "Mine detected";
			textOrig = "Mine detected";
			wordsClass = "Stealth";
		};
	};
	class SentDisassemble: NormalCommand
	{
		versions[] = {"__1_1___Disassemble____2_1", "Stealth", "__1_1___Disassemble____2", "(1 - (Stealth))"};
		class __1_1___Disassemble____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DisassembleThatWeapon"};
			text = "%1.1 - Disassemble - %2";
			textOrig = "%1.1 ? Disassemble ? %2";
			wordsClass = "Normal";
		};
		class __1_1___Disassemble____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DisassembleThatWeapon"};
			text = "%1.1 - Disassemble - %2";
			textOrig = "%1.1 ? Disassemble ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentEndangered: CombatShout
	{
		versions[] = {"__53", "Stealth", "__33", "(1 - (Stealth))"};
		class __33
		{
			gesture = "";
			speech[] = {"XMIT", "EndangeredE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __53
		{
			gesture = "";
			speech[] = {"XMIT", "EndangeredE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentEnemyContact: Report
	{
		versions[] = {"Contact_1", "(1 - (Stealth))", "Contact_2", "(1 - (Stealth))", "Contact_6", "Stealth", "Contact_7", "Stealth", "Contact_8", "Stealth", "Contact", "(1 - (Stealth))"};
		class Contact
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_1"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Combat";
		};
		class Contact_1
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_2"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Combat";
		};
		class Contact_2
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_3"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Combat";
		};
		class Contact_6
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_1"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Stealth";
		};
		class Contact_7
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_2"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Stealth";
		};
		class Contact_8
		{
			gesture = "";
			speech[] = {"XMIT", "ContactE_3"};
			text = "Contact";
			textOrig = "Contact";
			wordsClass = "Stealth";
		};
	};
	class SentEnemyDetectedClose
	{
		versions[] = {"Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_1_1", "0.7*Combat", "Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_3_2", "0.3*(1 - (Combat))", "Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_3_1", "0.3*Combat", "Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_1", "0.7*(1 - (Combat))"};
		class Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_1
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%7.101", "%8.1"};
			text = "Contact - %2 - %7.101 - %8.1";
			textOrig = "Contact ? %2 ? %7.101 ? %8.1";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_1_1
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%7.101", "%8.1"};
			text = "Contact - %2 - %7.101 - %8.1";
			textOrig = "Contact ? %2 ? %7.101 ? %8.1";
			wordsClass = "Combat";
		};
		class Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%7.101", "%8.3"};
			text = "Contact - %2 - %7.101 - %8.3";
			textOrig = "Contact ? %2 ? %7.101 ? %8.3";
			wordsClass = "Combat";
		};
		class Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_3_2
		{
			gesture = "";
			speech[] = {"XMIT", "EnemyDetected", "%2", "%7.101", "%8.3"};
			text = "Contact - %2 - %7.101 - %8.3";
			textOrig = "Contact ? %2 ? %7.101 ? %8.3";
			wordsClass = "Normal";
		};
	};
	class SentEnemyDetectedCloseStealth
	{
		versions[] = {"Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_3", 1};
		class Contact____eTARGETS____eSENDERDIS_ABS____eSENDERDIR_3
		{
			gesture = "";
			speech[] = {"XMIT", "Contact", "%2", "%7.101", "%8.3"};
			text = "Contact - %2 - %7.101 - %8.3";
			textOrig = "Contact ? %2 ? %7.101 ? %8.3";
			wordsClass = "Stealth";
		};
	};
	class SentEnemyDetectedDangerClose
	{
		versions[] = {"Contact____eTARGETS_1", "Combat", "Contact____eTARGETS", "(1 - (Combat))"};
		class Contact____eTARGETS
		{
			gesture = "";
			speech[] = {"XMIT", "%2"};
			text = "Contact - %2";
			textOrig = "Contact ? %2";
			wordsClass = "NormalContact";
		};
		class Contact____eTARGETS_1
		{
			gesture = "";
			speech[] = {"XMIT", "%2"};
			text = "Contact - %2";
			textOrig = "Contact ? %2";
			wordsClass = "CombatContact";
		};
	};
	class SentEnemyDetectedDangerCloseStealth
	{
		versions[] = {"Contact____eTARGETS_2", 1};
		class Contact____eTARGETS_2
		{
			gesture = "";
			speech[] = {"XMIT", "Contact", "%2"};
			text = "Contact - %2";
			textOrig = "Contact ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentEnemyDetectedLong
	{
		versions[] = {"Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_3", "(1 - (Combat))*0.60", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_2", "(1 - (Combat))*0.20", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_3", "(1 - (Combat))*0.10", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_8", "Combat*0.5", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_9", "Combat*0.5", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_1", "(1 - (Combat))*0.10"};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_1
		{
			gesture = "";
			speech[] = {"XMIT", "EnemyDetected", "%2", "%5.101", "%6.102"};
			text = "Contact - %2 - %5.101 - %6.102";
			textOrig = "Contact ? %2 ? %5.101 ? %6.102";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_3
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.102"};
			text = "Contact - %2 - %5.101 - %6.102";
			textOrig = "Contact ? %2 ? %5.101 ? %6.102";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_2
		{
			gesture = "";
			speech[] = {"XMIT", "EnemyDetected", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_3
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_8
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Combat";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_9
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Combat";
		};
	};
	class SentEnemyDetectedLongStealth
	{
		versions[] = {"Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_7", 0.6, "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_6", 0.2, "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_7", 0.1, "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_5", 0.1};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_5
		{
			gesture = "";
			speech[] = {"XMIT", "EnemyDetected", "%2", "%5.101", "%6.102"};
			text = "Contact - %2 - %5.101 - %6.102";
			textOrig = "Contact ? %2 ? %5.101 ? %6.102";
			wordsClass = "Stealth";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_7
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.102"};
			text = "Contact - %2 - %5.101 - %6.102";
			textOrig = "Contact ? %2 ? %5.101 ? %6.102";
			wordsClass = "Stealth";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_6
		{
			gesture = "";
			speech[] = {"XMIT", "EnemyDetected", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Stealth";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_7
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Stealth";
		};
	};
	class SentEnemyDetectedMedium
	{
		versions[] = {"Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102", "(1 - (Combat))", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_1", "(1 - (Combat))", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS", "(1 - (Combat))", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_8", "Combat*0.5", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_9", "Combat*0.5", "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_2", "(1 - (Combat))"};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102
		{
			gesture = "";
			speech[] = {"XMIT", "EnemyDetected", "%2", "%5.101", "%6.102"};
			text = "Contact - %2 - %5.101 - %6.102";
			textOrig = "Contact ? %2 ? %5.101 ? %6.102";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_2
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.102"};
			text = "Contact - %2 - %5.101 - %6.102";
			textOrig = "Contact ? %2 ? %5.101 ? %6.102";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "EnemyDetected", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_1
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_8
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Combat";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_9
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Combat";
		};
	};
	class SentEnemyDetectedMediumStealth
	{
		versions[] = {"Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_4", 1, "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_5", 1, "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_4", 1, "Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_6", 1};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_4
		{
			gesture = "";
			speech[] = {"XMIT", "EnemyDetected", "%2", "%5.101", "%6.102"};
			text = "Contact - %2 - %5.101 - %6.102";
			textOrig = "Contact ? %2 ? %5.101 ? %6.102";
			wordsClass = "Stealth";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102_6
		{
			gesture = "";
			speech[] = {"XMIT", "Contact", "%2", "%5.101", "%6.102"};
			text = "Contact - %2 - %5.101 - %6.102";
			textOrig = "Contact ? %2 ? %5.101 ? %6.102";
			wordsClass = "Stealth";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_4
		{
			gesture = "";
			speech[] = {"XMIT", "EnemyDetected", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Stealth";
		};
		class Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS_5
		{
			gesture = "";
			speech[] = {"XMIT", "Contact", "%2", "%5.101", "%6.101"};
			text = "Contact - %2 - %5.101 - %6.101";
			textOrig = "Contact ? %2 ? %5.101 ? %6.101";
			wordsClass = "Stealth";
		};
	};
	class SentEnemyDetectedVeryLong
	{
		versions[] = {"Contact____eTARGETS___Grid___eGRID_2", "Combat", "Contact____eTARGETS___Grid___eGRID", "(1 - (Combat))"};
		class Contact____eTARGETS___Grid___eGRID
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%3"};
			text = "Contact - %2 - Grid: %3";
			textOrig = "Contact ? %2 ? Grid: %3";
			wordsClass = "Normal";
		};
		class Contact____eTARGETS___Grid___eGRID_2
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%3"};
			text = "Contact - %2 - Grid: %3";
			textOrig = "Contact ? %2 ? Grid: %3";
			wordsClass = "Combat";
		};
	};
	class SentEnemyDetectedVeryLongStealth
	{
		versions[] = {"Contact____eTARGETS___Grid___eGRID_1", 1};
		class Contact____eTARGETS___Grid___eGRID_1
		{
			gesture = "";
			speech[] = {"XMIT", "%2", "%3"};
			text = "Contact - %2 - Grid: %3";
			textOrig = "Contact ? %2 ? Grid: %3";
			wordsClass = "Stealth";
		};
	};
	class SentEngage: UrgentCommand
	{
		sentences[] = {"SentEngageStealth", "Stealth", "SentEngageDefault", "(1 - (Stealth))"};
	};
	class SentEngageDefault: UrgentCommand
	{
		versions[] = {"__1___Engage_____2____6", "0.2*(1 - (Combat))*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage_____2", "0.5*(1 - (Combat))*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage____2____6_CMPS_1", "(1 - (Combat))*((DistanceToGroup - 250) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "__1___Engage_____2___Grid___4", "(1 - (Combat))*((DistanceToGroup - 1050) min 1 max 0)", "__1___Engage_____2____6_3", "0.2*Combat*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage_____2_1", "0.5*Combat*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage____2____6_CMPS_2", "0.5*(1 - (Combat))*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage____2____6_CMPS", "0.5*Combat*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage_____2____6_2", "0.1*(1 - (Combat))*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage_____2____6_3_1", "0.4*Combat*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage____2____6_CMPS_3", "Combat*((DistanceToGroup - 250) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "__1___Engage_____2___Grid___4_2", "Combat*((DistanceToGroup - 1050) min 1 max 0)", "__1___Engage_____2____6_4", "0.3*Combat*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage_____2____6_3_4", "0.4*(1 - (Combat))*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage_____2____6_6", "0.1*Combat*(1 - (((DistanceToGroup - 100) min 1 max 0)))"};
		class __1___Engage____2____6_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Engage - %2 - %6.101";
			textOrig = "%1 ? Engage ? %2 ? %6.101";
			wordsClass = "CombatEngage";
		};
		class __1___Engage____2____6_CMPS_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Engage - %2 - %6.101";
			textOrig = "%1 ? Engage ? %2 ? %6.101";
			wordsClass = "NormalEngage";
		};
		class __1___Engage____2____6_CMPS_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Engage - %2 - %6.101";
			textOrig = "%1 ? Engage ? %2 ? %6.101";
			wordsClass = "NormalEngage";
		};
		class __1___Engage____2____6_CMPS_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Engage - %2 - %6.101";
			textOrig = "%1 ? Engage ? %2 ? %6.101";
			wordsClass = "NormalEngage";
		};
		class __1___Engage_____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Engage -  %2";
			textOrig = "%1 ? Engage ?  %2";
			wordsClass = "NormalEngage";
		};
		class __1___Engage_____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Engage -  %2";
			textOrig = "%1 ? Engage ?  %2";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2____6
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6";
			wordsClass = "NormalEngage";
		};
		class __1___Engage_____2____6_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6";
			wordsClass = "NormalEngage";
		};
		class __1___Engage_____2____6_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.3"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6.3";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2____6_3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.3"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6.3";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2____6_3_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.3"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6.3";
			wordsClass = "NormalEngage";
		};
		class __1___Engage_____2____6_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2____6_6
		{
			gesture = "";
			speech[] = {"XMIT", "%6"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2___Grid___4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%4"};
			text = "%1 - Engage -  %2 - Grid: %4";
			textOrig = "%1 ? Engage ?  %2 ? Grid: %4";
			wordsClass = "NormalEngage";
		};
		class __1___Engage_____2___Grid___4_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%4"};
			text = "%1 - Engage -  %2 - Grid: %4";
			textOrig = "%1 ? Engage ?  %2 ? Grid: %4";
			wordsClass = "NormalEngage";
		};
	};
	class SentEngageNoTarget: UrgentCommand
	{
		sentences[] = {"SentEngageNoTargetStealth", "Stealth", "SentEngageNoTargetDefault", "(1 - (Stealth))"};
	};
	class SentEngageNoTargetDefault: NormalCommand
	{
		versions[] = {"__1___Engage_5", "Combat", "__1___Engage_2", "(1 - (Combat))"};
		class __1___Engage_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Engage"};
			text = "%1 - Engage";
			textOrig = "%1 ? Engage";
			wordsClass = "Normal";
		};
		class __1___Engage_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Engage"};
			text = "%1 - Engage";
			textOrig = "%1 ? Engage";
			wordsClass = "Combat";
		};
	};
	class SentEngageNoTargetStealth: NormalCommand
	{
		versions[] = {"__1___Engage_8", 1};
		class __1___Engage_8
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Engage"};
			text = "%1 - Engage";
			textOrig = "%1 ? Engage";
			wordsClass = "Stealth";
		};
	};
	class SentEngageStealth: UrgentCommand
	{
		versions[] = {"__1___Engage_____2___Grid___4_1", "((DistanceToGroup - 1050) min 1 max 0)", "__1___Engage_____2____6_1", "0.2*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage_____2_2", "0.5*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage____2____6_CMPS_5", "0.5*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage_____2____6_3_2", "0.4*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage_____2____6_3_5", "0.3*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage_____2____6_5", "0.1*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage____2____6_CMPS_4", "((DistanceToGroup - 250) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))"};
		class __1___Engage____2____6_CMPS_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Engage - %2 - %6.101";
			textOrig = "%1 ? Engage ? %2 ? %6.101";
			wordsClass = "StealthEngage";
		};
		class __1___Engage____2____6_CMPS_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Engage - %2 - %6.101";
			textOrig = "%1 ? Engage ? %2 ? %6.101";
			wordsClass = "StealthEngage";
		};
		class __1___Engage_____2_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Engage -  %2";
			textOrig = "%1 ? Engage ?  %2";
			wordsClass = "StealthEngage";
		};
		class __1___Engage_____2____6_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6";
			wordsClass = "StealthEngage";
		};
		class __1___Engage_____2____6_3_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.3"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6.3";
			wordsClass = "StealthEngage";
		};
		class __1___Engage_____2____6_3_5
		{
			gesture = "";
			speech[] = {"XMIT", "%6.3"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6.3";
			wordsClass = "StealthEngage";
		};
		class __1___Engage_____2____6_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6";
			wordsClass = "StealthEngage";
		};
		class __1___Engage_____2___Grid___4_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%4"};
			text = "%1 - Engage -  %2 - Grid: %4";
			textOrig = "%1 ? Engage ?  %2 ? Grid: %4";
			wordsClass = "StealthEngage";
		};
	};
	class SentFire: UrgentCommand
	{
		sentences[] = {"SentEngageStealth", "Stealth", "SentEngageDefault", "(1 - (Stealth))"};
	};
	class SentFireNegative
	{
		versions[] = {"Negative_14", "Stealth", "Negative_15", "Combat", "Negative_4", "(1 - (Stealth))*(1 - (Combat))"};
		class Negative_14
		{
			gesture = "";
			speech[] = {"XMIT", "CannotFire"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Stealth";
		};
		class Negative_15
		{
			gesture = "";
			speech[] = {"XMIT", "CannotFire"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Combat";
		};
		class Negative_4
		{
			gesture = "";
			speech[] = {"XMIT", "CannotFire"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Normal";
		};
	};
	class SentFireNoTarget: UrgentCommand
	{
		sentences[] = {"SentFireNoTargetStealth", "Stealth", "SentFireNoTargetDefault", "(1 - (Stealth))"};
	};
	class SentFireNoTarget_1: UrgentCommand
	{
		sentences[] = {"SentAttackNoTargetStealth", "Stealth", "SentAttackNoTargetDefault", "(1 - (Stealth))"};
	};
	class SentFireNoTargetDefault: NormalCommand
	{
		versions[] = {"__1___Engage_3", "(1 - (Combat))", "__1___Engage", "Combat"};
		class __1___Engage
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Fire"};
			text = "%1 - Engage";
			textOrig = "%1 ? Engage";
			wordsClass = "Combat";
		};
		class __1___Engage_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Fire"};
			text = "%1 - Engage";
			textOrig = "%1 ? Engage";
			wordsClass = "Normal";
		};
	};
	class SentFireNoTargetStealth: NormalCommand
	{
		versions[] = {"__1___Engage_6", 1};
		class __1___Engage_6
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Fire"};
			text = "%1 - Engage";
			textOrig = "%1 ? Engage";
			wordsClass = "Stealth";
		};
	};
	class SentFireReady: Completition
	{
		sentences[] = {"SentFireReadyStealth", "Stealth", "SentFireReadyDefault", "(1 - (Stealth))"};
	};
	class SentFireReadyDefault: Completition
	{
		versions[] = {"Ready_to_fire_1", 0.25, "Ready_to_fire_2", 0.25, "Ready_to_fire_3", 0.25, "Ready_to_fire", 0.25};
		class Ready_to_fire
		{
			gesture = "";
			speech[] = {"XMIT", "ReadyToFire"};
			text = "Ready to fire";
			textOrig = "Ready to fire";
			wordsClass = "Normal";
		};
		class Ready_to_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "TargetInSight"};
			text = "Ready to fire";
			textOrig = "Ready to fire";
			wordsClass = "Normal";
		};
		class Ready_to_fire_2
		{
			gesture = "";
			speech[] = {"XMIT", "TargetAcquired"};
			text = "Ready to fire";
			textOrig = "Ready to fire";
			wordsClass = "Normal";
		};
		class Ready_to_fire_3
		{
			gesture = "";
			speech[] = {"XMIT", "EyesOnTarget"};
			text = "Ready to fire";
			textOrig = "Ready to fire";
			wordsClass = "Normal";
		};
	};
	class SentFireReadyStealth: Completition
	{
		versions[] = {"Ready_to_fire_5", 0.25, "Ready_to_fire_6", 0.25, "Ready_to_fire_7", 0.25, "Ready_to_fire_4", 0.25};
		class Ready_to_fire_4
		{
			gesture = "";
			speech[] = {"XMIT", "ReadyToFire"};
			text = "Ready to fire";
			textOrig = "Ready to fire";
			wordsClass = "Stealth";
		};
		class Ready_to_fire_5
		{
			gesture = "";
			speech[] = {"XMIT", "TargetInSight"};
			text = "Ready to fire";
			textOrig = "Ready to fire";
			wordsClass = "Stealth";
		};
		class Ready_to_fire_6
		{
			gesture = "";
			speech[] = {"XMIT", "TargetAcquired"};
			text = "Ready to fire";
			textOrig = "Ready to fire";
			wordsClass = "Stealth";
		};
		class Ready_to_fire_7
		{
			gesture = "";
			speech[] = {"XMIT", "EyesOnTarget"};
			text = "Ready to fire";
			textOrig = "Ready to fire";
			wordsClass = "Stealth";
		};
	};
	class SentFormColumn: NormalCommand
	{
		versions[] = {"Formation___Column_1", "Stealth", "Formation___Column_2", "Combat", "Formation___Column", "(1 - (Stealth))*(1 - (Combat))"};
		class Formation___Column
		{
			gesture = "";
			speech[] = {"XMIT", "FormColumn"};
			text = "Formation - Column";
			textOrig = "Formation ? Column";
			wordsClass = "Normal";
		};
		class Formation___Column_1
		{
			gesture = "";
			speech[] = {"XMIT", "FormColumn"};
			text = "Formation - Column";
			textOrig = "Formation ? Column";
			wordsClass = "Stealth";
		};
		class Formation___Column_2
		{
			gesture = "";
			speech[] = {"XMIT", "FormColumn"};
			text = "Formation - Column";
			textOrig = "Formation ? Column";
			wordsClass = "Combat";
		};
	};
	class SentFormDiamond: NormalCommand
	{
		versions[] = {"Formation___Diamond_1", "Stealth", "Formation___Diamond_2", "Combat", "Formation___Diamond", "(1 - (Stealth))*(1 - (Combat))"};
		class Formation___Diamond
		{
			gesture = "";
			speech[] = {"XMIT", "FormDiamond"};
			text = "Formation - Diamond";
			textOrig = "Formation ? Diamond";
			wordsClass = "Normal";
		};
		class Formation___Diamond_1
		{
			gesture = "";
			speech[] = {"XMIT", "FormDiamond"};
			text = "Formation - Diamond";
			textOrig = "Formation ? Diamond";
			wordsClass = "Stealth";
		};
		class Formation___Diamond_2
		{
			gesture = "";
			speech[] = {"XMIT", "FormDiamond"};
			text = "Formation - Diamond";
			textOrig = "Formation ? Diamond";
			wordsClass = "Combat";
		};
	};
	class SentFormEcholonLeft: NormalCommand
	{
		versions[] = {"Formation___Echelon_L__1", "Stealth", "Formation___Echelon_L__2", "Combat", "Formation___Echelon_L_", "(1 - (Stealth))*(1 - (Combat))"};
		class Formation___Echelon_L_
		{
			gesture = "";
			speech[] = {"XMIT", "FormEcholonLeft"};
			text = "Formation - Echelon L.";
			textOrig = "Formation ? Echelon L.";
			wordsClass = "Normal";
		};
		class Formation___Echelon_L__1
		{
			gesture = "";
			speech[] = {"XMIT", "FormEcholonLeft"};
			text = "Formation - Echelon L.";
			textOrig = "Formation ? Echelon L.";
			wordsClass = "Stealth";
		};
		class Formation___Echelon_L__2
		{
			gesture = "";
			speech[] = {"XMIT", "FormEcholonLeft"};
			text = "Formation - Echelon L.";
			textOrig = "Formation ? Echelon L.";
			wordsClass = "Combat";
		};
	};
	class SentFormEcholonRight: NormalCommand
	{
		versions[] = {"Formation___Echelon_R__1", "Stealth", "Formation___Echelon_R__2", "Combat", "Formation___Echelon_R_", "(1 - (Stealth))*(1 - (Combat))"};
		class Formation___Echelon_R_
		{
			gesture = "";
			speech[] = {"XMIT", "FormEcholonRight"};
			text = "Formation - Echelon R.";
			textOrig = "Formation ? Echelon R.";
			wordsClass = "Normal";
		};
		class Formation___Echelon_R__1
		{
			gesture = "";
			speech[] = {"XMIT", "FormEcholonRight"};
			text = "Formation - Echelon R.";
			textOrig = "Formation ? Echelon R.";
			wordsClass = "Stealth";
		};
		class Formation___Echelon_R__2
		{
			gesture = "";
			speech[] = {"XMIT", "FormEcholonRight"};
			text = "Formation - Echelon R.";
			textOrig = "Formation ? Echelon R.";
			wordsClass = "Combat";
		};
	};
	class SentFormFile: NormalCommand
	{
		versions[] = {"Formation___File_1", "Stealth", "Formation___File_2", "Combat", "Formation___File", "(1 - (Stealth))*(1 - (Combat))"};
		class Formation___File
		{
			gesture = "";
			speech[] = {"XMIT", "FormFile"};
			text = "Formation - File";
			textOrig = "Formation ? File";
			wordsClass = "Normal";
		};
		class Formation___File_1
		{
			gesture = "";
			speech[] = {"XMIT", "FormFile"};
			text = "Formation - File";
			textOrig = "Formation ? File";
			wordsClass = "Stealth";
		};
		class Formation___File_2
		{
			gesture = "";
			speech[] = {"XMIT", "FormFile"};
			text = "Formation - File";
			textOrig = "Formation ? File";
			wordsClass = "Combat";
		};
	};
	class SentFormLine: NormalCommand
	{
		versions[] = {"Formation___Line_1", "Stealth", "Formation___Line_2", "Combat", "Formation___Line", "(1 - (Stealth))*(1 - (Combat))"};
		class Formation___Line
		{
			gesture = "";
			speech[] = {"XMIT", "FormLine"};
			text = "Formation - Line";
			textOrig = "Formation ? Line";
			wordsClass = "Normal";
		};
		class Formation___Line_1
		{
			gesture = "";
			speech[] = {"XMIT", "FormLine"};
			text = "Formation - Line";
			textOrig = "Formation ? Line";
			wordsClass = "Stealth";
		};
		class Formation___Line_2
		{
			gesture = "";
			speech[] = {"XMIT", "FormLine"};
			text = "Formation - Line";
			textOrig = "Formation ? Line";
			wordsClass = "Combat";
		};
	};
	class SentFormPosAdvance: NormalCommand
	{
		versions[] = {"__1_1___Advance_1", "Stealth", "__1_1___Advance_2", "Combat", "__1_1___Advance", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Advance
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Advance"};
			text = "%1.1 - Advance";
			textOrig = "%1.1 ? Advance";
			wordsClass = "Normal";
		};
		class __1_1___Advance_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Advance"};
			text = "%1.1 - Advance";
			textOrig = "%1.1 ? Advance";
			wordsClass = "Stealth";
		};
		class __1_1___Advance_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Advance"};
			text = "%1.1 - Advance";
			textOrig = "%1.1 ? Advance";
			wordsClass = "Combat";
		};
	};
	class SentFormPosFlankLeft: NormalCommand
	{
		versions[] = {"__1_1___Flank_left_1", "Stealth", "__1_1___Flank_left_2", "Combat", "__1_1___Flank_left", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Flank_left
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlankLeft"};
			text = "%1.1 - Flank left";
			textOrig = "%1.1 ? Flank left";
			wordsClass = "Normal";
		};
		class __1_1___Flank_left_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlankLeft"};
			text = "%1.1 - Flank left";
			textOrig = "%1.1 ? Flank left";
			wordsClass = "Stealth";
		};
		class __1_1___Flank_left_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlankLeft"};
			text = "%1.1 - Flank left";
			textOrig = "%1.1 ? Flank left";
			wordsClass = "Combat";
		};
	};
	class SentFormPosFlankRight: NormalCommand
	{
		versions[] = {"__1_1___Flank_right_1", "Stealth", "__1_1___Flank_right_2", "Combat", "__1_1___Flank_right", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Flank_right
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlankRight"};
			text = "%1.1 - Flank right";
			textOrig = "%1.1 ? Flank right";
			wordsClass = "Normal";
		};
		class __1_1___Flank_right_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlankRight"};
			text = "%1.1 - Flank right";
			textOrig = "%1.1 ? Flank right";
			wordsClass = "Stealth";
		};
		class __1_1___Flank_right_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlankRight"};
			text = "%1.1 - Flank right";
			textOrig = "%1.1 ? Flank right";
			wordsClass = "Combat";
		};
	};
	class SentFormPosStayBack: NormalCommand
	{
		versions[] = {"__1_1___Stay_back_1", "Stealth", "__1_1___Stay_back_2", "Combat", "__1_1___Stay_back", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Stay_back
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "StayBack"};
			text = "%1.1 - Stay back";
			textOrig = "%1.1 ? Stay back";
			wordsClass = "Normal";
		};
		class __1_1___Stay_back_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "StayBack"};
			text = "%1.1 - Stay back";
			textOrig = "%1.1 ? Stay back";
			wordsClass = "Stealth";
		};
		class __1_1___Stay_back_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "StayBack"};
			text = "%1.1 - Stay back";
			textOrig = "%1.1 ? Stay back";
			wordsClass = "Combat";
		};
	};
	class SentFormStaggeredColumn: NormalCommand
	{
		versions[] = {"Formation___Staggered_col__1", "Stealth", "Formation___Staggered_col__2", "Combat", "Formation___Staggered_col_", "(1 - (Stealth))*(1 - (Combat))"};
		class Formation___Staggered_col_
		{
			gesture = "";
			speech[] = {"XMIT", "FormStaggeredColumn"};
			text = "Formation - Staggered col.";
			textOrig = "Formation ? Staggered col.";
			wordsClass = "Normal";
		};
		class Formation___Staggered_col__1
		{
			gesture = "";
			speech[] = {"XMIT", "FormStaggeredColumn"};
			text = "Formation - Staggered col.";
			textOrig = "Formation ? Staggered col.";
			wordsClass = "Stealth";
		};
		class Formation___Staggered_col__2
		{
			gesture = "";
			speech[] = {"XMIT", "FormStaggeredColumn"};
			text = "Formation - Staggered col.";
			textOrig = "Formation ? Staggered col.";
			wordsClass = "Combat";
		};
	};
	class SentFormVee: NormalCommand
	{
		versions[] = {"Formation___Vee_1", "Stealth", "Formation___Vee_2", "Combat", "Formation___Vee", "(1 - (Stealth))*(1 - (Combat))"};
		class Formation___Vee
		{
			gesture = "";
			speech[] = {"XMIT", "FormVee"};
			text = "Formation - Vee";
			textOrig = "Formation ? Vee";
			wordsClass = "Normal";
		};
		class Formation___Vee_1
		{
			gesture = "";
			speech[] = {"XMIT", "FormVee"};
			text = "Formation - Vee";
			textOrig = "Formation ? Vee";
			wordsClass = "Stealth";
		};
		class Formation___Vee_2
		{
			gesture = "";
			speech[] = {"XMIT", "FormVee"};
			text = "Formation - Vee";
			textOrig = "Formation ? Vee";
			wordsClass = "Combat";
		};
	};
	class SentFormWedge: NormalCommand
	{
		versions[] = {"Formation___Wedge_1", "Stealth", "Formation___Wedge_2", "Combat", "Formation___Wedge", "(1 - (Stealth))*(1 - (Combat))"};
		class Formation___Wedge
		{
			gesture = "";
			speech[] = {"XMIT", "FormWedge"};
			text = "Formation - Wedge";
			textOrig = "Formation ? Wedge";
			wordsClass = "Normal";
		};
		class Formation___Wedge_1
		{
			gesture = "";
			speech[] = {"XMIT", "FormWedge"};
			text = "Formation - Wedge";
			textOrig = "Formation ? Wedge";
			wordsClass = "Stealth";
		};
		class Formation___Wedge_2
		{
			gesture = "";
			speech[] = {"XMIT", "FormWedge"};
			text = "Formation - Wedge";
			textOrig = "Formation ? Wedge";
			wordsClass = "Combat";
		};
	};
	class SentFuelCritical: CriticalReport
	{
		versions[] = {"No_fuel_1", "Stealth", "No_fuel", "(1 - (Stealth))"};
		class No_fuel
		{
			gesture = "";
			speech[] = {"XMIT", "FuelCritical"};
			text = "No fuel";
			textOrig = "No fuel";
			wordsClass = "Normal";
		};
		class No_fuel_1
		{
			gesture = "";
			speech[] = {"XMIT", "FuelCritical"};
			text = "No fuel";
			textOrig = "No fuel";
			wordsClass = "Stealth";
		};
	};
	class SentFuelLow: Report
	{
		versions[] = {"Low_fuel_1", "Stealth", "Low_fuel", "(1 - (Stealth))"};
		class Low_fuel
		{
			gesture = "";
			speech[] = {"XMIT", "FuelLow"};
			text = "Low fuel";
			textOrig = "Low fuel";
			wordsClass = "Normal";
		};
		class Low_fuel_1
		{
			gesture = "";
			speech[] = {"XMIT", "FuelLow"};
			text = "Low fuel";
			textOrig = "Low fuel";
			wordsClass = "Stealth";
		};
	};
	class SentFXBreathingFast: Completition
	{
		versions[] = {"__55", 1};
		class __55
		{
			gesture = "";
			speech[] = {"XMIT", "FXBreathingFast"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentFXBreathingSlow: Completition
	{
		versions[] = {"__54", 1};
		class __54
		{
			gesture = "";
			speech[] = {"XMIT", "FXBreathingSlow"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentFXDeath: Completition
	{
		versions[] = {"__57", 1};
		class __57
		{
			gesture = "";
			speech[] = {"XMIT", "FXDeath"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentFXDrowning: Completition
	{
		versions[] = {"__60", 1};
		class __60
		{
			gesture = "";
			speech[] = {"XMIT", "FXDrowning"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentFXEffort: Completition
	{
		versions[] = {"__59", 1};
		class __59
		{
			gesture = "";
			speech[] = {"XMIT", "FXEffort"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentFXHit: Completition
	{
		versions[] = {"__56", 1};
		class __56
		{
			gesture = "";
			speech[] = {"XMIT", "FXHit"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentFXHurt: Completition
	{
		versions[] = {"__58", 1};
		class __58
		{
			gesture = "";
			speech[] = {"XMIT", "FXHurt"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentGenBaseSideEnemyEAST: NormalCommand
	{
		versions[] = {"OPFOR_is_enemy_", 1};
		class OPFOR_is_enemy_
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseSideEnemyEAST"};
			text = "OPFOR is enemy.";
			textOrig = "OPFOR is enemy.";
			wordsClass = "Normal";
		};
	};
	class SentGenBaseSideEnemyGUER: NormalCommand
	{
		versions[] = {"Independent_forces_are_enemy_", 1};
		class Independent_forces_are_enemy_
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseSideEnemyGUER"};
			text = "Independent forces are enemy.";
			textOrig = "Independent forces are enemy.";
			wordsClass = "Normal";
		};
	};
	class SentGenBaseSideEnemyWEST: NormalCommand
	{
		versions[] = {"BLUFOR_is_enemy_", 1};
		class BLUFOR_is_enemy_
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseSideEnemyWEST"};
			text = "BLUFOR is enemy.";
			textOrig = "BLUFOR is enemy.";
			wordsClass = "Normal";
		};
	};
	class SentGenBaseSideFriendlyEAST: NormalCommand
	{
		versions[] = {"OPFOR_is_friendly_", 1};
		class OPFOR_is_friendly_
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseSideFriendlyEAST"};
			text = "OPFOR is friendly.";
			textOrig = "OPFOR is friendly.";
			wordsClass = "Normal";
		};
	};
	class SentGenBaseSideFriendlyGUER: NormalCommand
	{
		versions[] = {"Independent_forces_are_friendly_", 1};
		class Independent_forces_are_friendly_
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseSideFriendlyGUER"};
			text = "Independent forces are friendly.";
			textOrig = "Independent forces are friendly.";
			wordsClass = "Normal";
		};
	};
	class SentGenBaseSideFriendlyWEST: NormalCommand
	{
		versions[] = {"BLUFOR_is_friendly_", 1};
		class BLUFOR_is_friendly_
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseSideFriendlyWEST"};
			text = "BLUFOR is friendly.";
			textOrig = "BLUFOR is friendly.";
			wordsClass = "Normal";
		};
	};
	class SentGenBaseUnlockRespawn: NormalCommand
	{
		versions[] = {"New_insertion_point_ready_to_use__1", 1, "New_insertion_point_ready_to_use__2", 1, "New_insertion_point_ready_to_use_", 1};
		class New_insertion_point_ready_to_use_
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseUnlockRespawn1"};
			text = "New insertion point available.";
			textOrig = "New insertion point ready to use.";
			wordsClass = "Normal";
		};
		class New_insertion_point_ready_to_use__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseUnlockRespawn2"};
			text = "New insertion point available.";
			textOrig = "New insertion point ready to use.";
			wordsClass = "Normal";
		};
		class New_insertion_point_ready_to_use__2
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseUnlockRespawn3"};
			text = "New insertion point available.";
			textOrig = "New insertion point ready to use.";
			wordsClass = "Normal";
		};
	};
	class SentGenBaseUnlockVehicle: NormalCommand
	{
		versions[] = {"New_vehicle_ready_to_use__1", 1, "New_vehicle_ready_to_use__2", 1, "New_vehicle_ready_to_use_", 1};
		class New_vehicle_ready_to_use_
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseUnlockVehicle1"};
			text = "New vehicle deployed.";
			textOrig = "New vehicle ready to use.";
			wordsClass = "Normal";
		};
		class New_vehicle_ready_to_use__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseUnlockVehicle2"};
			text = "New vehicle deployed.";
			textOrig = "New vehicle ready to use.";
			wordsClass = "Normal";
		};
		class New_vehicle_ready_to_use__2
		{
			gesture = "";
			speech[] = {"XMIT", "GenBaseUnlockVehicle3"};
			text = "New vehicle deployed.";
			textOrig = "New vehicle ready to use.";
			wordsClass = "Normal";
		};
	};
	class SentGenCmdDefend: NormalCommand
	{
		versions[] = {"Defend_the_location__1", 1, "Defend_the_location_", 1};
		class Defend_the_location_
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdDefend1"};
			text = "Defend the location.";
			textOrig = "Defend the location.";
			wordsClass = "Normal";
		};
		class Defend_the_location__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdDefend2"};
			text = "Defend the location.";
			textOrig = "Defend the location.";
			wordsClass = "Normal";
		};
	};
	class SentGenCmdRTB: NormalCommand
	{
		versions[] = {"Return_back_to_base__1", 1, "Return_back_to_base_", 1};
		class Return_back_to_base_
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdRTB1"};
			text = "Return back to base.";
			textOrig = "Return back to base.";
			wordsClass = "Normal";
		};
		class Return_back_to_base__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdRTB2"};
			text = "Return back to base.";
			textOrig = "Return back to base.";
			wordsClass = "Normal";
		};
	};
	class SentGenCmdSeize: NormalCommand
	{
		versions[] = {"Seize_the_area__1", 1, "Seize_the_area_", 1};
		class Seize_the_area_
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdSeize1"};
			text = "Seize the area.";
			textOrig = "Seize the area.";
			wordsClass = "Normal";
		};
		class Seize_the_area__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdSeize2"};
			text = "Seize the area.";
			textOrig = "Seize the area.";
			wordsClass = "Normal";
		};
	};
	class SentGenCmdTargetEscort: NormalCommand
	{
		versions[] = {"Escort_the_target_", 1};
		class Escort_the_target_
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdTargetEscort"};
			text = "Escort the target.";
			textOrig = "Escort the target.";
			wordsClass = "Normal";
		};
	};
	class SentGenCmdTargetFind: NormalCommand
	{
		versions[] = {"Find_the_target__1", 1, "Find_the_target_", 1};
		class Find_the_target_
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdTargetFind1"};
			text = "Find the target.";
			textOrig = "Find the target.";
			wordsClass = "Normal";
		};
		class Find_the_target__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdTargetFind2"};
			text = "Find the target.";
			textOrig = "Find the target.";
			wordsClass = "Normal";
		};
	};
	class SentGenCmdTargetNeutralize: NormalCommand
	{
		versions[] = {"Neutralize_the_target__1", 1, "Neutralize_the_target_", 1};
		class Neutralize_the_target_
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdTargetNeutralize1"};
			text = "Neutralize the target.";
			textOrig = "Neutralize the target.";
			wordsClass = "Normal";
		};
		class Neutralize_the_target__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdTargetNeutralize2"};
			text = "Neutralize the target.";
			textOrig = "Neutralize the target.";
			wordsClass = "Normal";
		};
	};
	class SentGenCmdTargetProtect: NormalCommand
	{
		versions[] = {"Protect_the_target__1", 1, "Protect_the_target_", 1};
		class Protect_the_target_
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdTargetProtect1"};
			text = "Protect the target.";
			textOrig = "Protect the target.";
			wordsClass = "Normal";
		};
		class Protect_the_target__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenCmdTargetProtect2"};
			text = "Protect the target.";
			textOrig = "Protect the target.";
			wordsClass = "Normal";
		};
	};
	class SentGenComplete: NormalCommand
	{
		versions[] = {"Objective_completed__1", 1, "Objective_completed__2", 1, "Objective_completed_", 1};
		class Objective_completed_
		{
			gesture = "";
			speech[] = {"XMIT", "GenComplete1"};
			text = "Objective complete.";
			textOrig = "Objective completed.";
			wordsClass = "Normal";
		};
		class Objective_completed__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenComplete2"};
			text = "Objective complete.";
			textOrig = "Objective completed.";
			wordsClass = "Normal";
		};
		class Objective_completed__2
		{
			gesture = "";
			speech[] = {"XMIT", "GenComplete3"};
			text = "Objective complete.";
			textOrig = "Objective completed.";
			wordsClass = "Normal";
		};
	};
	class SentGenIncoming: NormalCommand
	{
		versions[] = {"Incoming_enemy_fire__1", 1, "Incoming_enemy_fire__2", 1, "Incoming_enemy_fire_", 1};
		class Incoming_enemy_fire_
		{
			gesture = "";
			speech[] = {"XMIT", "GenIncoming1"};
			text = "Incoming enemy fire!";
			textOrig = "Incoming enemy fire!";
			wordsClass = "Normal";
		};
		class Incoming_enemy_fire__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenIncoming2"};
			text = "Incoming enemy fire!";
			textOrig = "Incoming enemy fire!";
			wordsClass = "Normal";
		};
		class Incoming_enemy_fire__2
		{
			gesture = "";
			speech[] = {"XMIT", "GenIncoming3"};
			text = "Incoming enemy fire!";
			textOrig = "Incoming enemy fire!";
			wordsClass = "Normal";
		};
	};
	class SentGenLeavingAO: NormalCommand
	{
		versions[] = {"You_are_leaving_Area_of_Operation__1", 1, "You_are_leaving_Area_of_Operation__2", 1, "You_are_leaving_Area_of_Operation_", 1};
		class You_are_leaving_Area_of_Operation_
		{
			gesture = "";
			speech[] = {"XMIT", "GenLeavingAO1"};
			text = "You are leaving the Area of Operations.";
			textOrig = "You are leaving Area of Operation.";
			wordsClass = "Normal";
		};
		class You_are_leaving_Area_of_Operation__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenLeavingAO2"};
			text = "You are leaving the Area of Operations.";
			textOrig = "You are leaving Area of Operation.";
			wordsClass = "Normal";
		};
		class You_are_leaving_Area_of_Operation__2
		{
			gesture = "";
			speech[] = {"XMIT", "GenLeavingAO3"};
			text = "You are leaving the Area of Operations.";
			textOrig = "You are leaving Area of Operation.";
			wordsClass = "Normal";
		};
	};
	class SentGenLosing: NormalCommand
	{
		versions[] = {"Stop_the_enemy__1", 1, "Stop_the_enemy__2", 1, "Stop_the_enemy_", 1};
		class Stop_the_enemy_
		{
			gesture = "";
			speech[] = {"XMIT", "GenLosing1"};
			text = "Stop the enemy!";
			textOrig = "Stop the enemy!";
			wordsClass = "Normal";
		};
		class Stop_the_enemy__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenLosing2"};
			text = "Stop the enemy!";
			textOrig = "Stop the enemy!";
			wordsClass = "Normal";
		};
		class Stop_the_enemy__2
		{
			gesture = "";
			speech[] = {"XMIT", "GenLosing3"};
			text = "Stop the enemy!";
			textOrig = "Stop the enemy!";
			wordsClass = "Normal";
		};
	};
	class SentGenLost: NormalCommand
	{
		versions[] = {"Objective_failed__1", 1, "Objective_failed__2", 1, "Objective_failed_", 1};
		class Objective_failed_
		{
			gesture = "";
			speech[] = {"XMIT", "GenLost1"};
			text = "Objective failed.";
			textOrig = "Objective failed.";
			wordsClass = "Normal";
		};
		class Objective_failed__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenLost2"};
			text = "Objective failed.";
			textOrig = "Objective failed.";
			wordsClass = "Normal";
		};
		class Objective_failed__2
		{
			gesture = "";
			speech[] = {"XMIT", "GenLost3"};
			text = "Objective failed.";
			textOrig = "Objective failed.";
			wordsClass = "Normal";
		};
	};
	class SentGenReinforcementsArrived: NormalCommand
	{
		versions[] = {"Reinforcements_have_arrived__1", 1, "Reinforcements_have_arrived_", 1};
		class Reinforcements_have_arrived_
		{
			gesture = "";
			speech[] = {"XMIT", "GenReinforcementsArrived1"};
			text = "Reinforcements have arrived.";
			textOrig = "Reinforcements have arrived.";
			wordsClass = "Normal";
		};
		class Reinforcements_have_arrived__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenReinforcementsArrived2"};
			text = "Reinforcements have arrived.";
			textOrig = "Reinforcements have arrived.";
			wordsClass = "Normal";
		};
	};
	class SentGenReinforcementsConfirmed: NormalCommand
	{
		versions[] = {"We_re_sending_reinforcements__1", 1, "We_re_sending_reinforcements_", 1};
		class We_re_sending_reinforcements_
		{
			gesture = "";
			speech[] = {"XMIT", "GenReinforcementsConfirmed1"};
			text = "Reinforcements en route.";
			textOrig = "We're sending reinforcements.";
			wordsClass = "Normal";
		};
		class We_re_sending_reinforcements__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenReinforcementsConfirmed2"};
			text = "Reinforcements en route.";
			textOrig = "We're sending reinforcements.";
			wordsClass = "Normal";
		};
	};
	class SentGenReinforcementsRejected: NormalCommand
	{
		versions[] = {"Cannot_send_reinforcements__1", 1, "Cannot_send_reinforcements_", 1};
		class Cannot_send_reinforcements_
		{
			gesture = "";
			speech[] = {"XMIT", "GenReinforcementsRejected1"};
			text = "Reinforcements unavailable.";
			textOrig = "Cannot send reinforcements.";
			wordsClass = "Normal";
		};
		class Cannot_send_reinforcements__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenReinforcementsRejected2"};
			text = "Reinforcements unavailable.";
			textOrig = "Cannot send reinforcements.";
			wordsClass = "Normal";
		};
	};
	class SentGenTime: NormalCommand
	{
		versions[] = {"The_time_is_running_out__1", 1, "The_time_is_running_out__2", 1, "The_time_is_running_out_", 1};
		class The_time_is_running_out_
		{
			gesture = "";
			speech[] = {"XMIT", "GenTime1"};
			text = "Time is running out!";
			textOrig = "The time is running out!";
			wordsClass = "Normal";
		};
		class The_time_is_running_out__1
		{
			gesture = "";
			speech[] = {"XMIT", "GenTime2"};
			text = "Time is running out!";
			textOrig = "The time is running out!";
			wordsClass = "Normal";
		};
		class The_time_is_running_out__2
		{
			gesture = "";
			speech[] = {"XMIT", "GenTime3"};
			text = "Time is running out!";
			textOrig = "The time is running out!";
			wordsClass = "Normal";
		};
	};
	class SentHealthCritical: CriticalReport
	{
		sentences[] = {"SentHealthCriticalStealth", "Stealth", "SentHealthCriticalDefault", "(1 - (Stealth))"};
	};
	class SentHealthCriticalDefault: CriticalReport
	{
		versions[] = {"Injured_5", 0.05, "Injured_1", 0.05, "Injured_2", 0.15, "Injured_3", 0.05, "Injured_4", 0.25, "Injured", 0.25, "Injured_6", 0.05, "Injured_7", 0.05, "Injured_8", 0.05, "Injured_9", 0.05};
		class Injured
		{
			gesture = "";
			speech[] = {"XMIT", "HealthInjured"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
		class Injured_1
		{
			gesture = "";
			speech[] = {"XMIT", "HealthSomebodyHelpMe"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
		class Injured_2
		{
			gesture = "";
			speech[] = {"XMIT", "HealthNeedHelp"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
		class Injured_3
		{
			gesture = "";
			speech[] = {"XMIT", "HealthWounded"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
		class Injured_4
		{
			gesture = "";
			speech[] = {"XMIT", "HealthMedic"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
		class Injured_5
		{
			gesture = "";
			speech[] = {"XMIT", "HealthINeedHelpNow"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
		class Injured_6
		{
			gesture = "";
			speech[] = {"XMIT", "HealthIAmBadlyHurt"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
		class Injured_7
		{
			gesture = "";
			speech[] = {"XMIT", "HealthINeedSomeHelpHere"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
		class Injured_8
		{
			gesture = "";
			speech[] = {"XMIT", "HealthNeedMedicNow"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
		class Injured_9
		{
			gesture = "";
			speech[] = {"XMIT", "HealthIAmWounded"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Normal";
		};
	};
	class SentHealthCriticalStealth: CriticalReport
	{
		versions[] = {"Injured_15", 0.05, "Injured_11", 0.05, "Injured_12", 0.15, "Injured_13", 0.05, "Injured_14", 0.25, "Injured_10", 0.25, "Injured_16", 0.05, "Injured_17", 0.05, "Injured_18", 0.05, "Injured_19", 0.05};
		class Injured_10
		{
			gesture = "";
			speech[] = {"XMIT", "HealthInjured"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
		class Injured_11
		{
			gesture = "";
			speech[] = {"XMIT", "HealthSomebodyHelpMe"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
		class Injured_12
		{
			gesture = "";
			speech[] = {"XMIT", "HealthNeedHelp"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
		class Injured_13
		{
			gesture = "";
			speech[] = {"XMIT", "HealthWounded"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
		class Injured_14
		{
			gesture = "";
			speech[] = {"XMIT", "HealthMedic"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
		class Injured_15
		{
			gesture = "";
			speech[] = {"XMIT", "HealthINeedHelpNow"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
		class Injured_16
		{
			gesture = "";
			speech[] = {"XMIT", "HealthIAmBadlyHurt"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
		class Injured_17
		{
			gesture = "";
			speech[] = {"XMIT", "HealthINeedSomeHelpHere"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
		class Injured_18
		{
			gesture = "";
			speech[] = {"XMIT", "HealthNeedMedicNow"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
		class Injured_19
		{
			gesture = "";
			speech[] = {"XMIT", "HealthIAmWounded"};
			text = "Injured";
			textOrig = "Injured";
			wordsClass = "Stealth";
		};
	};
	class SentHealthNormal: CriticalReport
	{
		sentences[] = {"SentHealthNormalStealth", "Stealth", "SentHealthNormalDefault", "(1 - (Stealth))"};
	};
	class SentHealthNormalDefault: CriticalReport
	{
		versions[] = {"__5", 0.16, "__6", 0.16, "__7", 0.16, "__8", 0.16, "__9", 0.16, "__4", 0.16};
		class __4
		{
			gesture = "";
			speech[] = {"XMIT", "IAmReady"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __5
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __6
		{
			gesture = "";
			speech[] = {"XMIT", "ReadyForOrders"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __7
		{
			gesture = "";
			speech[] = {"XMIT", "Waiting"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __8
		{
			gesture = "";
			speech[] = {"XMIT", "StandingBy"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __9
		{
			gesture = "";
			speech[] = {"XMIT", "AwaitingOrders"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentHealthNormalStealth: CriticalReport
	{
		versions[] = {"__19", 0.16, "__39", 0.16, "__40", 0.16, "__42", 0.16, "__43", 0.16, "__18", 0.16};
		class __18
		{
			gesture = "";
			speech[] = {"XMIT", "IAmReady"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
		class __19
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
		class __39
		{
			gesture = "";
			speech[] = {"XMIT", "ReadyForOrders"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
		class __40
		{
			gesture = "";
			speech[] = {"XMIT", "Waiting"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
		class __42
		{
			gesture = "";
			speech[] = {"XMIT", "StandingBy"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
		class __43
		{
			gesture = "";
			speech[] = {"XMIT", "AwaitingOrders"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentHealthUnconscious: CriticalReport
	{
		versions[] = {"__16", 1};
		class __16
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentHoldFire: UrgentCommand
	{
		versions[] = {"__1_1___Hold_fire_4", "Stealth", "__1_1___Hold_fire_5", "Combat", "__1_1___Hold_fire", "(1 - (Stealth))"};
		class __1_1___Hold_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HoldFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Normal";
		};
		class __1_1___Hold_fire_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HoldFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Stealth";
		};
		class __1_1___Hold_fire_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HoldFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Combat";
		};
	};
	class SentHoldFireInCombat: UrgentCommand
	{
		versions[] = {"__1_1___Hold_fire_2", "0.2*(1 - (Combat))", "__1_1___Hold_fire_3", "0.4*(1 - (Combat))", "__1_1___Hold_fire_7", "0.2*Combat", "__1_1___Hold_fire_8", "0.4*Combat", "__1_1___Hold_fire_6", "0.4*Combat", "__1_1___Hold_fire_1", "0.4*(1 - (Combat))"};
		class __1_1___Hold_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HoldFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Normal";
		};
		class __1_1___Hold_fire_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DoNotFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Normal";
		};
		class __1_1___Hold_fire_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CeaseFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Normal";
		};
		class __1_1___Hold_fire_6
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HoldFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Combat";
		};
		class __1_1___Hold_fire_7
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "DoNotFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Combat";
		};
		class __1_1___Hold_fire_8
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "HoldFire"};
			text = "%1.1 - Hold fire";
			textOrig = "%1.1 ? Hold fire";
			wordsClass = "Combat";
		};
	};
	class SentIncomingGrenade: Report
	{
		versions[] = {"Incoming_frag_1", "(1 - (Stealth))", "Incoming_frag_2", "(1 - (Stealth))", "Incoming_frag_3", "Stealth", "Incoming_frag_4", "Stealth", "Incoming_frag_5", "Stealth", "Incoming_frag", "(1 - (Stealth))"};
		class Incoming_frag
		{
			gesture = "";
			speech[] = {"XMIT", "IncomingGrenadeE_1"};
			text = "Incoming frag";
			textOrig = "Incoming frag";
			wordsClass = "Combat";
		};
		class Incoming_frag_1
		{
			gesture = "";
			speech[] = {"XMIT", "IncomingGrenadeE_2"};
			text = "Incoming frag";
			textOrig = "Incoming frag";
			wordsClass = "Combat";
		};
		class Incoming_frag_2
		{
			gesture = "";
			speech[] = {"XMIT", "IncomingGrenadeE_3"};
			text = "Incoming frag";
			textOrig = "Incoming frag";
			wordsClass = "Combat";
		};
		class Incoming_frag_3
		{
			gesture = "";
			speech[] = {"XMIT", "IncomingGrenadeE_1"};
			text = "Incoming frag";
			textOrig = "Incoming frag";
			wordsClass = "Stealth";
		};
		class Incoming_frag_4
		{
			gesture = "";
			speech[] = {"XMIT", "IncomingGrenadeE_2"};
			text = "Incoming frag";
			textOrig = "Incoming frag";
			wordsClass = "Stealth";
		};
		class Incoming_frag_5
		{
			gesture = "";
			speech[] = {"XMIT", "IncomingGrenadeE_3"};
			text = "Incoming frag";
			textOrig = "Incoming frag";
			wordsClass = "Stealth";
		};
	};
	class SentIsLeader: CriticalReport
	{
		sentences[] = {"SentIsLeaderStealth", "Stealth", "SentIsLeaderDefault", "(1 - (Stealth))"};
	};
	class SentIsLeaderDefault: CriticalReport
	{
		versions[] = {"__1___Taking_command_1", 0.5, "__1___Taking_command", 0.5};
		class __1___Taking_command
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "IAmTheNewActual"};
			text = "%1 - Taking command";
			textOrig = "%1 ? Taking command";
			wordsClass = "Normal";
		};
		class __1___Taking_command_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "TakingCommand"};
			text = "%1 - Taking command";
			textOrig = "%1 ? Taking command";
			wordsClass = "Normal";
		};
	};
	class SentIsLeaderStealth: CriticalReport
	{
		versions[] = {"__1___Taking_command_3", 0.5, "__1___Taking_command_2", 0.5};
		class __1___Taking_command_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "IAmTheNewActual"};
			text = "%1 - Taking command";
			textOrig = "%1 ? Taking command";
			wordsClass = "Stealth";
		};
		class __1___Taking_command_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "TakingCommand"};
			text = "%1 - Taking command";
			textOrig = "%1 ? Taking command";
			wordsClass = "Stealth";
		};
	};
	class SentJoinCompleted: JoinCompleted
	{
		versions[] = {"__36", "Stealth", "_", "(1 - (Stealth))"};
		class _
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __36
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentKeepFormation: NormalCommand
	{
		versions[] = {"__1_1___Disengage_1", "Stealth", "__1_1___Disengage_2", "Combat", "__1_1___Disengage", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Disengage
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Disengage"};
			text = "%1.1 - Disengage";
			textOrig = "%1.1 ? Disengage";
			wordsClass = "Normal";
		};
		class __1_1___Disengage_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Disengage"};
			text = "%1.1 - Disengage";
			textOrig = "%1.1 ? Disengage";
			wordsClass = "Stealth";
		};
		class __1_1___Disengage_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Disengage"};
			text = "%1.1 - Disengage";
			textOrig = "%1.1 ? Disengage";
			wordsClass = "Combat";
		};
	};
	class SentLightsOff: NormalCommand
	{
		versions[] = {"__1_1___Flashlights_off_1", "Stealth", "__1_1___Flashlights_off", "(1 - (Stealth))"};
		class __1_1___Flashlights_off
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlashlightsOff"};
			text = "%1.1 - Flashlights off";
			textOrig = "%1.1 ? Flashlights off";
			wordsClass = "Normal";
		};
		class __1_1___Flashlights_off_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlashlightsOff"};
			text = "%1.1 - Flashlights off";
			textOrig = "%1.1 ? Flashlights off";
			wordsClass = "Stealth";
		};
	};
	class SentLightsOn: NormalCommand
	{
		versions[] = {"__1_1___Flashlights_on_1", "Stealth", "__1_1___Flashlights_on", "(1 - (Stealth))"};
		class __1_1___Flashlights_on
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlashlightsOn"};
			text = "%1.1 - Flashlights on";
			textOrig = "%1.1 ? Flashlights on";
			wordsClass = "Normal";
		};
		class __1_1___Flashlights_on_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FlashlightsOn"};
			text = "%1.1 - Flashlights on";
			textOrig = "%1.1 ? Flashlights on";
			wordsClass = "Stealth";
		};
	};
	class SentLooseFormation: NormalCommand
	{
		sentences[] = {"SentLooseFormationDefault", "(1 - (Stealth))", "SentLooseFormationStealth", "Stealth"};
	};
	class SentLooseFormationDefault: NormalCommand
	{
		versions[] = {"__1_1___Free_to_engage_1", "(1 - (Combat))", "__1_1___Free_to_engage_4", "Combat", "__1_1___Free_to_engage_5", "Combat", "__1_1___Free_to_engage", "(1 - (Combat))"};
		class __1_1___Free_to_engage
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "EngageAtWill"};
			text = "%1.1 - Free to engage";
			textOrig = "%1.1 ? Free to engage";
			wordsClass = "Normal";
		};
		class __1_1___Free_to_engage_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FreeToEngage"};
			text = "%1.1 - Free to engage";
			textOrig = "%1.1 ? Free to engage";
			wordsClass = "Normal";
		};
		class __1_1___Free_to_engage_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "EngageAtWill"};
			text = "%1.1 - Free to engage";
			textOrig = "%1.1 ? Free to engage";
			wordsClass = "Combat";
		};
		class __1_1___Free_to_engage_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FreeToEngage"};
			text = "%1.1 - Free to engage";
			textOrig = "%1.1 ? Free to engage";
			wordsClass = "Combat";
		};
	};
	class SentLooseFormationStealth: NormalCommand
	{
		versions[] = {"__1_1___Free_to_engage_3", 0.5, "__1_1___Free_to_engage_2", 0.5};
		class __1_1___Free_to_engage_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "EngageAtWill"};
			text = "%1.1 - Free to engage";
			textOrig = "%1.1 ? Free to engage";
			wordsClass = "Stealth";
		};
		class __1_1___Free_to_engage_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FreeToEngage"};
			text = "%1.1 - Free to engage";
			textOrig = "%1.1 ? Free to engage";
			wordsClass = "Stealth";
		};
	};
	class SentNoTarget: UrgentCommand
	{
		sentences[] = {"SentNoTargetStealth", "Stealth", "SentNoTargetDefault", "(1 - (Stealth))"};
	};
	class SentNoTargetDefault: NormalCommand
	{
		versions[] = {"__1_1___Cancel_target", "(1 - (Combat))", "__1_1___No_target_1", "Combat", "__1_1___Cancel_target_1", "Combat", "__1_1___No_target", "(1 - (Combat))"};
		class __1_1___Cancel_target
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CancelTarget"};
			text = "%1.1 - Cancel target";
			textOrig = "%1.1 ? Cancel target";
			wordsClass = "Normal";
		};
		class __1_1___Cancel_target_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CancelTarget"};
			text = "%1.1 - Cancel target";
			textOrig = "%1.1 ? Cancel target";
			wordsClass = "Combat";
		};
		class __1_1___No_target
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "NoTarget"};
			text = "%1.1 - No target";
			textOrig = "%1.1 ? No target";
			wordsClass = "Normal";
		};
		class __1_1___No_target_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "NoTarget"};
			text = "%1.1 - No target";
			textOrig = "%1.1 ? No target";
			wordsClass = "Combat";
		};
	};
	class SentNoTargetStealth: NormalCommand
	{
		versions[] = {"__1_1___Cancel_target_2", 1, "__1_1___No_target_2", 1};
		class __1_1___Cancel_target_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CancelTarget"};
			text = "%1.1 - Cancel target";
			textOrig = "%1.1 ? Cancel target";
			wordsClass = "Stealth";
		};
		class __1_1___No_target_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "NoTarget"};
			text = "%1.1 - No target";
			textOrig = "%1.1 ? No target";
			wordsClass = "Stealth";
		};
	};
	class SentNotifyAttack: Notify
	{
		sentences[] = {"SentNotifyAttackStealth", "Stealth", "SentNotifyAttackDefault", "(1 - (Stealth))"};
	};
	class SentNotifyAttackDefault: Notify
	{
		versions[] = {"Engaging____2_1", "(1 - (Combat))", "Engaging____2_2", "(1 - (Combat))", "Engaging____2_3", "(1 - (Combat))", "Engaging____2_8", "Combat", "Engaging____2_9", "Combat", "Engaging____2_10", "Combat", "Engaging____2_11", "Combat", "Engaging____2", "(1 - (Combat))"};
		class Engaging____2
		{
			gesture = "";
			speech[] = {"XMIT", "CopyIAmOnHim"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Normal";
		};
		class Engaging____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "Engaging"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Normal";
		};
		class Engaging____2_10
		{
			gesture = "";
			speech[] = {"XMIT", "EngagingTarget"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Combat";
		};
		class Engaging____2_11
		{
			gesture = "";
			speech[] = {"XMIT", "Attacking"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Combat";
		};
		class Engaging____2_2
		{
			gesture = "";
			speech[] = {"XMIT", "EngagingTarget"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Normal";
		};
		class Engaging____2_3
		{
			gesture = "";
			speech[] = {"XMIT", "Attacking"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Normal";
		};
		class Engaging____2_8
		{
			gesture = "";
			speech[] = {"XMIT", "CopyIAmOnHim"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Combat";
		};
		class Engaging____2_9
		{
			gesture = "";
			speech[] = {"XMIT", "Engaging"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Combat";
		};
	};
	class SentNotifyAttackStealth: Notify
	{
		versions[] = {"Engaging____2_5", 0.25, "Engaging____2_6", 0.25, "Engaging____2_7", 0.25, "Engaging____2_4", 0.25};
		class Engaging____2_4
		{
			gesture = "";
			speech[] = {"XMIT", "CopyIAmOnHim"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Stealth";
		};
		class Engaging____2_5
		{
			gesture = "";
			speech[] = {"XMIT", "Engaging"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Stealth";
		};
		class Engaging____2_6
		{
			gesture = "";
			speech[] = {"XMIT", "EngagingTarget"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Stealth";
		};
		class Engaging____2_7
		{
			gesture = "";
			speech[] = {"XMIT", "Attacking"};
			text = "Engaging - %2";
			textOrig = "Engaging ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentNotifyAttackSubgroup: SentNotifyAttack
	{
		sentences[] = {"SentNotifyAttackSubgroupStealth", "Stealth", "SentNotifyAttackSubgroupDefault", "(1 - (Stealth))"};
	};
	class SentNotifyAttackSubgroupDefault: SentNotifyAttack
	{
		versions[] = {"__3_1___Engaging____2_1", "(1 - (Combat))", "__3_1___Engaging____2_4", "Combat", "__3_1___Engaging____2_5", "Combat", "__3_1___Engaging____2", "(1 - (Combat))"};
		class __3_1___Engaging____2
		{
			gesture = "";
			speech[] = {"XMIT", "Engaging"};
			text = "%3.1 - Engaging - %2";
			textOrig = "%3.1 ? Engaging ? %2";
			wordsClass = "Normal";
		};
		class __3_1___Engaging____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "EngagingTarget"};
			text = "%3.1 - Engaging - %2";
			textOrig = "%3.1 ? Engaging ? %2";
			wordsClass = "Normal";
		};
		class __3_1___Engaging____2_4
		{
			gesture = "";
			speech[] = {"XMIT", "Engaging"};
			text = "%3.1 - Engaging - %2";
			textOrig = "%3.1 ? Engaging ? %2";
			wordsClass = "Combat";
		};
		class __3_1___Engaging____2_5
		{
			gesture = "";
			speech[] = {"XMIT", "EngagingTarget"};
			text = "%3.1 - Engaging - %2";
			textOrig = "%3.1 ? Engaging ? %2";
			wordsClass = "Combat";
		};
	};
	class SentNotifyAttackSubgroupStealth: SentNotifyAttack
	{
		versions[] = {"__3_1___Engaging____2_3", 0.5, "__3_1___Engaging____2_2", 0.5};
		class __3_1___Engaging____2_2
		{
			gesture = "";
			speech[] = {"XMIT", "Engaging"};
			text = "%3.1 - Engaging - %2";
			textOrig = "%3.1 ? Engaging ? %2";
			wordsClass = "Stealth";
		};
		class __3_1___Engaging____2_3
		{
			gesture = "";
			speech[] = {"XMIT", "EngagingTarget"};
			text = "%3.1 - Engaging - %2";
			textOrig = "%3.1 ? Engaging ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentNotifySupport: Completition
	{
		versions[] = {"__1_1___Supporting_1", "Stealth", "__1_1___Supporting_2", "Combat", "__1_1___Supporting", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Supporting
		{
			gesture = "";
			speech[] = {"XMIT", "Supporting"};
			text = "%1.1 - Supporting";
			textOrig = "%1.1 ? Supporting";
			wordsClass = "Normal";
		};
		class __1_1___Supporting_1
		{
			gesture = "";
			speech[] = {"XMIT", "Supporting"};
			text = "%1.1 - Supporting";
			textOrig = "%1.1 ? Supporting";
			wordsClass = "Stealth";
		};
		class __1_1___Supporting_2
		{
			gesture = "";
			speech[] = {"XMIT", "Supporting"};
			text = "%1.1 - Supporting";
			textOrig = "%1.1 ? Supporting";
			wordsClass = "Combat";
		};
	};
	class SentNotifySuppress: NormalCommand
	{
		versions[] = {};
	};
	class SentObjectDestroyed: Completition
	{
		sentences[] = {"SentObjectDestroyedStealth", "Stealth", "SentObjectDestroyedDefault", "(1 - (Stealth))"};
	};
	class SentObjectDestroyedDefault: Completition
	{
		versions[] = {"__2___Neutralized_15", "Combat", "__2___Neutralized_5", "(1 - (Combat))", "__2___Neutralized_2", "(1 - (Combat))", "__2___Neutralized", "(1 - (Combat))", "__2___Neutralized_3", "(1 - (Combat))", "__2___Neutralized_4", "(1 - (Combat))", "__2___Neutralized_6", "(1 - (Combat))", "__2___Neutralized_1", "(1 - (Combat))", "__2___Neutralized_19", "Combat", "__2___Neutralized_16", "Combat", "__2___Neutralized_14", "Combat", "__2___Neutralized_17", "Combat", "__2___Neutralized_18", "Combat", "__2___Neutralized_20", "Combat"};
		class __2___Neutralized
		{
			gesture = "";
			speech[] = {"XMIT", "ScratchOne"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Normal";
		};
		class __2___Neutralized_1
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsDown"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Normal";
		};
		class __2___Neutralized_14
		{
			gesture = "";
			speech[] = {"XMIT", "ScratchOne"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Combat";
		};
		class __2___Neutralized_15
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsDown"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Combat";
		};
		class __2___Neutralized_16
		{
			gesture = "";
			speech[] = {"XMIT", "TargetEliminated"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Combat";
		};
		class __2___Neutralized_17
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsDown"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Combat";
		};
		class __2___Neutralized_18
		{
			gesture = "";
			speech[] = {"XMIT", "IVeGotHim"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Combat";
		};
		class __2___Neutralized_19
		{
			gesture = "";
			speech[] = {"XMIT", "HostileDown"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Combat";
		};
		class __2___Neutralized_2
		{
			gesture = "";
			speech[] = {"XMIT", "TargetEliminated"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Normal";
		};
		class __2___Neutralized_20
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsNeutralized"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Combat";
		};
		class __2___Neutralized_3
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsDown"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Normal";
		};
		class __2___Neutralized_4
		{
			gesture = "";
			speech[] = {"XMIT", "IVeGotHim"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Normal";
		};
		class __2___Neutralized_5
		{
			gesture = "";
			speech[] = {"XMIT", "HostileDown"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Normal";
		};
		class __2___Neutralized_6
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsNeutralized"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Normal";
		};
	};
	class SentObjectDestroyedStealth: Completition
	{
		versions[] = {"__2___Neutralized_12", 0.14, "__2___Neutralized_9", 0.14, "__2___Neutralized_7", 0.14, "__2___Neutralized_10", 0.14, "__2___Neutralized_11", 0.14, "__2___Neutralized_13", 0.14, "__2___Neutralized_8", 0.14};
		class __2___Neutralized_10
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsDown"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Stealth";
		};
		class __2___Neutralized_11
		{
			gesture = "";
			speech[] = {"XMIT", "IVeGotHim"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Stealth";
		};
		class __2___Neutralized_12
		{
			gesture = "";
			speech[] = {"XMIT", "HostileDown"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Stealth";
		};
		class __2___Neutralized_13
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsNeutralized"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Stealth";
		};
		class __2___Neutralized_7
		{
			gesture = "";
			speech[] = {"XMIT", "ScratchOne"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Stealth";
		};
		class __2___Neutralized_8
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsDown"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Stealth";
		};
		class __2___Neutralized_9
		{
			gesture = "";
			speech[] = {"XMIT", "TargetEliminated"};
			text = "%2 - Neutralized";
			textOrig = "%2 ? Neutralized";
			wordsClass = "Stealth";
		};
	};
	class SentObjectDestroyedUnknown: Completition
	{
		sentences[] = {"SentObjectDestroyedUnknownStealth", "Stealth", "SentObjectDestroyedUnknownDefault", "(1 - (Stealth))"};
	};
	class SentObjectDestroyedUnknownDefault: Completition
	{
		versions[] = {"Target_neutralized_19", "Combat", "Target_neutralized_2", "(1 - (Combat))", "Target_neutralized_1", "(1 - (Combat))", "Target_neutralized_3", "(1 - (Combat))", "Target_neutralized_4", "(1 - (Combat))", "Target_neutralized", "(1 - (Combat))", "Target_neutralized_5", "(1 - (Combat))", "Target_neutralized_6", "(1 - (Combat))", "Target_neutralized_15", "Combat", "Target_neutralized_14", "Combat", "Target_neutralized_16", "Combat", "Target_neutralized_17", "Combat", "Target_neutralized_13", "Combat", "Target_neutralized_18", "Combat"};
		class Target_neutralized
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsDown"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Normal";
		};
		class Target_neutralized_1
		{
			gesture = "";
			speech[] = {"XMIT", "ScratchOne"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Normal";
		};
		class Target_neutralized_13
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsDown"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Combat";
		};
		class Target_neutralized_14
		{
			gesture = "";
			speech[] = {"XMIT", "ScratchOne"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Combat";
		};
		class Target_neutralized_15
		{
			gesture = "";
			speech[] = {"XMIT", "TargetEliminated"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Combat";
		};
		class Target_neutralized_16
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsDown"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Combat";
		};
		class Target_neutralized_17
		{
			gesture = "";
			speech[] = {"XMIT", "IVeGotHim"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Combat";
		};
		class Target_neutralized_18
		{
			gesture = "";
			speech[] = {"XMIT", "HostileDown"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Combat";
		};
		class Target_neutralized_19
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsNeutralized"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Combat";
		};
		class Target_neutralized_2
		{
			gesture = "";
			speech[] = {"XMIT", "TargetEliminated"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Normal";
		};
		class Target_neutralized_3
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsDown"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Normal";
		};
		class Target_neutralized_4
		{
			gesture = "";
			speech[] = {"XMIT", "IVeGotHim"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Normal";
		};
		class Target_neutralized_5
		{
			gesture = "";
			speech[] = {"XMIT", "HostileDown"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Normal";
		};
		class Target_neutralized_6
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsNeutralized"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Normal";
		};
	};
	class SentObjectDestroyedUnknownStealth: Completition
	{
		versions[] = {"Target_neutralized_8", 0.14, "Target_neutralized_7", 0.14, "Target_neutralized_9", 0.14, "Target_neutralized_10", 0.14, "Target_eliminated", 0.14, "Target_neutralized_11", 0.14, "Target_neutralized_12", 0.14};
		class Target_eliminated
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsDown"};
			text = "Target eliminated";
			textOrig = "Target eliminated";
			wordsClass = "Stealth";
		};
		class Target_neutralized_10
		{
			gesture = "";
			speech[] = {"XMIT", "IVeGotHim"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Stealth";
		};
		class Target_neutralized_11
		{
			gesture = "";
			speech[] = {"XMIT", "HostileDown"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Stealth";
		};
		class Target_neutralized_12
		{
			gesture = "";
			speech[] = {"XMIT", "TargetIsNeutralized"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Stealth";
		};
		class Target_neutralized_7
		{
			gesture = "";
			speech[] = {"XMIT", "ScratchOne"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Stealth";
		};
		class Target_neutralized_8
		{
			gesture = "";
			speech[] = {"XMIT", "TargetEliminated"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Stealth";
		};
		class Target_neutralized_9
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsDown"};
			text = "Target neutralized";
			textOrig = "Target neutralized";
			wordsClass = "Stealth";
		};
	};
	class SentObjectUnconscious: Completition
	{
		versions[] = {"__14", 1};
		class __14
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentObjectUnconsciousUnknown: Completition
	{
		versions[] = {"__15", 1};
		class __15
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentOpenFire: NormalCommand
	{
		sentences[] = {"SentOpenFireStealth", "Stealth", "SentOpenFireDefault", "(1 - (Stealth))"};
	};
	class SentOpenFireDefault: NormalCommand
	{
		versions[] = {"__1_1___Open_fire_1", "(1 - (Combat))", "__1_1___Open_fire_6", "Combat", "__1_1___Open_fire_7", "Combat", "__1_1___Open_fire", "(1 - (Combat))"};
		class __1_1___Open_fire
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FireAtWill"};
			text = "%1.1 - Open fire";
			textOrig = "%1.1 ? Open fire";
			wordsClass = "Normal";
		};
		class __1_1___Open_fire_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "WeaponsFree"};
			text = "%1.1 - Open fire";
			textOrig = "%1.1 ? Open fire";
			wordsClass = "Normal";
		};
		class __1_1___Open_fire_6
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FireAtWill"};
			text = "%1.1 - Open fire";
			textOrig = "%1.1 ? Open fire";
			wordsClass = "Combat";
		};
		class __1_1___Open_fire_7
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "WeaponsFree"};
			text = "%1.1 - Open fire";
			textOrig = "%1.1 ? Open fire";
			wordsClass = "Combat";
		};
	};
	class SentOpenFireInCombat: NormalCommand
	{
		versions[] = {"__1_1___Open_fire_5", "Combat", "__1_1___Open_fire_2", "(1 - (Combat))"};
		class __1_1___Open_fire_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CombatOpenFire"};
			text = "%1.1 - Open fire";
			textOrig = "%1.1 ? Open fire";
			wordsClass = "Normal";
		};
		class __1_1___Open_fire_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CombatOpenFire"};
			text = "%1.1 - Open fire";
			textOrig = "%1.1 ? Open fire";
			wordsClass = "Combat";
		};
	};
	class SentOpenFireStealth: NormalCommand
	{
		versions[] = {"__1_1___Open_fire_4", 0.5, "__1_1___Open_fire_3", 0.5};
		class __1_1___Open_fire_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "FireAtWill"};
			text = "%1.1 - Open fire";
			textOrig = "%1.1 ? Open fire";
			wordsClass = "Stealth";
		};
		class __1_1___Open_fire_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "WeaponsFree"};
			text = "%1.1 - Open fire";
			textOrig = "%1.1 ? Open fire";
			wordsClass = "Stealth";
		};
	};
	class SentOutOfFirstAidKits: Report
	{
		versions[] = {"No_FAKs_1", "Stealth", "No_FAKs", "(1 - (Stealth))"};
		class No_FAKs
		{
			gesture = "";
			speech[] = {"XMIT", "OutOfFirstAidKits"};
			text = "No FAKs";
			textOrig = "No FAKs";
			wordsClass = "Normal";
		};
		class No_FAKs_1
		{
			gesture = "";
			speech[] = {"XMIT", "OutOfFirstAidKits"};
			text = "No FAKs";
			textOrig = "No FAKs";
			wordsClass = "Stealth";
		};
	};
	class SentPointersOff: NormalCommand
	{
		versions[] = {"__1_1___Pointers_off_1", "Stealth", "__1_1___Pointers_off", "(1 - (Stealth))"};
		class __1_1___Pointers_off
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PointersOff"};
			text = "%1.1 - Pointers off";
			textOrig = "%1.1 ? Pointers off";
			wordsClass = "Normal";
		};
		class __1_1___Pointers_off_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PointersOff"};
			text = "%1.1 - Pointers off";
			textOrig = "%1.1 ? Pointers off";
			wordsClass = "Stealth";
		};
	};
	class SentPointersOn: NormalCommand
	{
		versions[] = {"__1_1___Pointers_on_1", "Stealth", "__1_1___Pointers_on", "(1 - (Stealth))"};
		class __1_1___Pointers_on
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PointersOn"};
			text = "%1.1 - Pointers on";
			textOrig = "%1.1 ? Pointers on";
			wordsClass = "Normal";
		};
		class __1_1___Pointers_on_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "PointersOn"};
			text = "%1.1 - Pointers on";
			textOrig = "%1.1 ? Pointers on";
			wordsClass = "Stealth";
		};
	};
	class SentReloading: CombatShout
	{
		versions[] = {"__34", 0.7, "__47", "0.7*Stealth", "__27", "0.3*(1 - (Stealth))"};
		class __27
		{
			gesture = "";
			speech[] = {"XMIT", "ReloadingE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __34
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __47
		{
			gesture = "";
			speech[] = {"XMIT", "ReloadingE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentRepairThat: UrgentCommand
	{
		versions[] = {"__1___Repair____2_1", "Stealth", "__1___Repair____2", "(1 - (Stealth))"};
		class __1___Repair____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "RepairThatVehicle"};
			text = "%1 - Repair - %2";
			textOrig = "%1 ? Repair ? %2";
			wordsClass = "Normal";
		};
		class __1___Repair____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "RepairThatVehicle"};
			text = "%1 - Repair - %2";
			textOrig = "%1 ? Repair ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentRepeatCommand: NormalCommand
	{
		sentences[] = {"SentRepeatCommandStealth", "Stealth", "SentRepeatCommandDefault", "(1 - (Stealth))"};
	};
	class SentRepeatCommandDefault: NormalCommand
	{
		versions[] = {"Repeat_command_1", 0.5, "Repeat_command", 0.5};
		class Repeat_command
		{
			gesture = "";
			speech[] = {"XMIT", "SayAgainOver"};
			text = "Repeat command";
			textOrig = "Repeat command";
			wordsClass = "Normal";
		};
		class Repeat_command_1
		{
			gesture = "";
			speech[] = {"XMIT", "RepeatLastOver"};
			text = "Repeat command";
			textOrig = "Repeat command";
			wordsClass = "Normal";
		};
	};
	class SentRepeatCommandStealth: NormalCommand
	{
		versions[] = {"Repeat_command_3", 0.5, "Repeat_command_2", 0.5};
		class Repeat_command_2
		{
			gesture = "";
			speech[] = {"XMIT", "SayAgainOver"};
			text = "Repeat command";
			textOrig = "Repeat command";
			wordsClass = "Stealth";
		};
		class Repeat_command_3
		{
			gesture = "";
			speech[] = {"XMIT", "RepeatLastOver"};
			text = "Repeat command";
			textOrig = "Repeat command";
			wordsClass = "Stealth";
		};
	};
	class SentReportPosition: Report
	{
		versions[] = {"Grid___2_1", "Stealth", "Grid___2_2", "Combat", "Grid___2", "(1 - (Stealth))*(1 - (Combat))"};
		class Grid___2
		{
			gesture = "";
			speech[] = {"XMIT", "%2"};
			text = "Grid: %2";
			textOrig = "Grid: %2";
			wordsClass = "Normal";
		};
		class Grid___2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%2"};
			text = "Grid: %2";
			textOrig = "Grid: %2";
			wordsClass = "Stealth";
		};
		class Grid___2_2
		{
			gesture = "";
			speech[] = {"XMIT", "%2"};
			text = "Grid: %2";
			textOrig = "Grid: %2";
			wordsClass = "Combat";
		};
	};
	class SentReportStatus: NormalCommand
	{
		sentences[] = {"SentReportStatusStealth", "Stealth", "SentReportStatusDefault", "(1 - (Stealth))"};
	};
	class SentReportStatusDefault: NormalCommand
	{
		versions[] = {"__1_1___SITREP_1", 0.5, "__1_1___SITREP", 0.5};
		class __1_1___SITREP
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Sitrep"};
			text = "%1.1 - SITREP";
			textOrig = "%1.1 ? SITREP";
			wordsClass = "Normal";
		};
		class __1_1___SITREP_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "ReportIn"};
			text = "%1.1 - SITREP";
			textOrig = "%1.1 ? SITREP";
			wordsClass = "Normal";
		};
	};
	class SentReportStatusStealth: NormalCommand
	{
		versions[] = {"__1_1___SITREP_3", 0.5, "__1_1___SITREP_2", 0.5};
		class __1_1___SITREP_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "Sitrep"};
			text = "%1.1 - SITREP";
			textOrig = "%1.1 ? SITREP";
			wordsClass = "Stealth";
		};
		class __1_1___SITREP_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "ReportIn"};
			text = "%1.1 - SITREP";
			textOrig = "%1.1 ? SITREP";
			wordsClass = "Stealth";
		};
	};
	class SentRequestAccomplishedSGArty: NormalCommand
	{
		versions[] = {"Splash__Out_", 1};
		class Splash__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAccomplishedSGArty"};
			text = "Splash. Out.";
			textOrig = "Splash. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAccomplishedSGCASBombing: NormalCommand
	{
		versions[] = {"Payload_delivered__We_re_RTB__Out_", 1};
		class Payload_delivered__We_re_RTB__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAccomplishedSGCASBombing"};
			text = "Payload delivered, We're RTB. Out.";
			textOrig = "Payload delivered, We're RTB. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAccomplishedSGCASHelicopter: NormalCommand
	{
		versions[] = {"CAS_mission_complete__RTB__Out_", 1};
		class CAS_mission_complete__RTB__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAccomplishedSGCASHelicopter"};
			text = "CAS mission complete. RTB. Out.";
			textOrig = "CAS mission complete. RTB. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAccomplishedSGSupplyDrop: NormalCommand
	{
		versions[] = {"The_supplies_have_been_dropped__Out_", 1};
		class The_supplies_have_been_dropped__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAccomplishedSGSupplyDrop"};
			text = "The supplies have been dropped. Out.";
			textOrig = "The supplies have been dropped. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAccomplishedSGTransport: NormalCommand
	{
		versions[] = {"We_re_here__good_luck_out_there_", 1};
		class We_re_here__good_luck_out_there_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAccomplishedSGTransport"};
			text = "We're here, good luck out there.";
			textOrig = "We're here, good luck out there.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAccomplishedSGUAV: NormalCommand
	{
		versions[] = {"Drone_is_bingo_fuel_and_RTB__Out_", 1};
		class Drone_is_bingo_fuel_and_RTB__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAccomplishedSGUAV"};
			text = "Drone is bingo fuel and RTB. Out.";
			textOrig = "Drone is bingo fuel and RTB. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAcknowledgedSGArty: NormalCommand
	{
		versions[] = {"Target_location_received__ordnance_is_inbound__Out_", 1};
		class Target_location_received__ordnance_is_inbound__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedSGArty"};
			text = "Target location received, ordnance is inbound. Out.";
			textOrig = "Target location received, ordnance is inbound. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAcknowledgedSGCASBombing: NormalCommand
	{
		versions[] = {"Copy_that__strike_aircraft_on_the_way__Out_", 1};
		class Copy_that__strike_aircraft_on_the_way__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedSGCASBombing"};
			text = "Copy that, strike aircraft on the way. Out.";
			textOrig = "Copy that, strike aircraft on the way. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAcknowledgedSGCASHelicopter: NormalCommand
	{
		versions[] = {"Roger__coordinates_received__CAS_is_inbound__Out_", 1};
		class Roger__coordinates_received__CAS_is_inbound__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedSGCASHelicopter"};
			text = "Roger, coordinates received, CAS is inbound. Out.";
			textOrig = "Roger, coordinates received, CAS is inbound. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAcknowledgedSGSupplyDrop: NormalCommand
	{
		versions[] = {"Affirmative__supplies_en_route__Out_", 1};
		class Affirmative__supplies_en_route__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedSGSupplyDrop"};
			text = "Affirmative, supplies en route. Out.";
			textOrig = "Affirmative, supplies en route. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAcknowledgedSGUAV: NormalCommand
	{
		versions[] = {"Acknowledged__dispatching_drone_to_the_designated_coordinates__Out_", 1};
		class Acknowledged__dispatching_drone_to_the_designated_coordinates__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedSGUAV"};
			text = "Acknowledged, dispatching drone to the designated coordinates. Out.";
			textOrig = "Acknowledged, dispatching drone to the designated coordinates. Out.";
			wordsClass = "Normal";
		};
	};
	class SentRequestAcknowledgedTransport: NormalCommand
	{
		versions[] = {"Roger__transport_dispatched_", 1};
		class Roger__transport_dispatched_
		{
			gesture = "";
			speech[] = {"XMIT", "RequestAcknowledgedTransport"};
			text = "Roger, transport dispatched.";
			textOrig = "Roger, transport dispatched.";
			wordsClass = "Normal";
		};
	};
	class SentReturnToFormation: NormalCommand
	{
		sentences[] = {"SentReturnToFormationStealth", "Stealth", "SentReturnToFormationDefault", "(1 - (Stealth))"};
	};
	class SentReturnToFormationDefault: NormalCommand
	{
		versions[] = {"__1___Regroup_10", "Combat", "__1___Regroup_1", "(1 - (Combat))", "__1___Regroup_2", "(1 - (Combat))", "__1___Regroup_3", "(1 - (Combat))", "__1___Regroup_8", "(1 - (Combat))", "__1___Regroup", "(1 - (Combat))", "__1___Regroup_11", "Combat", "__1___Regroup_12", "Combat", "__1___Regroup_13", "Combat", "__1___Regroup_14", "Combat"};
		class __1___Regroup
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "FallBack"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Normal";
		};
		class __1___Regroup_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "ReturnToFormation"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Normal";
		};
		class __1___Regroup_10
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "FallBack"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Combat";
		};
		class __1___Regroup_11
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "ReturnToFormation"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Combat";
		};
		class __1___Regroup_12
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "FormOnMe"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Combat";
		};
		class __1___Regroup_13
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Regroup"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Combat";
		};
		class __1___Regroup_14
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "RallyUp"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Combat";
		};
		class __1___Regroup_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "FormOnMe"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Normal";
		};
		class __1___Regroup_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Regroup"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Normal";
		};
		class __1___Regroup_8
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "RallyUp"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Normal";
		};
	};
	class SentReturnToFormationStealth: NormalCommand
	{
		versions[] = {"__1___Regroup_5", 0.2, "__1___Regroup_6", 0.2, "__1___Regroup_7", 0.2, "__1___Regroup_9", 0.2, "__1___Regroup_4", 0.2};
		class __1___Regroup_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "FallBack"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Stealth";
		};
		class __1___Regroup_5
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "ReturnToFormation"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Stealth";
		};
		class __1___Regroup_6
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "FormOnMe"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Stealth";
		};
		class __1___Regroup_7
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Regroup"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Stealth";
		};
		class __1___Regroup_9
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "RallyUp"};
			text = "%1 - Regroup";
			textOrig = "%1 ? Regroup";
			wordsClass = "Stealth";
		};
	};
	class SentRouted: CombatShout
	{
		versions[] = {"__53", "Stealth", "__33", "(1 - (Stealth))"};
		class __33
		{
			gesture = "";
			speech[] = {"XMIT", "EndangeredE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __53
		{
			gesture = "";
			speech[] = {"XMIT", "EndangeredE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentScreaming: CombatShout
	{
		versions[] = {"__49", "Stealth", "__29", "(1 - (Stealth))"};
		class __29
		{
			gesture = "";
			speech[] = {"XMIT", "ScreamingE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __49
		{
			gesture = "";
			speech[] = {"XMIT", "ScreamingE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentSupportAddedDuringMission: NormalCommand
	{
		versions[] = {"Be_advised__support_units_are_now_on_standby__Out_", 1};
		class Be_advised__support_units_are_now_on_standby__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "SupportAddedDuringMission"};
			text = "Be advised, support units are now on standby. Out.";
			textOrig = "Be advised, support units are now on standby. Out.";
			wordsClass = "Normal";
		};
	};
	class SentSupportAskHeal: NormalCommand
	{
		versions[] = {"Requesting_support___Grid___1_1", "Stealth", "Requesting_support___Grid___1", "(1 - (Stealth))"};
		class Requesting_support___Grid___1
		{
			gesture = "";
			speech[] = {"XMIT", "RequestingSupport", "%1"};
			text = "Requesting support - Grid: %1";
			textOrig = "Requesting support ? Grid: %1";
			wordsClass = "Normal";
		};
		class Requesting_support___Grid___1_1
		{
			gesture = "";
			speech[] = {"XMIT", "RequestingSupport", "%1"};
			text = "Requesting support - Grid: %1";
			textOrig = "Requesting support ? Grid: %1";
			wordsClass = "Stealth";
		};
	};
	class SentSupportAskRearm: NormalCommand
	{
		versions[] = {"Requesting_support___Grid___1_1", "Stealth", "Requesting_support___Grid___1", "(1 - (Stealth))"};
		class Requesting_support___Grid___1
		{
			gesture = "";
			speech[] = {"XMIT", "RequestingSupport", "%1"};
			text = "Requesting support - Grid: %1";
			textOrig = "Requesting support ? Grid: %1";
			wordsClass = "Normal";
		};
		class Requesting_support___Grid___1_1
		{
			gesture = "";
			speech[] = {"XMIT", "RequestingSupport", "%1"};
			text = "Requesting support - Grid: %1";
			textOrig = "Requesting support ? Grid: %1";
			wordsClass = "Stealth";
		};
	};
	class SentSupportAskRefuel: NormalCommand
	{
		versions[] = {"Requesting_support___Grid___1_1", "Stealth", "Requesting_support___Grid___1", "(1 - (Stealth))"};
		class Requesting_support___Grid___1
		{
			gesture = "";
			speech[] = {"XMIT", "RequestingSupport", "%1"};
			text = "Requesting support - Grid: %1";
			textOrig = "Requesting support ? Grid: %1";
			wordsClass = "Normal";
		};
		class Requesting_support___Grid___1_1
		{
			gesture = "";
			speech[] = {"XMIT", "RequestingSupport", "%1"};
			text = "Requesting support - Grid: %1";
			textOrig = "Requesting support ? Grid: %1";
			wordsClass = "Stealth";
		};
	};
	class SentSupportAskRepair: NormalCommand
	{
		versions[] = {"Requesting_support___Grid___1_1", "Stealth", "Requesting_support___Grid___1", "(1 - (Stealth))"};
		class Requesting_support___Grid___1
		{
			gesture = "";
			speech[] = {"XMIT", "RequestingSupport", "%1"};
			text = "Requesting support - Grid: %1";
			textOrig = "Requesting support ? Grid: %1";
			wordsClass = "Normal";
		};
		class Requesting_support___Grid___1_1
		{
			gesture = "";
			speech[] = {"XMIT", "RequestingSupport", "%1"};
			text = "Requesting support - Grid: %1";
			textOrig = "Requesting support ? Grid: %1";
			wordsClass = "Stealth";
		};
	};
	class SentSupportConfirm: NormalCommand
	{
		sentences[] = {"SentSupportConfirmStealth", "Stealth", "SentSupportConfirmDefault", "(1 - (Stealth))"};
	};
	class SentSupportConfirmDefault: NormalCommand
	{
		versions[] = {"Support_confirmed_1", "(1 - (Combat))", "Support_confirmed_2", "(1 - (Combat))", "Support_confirmed_6", "Combat", "Support_confirmed_7", "Combat", "Support_confirmed_8", "Combat", "Support_confirmed", "(1 - (Combat))"};
		class Support_confirmed
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Support confirmed";
			textOrig = "Support confirmed";
			wordsClass = "Normal";
		};
		class Support_confirmed_1
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Support confirmed";
			textOrig = "Support confirmed";
			wordsClass = "Normal";
		};
		class Support_confirmed_2
		{
			gesture = "";
			speech[] = {"XMIT", "OnTheMove"};
			text = "Support confirmed";
			textOrig = "Support confirmed";
			wordsClass = "Normal";
		};
		class Support_confirmed_6
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Support confirmed";
			textOrig = "Support confirmed";
			wordsClass = "Combat";
		};
		class Support_confirmed_7
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Support confirmed";
			textOrig = "Support confirmed";
			wordsClass = "Combat";
		};
		class Support_confirmed_8
		{
			gesture = "";
			speech[] = {"XMIT", "OnTheMove"};
			text = "Support confirmed";
			textOrig = "Support confirmed";
			wordsClass = "Combat";
		};
	};
	class SentSupportConfirmStealth: NormalCommand
	{
		versions[] = {"Support_confirmed_4", 0.33, "Support_confirmed_5", 0.33, "Support_confirmed_3", 0.33};
		class Support_confirmed_3
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation1"};
			text = "Support confirmed";
			textOrig = "Support confirmed";
			wordsClass = "Stealth";
		};
		class Support_confirmed_4
		{
			gesture = "";
			speech[] = {"XMIT", "Confirmation2"};
			text = "Support confirmed";
			textOrig = "Support confirmed";
			wordsClass = "Stealth";
		};
		class Support_confirmed_5
		{
			gesture = "";
			speech[] = {"XMIT", "OnTheMove"};
			text = "Support confirmed";
			textOrig = "Support confirmed";
			wordsClass = "Stealth";
		};
	};
	class SentSupportDone: NormalCommand
	{
		versions[] = {"__35", "Stealth", "__10", "(1 - (Stealth))"};
		class __10
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __35
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentSupportNotAvailable: NormalCommand
	{
		versions[] = {"Negative_8", "Stealth", "Negative_5", "(1 - (Stealth))"};
		class Negative_5
		{
			gesture = "";
			speech[] = {"XMIT", "Negative"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Normal";
		};
		class Negative_8
		{
			gesture = "";
			speech[] = {"XMIT", "Negative"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Stealth";
		};
	};
	class SentSupportReady: NormalCommand
	{
		versions[] = {"__35", "Stealth", "__10", "(1 - (Stealth))"};
		class __10
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __35
		{
			gesture = "";
			speech[] = {"XMIT", "Ready"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentSupportRequestRGArty: NormalCommand
	{
		versions[] = {"Requesting_immediate_fire_support_at_the_designated_coordinates__Over__1", "Stealth", "Requesting_immediate_fire_support_at_the_designated_coordinates__Over_", "(1 - (Stealth))"};
		class Requesting_immediate_fire_support_at_the_designated_coordinates__Over_
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGArty"};
			text = "Requesting immediate fire support at the designated coordinates. Over.";
			textOrig = "Requesting immediate fire support at the designated coordinates. Over.";
			wordsClass = "Normal";
		};
		class Requesting_immediate_fire_support_at_the_designated_coordinates__Over__1
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGArty"};
			text = "Requesting immediate fire support at the designated coordinates. Over.";
			textOrig = "Requesting immediate fire support at the designated coordinates. Over.";
			wordsClass = "Stealth";
		};
	};
	class SentSupportRequestRGCASBombing: NormalCommand
	{
		versions[] = {"Requesting_immediate_airstrike_at_the_transmitted_coordinates__Over__1", "Stealth", "Requesting_immediate_airstrike_at_the_transmitted_coordinates__Over_", "(1 - (Stealth))"};
		class Requesting_immediate_airstrike_at_the_transmitted_coordinates__Over_
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGCASBombing"};
			text = "Requesting immediate airstrike at the transmitted coordinates. Over.";
			textOrig = "Requesting immediate airstrike at the transmitted coordinates. Over.";
			wordsClass = "Normal";
		};
		class Requesting_immediate_airstrike_at_the_transmitted_coordinates__Over__1
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGCASBombing"};
			text = "Requesting immediate airstrike at the transmitted coordinates. Over.";
			textOrig = "Requesting immediate airstrike at the transmitted coordinates. Over.";
			wordsClass = "Stealth";
		};
	};
	class SentSupportRequestRGCASHelicopter: NormalCommand
	{
		versions[] = {"Requesting_close_air_support_at_the_designated_location__Over__1", "Stealth", "Requesting_close_air_support_at_the_designated_location__Over_", "(1 - (Stealth))"};
		class Requesting_close_air_support_at_the_designated_location__Over_
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGCASHelicopter"};
			text = "Requesting close air support at the designated location. Over.";
			textOrig = "Requesting close air support at the designated location. Over.";
			wordsClass = "Normal";
		};
		class Requesting_close_air_support_at_the_designated_location__Over__1
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGCASHelicopter"};
			text = "Requesting close air support at the designated location. Over.";
			textOrig = "Requesting close air support at the designated location. Over.";
			wordsClass = "Stealth";
		};
	};
	class SentSupportRequestRGSupplyDrop: NormalCommand
	{
		versions[] = {"Requesting_supply_drop_at_the_transmitted_coordinates__Over__1", "Stealth", "Requesting_supply_drop_at_the_transmitted_coordinates__Over_", "(1 - (Stealth))"};
		class Requesting_supply_drop_at_the_transmitted_coordinates__Over_
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGSupplyDrop"};
			text = "Requesting supply drop at the transmitted coordinates. Over.";
			textOrig = "Requesting supply drop at the transmitted coordinates. Over.";
			wordsClass = "Normal";
		};
		class Requesting_supply_drop_at_the_transmitted_coordinates__Over__1
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGSupplyDrop"};
			text = "Requesting supply drop at the transmitted coordinates. Over.";
			textOrig = "Requesting supply drop at the transmitted coordinates. Over.";
			wordsClass = "Stealth";
		};
	};
	class SentSupportRequestRGTransport: NormalCommand
	{
		versions[] = {"Requesting_airlift_at_the_designated_coordinates__Over__1", "Stealth", "Requesting_airlift_at_the_designated_coordinates__Over_", "(1 - (Stealth))"};
		class Requesting_airlift_at_the_designated_coordinates__Over_
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGTransport"};
			text = "Requesting airlift at the designated coordinates. Over.";
			textOrig = "Requesting airlift at the designated coordinates. Over.";
			wordsClass = "Normal";
		};
		class Requesting_airlift_at_the_designated_coordinates__Over__1
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGTransport"};
			text = "Requesting airlift at the designated coordinates. Over.";
			textOrig = "Requesting airlift at the designated coordinates. Over.";
			wordsClass = "Stealth";
		};
	};
	class SentSupportRequestRGUAV: NormalCommand
	{
		versions[] = {"Requesting_aerial_recon_at_the_transmitted_location__Over__1", "Stealth", "Requesting_aerial_recon_at_the_transmitted_location__Over_", "(1 - (Stealth))"};
		class Requesting_aerial_recon_at_the_transmitted_location__Over_
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGUAV"};
			text = "Requesting aerial recon at the transmitted location. Over.";
			textOrig = "Requesting aerial recon at the transmitted location. Over.";
			wordsClass = "Normal";
		};
		class Requesting_aerial_recon_at_the_transmitted_location__Over__1
		{
			gesture = "";
			speech[] = {"XMIT", "SupportRequestRGUAV"};
			text = "Requesting aerial recon at the transmitted location. Over.";
			textOrig = "Requesting aerial recon at the transmitted location. Over.";
			wordsClass = "Stealth";
		};
	};
	class SentSuppressing: CombatShout
	{
		versions[] = {"__26", 0.6, "__46", "0.8*Stealth", "__25", "0.4*(1 - (Stealth))"};
		class __25
		{
			gesture = "";
			speech[] = {"XMIT", "SuppressingE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __26
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
		class __46
		{
			gesture = "";
			speech[] = {"XMIT", "SuppressingE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentTarget
	{
		sentences[] = {"SentTargetDefault", "(1 - (Stealth))", "SentTargetStealth", "Stealth"};
	};
	class SentTargetDefault: UrgentCommand
	{
		versions[] = {"__1___Engage_____2____6_6", "0.1*Combat*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage_____2____6_3", "0.2*Combat*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage_____2_1", "0.5*Combat*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage_____2____6_3_1", "0.4*Combat*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Engage____2____6_CMPS_3", "Combat*((DistanceToGroup - 250) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "__1___Engage_____2___Grid___4_2", "Combat*((DistanceToGroup - 1050) min 1 max 0)", "__1___Engage_____2____6_4", "0.3*Combat*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Engage____2____6_CMPS", "0.5*Combat*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Target_____2", "0.5*(1 - (Combat))*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Target____2____6_CMPS", "(1 - (Combat))*((DistanceToGroup - 250) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))", "__1___Target_____2___Grid___4", "(1 - (Combat))*((DistanceToGroup - 1050) min 1 max 0)", "__1___Target____2____6_CMPS_1", "0.5*(1 - (Combat))*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Target_____2____6", "0.2*(1 - (Combat))*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Target_____2____6_2", "0.1*(1 - (Combat))*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Target_____2____6_3_2", "0.4*(1 - (Combat))*(1 - (((DistanceToGroup - 100) min 1 max 0)))"};
		class __1___Engage____2____6_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Engage - %2 - %6.101";
			textOrig = "%1 ? Engage ? %2 ? %6.101";
			wordsClass = "CombatEngage";
		};
		class __1___Engage____2____6_CMPS_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Engage - %2 - %6.101";
			textOrig = "%1 ? Engage ? %2 ? %6.101";
			wordsClass = "NormalEngage";
		};
		class __1___Engage_____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Engage -  %2";
			textOrig = "%1 ? Engage ?  %2";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2____6_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.3"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6.3";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2____6_3_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.3"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6.3";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2____6_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2____6_6
		{
			gesture = "";
			speech[] = {"XMIT", "%6"};
			text = "%1 - Engage -  %2 - %6";
			textOrig = "%1 ? Engage ?  %2 ? %6";
			wordsClass = "CombatEngage";
		};
		class __1___Engage_____2___Grid___4_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%4"};
			text = "%1 - Engage -  %2 - Grid: %4";
			textOrig = "%1 ? Engage ?  %2 ? Grid: %4";
			wordsClass = "NormalEngage";
		};
		class __1___Target____2____6_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Target - %2 - %6.101";
			textOrig = "%1 ? Target ? %2 ? %6.101";
			wordsClass = "NormalTarget";
		};
		class __1___Target____2____6_CMPS_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.101"};
			text = "%1 - Target - %2 - %6.101";
			textOrig = "%1 ? Target ? %2 ? %6.101";
			wordsClass = "NormalTarget";
		};
		class __1___Target_____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2"};
			text = "%1 - Target -  %2";
			textOrig = "%1 ? Target ?  %2";
			wordsClass = "NormalTarget";
		};
		class __1___Target_____2____6
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6"};
			text = "%1 - Target -  %2 - %6";
			textOrig = "%1 ? Target ?  %2 ? %6";
			wordsClass = "NormalTarget";
		};
		class __1___Target_____2____6_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6"};
			text = "%1 - Target -  %2 - %6";
			textOrig = "%1 ? Target ?  %2 ? %6";
			wordsClass = "NormalTarget";
		};
		class __1___Target_____2____6_3_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%6.3"};
			text = "%1 - Target -  %2 - %6";
			textOrig = "%1 ? Target ?  %2 ? %6.3";
			wordsClass = "NormalTarget";
		};
		class __1___Target_____2___Grid___4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%2", "%4"};
			text = "%1 - Target -  %2 - Grid: %4";
			textOrig = "%1 ? Target ?  %2 ? Grid: %4";
			wordsClass = "NormalTarget";
		};
	};
	class SentTargetStealth: UrgentCommand
	{
		versions[] = {"__1___Target_____2___Grid___4_1", "((DistanceToGroup - 1050) min 1 max 0)", "__1___Target_____2____6_1", "0.2*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Target_____2_1", "0.5*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Target____2____6_CMPS_3", "0.5*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Target_____2____6_3", "0.4*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Target_____2____6_3_3", "0.3*((DistanceToGroup - 100) min 1 max 0) * (1 - (((DistanceToGroup - 250) min 1 max 0)))", "__1___Target_____2____6_4", "0.1*(1 - (((DistanceToGroup - 100) min 1 max 0)))", "__1___Target____2____6_CMPS_2", "((DistanceToGroup - 250) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))"};
		class __1___Target____2____6_CMPS_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Target", "%2", "%6.101"};
			text = "%1 - Target - %2 - %6.101";
			textOrig = "%1 ? Target ? %2 ? %6.101";
			wordsClass = "Stealth";
		};
		class __1___Target____2____6_CMPS_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Target", "%2", "%6.101"};
			text = "%1 - Target - %2 - %6.101";
			textOrig = "%1 ? Target ? %2 ? %6.101";
			wordsClass = "Stealth";
		};
		class __1___Target_____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Target", "%2"};
			text = "%1 - Target -  %2";
			textOrig = "%1 ? Target ?  %2";
			wordsClass = "Stealth";
		};
		class __1___Target_____2____6_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Target", "%2", "%6"};
			text = "%1 - Target -  %2 - %6";
			textOrig = "%1 ? Target ?  %2 ? %6";
			wordsClass = "Stealth";
		};
		class __1___Target_____2____6_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Target", "%2", "%6.3"};
			text = "%1 - Target -  %2 - %6";
			textOrig = "%1 ? Target ?  %2 ? %6.3";
			wordsClass = "Stealth";
		};
		class __1___Target_____2____6_3_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Target", "%2", "%6.3"};
			text = "%1 - Target -  %2 - %6";
			textOrig = "%1 ? Target ?  %2 ? %6.3";
			wordsClass = "Stealth";
		};
		class __1___Target_____2____6_4
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Target", "%2", "%6"};
			text = "%1 - Target -  %2 - %6";
			textOrig = "%1 ? Target ?  %2 ? %6";
			wordsClass = "Stealth";
		};
		class __1___Target_____2___Grid___4_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "Target", "%2", "%4"};
			text = "%1 - Target -  %2 - Grid: %4";
			textOrig = "%1 ? Target ?  %2 ? Grid: %4";
			wordsClass = "Stealth";
		};
	};
	class SentTeam: NormalCommand
	{
		versions[] = {"__1_1____2_2", "Stealth", "__1_1____2", "(1 - (Stealth))"};
		class __1_1____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "%2"};
			text = "%1.1 - %2";
			textOrig = "%1.1 ? %2";
			wordsClass = "Normal";
		};
		class __1_1____2_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "%2"};
			text = "%1.1 - %2";
			textOrig = "%1.1 ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentTeamPlural: NormalCommand
	{
		versions[] = {"__1_1____2_3", "Stealth", "__1_1____2_1", "(1 - (Stealth))"};
		class __1_1____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "%2"};
			text = "%1.1 - %2";
			textOrig = "%1.1 ? %2";
			wordsClass = "Normal";
		};
		class __1_1____2_3
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "%2"};
			text = "%1.1 - %2";
			textOrig = "%1.1 ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentThrowingGrenade: Report
	{
		versions[] = {"Frag_out_1", "(1 - (Stealth))", "Frag_out_2", "(1 - (Stealth))", "Frag_out_3", "Stealth", "Frag_out_4", "Stealth", "Frag_out_5", "Stealth", "Frag_out", "(1 - (Stealth))"};
		class Frag_out
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingGrenadeE_1"};
			text = "Frag out";
			textOrig = "Frag out";
			wordsClass = "Combat";
		};
		class Frag_out_1
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingGrenadeE_2"};
			text = "Frag out";
			textOrig = "Frag out";
			wordsClass = "Combat";
		};
		class Frag_out_2
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingGrenadeE_3"};
			text = "Frag out";
			textOrig = "Frag out";
			wordsClass = "Combat";
		};
		class Frag_out_3
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingGrenadeE_1"};
			text = "Frag out";
			textOrig = "Frag out";
			wordsClass = "Stealth";
		};
		class Frag_out_4
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingGrenadeE_2"};
			text = "Frag out";
			textOrig = "Frag out";
			wordsClass = "Stealth";
		};
		class Frag_out_5
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingGrenadeE_3"};
			text = "Frag out";
			textOrig = "Frag out";
			wordsClass = "Stealth";
		};
	};
	class SentThrowingSmoke: Report
	{
		versions[] = {"Smoke_out_1", "(1 - (Stealth))", "Smoke_out_2", "Stealth", "Smoke_out_3", "Stealth", "Smoke_out", "(1 - (Stealth))"};
		class Smoke_out
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingSmokeE_1"};
			text = "Smoke out";
			textOrig = "Smoke out";
			wordsClass = "Combat";
		};
		class Smoke_out_1
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingSmokeE_2"};
			text = "Smoke out";
			textOrig = "Smoke out";
			wordsClass = "Combat";
		};
		class Smoke_out_2
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingSmokeE_1"};
			text = "Smoke out";
			textOrig = "Smoke out";
			wordsClass = "Stealth";
		};
		class Smoke_out_3
		{
			gesture = "";
			speech[] = {"XMIT", "ThrowingSmokeE_2"};
			text = "Smoke out";
			textOrig = "Smoke out";
			wordsClass = "Stealth";
		};
	};
	class SentTransportSGLZCoordinatesSelected: NormalCommand
	{
		versions[] = {"Copy__We_re_moving_out_", 1};
		class Copy__We_re_moving_out_
		{
			gesture = "";
			speech[] = {"XMIT", "TransportSGLZCoordinatesSelected"};
			text = "Copy. We're moving out.";
			textOrig = "Copy. We're moving out.";
			wordsClass = "Normal";
		};
	};
	class SentTransportSGWelcomeAboard: NormalCommand
	{
		versions[] = {"Everyone_in__Let_s_get_out_of_here_", 1};
		class Everyone_in__Let_s_get_out_of_here_
		{
			gesture = "";
			speech[] = {"XMIT", "TransportSGWelcomeAboard"};
			text = "Everyone in? Let's get out of here.";
			textOrig = "Everyone in? Let's get out of here.";
			wordsClass = "Normal";
		};
	};
	class SentUnderFire: CombatShout
	{
		versions[] = {"__52", "Stealth", "__61", 0.6, "__32", "0.4*(1 - (Stealth))"};
		class __32
		{
			gesture = "";
			speech[] = {"XMIT", "UnderFireE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __52
		{
			gesture = "";
			speech[] = {"XMIT", "UnderFireE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
		class __61
		{
			gesture = "";
			speech[] = {"XMIT"};
			text = "";
			textOrig = "";
			wordsClass = "Normal";
		};
	};
	class SentUnitDestroyedHQArty: NormalCommand
	{
		versions[] = {"Be_advised__the_artillery_is_not_responding__Out_", 1};
		class Be_advised__the_artillery_is_not_responding__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "UnitDestroyedHQArty"};
			text = "Be advised, artillery is not responding. Out.";
			textOrig = "Be advised, the artillery is not responding. Out.";
			wordsClass = "Normal";
		};
	};
	class SentUnitDestroyedHQCASBombing: NormalCommand
	{
		versions[] = {"Be_advised__we_ve_lost_contact_with_the_aircraft__Out_", 1};
		class Be_advised__we_ve_lost_contact_with_the_aircraft__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "UnitDestroyedHQCASBombing"};
			text = "Be advised, we've lost contact with the aircraft. Out.";
			textOrig = "Be advised, we've lost contact with the aircraft. Out.";
			wordsClass = "Normal";
		};
	};
	class SentUnitDestroyedHQCASHelicopter: NormalCommand
	{
		versions[] = {"Be_advised__we_just_lost_contact_with_the_chopper__Out_", 1};
		class Be_advised__we_just_lost_contact_with_the_chopper__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "UnitDestroyedHQCASBombing"};
			text = "Be advised, we just lost contact with the chopper. Out.";
			textOrig = "Be advised, we just lost contact with the chopper. Out.";
			wordsClass = "Normal";
		};
	};
	class SentUnitDestroyedHQSupplyDrop: NormalCommand
	{
		versions[] = {"Be_advised__support_aircraft_is_unresponsive__Out_", 1};
		class Be_advised__support_aircraft_is_unresponsive__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "UnitDestroyedHQSupplyDrop"};
			text = "Be advised, support aircraft is unresponsive. Out.";
			textOrig = "Be advised, support aircraft is unresponsive. Out.";
			wordsClass = "Normal";
		};
	};
	class SentUnitDestroyedHQTransport: NormalCommand
	{
		versions[] = {"Be_advised__we_ve_lost_contact_with_the_aircraft__Out__1", 1};
		class Be_advised__we_ve_lost_contact_with_the_aircraft__Out__1
		{
			gesture = "";
			speech[] = {"XMIT", "UnitDestroyedHQTransport"};
			text = "Be advised, we've lost contact with the aircraft. Out.";
			textOrig = "Be advised, we've lost contact with the aircraft. Out.";
			wordsClass = "Normal";
		};
	};
	class SentUnitDestroyedHQUAV: NormalCommand
	{
		versions[] = {"Be_advised__the_drone_has_dropped_off_the_grid__Out_", 1};
		class Be_advised__the_drone_has_dropped_off_the_grid__Out_
		{
			gesture = "";
			speech[] = {"XMIT", "UnitDestroyedHQUAV"};
			text = "Be advised, the drone has dropped off the grid. Out.";
			textOrig = "Be advised, the drone has dropped off the grid. Out.";
			wordsClass = "Normal";
		};
	};
	class SentUnitKilled: CriticalReport
	{
		sentences[] = {"SentUnitKilledStealth", "Stealth", "SentUnitKilledDefault", "(1 - (Stealth))"};
	};
	class SentUnitKilledDefault: CriticalReport
	{
		versions[] = {"__1_1___KIA_3", 0.14, "__1_1___KIA_1", 0.05, "__1_1___KIA_2", 0.24, "__1_1___KIA", 0.24};
		class __1_1___KIA
		{
			gesture = "";
			speech[] = {"XMIT", "ManDownE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Normal";
		};
		class __1_1___KIA_1
		{
			gesture = "";
			speech[] = {"XMIT", "WeLostOneE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Normal";
		};
		class __1_1___KIA_2
		{
			gesture = "";
			speech[] = {"XMIT", "WeGotAManDownE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Normal";
		};
		class __1_1___KIA_3
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsHitE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Normal";
		};
	};
	class SentUnitKilledStealth: CriticalReport
	{
		versions[] = {"__1_1___KIA_8", 0.14, "__1_1___KIA_6", 0.05, "__1_1___KIA_7", 0.24, "__1_1___KIA_9", 0.14, "__1_1___KIA_5", 0.24};
		class __1_1___KIA_5
		{
			gesture = "";
			speech[] = {"XMIT", "ManDownE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Stealth";
		};
		class __1_1___KIA_6
		{
			gesture = "";
			speech[] = {"XMIT", "WeLostOneE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Stealth";
		};
		class __1_1___KIA_7
		{
			gesture = "";
			speech[] = {"XMIT", "WeGotAManDownE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Stealth";
		};
		class __1_1___KIA_8
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsHitE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Stealth";
		};
		class __1_1___KIA_9
		{
			gesture = "";
			speech[] = {"XMIT", "HeIsDeadE"};
			text = "%1.1 - KIA";
			textOrig = "%1.1 ? KIA";
			wordsClass = "Stealth";
		};
	};
	class SentUnitPosAuto: NormalCommand
	{
		versions[] = {"__1_1___Copy_my_stance_1", "Stealth", "__1_1___Copy_my_stance_2", "Combat", "__1_1___Copy_my_stance", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Copy_my_stance
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CopyMyStance"};
			text = "%1.1 - Copy my stance";
			textOrig = "%1.1 ? Copy my stance";
			wordsClass = "Normal";
		};
		class __1_1___Copy_my_stance_1
		{
			gesture = "";
			speech[] = {"XMIT", "CopyMyStance"};
			text = "%1.1 - Copy my stance";
			textOrig = "%1.1 ? Copy my stance";
			wordsClass = "Stealth";
		};
		class __1_1___Copy_my_stance_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "CopyMyStance"};
			text = "%1.1 - Copy my stance";
			textOrig = "%1.1 ? Copy my stance";
			wordsClass = "Combat";
		};
	};
	class SentUnitPosDown: NormalCommand
	{
		versions[] = {"__1_1___Prone_1", "Stealth", "__1_1___Prone_2", "Combat", "__1_1___Prone", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Prone
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoProne"};
			text = "%1.1 - Prone";
			textOrig = "%1.1 ? Prone";
			wordsClass = "Normal";
		};
		class __1_1___Prone_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoProne"};
			text = "%1.1 - Prone";
			textOrig = "%1.1 ? Prone";
			wordsClass = "Stealth";
		};
		class __1_1___Prone_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "GoProne"};
			text = "%1.1 - Prone";
			textOrig = "%1.1 ? Prone";
			wordsClass = "Combat";
		};
	};
	class SentUnitPosMiddle: NormalCommand
	{
		versions[] = {"__1_1___Crouch_1", "Stealth", "__1_1___Crouch_2", "Combat", "__1_1___Crouch", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Crouch
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "StayLow"};
			text = "%1.1 - Crouch";
			textOrig = "%1.1 ? Crouch";
			wordsClass = "Normal";
		};
		class __1_1___Crouch_1
		{
			gesture = "";
			speech[] = {"XMIT", "StayLow"};
			text = "%1.1 - Crouch";
			textOrig = "%1.1 ? Crouch";
			wordsClass = "Stealth";
		};
		class __1_1___Crouch_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "StayLow"};
			text = "%1.1 - Crouch";
			textOrig = "%1.1 ? Crouch";
			wordsClass = "Combat";
		};
	};
	class SentUnitPosUp: NormalCommand
	{
		versions[] = {"__1_1___Stand_1", "Stealth", "__1_1___Stand_2", "Combat", "__1_1___Stand", "(1 - (Stealth))*(1 - (Combat))"};
		class __1_1___Stand
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OnYourFeet"};
			text = "%1.1 - Stand";
			textOrig = "%1.1 ? Stand";
			wordsClass = "Normal";
		};
		class __1_1___Stand_1
		{
			gesture = "";
			speech[] = {"XMIT", "OnYourFeet"};
			text = "%1.1 - Stand";
			textOrig = "%1.1 ? Stand";
			wordsClass = "Stealth";
		};
		class __1_1___Stand_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "OnYourFeet"};
			text = "%1.1 - Stand";
			textOrig = "%1.1 ? Stand";
			wordsClass = "Combat";
		};
	};
	class SentWatchAround: NormalCommand
	{
		versions[] = {"__1_1___Scan_horizon_1", "Stealth", "__1_1___Scan_horizon", "(1 - (Stealth))"};
		class __1_1___Scan_horizon
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "ScanHorizon"};
			text = "%1.1 - Scan horizon";
			textOrig = "%1.1 ? Scan horizon";
			wordsClass = "Normal";
		};
		class __1_1___Scan_horizon_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "ScanHorizon"};
			text = "%1.1 - Scan horizon";
			textOrig = "%1.1 ? Scan horizon";
			wordsClass = "Stealth";
		};
	};
	class SentWatchDir: NormalCommand
	{
		versions[] = {"__1_1___Watch____2_CMPS", "Stealth", "__1_1___Watch____4_CMPS", "(1 - (Stealth))"};
		class __1_1___Watch____2_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "%4.101"};
			text = "%1.1 - Watch - %2.101";
			textOrig = "%1.1 ? Watch ? %2.101";
			wordsClass = "StealthWatch";
		};
		class __1_1___Watch____4_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "%4.101"};
			text = "%1.1 - Watch - %4.101";
			textOrig = "%1.1 ? Watch ? %4.101";
			wordsClass = "NormalWatch";
		};
	};
	class SentWatchPos: NormalCommand
	{
		versions[] = {"__1_1___Observe_position_1", "Stealth", "__1_1___Observe_position", "(1 - (Stealth))"};
		class __1_1___Observe_position
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "ObserveThatPosition"};
			text = "%1.1 - Observe position";
			textOrig = "%1.1 ? Observe position";
			wordsClass = "Normal";
		};
		class __1_1___Observe_position_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "ObserveThatPosition"};
			text = "%1.1 - Observe position";
			textOrig = "%1.1 ? Observe position";
			wordsClass = "Stealth";
		};
	};
	class SentWatchTgt: NormalCommand
	{
		versions[] = {"__1_1___Watch____2_1", "Stealth", "__1_1___Watch____2", "(1 - (Stealth))"};
		class __1_1___Watch____2
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "WatchThatTarget"};
			text = "%1.1 - Watch - %2";
			textOrig = "%1.1 ? Watch ? %2";
			wordsClass = "Normal";
		};
		class __1_1___Watch____2_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1.1", "WatchThatTarget"};
			text = "%1.1 - Watch - %2";
			textOrig = "%1.1 ? Watch ? %2";
			wordsClass = "Stealth";
		};
	};
	class SentWhereAreYou: NormalCommand
	{
		sentences[] = {"SentWhereAreYouStealth", "Stealth", "SentWhereAreYouDefault", "(1 - (Stealth))"};
	};
	class SentWhereAreYouDefault: NormalCommand
	{
		versions[] = {"Report_position_1", 0.5, "Report_position", 0.5};
		class Report_position
		{
			gesture = "";
			speech[] = {"XMIT", "ReportPosition"};
			text = "Report position";
			textOrig = "Report position";
			wordsClass = "Normal";
		};
		class Report_position_1
		{
			gesture = "";
			speech[] = {"XMIT", "WhatIsYourLocationQ"};
			text = "Report position";
			textOrig = "Report position";
			wordsClass = "Normal";
		};
	};
	class SentWhereAreYouStealth: NormalCommand
	{
		versions[] = {"Report_position_3", 0.5, "Report_position_2", 0.5};
		class Report_position_2
		{
			gesture = "";
			speech[] = {"XMIT", "ReportPosition"};
			text = "Report position";
			textOrig = "Report position";
			wordsClass = "Stealth";
		};
		class Report_position_3
		{
			gesture = "";
			speech[] = {"XMIT", "WhatIsYourLocationQ"};
			text = "Report position";
			textOrig = "Report position";
			wordsClass = "Stealth";
		};
	};
	class SentWitnessDeadBody: CombatShout
	{
		versions[] = {"__53", "Stealth", "__33", "(1 - (Stealth))"};
		class __33
		{
			gesture = "";
			speech[] = {"XMIT", "EndangeredE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __53
		{
			gesture = "";
			speech[] = {"XMIT", "EndangeredE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class SentWitnessKilled: CombatShout
	{
		versions[] = {"__51", "Stealth", "__31", "(1 - (Stealth))"};
		class __31
		{
			gesture = "";
			speech[] = {"XMIT", "WitnessKilledE"};
			text = "";
			textOrig = "";
			wordsClass = "Combat";
		};
		class __51
		{
			gesture = "";
			speech[] = {"XMIT", "WitnessKilledE"};
			text = "";
			textOrig = "";
			wordsClass = "Stealth";
		};
	};
	class VehicleAzimut
	{
		versions[] = {"Watch____1_1", 1};
		class Watch____1_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1"};
			text = "Watch - %1";
			textOrig = "Watch ? %1";
			wordsClass = "Normal";
		};
	};
	class VehicleBackward
	{
		versions[] = {"Backward", 1};
		class Backward
		{
			gesture = "";
			speech[] = {"XMIT", "VehBackward"};
			text = "Backward";
			textOrig = "Backward";
			wordsClass = "Normal";
		};
	};
	class VehicleCancelManualFire
	{
		versions[] = {"Cancel_manual_fire", 1};
		class Cancel_manual_fire
		{
			gesture = "";
			speech[] = {"XMIT", "CancelManualFire"};
			text = "Cancel manual fire";
			textOrig = "Cancel manual fire";
			wordsClass = "Normal";
		};
	};
	class VehicleCeaseFire
	{
		versions[] = {"Cease_fire", 1};
		class Cease_fire
		{
			gesture = "";
			speech[] = {"XMIT", "CeaseFire"};
			text = "Cease fire";
			textOrig = "Cease fire";
			wordsClass = "Normal";
		};
	};
	class VehicleDirectFire
	{
		versions[] = {"Fire", 1};
		class Fire
		{
			gesture = "";
			speech[] = {"XMIT", "Fire"};
			text = "Fire";
			textOrig = "Fire";
			wordsClass = "Normal";
		};
	};
	class VehicleFaster
	{
		versions[] = {"Fast", 1};
		class Fast
		{
			gesture = "";
			speech[] = {"XMIT", "VehFast"};
			text = "Fast";
			textOrig = "Fast";
			wordsClass = "Normal";
		};
	};
	class VehicleFire
	{
		versions[] = {"Engage____1____6_ABS____7_CLCK_1", "0.2*((DistanceToUnit - 250) min 1 max 0) * (1 - (((DistanceToUnit - 1050) min 1 max 0)))", "Engage____1____6_ABS____7_CLCK", "((DistanceToUnit - 100) min 1 max 0) * (1 - (((DistanceToUnit - 250) min 1 max 0)))", "Engage____1____6_ABS____7_CMPS", "0.8*((DistanceToUnit - 250) min 1 max 0) * (1 - (((DistanceToUnit - 1050) min 1 max 0)))", "Engage____1___Grid___3", "((DistanceToUnit - 1050) min 1 max 0)", "Engage____1____6_ABS____7_CLCK_2", "0.7*(1 - (((DistanceToUnit - 100) min 1 max 0)))", "Engage____1", "0.3*(1 - (((DistanceToUnit - 100) min 1 max 0)))"};
		class Engage____1
		{
			gesture = "";
			speech[] = {"XMIT", "%1"};
			text = "Engage - %1";
			textOrig = "Engage ? %1";
			wordsClass = "NormalEngage";
		};
		class Engage____1____6_ABS____7_CLCK
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%6.101", "%7.201"};
			text = "Engage - %1 - %6.101 - %7.201";
			textOrig = "Engage ? %1 ? %6.101 ? %7.201";
			wordsClass = "NormalEngage";
		};
		class Engage____1____6_ABS____7_CLCK_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%6.101", "%7.201"};
			text = "Engage - %1 - %6.101 - %7.201";
			textOrig = "Engage ? %1 ? %6.101 ? %7.201";
			wordsClass = "NormalEngage";
		};
		class Engage____1____6_ABS____7_CLCK_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%6.101", "%7.201"};
			text = "Engage - %1 - %6.101 - %7.201";
			textOrig = "Engage ? %1 ? %6.101 ? %7.201";
			wordsClass = "NormalEngage";
		};
		class Engage____1____6_ABS____7_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%6.101", "%7.101"};
			text = "Engage - %1 - %6.101 - %7.101";
			textOrig = "Engage ? %1 ? %6.101 ? %7.101";
			wordsClass = "NormalEngage";
		};
		class Engage____1___Grid___3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3"};
			text = "Engage - %1 - Grid: %3";
			textOrig = "Engage ? %1 ? Grid: %3";
			wordsClass = "NormalEngage";
		};
	};
	class VehicleFireFailed
	{
		versions[] = {"Cannot_fire", 0.5, "Negative_7", 0.5};
		class Cannot_fire
		{
			gesture = "";
			speech[] = {"XMIT", "CannotFire"};
			text = "Cannot fire";
			textOrig = "Cannot fire";
			wordsClass = "Normal";
		};
		class Negative_7
		{
			gesture = "";
			speech[] = {"XMIT", "Negative"};
			text = "Negative";
			textOrig = "Negative";
			wordsClass = "Normal";
		};
	};
	class VehicleForward
	{
		versions[] = {"Forward", 1};
		class Forward
		{
			gesture = "";
			speech[] = {"XMIT", "VehForward"};
			text = "Forward";
			textOrig = "Forward";
			wordsClass = "Normal";
		};
	};
	class VehicleJoin
	{
		versions[] = {"Keep_formation_1", 0.5, "Keep_formation", 0.5};
		class Keep_formation
		{
			gesture = "";
			speech[] = {"XMIT", "KeepFormation"};
			text = "Keep formation";
			textOrig = "Keep formation";
			wordsClass = "Normal";
		};
		class Keep_formation_1
		{
			gesture = "";
			speech[] = {"XMIT", "StayInFormation"};
			text = "Keep formation";
			textOrig = "Keep formation";
			wordsClass = "Normal";
		};
	};
	class VehicleLeft
	{
		versions[] = {"Left", 1};
		class Left
		{
			gesture = "";
			speech[] = {"XMIT", "VehLeft"};
			text = "Left";
			textOrig = "Left";
			wordsClass = "Normal";
		};
	};
	class VehicleLoad
	{
		versions[] = {"Load____1", 1};
		class Load____1
		{
			gesture = "";
			speech[] = {"XMIT", "%1"};
			text = "Load - %1";
			textOrig = "Load ? %1";
			wordsClass = "Normal";
		};
	};
	class VehicleLoadMagazine
	{
		versions[] = {"Load____1_1", 1};
		class Load____1_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1"};
			text = "Load - %1";
			textOrig = "Load ? %1";
			wordsClass = "Normal";
		};
	};
	class VehicleManualFire
	{
		versions[] = {"Manual_fire", 1};
		class Manual_fire
		{
			gesture = "";
			speech[] = {"XMIT", "ManualFire"};
			text = "Manual fire";
			textOrig = "Manual fire";
			wordsClass = "Normal";
		};
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
	class VehicleMoveToObject
	{
		sentences[] = {"SelectCmdMoveSentenceFar", "((DistanceToGroup - 1050) min 1 max 0)", "SelectCmdMoveSentenceClose", "((DistanceToGroup - 50) min 1 max 0) * (1 - (((DistanceToGroup - 350) min 1 max 0)))", "SelectCmdMoveSentenceVeryClose", "(1 - (((DistanceToGroup - 50) min 1 max 0)))", "SelectCmdMoveSentenceMedium", "((DistanceToGroup - 350) min 1 max 0) * (1 - (((DistanceToGroup - 1050) min 1 max 0)))"};
	};
	class VehicleNoTarget
	{
		versions[] = {"Cancel_target", 0.5, "No_target", 0.5};
		class Cancel_target
		{
			gesture = "";
			speech[] = {"XMIT", "CancelTarget"};
			text = "Cancel target";
			textOrig = "Cancel target";
			wordsClass = "Normal";
		};
		class No_target
		{
			gesture = "";
			speech[] = {"XMIT", "NoTarget"};
			text = "No target";
			textOrig = "No target";
			wordsClass = "Normal";
		};
	};
	class VehicleRight
	{
		versions[] = {"Right", 1};
		class Right
		{
			gesture = "";
			speech[] = {"XMIT", "VehRight"};
			text = "Right";
			textOrig = "Right";
			wordsClass = "Normal";
		};
	};
	class VehicleSlower
	{
		versions[] = {"Slow", 1};
		class Slow
		{
			gesture = "";
			speech[] = {"XMIT", "VehSlow"};
			text = "Slow";
			textOrig = "Slow";
			wordsClass = "Normal";
		};
	};
	class VehicleStop
	{
		versions[] = {"Stop", 1};
		class Stop
		{
			gesture = "";
			speech[] = {"XMIT", "VehStop"};
			text = "Stop";
			textOrig = "Stop";
			wordsClass = "Normal";
		};
	};
	class VehicleTarget: UrgentCommand
	{
		versions[] = {"Target____1____6_ABS____7_CLCK_1", "0.2*((DistanceToUnit - 250) min 1 max 0) * (1 - (((DistanceToUnit - 1050) min 1 max 0)))", "Target____1____6_ABS____7_CLCK", "((DistanceToUnit - 100) min 1 max 0) * (1 - (((DistanceToUnit - 250) min 1 max 0)))", "Target____1____6_ABS____7_CMPS", "0.8*((DistanceToUnit - 250) min 1 max 0) * (1 - (((DistanceToUnit - 1050) min 1 max 0)))", "Target____1___Grid___3", "((DistanceToUnit - 1050) min 1 max 0)", "Target____1____6_ABS____7_CLCK_2", "0.7*(1 - (((DistanceToUnit - 100) min 1 max 0)))", "Target____1", "0.3*(1 - (((DistanceToUnit - 100) min 1 max 0)))"};
		class Target____1
		{
			gesture = "";
			speech[] = {"XMIT", "%1"};
			text = "Target - %1";
			textOrig = "Target ? %1";
			wordsClass = "NormalTarget";
		};
		class Target____1____6_ABS____7_CLCK
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%6.101", "%7.201"};
			text = "Target - %1 - %6.101 - %7.201";
			textOrig = "Target ? %1 ? %6.101 ? %7.201";
			wordsClass = "NormalTarget";
		};
		class Target____1____6_ABS____7_CLCK_1
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%6.101", "%7.201"};
			text = "Target - %1 - %6.101 - %7.201";
			textOrig = "Target ? %1 ? %6.101 ? %7.201";
			wordsClass = "NormalTarget";
		};
		class Target____1____6_ABS____7_CLCK_2
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%6.101", "%7.201"};
			text = "Target - %1 - %6.101 - %7.201";
			textOrig = "Target ? %1 ? %6.101 ? %7.201";
			wordsClass = "NormalTarget";
		};
		class Target____1____6_ABS____7_CMPS
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%6.101", "%7.101"};
			text = "Target - %1 - %6.101 - %7.101";
			textOrig = "Target ? %1 ? %6.101 ? %7.101";
			wordsClass = "NormalTarget";
		};
		class Target____1___Grid___3
		{
			gesture = "";
			speech[] = {"XMIT", "%1", "%3"};
			text = "Target - %1 - Grid: %3";
			textOrig = "Target ? %1 ? Grid: %3";
			wordsClass = "NormalTarget";
		};
	};
	class VehicleWatchPos
	{
		versions[] = {"Observe____1____2", 1};
		class Observe____1____2
		{
			gesture = "";
			speech[] = {"XMIT", "ObserveThatPosition"};
			text = "Observe - %1 - %2";
			textOrig = "Observe ? %1 ? %2";
			wordsClass = "Normal";
		};
	};
	class VehicleWatchTgt
	{
		versions[] = {"Watch____1", 1};
		class Watch____1
		{
			gesture = "";
			speech[] = {"XMIT", "WatchThatTarget"};
			text = "Watch - %1";
			textOrig = "Watch ? %1";
			wordsClass = "Normal";
		};
	};
	class Words: Words
	{
		__1[] = {"Normal\Misc\__1.ogg"};
		__10[] = {"Normal\Misc\__10.ogg"};
		__11[] = {"Normal\Misc\__11.ogg"};
		__12[] = {"Normal\Misc\__12.ogg"};
		__13[] = {"Normal\Misc\__13.ogg"};
		__14[] = {"Normal\Misc\__14.ogg"};
		__15[] = {"Normal\Misc\__15.ogg"};
		__1_1[] = {"Normal\Combat\__1_1.ogg"};
		__2[] = {"Normal\Misc\__2.ogg"};
		__2_1[] = {"Normal\Misc\__2_1.ogg"};
		__3[] = {"Normal\Misc\__3.ogg"};
		__4[] = {"Normal\Misc\__4.ogg"};
		__4_CMPS[] = {"Normal\Misc\__4_CMPS.ogg"};
		__5[] = {"Normal\Misc\__5.ogg"};
		__6[] = {"Normal\Misc\__6.ogg"};
		__6_3[] = {"Normal\Misc\__6_3.ogg"};
		__6_ABS[] = {"Normal\Misc\__6_ABS.ogg"};
		__6_CMPS[] = {"Normal\Misc\__6_CMPS.ogg"};
		__7[] = {"Normal\Misc\__7.ogg"};
		__7_CLCK[] = {"Normal\Misc\__7_CLCK.ogg"};
		__7_CMPS[] = {"Normal\Misc\__7_CMPS.ogg"};
		__8[] = {"Normal\Misc\__8.ogg"};
		__9[] = {"Normal\Misc\__9.ogg"};
		_eGRPDIR_102[] = {"Normal\Misc\_eGRPDIR_102.ogg"};
		_mGRPDIS_300[] = {"Normal\Misc\_mGRPDIS_300.ogg"};
		Adams[] = {"Normal\020_Names\Adams.ogg"};
		Advance[] = {"Normal\100_Commands\Advance.ogg"};
		alpha[] = {"Normal\080_MoveAlphabet\alpha.ogg"};
		Amin[] = {"Normal\020_Names\Amin.ogg"};
		AmmoCritical[] = {"Normal\140_Com_Status\AmmoCritical_1.ogg", "Normal\140_Com_Status\AmmoCritical_2.ogg", "Normal\140_Com_Status\AmmoCritical_3.ogg"};
		AmmoLow[] = {"Normal\140_Com_Status\AmmoLow.ogg"};
		Anthis[] = {"Normal\020_Names\Anthis.ogg"};
		AreaClear[] = {"Normal\110_Com_Announce\AreaClear.ogg"};
		Armstrong[] = {"Normal\020_Names\Armstrong.ogg"};
		ArtySGSupportRoundsComplete[] = {"Normal\220_Support\ArtySGSupportRoundsComplete.ogg"};
		AssembleThatWeapon[] = {"Normal\100_Commands\AssembleThatWeapon.ogg"};
		at1[] = {"Normal\DirectionRelative2\at1_1.ogg", "Normal\DirectionRelative2\at1_2.ogg"};
		at10[] = {"Normal\DirectionRelative2\at10_1.ogg", "Normal\DirectionRelative2\at10_2.ogg"};
		at11[] = {"Normal\DirectionRelative2\at11_1.ogg", "Normal\DirectionRelative2\at11_2.ogg"};
		at12[] = {"Normal\DirectionRelative2\at12_1.ogg", "Normal\DirectionRelative2\at12_2.ogg"};
		at2[] = {"Normal\DirectionRelative2\at2_1.ogg", "Normal\DirectionRelative2\at2_2.ogg"};
		at3[] = {"Normal\DirectionRelative2\at3_1.ogg", "Normal\DirectionRelative2\at3_2.ogg"};
		at4[] = {"Normal\DirectionRelative2\at4_1.ogg", "Normal\DirectionRelative2\at4_2.ogg"};
		at5[] = {"Normal\DirectionRelative2\at5_1.ogg", "Normal\DirectionRelative2\at5_2.ogg"};
		at6[] = {"Normal\DirectionRelative2\at6_1.ogg", "Normal\DirectionRelative2\at6_2.ogg"};
		at7[] = {"Normal\DirectionRelative2\at7_1.ogg", "Normal\DirectionRelative2\at7_2.ogg"};
		at8[] = {"Normal\DirectionRelative2\at8_1.ogg", "Normal\DirectionRelative2\at8_2.ogg"};
		at9[] = {"Normal\DirectionRelative2\at9_1.ogg", "Normal\DirectionRelative2\at9_2.ogg"};
		Attack[] = {"Normal\015_Targeting\Attack_1.ogg", "Normal\015_Targeting\Attack_2.ogg"};
		Attacking[] = {"Normal\130_Com_Reply\Attacking.ogg"};
		AwaitingOrders[] = {"Normal\110_Com_Announce\AwaitingOrders.ogg"};
		back[] = {"Normal\DirectionRelative1\back_1.ogg", "Normal\DirectionRelative1\back_2.ogg"};
		bearing000[] = {"Normal\DirectionCompass2\bearing000.ogg"};
		bearing015[] = {"Normal\DirectionCompass2\bearing015.ogg"};
		bearing030[] = {"Normal\DirectionCompass2\bearing030.ogg"};
		bearing045[] = {"Normal\DirectionCompass2\bearing045.ogg"};
		bearing060[] = {"Normal\DirectionCompass2\bearing060.ogg"};
		bearing075[] = {"Normal\DirectionCompass2\bearing075.ogg"};
		bearing090[] = {"Normal\DirectionCompass2\bearing090.ogg"};
		bearing105[] = {"Normal\DirectionCompass2\bearing105.ogg"};
		bearing120[] = {"Normal\DirectionCompass2\bearing120.ogg"};
		bearing135[] = {"Normal\DirectionCompass2\bearing135.ogg"};
		bearing150[] = {"Normal\DirectionCompass2\bearing150.ogg"};
		bearing165[] = {"Normal\DirectionCompass2\bearing165.ogg"};
		bearing180[] = {"Normal\DirectionCompass2\bearing180.ogg"};
		bearing195[] = {"Normal\DirectionCompass2\bearing195.ogg"};
		bearing210[] = {"Normal\DirectionCompass2\bearing210.ogg"};
		bearing225[] = {"Normal\DirectionCompass2\bearing225.ogg"};
		bearing240[] = {"Normal\DirectionCompass2\bearing240.ogg"};
		bearing255[] = {"Normal\DirectionCompass2\bearing255.ogg"};
		bearing270[] = {"Normal\DirectionCompass2\bearing270.ogg"};
		bearing285[] = {"Normal\DirectionCompass2\bearing285.ogg"};
		bearing300[] = {"Normal\DirectionCompass2\bearing300.ogg"};
		bearing315[] = {"Normal\DirectionCompass2\bearing315.ogg"};
		bearing330[] = {"Normal\DirectionCompass2\bearing330.ogg"};
		bearing345[] = {"Normal\DirectionCompass2\bearing345.ogg"};
		bearing360[] = {"Normal\DirectionCompass2\bearing360.ogg"};
		beepBeep[] = {"\A3\Dubbing_Radio_F\Sfx\out2a.ogg"};
		Bennett[] = {"Normal\020_Names\Bennett.ogg"};
		blueTeam[] = {"Normal\030_Teams\blueTeam.ogg"};
		BoardThatVehicle[] = {"Normal\100_Commands\BoardThatVehicle.ogg"};
		BombDetected[] = {"Normal\150_Reporting\BombDetected_1.ogg", "Normal\150_Reporting\BombDetected_2.ogg", "Normal\150_Reporting\BombDetected_3.ogg"};
		Bombs[] = {"Normal\005_Weapons\Bombs.ogg"};
		bravo[] = {"Normal\080_MoveAlphabet\bravo.ogg"};
		Campbell[] = {"Normal\020_Names\Campbell.ogg"};
		CancelManualFire[] = {"Normal\100_Commands\CancelManualFire_1.ogg", "Normal\100_Commands\CancelManualFire_2.ogg", "Normal\100_Commands\CancelManualFire_3.ogg"};
		CancelTarget[] = {"Normal\015_Targeting\CancelTarget_1.ogg", "Normal\015_Targeting\CancelTarget_2.ogg"};
		cannon[] = {"Normal\005_Weapons\cannon.ogg"};
		cannonHigh[] = {"Normal\005_Weapons\cannonHigh.ogg"};
		cannonLow[] = {"Normal\005_Weapons\cannonLow.ogg"};
		CannotComply[] = {"Normal\130_Com_Reply\CannotComply_1.ogg", "Normal\130_Com_Reply\CannotComply_2.ogg"};
		CannotExecuteAdjustCoordinates[] = {"Normal\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
		CannotExecuteOutsideEnvelope[] = {"Normal\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
		CannotFire[] = {"Normal\130_Com_Reply\CannotFire.ogg"};
		CantGetThere[] = {"Normal\130_Com_Reply\CantGetThere.ogg"};
		CarryThatSoldier[] = {"Normal\100_Commands\CarryThatSoldier.ogg"};
		CeaseFire[] = {"Normal\100_Commands\CeaseFire_1.ogg", "Normal\100_Commands\CeaseFire_2.ogg"};
		charlie[] = {"Normal\080_MoveAlphabet\charlie.ogg"};
		CheckYourFire[] = {"Normal\100_Commands\CheckYourFire.ogg"};
		CheeringE[] = {"Normal\200_CombatShouts\CheeringE_1.ogg", "Normal\200_CombatShouts\CheeringE_2.ogg", "Normal\200_CombatShouts\CheeringE_3.ogg", "Normal\200_CombatShouts\CheeringE_4.ogg", "Normal\200_CombatShouts\CheeringE_5.ogg"};
		Clear[] = {"Normal\110_Com_Announce\Clear.ogg"};
		CloseThatDoor[] = {"Normal\100_Commands\CloseThatDoor.ogg"};
		CombatGenericE[] = {"Normal\200_CombatShouts\CombatGenericE_1.ogg", "Normal\200_CombatShouts\CombatGenericE_2.ogg", "Normal\200_CombatShouts\CombatGenericE_3.ogg", "Normal\200_CombatShouts\CombatGenericE_4.ogg"};
		CombatOpenFire[] = {"Normal\100_Commands\CombatOpenFire_1.ogg", "Normal\100_Commands\CombatOpenFire_2.ogg", "Normal\100_Commands\CombatOpenFire_3.ogg", "Normal\100_Commands\CombatOpenFire_4.ogg", "Normal\100_Commands\CombatOpenFire_5.ogg"};
		CommStealth[] = {"Normal\100_Commands\CommStealth.ogg"};
		Confirmation1[] = {"Normal\130_Com_Reply\Confirmation1_1.ogg", "Normal\130_Com_Reply\Confirmation1_2.ogg", "Normal\130_Com_Reply\Confirmation1_3.ogg", "Normal\130_Com_Reply\Confirmation1_4.ogg", "Normal\130_Com_Reply\Confirmation1_5.ogg", "Normal\130_Com_Reply\Confirmation1_6.ogg", "Normal\130_Com_Reply\Confirmation1_7.ogg", "Normal\130_Com_Reply\Confirmation1_8.ogg", "Normal\130_Com_Reply\Confirmation1_9.ogg", "Normal\130_Com_Reply\Confirmation1_10.ogg"};
		Confirmation2[] = {"Normal\130_Com_Reply\Confirmation2_1.ogg", "Normal\130_Com_Reply\Confirmation2_2.ogg", "Normal\130_Com_Reply\Confirmation2_3.ogg", "Normal\130_Com_Reply\Confirmation2_4.ogg", "Normal\130_Com_Reply\Confirmation2_5.ogg", "Normal\130_Com_Reply\Confirmation2_6.ogg", "Normal\130_Com_Reply\Confirmation2_7.ogg", "Normal\130_Com_Reply\Confirmation2_8.ogg", "Normal\130_Com_Reply\Confirmation2_9.ogg", "Normal\130_Com_Reply\Confirmation2_10.ogg"};
		Contact[] = {"Normal\150_Reporting\Contact_1.ogg", "Normal\150_Reporting\Contact_2.ogg"};
		ContactE_1[] = {"Normal\200_CombatShouts\ContactE_1.ogg"};
		ContactE_2[] = {"Normal\200_CombatShouts\ContactE_2.ogg"};
		ContactE_3[] = {"Normal\200_CombatShouts\ContactE_3.ogg"};
		CopyIAmOnHim[] = {"Normal\130_Com_Reply\CopyIAmOnHim.ogg"};
		CopyMyStance[] = {"Normal\100_Commands\CopyMyStance.ogg"};
		Costa[] = {"Normal\020_Names\Costa.ogg"};
		CoveringE[] = {"Normal\200_CombatShouts\CoveringE_1.ogg", "Normal\200_CombatShouts\CoveringE_2.ogg", "Normal\200_CombatShouts\CoveringE_3.ogg", "Normal\200_CombatShouts\CoveringE_4.ogg", "Normal\200_CombatShouts\CoveringE_5.ogg", "Normal\200_CombatShouts\CoveringE_6.ogg", "Normal\200_CombatShouts\CoveringE_7.ogg"};
		CoverMeE[] = {"Normal\200_CombatShouts\CoverMeE_1.ogg", "Normal\200_CombatShouts\CoverMeE_2.ogg", "Normal\200_CombatShouts\CoverMeE_3.ogg", "Normal\200_CombatShouts\CoverMeE_4.ogg"};
		CriticalDamage[] = {"Normal\140_Com_Status\CriticalDamage_1.ogg", "Normal\140_Com_Status\CriticalDamage_2.ogg"};
		Danger[] = {"Normal\100_Commands\Danger.ogg"};
		DeactivateCharge[] = {"Normal\100_Commands\DeactivateCharge.ogg"};
		delta[] = {"Normal\080_MoveAlphabet\delta.ogg"};
		DetonateCharge[] = {"Normal\100_Commands\DetonateCharge.ogg"};
		Dimitirou[] = {"Normal\020_Names\Dimitirou.ogg"};
		DisarmThatMine[] = {"Normal\100_Commands\DisarmThatMine.ogg"};
		DisassembleThatWeapon[] = {"Normal\100_Commands\DisassembleThatWeapon.ogg"};
		Disengage[] = {"Normal\100_Commands\Disengage.ogg"};
		Dismount[] = {"Normal\100_Commands\Dismount_1.ogg", "Normal\100_Commands\Dismount_2.ogg"};
		dist100[] = {"Normal\DistanceAbsolute1\dist100_1.ogg", "Normal\DistanceAbsolute1\dist100_2.ogg", "Normal\DistanceAbsolute1\dist100_3.ogg"};
		dist1000[] = {"Normal\DistanceAbsolute1\dist1000_1.ogg", "Normal\DistanceAbsolute1\dist1000_2.ogg", "Normal\DistanceAbsolute1\dist1000_3.ogg"};
		dist1500[] = {"Normal\DistanceAbsolute1\dist1500_1.ogg", "Normal\DistanceAbsolute1\dist1500_2.ogg", "Normal\DistanceAbsolute1\dist1500_3.ogg"};
		dist200[] = {"Normal\DistanceAbsolute1\dist200_1.ogg", "Normal\DistanceAbsolute1\dist200_2.ogg", "Normal\DistanceAbsolute1\dist200_3.ogg"};
		dist2000[] = {"Normal\DistanceAbsolute1\dist2000_1.ogg", "Normal\DistanceAbsolute1\dist2000_2.ogg", "Normal\DistanceAbsolute1\dist2000_3.ogg"};
		dist2500[] = {"Normal\DistanceAbsolute1\dist2500_1.ogg", "Normal\DistanceAbsolute1\dist2500_2.ogg", "Normal\DistanceAbsolute1\dist2500_3.ogg"};
		dist300[] = {"Normal\DistanceAbsolute1\dist300_1.ogg", "Normal\DistanceAbsolute1\dist300_2.ogg", "Normal\DistanceAbsolute1\dist300_3.ogg"};
		dist400[] = {"Normal\DistanceAbsolute1\dist400_1.ogg", "Normal\DistanceAbsolute1\dist400_2.ogg", "Normal\DistanceAbsolute1\dist400_3.ogg"};
		dist500[] = {"Normal\DistanceAbsolute1\dist500_1.ogg", "Normal\DistanceAbsolute1\dist500_2.ogg", "Normal\DistanceAbsolute1\dist500_3.ogg"};
		dist600[] = {"Normal\DistanceAbsolute1\dist600_1.ogg", "Normal\DistanceAbsolute1\dist600_2.ogg", "Normal\DistanceAbsolute1\dist600_3.ogg"};
		dist700[] = {"Normal\DistanceAbsolute1\dist700_1.ogg", "Normal\DistanceAbsolute1\dist700_2.ogg", "Normal\DistanceAbsolute1\dist700_3.ogg"};
		dist75[] = {"Normal\DistanceAbsolute1\dist75_1.ogg", "Normal\DistanceAbsolute1\dist75_2.ogg", "Normal\DistanceAbsolute1\dist75_3.ogg"};
		dist800[] = {"Normal\DistanceAbsolute1\dist800_1.ogg", "Normal\DistanceAbsolute1\dist800_2.ogg", "Normal\DistanceAbsolute1\dist800_3.ogg"};
		Dixon[] = {"Normal\020_Names\Dixon.ogg"};
		dloc_base[] = {"Normal\090_MoveLocations\dloc_base.ogg"};
		dloc_RV[] = {"Normal\090_MoveLocations\dloc_RV.ogg"};
		DoNotFire[] = {"Normal\100_Commands\DoNotFire.ogg"};
		DownAndQuiet[] = {"Normal\100_Commands\DownAndQuiet.ogg"};
		DropThatMagazine[] = {"Normal\100_Commands\DropThatMagazine.ogg"};
		DropTheWeapon[] = {"Normal\100_Commands\DropTheWeapon.ogg"};
		DropYourPack[] = {"Normal\100_Commands\DropYourPack.ogg"};
		east[] = {"Normal\DirectionCompass1\east_1.ogg", "Normal\DirectionCompass1\east_2.ogg"};
		echo[] = {"Normal\080_MoveAlphabet\echo.ogg"};
		eight[] = {"Normal\025_Numbers\eight.ogg"};
		eighteen[] = {"Normal\025_Numbers\eighteen.ogg"};
		eighty[] = {"Normal\025_Numbers\eighty.ogg"};
		Eject[] = {"Normal\100_Commands\Eject_1.ogg", "Normal\100_Commands\Eject_2.ogg"};
		eleven[] = {"Normal\025_Numbers\eleven.ogg"};
		Elias[] = {"Normal\020_Names\Elias.ogg"};
		EndangeredE[] = {"Normal\200_CombatShouts\EndangeredE_1.ogg", "Normal\200_CombatShouts\EndangeredE_2.ogg", "Normal\200_CombatShouts\EndangeredE_3.ogg"};
		EnemyDetected[] = {"Normal\150_Reporting\EnemyDetected_1.ogg", "Normal\150_Reporting\EnemyDetected_2.ogg", "Normal\150_Reporting\EnemyDetected_3.ogg", "Normal\150_Reporting\EnemyDetected_4.ogg", "Normal\150_Reporting\EnemyDetected_5.ogg", "Normal\150_Reporting\EnemyDetected_6.ogg", "Normal\150_Reporting\EnemyDetected_7.ogg", "Normal\150_Reporting\EnemyDetected_8.ogg", "Normal\150_Reporting\EnemyDetected_9.ogg", "Normal\150_Reporting\EnemyDetected_10.ogg"};
		Engage[] = {"Normal\015_Targeting\Engage_1.ogg", "Normal\015_Targeting\Engage_2.ogg"};
		EngageAtWill[] = {"Normal\100_Commands\EngageAtWill.ogg"};
		Engaging[] = {"Normal\130_Com_Reply\Engaging.ogg"};
		EngagingTarget[] = {"Normal\130_Com_Reply\EngagingTarget.ogg"};
		Everett[] = {"Normal\020_Names\Everett.ogg"};
		ExplosiveDetected[] = {"Normal\150_Reporting\ExplosiveDetected_1.ogg", "Normal\150_Reporting\ExplosiveDetected_2.ogg", "Normal\150_Reporting\ExplosiveDetected_3.ogg"};
		EyesOnTarget[] = {"Normal\110_Com_Announce\EyesOnTarget.ogg"};
		Fahim[] = {"Normal\020_Names\Fahim.ogg"};
		FallBack[] = {"Normal\100_Commands\FallBack.ogg"};
		fifteen[] = {"Normal\025_Numbers\fifteen.ogg"};
		fifty[] = {"Normal\025_Numbers\fifty.ogg"};
		Fire[] = {"Normal\015_Targeting\Fire_1.ogg", "Normal\015_Targeting\Fire_2.ogg"};
		FireAtWill[] = {"Normal\100_Commands\FireAtWill.ogg"};
		five[] = {"Normal\025_Numbers\five.ogg"};
		FlankLeft[] = {"Normal\100_Commands\FlankLeft.ogg"};
		FlankRight[] = {"Normal\100_Commands\FlankRight.ogg"};
		Flares[] = {"Normal\005_Weapons\Flares.ogg"};
		FlashlightsOff[] = {"Normal\100_Commands\FlashlightsOff.ogg"};
		FlashlightsOn[] = {"Normal\100_Commands\FlashlightsOn.ogg"};
		FormColumn[] = {"Normal\100_Commands\FormColumn.ogg"};
		FormDiamond[] = {"Normal\100_Commands\FormDiamond.ogg"};
		FormEcholonLeft[] = {"Normal\100_Commands\FormEcholonLeft.ogg"};
		FormEcholonRight[] = {"Normal\100_Commands\FormEcholonRight.ogg"};
		FormFile[] = {"Normal\100_Commands\FormFile.ogg"};
		FormLine[] = {"Normal\100_Commands\FormLine.ogg"};
		FormOnMe[] = {"Normal\100_Commands\FormOnMe.ogg"};
		FormStaggeredColumn[] = {"Normal\100_Commands\FormStaggeredColumn.ogg"};
		FormVee[] = {"Normal\100_Commands\FormVee.ogg"};
		FormWedge[] = {"Normal\100_Commands\FormWedge.ogg"};
		forty[] = {"Normal\025_Numbers\forty.ogg"};
		four[] = {"Normal\025_Numbers\four.ogg"};
		fourteen[] = {"Normal\025_Numbers\fourteen.ogg"};
		Fox[] = {"Normal\020_Names\Fox.ogg"};
		foxtrot[] = {"Normal\080_MoveAlphabet\foxtrot.ogg"};
		Franklin[] = {"Normal\020_Names\Franklin.ogg"};
		FreeToEngage[] = {"Normal\100_Commands\FreeToEngage.ogg"};
		front[] = {"Normal\DirectionRelative1\front_1.ogg", "Normal\DirectionRelative1\front_2.ogg"};
		Frost[] = {"Normal\020_Names\Frost.ogg"};
		FuelCritical[] = {"Normal\140_Com_Status\FuelCritical_1.ogg", "Normal\140_Com_Status\FuelCritical_2.ogg"};
		FuelLow[] = {"Normal\140_Com_Status\FuelLow_1.ogg", "Normal\140_Com_Status\FuelLow_2.ogg"};
		FXBreathingFast[] = {"Normal\999_FX\FXBreathingFast.ogg"};
		FXBreathingSlow[] = {"Normal\999_FX\FXBreathingSlow.ogg"};
		FXDeath[] = {"Normal\999_FX\FXDeath_1.ogg", "Normal\999_FX\FXDeath_2.ogg", "Normal\999_FX\FXDeath_3.ogg", "Normal\999_FX\FXDeath_4.ogg", "Normal\999_FX\FXDeath_5.ogg"};
		FXDrowning[] = {"Normal\999_FX\FXDrowning_1.ogg", "Normal\999_FX\FXDrowning_2.ogg", "Normal\999_FX\FXDrowning_3.ogg", "Normal\999_FX\FXDrowning_4.ogg", "Normal\999_FX\FXDrowning_5.ogg"};
		FXEffort[] = {"Normal\999_FX\FXEffort_1.ogg", "Normal\999_FX\FXEffort_2.ogg", "Normal\999_FX\FXEffort_3.ogg", "Normal\999_FX\FXEffort_4.ogg", "Normal\999_FX\FXEffort_5.ogg"};
		FXHit[] = {"Normal\999_FX\FXHit_1.ogg", "Normal\999_FX\FXHit_2.ogg", "Normal\999_FX\FXHit_3.ogg", "Normal\999_FX\FXHit_4.ogg", "Normal\999_FX\FXHit_5.ogg"};
		FXHurt[] = {"Normal\999_FX\FXHurt_1.ogg", "Normal\999_FX\FXHurt_2.ogg", "Normal\999_FX\FXHurt_3.ogg", "Normal\999_FX\FXHurt_4.ogg", "Normal\999_FX\FXHurt_5.ogg"};
		Gekas[] = {"Normal\020_Names\Gekas.ogg"};
		GenBaseSideEnemyEAST[] = {"Normal\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
		GenBaseSideEnemyGUER[] = {"Normal\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
		GenBaseSideEnemyWEST[] = {"Normal\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
		GenBaseSideFriendlyEAST[] = {"Normal\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
		GenBaseSideFriendlyGUER[] = {"Normal\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
		GenBaseSideFriendlyWEST[] = {"Normal\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
		GenBaseUnlockRespawn1[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
		GenBaseUnlockRespawn2[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
		GenBaseUnlockRespawn3[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
		GenBaseUnlockVehicle1[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
		GenBaseUnlockVehicle2[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
		GenBaseUnlockVehicle3[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
		GenCmdDefend1[] = {"Normal\230_GenericRadioMessages\GenCmdDefend1.ogg"};
		GenCmdDefend2[] = {"Normal\230_GenericRadioMessages\GenCmdDefend2.ogg"};
		GenCmdRTB1[] = {"Normal\230_GenericRadioMessages\GenCmdRTB1.ogg"};
		GenCmdRTB2[] = {"Normal\230_GenericRadioMessages\GenCmdRTB2.ogg"};
		GenCmdSeize1[] = {"Normal\230_GenericRadioMessages\GenCmdSeize1.ogg"};
		GenCmdSeize2[] = {"Normal\230_GenericRadioMessages\GenCmdSeize2.ogg"};
		GenCmdTargetEscort[] = {"Normal\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
		GenCmdTargetFind1[] = {"Normal\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
		GenCmdTargetFind2[] = {"Normal\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
		GenCmdTargetNeutralize1[] = {"Normal\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
		GenCmdTargetNeutralize2[] = {"Normal\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
		GenCmdTargetProtect1[] = {"Normal\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
		GenCmdTargetProtect2[] = {"Normal\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
		GenComplete1[] = {"Normal\230_GenericRadioMessages\GenComplete1.ogg"};
		GenComplete2[] = {"Normal\230_GenericRadioMessages\GenComplete2.ogg"};
		GenComplete3[] = {"Normal\230_GenericRadioMessages\GenComplete3.ogg"};
		GenIncoming1[] = {"Normal\230_GenericRadioMessages\GenIncoming1.ogg"};
		GenIncoming2[] = {"Normal\230_GenericRadioMessages\GenIncoming2.ogg"};
		GenIncoming3[] = {"Normal\230_GenericRadioMessages\GenIncoming3.ogg"};
		GenLeavingAO1[] = {"Normal\230_GenericRadioMessages\GenLeavingAO1.ogg"};
		GenLeavingAO2[] = {"Normal\230_GenericRadioMessages\GenLeavingAO2.ogg"};
		GenLeavingAO3[] = {"Normal\230_GenericRadioMessages\GenLeavingAO3.ogg"};
		GenLosing1[] = {"Normal\230_GenericRadioMessages\GenLosing1.ogg"};
		GenLosing2[] = {"Normal\230_GenericRadioMessages\GenLosing2.ogg"};
		GenLosing3[] = {"Normal\230_GenericRadioMessages\GenLosing3.ogg"};
		GenLost1[] = {"Normal\230_GenericRadioMessages\GenLost1.ogg"};
		GenLost2[] = {"Normal\230_GenericRadioMessages\GenLost2.ogg"};
		GenLost3[] = {"Normal\230_GenericRadioMessages\GenLost3.ogg"};
		GenReinforcementsArrived1[] = {"Normal\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
		GenReinforcementsArrived2[] = {"Normal\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
		GenReinforcementsConfirmed1[] = {"Normal\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
		GenReinforcementsConfirmed2[] = {"Normal\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
		GenReinforcementsRejected1[] = {"Normal\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
		GenReinforcementsRejected2[] = {"Normal\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
		GenTime1[] = {"Normal\230_GenericRadioMessages\GenTime1.ogg"};
		GenTime2[] = {"Normal\230_GenericRadioMessages\GenTime2.ogg"};
		GenTime3[] = {"Normal\230_GenericRadioMessages\GenTime3.ogg"};
		GetInThatVehicle[] = {"Normal\100_Commands\GetInThatVehicle.ogg"};
		GetInThatVehicleCommander[] = {"Normal\100_Commands\GetInThatVehicleCommander.ogg"};
		GetInThatVehicleDriver[] = {"Normal\100_Commands\GetInThatVehicleDriver.ogg"};
		GetInThatVehicleGunner[] = {"Normal\100_Commands\GetInThatVehicleGunner.ogg"};
		GetInThatVehiclePilot[] = {"Normal\100_Commands\GetInThatVehiclePilot.ogg"};
		GetReadyToFight[] = {"Normal\100_Commands\GetReadyToFight.ogg"};
		GetSupport[] = {"Normal\100_Commands\GetSupport.ogg"};
		Ghost[] = {"Normal\020_Names\Ghost.ogg"};
		Givens[] = {"Normal\020_Names\Givens.ogg"};
		golf[] = {"Normal\080_MoveAlphabet\golf.ogg"};
		GoProne[] = {"Normal\100_Commands\GoProne_1.ogg", "Normal\100_Commands\GoProne_2.ogg"};
		GoToThatMedic[] = {"Normal\100_Commands\GoToThatMedic.ogg"};
		GoToTheMedic[] = {"Normal\100_Commands\GoToTheMedic.ogg"};
		greenTeam[] = {"Normal\030_Teams\greenTeam.ogg"};
		grid_eight[] = {"Normal\035_NumbersGrid\grid_eight_1.ogg", "Normal\035_NumbersGrid\grid_eight_2.ogg"};
		grid_eight_2[] = {"Normal\035_NumbersGrid\grid_eight_2_1.ogg", "Normal\035_NumbersGrid\grid_eight_2_2.ogg"};
		grid_eight_3[] = {"Normal\035_NumbersGrid\grid_eight_3_1.ogg", "Normal\035_NumbersGrid\grid_eight_3_2.ogg"};
		grid_five[] = {"Normal\035_NumbersGrid\grid_five_1.ogg", "Normal\035_NumbersGrid\grid_five_2.ogg"};
		grid_five_2[] = {"Normal\035_NumbersGrid\grid_five_2_1.ogg", "Normal\035_NumbersGrid\grid_five_2_2.ogg"};
		grid_five_3[] = {"Normal\035_NumbersGrid\grid_five_3_1.ogg", "Normal\035_NumbersGrid\grid_five_3_2.ogg"};
		grid_four[] = {"Normal\035_NumbersGrid\grid_four_1.ogg", "Normal\035_NumbersGrid\grid_four_2.ogg"};
		grid_four_2[] = {"Normal\035_NumbersGrid\grid_four_2_1.ogg", "Normal\035_NumbersGrid\grid_four_2_2.ogg"};
		grid_four_3[] = {"Normal\035_NumbersGrid\grid_four_3_1.ogg", "Normal\035_NumbersGrid\grid_four_3_2.ogg"};
		grid_move_to_eight[] = {"Normal\035_NumbersGrid\grid_move_to_eight_1.ogg", "Normal\035_NumbersGrid\grid_move_to_eight_2.ogg"};
		grid_move_to_five[] = {"Normal\035_NumbersGrid\grid_move_to_five_1.ogg", "Normal\035_NumbersGrid\grid_move_to_five_2.ogg"};
		grid_move_to_four[] = {"Normal\035_NumbersGrid\grid_move_to_four_1.ogg", "Normal\035_NumbersGrid\grid_move_to_four_2.ogg"};
		grid_move_to_nine[] = {"Normal\035_NumbersGrid\grid_move_to_nine_1.ogg", "Normal\035_NumbersGrid\grid_move_to_nine_2.ogg"};
		grid_move_to_one[] = {"Normal\035_NumbersGrid\grid_move_to_one_1.ogg", "Normal\035_NumbersGrid\grid_move_to_one_2.ogg"};
		grid_move_to_seven[] = {"Normal\035_NumbersGrid\grid_move_to_seven_1.ogg", "Normal\035_NumbersGrid\grid_move_to_seven_2.ogg"};
		grid_move_to_six[] = {"Normal\035_NumbersGrid\grid_move_to_six_1.ogg", "Normal\035_NumbersGrid\grid_move_to_six_2.ogg"};
		grid_move_to_three[] = {"Normal\035_NumbersGrid\grid_move_to_three_1.ogg", "Normal\035_NumbersGrid\grid_move_to_three_2.ogg"};
		grid_move_to_two[] = {"Normal\035_NumbersGrid\grid_move_to_two_1.ogg", "Normal\035_NumbersGrid\grid_move_to_two_2.ogg"};
		grid_move_to_zero[] = {"Normal\035_NumbersGrid\grid_move_to_zero_1.ogg", "Normal\035_NumbersGrid\grid_move_to_zero_2.ogg"};
		grid_nine[] = {"Normal\035_NumbersGrid\grid_nine_1.ogg", "Normal\035_NumbersGrid\grid_nine_2.ogg"};
		grid_nine_2[] = {"Normal\035_NumbersGrid\grid_nine_2_1.ogg", "Normal\035_NumbersGrid\grid_nine_2_2.ogg"};
		grid_nine_3[] = {"Normal\035_NumbersGrid\grid_nine_3_1.ogg", "Normal\035_NumbersGrid\grid_nine_3_2.ogg"};
		grid_one[] = {"Normal\035_NumbersGrid\grid_one_1.ogg", "Normal\035_NumbersGrid\grid_one_2.ogg"};
		grid_one_2[] = {"Normal\035_NumbersGrid\grid_one_2_1.ogg", "Normal\035_NumbersGrid\grid_one_2_2.ogg"};
		grid_one_3[] = {"Normal\035_NumbersGrid\grid_one_3_1.ogg", "Normal\035_NumbersGrid\grid_one_3_2.ogg"};
		grid_seven[] = {"Normal\035_NumbersGrid\grid_seven_1.ogg", "Normal\035_NumbersGrid\grid_seven_2.ogg"};
		grid_seven_2[] = {"Normal\035_NumbersGrid\grid_seven_2_1.ogg", "Normal\035_NumbersGrid\grid_seven_2_2.ogg"};
		grid_seven_3[] = {"Normal\035_NumbersGrid\grid_seven_3_1.ogg", "Normal\035_NumbersGrid\grid_seven_3_2.ogg"};
		grid_six[] = {"Normal\035_NumbersGrid\grid_six_1.ogg", "Normal\035_NumbersGrid\grid_six_2.ogg"};
		grid_six_2[] = {"Normal\035_NumbersGrid\grid_six_2_1.ogg", "Normal\035_NumbersGrid\grid_six_2_2.ogg"};
		grid_six_3[] = {"Normal\035_NumbersGrid\grid_six_3_1.ogg", "Normal\035_NumbersGrid\grid_six_3_2.ogg"};
		grid_three[] = {"Normal\035_NumbersGrid\grid_three_1.ogg", "Normal\035_NumbersGrid\grid_three_2.ogg"};
		grid_three_2[] = {"Normal\035_NumbersGrid\grid_three_2_1.ogg", "Normal\035_NumbersGrid\grid_three_2_2.ogg"};
		grid_three_3[] = {"Normal\035_NumbersGrid\grid_three_3_1.ogg", "Normal\035_NumbersGrid\grid_three_3_2.ogg"};
		grid_two[] = {"Normal\035_NumbersGrid\grid_two_1.ogg", "Normal\035_NumbersGrid\grid_two_2.ogg"};
		grid_two_2[] = {"Normal\035_NumbersGrid\grid_two_2_1.ogg", "Normal\035_NumbersGrid\grid_two_2_2.ogg"};
		grid_two_3[] = {"Normal\035_NumbersGrid\grid_two_3_1.ogg", "Normal\035_NumbersGrid\grid_two_3_2.ogg"};
		grid_zero[] = {"Normal\035_NumbersGrid\grid_zero_1.ogg", "Normal\035_NumbersGrid\grid_zero_2.ogg"};
		grid_zero_2[] = {"Normal\035_NumbersGrid\grid_zero_2_1.ogg", "Normal\035_NumbersGrid\grid_zero_2_2.ogg"};
		grid_zero_3[] = {"Normal\035_NumbersGrid\grid_zero_3_1.ogg", "Normal\035_NumbersGrid\grid_zero_3_2.ogg"};
		Habibi[] = {"Normal\020_Names\Habibi.ogg"};
		Halt[] = {"Normal\100_Commands\Halt.ogg"};
		Hardy[] = {"Normal\020_Names\Hardy.ogg"};
		Hawkins[] = {"Normal\020_Names\Hawkins.ogg"};
		HealThatSoldier[] = {"Normal\100_Commands\HealThatSoldier.ogg"};
		HealthIAmBadlyHurt[] = {"Normal\140_Com_Status\HealthIAmBadlyHurt.ogg"};
		HealthIAmWounded[] = {"Normal\140_Com_Status\HealthIAmWounded.ogg"};
		HealthINeedHelpNow[] = {"Normal\140_Com_Status\HealthINeedHelpNow.ogg"};
		HealthINeedSomeHelpHere[] = {"Normal\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
		HealthInjured[] = {"Normal\140_Com_Status\HealthInjured.ogg"};
		HealthMedic[] = {"Normal\140_Com_Status\HealthMedic.ogg"};
		HealthNeedHelp[] = {"Normal\140_Com_Status\HealthNeedHelp.ogg"};
		HealthNeedMedicNow[] = {"Normal\140_Com_Status\HealthNeedMedicNow.ogg"};
		HealthSomebodyHelpMe[] = {"Normal\140_Com_Status\HealthSomebodyHelpMe.ogg"};
		HealthWounded[] = {"Normal\140_Com_Status\HealthWounded.ogg"};
		heat[] = {"Normal\005_Weapons\heat.ogg"};
		HeIsDeadE[] = {"Normal\140_Com_Status\HeIsDeadE.ogg"};
		HeIsDown[] = {"Normal\110_Com_Announce\HeIsDown.ogg"};
		HeIsHitE[] = {"Normal\140_Com_Status\HeIsHitE.ogg"};
		HelpThatSoldier[] = {"Normal\100_Commands\HelpThatSoldier.ogg"};
		HoldFire[] = {"Normal\100_Commands\HoldFire.ogg"};
		HostileDown[] = {"Normal\110_Com_Announce\HostileDown.ogg"};
		hotel[] = {"Normal\080_MoveAlphabet\hotel.ogg"};
		hundred[] = {"Normal\025_Numbers\hundred.ogg"};
		IAmReady[] = {"Normal\110_Com_Announce\IAmReady.ogg"};
		IAmTheNewActual[] = {"Normal\110_Com_Announce\IAmTheNewActual.ogg"};
		IncomingGrenadeE_1[] = {"Normal\200_CombatShouts\IncomingGrenadeE_1.ogg"};
		IncomingGrenadeE_2[] = {"Normal\200_CombatShouts\IncomingGrenadeE_2.ogg"};
		IncomingGrenadeE_3[] = {"Normal\200_CombatShouts\IncomingGrenadeE_3.ogg"};
		india[] = {"Normal\080_MoveAlphabet\india.ogg"};
		IVeGotHim[] = {"Normal\110_Com_Announce\IVeGotHim.ogg"};
		Jackson[] = {"Normal\020_Names\Jackson.ogg"};
		James[] = {"Normal\020_Names\James.ogg"};
		Jawadi[] = {"Normal\020_Names\Jawadi.ogg"};
		Jester[] = {"Normal\020_Names\Jester.ogg"};
		JoinThatGroup[] = {"Normal\100_Commands\JoinThatGroup.ogg"};
		juliet[] = {"Normal\080_MoveAlphabet\juliet.ogg"};
		KeepFocused[] = {"Normal\100_Commands\KeepFocused.ogg"};
		KeepFormation[] = {"Normal\100_Commands\KeepFormation.ogg"};
		Kerry[] = {"Normal\020_Names\Kerry.ogg"};
		kilo[] = {"Normal\080_MoveAlphabet\kilo.ogg"};
		Korneedler[] = {"Normal\020_Names\Korneedler.ogg"};
		Kouris[] = {"Normal\020_Names\Kouris.ogg"};
		Kushan[] = {"Normal\020_Names\Kushan.ogg"};
		Lacey[] = {"Normal\020_Names\Lacey.ogg"};
		Larkin[] = {"Normal\020_Names\Larkin.ogg"};
		left[] = {"Normal\DirectionRelative1\left_1.ogg", "Normal\DirectionRelative1\left_2.ogg"};
		Leventis[] = {"Normal\020_Names\Leventis.ogg"};
		Levine[] = {"Normal\020_Names\Levine.ogg"};
		LightThatFire[] = {"Normal\100_Commands\LightThatFire.ogg"};
		lima[] = {"Normal\080_MoveAlphabet\lima.ogg"};
		loc_beach[] = {"Normal\090_MoveLocations\loc_beach.ogg"};
		loc_city[] = {"Normal\090_MoveLocations\loc_city.ogg"};
		loc_forest[] = {"Normal\090_MoveLocations\loc_forest.ogg"};
		loc_town[] = {"Normal\090_MoveLocations\loc_town.ogg"};
		loc_village[] = {"Normal\090_MoveLocations\loc_village.ogg"};
		LockAndLoad[] = {"Normal\100_Commands\LockAndLoad.ogg"};
		loop[] = {"\A3\Dubbing_Radio_F\Sfx\radionoise1.ogg"};
		Lopez[] = {"Normal\020_Names\Lopez.ogg"};
		ManDownE[] = {"Normal\140_Com_Status\ManDownE_1.ogg", "Normal\140_Com_Status\ManDownE_2.ogg", "Normal\140_Com_Status\ManDownE_3.ogg"};
		ManualFire[] = {"Normal\100_Commands\ManualFire_1.ogg", "Normal\100_Commands\ManualFire_2.ogg", "Normal\100_Commands\ManualFire_3.ogg"};
		Markos[] = {"Normal\020_Names\Markos.ogg"};
		Martinez[] = {"Normal\020_Names\Martinez.ogg"};
		Masood[] = {"Normal\020_Names\Masood.ogg"};
		McKay[] = {"Normal\020_Names\McKay.ogg"};
		McKendrick[] = {"Normal\020_Names\McKendrick.ogg"};
		mgun[] = {"Normal\005_Weapons\mgun.ogg"};
		micOut[] = {"\A3\Dubbing_Radio_F\Sfx\out2a.ogg"};
		micOut1[] = {"\A3\Dubbing_Radio_F\Sfx\in2a.ogg"};
		micOut2[] = {"\A3\Dubbing_Radio_F\Sfx\in2b.ogg"};
		micOut3[] = {"\A3\Dubbing_Radio_F\Sfx\in2c.ogg"};
		micOut4[] = {"\A3\Dubbing_Radio_F\Sfx\out2a.ogg"};
		micOut5[] = {"\A3\Dubbing_Radio_F\Sfx\out2b.ogg"};
		micOut6[] = {"\A3\Dubbing_Radio_F\Sfx\out2c.ogg"};
		mike[] = {"Normal\080_MoveAlphabet\mike.ogg"};
		Miller[] = {"Normal\020_Names\Miller.ogg"};
		MineDetected[] = {"Normal\150_Reporting\MineDetected_1.ogg", "Normal\150_Reporting\MineDetected_2.ogg", "Normal\150_Reporting\MineDetected_3.ogg"};
		missiles[] = {"Normal\005_Weapons\missiles.ogg"};
		move_dist100[] = {"Normal\040_MoveDistanceAbsolute1\move_dist100.ogg"};
		move_dist1000[] = {"Normal\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
		move_dist1500[] = {"Normal\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
		move_dist200[] = {"Normal\040_MoveDistanceAbsolute1\move_dist200.ogg"};
		move_dist2000[] = {"Normal\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
		move_dist2500[] = {"Normal\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
		move_dist300[] = {"Normal\040_MoveDistanceAbsolute1\move_dist300.ogg"};
		move_dist400[] = {"Normal\040_MoveDistanceAbsolute1\move_dist400.ogg"};
		move_dist500[] = {"Normal\040_MoveDistanceAbsolute1\move_dist500.ogg"};
		move_dist600[] = {"Normal\040_MoveDistanceAbsolute1\move_dist600.ogg"};
		move_dist700[] = {"Normal\040_MoveDistanceAbsolute1\move_dist700.ogg"};
		move_dist75[] = {"Normal\040_MoveDistanceAbsolute1\move_dist75.ogg"};
		move_dist800[] = {"Normal\040_MoveDistanceAbsolute1\move_dist800.ogg"};
		moveBack[] = {"Normal\070_MoveDirectionRelative1\moveBack_1.ogg", "Normal\070_MoveDirectionRelative1\moveBack_2.ogg"};
		moveLeft[] = {"Normal\070_MoveDirectionRelative1\moveLeft_1.ogg", "Normal\070_MoveDirectionRelative1\moveLeft_2.ogg"};
		moveRight[] = {"Normal\070_MoveDirectionRelative1\moveRight_1.ogg", "Normal\070_MoveDirectionRelative1\moveRight_2.ogg"};
		MoveToCargo[] = {"Normal\100_Commands\MoveToCargo.ogg"};
		moveUp[] = {"Normal\070_MoveDirectionRelative1\moveUp_1.ogg", "Normal\070_MoveDirectionRelative1\moveUp_2.ogg"};
		Nazari[] = {"Normal\020_Names\Nazari.ogg"};
		Negative[] = {"Normal\130_Com_Reply\Negative_1.ogg", "Normal\130_Com_Reply\Negative_2.ogg", "Normal\130_Com_Reply\Negative_3.ogg"};
		NegativeCantMakeItThere[] = {"Normal\130_Com_Reply\NegativeCantMakeItThere.ogg"};
		Nichols[] = {"Normal\020_Names\Nichols.ogg"};
		Nicolo[] = {"Normal\020_Names\Nicolo.ogg"};
		Nikas[] = {"Normal\020_Names\Nikas.ogg"};
		nine[] = {"Normal\025_Numbers\nine.ogg"};
		nineteen[] = {"Normal\025_Numbers\nineteen.ogg"};
		ninety[] = {"Normal\025_Numbers\ninety.ogg"};
		NoCanDo[] = {"Normal\130_Com_Reply\NoCanDo_1.ogg", "Normal\130_Com_Reply\NoCanDo_2.ogg"};
		north[] = {"Normal\DirectionCompass1\north_1.ogg", "Normal\DirectionCompass1\north_2.ogg"};
		northEast[] = {"Normal\DirectionCompass1\northEast_1.ogg", "Normal\DirectionCompass1\northEast_2.ogg"};
		Northgate[] = {"Normal\020_Names\Northgate.ogg"};
		northWest[] = {"Normal\DirectionCompass1\northWest_1.ogg", "Normal\DirectionCompass1\northWest_2.ogg"};
		NoTarget[] = {"Normal\015_Targeting\NoTarget_1.ogg", "Normal\015_Targeting\NoTarget_2.ogg"};
		november[] = {"Normal\080_MoveAlphabet\november.ogg"};
		obj_church[] = {"Normal\090_MoveLocations\obj_church.ogg"};
		obj_fortress[] = {"Normal\090_MoveLocations\obj_fortress.ogg"};
		obj_lighthouse[] = {"Normal\090_MoveLocations\obj_lighthouse.ogg"};
		obj_powersolar[] = {"Normal\090_MoveLocations\obj_powersolar.ogg"};
		obj_powerwind[] = {"Normal\090_MoveLocations\obj_powerwind.ogg"};
		obj_transmitter[] = {"Normal\090_MoveLocations\obj_transmitter.ogg"};
		ObserveThatPosition[] = {"Normal\100_Commands\ObserveThatPosition.ogg"};
		OConnor[] = {"Normal\020_Names\OConnor.ogg"};
		one[] = {"Normal\025_Numbers\one.ogg"};
		OnTheMove[] = {"Normal\130_Com_Reply\OnTheMove.ogg"};
		OnTheWay[] = {"Normal\130_Com_Reply\OnTheWay_1.ogg", "Normal\130_Com_Reply\OnTheWay_2.ogg", "Normal\130_Com_Reply\OnTheWay_3.ogg"};
		OnYourFeet[] = {"Normal\100_Commands\OnYourFeet.ogg"};
		OpenThatDoor[] = {"Normal\100_Commands\OpenThatDoor.ogg"};
		OpenUpYourPack[] = {"Normal\100_Commands\OpenUpYourPack.ogg"};
		oscar[] = {"Normal\080_MoveAlphabet\oscar.ogg"};
		OutOfFirstAidKits[] = {"Normal\140_Com_Status\OutOfFirstAidKits_1.ogg", "Normal\140_Com_Status\OutOfFirstAidKits_2.ogg"};
		Panas[] = {"Normal\020_Names\Panas.ogg"};
		papa[] = {"Normal\080_MoveAlphabet\papa.ogg"};
		PatchYourself[] = {"Normal\100_Commands\PatchYourself.ogg"};
		Patterson[] = {"Normal\020_Names\Patterson.ogg"};
		pause[] = {"\A3\Dubbing_Radio_F\Sfx\empty01sec.ogg"};
		Petros[] = {"Normal\020_Names\Petros.ogg"};
		PointersOff[] = {"Normal\100_Commands\PointersOff.ogg"};
		PointersOn[] = {"Normal\100_Commands\PointersOn.ogg"};
		PrepareForContact[] = {"Normal\100_Commands\PrepareForContact.ogg"};
		PutOutThatFire[] = {"Normal\100_Commands\PutOutThatFire.ogg"};
		quebec[] = {"Normal\080_MoveAlphabet\quebec.ogg"};
		RallyUp[] = {"Normal\100_Commands\RallyUp.ogg"};
		Razer[] = {"Normal\020_Names\Razer.ogg"};
		Ready[] = {"Normal\110_Com_Announce\Ready.ogg"};
		ReadyForOrders[] = {"Normal\110_Com_Announce\ReadyForOrders.ogg"};
		ReadyToFire[] = {"Normal\110_Com_Announce\ReadyToFire.ogg"};
		Rearm[] = {"Normal\100_Commands\Rearm.ogg"};
		redTeam[] = {"Normal\030_Teams\redTeam.ogg"};
		RefuelThatVehicle[] = {"Normal\100_Commands\RefuelThatVehicle.ogg"};
		RefuelTheVehicle[] = {"Normal\100_Commands\RefuelTheVehicle.ogg"};
		Regroup[] = {"Normal\100_Commands\Regroup.ogg"};
		Relax[] = {"Normal\100_Commands\Relax.ogg"};
		ReloadingE[] = {"Normal\200_CombatShouts\ReloadingE_1.ogg", "Normal\200_CombatShouts\ReloadingE_2.ogg", "Normal\200_CombatShouts\ReloadingE_3.ogg", "Normal\200_CombatShouts\ReloadingE_4.ogg", "Normal\200_CombatShouts\ReloadingE_5.ogg", "Normal\200_CombatShouts\ReloadingE_6.ogg", "Normal\200_CombatShouts\ReloadingE_7.ogg"};
		RepairThatVehicle[] = {"Normal\100_Commands\RepairThatVehicle.ogg"};
		RepairTheVehicle[] = {"Normal\100_Commands\RepairTheVehicle.ogg"};
		RepeatLastOver[] = {"Normal\120_Com_Ask\RepeatLastOver.ogg"};
		reportBack[] = {"Normal\DirectionRelative3\reportBack_1.ogg", "Normal\DirectionRelative3\reportBack_2.ogg"};
		reportFront[] = {"Normal\DirectionRelative3\reportFront_1.ogg", "Normal\DirectionRelative3\reportFront_2.ogg"};
		ReportIn[] = {"Normal\120_Com_Ask\ReportIn.ogg"};
		reportLeft[] = {"Normal\DirectionRelative3\reportLeft_1.ogg", "Normal\DirectionRelative3\reportLeft_2.ogg"};
		ReportPosition[] = {"Normal\120_Com_Ask\ReportPosition.ogg"};
		reportRight[] = {"Normal\DirectionRelative3\reportRight_1.ogg", "Normal\DirectionRelative3\reportRight_2.ogg"};
		RequestAccomplishedSGArty[] = {"Normal\220_Support\RequestAccomplishedSGArty.ogg"};
		RequestAccomplishedSGCASBombing[] = {"Normal\220_Support\RequestAccomplishedSGCASBombing.ogg"};
		RequestAccomplishedSGCASHelicopter[] = {"Normal\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
		RequestAccomplishedSGSupplyDrop[] = {"Normal\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
		RequestAccomplishedSGTransport[] = {"Normal\220_Support\RequestAccomplishedSGTransport.ogg"};
		RequestAccomplishedSGUAV[] = {"Normal\220_Support\RequestAccomplishedSGUAV.ogg"};
		RequestAcknowledgedSGArty[] = {"Normal\220_Support\RequestAcknowledgedSGArty.ogg"};
		RequestAcknowledgedSGCASBombing[] = {"Normal\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
		RequestAcknowledgedSGCASHelicopter[] = {"Normal\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
		RequestAcknowledgedSGSupplyDrop[] = {"Normal\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
		RequestAcknowledgedSGUAV[] = {"Normal\220_Support\RequestAcknowledgedSGUAV.ogg"};
		RequestAcknowledgedTransport[] = {"Normal\220_Support\RequestAcknowledgedTransport.ogg"};
		RequestingSupport[] = {"Normal\100_Commands\RequestingSupport.ogg"};
		ReturnToFormation[] = {"Normal\100_Commands\ReturnToFormation.ogg"};
		Reynolds[] = {"Normal\020_Names\Reynolds.ogg"};
		right[] = {"Normal\DirectionRelative1\right_1.ogg", "Normal\DirectionRelative1\right_2.ogg"};
		Rockets[] = {"Normal\005_Weapons\Rockets.ogg"};
		RocketsPairs[] = {"Normal\005_Weapons\RocketsPairs.ogg"};
		RocketsSalvo[] = {"Normal\005_Weapons\RocketsSalvo.ogg"};
		romeo[] = {"Normal\080_MoveAlphabet\romeo.ogg"};
		Rosi[] = {"Normal\020_Names\Rosi.ogg"};
		RoundsComplete[] = {"Normal\100_Commands\RoundsComplete.ogg"};
		Ryan[] = {"Normal\020_Names\Ryan.ogg"};
		sabot[] = {"Normal\005_Weapons\sabot.ogg"};
		Safe[] = {"Normal\100_Commands\Safe_1.ogg", "Normal\100_Commands\Safe_2.ogg"};
		Samaras[] = {"Normal\020_Names\Samaras.ogg"};
		SayAgainOver[] = {"Normal\120_Com_Ask\SayAgainOver.ogg"};
		ScanHorizon[] = {"Normal\100_Commands\ScanHorizon.ogg"};
		ScratchOne[] = {"Normal\110_Com_Announce\ScratchOne.ogg"};
		ScreamingE[] = {"Normal\200_CombatShouts\ScreamingE_1.ogg", "Normal\200_CombatShouts\ScreamingE_2.ogg", "Normal\200_CombatShouts\ScreamingE_3.ogg", "Normal\200_CombatShouts\ScreamingE_4.ogg"};
		SetCharge[] = {"Normal\100_Commands\SetCharge.ogg"};
		SetTheTimer[] = {"Normal\100_Commands\SetTheTimer.ogg"};
		seven[] = {"Normal\025_Numbers\seven.ogg"};
		seventeen[] = {"Normal\025_Numbers\seventeen.ogg"};
		seventy[] = {"Normal\025_Numbers\seventy.ogg"};
		Siddiqi[] = {"Normal\020_Names\Siddiqi.ogg"};
		sierra[] = {"Normal\080_MoveAlphabet\sierra.ogg"};
		Silence[] = {"Normal\100_Commands\Silence.ogg"};
		Sitrep[] = {"Normal\120_Com_Ask\Sitrep.ogg"};
		six[] = {"Normal\025_Numbers\six.ogg"};
		sixteen[] = {"Normal\025_Numbers\sixteen.ogg"};
		sixty[] = {"Normal\025_Numbers\sixty.ogg"};
		Snake[] = {"Normal\020_Names\Snake.ogg"};
		south[] = {"Normal\DirectionCompass1\south_1.ogg", "Normal\DirectionCompass1\south_2.ogg"};
		southEast[] = {"Normal\DirectionCompass1\southEast_1.ogg", "Normal\DirectionCompass1\southEast_2.ogg"};
		southWest[] = {"Normal\DirectionCompass1\southWest_1.ogg", "Normal\DirectionCompass1\southWest_2.ogg"};
		StandingBy[] = {"Normal\110_Com_Announce\StandingBy.ogg"};
		Stavrou[] = {"Normal\020_Names\Stavrou.ogg"};
		StayAlert[] = {"Normal\100_Commands\StayAlert.ogg"};
		StayBack[] = {"Normal\100_Commands\StayBack.ogg"};
		StayInFormation[] = {"Normal\100_Commands\StayInFormation.ogg"};
		StayLow[] = {"Normal\100_Commands\StayLow.ogg"};
		Stop[] = {"Normal\100_Commands\Stop.ogg"};
		Stranger[] = {"Normal\020_Names\Stranger.ogg"};
		SupportAddedDuringMission[] = {"Normal\220_Support\SupportAddedDuringMission.ogg"};
		Supporting[] = {"Normal\130_Com_Reply\Supporting.ogg"};
		SupportRequestRGArty[] = {"Normal\220_Support\SupportRequestRGArty.ogg"};
		SupportRequestRGCASBombing[] = {"Normal\220_Support\SupportRequestRGCASBombing.ogg"};
		SupportRequestRGCASHelicopter[] = {"Normal\220_Support\SupportRequestRGCASHelicopter.ogg"};
		SupportRequestRGSupplyDrop[] = {"Normal\220_Support\SupportRequestRGSupplyDrop.ogg"};
		SupportRequestRGTransport[] = {"Normal\220_Support\SupportRequestRGTransport.ogg"};
		SupportRequestRGUAV[] = {"Normal\220_Support\SupportRequestRGUAV.ogg"};
		Suppressing[] = {"Normal\130_Com_Reply\Suppressing_1.ogg", "Normal\130_Com_Reply\Suppressing_2.ogg"};
		SuppressingE[] = {"Normal\200_CombatShouts\SuppressingE_1.ogg", "Normal\200_CombatShouts\SuppressingE_2.ogg", "Normal\200_CombatShouts\SuppressingE_3.ogg", "Normal\200_CombatShouts\SuppressingE_4.ogg"};
		SuppressiveFire[] = {"Normal\100_Commands\SuppressiveFire.ogg"};
		SwitchToCommander[] = {"Normal\100_Commands\SwitchToCommander.ogg"};
		SwitchToDriver[] = {"Normal\100_Commands\SwitchToDriver.ogg"};
		SwitchToGunner[] = {"Normal\100_Commands\SwitchToGunner.ogg"};
		Sykes[] = {"Normal\020_Names\Sykes.ogg"};
		TakeCover[] = {"Normal\100_Commands\TakeCover.ogg"};
		TakeThatMagazine[] = {"Normal\100_Commands\TakeThatMagazine.ogg"};
		TakeThatMine[] = {"Normal\100_Commands\TakeThatMine.ogg"};
		TakeThatPack[] = {"Normal\100_Commands\TakeThatPack.ogg"};
		TakeThatWeapon[] = {"Normal\100_Commands\TakeThatWeapon.ogg"};
		TakeTheMagazine[] = {"Normal\100_Commands\TakeTheMagazine.ogg"};
		TakeTheWeapon[] = {"Normal\100_Commands\TakeTheWeapon.ogg"};
		Takhtar[] = {"Normal\020_Names\Takhtar.ogg"};
		TakingCommand[] = {"Normal\110_Com_Announce\TakingCommand.ogg"};
		tango[] = {"Normal\080_MoveAlphabet\tango.ogg"};
		Tanny[] = {"Normal\020_Names\Tanny.ogg"};
		Target[] = {"Normal\015_Targeting\Target_1.ogg", "Normal\015_Targeting\Target_2.ogg"};
		TargetAcquired[] = {"Normal\110_Com_Announce\TargetAcquired.ogg"};
		TargetEliminated[] = {"Normal\110_Com_Announce\TargetEliminated.ogg"};
		TargetInSight[] = {"Normal\110_Com_Announce\TargetInSight.ogg"};
		TargetIsDown[] = {"Normal\110_Com_Announce\TargetIsDown.ogg"};
		TargetIsNeutralized[] = {"Normal\110_Com_Announce\TargetIsNeutralized.ogg"};
		Taylor[] = {"Normal\020_Names\Taylor.ogg"};
		ten[] = {"Normal\025_Numbers\ten.ogg"};
		Thanos[] = {"Normal\020_Names\Thanos.ogg"};
		thirteen[] = {"Normal\025_Numbers\thirteen.ogg"};
		thirty[] = {"Normal\025_Numbers\thirty.ogg"};
		three[] = {"Normal\025_Numbers\three.ogg"};
		ThrowingGrenadeE_1[] = {"Normal\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
		ThrowingGrenadeE_2[] = {"Normal\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
		ThrowingGrenadeE_3[] = {"Normal\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
		ThrowingSmokeE_1[] = {"Normal\200_CombatShouts\ThrowingSmokeE_1.ogg"};
		ThrowingSmokeE_2[] = {"Normal\200_CombatShouts\ThrowingSmokeE_2.ogg"};
		TransportSGLZCoordinatesSelected[] = {"Normal\220_Support\TransportSGLZCoordinatesSelected.ogg"};
		TransportSGWelcomeAboard[] = {"Normal\220_Support\TransportSGWelcomeAboard.ogg"};
		twelve[] = {"Normal\025_Numbers\twelve.ogg"};
		twenty[] = {"Normal\025_Numbers\twenty.ogg"};
		two[] = {"Normal\025_Numbers\two.ogg"};
		UnderFireE[] = {"Normal\200_CombatShouts\UnderFireE_1.ogg", "Normal\200_CombatShouts\UnderFireE_2.ogg", "Normal\200_CombatShouts\UnderFireE_3.ogg", "Normal\200_CombatShouts\UnderFireE_4.ogg", "Normal\200_CombatShouts\UnderFireE_5.ogg", "Normal\200_CombatShouts\UnderFireE_6.ogg"};
		uniform[] = {"Normal\080_MoveAlphabet\uniform.ogg"};
		UnitDestroyedHQArty[] = {"Normal\220_Support\UnitDestroyedHQArty.ogg"};
		UnitDestroyedHQCASBombing[] = {"Normal\220_Support\UnitDestroyedHQCASBombing.ogg"};
		UnitDestroyedHQSupplyDrop[] = {"Normal\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
		UnitDestroyedHQTransport[] = {"Normal\220_Support\UnitDestroyedHQTransport.ogg"};
		UnitDestroyedHQUAV[] = {"Normal\220_Support\UnitDestroyedHQUAV.ogg"};
		Vega[] = {"Normal\020_Names\Vega.ogg"};
		veh_air_gunship_p[] = {"Normal\010_Vehicles\veh_air_gunship_p.ogg"};
		veh_air_gunship_s[] = {"Normal\010_Vehicles\veh_air_gunship_s.ogg"};
		veh_air_helicopter_p[] = {"Normal\010_Vehicles\veh_air_helicopter_p.ogg"};
		veh_air_helicopter_s[] = {"Normal\010_Vehicles\veh_air_helicopter_s.ogg"};
		veh_air_p[] = {"Normal\010_Vehicles\veh_air_p.ogg"};
		veh_air_parachute_p[] = {"Normal\010_Vehicles\veh_air_parachute_p.ogg"};
		veh_air_parachute_s[] = {"Normal\010_Vehicles\veh_air_parachute_s.ogg"};
		veh_air_plane_p[] = {"Normal\010_Vehicles\veh_air_plane_p.ogg"};
		veh_air_plane_s[] = {"Normal\010_Vehicles\veh_air_plane_s.ogg"};
		veh_air_s[] = {"Normal\010_Vehicles\veh_air_s.ogg"};
		veh_air_uav_p[] = {"Normal\010_Vehicles\veh_air_uav_p.ogg"};
		veh_air_uav_s[] = {"Normal\010_Vehicles\veh_air_uav_s.ogg"};
		veh_infantry_AA_p[] = {"Normal\010_Vehicles\veh_infantry_AA_p.ogg"};
		veh_infantry_AA_s[] = {"Normal\010_Vehicles\veh_infantry_AA_s.ogg"};
		veh_infantry_AT_p[] = {"Normal\010_Vehicles\veh_infantry_AT_p.ogg"};
		veh_infantry_AT_s[] = {"Normal\010_Vehicles\veh_infantry_AT_s.ogg"};
		veh_infantry_civilian_p[] = {"Normal\010_Vehicles\veh_infantry_civilian_p.ogg"};
		veh_infantry_civilian_s[] = {"Normal\010_Vehicles\veh_infantry_civilian_s.ogg"};
		veh_infantry_diver_p[] = {"Normal\010_Vehicles\veh_infantry_diver_p.ogg"};
		veh_infantry_diver_s[] = {"Normal\010_Vehicles\veh_infantry_diver_s.ogg"};
		veh_infantry_medic_p[] = {"Normal\010_Vehicles\veh_infantry_medic_p.ogg"};
		veh_infantry_medic_s[] = {"Normal\010_Vehicles\veh_infantry_medic_s.ogg"};
		veh_infantry_MG_p[] = {"Normal\010_Vehicles\veh_infantry_MG_p.ogg"};
		veh_infantry_MG_s[] = {"Normal\010_Vehicles\veh_infantry_MG_s.ogg"};
		veh_infantry_officer_p[] = {"Normal\010_Vehicles\veh_infantry_officer_p.ogg"};
		veh_infantry_officer_s[] = {"Normal\010_Vehicles\veh_infantry_officer_s.ogg"};
		veh_infantry_p[] = {"Normal\010_Vehicles\veh_infantry_p_1.ogg", "Normal\010_Vehicles\veh_infantry_p_2.ogg", "Normal\010_Vehicles\veh_infantry_p_3.ogg"};
		veh_infantry_pilot_p[] = {"Normal\010_Vehicles\veh_infantry_pilot_p.ogg"};
		veh_infantry_pilot_s[] = {"Normal\010_Vehicles\veh_infantry_pilot_s.ogg"};
		veh_infantry_s[] = {"Normal\010_Vehicles\veh_infantry_s_1.ogg", "Normal\010_Vehicles\veh_infantry_s_2.ogg", "Normal\010_Vehicles\veh_infantry_s_3.ogg"};
		veh_infantry_SF_p[] = {"Normal\010_Vehicles\veh_infantry_SF_p.ogg"};
		veh_infantry_SF_s[] = {"Normal\010_Vehicles\veh_infantry_SF_s.ogg"};
		veh_infantry_Sniper_p[] = {"Normal\010_Vehicles\veh_infantry_Sniper_p.ogg"};
		veh_infantry_Sniper_s[] = {"Normal\010_Vehicles\veh_infantry_Sniper_s.ogg"};
		veh_ship_attackBoat_p[] = {"Normal\010_Vehicles\veh_ship_attackBoat_p.ogg"};
		veh_ship_attackBoat_s[] = {"Normal\010_Vehicles\veh_ship_attackBoat_s.ogg"};
		veh_ship_boat_p[] = {"Normal\010_Vehicles\veh_ship_boat_p.ogg"};
		veh_ship_boat_s[] = {"Normal\010_Vehicles\veh_ship_boat_s.ogg"};
		veh_ship_p[] = {"Normal\010_Vehicles\veh_ship_p.ogg"};
		veh_ship_s[] = {"Normal\010_Vehicles\veh_ship_s.ogg"};
		veh_ship_submarine_p[] = {"Normal\010_Vehicles\veh_ship_submarine_p.ogg"};
		veh_ship_submarine_s[] = {"Normal\010_Vehicles\veh_ship_submarine_s.ogg"};
		veh_static_AA_p[] = {"Normal\010_Vehicles\veh_static_AA_p.ogg"};
		veh_static_AA_s[] = {"Normal\010_Vehicles\veh_static_AA_s.ogg"};
		veh_static_AT_p[] = {"Normal\010_Vehicles\veh_static_AT_p.ogg"};
		veh_static_AT_s[] = {"Normal\010_Vehicles\veh_static_AT_s.ogg"};
		veh_static_cannon_p[] = {"Normal\010_Vehicles\veh_static_cannon_p.ogg"};
		veh_static_cannon_s[] = {"Normal\010_Vehicles\veh_static_cannon_s.ogg"};
		veh_static_GL_p[] = {"Normal\010_Vehicles\veh_static_GL_p.ogg"};
		veh_static_GL_s[] = {"Normal\010_Vehicles\veh_static_GL_s.ogg"};
		veh_Static_MG_p[] = {"Normal\010_Vehicles\veh_Static_MG_p.ogg"};
		veh_Static_MG_s[] = {"Normal\010_Vehicles\veh_Static_MG_s.ogg"};
		veh_Static_mortar_p[] = {"Normal\010_Vehicles\veh_Static_mortar_p.ogg"};
		veh_Static_mortar_s[] = {"Normal\010_Vehicles\veh_Static_mortar_s.ogg"};
		veh_static_p[] = {"Normal\010_Vehicles\veh_static_p.ogg"};
		veh_static_s[] = {"Normal\010_Vehicles\veh_static_s.ogg"};
		veh_unknown_p[] = {"Normal\010_Vehicles\veh_unknown_p.ogg"};
		veh_unknown_s[] = {"Normal\010_Vehicles\veh_unknown_s.ogg"};
		veh_vehicle_APC_p[] = {"Normal\010_Vehicles\veh_vehicle_APC_p.ogg"};
		veh_vehicle_APC_s[] = {"Normal\010_Vehicles\veh_vehicle_APC_s.ogg"};
		veh_vehicle_armedcar_p[] = {"Normal\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
		veh_vehicle_armedcar_s[] = {"Normal\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
		veh_vehicle_armor_p[] = {"Normal\010_Vehicles\veh_vehicle_armor_p.ogg"};
		veh_vehicle_armor_s[] = {"Normal\010_Vehicles\veh_vehicle_armor_s.ogg"};
		veh_vehicle_car_p[] = {"Normal\010_Vehicles\veh_vehicle_car_p.ogg"};
		veh_vehicle_car_s[] = {"Normal\010_Vehicles\veh_vehicle_car_s.ogg"};
		veh_vehicle_mrap_p[] = {"Normal\010_Vehicles\veh_vehicle_mrap_p.ogg"};
		veh_vehicle_mrap_s[] = {"Normal\010_Vehicles\veh_vehicle_mrap_s.ogg"};
		veh_vehicle_p[] = {"Normal\010_Vehicles\veh_vehicle_p.ogg"};
		veh_vehicle_s[] = {"Normal\010_Vehicles\veh_vehicle_s.ogg"};
		veh_vehicle_tank_p[] = {"Normal\010_Vehicles\veh_vehicle_tank_p.ogg"};
		veh_vehicle_tank_s[] = {"Normal\010_Vehicles\veh_vehicle_tank_s.ogg"};
		veh_vehicle_truck_p[] = {"Normal\010_Vehicles\veh_vehicle_truck_p.ogg"};
		veh_vehicle_truck_s[] = {"Normal\010_Vehicles\veh_vehicle_truck_s.ogg"};
		veh_vehicle_ugv_p[] = {"Normal\010_Vehicles\veh_vehicle_ugv_p.ogg"};
		veh_vehicle_ugv_s[] = {"Normal\010_Vehicles\veh_vehicle_ugv_s.ogg"};
		VehBackward[] = {"Normal\100_Commands\VehBackward_1.ogg", "Normal\100_Commands\VehBackward_2.ogg", "Normal\100_Commands\VehBackward_3.ogg"};
		VehFast[] = {"Normal\100_Commands\VehFast_1.ogg", "Normal\100_Commands\VehFast_2.ogg", "Normal\100_Commands\VehFast_3.ogg"};
		VehForward[] = {"Normal\100_Commands\VehForward_1.ogg", "Normal\100_Commands\VehForward_2.ogg", "Normal\100_Commands\VehForward_3.ogg"};
		VehLeft[] = {"Normal\100_Commands\VehLeft_1.ogg", "Normal\100_Commands\VehLeft_2.ogg", "Normal\100_Commands\VehLeft_3.ogg"};
		VehRight[] = {"Normal\100_Commands\VehRight_1.ogg", "Normal\100_Commands\VehRight_2.ogg", "Normal\100_Commands\VehRight_3.ogg"};
		VehSlow[] = {"Normal\100_Commands\VehSlow_1.ogg", "Normal\100_Commands\VehSlow_2.ogg", "Normal\100_Commands\VehSlow_3.ogg"};
		VehStop[] = {"Normal\100_Commands\VehStop_1.ogg", "Normal\100_Commands\VehStop_2.ogg", "Normal\100_Commands\VehStop_3.ogg"};
		victor[] = {"Normal\080_MoveAlphabet\victor.ogg"};
		Viper[] = {"Normal\020_Names\Viper.ogg"};
		Waiting[] = {"Normal\110_Com_Announce\Waiting.ogg"};
		Walker[] = {"Normal\020_Names\Walker.ogg"};
		Wardak[] = {"Normal\020_Names\Wardak.ogg"};
		WatchThatTarget[] = {"Normal\100_Commands\WatchThatTarget.ogg"};
		WeaponsFree[] = {"Normal\100_Commands\WeaponsFree.ogg"};
		WeGotAManDownE[] = {"Normal\140_Com_Status\WeGotAManDownE_1.ogg", "Normal\140_Com_Status\WeGotAManDownE_2.ogg", "Normal\140_Com_Status\WeGotAManDownE_3.ogg"};
		WeLostOneE[] = {"Normal\140_Com_Status\WeLostOneE_1.ogg", "Normal\140_Com_Status\WeLostOneE_2.ogg", "Normal\140_Com_Status\WeLostOneE_3.ogg"};
		west[] = {"Normal\DirectionCompass1\west_1.ogg", "Normal\DirectionCompass1\west_2.ogg"};
		WhatIsYourLocationQ[] = {"Normal\120_Com_Ask\WhatIsYourLocationQ.ogg"};
		whiskey[] = {"Normal\080_MoveAlphabet\whiskey.ogg"};
		whiteTeam[] = {"Normal\030_Teams\whiteTeam.ogg"};
		WitnessKilledE[] = {"Normal\200_CombatShouts\WitnessKilledE_1.ogg", "Normal\200_CombatShouts\WitnessKilledE_2.ogg", "Normal\200_CombatShouts\WitnessKilledE_3.ogg"};
		xmit[] = {"\A3\Dubbing_Radio_F\Sfx\in2a.ogg"};
		xray[] = {"Normal\080_MoveAlphabet\xray.ogg"};
		yankee[] = {"Normal\080_MoveAlphabet\yankee.ogg"};
		yellowTeam[] = {"Normal\030_Teams\yellowTeam.ogg"};
		Yousuf[] = {"Normal\020_Names\Yousuf.ogg"};
		zero[] = {"Normal\025_Numbers\zero.ogg"};
		zulu[] = {"Normal\080_MoveAlphabet\zulu.ogg"};
		class Combat: Normal
		{
			__1[] = {"Combat\Misc\__1.ogg"};
			__10[] = {"Combat\Misc\__10.ogg"};
			__11[] = {"Combat\Misc\__11.ogg"};
			__12[] = {"Combat\Misc\__12.ogg"};
			__13[] = {"Combat\Misc\__13.ogg"};
			__14[] = {"Combat\Misc\__14.ogg"};
			__15[] = {"Combat\Misc\__15.ogg"};
			__1_1[] = {"Combat\Combat\__1_1.ogg"};
			__2[] = {"Combat\Misc\__2.ogg"};
			__2_1[] = {"Combat\Misc\__2_1.ogg"};
			__3[] = {"Combat\Misc\__3.ogg"};
			__4[] = {"Combat\Misc\__4.ogg"};
			__4_CMPS[] = {"Combat\Misc\__4_CMPS.ogg"};
			__5[] = {"Combat\Misc\__5.ogg"};
			__6[] = {"Combat\Misc\__6.ogg"};
			__6_3[] = {"Combat\Misc\__6_3.ogg"};
			__6_ABS[] = {"Combat\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"Combat\Misc\__6_CMPS.ogg"};
			__7[] = {"Combat\Misc\__7.ogg"};
			__7_CLCK[] = {"Combat\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"Combat\Misc\__7_CMPS.ogg"};
			__8[] = {"Combat\Misc\__8.ogg"};
			__9[] = {"Combat\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"Combat\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"Combat\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"Combat\020_Names\Adams.ogg"};
			Advance[] = {"Combat\100_Commands\Advance.ogg"};
			alpha[] = {"Combat\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"Combat\020_Names\Amin.ogg"};
			AmmoCritical[] = {"Combat\140_Com_Status\AmmoCritical_1.ogg", "Combat\140_Com_Status\AmmoCritical_2.ogg", "Combat\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"Combat\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"Combat\020_Names\Anthis.ogg"};
			AreaClear[] = {"Combat\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"Combat\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"Combat\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"Combat\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"Combat\DirectionRelative2\at1_1.ogg", "Combat\DirectionRelative2\at1_2.ogg"};
			at10[] = {"Combat\DirectionRelative2\at10_1.ogg", "Combat\DirectionRelative2\at10_2.ogg"};
			at11[] = {"Combat\DirectionRelative2\at11_1.ogg", "Combat\DirectionRelative2\at11_2.ogg"};
			at12[] = {"Combat\DirectionRelative2\at12_1.ogg", "Combat\DirectionRelative2\at12_2.ogg"};
			at2[] = {"Combat\DirectionRelative2\at2_1.ogg", "Combat\DirectionRelative2\at2_2.ogg"};
			at3[] = {"Combat\DirectionRelative2\at3_1.ogg", "Combat\DirectionRelative2\at3_2.ogg"};
			at4[] = {"Combat\DirectionRelative2\at4_1.ogg", "Combat\DirectionRelative2\at4_2.ogg"};
			at5[] = {"Combat\DirectionRelative2\at5_1.ogg", "Combat\DirectionRelative2\at5_2.ogg"};
			at6[] = {"Combat\DirectionRelative2\at6_1.ogg", "Combat\DirectionRelative2\at6_2.ogg"};
			at7[] = {"Combat\DirectionRelative2\at7_1.ogg", "Combat\DirectionRelative2\at7_2.ogg"};
			at8[] = {"Combat\DirectionRelative2\at8_1.ogg", "Combat\DirectionRelative2\at8_2.ogg"};
			at9[] = {"Combat\DirectionRelative2\at9_1.ogg", "Combat\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"Combat\015_Targeting\Attack_1.ogg", "Combat\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"Combat\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"Combat\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"Combat\DirectionRelative1\back_1.ogg", "Combat\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"Combat\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"Combat\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"Combat\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"Combat\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"Combat\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"Combat\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"Combat\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"Combat\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"Combat\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"Combat\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"Combat\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"Combat\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"Combat\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"Combat\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"Combat\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"Combat\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"Combat\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"Combat\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"Combat\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"Combat\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"Combat\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"Combat\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"Combat\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"Combat\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"Combat\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"Combat\020_Names\Bennett.ogg"};
			blueTeam[] = {"Combat\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"Combat\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"Combat\150_Reporting\BombDetected_1.ogg", "Combat\150_Reporting\BombDetected_2.ogg", "Combat\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"Combat\005_Weapons\Bombs.ogg"};
			bravo[] = {"Combat\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"Combat\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"Combat\100_Commands\CancelManualFire_1.ogg", "Combat\100_Commands\CancelManualFire_2.ogg", "Combat\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"Combat\015_Targeting\CancelTarget_1.ogg", "Combat\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"Combat\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"Combat\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"Combat\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"Combat\130_Com_Reply\CannotComply_1.ogg", "Combat\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"Combat\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"Combat\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"Combat\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"Combat\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"Combat\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"Combat\100_Commands\CeaseFire_1.ogg", "Combat\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"Combat\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"Combat\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"Combat\200_CombatShouts\CheeringE_1.ogg", "Combat\200_CombatShouts\CheeringE_2.ogg", "Combat\200_CombatShouts\CheeringE_3.ogg", "Combat\200_CombatShouts\CheeringE_4.ogg", "Combat\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"Combat\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"Combat\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"Combat\200_CombatShouts\CombatGenericE_1.ogg", "Combat\200_CombatShouts\CombatGenericE_2.ogg", "Combat\200_CombatShouts\CombatGenericE_3.ogg", "Combat\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"Combat\100_Commands\CombatOpenFire_1.ogg", "Combat\100_Commands\CombatOpenFire_2.ogg", "Combat\100_Commands\CombatOpenFire_3.ogg", "Combat\100_Commands\CombatOpenFire_4.ogg", "Combat\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"Combat\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"Combat\130_Com_Reply\Confirmation1_1.ogg", "Combat\130_Com_Reply\Confirmation1_2.ogg", "Combat\130_Com_Reply\Confirmation1_3.ogg", "Combat\130_Com_Reply\Confirmation1_4.ogg", "Combat\130_Com_Reply\Confirmation1_5.ogg", "Combat\130_Com_Reply\Confirmation1_6.ogg", "Combat\130_Com_Reply\Confirmation1_7.ogg", "Combat\130_Com_Reply\Confirmation1_8.ogg", "Combat\130_Com_Reply\Confirmation1_9.ogg", "Combat\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"Combat\130_Com_Reply\Confirmation2_1.ogg", "Combat\130_Com_Reply\Confirmation2_2.ogg", "Combat\130_Com_Reply\Confirmation2_3.ogg", "Combat\130_Com_Reply\Confirmation2_4.ogg", "Combat\130_Com_Reply\Confirmation2_5.ogg", "Combat\130_Com_Reply\Confirmation2_6.ogg", "Combat\130_Com_Reply\Confirmation2_7.ogg", "Combat\130_Com_Reply\Confirmation2_8.ogg", "Combat\130_Com_Reply\Confirmation2_9.ogg", "Combat\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"Combat\150_Reporting\Contact_1.ogg", "Combat\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"Combat\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"Combat\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"Combat\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"Combat\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"Combat\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"Combat\020_Names\Costa.ogg"};
			CoveringE[] = {"Combat\200_CombatShouts\CoveringE_1.ogg", "Combat\200_CombatShouts\CoveringE_2.ogg", "Combat\200_CombatShouts\CoveringE_3.ogg", "Combat\200_CombatShouts\CoveringE_4.ogg", "Combat\200_CombatShouts\CoveringE_5.ogg", "Combat\200_CombatShouts\CoveringE_6.ogg", "Combat\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"Combat\200_CombatShouts\CoverMeE_1.ogg", "Combat\200_CombatShouts\CoverMeE_2.ogg", "Combat\200_CombatShouts\CoverMeE_3.ogg", "Combat\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"Combat\140_Com_Status\CriticalDamage_1.ogg", "Combat\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"Combat\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"Combat\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"Combat\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"Combat\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"Combat\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"Combat\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"Combat\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"Combat\100_Commands\Disengage.ogg"};
			Dismount[] = {"Combat\100_Commands\Dismount_1.ogg", "Combat\100_Commands\Dismount_2.ogg"};
			dist100[] = {"Combat\DistanceAbsolute1\dist100_1.ogg", "Combat\DistanceAbsolute1\dist100_2.ogg", "Combat\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"Combat\DistanceAbsolute1\dist1000_1.ogg", "Combat\DistanceAbsolute1\dist1000_2.ogg", "Combat\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"Combat\DistanceAbsolute1\dist1500_1.ogg", "Combat\DistanceAbsolute1\dist1500_2.ogg", "Combat\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"Combat\DistanceAbsolute1\dist200_1.ogg", "Combat\DistanceAbsolute1\dist200_2.ogg", "Combat\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"Combat\DistanceAbsolute1\dist2000_1.ogg", "Combat\DistanceAbsolute1\dist2000_2.ogg", "Combat\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"Combat\DistanceAbsolute1\dist2500_1.ogg", "Combat\DistanceAbsolute1\dist2500_2.ogg", "Combat\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"Combat\DistanceAbsolute1\dist300_1.ogg", "Combat\DistanceAbsolute1\dist300_2.ogg", "Combat\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"Combat\DistanceAbsolute1\dist400_1.ogg", "Combat\DistanceAbsolute1\dist400_2.ogg", "Combat\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"Combat\DistanceAbsolute1\dist500_1.ogg", "Combat\DistanceAbsolute1\dist500_2.ogg", "Combat\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"Combat\DistanceAbsolute1\dist600_1.ogg", "Combat\DistanceAbsolute1\dist600_2.ogg", "Combat\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"Combat\DistanceAbsolute1\dist700_1.ogg", "Combat\DistanceAbsolute1\dist700_2.ogg", "Combat\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"Combat\DistanceAbsolute1\dist75_1.ogg", "Combat\DistanceAbsolute1\dist75_2.ogg", "Combat\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"Combat\DistanceAbsolute1\dist800_1.ogg", "Combat\DistanceAbsolute1\dist800_2.ogg", "Combat\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"Combat\020_Names\Dixon.ogg"};
			dloc_base[] = {"Combat\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"Combat\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"Combat\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"Combat\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"Combat\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"Combat\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"Combat\100_Commands\DropYourPack.ogg"};
			east[] = {"Combat\DirectionCompass1\east_1.ogg", "Combat\DirectionCompass1\east_2.ogg"};
			echo[] = {"Combat\080_MoveAlphabet\echo.ogg"};
			eight[] = {"Combat\025_Numbers\eight.ogg"};
			eighteen[] = {"Combat\025_Numbers\eighteen.ogg"};
			eighty[] = {"Combat\025_Numbers\eighty.ogg"};
			Eject[] = {"Combat\100_Commands\Eject_1.ogg", "Combat\100_Commands\Eject_2.ogg"};
			eleven[] = {"Combat\025_Numbers\eleven.ogg"};
			Elias[] = {"Combat\020_Names\Elias.ogg"};
			EndangeredE[] = {"Combat\200_CombatShouts\EndangeredE_1.ogg", "Combat\200_CombatShouts\EndangeredE_2.ogg", "Combat\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"Combat\150_Reporting\EnemyDetected_1.ogg", "Combat\150_Reporting\EnemyDetected_2.ogg", "Combat\150_Reporting\EnemyDetected_3.ogg", "Combat\150_Reporting\EnemyDetected_4.ogg", "Combat\150_Reporting\EnemyDetected_5.ogg", "Combat\150_Reporting\EnemyDetected_6.ogg", "Combat\150_Reporting\EnemyDetected_7.ogg", "Combat\150_Reporting\EnemyDetected_8.ogg", "Combat\150_Reporting\EnemyDetected_9.ogg", "Combat\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"Combat\015_Targeting\Engage_1.ogg", "Combat\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"Combat\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"Combat\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"Combat\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"Combat\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"Combat\150_Reporting\ExplosiveDetected_1.ogg", "Combat\150_Reporting\ExplosiveDetected_2.ogg", "Combat\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"Combat\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"Combat\020_Names\Fahim.ogg"};
			FallBack[] = {"Combat\100_Commands\FallBack.ogg"};
			fifteen[] = {"Combat\025_Numbers\fifteen.ogg"};
			fifty[] = {"Combat\025_Numbers\fifty.ogg"};
			Fire[] = {"Combat\015_Targeting\Fire_1.ogg", "Combat\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"Combat\100_Commands\FireAtWill.ogg"};
			five[] = {"Combat\025_Numbers\five.ogg"};
			FlankLeft[] = {"Combat\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"Combat\100_Commands\FlankRight.ogg"};
			Flares[] = {"Combat\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"Combat\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"Combat\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"Combat\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"Combat\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"Combat\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"Combat\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"Combat\100_Commands\FormFile.ogg"};
			FormLine[] = {"Combat\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"Combat\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"Combat\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"Combat\100_Commands\FormVee.ogg"};
			FormWedge[] = {"Combat\100_Commands\FormWedge.ogg"};
			forty[] = {"Combat\025_Numbers\forty.ogg"};
			four[] = {"Combat\025_Numbers\four.ogg"};
			fourteen[] = {"Combat\025_Numbers\fourteen.ogg"};
			Fox[] = {"Combat\020_Names\Fox.ogg"};
			foxtrot[] = {"Combat\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"Combat\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"Combat\100_Commands\FreeToEngage.ogg"};
			front[] = {"Combat\DirectionRelative1\front_1.ogg", "Combat\DirectionRelative1\front_2.ogg"};
			Frost[] = {"Combat\020_Names\Frost.ogg"};
			FuelCritical[] = {"Combat\140_Com_Status\FuelCritical_1.ogg", "Combat\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"Combat\140_Com_Status\FuelLow_1.ogg", "Combat\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"Combat\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"Combat\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"Combat\999_FX\FXDeath_1.ogg", "Combat\999_FX\FXDeath_2.ogg", "Combat\999_FX\FXDeath_3.ogg", "Combat\999_FX\FXDeath_4.ogg", "Combat\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"Combat\999_FX\FXDrowning_1.ogg", "Combat\999_FX\FXDrowning_2.ogg", "Combat\999_FX\FXDrowning_3.ogg", "Combat\999_FX\FXDrowning_4.ogg", "Combat\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"Combat\999_FX\FXEffort_1.ogg", "Combat\999_FX\FXEffort_2.ogg", "Combat\999_FX\FXEffort_3.ogg", "Combat\999_FX\FXEffort_4.ogg", "Combat\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"Combat\999_FX\FXHit_1.ogg", "Combat\999_FX\FXHit_2.ogg", "Combat\999_FX\FXHit_3.ogg", "Combat\999_FX\FXHit_4.ogg", "Combat\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"Combat\999_FX\FXHurt_1.ogg", "Combat\999_FX\FXHurt_2.ogg", "Combat\999_FX\FXHurt_3.ogg", "Combat\999_FX\FXHurt_4.ogg", "Combat\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"Combat\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"Combat\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"Combat\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"Combat\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"Combat\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"Combat\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"Combat\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"Combat\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"Combat\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"Combat\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"Combat\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"Combat\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"Combat\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"Combat\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"Combat\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"Combat\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"Combat\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"Combat\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"Combat\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"Combat\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"Combat\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"Combat\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"Combat\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"Combat\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"Combat\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"Combat\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"Combat\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"Combat\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"Combat\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"Combat\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"Combat\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"Combat\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"Combat\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"Combat\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"Combat\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"Combat\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"Combat\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"Combat\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"Combat\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"Combat\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"Combat\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"Combat\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"Combat\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"Combat\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"Combat\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"Combat\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"Combat\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"Combat\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"Combat\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"Combat\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"Combat\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"Combat\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"Combat\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"Combat\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"Combat\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"Combat\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"Combat\100_Commands\GetSupport.ogg"};
			Ghost[] = {"Combat\020_Names\Ghost.ogg"};
			Givens[] = {"Combat\020_Names\Givens.ogg"};
			golf[] = {"Combat\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"Combat\100_Commands\GoProne_1.ogg", "Combat\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"Combat\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"Combat\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"Combat\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"Combat\035_NumbersGrid\grid_eight_1.ogg", "Combat\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"Combat\035_NumbersGrid\grid_eight_2_1.ogg", "Combat\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"Combat\035_NumbersGrid\grid_eight_3_1.ogg", "Combat\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"Combat\035_NumbersGrid\grid_five_1.ogg", "Combat\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"Combat\035_NumbersGrid\grid_five_2_1.ogg", "Combat\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"Combat\035_NumbersGrid\grid_five_3_1.ogg", "Combat\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"Combat\035_NumbersGrid\grid_four_1.ogg", "Combat\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"Combat\035_NumbersGrid\grid_four_2_1.ogg", "Combat\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"Combat\035_NumbersGrid\grid_four_3_1.ogg", "Combat\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"Combat\035_NumbersGrid\grid_move_to_eight_1.ogg", "Combat\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"Combat\035_NumbersGrid\grid_move_to_five_1.ogg", "Combat\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"Combat\035_NumbersGrid\grid_move_to_four_1.ogg", "Combat\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"Combat\035_NumbersGrid\grid_move_to_nine_1.ogg", "Combat\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"Combat\035_NumbersGrid\grid_move_to_one_1.ogg", "Combat\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"Combat\035_NumbersGrid\grid_move_to_seven_1.ogg", "Combat\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"Combat\035_NumbersGrid\grid_move_to_six_1.ogg", "Combat\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"Combat\035_NumbersGrid\grid_move_to_three_1.ogg", "Combat\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"Combat\035_NumbersGrid\grid_move_to_two_1.ogg", "Combat\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"Combat\035_NumbersGrid\grid_move_to_zero_1.ogg", "Combat\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"Combat\035_NumbersGrid\grid_nine_1.ogg", "Combat\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"Combat\035_NumbersGrid\grid_nine_2_1.ogg", "Combat\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"Combat\035_NumbersGrid\grid_nine_3_1.ogg", "Combat\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"Combat\035_NumbersGrid\grid_one_1.ogg", "Combat\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"Combat\035_NumbersGrid\grid_one_2_1.ogg", "Combat\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"Combat\035_NumbersGrid\grid_one_3_1.ogg", "Combat\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"Combat\035_NumbersGrid\grid_seven_1.ogg", "Combat\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"Combat\035_NumbersGrid\grid_seven_2_1.ogg", "Combat\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"Combat\035_NumbersGrid\grid_seven_3_1.ogg", "Combat\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"Combat\035_NumbersGrid\grid_six_1.ogg", "Combat\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"Combat\035_NumbersGrid\grid_six_2_1.ogg", "Combat\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"Combat\035_NumbersGrid\grid_six_3_1.ogg", "Combat\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"Combat\035_NumbersGrid\grid_three_1.ogg", "Combat\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"Combat\035_NumbersGrid\grid_three_2_1.ogg", "Combat\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"Combat\035_NumbersGrid\grid_three_3_1.ogg", "Combat\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"Combat\035_NumbersGrid\grid_two_1.ogg", "Combat\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"Combat\035_NumbersGrid\grid_two_2_1.ogg", "Combat\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"Combat\035_NumbersGrid\grid_two_3_1.ogg", "Combat\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"Combat\035_NumbersGrid\grid_zero_1.ogg", "Combat\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"Combat\035_NumbersGrid\grid_zero_2_1.ogg", "Combat\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"Combat\035_NumbersGrid\grid_zero_3_1.ogg", "Combat\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"Combat\020_Names\Habibi.ogg"};
			Halt[] = {"Combat\100_Commands\Halt.ogg"};
			Hardy[] = {"Combat\020_Names\Hardy.ogg"};
			Hawkins[] = {"Combat\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"Combat\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"Combat\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"Combat\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"Combat\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"Combat\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"Combat\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"Combat\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"Combat\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"Combat\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"Combat\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"Combat\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"Combat\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"Combat\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"Combat\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"Combat\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"Combat\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"Combat\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"Combat\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"Combat\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"Combat\025_Numbers\hundred.ogg"};
			IAmReady[] = {"Combat\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"Combat\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"Combat\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"Combat\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"Combat\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"Combat\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"Combat\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"Combat\020_Names\Jackson.ogg"};
			James[] = {"Combat\020_Names\James.ogg"};
			Jawadi[] = {"Combat\020_Names\Jawadi.ogg"};
			Jester[] = {"Combat\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"Combat\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"Combat\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"Combat\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"Combat\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"Combat\020_Names\Kerry.ogg"};
			kilo[] = {"Combat\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"Combat\020_Names\Korneedler.ogg"};
			Kouris[] = {"Combat\020_Names\Kouris.ogg"};
			Kushan[] = {"Combat\020_Names\Kushan.ogg"};
			Lacey[] = {"Combat\020_Names\Lacey.ogg"};
			Larkin[] = {"Combat\020_Names\Larkin.ogg"};
			left[] = {"Combat\DirectionRelative1\left_1.ogg", "Combat\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"Combat\020_Names\Leventis.ogg"};
			Levine[] = {"Combat\020_Names\Levine.ogg"};
			LightThatFire[] = {"Combat\100_Commands\LightThatFire.ogg"};
			lima[] = {"Combat\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"Combat\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"Combat\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"Combat\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"Combat\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"Combat\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"Combat\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"Combat\020_Names\Lopez.ogg"};
			ManDownE[] = {"Combat\140_Com_Status\ManDownE_1.ogg", "Combat\140_Com_Status\ManDownE_2.ogg", "Combat\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"Combat\100_Commands\ManualFire_1.ogg", "Combat\100_Commands\ManualFire_2.ogg", "Combat\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"Combat\020_Names\Markos.ogg"};
			Martinez[] = {"Combat\020_Names\Martinez.ogg"};
			Masood[] = {"Combat\020_Names\Masood.ogg"};
			McKay[] = {"Combat\020_Names\McKay.ogg"};
			McKendrick[] = {"Combat\020_Names\McKendrick.ogg"};
			mgun[] = {"Combat\005_Weapons\mgun.ogg"};
			mike[] = {"Combat\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"Combat\020_Names\Miller.ogg"};
			MineDetected[] = {"Combat\150_Reporting\MineDetected_1.ogg", "Combat\150_Reporting\MineDetected_2.ogg", "Combat\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"Combat\005_Weapons\missiles.ogg"};
			move_dist100[] = {"Combat\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"Combat\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"Combat\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"Combat\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"Combat\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"Combat\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"Combat\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"Combat\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"Combat\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"Combat\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"Combat\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"Combat\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"Combat\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"Combat\070_MoveDirectionRelative1\moveBack_1.ogg", "Combat\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"Combat\070_MoveDirectionRelative1\moveLeft_1.ogg", "Combat\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"Combat\070_MoveDirectionRelative1\moveRight_1.ogg", "Combat\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"Combat\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"Combat\070_MoveDirectionRelative1\moveUp_1.ogg", "Combat\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"Combat\020_Names\Nazari.ogg"};
			Negative[] = {"Combat\130_Com_Reply\Negative_1.ogg", "Combat\130_Com_Reply\Negative_2.ogg", "Combat\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"Combat\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"Combat\020_Names\Nichols.ogg"};
			Nicolo[] = {"Combat\020_Names\Nicolo.ogg"};
			Nikas[] = {"Combat\020_Names\Nikas.ogg"};
			nine[] = {"Combat\025_Numbers\nine.ogg"};
			nineteen[] = {"Combat\025_Numbers\nineteen.ogg"};
			ninety[] = {"Combat\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"Combat\130_Com_Reply\NoCanDo_1.ogg", "Combat\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"Combat\DirectionCompass1\north_1.ogg", "Combat\DirectionCompass1\north_2.ogg"};
			northEast[] = {"Combat\DirectionCompass1\northEast_1.ogg", "Combat\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"Combat\020_Names\Northgate.ogg"};
			northWest[] = {"Combat\DirectionCompass1\northWest_1.ogg", "Combat\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"Combat\015_Targeting\NoTarget_1.ogg", "Combat\015_Targeting\NoTarget_2.ogg"};
			november[] = {"Combat\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"Combat\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"Combat\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"Combat\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"Combat\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"Combat\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"Combat\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"Combat\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"Combat\020_Names\OConnor.ogg"};
			one[] = {"Combat\025_Numbers\one.ogg"};
			OnTheMove[] = {"Combat\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"Combat\130_Com_Reply\OnTheWay_1.ogg", "Combat\130_Com_Reply\OnTheWay_2.ogg", "Combat\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"Combat\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"Combat\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"Combat\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"Combat\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"Combat\140_Com_Status\OutOfFirstAidKits_1.ogg", "Combat\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"Combat\020_Names\Panas.ogg"};
			papa[] = {"Combat\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"Combat\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"Combat\020_Names\Patterson.ogg"};
			Petros[] = {"Combat\020_Names\Petros.ogg"};
			PointersOff[] = {"Combat\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"Combat\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"Combat\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"Combat\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"Combat\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"Combat\100_Commands\RallyUp.ogg"};
			Razer[] = {"Combat\020_Names\Razer.ogg"};
			Ready[] = {"Combat\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"Combat\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"Combat\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"Combat\100_Commands\Rearm.ogg"};
			redTeam[] = {"Combat\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"Combat\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"Combat\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"Combat\100_Commands\Regroup.ogg"};
			Relax[] = {"Combat\100_Commands\Relax.ogg"};
			ReloadingE[] = {"Combat\200_CombatShouts\ReloadingE_1.ogg", "Combat\200_CombatShouts\ReloadingE_2.ogg", "Combat\200_CombatShouts\ReloadingE_3.ogg", "Combat\200_CombatShouts\ReloadingE_4.ogg", "Combat\200_CombatShouts\ReloadingE_5.ogg", "Combat\200_CombatShouts\ReloadingE_6.ogg", "Combat\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"Combat\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"Combat\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"Combat\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"Combat\DirectionRelative3\reportBack_1.ogg", "Combat\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"Combat\DirectionRelative3\reportFront_1.ogg", "Combat\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"Combat\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"Combat\DirectionRelative3\reportLeft_1.ogg", "Combat\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"Combat\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"Combat\DirectionRelative3\reportRight_1.ogg", "Combat\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"Combat\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"Combat\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"Combat\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"Combat\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"Combat\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"Combat\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"Combat\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"Combat\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"Combat\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"Combat\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"Combat\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"Combat\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"Combat\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"Combat\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"Combat\020_Names\Reynolds.ogg"};
			right[] = {"Combat\DirectionRelative1\right_1.ogg", "Combat\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"Combat\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"Combat\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"Combat\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"Combat\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"Combat\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"Combat\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"Combat\020_Names\Ryan.ogg"};
			sabot[] = {"Combat\005_Weapons\sabot.ogg"};
			Safe[] = {"Combat\100_Commands\Safe_1.ogg", "Combat\100_Commands\Safe_2.ogg"};
			Samaras[] = {"Combat\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"Combat\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"Combat\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"Combat\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"Combat\200_CombatShouts\ScreamingE_1.ogg", "Combat\200_CombatShouts\ScreamingE_2.ogg", "Combat\200_CombatShouts\ScreamingE_3.ogg", "Combat\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"Combat\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"Combat\100_Commands\SetTheTimer.ogg"};
			seven[] = {"Combat\025_Numbers\seven.ogg"};
			seventeen[] = {"Combat\025_Numbers\seventeen.ogg"};
			seventy[] = {"Combat\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"Combat\020_Names\Siddiqi.ogg"};
			sierra[] = {"Combat\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"Combat\100_Commands\Silence.ogg"};
			Sitrep[] = {"Combat\120_Com_Ask\Sitrep.ogg"};
			six[] = {"Combat\025_Numbers\six.ogg"};
			sixteen[] = {"Combat\025_Numbers\sixteen.ogg"};
			sixty[] = {"Combat\025_Numbers\sixty.ogg"};
			Snake[] = {"Combat\020_Names\Snake.ogg"};
			south[] = {"Combat\DirectionCompass1\south_1.ogg", "Combat\DirectionCompass1\south_2.ogg"};
			southEast[] = {"Combat\DirectionCompass1\southEast_1.ogg", "Combat\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"Combat\DirectionCompass1\southWest_1.ogg", "Combat\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"Combat\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"Combat\020_Names\Stavrou.ogg"};
			StayAlert[] = {"Combat\100_Commands\StayAlert.ogg"};
			StayBack[] = {"Combat\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"Combat\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"Combat\100_Commands\StayLow.ogg"};
			Stop[] = {"Combat\100_Commands\Stop.ogg"};
			Stranger[] = {"Combat\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"Combat\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"Combat\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"Combat\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"Combat\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"Combat\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"Combat\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"Combat\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"Combat\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"Combat\130_Com_Reply\Suppressing_1.ogg", "Combat\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"Combat\200_CombatShouts\SuppressingE_1.ogg", "Combat\200_CombatShouts\SuppressingE_2.ogg", "Combat\200_CombatShouts\SuppressingE_3.ogg", "Combat\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"Combat\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"Combat\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"Combat\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"Combat\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"Combat\020_Names\Sykes.ogg"};
			TakeCover[] = {"Combat\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"Combat\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"Combat\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"Combat\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"Combat\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"Combat\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"Combat\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"Combat\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"Combat\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"Combat\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"Combat\020_Names\Tanny.ogg"};
			Target[] = {"Combat\015_Targeting\Target_1.ogg", "Combat\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"Combat\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"Combat\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"Combat\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"Combat\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"Combat\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"Combat\020_Names\Taylor.ogg"};
			ten[] = {"Combat\025_Numbers\ten.ogg"};
			Thanos[] = {"Combat\020_Names\Thanos.ogg"};
			thirteen[] = {"Combat\025_Numbers\thirteen.ogg"};
			thirty[] = {"Combat\025_Numbers\thirty.ogg"};
			three[] = {"Combat\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"Combat\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"Combat\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"Combat\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"Combat\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"Combat\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"Combat\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"Combat\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"Combat\025_Numbers\twelve.ogg"};
			twenty[] = {"Combat\025_Numbers\twenty.ogg"};
			two[] = {"Combat\025_Numbers\two.ogg"};
			UnderFireE[] = {"Combat\200_CombatShouts\UnderFireE_1.ogg", "Combat\200_CombatShouts\UnderFireE_2.ogg", "Combat\200_CombatShouts\UnderFireE_3.ogg", "Combat\200_CombatShouts\UnderFireE_4.ogg", "Combat\200_CombatShouts\UnderFireE_5.ogg", "Combat\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"Combat\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"Combat\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"Combat\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"Combat\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"Combat\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"Combat\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"Combat\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"Combat\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"Combat\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"Combat\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"Combat\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"Combat\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"Combat\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"Combat\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"Combat\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"Combat\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"Combat\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"Combat\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"Combat\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"Combat\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"Combat\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"Combat\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"Combat\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"Combat\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"Combat\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"Combat\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"Combat\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"Combat\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"Combat\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"Combat\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"Combat\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"Combat\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"Combat\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"Combat\010_Vehicles\veh_infantry_p_1.ogg", "Combat\010_Vehicles\veh_infantry_p_2.ogg", "Combat\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"Combat\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"Combat\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"Combat\010_Vehicles\veh_infantry_s_1.ogg", "Combat\010_Vehicles\veh_infantry_s_2.ogg", "Combat\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"Combat\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"Combat\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"Combat\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"Combat\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"Combat\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"Combat\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"Combat\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"Combat\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"Combat\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"Combat\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"Combat\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"Combat\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"Combat\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"Combat\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"Combat\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"Combat\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"Combat\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"Combat\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"Combat\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"Combat\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"Combat\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"Combat\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"Combat\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"Combat\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"Combat\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"Combat\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"Combat\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"Combat\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"Combat\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"Combat\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"Combat\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"Combat\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"Combat\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"Combat\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"Combat\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"Combat\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"Combat\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"Combat\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"Combat\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"Combat\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"Combat\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"Combat\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"Combat\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"Combat\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"Combat\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"Combat\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"Combat\100_Commands\VehBackward_1.ogg", "Combat\100_Commands\VehBackward_2.ogg", "Combat\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"Combat\100_Commands\VehFast_1.ogg", "Combat\100_Commands\VehFast_2.ogg", "Combat\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"Combat\100_Commands\VehForward_1.ogg", "Combat\100_Commands\VehForward_2.ogg", "Combat\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"Combat\100_Commands\VehLeft_1.ogg", "Combat\100_Commands\VehLeft_2.ogg", "Combat\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"Combat\100_Commands\VehRight_1.ogg", "Combat\100_Commands\VehRight_2.ogg", "Combat\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"Combat\100_Commands\VehSlow_1.ogg", "Combat\100_Commands\VehSlow_2.ogg", "Combat\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"Combat\100_Commands\VehStop_1.ogg", "Combat\100_Commands\VehStop_2.ogg", "Combat\100_Commands\VehStop_3.ogg"};
			victor[] = {"Combat\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"Combat\020_Names\Viper.ogg"};
			Waiting[] = {"Combat\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"Combat\020_Names\Walker.ogg"};
			Wardak[] = {"Combat\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"Combat\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"Combat\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"Combat\140_Com_Status\WeGotAManDownE_1.ogg", "Combat\140_Com_Status\WeGotAManDownE_2.ogg", "Combat\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"Combat\140_Com_Status\WeLostOneE_1.ogg", "Combat\140_Com_Status\WeLostOneE_2.ogg", "Combat\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"Combat\DirectionCompass1\west_1.ogg", "Combat\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"Combat\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"Combat\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"Combat\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"Combat\200_CombatShouts\WitnessKilledE_1.ogg", "Combat\200_CombatShouts\WitnessKilledE_2.ogg", "Combat\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"Combat\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"Combat\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"Combat\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"Combat\020_Names\Yousuf.ogg"};
			zero[] = {"Combat\025_Numbers\zero.ogg"};
			zulu[] = {"Combat\080_MoveAlphabet\zulu.ogg"};
		};
		class CombatContact: Normal
		{
			__1[] = {"CombatContact\Misc\__1.ogg"};
			__10[] = {"CombatContact\Misc\__10.ogg"};
			__11[] = {"CombatContact\Misc\__11.ogg"};
			__12[] = {"CombatContact\Misc\__12.ogg"};
			__13[] = {"CombatContact\Misc\__13.ogg"};
			__14[] = {"CombatContact\Misc\__14.ogg"};
			__15[] = {"CombatContact\Misc\__15.ogg"};
			__1_1[] = {"CombatContact\Combat\__1_1.ogg"};
			__2[] = {"CombatContact\Misc\__2.ogg"};
			__2_1[] = {"CombatContact\Misc\__2_1.ogg"};
			__3[] = {"CombatContact\Misc\__3.ogg"};
			__4[] = {"CombatContact\Misc\__4.ogg"};
			__4_CMPS[] = {"CombatContact\Misc\__4_CMPS.ogg"};
			__5[] = {"CombatContact\Misc\__5.ogg"};
			__6[] = {"CombatContact\Misc\__6.ogg"};
			__6_3[] = {"CombatContact\Misc\__6_3.ogg"};
			__6_ABS[] = {"CombatContact\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"CombatContact\Misc\__6_CMPS.ogg"};
			__7[] = {"CombatContact\Misc\__7.ogg"};
			__7_CLCK[] = {"CombatContact\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"CombatContact\Misc\__7_CMPS.ogg"};
			__8[] = {"CombatContact\Misc\__8.ogg"};
			__9[] = {"CombatContact\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"CombatContact\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"CombatContact\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"CombatContact\020_Names\Adams.ogg"};
			Advance[] = {"CombatContact\100_Commands\Advance.ogg"};
			alpha[] = {"CombatContact\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"CombatContact\020_Names\Amin.ogg"};
			AmmoCritical[] = {"CombatContact\140_Com_Status\AmmoCritical_1.ogg", "CombatContact\140_Com_Status\AmmoCritical_2.ogg", "CombatContact\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"CombatContact\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"CombatContact\020_Names\Anthis.ogg"};
			AreaClear[] = {"CombatContact\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"CombatContact\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"CombatContact\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"CombatContact\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"CombatContact\DirectionRelative2\at1_1.ogg", "CombatContact\DirectionRelative2\at1_2.ogg"};
			at10[] = {"CombatContact\DirectionRelative2\at10_1.ogg", "CombatContact\DirectionRelative2\at10_2.ogg"};
			at11[] = {"CombatContact\DirectionRelative2\at11_1.ogg", "CombatContact\DirectionRelative2\at11_2.ogg"};
			at12[] = {"CombatContact\DirectionRelative2\at12_1.ogg", "CombatContact\DirectionRelative2\at12_2.ogg"};
			at2[] = {"CombatContact\DirectionRelative2\at2_1.ogg", "CombatContact\DirectionRelative2\at2_2.ogg"};
			at3[] = {"CombatContact\DirectionRelative2\at3_1.ogg", "CombatContact\DirectionRelative2\at3_2.ogg"};
			at4[] = {"CombatContact\DirectionRelative2\at4_1.ogg", "CombatContact\DirectionRelative2\at4_2.ogg"};
			at5[] = {"CombatContact\DirectionRelative2\at5_1.ogg", "CombatContact\DirectionRelative2\at5_2.ogg"};
			at6[] = {"CombatContact\DirectionRelative2\at6_1.ogg", "CombatContact\DirectionRelative2\at6_2.ogg"};
			at7[] = {"CombatContact\DirectionRelative2\at7_1.ogg", "CombatContact\DirectionRelative2\at7_2.ogg"};
			at8[] = {"CombatContact\DirectionRelative2\at8_1.ogg", "CombatContact\DirectionRelative2\at8_2.ogg"};
			at9[] = {"CombatContact\DirectionRelative2\at9_1.ogg", "CombatContact\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"CombatContact\015_Targeting\Attack_1.ogg", "CombatContact\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"CombatContact\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"CombatContact\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"CombatContact\DirectionRelative1\back_1.ogg", "CombatContact\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"CombatContact\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"CombatContact\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"CombatContact\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"CombatContact\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"CombatContact\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"CombatContact\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"CombatContact\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"CombatContact\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"CombatContact\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"CombatContact\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"CombatContact\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"CombatContact\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"CombatContact\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"CombatContact\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"CombatContact\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"CombatContact\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"CombatContact\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"CombatContact\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"CombatContact\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"CombatContact\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"CombatContact\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"CombatContact\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"CombatContact\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"CombatContact\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"CombatContact\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"CombatContact\020_Names\Bennett.ogg"};
			blueTeam[] = {"CombatContact\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"CombatContact\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"CombatContact\150_Reporting\BombDetected_1.ogg", "CombatContact\150_Reporting\BombDetected_2.ogg", "CombatContact\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"CombatContact\005_Weapons\Bombs.ogg"};
			bravo[] = {"CombatContact\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"CombatContact\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"CombatContact\100_Commands\CancelManualFire_1.ogg", "CombatContact\100_Commands\CancelManualFire_2.ogg", "CombatContact\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"CombatContact\015_Targeting\CancelTarget_1.ogg", "CombatContact\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"CombatContact\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"CombatContact\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"CombatContact\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"CombatContact\130_Com_Reply\CannotComply_1.ogg", "CombatContact\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"CombatContact\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"CombatContact\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"CombatContact\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"CombatContact\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"CombatContact\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"CombatContact\100_Commands\CeaseFire_1.ogg", "CombatContact\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"CombatContact\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"CombatContact\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"CombatContact\200_CombatShouts\CheeringE_1.ogg", "CombatContact\200_CombatShouts\CheeringE_2.ogg", "CombatContact\200_CombatShouts\CheeringE_3.ogg", "CombatContact\200_CombatShouts\CheeringE_4.ogg", "CombatContact\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"CombatContact\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"CombatContact\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"CombatContact\200_CombatShouts\CombatGenericE_1.ogg", "CombatContact\200_CombatShouts\CombatGenericE_2.ogg", "CombatContact\200_CombatShouts\CombatGenericE_3.ogg", "CombatContact\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"CombatContact\100_Commands\CombatOpenFire_1.ogg", "CombatContact\100_Commands\CombatOpenFire_2.ogg", "CombatContact\100_Commands\CombatOpenFire_3.ogg", "CombatContact\100_Commands\CombatOpenFire_4.ogg", "CombatContact\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"CombatContact\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"CombatContact\130_Com_Reply\Confirmation1_1.ogg", "CombatContact\130_Com_Reply\Confirmation1_2.ogg", "CombatContact\130_Com_Reply\Confirmation1_3.ogg", "CombatContact\130_Com_Reply\Confirmation1_4.ogg", "CombatContact\130_Com_Reply\Confirmation1_5.ogg", "CombatContact\130_Com_Reply\Confirmation1_6.ogg", "CombatContact\130_Com_Reply\Confirmation1_7.ogg", "CombatContact\130_Com_Reply\Confirmation1_8.ogg", "CombatContact\130_Com_Reply\Confirmation1_9.ogg", "CombatContact\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"CombatContact\130_Com_Reply\Confirmation2_1.ogg", "CombatContact\130_Com_Reply\Confirmation2_2.ogg", "CombatContact\130_Com_Reply\Confirmation2_3.ogg", "CombatContact\130_Com_Reply\Confirmation2_4.ogg", "CombatContact\130_Com_Reply\Confirmation2_5.ogg", "CombatContact\130_Com_Reply\Confirmation2_6.ogg", "CombatContact\130_Com_Reply\Confirmation2_7.ogg", "CombatContact\130_Com_Reply\Confirmation2_8.ogg", "CombatContact\130_Com_Reply\Confirmation2_9.ogg", "CombatContact\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"CombatContact\150_Reporting\Contact_1.ogg", "CombatContact\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"CombatContact\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"CombatContact\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"CombatContact\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"CombatContact\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"CombatContact\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"CombatContact\020_Names\Costa.ogg"};
			CoveringE[] = {"CombatContact\200_CombatShouts\CoveringE_1.ogg", "CombatContact\200_CombatShouts\CoveringE_2.ogg", "CombatContact\200_CombatShouts\CoveringE_3.ogg", "CombatContact\200_CombatShouts\CoveringE_4.ogg", "CombatContact\200_CombatShouts\CoveringE_5.ogg", "CombatContact\200_CombatShouts\CoveringE_6.ogg", "CombatContact\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"CombatContact\200_CombatShouts\CoverMeE_1.ogg", "CombatContact\200_CombatShouts\CoverMeE_2.ogg", "CombatContact\200_CombatShouts\CoverMeE_3.ogg", "CombatContact\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"CombatContact\140_Com_Status\CriticalDamage_1.ogg", "CombatContact\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"CombatContact\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"CombatContact\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"CombatContact\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"CombatContact\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"CombatContact\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"CombatContact\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"CombatContact\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"CombatContact\100_Commands\Disengage.ogg"};
			Dismount[] = {"CombatContact\100_Commands\Dismount_1.ogg", "CombatContact\100_Commands\Dismount_2.ogg"};
			dist100[] = {"CombatContact\DistanceAbsolute1\dist100_1.ogg", "CombatContact\DistanceAbsolute1\dist100_2.ogg", "CombatContact\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"CombatContact\DistanceAbsolute1\dist1000_1.ogg", "CombatContact\DistanceAbsolute1\dist1000_2.ogg", "CombatContact\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"CombatContact\DistanceAbsolute1\dist1500_1.ogg", "CombatContact\DistanceAbsolute1\dist1500_2.ogg", "CombatContact\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"CombatContact\DistanceAbsolute1\dist200_1.ogg", "CombatContact\DistanceAbsolute1\dist200_2.ogg", "CombatContact\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"CombatContact\DistanceAbsolute1\dist2000_1.ogg", "CombatContact\DistanceAbsolute1\dist2000_2.ogg", "CombatContact\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"CombatContact\DistanceAbsolute1\dist2500_1.ogg", "CombatContact\DistanceAbsolute1\dist2500_2.ogg", "CombatContact\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"CombatContact\DistanceAbsolute1\dist300_1.ogg", "CombatContact\DistanceAbsolute1\dist300_2.ogg", "CombatContact\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"CombatContact\DistanceAbsolute1\dist400_1.ogg", "CombatContact\DistanceAbsolute1\dist400_2.ogg", "CombatContact\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"CombatContact\DistanceAbsolute1\dist500_1.ogg", "CombatContact\DistanceAbsolute1\dist500_2.ogg", "CombatContact\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"CombatContact\DistanceAbsolute1\dist600_1.ogg", "CombatContact\DistanceAbsolute1\dist600_2.ogg", "CombatContact\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"CombatContact\DistanceAbsolute1\dist700_1.ogg", "CombatContact\DistanceAbsolute1\dist700_2.ogg", "CombatContact\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"CombatContact\DistanceAbsolute1\dist75_1.ogg", "CombatContact\DistanceAbsolute1\dist75_2.ogg", "CombatContact\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"CombatContact\DistanceAbsolute1\dist800_1.ogg", "CombatContact\DistanceAbsolute1\dist800_2.ogg", "CombatContact\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"CombatContact\020_Names\Dixon.ogg"};
			dloc_base[] = {"CombatContact\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"CombatContact\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"CombatContact\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"CombatContact\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"CombatContact\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"CombatContact\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"CombatContact\100_Commands\DropYourPack.ogg"};
			east[] = {"CombatContact\DirectionCompass1\east_1.ogg", "CombatContact\DirectionCompass1\east_2.ogg"};
			echo[] = {"CombatContact\080_MoveAlphabet\echo.ogg"};
			eight[] = {"CombatContact\025_Numbers\eight.ogg"};
			eighteen[] = {"CombatContact\025_Numbers\eighteen.ogg"};
			eighty[] = {"CombatContact\025_Numbers\eighty.ogg"};
			Eject[] = {"CombatContact\100_Commands\Eject_1.ogg", "CombatContact\100_Commands\Eject_2.ogg"};
			eleven[] = {"CombatContact\025_Numbers\eleven.ogg"};
			Elias[] = {"CombatContact\020_Names\Elias.ogg"};
			EndangeredE[] = {"CombatContact\200_CombatShouts\EndangeredE_1.ogg", "CombatContact\200_CombatShouts\EndangeredE_2.ogg", "CombatContact\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"CombatContact\150_Reporting\EnemyDetected_1.ogg", "CombatContact\150_Reporting\EnemyDetected_2.ogg", "CombatContact\150_Reporting\EnemyDetected_3.ogg", "CombatContact\150_Reporting\EnemyDetected_4.ogg", "CombatContact\150_Reporting\EnemyDetected_5.ogg", "CombatContact\150_Reporting\EnemyDetected_6.ogg", "CombatContact\150_Reporting\EnemyDetected_7.ogg", "CombatContact\150_Reporting\EnemyDetected_8.ogg", "CombatContact\150_Reporting\EnemyDetected_9.ogg", "CombatContact\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"CombatContact\015_Targeting\Engage_1.ogg", "CombatContact\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"CombatContact\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"CombatContact\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"CombatContact\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"CombatContact\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"CombatContact\150_Reporting\ExplosiveDetected_1.ogg", "CombatContact\150_Reporting\ExplosiveDetected_2.ogg", "CombatContact\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"CombatContact\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"CombatContact\020_Names\Fahim.ogg"};
			FallBack[] = {"CombatContact\100_Commands\FallBack.ogg"};
			fifteen[] = {"CombatContact\025_Numbers\fifteen.ogg"};
			fifty[] = {"CombatContact\025_Numbers\fifty.ogg"};
			Fire[] = {"CombatContact\015_Targeting\Fire_1.ogg", "CombatContact\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"CombatContact\100_Commands\FireAtWill.ogg"};
			five[] = {"CombatContact\025_Numbers\five.ogg"};
			FlankLeft[] = {"CombatContact\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"CombatContact\100_Commands\FlankRight.ogg"};
			Flares[] = {"CombatContact\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"CombatContact\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"CombatContact\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"CombatContact\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"CombatContact\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"CombatContact\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"CombatContact\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"CombatContact\100_Commands\FormFile.ogg"};
			FormLine[] = {"CombatContact\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"CombatContact\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"CombatContact\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"CombatContact\100_Commands\FormVee.ogg"};
			FormWedge[] = {"CombatContact\100_Commands\FormWedge.ogg"};
			forty[] = {"CombatContact\025_Numbers\forty.ogg"};
			four[] = {"CombatContact\025_Numbers\four.ogg"};
			fourteen[] = {"CombatContact\025_Numbers\fourteen.ogg"};
			Fox[] = {"CombatContact\020_Names\Fox.ogg"};
			foxtrot[] = {"CombatContact\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"CombatContact\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"CombatContact\100_Commands\FreeToEngage.ogg"};
			front[] = {"CombatContact\DirectionRelative1\front_1.ogg", "CombatContact\DirectionRelative1\front_2.ogg"};
			Frost[] = {"CombatContact\020_Names\Frost.ogg"};
			FuelCritical[] = {"CombatContact\140_Com_Status\FuelCritical_1.ogg", "CombatContact\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"CombatContact\140_Com_Status\FuelLow_1.ogg", "CombatContact\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"CombatContact\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"CombatContact\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"CombatContact\999_FX\FXDeath_1.ogg", "CombatContact\999_FX\FXDeath_2.ogg", "CombatContact\999_FX\FXDeath_3.ogg", "CombatContact\999_FX\FXDeath_4.ogg", "CombatContact\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"CombatContact\999_FX\FXDrowning_1.ogg", "CombatContact\999_FX\FXDrowning_2.ogg", "CombatContact\999_FX\FXDrowning_3.ogg", "CombatContact\999_FX\FXDrowning_4.ogg", "CombatContact\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"CombatContact\999_FX\FXEffort_1.ogg", "CombatContact\999_FX\FXEffort_2.ogg", "CombatContact\999_FX\FXEffort_3.ogg", "CombatContact\999_FX\FXEffort_4.ogg", "CombatContact\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"CombatContact\999_FX\FXHit_1.ogg", "CombatContact\999_FX\FXHit_2.ogg", "CombatContact\999_FX\FXHit_3.ogg", "CombatContact\999_FX\FXHit_4.ogg", "CombatContact\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"CombatContact\999_FX\FXHurt_1.ogg", "CombatContact\999_FX\FXHurt_2.ogg", "CombatContact\999_FX\FXHurt_3.ogg", "CombatContact\999_FX\FXHurt_4.ogg", "CombatContact\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"CombatContact\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"CombatContact\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"CombatContact\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"CombatContact\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"CombatContact\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"CombatContact\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"CombatContact\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"CombatContact\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"CombatContact\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"CombatContact\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"CombatContact\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"CombatContact\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"CombatContact\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"CombatContact\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"CombatContact\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"CombatContact\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"CombatContact\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"CombatContact\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"CombatContact\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"CombatContact\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"CombatContact\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"CombatContact\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"CombatContact\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"CombatContact\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"CombatContact\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"CombatContact\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"CombatContact\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"CombatContact\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"CombatContact\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"CombatContact\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"CombatContact\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"CombatContact\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"CombatContact\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"CombatContact\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"CombatContact\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"CombatContact\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"CombatContact\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"CombatContact\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"CombatContact\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"CombatContact\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"CombatContact\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"CombatContact\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"CombatContact\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"CombatContact\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"CombatContact\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"CombatContact\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"CombatContact\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"CombatContact\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"CombatContact\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"CombatContact\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"CombatContact\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"CombatContact\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"CombatContact\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"CombatContact\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"CombatContact\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"CombatContact\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"CombatContact\100_Commands\GetSupport.ogg"};
			Ghost[] = {"CombatContact\020_Names\Ghost.ogg"};
			Givens[] = {"CombatContact\020_Names\Givens.ogg"};
			golf[] = {"CombatContact\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"CombatContact\100_Commands\GoProne_1.ogg", "CombatContact\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"CombatContact\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"CombatContact\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"CombatContact\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"CombatContact\035_NumbersGrid\grid_eight_1.ogg", "CombatContact\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"CombatContact\035_NumbersGrid\grid_eight_2_1.ogg", "CombatContact\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"CombatContact\035_NumbersGrid\grid_eight_3_1.ogg", "CombatContact\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"CombatContact\035_NumbersGrid\grid_five_1.ogg", "CombatContact\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"CombatContact\035_NumbersGrid\grid_five_2_1.ogg", "CombatContact\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"CombatContact\035_NumbersGrid\grid_five_3_1.ogg", "CombatContact\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"CombatContact\035_NumbersGrid\grid_four_1.ogg", "CombatContact\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"CombatContact\035_NumbersGrid\grid_four_2_1.ogg", "CombatContact\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"CombatContact\035_NumbersGrid\grid_four_3_1.ogg", "CombatContact\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"CombatContact\035_NumbersGrid\grid_move_to_eight_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"CombatContact\035_NumbersGrid\grid_move_to_five_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"CombatContact\035_NumbersGrid\grid_move_to_four_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"CombatContact\035_NumbersGrid\grid_move_to_nine_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"CombatContact\035_NumbersGrid\grid_move_to_one_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"CombatContact\035_NumbersGrid\grid_move_to_seven_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"CombatContact\035_NumbersGrid\grid_move_to_six_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"CombatContact\035_NumbersGrid\grid_move_to_three_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"CombatContact\035_NumbersGrid\grid_move_to_two_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"CombatContact\035_NumbersGrid\grid_move_to_zero_1.ogg", "CombatContact\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"CombatContact\035_NumbersGrid\grid_nine_1.ogg", "CombatContact\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"CombatContact\035_NumbersGrid\grid_nine_2_1.ogg", "CombatContact\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"CombatContact\035_NumbersGrid\grid_nine_3_1.ogg", "CombatContact\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"CombatContact\035_NumbersGrid\grid_one_1.ogg", "CombatContact\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"CombatContact\035_NumbersGrid\grid_one_2_1.ogg", "CombatContact\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"CombatContact\035_NumbersGrid\grid_one_3_1.ogg", "CombatContact\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"CombatContact\035_NumbersGrid\grid_seven_1.ogg", "CombatContact\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"CombatContact\035_NumbersGrid\grid_seven_2_1.ogg", "CombatContact\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"CombatContact\035_NumbersGrid\grid_seven_3_1.ogg", "CombatContact\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"CombatContact\035_NumbersGrid\grid_six_1.ogg", "CombatContact\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"CombatContact\035_NumbersGrid\grid_six_2_1.ogg", "CombatContact\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"CombatContact\035_NumbersGrid\grid_six_3_1.ogg", "CombatContact\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"CombatContact\035_NumbersGrid\grid_three_1.ogg", "CombatContact\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"CombatContact\035_NumbersGrid\grid_three_2_1.ogg", "CombatContact\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"CombatContact\035_NumbersGrid\grid_three_3_1.ogg", "CombatContact\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"CombatContact\035_NumbersGrid\grid_two_1.ogg", "CombatContact\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"CombatContact\035_NumbersGrid\grid_two_2_1.ogg", "CombatContact\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"CombatContact\035_NumbersGrid\grid_two_3_1.ogg", "CombatContact\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"CombatContact\035_NumbersGrid\grid_zero_1.ogg", "CombatContact\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"CombatContact\035_NumbersGrid\grid_zero_2_1.ogg", "CombatContact\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"CombatContact\035_NumbersGrid\grid_zero_3_1.ogg", "CombatContact\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"CombatContact\020_Names\Habibi.ogg"};
			Halt[] = {"CombatContact\100_Commands\Halt.ogg"};
			Hardy[] = {"CombatContact\020_Names\Hardy.ogg"};
			Hawkins[] = {"CombatContact\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"CombatContact\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"CombatContact\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"CombatContact\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"CombatContact\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"CombatContact\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"CombatContact\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"CombatContact\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"CombatContact\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"CombatContact\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"CombatContact\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"CombatContact\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"CombatContact\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"CombatContact\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"CombatContact\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"CombatContact\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"CombatContact\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"CombatContact\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"CombatContact\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"CombatContact\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"CombatContact\025_Numbers\hundred.ogg"};
			IAmReady[] = {"CombatContact\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"CombatContact\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"CombatContact\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"CombatContact\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"CombatContact\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"CombatContact\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"CombatContact\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"CombatContact\020_Names\Jackson.ogg"};
			James[] = {"CombatContact\020_Names\James.ogg"};
			Jawadi[] = {"CombatContact\020_Names\Jawadi.ogg"};
			Jester[] = {"CombatContact\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"CombatContact\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"CombatContact\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"CombatContact\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"CombatContact\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"CombatContact\020_Names\Kerry.ogg"};
			kilo[] = {"CombatContact\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"CombatContact\020_Names\Korneedler.ogg"};
			Kouris[] = {"CombatContact\020_Names\Kouris.ogg"};
			Kushan[] = {"CombatContact\020_Names\Kushan.ogg"};
			Lacey[] = {"CombatContact\020_Names\Lacey.ogg"};
			Larkin[] = {"CombatContact\020_Names\Larkin.ogg"};
			left[] = {"CombatContact\DirectionRelative1\left_1.ogg", "CombatContact\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"CombatContact\020_Names\Leventis.ogg"};
			Levine[] = {"CombatContact\020_Names\Levine.ogg"};
			LightThatFire[] = {"CombatContact\100_Commands\LightThatFire.ogg"};
			lima[] = {"CombatContact\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"CombatContact\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"CombatContact\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"CombatContact\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"CombatContact\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"CombatContact\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"CombatContact\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"CombatContact\020_Names\Lopez.ogg"};
			ManDownE[] = {"CombatContact\140_Com_Status\ManDownE_1.ogg", "CombatContact\140_Com_Status\ManDownE_2.ogg", "CombatContact\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"CombatContact\100_Commands\ManualFire_1.ogg", "CombatContact\100_Commands\ManualFire_2.ogg", "CombatContact\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"CombatContact\020_Names\Markos.ogg"};
			Martinez[] = {"CombatContact\020_Names\Martinez.ogg"};
			Masood[] = {"CombatContact\020_Names\Masood.ogg"};
			McKay[] = {"CombatContact\020_Names\McKay.ogg"};
			McKendrick[] = {"CombatContact\020_Names\McKendrick.ogg"};
			mgun[] = {"CombatContact\005_Weapons\mgun.ogg"};
			mike[] = {"CombatContact\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"CombatContact\020_Names\Miller.ogg"};
			MineDetected[] = {"CombatContact\150_Reporting\MineDetected_1.ogg", "CombatContact\150_Reporting\MineDetected_2.ogg", "CombatContact\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"CombatContact\005_Weapons\missiles.ogg"};
			move_dist100[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"CombatContact\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"CombatContact\070_MoveDirectionRelative1\moveBack_1.ogg", "CombatContact\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"CombatContact\070_MoveDirectionRelative1\moveLeft_1.ogg", "CombatContact\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"CombatContact\070_MoveDirectionRelative1\moveRight_1.ogg", "CombatContact\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"CombatContact\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"CombatContact\070_MoveDirectionRelative1\moveUp_1.ogg", "CombatContact\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"CombatContact\020_Names\Nazari.ogg"};
			Negative[] = {"CombatContact\130_Com_Reply\Negative_1.ogg", "CombatContact\130_Com_Reply\Negative_2.ogg", "CombatContact\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"CombatContact\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"CombatContact\020_Names\Nichols.ogg"};
			Nicolo[] = {"CombatContact\020_Names\Nicolo.ogg"};
			Nikas[] = {"CombatContact\020_Names\Nikas.ogg"};
			nine[] = {"CombatContact\025_Numbers\nine.ogg"};
			nineteen[] = {"CombatContact\025_Numbers\nineteen.ogg"};
			ninety[] = {"CombatContact\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"CombatContact\130_Com_Reply\NoCanDo_1.ogg", "CombatContact\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"CombatContact\DirectionCompass1\north_1.ogg", "CombatContact\DirectionCompass1\north_2.ogg"};
			northEast[] = {"CombatContact\DirectionCompass1\northEast_1.ogg", "CombatContact\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"CombatContact\020_Names\Northgate.ogg"};
			northWest[] = {"CombatContact\DirectionCompass1\northWest_1.ogg", "CombatContact\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"CombatContact\015_Targeting\NoTarget_1.ogg", "CombatContact\015_Targeting\NoTarget_2.ogg"};
			november[] = {"CombatContact\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"CombatContact\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"CombatContact\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"CombatContact\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"CombatContact\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"CombatContact\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"CombatContact\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"CombatContact\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"CombatContact\020_Names\OConnor.ogg"};
			one[] = {"CombatContact\025_Numbers\one.ogg"};
			OnTheMove[] = {"CombatContact\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"CombatContact\130_Com_Reply\OnTheWay_1.ogg", "CombatContact\130_Com_Reply\OnTheWay_2.ogg", "CombatContact\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"CombatContact\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"CombatContact\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"CombatContact\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"CombatContact\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"CombatContact\140_Com_Status\OutOfFirstAidKits_1.ogg", "CombatContact\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"CombatContact\020_Names\Panas.ogg"};
			papa[] = {"CombatContact\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"CombatContact\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"CombatContact\020_Names\Patterson.ogg"};
			Petros[] = {"CombatContact\020_Names\Petros.ogg"};
			PointersOff[] = {"CombatContact\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"CombatContact\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"CombatContact\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"CombatContact\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"CombatContact\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"CombatContact\100_Commands\RallyUp.ogg"};
			Razer[] = {"CombatContact\020_Names\Razer.ogg"};
			Ready[] = {"CombatContact\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"CombatContact\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"CombatContact\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"CombatContact\100_Commands\Rearm.ogg"};
			redTeam[] = {"CombatContact\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"CombatContact\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"CombatContact\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"CombatContact\100_Commands\Regroup.ogg"};
			Relax[] = {"CombatContact\100_Commands\Relax.ogg"};
			ReloadingE[] = {"CombatContact\200_CombatShouts\ReloadingE_1.ogg", "CombatContact\200_CombatShouts\ReloadingE_2.ogg", "CombatContact\200_CombatShouts\ReloadingE_3.ogg", "CombatContact\200_CombatShouts\ReloadingE_4.ogg", "CombatContact\200_CombatShouts\ReloadingE_5.ogg", "CombatContact\200_CombatShouts\ReloadingE_6.ogg", "CombatContact\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"CombatContact\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"CombatContact\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"CombatContact\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"CombatContact\DirectionRelative3\reportBack_1.ogg", "CombatContact\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"CombatContact\DirectionRelative3\reportFront_1.ogg", "CombatContact\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"CombatContact\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"CombatContact\DirectionRelative3\reportLeft_1.ogg", "CombatContact\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"CombatContact\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"CombatContact\DirectionRelative3\reportRight_1.ogg", "CombatContact\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"CombatContact\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"CombatContact\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"CombatContact\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"CombatContact\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"CombatContact\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"CombatContact\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"CombatContact\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"CombatContact\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"CombatContact\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"CombatContact\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"CombatContact\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"CombatContact\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"CombatContact\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"CombatContact\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"CombatContact\020_Names\Reynolds.ogg"};
			right[] = {"CombatContact\DirectionRelative1\right_1.ogg", "CombatContact\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"CombatContact\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"CombatContact\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"CombatContact\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"CombatContact\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"CombatContact\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"CombatContact\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"CombatContact\020_Names\Ryan.ogg"};
			sabot[] = {"CombatContact\005_Weapons\sabot.ogg"};
			Safe[] = {"CombatContact\100_Commands\Safe_1.ogg", "CombatContact\100_Commands\Safe_2.ogg"};
			Samaras[] = {"CombatContact\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"CombatContact\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"CombatContact\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"CombatContact\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"CombatContact\200_CombatShouts\ScreamingE_1.ogg", "CombatContact\200_CombatShouts\ScreamingE_2.ogg", "CombatContact\200_CombatShouts\ScreamingE_3.ogg", "CombatContact\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"CombatContact\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"CombatContact\100_Commands\SetTheTimer.ogg"};
			seven[] = {"CombatContact\025_Numbers\seven.ogg"};
			seventeen[] = {"CombatContact\025_Numbers\seventeen.ogg"};
			seventy[] = {"CombatContact\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"CombatContact\020_Names\Siddiqi.ogg"};
			sierra[] = {"CombatContact\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"CombatContact\100_Commands\Silence.ogg"};
			Sitrep[] = {"CombatContact\120_Com_Ask\Sitrep.ogg"};
			six[] = {"CombatContact\025_Numbers\six.ogg"};
			sixteen[] = {"CombatContact\025_Numbers\sixteen.ogg"};
			sixty[] = {"CombatContact\025_Numbers\sixty.ogg"};
			Snake[] = {"CombatContact\020_Names\Snake.ogg"};
			south[] = {"CombatContact\DirectionCompass1\south_1.ogg", "CombatContact\DirectionCompass1\south_2.ogg"};
			southEast[] = {"CombatContact\DirectionCompass1\southEast_1.ogg", "CombatContact\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"CombatContact\DirectionCompass1\southWest_1.ogg", "CombatContact\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"CombatContact\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"CombatContact\020_Names\Stavrou.ogg"};
			StayAlert[] = {"CombatContact\100_Commands\StayAlert.ogg"};
			StayBack[] = {"CombatContact\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"CombatContact\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"CombatContact\100_Commands\StayLow.ogg"};
			Stop[] = {"CombatContact\100_Commands\Stop.ogg"};
			Stranger[] = {"CombatContact\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"CombatContact\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"CombatContact\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"CombatContact\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"CombatContact\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"CombatContact\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"CombatContact\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"CombatContact\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"CombatContact\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"CombatContact\130_Com_Reply\Suppressing_1.ogg", "CombatContact\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"CombatContact\200_CombatShouts\SuppressingE_1.ogg", "CombatContact\200_CombatShouts\SuppressingE_2.ogg", "CombatContact\200_CombatShouts\SuppressingE_3.ogg", "CombatContact\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"CombatContact\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"CombatContact\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"CombatContact\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"CombatContact\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"CombatContact\020_Names\Sykes.ogg"};
			TakeCover[] = {"CombatContact\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"CombatContact\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"CombatContact\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"CombatContact\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"CombatContact\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"CombatContact\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"CombatContact\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"CombatContact\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"CombatContact\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"CombatContact\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"CombatContact\020_Names\Tanny.ogg"};
			Target[] = {"CombatContact\015_Targeting\Target_1.ogg", "CombatContact\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"CombatContact\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"CombatContact\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"CombatContact\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"CombatContact\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"CombatContact\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"CombatContact\020_Names\Taylor.ogg"};
			ten[] = {"CombatContact\025_Numbers\ten.ogg"};
			Thanos[] = {"CombatContact\020_Names\Thanos.ogg"};
			thirteen[] = {"CombatContact\025_Numbers\thirteen.ogg"};
			thirty[] = {"CombatContact\025_Numbers\thirty.ogg"};
			three[] = {"CombatContact\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"CombatContact\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"CombatContact\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"CombatContact\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"CombatContact\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"CombatContact\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"CombatContact\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"CombatContact\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"CombatContact\025_Numbers\twelve.ogg"};
			twenty[] = {"CombatContact\025_Numbers\twenty.ogg"};
			two[] = {"CombatContact\025_Numbers\two.ogg"};
			UnderFireE[] = {"CombatContact\200_CombatShouts\UnderFireE_1.ogg", "CombatContact\200_CombatShouts\UnderFireE_2.ogg", "CombatContact\200_CombatShouts\UnderFireE_3.ogg", "CombatContact\200_CombatShouts\UnderFireE_4.ogg", "CombatContact\200_CombatShouts\UnderFireE_5.ogg", "CombatContact\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"CombatContact\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"CombatContact\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"CombatContact\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"CombatContact\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"CombatContact\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"CombatContact\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"CombatContact\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"CombatContact\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"CombatContact\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"CombatContact\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"CombatContact\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"CombatContact\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"CombatContact\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"CombatContact\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"CombatContact\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"CombatContact\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"CombatContact\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"CombatContact\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"CombatContact\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"CombatContact\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"CombatContact\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"CombatContact\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"CombatContact\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"CombatContact\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"CombatContact\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"CombatContact\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"CombatContact\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"CombatContact\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"CombatContact\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"CombatContact\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"CombatContact\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"CombatContact\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"CombatContact\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"CombatContact\010_Vehicles\veh_infantry_p_1.ogg", "CombatContact\010_Vehicles\veh_infantry_p_2.ogg", "CombatContact\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"CombatContact\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"CombatContact\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"CombatContact\010_Vehicles\veh_infantry_s_1.ogg", "CombatContact\010_Vehicles\veh_infantry_s_2.ogg", "CombatContact\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"CombatContact\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"CombatContact\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"CombatContact\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"CombatContact\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"CombatContact\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"CombatContact\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"CombatContact\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"CombatContact\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"CombatContact\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"CombatContact\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"CombatContact\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"CombatContact\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"CombatContact\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"CombatContact\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"CombatContact\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"CombatContact\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"CombatContact\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"CombatContact\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"CombatContact\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"CombatContact\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"CombatContact\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"CombatContact\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"CombatContact\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"CombatContact\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"CombatContact\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"CombatContact\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"CombatContact\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"CombatContact\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"CombatContact\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"CombatContact\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"CombatContact\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"CombatContact\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"CombatContact\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"CombatContact\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"CombatContact\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"CombatContact\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"CombatContact\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"CombatContact\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"CombatContact\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"CombatContact\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"CombatContact\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"CombatContact\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"CombatContact\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"CombatContact\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"CombatContact\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"CombatContact\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"CombatContact\100_Commands\VehBackward_1.ogg", "CombatContact\100_Commands\VehBackward_2.ogg", "CombatContact\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"CombatContact\100_Commands\VehFast_1.ogg", "CombatContact\100_Commands\VehFast_2.ogg", "CombatContact\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"CombatContact\100_Commands\VehForward_1.ogg", "CombatContact\100_Commands\VehForward_2.ogg", "CombatContact\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"CombatContact\100_Commands\VehLeft_1.ogg", "CombatContact\100_Commands\VehLeft_2.ogg", "CombatContact\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"CombatContact\100_Commands\VehRight_1.ogg", "CombatContact\100_Commands\VehRight_2.ogg", "CombatContact\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"CombatContact\100_Commands\VehSlow_1.ogg", "CombatContact\100_Commands\VehSlow_2.ogg", "CombatContact\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"CombatContact\100_Commands\VehStop_1.ogg", "CombatContact\100_Commands\VehStop_2.ogg", "CombatContact\100_Commands\VehStop_3.ogg"};
			victor[] = {"CombatContact\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"CombatContact\020_Names\Viper.ogg"};
			Waiting[] = {"CombatContact\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"CombatContact\020_Names\Walker.ogg"};
			Wardak[] = {"CombatContact\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"CombatContact\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"CombatContact\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"CombatContact\140_Com_Status\WeGotAManDownE_1.ogg", "CombatContact\140_Com_Status\WeGotAManDownE_2.ogg", "CombatContact\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"CombatContact\140_Com_Status\WeLostOneE_1.ogg", "CombatContact\140_Com_Status\WeLostOneE_2.ogg", "CombatContact\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"CombatContact\DirectionCompass1\west_1.ogg", "CombatContact\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"CombatContact\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"CombatContact\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"CombatContact\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"CombatContact\200_CombatShouts\WitnessKilledE_1.ogg", "CombatContact\200_CombatShouts\WitnessKilledE_2.ogg", "CombatContact\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"CombatContact\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"CombatContact\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"CombatContact\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"CombatContact\020_Names\Yousuf.ogg"};
			zero[] = {"CombatContact\025_Numbers\zero.ogg"};
			zulu[] = {"CombatContact\080_MoveAlphabet\zulu.ogg"};
		};
		class CombatEngage: Normal
		{
			__1[] = {"CombatEngage\Misc\__1.ogg"};
			__10[] = {"CombatEngage\Misc\__10.ogg"};
			__11[] = {"CombatEngage\Misc\__11.ogg"};
			__12[] = {"CombatEngage\Misc\__12.ogg"};
			__13[] = {"CombatEngage\Misc\__13.ogg"};
			__14[] = {"CombatEngage\Misc\__14.ogg"};
			__15[] = {"CombatEngage\Misc\__15.ogg"};
			__1_1[] = {"CombatEngage\Combat\__1_1.ogg"};
			__2[] = {"CombatEngage\Misc\__2.ogg"};
			__2_1[] = {"CombatEngage\Misc\__2_1.ogg"};
			__3[] = {"CombatEngage\Misc\__3.ogg"};
			__4[] = {"CombatEngage\Misc\__4.ogg"};
			__4_CMPS[] = {"CombatEngage\Misc\__4_CMPS.ogg"};
			__5[] = {"CombatEngage\Misc\__5.ogg"};
			__6[] = {"CombatEngage\Misc\__6.ogg"};
			__6_3[] = {"CombatEngage\Misc\__6_3.ogg"};
			__6_ABS[] = {"CombatEngage\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"CombatEngage\Misc\__6_CMPS.ogg"};
			__7[] = {"CombatEngage\Misc\__7.ogg"};
			__7_CLCK[] = {"CombatEngage\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"CombatEngage\Misc\__7_CMPS.ogg"};
			__8[] = {"CombatEngage\Misc\__8.ogg"};
			__9[] = {"CombatEngage\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"CombatEngage\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"CombatEngage\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"CombatEngage\020_Names\Adams.ogg"};
			Advance[] = {"CombatEngage\100_Commands\Advance.ogg"};
			alpha[] = {"CombatEngage\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"CombatEngage\020_Names\Amin.ogg"};
			AmmoCritical[] = {"CombatEngage\140_Com_Status\AmmoCritical_1.ogg", "CombatEngage\140_Com_Status\AmmoCritical_2.ogg", "CombatEngage\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"CombatEngage\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"CombatEngage\020_Names\Anthis.ogg"};
			AreaClear[] = {"CombatEngage\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"CombatEngage\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"CombatEngage\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"CombatEngage\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"CombatEngage\DirectionRelative2\at1_1.ogg", "CombatEngage\DirectionRelative2\at1_2.ogg"};
			at10[] = {"CombatEngage\DirectionRelative2\at10_1.ogg", "CombatEngage\DirectionRelative2\at10_2.ogg"};
			at11[] = {"CombatEngage\DirectionRelative2\at11_1.ogg", "CombatEngage\DirectionRelative2\at11_2.ogg"};
			at12[] = {"CombatEngage\DirectionRelative2\at12_1.ogg", "CombatEngage\DirectionRelative2\at12_2.ogg"};
			at2[] = {"CombatEngage\DirectionRelative2\at2_1.ogg", "CombatEngage\DirectionRelative2\at2_2.ogg"};
			at3[] = {"CombatEngage\DirectionRelative2\at3_1.ogg", "CombatEngage\DirectionRelative2\at3_2.ogg"};
			at4[] = {"CombatEngage\DirectionRelative2\at4_1.ogg", "CombatEngage\DirectionRelative2\at4_2.ogg"};
			at5[] = {"CombatEngage\DirectionRelative2\at5_1.ogg", "CombatEngage\DirectionRelative2\at5_2.ogg"};
			at6[] = {"CombatEngage\DirectionRelative2\at6_1.ogg", "CombatEngage\DirectionRelative2\at6_2.ogg"};
			at7[] = {"CombatEngage\DirectionRelative2\at7_1.ogg", "CombatEngage\DirectionRelative2\at7_2.ogg"};
			at8[] = {"CombatEngage\DirectionRelative2\at8_1.ogg", "CombatEngage\DirectionRelative2\at8_2.ogg"};
			at9[] = {"CombatEngage\DirectionRelative2\at9_1.ogg", "CombatEngage\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"CombatEngage\015_Targeting\Attack_1.ogg", "CombatEngage\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"CombatEngage\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"CombatEngage\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"CombatEngage\DirectionRelative1\back_1.ogg", "CombatEngage\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"CombatEngage\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"CombatEngage\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"CombatEngage\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"CombatEngage\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"CombatEngage\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"CombatEngage\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"CombatEngage\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"CombatEngage\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"CombatEngage\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"CombatEngage\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"CombatEngage\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"CombatEngage\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"CombatEngage\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"CombatEngage\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"CombatEngage\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"CombatEngage\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"CombatEngage\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"CombatEngage\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"CombatEngage\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"CombatEngage\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"CombatEngage\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"CombatEngage\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"CombatEngage\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"CombatEngage\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"CombatEngage\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"CombatEngage\020_Names\Bennett.ogg"};
			blueTeam[] = {"CombatEngage\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"CombatEngage\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"CombatEngage\150_Reporting\BombDetected_1.ogg", "CombatEngage\150_Reporting\BombDetected_2.ogg", "CombatEngage\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"CombatEngage\005_Weapons\Bombs.ogg"};
			bravo[] = {"CombatEngage\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"CombatEngage\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"CombatEngage\100_Commands\CancelManualFire_1.ogg", "CombatEngage\100_Commands\CancelManualFire_2.ogg", "CombatEngage\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"CombatEngage\015_Targeting\CancelTarget_1.ogg", "CombatEngage\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"CombatEngage\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"CombatEngage\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"CombatEngage\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"CombatEngage\130_Com_Reply\CannotComply_1.ogg", "CombatEngage\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"CombatEngage\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"CombatEngage\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"CombatEngage\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"CombatEngage\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"CombatEngage\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"CombatEngage\100_Commands\CeaseFire_1.ogg", "CombatEngage\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"CombatEngage\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"CombatEngage\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"CombatEngage\200_CombatShouts\CheeringE_1.ogg", "CombatEngage\200_CombatShouts\CheeringE_2.ogg", "CombatEngage\200_CombatShouts\CheeringE_3.ogg", "CombatEngage\200_CombatShouts\CheeringE_4.ogg", "CombatEngage\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"CombatEngage\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"CombatEngage\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"CombatEngage\200_CombatShouts\CombatGenericE_1.ogg", "CombatEngage\200_CombatShouts\CombatGenericE_2.ogg", "CombatEngage\200_CombatShouts\CombatGenericE_3.ogg", "CombatEngage\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"CombatEngage\100_Commands\CombatOpenFire_1.ogg", "CombatEngage\100_Commands\CombatOpenFire_2.ogg", "CombatEngage\100_Commands\CombatOpenFire_3.ogg", "CombatEngage\100_Commands\CombatOpenFire_4.ogg", "CombatEngage\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"CombatEngage\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"CombatEngage\130_Com_Reply\Confirmation1_1.ogg", "CombatEngage\130_Com_Reply\Confirmation1_2.ogg", "CombatEngage\130_Com_Reply\Confirmation1_3.ogg", "CombatEngage\130_Com_Reply\Confirmation1_4.ogg", "CombatEngage\130_Com_Reply\Confirmation1_5.ogg", "CombatEngage\130_Com_Reply\Confirmation1_6.ogg", "CombatEngage\130_Com_Reply\Confirmation1_7.ogg", "CombatEngage\130_Com_Reply\Confirmation1_8.ogg", "CombatEngage\130_Com_Reply\Confirmation1_9.ogg", "CombatEngage\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"CombatEngage\130_Com_Reply\Confirmation2_1.ogg", "CombatEngage\130_Com_Reply\Confirmation2_2.ogg", "CombatEngage\130_Com_Reply\Confirmation2_3.ogg", "CombatEngage\130_Com_Reply\Confirmation2_4.ogg", "CombatEngage\130_Com_Reply\Confirmation2_5.ogg", "CombatEngage\130_Com_Reply\Confirmation2_6.ogg", "CombatEngage\130_Com_Reply\Confirmation2_7.ogg", "CombatEngage\130_Com_Reply\Confirmation2_8.ogg", "CombatEngage\130_Com_Reply\Confirmation2_9.ogg", "CombatEngage\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"CombatEngage\150_Reporting\Contact_1.ogg", "CombatEngage\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"CombatEngage\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"CombatEngage\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"CombatEngage\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"CombatEngage\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"CombatEngage\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"CombatEngage\020_Names\Costa.ogg"};
			CoveringE[] = {"CombatEngage\200_CombatShouts\CoveringE_1.ogg", "CombatEngage\200_CombatShouts\CoveringE_2.ogg", "CombatEngage\200_CombatShouts\CoveringE_3.ogg", "CombatEngage\200_CombatShouts\CoveringE_4.ogg", "CombatEngage\200_CombatShouts\CoveringE_5.ogg", "CombatEngage\200_CombatShouts\CoveringE_6.ogg", "CombatEngage\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"CombatEngage\200_CombatShouts\CoverMeE_1.ogg", "CombatEngage\200_CombatShouts\CoverMeE_2.ogg", "CombatEngage\200_CombatShouts\CoverMeE_3.ogg", "CombatEngage\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"CombatEngage\140_Com_Status\CriticalDamage_1.ogg", "CombatEngage\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"CombatEngage\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"CombatEngage\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"CombatEngage\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"CombatEngage\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"CombatEngage\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"CombatEngage\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"CombatEngage\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"CombatEngage\100_Commands\Disengage.ogg"};
			Dismount[] = {"CombatEngage\100_Commands\Dismount_1.ogg", "CombatEngage\100_Commands\Dismount_2.ogg"};
			dist100[] = {"CombatEngage\DistanceAbsolute1\dist100_1.ogg", "CombatEngage\DistanceAbsolute1\dist100_2.ogg", "CombatEngage\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"CombatEngage\DistanceAbsolute1\dist1000_1.ogg", "CombatEngage\DistanceAbsolute1\dist1000_2.ogg", "CombatEngage\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"CombatEngage\DistanceAbsolute1\dist1500_1.ogg", "CombatEngage\DistanceAbsolute1\dist1500_2.ogg", "CombatEngage\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"CombatEngage\DistanceAbsolute1\dist200_1.ogg", "CombatEngage\DistanceAbsolute1\dist200_2.ogg", "CombatEngage\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"CombatEngage\DistanceAbsolute1\dist2000_1.ogg", "CombatEngage\DistanceAbsolute1\dist2000_2.ogg", "CombatEngage\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"CombatEngage\DistanceAbsolute1\dist2500_1.ogg", "CombatEngage\DistanceAbsolute1\dist2500_2.ogg", "CombatEngage\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"CombatEngage\DistanceAbsolute1\dist300_1.ogg", "CombatEngage\DistanceAbsolute1\dist300_2.ogg", "CombatEngage\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"CombatEngage\DistanceAbsolute1\dist400_1.ogg", "CombatEngage\DistanceAbsolute1\dist400_2.ogg", "CombatEngage\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"CombatEngage\DistanceAbsolute1\dist500_1.ogg", "CombatEngage\DistanceAbsolute1\dist500_2.ogg", "CombatEngage\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"CombatEngage\DistanceAbsolute1\dist600_1.ogg", "CombatEngage\DistanceAbsolute1\dist600_2.ogg", "CombatEngage\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"CombatEngage\DistanceAbsolute1\dist700_1.ogg", "CombatEngage\DistanceAbsolute1\dist700_2.ogg", "CombatEngage\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"CombatEngage\DistanceAbsolute1\dist75_1.ogg", "CombatEngage\DistanceAbsolute1\dist75_2.ogg", "CombatEngage\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"CombatEngage\DistanceAbsolute1\dist800_1.ogg", "CombatEngage\DistanceAbsolute1\dist800_2.ogg", "CombatEngage\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"CombatEngage\020_Names\Dixon.ogg"};
			dloc_base[] = {"CombatEngage\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"CombatEngage\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"CombatEngage\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"CombatEngage\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"CombatEngage\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"CombatEngage\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"CombatEngage\100_Commands\DropYourPack.ogg"};
			east[] = {"CombatEngage\DirectionCompass1\east_1.ogg", "CombatEngage\DirectionCompass1\east_2.ogg"};
			echo[] = {"CombatEngage\080_MoveAlphabet\echo.ogg"};
			eight[] = {"CombatEngage\025_Numbers\eight.ogg"};
			eighteen[] = {"CombatEngage\025_Numbers\eighteen.ogg"};
			eighty[] = {"CombatEngage\025_Numbers\eighty.ogg"};
			Eject[] = {"CombatEngage\100_Commands\Eject_1.ogg", "CombatEngage\100_Commands\Eject_2.ogg"};
			eleven[] = {"CombatEngage\025_Numbers\eleven.ogg"};
			Elias[] = {"CombatEngage\020_Names\Elias.ogg"};
			EndangeredE[] = {"CombatEngage\200_CombatShouts\EndangeredE_1.ogg", "CombatEngage\200_CombatShouts\EndangeredE_2.ogg", "CombatEngage\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"CombatEngage\150_Reporting\EnemyDetected_1.ogg", "CombatEngage\150_Reporting\EnemyDetected_2.ogg", "CombatEngage\150_Reporting\EnemyDetected_3.ogg", "CombatEngage\150_Reporting\EnemyDetected_4.ogg", "CombatEngage\150_Reporting\EnemyDetected_5.ogg", "CombatEngage\150_Reporting\EnemyDetected_6.ogg", "CombatEngage\150_Reporting\EnemyDetected_7.ogg", "CombatEngage\150_Reporting\EnemyDetected_8.ogg", "CombatEngage\150_Reporting\EnemyDetected_9.ogg", "CombatEngage\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"CombatEngage\015_Targeting\Engage_1.ogg", "CombatEngage\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"CombatEngage\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"CombatEngage\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"CombatEngage\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"CombatEngage\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"CombatEngage\150_Reporting\ExplosiveDetected_1.ogg", "CombatEngage\150_Reporting\ExplosiveDetected_2.ogg", "CombatEngage\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"CombatEngage\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"CombatEngage\020_Names\Fahim.ogg"};
			FallBack[] = {"CombatEngage\100_Commands\FallBack.ogg"};
			fifteen[] = {"CombatEngage\025_Numbers\fifteen.ogg"};
			fifty[] = {"CombatEngage\025_Numbers\fifty.ogg"};
			Fire[] = {"CombatEngage\015_Targeting\Fire_1.ogg", "CombatEngage\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"CombatEngage\100_Commands\FireAtWill.ogg"};
			five[] = {"CombatEngage\025_Numbers\five.ogg"};
			FlankLeft[] = {"CombatEngage\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"CombatEngage\100_Commands\FlankRight.ogg"};
			Flares[] = {"CombatEngage\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"CombatEngage\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"CombatEngage\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"CombatEngage\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"CombatEngage\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"CombatEngage\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"CombatEngage\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"CombatEngage\100_Commands\FormFile.ogg"};
			FormLine[] = {"CombatEngage\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"CombatEngage\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"CombatEngage\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"CombatEngage\100_Commands\FormVee.ogg"};
			FormWedge[] = {"CombatEngage\100_Commands\FormWedge.ogg"};
			forty[] = {"CombatEngage\025_Numbers\forty.ogg"};
			four[] = {"CombatEngage\025_Numbers\four.ogg"};
			fourteen[] = {"CombatEngage\025_Numbers\fourteen.ogg"};
			Fox[] = {"CombatEngage\020_Names\Fox.ogg"};
			foxtrot[] = {"CombatEngage\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"CombatEngage\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"CombatEngage\100_Commands\FreeToEngage.ogg"};
			front[] = {"CombatEngage\DirectionRelative1\front_1.ogg", "CombatEngage\DirectionRelative1\front_2.ogg"};
			Frost[] = {"CombatEngage\020_Names\Frost.ogg"};
			FuelCritical[] = {"CombatEngage\140_Com_Status\FuelCritical_1.ogg", "CombatEngage\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"CombatEngage\140_Com_Status\FuelLow_1.ogg", "CombatEngage\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"CombatEngage\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"CombatEngage\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"CombatEngage\999_FX\FXDeath_1.ogg", "CombatEngage\999_FX\FXDeath_2.ogg", "CombatEngage\999_FX\FXDeath_3.ogg", "CombatEngage\999_FX\FXDeath_4.ogg", "CombatEngage\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"CombatEngage\999_FX\FXDrowning_1.ogg", "CombatEngage\999_FX\FXDrowning_2.ogg", "CombatEngage\999_FX\FXDrowning_3.ogg", "CombatEngage\999_FX\FXDrowning_4.ogg", "CombatEngage\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"CombatEngage\999_FX\FXEffort_1.ogg", "CombatEngage\999_FX\FXEffort_2.ogg", "CombatEngage\999_FX\FXEffort_3.ogg", "CombatEngage\999_FX\FXEffort_4.ogg", "CombatEngage\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"CombatEngage\999_FX\FXHit_1.ogg", "CombatEngage\999_FX\FXHit_2.ogg", "CombatEngage\999_FX\FXHit_3.ogg", "CombatEngage\999_FX\FXHit_4.ogg", "CombatEngage\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"CombatEngage\999_FX\FXHurt_1.ogg", "CombatEngage\999_FX\FXHurt_2.ogg", "CombatEngage\999_FX\FXHurt_3.ogg", "CombatEngage\999_FX\FXHurt_4.ogg", "CombatEngage\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"CombatEngage\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"CombatEngage\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"CombatEngage\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"CombatEngage\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"CombatEngage\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"CombatEngage\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"CombatEngage\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"CombatEngage\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"CombatEngage\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"CombatEngage\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"CombatEngage\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"CombatEngage\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"CombatEngage\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"CombatEngage\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"CombatEngage\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"CombatEngage\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"CombatEngage\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"CombatEngage\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"CombatEngage\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"CombatEngage\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"CombatEngage\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"CombatEngage\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"CombatEngage\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"CombatEngage\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"CombatEngage\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"CombatEngage\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"CombatEngage\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"CombatEngage\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"CombatEngage\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"CombatEngage\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"CombatEngage\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"CombatEngage\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"CombatEngage\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"CombatEngage\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"CombatEngage\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"CombatEngage\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"CombatEngage\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"CombatEngage\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"CombatEngage\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"CombatEngage\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"CombatEngage\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"CombatEngage\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"CombatEngage\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"CombatEngage\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"CombatEngage\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"CombatEngage\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"CombatEngage\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"CombatEngage\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"CombatEngage\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"CombatEngage\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"CombatEngage\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"CombatEngage\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"CombatEngage\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"CombatEngage\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"CombatEngage\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"CombatEngage\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"CombatEngage\100_Commands\GetSupport.ogg"};
			Ghost[] = {"CombatEngage\020_Names\Ghost.ogg"};
			Givens[] = {"CombatEngage\020_Names\Givens.ogg"};
			golf[] = {"CombatEngage\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"CombatEngage\100_Commands\GoProne_1.ogg", "CombatEngage\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"CombatEngage\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"CombatEngage\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"CombatEngage\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"CombatEngage\035_NumbersGrid\grid_eight_1.ogg", "CombatEngage\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"CombatEngage\035_NumbersGrid\grid_eight_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"CombatEngage\035_NumbersGrid\grid_eight_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"CombatEngage\035_NumbersGrid\grid_five_1.ogg", "CombatEngage\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"CombatEngage\035_NumbersGrid\grid_five_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"CombatEngage\035_NumbersGrid\grid_five_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"CombatEngage\035_NumbersGrid\grid_four_1.ogg", "CombatEngage\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"CombatEngage\035_NumbersGrid\grid_four_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"CombatEngage\035_NumbersGrid\grid_four_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"CombatEngage\035_NumbersGrid\grid_move_to_eight_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"CombatEngage\035_NumbersGrid\grid_move_to_five_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"CombatEngage\035_NumbersGrid\grid_move_to_four_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"CombatEngage\035_NumbersGrid\grid_move_to_nine_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"CombatEngage\035_NumbersGrid\grid_move_to_one_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"CombatEngage\035_NumbersGrid\grid_move_to_seven_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"CombatEngage\035_NumbersGrid\grid_move_to_six_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"CombatEngage\035_NumbersGrid\grid_move_to_three_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"CombatEngage\035_NumbersGrid\grid_move_to_two_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"CombatEngage\035_NumbersGrid\grid_move_to_zero_1.ogg", "CombatEngage\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"CombatEngage\035_NumbersGrid\grid_nine_1.ogg", "CombatEngage\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"CombatEngage\035_NumbersGrid\grid_nine_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"CombatEngage\035_NumbersGrid\grid_nine_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"CombatEngage\035_NumbersGrid\grid_one_1.ogg", "CombatEngage\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"CombatEngage\035_NumbersGrid\grid_one_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"CombatEngage\035_NumbersGrid\grid_one_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"CombatEngage\035_NumbersGrid\grid_seven_1.ogg", "CombatEngage\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"CombatEngage\035_NumbersGrid\grid_seven_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"CombatEngage\035_NumbersGrid\grid_seven_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"CombatEngage\035_NumbersGrid\grid_six_1.ogg", "CombatEngage\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"CombatEngage\035_NumbersGrid\grid_six_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"CombatEngage\035_NumbersGrid\grid_six_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"CombatEngage\035_NumbersGrid\grid_three_1.ogg", "CombatEngage\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"CombatEngage\035_NumbersGrid\grid_three_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"CombatEngage\035_NumbersGrid\grid_three_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"CombatEngage\035_NumbersGrid\grid_two_1.ogg", "CombatEngage\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"CombatEngage\035_NumbersGrid\grid_two_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"CombatEngage\035_NumbersGrid\grid_two_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"CombatEngage\035_NumbersGrid\grid_zero_1.ogg", "CombatEngage\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"CombatEngage\035_NumbersGrid\grid_zero_2_1.ogg", "CombatEngage\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"CombatEngage\035_NumbersGrid\grid_zero_3_1.ogg", "CombatEngage\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"CombatEngage\020_Names\Habibi.ogg"};
			Halt[] = {"CombatEngage\100_Commands\Halt.ogg"};
			Hardy[] = {"CombatEngage\020_Names\Hardy.ogg"};
			Hawkins[] = {"CombatEngage\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"CombatEngage\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"CombatEngage\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"CombatEngage\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"CombatEngage\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"CombatEngage\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"CombatEngage\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"CombatEngage\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"CombatEngage\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"CombatEngage\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"CombatEngage\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"CombatEngage\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"CombatEngage\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"CombatEngage\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"CombatEngage\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"CombatEngage\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"CombatEngage\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"CombatEngage\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"CombatEngage\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"CombatEngage\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"CombatEngage\025_Numbers\hundred.ogg"};
			IAmReady[] = {"CombatEngage\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"CombatEngage\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"CombatEngage\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"CombatEngage\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"CombatEngage\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"CombatEngage\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"CombatEngage\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"CombatEngage\020_Names\Jackson.ogg"};
			James[] = {"CombatEngage\020_Names\James.ogg"};
			Jawadi[] = {"CombatEngage\020_Names\Jawadi.ogg"};
			Jester[] = {"CombatEngage\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"CombatEngage\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"CombatEngage\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"CombatEngage\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"CombatEngage\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"CombatEngage\020_Names\Kerry.ogg"};
			kilo[] = {"CombatEngage\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"CombatEngage\020_Names\Korneedler.ogg"};
			Kouris[] = {"CombatEngage\020_Names\Kouris.ogg"};
			Kushan[] = {"CombatEngage\020_Names\Kushan.ogg"};
			Lacey[] = {"CombatEngage\020_Names\Lacey.ogg"};
			Larkin[] = {"CombatEngage\020_Names\Larkin.ogg"};
			left[] = {"CombatEngage\DirectionRelative1\left_1.ogg", "CombatEngage\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"CombatEngage\020_Names\Leventis.ogg"};
			Levine[] = {"CombatEngage\020_Names\Levine.ogg"};
			LightThatFire[] = {"CombatEngage\100_Commands\LightThatFire.ogg"};
			lima[] = {"CombatEngage\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"CombatEngage\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"CombatEngage\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"CombatEngage\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"CombatEngage\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"CombatEngage\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"CombatEngage\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"CombatEngage\020_Names\Lopez.ogg"};
			ManDownE[] = {"CombatEngage\140_Com_Status\ManDownE_1.ogg", "CombatEngage\140_Com_Status\ManDownE_2.ogg", "CombatEngage\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"CombatEngage\100_Commands\ManualFire_1.ogg", "CombatEngage\100_Commands\ManualFire_2.ogg", "CombatEngage\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"CombatEngage\020_Names\Markos.ogg"};
			Martinez[] = {"CombatEngage\020_Names\Martinez.ogg"};
			Masood[] = {"CombatEngage\020_Names\Masood.ogg"};
			McKay[] = {"CombatEngage\020_Names\McKay.ogg"};
			McKendrick[] = {"CombatEngage\020_Names\McKendrick.ogg"};
			mgun[] = {"CombatEngage\005_Weapons\mgun.ogg"};
			mike[] = {"CombatEngage\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"CombatEngage\020_Names\Miller.ogg"};
			MineDetected[] = {"CombatEngage\150_Reporting\MineDetected_1.ogg", "CombatEngage\150_Reporting\MineDetected_2.ogg", "CombatEngage\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"CombatEngage\005_Weapons\missiles.ogg"};
			move_dist100[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"CombatEngage\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"CombatEngage\070_MoveDirectionRelative1\moveBack_1.ogg", "CombatEngage\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"CombatEngage\070_MoveDirectionRelative1\moveLeft_1.ogg", "CombatEngage\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"CombatEngage\070_MoveDirectionRelative1\moveRight_1.ogg", "CombatEngage\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"CombatEngage\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"CombatEngage\070_MoveDirectionRelative1\moveUp_1.ogg", "CombatEngage\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"CombatEngage\020_Names\Nazari.ogg"};
			Negative[] = {"CombatEngage\130_Com_Reply\Negative_1.ogg", "CombatEngage\130_Com_Reply\Negative_2.ogg", "CombatEngage\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"CombatEngage\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"CombatEngage\020_Names\Nichols.ogg"};
			Nicolo[] = {"CombatEngage\020_Names\Nicolo.ogg"};
			Nikas[] = {"CombatEngage\020_Names\Nikas.ogg"};
			nine[] = {"CombatEngage\025_Numbers\nine.ogg"};
			nineteen[] = {"CombatEngage\025_Numbers\nineteen.ogg"};
			ninety[] = {"CombatEngage\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"CombatEngage\130_Com_Reply\NoCanDo_1.ogg", "CombatEngage\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"CombatEngage\DirectionCompass1\north_1.ogg", "CombatEngage\DirectionCompass1\north_2.ogg"};
			northEast[] = {"CombatEngage\DirectionCompass1\northEast_1.ogg", "CombatEngage\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"CombatEngage\020_Names\Northgate.ogg"};
			northWest[] = {"CombatEngage\DirectionCompass1\northWest_1.ogg", "CombatEngage\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"CombatEngage\015_Targeting\NoTarget_1.ogg", "CombatEngage\015_Targeting\NoTarget_2.ogg"};
			november[] = {"CombatEngage\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"CombatEngage\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"CombatEngage\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"CombatEngage\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"CombatEngage\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"CombatEngage\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"CombatEngage\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"CombatEngage\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"CombatEngage\020_Names\OConnor.ogg"};
			one[] = {"CombatEngage\025_Numbers\one.ogg"};
			OnTheMove[] = {"CombatEngage\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"CombatEngage\130_Com_Reply\OnTheWay_1.ogg", "CombatEngage\130_Com_Reply\OnTheWay_2.ogg", "CombatEngage\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"CombatEngage\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"CombatEngage\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"CombatEngage\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"CombatEngage\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"CombatEngage\140_Com_Status\OutOfFirstAidKits_1.ogg", "CombatEngage\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"CombatEngage\020_Names\Panas.ogg"};
			papa[] = {"CombatEngage\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"CombatEngage\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"CombatEngage\020_Names\Patterson.ogg"};
			Petros[] = {"CombatEngage\020_Names\Petros.ogg"};
			PointersOff[] = {"CombatEngage\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"CombatEngage\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"CombatEngage\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"CombatEngage\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"CombatEngage\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"CombatEngage\100_Commands\RallyUp.ogg"};
			Razer[] = {"CombatEngage\020_Names\Razer.ogg"};
			Ready[] = {"CombatEngage\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"CombatEngage\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"CombatEngage\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"CombatEngage\100_Commands\Rearm.ogg"};
			redTeam[] = {"CombatEngage\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"CombatEngage\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"CombatEngage\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"CombatEngage\100_Commands\Regroup.ogg"};
			Relax[] = {"CombatEngage\100_Commands\Relax.ogg"};
			ReloadingE[] = {"CombatEngage\200_CombatShouts\ReloadingE_1.ogg", "CombatEngage\200_CombatShouts\ReloadingE_2.ogg", "CombatEngage\200_CombatShouts\ReloadingE_3.ogg", "CombatEngage\200_CombatShouts\ReloadingE_4.ogg", "CombatEngage\200_CombatShouts\ReloadingE_5.ogg", "CombatEngage\200_CombatShouts\ReloadingE_6.ogg", "CombatEngage\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"CombatEngage\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"CombatEngage\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"CombatEngage\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"CombatEngage\DirectionRelative3\reportBack_1.ogg", "CombatEngage\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"CombatEngage\DirectionRelative3\reportFront_1.ogg", "CombatEngage\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"CombatEngage\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"CombatEngage\DirectionRelative3\reportLeft_1.ogg", "CombatEngage\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"CombatEngage\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"CombatEngage\DirectionRelative3\reportRight_1.ogg", "CombatEngage\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"CombatEngage\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"CombatEngage\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"CombatEngage\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"CombatEngage\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"CombatEngage\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"CombatEngage\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"CombatEngage\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"CombatEngage\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"CombatEngage\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"CombatEngage\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"CombatEngage\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"CombatEngage\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"CombatEngage\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"CombatEngage\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"CombatEngage\020_Names\Reynolds.ogg"};
			right[] = {"CombatEngage\DirectionRelative1\right_1.ogg", "CombatEngage\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"CombatEngage\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"CombatEngage\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"CombatEngage\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"CombatEngage\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"CombatEngage\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"CombatEngage\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"CombatEngage\020_Names\Ryan.ogg"};
			sabot[] = {"CombatEngage\005_Weapons\sabot.ogg"};
			Safe[] = {"CombatEngage\100_Commands\Safe_1.ogg", "CombatEngage\100_Commands\Safe_2.ogg"};
			Samaras[] = {"CombatEngage\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"CombatEngage\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"CombatEngage\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"CombatEngage\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"CombatEngage\200_CombatShouts\ScreamingE_1.ogg", "CombatEngage\200_CombatShouts\ScreamingE_2.ogg", "CombatEngage\200_CombatShouts\ScreamingE_3.ogg", "CombatEngage\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"CombatEngage\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"CombatEngage\100_Commands\SetTheTimer.ogg"};
			seven[] = {"CombatEngage\025_Numbers\seven.ogg"};
			seventeen[] = {"CombatEngage\025_Numbers\seventeen.ogg"};
			seventy[] = {"CombatEngage\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"CombatEngage\020_Names\Siddiqi.ogg"};
			sierra[] = {"CombatEngage\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"CombatEngage\100_Commands\Silence.ogg"};
			Sitrep[] = {"CombatEngage\120_Com_Ask\Sitrep.ogg"};
			six[] = {"CombatEngage\025_Numbers\six.ogg"};
			sixteen[] = {"CombatEngage\025_Numbers\sixteen.ogg"};
			sixty[] = {"CombatEngage\025_Numbers\sixty.ogg"};
			Snake[] = {"CombatEngage\020_Names\Snake.ogg"};
			south[] = {"CombatEngage\DirectionCompass1\south_1.ogg", "CombatEngage\DirectionCompass1\south_2.ogg"};
			southEast[] = {"CombatEngage\DirectionCompass1\southEast_1.ogg", "CombatEngage\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"CombatEngage\DirectionCompass1\southWest_1.ogg", "CombatEngage\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"CombatEngage\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"CombatEngage\020_Names\Stavrou.ogg"};
			StayAlert[] = {"CombatEngage\100_Commands\StayAlert.ogg"};
			StayBack[] = {"CombatEngage\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"CombatEngage\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"CombatEngage\100_Commands\StayLow.ogg"};
			Stop[] = {"CombatEngage\100_Commands\Stop.ogg"};
			Stranger[] = {"CombatEngage\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"CombatEngage\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"CombatEngage\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"CombatEngage\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"CombatEngage\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"CombatEngage\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"CombatEngage\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"CombatEngage\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"CombatEngage\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"CombatEngage\130_Com_Reply\Suppressing_1.ogg", "CombatEngage\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"CombatEngage\200_CombatShouts\SuppressingE_1.ogg", "CombatEngage\200_CombatShouts\SuppressingE_2.ogg", "CombatEngage\200_CombatShouts\SuppressingE_3.ogg", "CombatEngage\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"CombatEngage\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"CombatEngage\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"CombatEngage\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"CombatEngage\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"CombatEngage\020_Names\Sykes.ogg"};
			TakeCover[] = {"CombatEngage\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"CombatEngage\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"CombatEngage\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"CombatEngage\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"CombatEngage\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"CombatEngage\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"CombatEngage\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"CombatEngage\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"CombatEngage\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"CombatEngage\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"CombatEngage\020_Names\Tanny.ogg"};
			Target[] = {"CombatEngage\015_Targeting\Target_1.ogg", "CombatEngage\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"CombatEngage\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"CombatEngage\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"CombatEngage\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"CombatEngage\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"CombatEngage\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"CombatEngage\020_Names\Taylor.ogg"};
			ten[] = {"CombatEngage\025_Numbers\ten.ogg"};
			Thanos[] = {"CombatEngage\020_Names\Thanos.ogg"};
			thirteen[] = {"CombatEngage\025_Numbers\thirteen.ogg"};
			thirty[] = {"CombatEngage\025_Numbers\thirty.ogg"};
			three[] = {"CombatEngage\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"CombatEngage\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"CombatEngage\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"CombatEngage\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"CombatEngage\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"CombatEngage\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"CombatEngage\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"CombatEngage\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"CombatEngage\025_Numbers\twelve.ogg"};
			twenty[] = {"CombatEngage\025_Numbers\twenty.ogg"};
			two[] = {"CombatEngage\025_Numbers\two.ogg"};
			UnderFireE[] = {"CombatEngage\200_CombatShouts\UnderFireE_1.ogg", "CombatEngage\200_CombatShouts\UnderFireE_2.ogg", "CombatEngage\200_CombatShouts\UnderFireE_3.ogg", "CombatEngage\200_CombatShouts\UnderFireE_4.ogg", "CombatEngage\200_CombatShouts\UnderFireE_5.ogg", "CombatEngage\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"CombatEngage\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"CombatEngage\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"CombatEngage\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"CombatEngage\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"CombatEngage\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"CombatEngage\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"CombatEngage\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"CombatEngage\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"CombatEngage\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"CombatEngage\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"CombatEngage\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"CombatEngage\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"CombatEngage\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"CombatEngage\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"CombatEngage\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"CombatEngage\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"CombatEngage\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"CombatEngage\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"CombatEngage\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"CombatEngage\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"CombatEngage\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"CombatEngage\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"CombatEngage\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"CombatEngage\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"CombatEngage\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"CombatEngage\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"CombatEngage\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"CombatEngage\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"CombatEngage\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"CombatEngage\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"CombatEngage\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"CombatEngage\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"CombatEngage\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"CombatEngage\010_Vehicles\veh_infantry_p_1.ogg", "CombatEngage\010_Vehicles\veh_infantry_p_2.ogg", "CombatEngage\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"CombatEngage\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"CombatEngage\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"CombatEngage\010_Vehicles\veh_infantry_s_1.ogg", "CombatEngage\010_Vehicles\veh_infantry_s_2.ogg", "CombatEngage\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"CombatEngage\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"CombatEngage\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"CombatEngage\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"CombatEngage\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"CombatEngage\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"CombatEngage\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"CombatEngage\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"CombatEngage\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"CombatEngage\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"CombatEngage\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"CombatEngage\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"CombatEngage\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"CombatEngage\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"CombatEngage\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"CombatEngage\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"CombatEngage\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"CombatEngage\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"CombatEngage\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"CombatEngage\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"CombatEngage\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"CombatEngage\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"CombatEngage\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"CombatEngage\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"CombatEngage\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"CombatEngage\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"CombatEngage\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"CombatEngage\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"CombatEngage\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"CombatEngage\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"CombatEngage\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"CombatEngage\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"CombatEngage\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"CombatEngage\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"CombatEngage\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"CombatEngage\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"CombatEngage\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"CombatEngage\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"CombatEngage\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"CombatEngage\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"CombatEngage\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"CombatEngage\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"CombatEngage\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"CombatEngage\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"CombatEngage\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"CombatEngage\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"CombatEngage\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"CombatEngage\100_Commands\VehBackward_1.ogg", "CombatEngage\100_Commands\VehBackward_2.ogg", "CombatEngage\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"CombatEngage\100_Commands\VehFast_1.ogg", "CombatEngage\100_Commands\VehFast_2.ogg", "CombatEngage\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"CombatEngage\100_Commands\VehForward_1.ogg", "CombatEngage\100_Commands\VehForward_2.ogg", "CombatEngage\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"CombatEngage\100_Commands\VehLeft_1.ogg", "CombatEngage\100_Commands\VehLeft_2.ogg", "CombatEngage\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"CombatEngage\100_Commands\VehRight_1.ogg", "CombatEngage\100_Commands\VehRight_2.ogg", "CombatEngage\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"CombatEngage\100_Commands\VehSlow_1.ogg", "CombatEngage\100_Commands\VehSlow_2.ogg", "CombatEngage\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"CombatEngage\100_Commands\VehStop_1.ogg", "CombatEngage\100_Commands\VehStop_2.ogg", "CombatEngage\100_Commands\VehStop_3.ogg"};
			victor[] = {"CombatEngage\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"CombatEngage\020_Names\Viper.ogg"};
			Waiting[] = {"CombatEngage\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"CombatEngage\020_Names\Walker.ogg"};
			Wardak[] = {"CombatEngage\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"CombatEngage\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"CombatEngage\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"CombatEngage\140_Com_Status\WeGotAManDownE_1.ogg", "CombatEngage\140_Com_Status\WeGotAManDownE_2.ogg", "CombatEngage\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"CombatEngage\140_Com_Status\WeLostOneE_1.ogg", "CombatEngage\140_Com_Status\WeLostOneE_2.ogg", "CombatEngage\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"CombatEngage\DirectionCompass1\west_1.ogg", "CombatEngage\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"CombatEngage\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"CombatEngage\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"CombatEngage\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"CombatEngage\200_CombatShouts\WitnessKilledE_1.ogg", "CombatEngage\200_CombatShouts\WitnessKilledE_2.ogg", "CombatEngage\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"CombatEngage\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"CombatEngage\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"CombatEngage\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"CombatEngage\020_Names\Yousuf.ogg"};
			zero[] = {"CombatEngage\025_Numbers\zero.ogg"};
			zulu[] = {"CombatEngage\080_MoveAlphabet\zulu.ogg"};
		};
		class Normal
		{
			__1[] = {"Normal\Misc\__1.ogg"};
			__10[] = {"Normal\Misc\__10.ogg"};
			__11[] = {"Normal\Misc\__11.ogg"};
			__12[] = {"Normal\Misc\__12.ogg"};
			__13[] = {"Normal\Misc\__13.ogg"};
			__14[] = {"Normal\Misc\__14.ogg"};
			__15[] = {"Normal\Misc\__15.ogg"};
			__1_1[] = {"Normal\Combat\__1_1.ogg"};
			__2[] = {"Normal\Misc\__2.ogg"};
			__2_1[] = {"Normal\Misc\__2_1.ogg"};
			__3[] = {"Normal\Misc\__3.ogg"};
			__4[] = {"Normal\Misc\__4.ogg"};
			__4_CMPS[] = {"Normal\Misc\__4_CMPS.ogg"};
			__5[] = {"Normal\Misc\__5.ogg"};
			__6[] = {"Normal\Misc\__6.ogg"};
			__6_3[] = {"Normal\Misc\__6_3.ogg"};
			__6_ABS[] = {"Normal\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"Normal\Misc\__6_CMPS.ogg"};
			__7[] = {"Normal\Misc\__7.ogg"};
			__7_CLCK[] = {"Normal\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"Normal\Misc\__7_CMPS.ogg"};
			__8[] = {"Normal\Misc\__8.ogg"};
			__9[] = {"Normal\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"Normal\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"Normal\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"Normal\020_Names\Adams.ogg"};
			Advance[] = {"Normal\100_Commands\Advance.ogg"};
			alpha[] = {"Normal\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"Normal\020_Names\Amin.ogg"};
			AmmoCritical[] = {"Normal\140_Com_Status\AmmoCritical_1.ogg", "Normal\140_Com_Status\AmmoCritical_2.ogg", "Normal\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"Normal\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"Normal\020_Names\Anthis.ogg"};
			AreaClear[] = {"Normal\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"Normal\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"Normal\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"Normal\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"Normal\DirectionRelative2\at1_1.ogg", "Normal\DirectionRelative2\at1_2.ogg"};
			at10[] = {"Normal\DirectionRelative2\at10_1.ogg", "Normal\DirectionRelative2\at10_2.ogg"};
			at11[] = {"Normal\DirectionRelative2\at11_1.ogg", "Normal\DirectionRelative2\at11_2.ogg"};
			at12[] = {"Normal\DirectionRelative2\at12_1.ogg", "Normal\DirectionRelative2\at12_2.ogg"};
			at2[] = {"Normal\DirectionRelative2\at2_1.ogg", "Normal\DirectionRelative2\at2_2.ogg"};
			at3[] = {"Normal\DirectionRelative2\at3_1.ogg", "Normal\DirectionRelative2\at3_2.ogg"};
			at4[] = {"Normal\DirectionRelative2\at4_1.ogg", "Normal\DirectionRelative2\at4_2.ogg"};
			at5[] = {"Normal\DirectionRelative2\at5_1.ogg", "Normal\DirectionRelative2\at5_2.ogg"};
			at6[] = {"Normal\DirectionRelative2\at6_1.ogg", "Normal\DirectionRelative2\at6_2.ogg"};
			at7[] = {"Normal\DirectionRelative2\at7_1.ogg", "Normal\DirectionRelative2\at7_2.ogg"};
			at8[] = {"Normal\DirectionRelative2\at8_1.ogg", "Normal\DirectionRelative2\at8_2.ogg"};
			at9[] = {"Normal\DirectionRelative2\at9_1.ogg", "Normal\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"Normal\015_Targeting\Attack_1.ogg", "Normal\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"Normal\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"Normal\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"Normal\DirectionRelative1\back_1.ogg", "Normal\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"Normal\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"Normal\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"Normal\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"Normal\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"Normal\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"Normal\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"Normal\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"Normal\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"Normal\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"Normal\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"Normal\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"Normal\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"Normal\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"Normal\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"Normal\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"Normal\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"Normal\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"Normal\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"Normal\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"Normal\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"Normal\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"Normal\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"Normal\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"Normal\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"Normal\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"Normal\020_Names\Bennett.ogg"};
			blueTeam[] = {"Normal\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"Normal\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"Normal\150_Reporting\BombDetected_1.ogg", "Normal\150_Reporting\BombDetected_2.ogg", "Normal\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"Normal\005_Weapons\Bombs.ogg"};
			bravo[] = {"Normal\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"Normal\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"Normal\100_Commands\CancelManualFire_1.ogg", "Normal\100_Commands\CancelManualFire_2.ogg", "Normal\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"Normal\015_Targeting\CancelTarget_1.ogg", "Normal\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"Normal\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"Normal\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"Normal\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"Normal\130_Com_Reply\CannotComply_1.ogg", "Normal\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"Normal\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"Normal\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"Normal\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"Normal\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"Normal\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"Normal\100_Commands\CeaseFire_1.ogg", "Normal\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"Normal\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"Normal\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"Normal\200_CombatShouts\CheeringE_1.ogg", "Normal\200_CombatShouts\CheeringE_2.ogg", "Normal\200_CombatShouts\CheeringE_3.ogg", "Normal\200_CombatShouts\CheeringE_4.ogg", "Normal\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"Normal\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"Normal\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"Normal\200_CombatShouts\CombatGenericE_1.ogg", "Normal\200_CombatShouts\CombatGenericE_2.ogg", "Normal\200_CombatShouts\CombatGenericE_3.ogg", "Normal\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"Normal\100_Commands\CombatOpenFire_1.ogg", "Normal\100_Commands\CombatOpenFire_2.ogg", "Normal\100_Commands\CombatOpenFire_3.ogg", "Normal\100_Commands\CombatOpenFire_4.ogg", "Normal\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"Normal\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"Normal\130_Com_Reply\Confirmation1_1.ogg", "Normal\130_Com_Reply\Confirmation1_2.ogg", "Normal\130_Com_Reply\Confirmation1_3.ogg", "Normal\130_Com_Reply\Confirmation1_4.ogg", "Normal\130_Com_Reply\Confirmation1_5.ogg", "Normal\130_Com_Reply\Confirmation1_6.ogg", "Normal\130_Com_Reply\Confirmation1_7.ogg", "Normal\130_Com_Reply\Confirmation1_8.ogg", "Normal\130_Com_Reply\Confirmation1_9.ogg", "Normal\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"Normal\130_Com_Reply\Confirmation2_1.ogg", "Normal\130_Com_Reply\Confirmation2_2.ogg", "Normal\130_Com_Reply\Confirmation2_3.ogg", "Normal\130_Com_Reply\Confirmation2_4.ogg", "Normal\130_Com_Reply\Confirmation2_5.ogg", "Normal\130_Com_Reply\Confirmation2_6.ogg", "Normal\130_Com_Reply\Confirmation2_7.ogg", "Normal\130_Com_Reply\Confirmation2_8.ogg", "Normal\130_Com_Reply\Confirmation2_9.ogg", "Normal\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"Normal\150_Reporting\Contact_1.ogg", "Normal\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"Normal\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"Normal\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"Normal\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"Normal\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"Normal\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"Normal\020_Names\Costa.ogg"};
			CoveringE[] = {"Normal\200_CombatShouts\CoveringE_1.ogg", "Normal\200_CombatShouts\CoveringE_2.ogg", "Normal\200_CombatShouts\CoveringE_3.ogg", "Normal\200_CombatShouts\CoveringE_4.ogg", "Normal\200_CombatShouts\CoveringE_5.ogg", "Normal\200_CombatShouts\CoveringE_6.ogg", "Normal\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"Normal\200_CombatShouts\CoverMeE_1.ogg", "Normal\200_CombatShouts\CoverMeE_2.ogg", "Normal\200_CombatShouts\CoverMeE_3.ogg", "Normal\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"Normal\140_Com_Status\CriticalDamage_1.ogg", "Normal\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"Normal\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"Normal\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"Normal\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"Normal\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"Normal\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"Normal\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"Normal\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"Normal\100_Commands\Disengage.ogg"};
			Dismount[] = {"Normal\100_Commands\Dismount_1.ogg", "Normal\100_Commands\Dismount_2.ogg"};
			dist100[] = {"Normal\DistanceAbsolute1\dist100_1.ogg", "Normal\DistanceAbsolute1\dist100_2.ogg", "Normal\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"Normal\DistanceAbsolute1\dist1000_1.ogg", "Normal\DistanceAbsolute1\dist1000_2.ogg", "Normal\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"Normal\DistanceAbsolute1\dist1500_1.ogg", "Normal\DistanceAbsolute1\dist1500_2.ogg", "Normal\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"Normal\DistanceAbsolute1\dist200_1.ogg", "Normal\DistanceAbsolute1\dist200_2.ogg", "Normal\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"Normal\DistanceAbsolute1\dist2000_1.ogg", "Normal\DistanceAbsolute1\dist2000_2.ogg", "Normal\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"Normal\DistanceAbsolute1\dist2500_1.ogg", "Normal\DistanceAbsolute1\dist2500_2.ogg", "Normal\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"Normal\DistanceAbsolute1\dist300_1.ogg", "Normal\DistanceAbsolute1\dist300_2.ogg", "Normal\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"Normal\DistanceAbsolute1\dist400_1.ogg", "Normal\DistanceAbsolute1\dist400_2.ogg", "Normal\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"Normal\DistanceAbsolute1\dist500_1.ogg", "Normal\DistanceAbsolute1\dist500_2.ogg", "Normal\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"Normal\DistanceAbsolute1\dist600_1.ogg", "Normal\DistanceAbsolute1\dist600_2.ogg", "Normal\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"Normal\DistanceAbsolute1\dist700_1.ogg", "Normal\DistanceAbsolute1\dist700_2.ogg", "Normal\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"Normal\DistanceAbsolute1\dist75_1.ogg", "Normal\DistanceAbsolute1\dist75_2.ogg", "Normal\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"Normal\DistanceAbsolute1\dist800_1.ogg", "Normal\DistanceAbsolute1\dist800_2.ogg", "Normal\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"Normal\020_Names\Dixon.ogg"};
			dloc_base[] = {"Normal\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"Normal\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"Normal\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"Normal\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"Normal\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"Normal\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"Normal\100_Commands\DropYourPack.ogg"};
			east[] = {"Normal\DirectionCompass1\east_1.ogg", "Normal\DirectionCompass1\east_2.ogg"};
			echo[] = {"Normal\080_MoveAlphabet\echo.ogg"};
			eight[] = {"Normal\025_Numbers\eight.ogg"};
			eighteen[] = {"Normal\025_Numbers\eighteen.ogg"};
			eighty[] = {"Normal\025_Numbers\eighty.ogg"};
			Eject[] = {"Normal\100_Commands\Eject_1.ogg", "Normal\100_Commands\Eject_2.ogg"};
			eleven[] = {"Normal\025_Numbers\eleven.ogg"};
			Elias[] = {"Normal\020_Names\Elias.ogg"};
			EndangeredE[] = {"Normal\200_CombatShouts\EndangeredE_1.ogg", "Normal\200_CombatShouts\EndangeredE_2.ogg", "Normal\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"Normal\150_Reporting\EnemyDetected_1.ogg", "Normal\150_Reporting\EnemyDetected_2.ogg", "Normal\150_Reporting\EnemyDetected_3.ogg", "Normal\150_Reporting\EnemyDetected_4.ogg", "Normal\150_Reporting\EnemyDetected_5.ogg", "Normal\150_Reporting\EnemyDetected_6.ogg", "Normal\150_Reporting\EnemyDetected_7.ogg", "Normal\150_Reporting\EnemyDetected_8.ogg", "Normal\150_Reporting\EnemyDetected_9.ogg", "Normal\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"Normal\015_Targeting\Engage_1.ogg", "Normal\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"Normal\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"Normal\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"Normal\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"Normal\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"Normal\150_Reporting\ExplosiveDetected_1.ogg", "Normal\150_Reporting\ExplosiveDetected_2.ogg", "Normal\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"Normal\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"Normal\020_Names\Fahim.ogg"};
			FallBack[] = {"Normal\100_Commands\FallBack.ogg"};
			fifteen[] = {"Normal\025_Numbers\fifteen.ogg"};
			fifty[] = {"Normal\025_Numbers\fifty.ogg"};
			Fire[] = {"Normal\015_Targeting\Fire_1.ogg", "Normal\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"Normal\100_Commands\FireAtWill.ogg"};
			five[] = {"Normal\025_Numbers\five.ogg"};
			FlankLeft[] = {"Normal\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"Normal\100_Commands\FlankRight.ogg"};
			Flares[] = {"Normal\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"Normal\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"Normal\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"Normal\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"Normal\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"Normal\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"Normal\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"Normal\100_Commands\FormFile.ogg"};
			FormLine[] = {"Normal\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"Normal\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"Normal\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"Normal\100_Commands\FormVee.ogg"};
			FormWedge[] = {"Normal\100_Commands\FormWedge.ogg"};
			forty[] = {"Normal\025_Numbers\forty.ogg"};
			four[] = {"Normal\025_Numbers\four.ogg"};
			fourteen[] = {"Normal\025_Numbers\fourteen.ogg"};
			Fox[] = {"Normal\020_Names\Fox.ogg"};
			foxtrot[] = {"Normal\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"Normal\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"Normal\100_Commands\FreeToEngage.ogg"};
			front[] = {"Normal\DirectionRelative1\front_1.ogg", "Normal\DirectionRelative1\front_2.ogg"};
			Frost[] = {"Normal\020_Names\Frost.ogg"};
			FuelCritical[] = {"Normal\140_Com_Status\FuelCritical_1.ogg", "Normal\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"Normal\140_Com_Status\FuelLow_1.ogg", "Normal\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"Normal\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"Normal\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"Normal\999_FX\FXDeath_1.ogg", "Normal\999_FX\FXDeath_2.ogg", "Normal\999_FX\FXDeath_3.ogg", "Normal\999_FX\FXDeath_4.ogg", "Normal\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"Normal\999_FX\FXDrowning_1.ogg", "Normal\999_FX\FXDrowning_2.ogg", "Normal\999_FX\FXDrowning_3.ogg", "Normal\999_FX\FXDrowning_4.ogg", "Normal\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"Normal\999_FX\FXEffort_1.ogg", "Normal\999_FX\FXEffort_2.ogg", "Normal\999_FX\FXEffort_3.ogg", "Normal\999_FX\FXEffort_4.ogg", "Normal\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"Normal\999_FX\FXHit_1.ogg", "Normal\999_FX\FXHit_2.ogg", "Normal\999_FX\FXHit_3.ogg", "Normal\999_FX\FXHit_4.ogg", "Normal\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"Normal\999_FX\FXHurt_1.ogg", "Normal\999_FX\FXHurt_2.ogg", "Normal\999_FX\FXHurt_3.ogg", "Normal\999_FX\FXHurt_4.ogg", "Normal\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"Normal\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"Normal\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"Normal\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"Normal\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"Normal\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"Normal\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"Normal\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"Normal\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"Normal\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"Normal\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"Normal\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"Normal\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"Normal\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"Normal\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"Normal\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"Normal\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"Normal\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"Normal\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"Normal\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"Normal\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"Normal\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"Normal\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"Normal\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"Normal\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"Normal\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"Normal\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"Normal\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"Normal\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"Normal\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"Normal\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"Normal\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"Normal\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"Normal\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"Normal\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"Normal\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"Normal\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"Normal\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"Normal\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"Normal\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"Normal\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"Normal\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"Normal\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"Normal\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"Normal\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"Normal\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"Normal\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"Normal\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"Normal\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"Normal\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"Normal\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"Normal\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"Normal\100_Commands\GetSupport.ogg"};
			Ghost[] = {"Normal\020_Names\Ghost.ogg"};
			Givens[] = {"Normal\020_Names\Givens.ogg"};
			golf[] = {"Normal\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"Normal\100_Commands\GoProne_1.ogg", "Normal\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"Normal\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"Normal\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"Normal\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"Normal\035_NumbersGrid\grid_eight_1.ogg", "Normal\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"Normal\035_NumbersGrid\grid_eight_2_1.ogg", "Normal\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"Normal\035_NumbersGrid\grid_eight_3_1.ogg", "Normal\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"Normal\035_NumbersGrid\grid_five_1.ogg", "Normal\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"Normal\035_NumbersGrid\grid_five_2_1.ogg", "Normal\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"Normal\035_NumbersGrid\grid_five_3_1.ogg", "Normal\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"Normal\035_NumbersGrid\grid_four_1.ogg", "Normal\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"Normal\035_NumbersGrid\grid_four_2_1.ogg", "Normal\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"Normal\035_NumbersGrid\grid_four_3_1.ogg", "Normal\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"Normal\035_NumbersGrid\grid_move_to_eight_1.ogg", "Normal\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"Normal\035_NumbersGrid\grid_move_to_five_1.ogg", "Normal\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"Normal\035_NumbersGrid\grid_move_to_four_1.ogg", "Normal\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"Normal\035_NumbersGrid\grid_move_to_nine_1.ogg", "Normal\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"Normal\035_NumbersGrid\grid_move_to_one_1.ogg", "Normal\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"Normal\035_NumbersGrid\grid_move_to_seven_1.ogg", "Normal\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"Normal\035_NumbersGrid\grid_move_to_six_1.ogg", "Normal\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"Normal\035_NumbersGrid\grid_move_to_three_1.ogg", "Normal\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"Normal\035_NumbersGrid\grid_move_to_two_1.ogg", "Normal\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"Normal\035_NumbersGrid\grid_move_to_zero_1.ogg", "Normal\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"Normal\035_NumbersGrid\grid_nine_1.ogg", "Normal\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"Normal\035_NumbersGrid\grid_nine_2_1.ogg", "Normal\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"Normal\035_NumbersGrid\grid_nine_3_1.ogg", "Normal\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"Normal\035_NumbersGrid\grid_one_1.ogg", "Normal\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"Normal\035_NumbersGrid\grid_one_2_1.ogg", "Normal\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"Normal\035_NumbersGrid\grid_one_3_1.ogg", "Normal\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"Normal\035_NumbersGrid\grid_seven_1.ogg", "Normal\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"Normal\035_NumbersGrid\grid_seven_2_1.ogg", "Normal\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"Normal\035_NumbersGrid\grid_seven_3_1.ogg", "Normal\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"Normal\035_NumbersGrid\grid_six_1.ogg", "Normal\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"Normal\035_NumbersGrid\grid_six_2_1.ogg", "Normal\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"Normal\035_NumbersGrid\grid_six_3_1.ogg", "Normal\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"Normal\035_NumbersGrid\grid_three_1.ogg", "Normal\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"Normal\035_NumbersGrid\grid_three_2_1.ogg", "Normal\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"Normal\035_NumbersGrid\grid_three_3_1.ogg", "Normal\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"Normal\035_NumbersGrid\grid_two_1.ogg", "Normal\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"Normal\035_NumbersGrid\grid_two_2_1.ogg", "Normal\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"Normal\035_NumbersGrid\grid_two_3_1.ogg", "Normal\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"Normal\035_NumbersGrid\grid_zero_1.ogg", "Normal\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"Normal\035_NumbersGrid\grid_zero_2_1.ogg", "Normal\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"Normal\035_NumbersGrid\grid_zero_3_1.ogg", "Normal\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"Normal\020_Names\Habibi.ogg"};
			Halt[] = {"Normal\100_Commands\Halt.ogg"};
			Hardy[] = {"Normal\020_Names\Hardy.ogg"};
			Hawkins[] = {"Normal\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"Normal\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"Normal\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"Normal\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"Normal\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"Normal\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"Normal\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"Normal\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"Normal\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"Normal\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"Normal\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"Normal\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"Normal\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"Normal\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"Normal\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"Normal\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"Normal\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"Normal\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"Normal\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"Normal\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"Normal\025_Numbers\hundred.ogg"};
			IAmReady[] = {"Normal\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"Normal\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"Normal\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"Normal\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"Normal\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"Normal\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"Normal\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"Normal\020_Names\Jackson.ogg"};
			James[] = {"Normal\020_Names\James.ogg"};
			Jawadi[] = {"Normal\020_Names\Jawadi.ogg"};
			Jester[] = {"Normal\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"Normal\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"Normal\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"Normal\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"Normal\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"Normal\020_Names\Kerry.ogg"};
			kilo[] = {"Normal\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"Normal\020_Names\Korneedler.ogg"};
			Kouris[] = {"Normal\020_Names\Kouris.ogg"};
			Kushan[] = {"Normal\020_Names\Kushan.ogg"};
			Lacey[] = {"Normal\020_Names\Lacey.ogg"};
			Larkin[] = {"Normal\020_Names\Larkin.ogg"};
			left[] = {"Normal\DirectionRelative1\left_1.ogg", "Normal\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"Normal\020_Names\Leventis.ogg"};
			Levine[] = {"Normal\020_Names\Levine.ogg"};
			LightThatFire[] = {"Normal\100_Commands\LightThatFire.ogg"};
			lima[] = {"Normal\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"Normal\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"Normal\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"Normal\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"Normal\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"Normal\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"Normal\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"Normal\020_Names\Lopez.ogg"};
			ManDownE[] = {"Normal\140_Com_Status\ManDownE_1.ogg", "Normal\140_Com_Status\ManDownE_2.ogg", "Normal\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"Normal\100_Commands\ManualFire_1.ogg", "Normal\100_Commands\ManualFire_2.ogg", "Normal\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"Normal\020_Names\Markos.ogg"};
			Martinez[] = {"Normal\020_Names\Martinez.ogg"};
			Masood[] = {"Normal\020_Names\Masood.ogg"};
			McKay[] = {"Normal\020_Names\McKay.ogg"};
			McKendrick[] = {"Normal\020_Names\McKendrick.ogg"};
			mgun[] = {"Normal\005_Weapons\mgun.ogg"};
			mike[] = {"Normal\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"Normal\020_Names\Miller.ogg"};
			MineDetected[] = {"Normal\150_Reporting\MineDetected_1.ogg", "Normal\150_Reporting\MineDetected_2.ogg", "Normal\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"Normal\005_Weapons\missiles.ogg"};
			move_dist100[] = {"Normal\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"Normal\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"Normal\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"Normal\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"Normal\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"Normal\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"Normal\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"Normal\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"Normal\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"Normal\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"Normal\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"Normal\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"Normal\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"Normal\070_MoveDirectionRelative1\moveBack_1.ogg", "Normal\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"Normal\070_MoveDirectionRelative1\moveLeft_1.ogg", "Normal\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"Normal\070_MoveDirectionRelative1\moveRight_1.ogg", "Normal\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"Normal\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"Normal\070_MoveDirectionRelative1\moveUp_1.ogg", "Normal\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"Normal\020_Names\Nazari.ogg"};
			Negative[] = {"Normal\130_Com_Reply\Negative_1.ogg", "Normal\130_Com_Reply\Negative_2.ogg", "Normal\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"Normal\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"Normal\020_Names\Nichols.ogg"};
			Nicolo[] = {"Normal\020_Names\Nicolo.ogg"};
			Nikas[] = {"Normal\020_Names\Nikas.ogg"};
			nine[] = {"Normal\025_Numbers\nine.ogg"};
			nineteen[] = {"Normal\025_Numbers\nineteen.ogg"};
			ninety[] = {"Normal\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"Normal\130_Com_Reply\NoCanDo_1.ogg", "Normal\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"Normal\DirectionCompass1\north_1.ogg", "Normal\DirectionCompass1\north_2.ogg"};
			northEast[] = {"Normal\DirectionCompass1\northEast_1.ogg", "Normal\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"Normal\020_Names\Northgate.ogg"};
			northWest[] = {"Normal\DirectionCompass1\northWest_1.ogg", "Normal\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"Normal\015_Targeting\NoTarget_1.ogg", "Normal\015_Targeting\NoTarget_2.ogg"};
			november[] = {"Normal\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"Normal\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"Normal\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"Normal\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"Normal\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"Normal\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"Normal\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"Normal\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"Normal\020_Names\OConnor.ogg"};
			one[] = {"Normal\025_Numbers\one.ogg"};
			OnTheMove[] = {"Normal\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"Normal\130_Com_Reply\OnTheWay_1.ogg", "Normal\130_Com_Reply\OnTheWay_2.ogg", "Normal\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"Normal\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"Normal\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"Normal\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"Normal\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"Normal\140_Com_Status\OutOfFirstAidKits_1.ogg", "Normal\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"Normal\020_Names\Panas.ogg"};
			papa[] = {"Normal\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"Normal\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"Normal\020_Names\Patterson.ogg"};
			Petros[] = {"Normal\020_Names\Petros.ogg"};
			PointersOff[] = {"Normal\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"Normal\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"Normal\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"Normal\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"Normal\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"Normal\100_Commands\RallyUp.ogg"};
			Razer[] = {"Normal\020_Names\Razer.ogg"};
			Ready[] = {"Normal\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"Normal\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"Normal\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"Normal\100_Commands\Rearm.ogg"};
			redTeam[] = {"Normal\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"Normal\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"Normal\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"Normal\100_Commands\Regroup.ogg"};
			Relax[] = {"Normal\100_Commands\Relax.ogg"};
			ReloadingE[] = {"Normal\200_CombatShouts\ReloadingE_1.ogg", "Normal\200_CombatShouts\ReloadingE_2.ogg", "Normal\200_CombatShouts\ReloadingE_3.ogg", "Normal\200_CombatShouts\ReloadingE_4.ogg", "Normal\200_CombatShouts\ReloadingE_5.ogg", "Normal\200_CombatShouts\ReloadingE_6.ogg", "Normal\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"Normal\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"Normal\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"Normal\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"Normal\DirectionRelative3\reportBack_1.ogg", "Normal\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"Normal\DirectionRelative3\reportFront_1.ogg", "Normal\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"Normal\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"Normal\DirectionRelative3\reportLeft_1.ogg", "Normal\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"Normal\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"Normal\DirectionRelative3\reportRight_1.ogg", "Normal\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"Normal\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"Normal\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"Normal\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"Normal\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"Normal\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"Normal\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"Normal\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"Normal\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"Normal\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"Normal\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"Normal\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"Normal\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"Normal\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"Normal\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"Normal\020_Names\Reynolds.ogg"};
			right[] = {"Normal\DirectionRelative1\right_1.ogg", "Normal\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"Normal\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"Normal\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"Normal\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"Normal\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"Normal\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"Normal\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"Normal\020_Names\Ryan.ogg"};
			sabot[] = {"Normal\005_Weapons\sabot.ogg"};
			Safe[] = {"Normal\100_Commands\Safe_1.ogg", "Normal\100_Commands\Safe_2.ogg"};
			Samaras[] = {"Normal\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"Normal\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"Normal\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"Normal\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"Normal\200_CombatShouts\ScreamingE_1.ogg", "Normal\200_CombatShouts\ScreamingE_2.ogg", "Normal\200_CombatShouts\ScreamingE_3.ogg", "Normal\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"Normal\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"Normal\100_Commands\SetTheTimer.ogg"};
			seven[] = {"Normal\025_Numbers\seven.ogg"};
			seventeen[] = {"Normal\025_Numbers\seventeen.ogg"};
			seventy[] = {"Normal\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"Normal\020_Names\Siddiqi.ogg"};
			sierra[] = {"Normal\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"Normal\100_Commands\Silence.ogg"};
			Sitrep[] = {"Normal\120_Com_Ask\Sitrep.ogg"};
			six[] = {"Normal\025_Numbers\six.ogg"};
			sixteen[] = {"Normal\025_Numbers\sixteen.ogg"};
			sixty[] = {"Normal\025_Numbers\sixty.ogg"};
			Snake[] = {"Normal\020_Names\Snake.ogg"};
			south[] = {"Normal\DirectionCompass1\south_1.ogg", "Normal\DirectionCompass1\south_2.ogg"};
			southEast[] = {"Normal\DirectionCompass1\southEast_1.ogg", "Normal\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"Normal\DirectionCompass1\southWest_1.ogg", "Normal\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"Normal\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"Normal\020_Names\Stavrou.ogg"};
			StayAlert[] = {"Normal\100_Commands\StayAlert.ogg"};
			StayBack[] = {"Normal\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"Normal\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"Normal\100_Commands\StayLow.ogg"};
			Stop[] = {"Normal\100_Commands\Stop.ogg"};
			Stranger[] = {"Normal\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"Normal\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"Normal\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"Normal\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"Normal\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"Normal\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"Normal\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"Normal\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"Normal\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"Normal\130_Com_Reply\Suppressing_1.ogg", "Normal\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"Normal\200_CombatShouts\SuppressingE_1.ogg", "Normal\200_CombatShouts\SuppressingE_2.ogg", "Normal\200_CombatShouts\SuppressingE_3.ogg", "Normal\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"Normal\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"Normal\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"Normal\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"Normal\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"Normal\020_Names\Sykes.ogg"};
			TakeCover[] = {"Normal\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"Normal\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"Normal\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"Normal\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"Normal\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"Normal\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"Normal\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"Normal\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"Normal\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"Normal\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"Normal\020_Names\Tanny.ogg"};
			Target[] = {"Normal\015_Targeting\Target_1.ogg", "Normal\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"Normal\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"Normal\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"Normal\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"Normal\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"Normal\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"Normal\020_Names\Taylor.ogg"};
			ten[] = {"Normal\025_Numbers\ten.ogg"};
			Thanos[] = {"Normal\020_Names\Thanos.ogg"};
			thirteen[] = {"Normal\025_Numbers\thirteen.ogg"};
			thirty[] = {"Normal\025_Numbers\thirty.ogg"};
			three[] = {"Normal\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"Normal\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"Normal\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"Normal\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"Normal\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"Normal\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"Normal\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"Normal\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"Normal\025_Numbers\twelve.ogg"};
			twenty[] = {"Normal\025_Numbers\twenty.ogg"};
			two[] = {"Normal\025_Numbers\two.ogg"};
			UnderFireE[] = {"Normal\200_CombatShouts\UnderFireE_1.ogg", "Normal\200_CombatShouts\UnderFireE_2.ogg", "Normal\200_CombatShouts\UnderFireE_3.ogg", "Normal\200_CombatShouts\UnderFireE_4.ogg", "Normal\200_CombatShouts\UnderFireE_5.ogg", "Normal\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"Normal\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"Normal\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"Normal\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"Normal\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"Normal\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"Normal\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"Normal\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"Normal\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"Normal\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"Normal\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"Normal\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"Normal\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"Normal\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"Normal\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"Normal\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"Normal\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"Normal\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"Normal\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"Normal\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"Normal\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"Normal\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"Normal\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"Normal\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"Normal\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"Normal\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"Normal\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"Normal\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"Normal\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"Normal\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"Normal\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"Normal\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"Normal\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"Normal\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"Normal\010_Vehicles\veh_infantry_p_1.ogg", "Normal\010_Vehicles\veh_infantry_p_2.ogg", "Normal\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"Normal\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"Normal\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"Normal\010_Vehicles\veh_infantry_s_1.ogg", "Normal\010_Vehicles\veh_infantry_s_2.ogg", "Normal\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"Normal\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"Normal\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"Normal\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"Normal\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"Normal\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"Normal\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"Normal\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"Normal\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"Normal\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"Normal\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"Normal\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"Normal\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"Normal\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"Normal\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"Normal\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"Normal\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"Normal\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"Normal\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"Normal\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"Normal\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"Normal\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"Normal\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"Normal\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"Normal\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"Normal\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"Normal\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"Normal\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"Normal\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"Normal\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"Normal\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"Normal\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"Normal\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"Normal\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"Normal\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"Normal\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"Normal\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"Normal\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"Normal\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"Normal\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"Normal\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"Normal\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"Normal\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"Normal\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"Normal\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"Normal\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"Normal\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"Normal\100_Commands\VehBackward_1.ogg", "Normal\100_Commands\VehBackward_2.ogg", "Normal\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"Normal\100_Commands\VehFast_1.ogg", "Normal\100_Commands\VehFast_2.ogg", "Normal\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"Normal\100_Commands\VehForward_1.ogg", "Normal\100_Commands\VehForward_2.ogg", "Normal\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"Normal\100_Commands\VehLeft_1.ogg", "Normal\100_Commands\VehLeft_2.ogg", "Normal\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"Normal\100_Commands\VehRight_1.ogg", "Normal\100_Commands\VehRight_2.ogg", "Normal\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"Normal\100_Commands\VehSlow_1.ogg", "Normal\100_Commands\VehSlow_2.ogg", "Normal\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"Normal\100_Commands\VehStop_1.ogg", "Normal\100_Commands\VehStop_2.ogg", "Normal\100_Commands\VehStop_3.ogg"};
			victor[] = {"Normal\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"Normal\020_Names\Viper.ogg"};
			Waiting[] = {"Normal\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"Normal\020_Names\Walker.ogg"};
			Wardak[] = {"Normal\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"Normal\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"Normal\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"Normal\140_Com_Status\WeGotAManDownE_1.ogg", "Normal\140_Com_Status\WeGotAManDownE_2.ogg", "Normal\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"Normal\140_Com_Status\WeLostOneE_1.ogg", "Normal\140_Com_Status\WeLostOneE_2.ogg", "Normal\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"Normal\DirectionCompass1\west_1.ogg", "Normal\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"Normal\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"Normal\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"Normal\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"Normal\200_CombatShouts\WitnessKilledE_1.ogg", "Normal\200_CombatShouts\WitnessKilledE_2.ogg", "Normal\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"Normal\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"Normal\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"Normal\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"Normal\020_Names\Yousuf.ogg"};
			zero[] = {"Normal\025_Numbers\zero.ogg"};
			zulu[] = {"Normal\080_MoveAlphabet\zulu.ogg"};
		};
		class NormalContact: Normal
		{
			__1[] = {"NormalContact\Misc\__1.ogg"};
			__10[] = {"NormalContact\Misc\__10.ogg"};
			__11[] = {"NormalContact\Misc\__11.ogg"};
			__12[] = {"NormalContact\Misc\__12.ogg"};
			__13[] = {"NormalContact\Misc\__13.ogg"};
			__14[] = {"NormalContact\Misc\__14.ogg"};
			__15[] = {"NormalContact\Misc\__15.ogg"};
			__1_1[] = {"NormalContact\Combat\__1_1.ogg"};
			__2[] = {"NormalContact\Misc\__2.ogg"};
			__2_1[] = {"NormalContact\Misc\__2_1.ogg"};
			__3[] = {"NormalContact\Misc\__3.ogg"};
			__4[] = {"NormalContact\Misc\__4.ogg"};
			__4_CMPS[] = {"NormalContact\Misc\__4_CMPS.ogg"};
			__5[] = {"NormalContact\Misc\__5.ogg"};
			__6[] = {"NormalContact\Misc\__6.ogg"};
			__6_3[] = {"NormalContact\Misc\__6_3.ogg"};
			__6_ABS[] = {"NormalContact\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"NormalContact\Misc\__6_CMPS.ogg"};
			__7[] = {"NormalContact\Misc\__7.ogg"};
			__7_CLCK[] = {"NormalContact\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"NormalContact\Misc\__7_CMPS.ogg"};
			__8[] = {"NormalContact\Misc\__8.ogg"};
			__9[] = {"NormalContact\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"NormalContact\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"NormalContact\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"NormalContact\020_Names\Adams.ogg"};
			Advance[] = {"NormalContact\100_Commands\Advance.ogg"};
			alpha[] = {"NormalContact\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"NormalContact\020_Names\Amin.ogg"};
			AmmoCritical[] = {"NormalContact\140_Com_Status\AmmoCritical_1.ogg", "NormalContact\140_Com_Status\AmmoCritical_2.ogg", "NormalContact\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"NormalContact\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"NormalContact\020_Names\Anthis.ogg"};
			AreaClear[] = {"NormalContact\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"NormalContact\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"NormalContact\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"NormalContact\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"NormalContact\DirectionRelative2\at1_1.ogg", "NormalContact\DirectionRelative2\at1_2.ogg"};
			at10[] = {"NormalContact\DirectionRelative2\at10_1.ogg", "NormalContact\DirectionRelative2\at10_2.ogg"};
			at11[] = {"NormalContact\DirectionRelative2\at11_1.ogg", "NormalContact\DirectionRelative2\at11_2.ogg"};
			at12[] = {"NormalContact\DirectionRelative2\at12_1.ogg", "NormalContact\DirectionRelative2\at12_2.ogg"};
			at2[] = {"NormalContact\DirectionRelative2\at2_1.ogg", "NormalContact\DirectionRelative2\at2_2.ogg"};
			at3[] = {"NormalContact\DirectionRelative2\at3_1.ogg", "NormalContact\DirectionRelative2\at3_2.ogg"};
			at4[] = {"NormalContact\DirectionRelative2\at4_1.ogg", "NormalContact\DirectionRelative2\at4_2.ogg"};
			at5[] = {"NormalContact\DirectionRelative2\at5_1.ogg", "NormalContact\DirectionRelative2\at5_2.ogg"};
			at6[] = {"NormalContact\DirectionRelative2\at6_1.ogg", "NormalContact\DirectionRelative2\at6_2.ogg"};
			at7[] = {"NormalContact\DirectionRelative2\at7_1.ogg", "NormalContact\DirectionRelative2\at7_2.ogg"};
			at8[] = {"NormalContact\DirectionRelative2\at8_1.ogg", "NormalContact\DirectionRelative2\at8_2.ogg"};
			at9[] = {"NormalContact\DirectionRelative2\at9_1.ogg", "NormalContact\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"NormalContact\015_Targeting\Attack_1.ogg", "NormalContact\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"NormalContact\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"NormalContact\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"NormalContact\DirectionRelative1\back_1.ogg", "NormalContact\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"NormalContact\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"NormalContact\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"NormalContact\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"NormalContact\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"NormalContact\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"NormalContact\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"NormalContact\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"NormalContact\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"NormalContact\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"NormalContact\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"NormalContact\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"NormalContact\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"NormalContact\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"NormalContact\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"NormalContact\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"NormalContact\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"NormalContact\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"NormalContact\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"NormalContact\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"NormalContact\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"NormalContact\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"NormalContact\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"NormalContact\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"NormalContact\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"NormalContact\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"NormalContact\020_Names\Bennett.ogg"};
			blueTeam[] = {"NormalContact\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"NormalContact\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"NormalContact\150_Reporting\BombDetected_1.ogg", "NormalContact\150_Reporting\BombDetected_2.ogg", "NormalContact\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"NormalContact\005_Weapons\Bombs.ogg"};
			bravo[] = {"NormalContact\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"NormalContact\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"NormalContact\100_Commands\CancelManualFire_1.ogg", "NormalContact\100_Commands\CancelManualFire_2.ogg", "NormalContact\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"NormalContact\015_Targeting\CancelTarget_1.ogg", "NormalContact\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"NormalContact\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"NormalContact\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"NormalContact\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"NormalContact\130_Com_Reply\CannotComply_1.ogg", "NormalContact\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"NormalContact\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"NormalContact\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"NormalContact\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"NormalContact\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"NormalContact\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"NormalContact\100_Commands\CeaseFire_1.ogg", "NormalContact\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"NormalContact\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"NormalContact\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"NormalContact\200_CombatShouts\CheeringE_1.ogg", "NormalContact\200_CombatShouts\CheeringE_2.ogg", "NormalContact\200_CombatShouts\CheeringE_3.ogg", "NormalContact\200_CombatShouts\CheeringE_4.ogg", "NormalContact\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"NormalContact\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"NormalContact\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"NormalContact\200_CombatShouts\CombatGenericE_1.ogg", "NormalContact\200_CombatShouts\CombatGenericE_2.ogg", "NormalContact\200_CombatShouts\CombatGenericE_3.ogg", "NormalContact\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"NormalContact\100_Commands\CombatOpenFire_1.ogg", "NormalContact\100_Commands\CombatOpenFire_2.ogg", "NormalContact\100_Commands\CombatOpenFire_3.ogg", "NormalContact\100_Commands\CombatOpenFire_4.ogg", "NormalContact\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"NormalContact\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"NormalContact\130_Com_Reply\Confirmation1_1.ogg", "NormalContact\130_Com_Reply\Confirmation1_2.ogg", "NormalContact\130_Com_Reply\Confirmation1_3.ogg", "NormalContact\130_Com_Reply\Confirmation1_4.ogg", "NormalContact\130_Com_Reply\Confirmation1_5.ogg", "NormalContact\130_Com_Reply\Confirmation1_6.ogg", "NormalContact\130_Com_Reply\Confirmation1_7.ogg", "NormalContact\130_Com_Reply\Confirmation1_8.ogg", "NormalContact\130_Com_Reply\Confirmation1_9.ogg", "NormalContact\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"NormalContact\130_Com_Reply\Confirmation2_1.ogg", "NormalContact\130_Com_Reply\Confirmation2_2.ogg", "NormalContact\130_Com_Reply\Confirmation2_3.ogg", "NormalContact\130_Com_Reply\Confirmation2_4.ogg", "NormalContact\130_Com_Reply\Confirmation2_5.ogg", "NormalContact\130_Com_Reply\Confirmation2_6.ogg", "NormalContact\130_Com_Reply\Confirmation2_7.ogg", "NormalContact\130_Com_Reply\Confirmation2_8.ogg", "NormalContact\130_Com_Reply\Confirmation2_9.ogg", "NormalContact\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"NormalContact\150_Reporting\Contact_1.ogg", "NormalContact\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"NormalContact\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"NormalContact\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"NormalContact\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"NormalContact\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"NormalContact\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"NormalContact\020_Names\Costa.ogg"};
			CoveringE[] = {"NormalContact\200_CombatShouts\CoveringE_1.ogg", "NormalContact\200_CombatShouts\CoveringE_2.ogg", "NormalContact\200_CombatShouts\CoveringE_3.ogg", "NormalContact\200_CombatShouts\CoveringE_4.ogg", "NormalContact\200_CombatShouts\CoveringE_5.ogg", "NormalContact\200_CombatShouts\CoveringE_6.ogg", "NormalContact\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"NormalContact\200_CombatShouts\CoverMeE_1.ogg", "NormalContact\200_CombatShouts\CoverMeE_2.ogg", "NormalContact\200_CombatShouts\CoverMeE_3.ogg", "NormalContact\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"NormalContact\140_Com_Status\CriticalDamage_1.ogg", "NormalContact\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"NormalContact\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"NormalContact\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"NormalContact\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"NormalContact\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"NormalContact\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"NormalContact\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"NormalContact\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"NormalContact\100_Commands\Disengage.ogg"};
			Dismount[] = {"NormalContact\100_Commands\Dismount_1.ogg", "NormalContact\100_Commands\Dismount_2.ogg"};
			dist100[] = {"NormalContact\DistanceAbsolute1\dist100_1.ogg", "NormalContact\DistanceAbsolute1\dist100_2.ogg", "NormalContact\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"NormalContact\DistanceAbsolute1\dist1000_1.ogg", "NormalContact\DistanceAbsolute1\dist1000_2.ogg", "NormalContact\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"NormalContact\DistanceAbsolute1\dist1500_1.ogg", "NormalContact\DistanceAbsolute1\dist1500_2.ogg", "NormalContact\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"NormalContact\DistanceAbsolute1\dist200_1.ogg", "NormalContact\DistanceAbsolute1\dist200_2.ogg", "NormalContact\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"NormalContact\DistanceAbsolute1\dist2000_1.ogg", "NormalContact\DistanceAbsolute1\dist2000_2.ogg", "NormalContact\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"NormalContact\DistanceAbsolute1\dist2500_1.ogg", "NormalContact\DistanceAbsolute1\dist2500_2.ogg", "NormalContact\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"NormalContact\DistanceAbsolute1\dist300_1.ogg", "NormalContact\DistanceAbsolute1\dist300_2.ogg", "NormalContact\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"NormalContact\DistanceAbsolute1\dist400_1.ogg", "NormalContact\DistanceAbsolute1\dist400_2.ogg", "NormalContact\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"NormalContact\DistanceAbsolute1\dist500_1.ogg", "NormalContact\DistanceAbsolute1\dist500_2.ogg", "NormalContact\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"NormalContact\DistanceAbsolute1\dist600_1.ogg", "NormalContact\DistanceAbsolute1\dist600_2.ogg", "NormalContact\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"NormalContact\DistanceAbsolute1\dist700_1.ogg", "NormalContact\DistanceAbsolute1\dist700_2.ogg", "NormalContact\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"NormalContact\DistanceAbsolute1\dist75_1.ogg", "NormalContact\DistanceAbsolute1\dist75_2.ogg", "NormalContact\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"NormalContact\DistanceAbsolute1\dist800_1.ogg", "NormalContact\DistanceAbsolute1\dist800_2.ogg", "NormalContact\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"NormalContact\020_Names\Dixon.ogg"};
			dloc_base[] = {"NormalContact\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"NormalContact\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"NormalContact\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"NormalContact\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"NormalContact\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"NormalContact\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"NormalContact\100_Commands\DropYourPack.ogg"};
			east[] = {"NormalContact\DirectionCompass1\east_1.ogg", "NormalContact\DirectionCompass1\east_2.ogg"};
			echo[] = {"NormalContact\080_MoveAlphabet\echo.ogg"};
			eight[] = {"NormalContact\025_Numbers\eight.ogg"};
			eighteen[] = {"NormalContact\025_Numbers\eighteen.ogg"};
			eighty[] = {"NormalContact\025_Numbers\eighty.ogg"};
			Eject[] = {"NormalContact\100_Commands\Eject_1.ogg", "NormalContact\100_Commands\Eject_2.ogg"};
			eleven[] = {"NormalContact\025_Numbers\eleven.ogg"};
			Elias[] = {"NormalContact\020_Names\Elias.ogg"};
			EndangeredE[] = {"NormalContact\200_CombatShouts\EndangeredE_1.ogg", "NormalContact\200_CombatShouts\EndangeredE_2.ogg", "NormalContact\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"NormalContact\150_Reporting\EnemyDetected_1.ogg", "NormalContact\150_Reporting\EnemyDetected_2.ogg", "NormalContact\150_Reporting\EnemyDetected_3.ogg", "NormalContact\150_Reporting\EnemyDetected_4.ogg", "NormalContact\150_Reporting\EnemyDetected_5.ogg", "NormalContact\150_Reporting\EnemyDetected_6.ogg", "NormalContact\150_Reporting\EnemyDetected_7.ogg", "NormalContact\150_Reporting\EnemyDetected_8.ogg", "NormalContact\150_Reporting\EnemyDetected_9.ogg", "NormalContact\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"NormalContact\015_Targeting\Engage_1.ogg", "NormalContact\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"NormalContact\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"NormalContact\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"NormalContact\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"NormalContact\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"NormalContact\150_Reporting\ExplosiveDetected_1.ogg", "NormalContact\150_Reporting\ExplosiveDetected_2.ogg", "NormalContact\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"NormalContact\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"NormalContact\020_Names\Fahim.ogg"};
			FallBack[] = {"NormalContact\100_Commands\FallBack.ogg"};
			fifteen[] = {"NormalContact\025_Numbers\fifteen.ogg"};
			fifty[] = {"NormalContact\025_Numbers\fifty.ogg"};
			Fire[] = {"NormalContact\015_Targeting\Fire_1.ogg", "NormalContact\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"NormalContact\100_Commands\FireAtWill.ogg"};
			five[] = {"NormalContact\025_Numbers\five.ogg"};
			FlankLeft[] = {"NormalContact\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"NormalContact\100_Commands\FlankRight.ogg"};
			Flares[] = {"NormalContact\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"NormalContact\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"NormalContact\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"NormalContact\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"NormalContact\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"NormalContact\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"NormalContact\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"NormalContact\100_Commands\FormFile.ogg"};
			FormLine[] = {"NormalContact\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"NormalContact\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"NormalContact\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"NormalContact\100_Commands\FormVee.ogg"};
			FormWedge[] = {"NormalContact\100_Commands\FormWedge.ogg"};
			forty[] = {"NormalContact\025_Numbers\forty.ogg"};
			four[] = {"NormalContact\025_Numbers\four.ogg"};
			fourteen[] = {"NormalContact\025_Numbers\fourteen.ogg"};
			Fox[] = {"NormalContact\020_Names\Fox.ogg"};
			foxtrot[] = {"NormalContact\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"NormalContact\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"NormalContact\100_Commands\FreeToEngage.ogg"};
			front[] = {"NormalContact\DirectionRelative1\front_1.ogg", "NormalContact\DirectionRelative1\front_2.ogg"};
			Frost[] = {"NormalContact\020_Names\Frost.ogg"};
			FuelCritical[] = {"NormalContact\140_Com_Status\FuelCritical_1.ogg", "NormalContact\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"NormalContact\140_Com_Status\FuelLow_1.ogg", "NormalContact\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"NormalContact\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"NormalContact\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"NormalContact\999_FX\FXDeath_1.ogg", "NormalContact\999_FX\FXDeath_2.ogg", "NormalContact\999_FX\FXDeath_3.ogg", "NormalContact\999_FX\FXDeath_4.ogg", "NormalContact\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"NormalContact\999_FX\FXDrowning_1.ogg", "NormalContact\999_FX\FXDrowning_2.ogg", "NormalContact\999_FX\FXDrowning_3.ogg", "NormalContact\999_FX\FXDrowning_4.ogg", "NormalContact\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"NormalContact\999_FX\FXEffort_1.ogg", "NormalContact\999_FX\FXEffort_2.ogg", "NormalContact\999_FX\FXEffort_3.ogg", "NormalContact\999_FX\FXEffort_4.ogg", "NormalContact\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"NormalContact\999_FX\FXHit_1.ogg", "NormalContact\999_FX\FXHit_2.ogg", "NormalContact\999_FX\FXHit_3.ogg", "NormalContact\999_FX\FXHit_4.ogg", "NormalContact\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"NormalContact\999_FX\FXHurt_1.ogg", "NormalContact\999_FX\FXHurt_2.ogg", "NormalContact\999_FX\FXHurt_3.ogg", "NormalContact\999_FX\FXHurt_4.ogg", "NormalContact\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"NormalContact\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"NormalContact\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"NormalContact\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"NormalContact\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"NormalContact\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"NormalContact\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"NormalContact\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"NormalContact\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"NormalContact\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"NormalContact\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"NormalContact\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"NormalContact\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"NormalContact\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"NormalContact\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"NormalContact\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"NormalContact\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"NormalContact\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"NormalContact\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"NormalContact\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"NormalContact\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"NormalContact\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"NormalContact\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"NormalContact\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"NormalContact\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"NormalContact\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"NormalContact\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"NormalContact\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"NormalContact\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"NormalContact\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"NormalContact\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"NormalContact\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"NormalContact\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"NormalContact\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"NormalContact\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"NormalContact\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"NormalContact\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"NormalContact\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"NormalContact\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"NormalContact\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"NormalContact\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"NormalContact\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"NormalContact\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"NormalContact\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"NormalContact\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"NormalContact\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"NormalContact\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"NormalContact\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"NormalContact\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"NormalContact\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"NormalContact\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"NormalContact\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"NormalContact\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"NormalContact\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"NormalContact\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"NormalContact\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"NormalContact\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"NormalContact\100_Commands\GetSupport.ogg"};
			Ghost[] = {"NormalContact\020_Names\Ghost.ogg"};
			Givens[] = {"NormalContact\020_Names\Givens.ogg"};
			golf[] = {"NormalContact\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"NormalContact\100_Commands\GoProne_1.ogg", "NormalContact\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"NormalContact\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"NormalContact\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"NormalContact\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"NormalContact\035_NumbersGrid\grid_eight_1.ogg", "NormalContact\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"NormalContact\035_NumbersGrid\grid_eight_2_1.ogg", "NormalContact\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"NormalContact\035_NumbersGrid\grid_eight_3_1.ogg", "NormalContact\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"NormalContact\035_NumbersGrid\grid_five_1.ogg", "NormalContact\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"NormalContact\035_NumbersGrid\grid_five_2_1.ogg", "NormalContact\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"NormalContact\035_NumbersGrid\grid_five_3_1.ogg", "NormalContact\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"NormalContact\035_NumbersGrid\grid_four_1.ogg", "NormalContact\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"NormalContact\035_NumbersGrid\grid_four_2_1.ogg", "NormalContact\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"NormalContact\035_NumbersGrid\grid_four_3_1.ogg", "NormalContact\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"NormalContact\035_NumbersGrid\grid_move_to_eight_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"NormalContact\035_NumbersGrid\grid_move_to_five_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"NormalContact\035_NumbersGrid\grid_move_to_four_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"NormalContact\035_NumbersGrid\grid_move_to_nine_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"NormalContact\035_NumbersGrid\grid_move_to_one_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"NormalContact\035_NumbersGrid\grid_move_to_seven_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"NormalContact\035_NumbersGrid\grid_move_to_six_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"NormalContact\035_NumbersGrid\grid_move_to_three_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"NormalContact\035_NumbersGrid\grid_move_to_two_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"NormalContact\035_NumbersGrid\grid_move_to_zero_1.ogg", "NormalContact\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"NormalContact\035_NumbersGrid\grid_nine_1.ogg", "NormalContact\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"NormalContact\035_NumbersGrid\grid_nine_2_1.ogg", "NormalContact\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"NormalContact\035_NumbersGrid\grid_nine_3_1.ogg", "NormalContact\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"NormalContact\035_NumbersGrid\grid_one_1.ogg", "NormalContact\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"NormalContact\035_NumbersGrid\grid_one_2_1.ogg", "NormalContact\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"NormalContact\035_NumbersGrid\grid_one_3_1.ogg", "NormalContact\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"NormalContact\035_NumbersGrid\grid_seven_1.ogg", "NormalContact\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"NormalContact\035_NumbersGrid\grid_seven_2_1.ogg", "NormalContact\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"NormalContact\035_NumbersGrid\grid_seven_3_1.ogg", "NormalContact\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"NormalContact\035_NumbersGrid\grid_six_1.ogg", "NormalContact\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"NormalContact\035_NumbersGrid\grid_six_2_1.ogg", "NormalContact\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"NormalContact\035_NumbersGrid\grid_six_3_1.ogg", "NormalContact\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"NormalContact\035_NumbersGrid\grid_three_1.ogg", "NormalContact\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"NormalContact\035_NumbersGrid\grid_three_2_1.ogg", "NormalContact\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"NormalContact\035_NumbersGrid\grid_three_3_1.ogg", "NormalContact\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"NormalContact\035_NumbersGrid\grid_two_1.ogg", "NormalContact\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"NormalContact\035_NumbersGrid\grid_two_2_1.ogg", "NormalContact\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"NormalContact\035_NumbersGrid\grid_two_3_1.ogg", "NormalContact\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"NormalContact\035_NumbersGrid\grid_zero_1.ogg", "NormalContact\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"NormalContact\035_NumbersGrid\grid_zero_2_1.ogg", "NormalContact\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"NormalContact\035_NumbersGrid\grid_zero_3_1.ogg", "NormalContact\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"NormalContact\020_Names\Habibi.ogg"};
			Halt[] = {"NormalContact\100_Commands\Halt.ogg"};
			Hardy[] = {"NormalContact\020_Names\Hardy.ogg"};
			Hawkins[] = {"NormalContact\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"NormalContact\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"NormalContact\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"NormalContact\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"NormalContact\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"NormalContact\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"NormalContact\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"NormalContact\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"NormalContact\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"NormalContact\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"NormalContact\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"NormalContact\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"NormalContact\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"NormalContact\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"NormalContact\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"NormalContact\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"NormalContact\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"NormalContact\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"NormalContact\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"NormalContact\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"NormalContact\025_Numbers\hundred.ogg"};
			IAmReady[] = {"NormalContact\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"NormalContact\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"NormalContact\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"NormalContact\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"NormalContact\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"NormalContact\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"NormalContact\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"NormalContact\020_Names\Jackson.ogg"};
			James[] = {"NormalContact\020_Names\James.ogg"};
			Jawadi[] = {"NormalContact\020_Names\Jawadi.ogg"};
			Jester[] = {"NormalContact\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"NormalContact\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"NormalContact\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"NormalContact\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"NormalContact\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"NormalContact\020_Names\Kerry.ogg"};
			kilo[] = {"NormalContact\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"NormalContact\020_Names\Korneedler.ogg"};
			Kouris[] = {"NormalContact\020_Names\Kouris.ogg"};
			Kushan[] = {"NormalContact\020_Names\Kushan.ogg"};
			Lacey[] = {"NormalContact\020_Names\Lacey.ogg"};
			Larkin[] = {"NormalContact\020_Names\Larkin.ogg"};
			left[] = {"NormalContact\DirectionRelative1\left_1.ogg", "NormalContact\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"NormalContact\020_Names\Leventis.ogg"};
			Levine[] = {"NormalContact\020_Names\Levine.ogg"};
			LightThatFire[] = {"NormalContact\100_Commands\LightThatFire.ogg"};
			lima[] = {"NormalContact\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"NormalContact\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"NormalContact\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"NormalContact\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"NormalContact\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"NormalContact\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"NormalContact\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"NormalContact\020_Names\Lopez.ogg"};
			ManDownE[] = {"NormalContact\140_Com_Status\ManDownE_1.ogg", "NormalContact\140_Com_Status\ManDownE_2.ogg", "NormalContact\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"NormalContact\100_Commands\ManualFire_1.ogg", "NormalContact\100_Commands\ManualFire_2.ogg", "NormalContact\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"NormalContact\020_Names\Markos.ogg"};
			Martinez[] = {"NormalContact\020_Names\Martinez.ogg"};
			Masood[] = {"NormalContact\020_Names\Masood.ogg"};
			McKay[] = {"NormalContact\020_Names\McKay.ogg"};
			McKendrick[] = {"NormalContact\020_Names\McKendrick.ogg"};
			mgun[] = {"NormalContact\005_Weapons\mgun.ogg"};
			mike[] = {"NormalContact\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"NormalContact\020_Names\Miller.ogg"};
			MineDetected[] = {"NormalContact\150_Reporting\MineDetected_1.ogg", "NormalContact\150_Reporting\MineDetected_2.ogg", "NormalContact\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"NormalContact\005_Weapons\missiles.ogg"};
			move_dist100[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"NormalContact\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"NormalContact\070_MoveDirectionRelative1\moveBack_1.ogg", "NormalContact\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"NormalContact\070_MoveDirectionRelative1\moveLeft_1.ogg", "NormalContact\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"NormalContact\070_MoveDirectionRelative1\moveRight_1.ogg", "NormalContact\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"NormalContact\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"NormalContact\070_MoveDirectionRelative1\moveUp_1.ogg", "NormalContact\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"NormalContact\020_Names\Nazari.ogg"};
			Negative[] = {"NormalContact\130_Com_Reply\Negative_1.ogg", "NormalContact\130_Com_Reply\Negative_2.ogg", "NormalContact\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"NormalContact\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"NormalContact\020_Names\Nichols.ogg"};
			Nicolo[] = {"NormalContact\020_Names\Nicolo.ogg"};
			Nikas[] = {"NormalContact\020_Names\Nikas.ogg"};
			nine[] = {"NormalContact\025_Numbers\nine.ogg"};
			nineteen[] = {"NormalContact\025_Numbers\nineteen.ogg"};
			ninety[] = {"NormalContact\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"NormalContact\130_Com_Reply\NoCanDo_1.ogg", "NormalContact\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"NormalContact\DirectionCompass1\north_1.ogg", "NormalContact\DirectionCompass1\north_2.ogg"};
			northEast[] = {"NormalContact\DirectionCompass1\northEast_1.ogg", "NormalContact\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"NormalContact\020_Names\Northgate.ogg"};
			northWest[] = {"NormalContact\DirectionCompass1\northWest_1.ogg", "NormalContact\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"NormalContact\015_Targeting\NoTarget_1.ogg", "NormalContact\015_Targeting\NoTarget_2.ogg"};
			november[] = {"NormalContact\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"NormalContact\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"NormalContact\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"NormalContact\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"NormalContact\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"NormalContact\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"NormalContact\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"NormalContact\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"NormalContact\020_Names\OConnor.ogg"};
			one[] = {"NormalContact\025_Numbers\one.ogg"};
			OnTheMove[] = {"NormalContact\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"NormalContact\130_Com_Reply\OnTheWay_1.ogg", "NormalContact\130_Com_Reply\OnTheWay_2.ogg", "NormalContact\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"NormalContact\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"NormalContact\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"NormalContact\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"NormalContact\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"NormalContact\140_Com_Status\OutOfFirstAidKits_1.ogg", "NormalContact\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"NormalContact\020_Names\Panas.ogg"};
			papa[] = {"NormalContact\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"NormalContact\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"NormalContact\020_Names\Patterson.ogg"};
			Petros[] = {"NormalContact\020_Names\Petros.ogg"};
			PointersOff[] = {"NormalContact\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"NormalContact\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"NormalContact\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"NormalContact\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"NormalContact\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"NormalContact\100_Commands\RallyUp.ogg"};
			Razer[] = {"NormalContact\020_Names\Razer.ogg"};
			Ready[] = {"NormalContact\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"NormalContact\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"NormalContact\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"NormalContact\100_Commands\Rearm.ogg"};
			redTeam[] = {"NormalContact\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"NormalContact\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"NormalContact\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"NormalContact\100_Commands\Regroup.ogg"};
			Relax[] = {"NormalContact\100_Commands\Relax.ogg"};
			ReloadingE[] = {"NormalContact\200_CombatShouts\ReloadingE_1.ogg", "NormalContact\200_CombatShouts\ReloadingE_2.ogg", "NormalContact\200_CombatShouts\ReloadingE_3.ogg", "NormalContact\200_CombatShouts\ReloadingE_4.ogg", "NormalContact\200_CombatShouts\ReloadingE_5.ogg", "NormalContact\200_CombatShouts\ReloadingE_6.ogg", "NormalContact\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"NormalContact\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"NormalContact\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"NormalContact\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"NormalContact\DirectionRelative3\reportBack_1.ogg", "NormalContact\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"NormalContact\DirectionRelative3\reportFront_1.ogg", "NormalContact\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"NormalContact\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"NormalContact\DirectionRelative3\reportLeft_1.ogg", "NormalContact\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"NormalContact\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"NormalContact\DirectionRelative3\reportRight_1.ogg", "NormalContact\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"NormalContact\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"NormalContact\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"NormalContact\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"NormalContact\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"NormalContact\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"NormalContact\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"NormalContact\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"NormalContact\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"NormalContact\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"NormalContact\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"NormalContact\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"NormalContact\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"NormalContact\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"NormalContact\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"NormalContact\020_Names\Reynolds.ogg"};
			right[] = {"NormalContact\DirectionRelative1\right_1.ogg", "NormalContact\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"NormalContact\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"NormalContact\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"NormalContact\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"NormalContact\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"NormalContact\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"NormalContact\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"NormalContact\020_Names\Ryan.ogg"};
			sabot[] = {"NormalContact\005_Weapons\sabot.ogg"};
			Safe[] = {"NormalContact\100_Commands\Safe_1.ogg", "NormalContact\100_Commands\Safe_2.ogg"};
			Samaras[] = {"NormalContact\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"NormalContact\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"NormalContact\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"NormalContact\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"NormalContact\200_CombatShouts\ScreamingE_1.ogg", "NormalContact\200_CombatShouts\ScreamingE_2.ogg", "NormalContact\200_CombatShouts\ScreamingE_3.ogg", "NormalContact\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"NormalContact\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"NormalContact\100_Commands\SetTheTimer.ogg"};
			seven[] = {"NormalContact\025_Numbers\seven.ogg"};
			seventeen[] = {"NormalContact\025_Numbers\seventeen.ogg"};
			seventy[] = {"NormalContact\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"NormalContact\020_Names\Siddiqi.ogg"};
			sierra[] = {"NormalContact\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"NormalContact\100_Commands\Silence.ogg"};
			Sitrep[] = {"NormalContact\120_Com_Ask\Sitrep.ogg"};
			six[] = {"NormalContact\025_Numbers\six.ogg"};
			sixteen[] = {"NormalContact\025_Numbers\sixteen.ogg"};
			sixty[] = {"NormalContact\025_Numbers\sixty.ogg"};
			Snake[] = {"NormalContact\020_Names\Snake.ogg"};
			south[] = {"NormalContact\DirectionCompass1\south_1.ogg", "NormalContact\DirectionCompass1\south_2.ogg"};
			southEast[] = {"NormalContact\DirectionCompass1\southEast_1.ogg", "NormalContact\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"NormalContact\DirectionCompass1\southWest_1.ogg", "NormalContact\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"NormalContact\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"NormalContact\020_Names\Stavrou.ogg"};
			StayAlert[] = {"NormalContact\100_Commands\StayAlert.ogg"};
			StayBack[] = {"NormalContact\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"NormalContact\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"NormalContact\100_Commands\StayLow.ogg"};
			Stop[] = {"NormalContact\100_Commands\Stop.ogg"};
			Stranger[] = {"NormalContact\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"NormalContact\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"NormalContact\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"NormalContact\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"NormalContact\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"NormalContact\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"NormalContact\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"NormalContact\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"NormalContact\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"NormalContact\130_Com_Reply\Suppressing_1.ogg", "NormalContact\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"NormalContact\200_CombatShouts\SuppressingE_1.ogg", "NormalContact\200_CombatShouts\SuppressingE_2.ogg", "NormalContact\200_CombatShouts\SuppressingE_3.ogg", "NormalContact\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"NormalContact\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"NormalContact\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"NormalContact\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"NormalContact\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"NormalContact\020_Names\Sykes.ogg"};
			TakeCover[] = {"NormalContact\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"NormalContact\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"NormalContact\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"NormalContact\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"NormalContact\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"NormalContact\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"NormalContact\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"NormalContact\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"NormalContact\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"NormalContact\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"NormalContact\020_Names\Tanny.ogg"};
			Target[] = {"NormalContact\015_Targeting\Target_1.ogg", "NormalContact\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"NormalContact\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"NormalContact\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"NormalContact\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"NormalContact\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"NormalContact\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"NormalContact\020_Names\Taylor.ogg"};
			ten[] = {"NormalContact\025_Numbers\ten.ogg"};
			Thanos[] = {"NormalContact\020_Names\Thanos.ogg"};
			thirteen[] = {"NormalContact\025_Numbers\thirteen.ogg"};
			thirty[] = {"NormalContact\025_Numbers\thirty.ogg"};
			three[] = {"NormalContact\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"NormalContact\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"NormalContact\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"NormalContact\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"NormalContact\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"NormalContact\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"NormalContact\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"NormalContact\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"NormalContact\025_Numbers\twelve.ogg"};
			twenty[] = {"NormalContact\025_Numbers\twenty.ogg"};
			two[] = {"NormalContact\025_Numbers\two.ogg"};
			UnderFireE[] = {"NormalContact\200_CombatShouts\UnderFireE_1.ogg", "NormalContact\200_CombatShouts\UnderFireE_2.ogg", "NormalContact\200_CombatShouts\UnderFireE_3.ogg", "NormalContact\200_CombatShouts\UnderFireE_4.ogg", "NormalContact\200_CombatShouts\UnderFireE_5.ogg", "NormalContact\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"NormalContact\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"NormalContact\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"NormalContact\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"NormalContact\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"NormalContact\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"NormalContact\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"NormalContact\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"NormalContact\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"NormalContact\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"NormalContact\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"NormalContact\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"NormalContact\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"NormalContact\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"NormalContact\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"NormalContact\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"NormalContact\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"NormalContact\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"NormalContact\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"NormalContact\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"NormalContact\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"NormalContact\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"NormalContact\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"NormalContact\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"NormalContact\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"NormalContact\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"NormalContact\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"NormalContact\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"NormalContact\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"NormalContact\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"NormalContact\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"NormalContact\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"NormalContact\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"NormalContact\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"NormalContact\010_Vehicles\veh_infantry_p_1.ogg", "NormalContact\010_Vehicles\veh_infantry_p_2.ogg", "NormalContact\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"NormalContact\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"NormalContact\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"NormalContact\010_Vehicles\veh_infantry_s_1.ogg", "NormalContact\010_Vehicles\veh_infantry_s_2.ogg", "NormalContact\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"NormalContact\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"NormalContact\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"NormalContact\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"NormalContact\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"NormalContact\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"NormalContact\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"NormalContact\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"NormalContact\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"NormalContact\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"NormalContact\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"NormalContact\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"NormalContact\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"NormalContact\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"NormalContact\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"NormalContact\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"NormalContact\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"NormalContact\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"NormalContact\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"NormalContact\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"NormalContact\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"NormalContact\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"NormalContact\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"NormalContact\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"NormalContact\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"NormalContact\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"NormalContact\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"NormalContact\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"NormalContact\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"NormalContact\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"NormalContact\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"NormalContact\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"NormalContact\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"NormalContact\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"NormalContact\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"NormalContact\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"NormalContact\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"NormalContact\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"NormalContact\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"NormalContact\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"NormalContact\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"NormalContact\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"NormalContact\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"NormalContact\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"NormalContact\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"NormalContact\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"NormalContact\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"NormalContact\100_Commands\VehBackward_1.ogg", "NormalContact\100_Commands\VehBackward_2.ogg", "NormalContact\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"NormalContact\100_Commands\VehFast_1.ogg", "NormalContact\100_Commands\VehFast_2.ogg", "NormalContact\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"NormalContact\100_Commands\VehForward_1.ogg", "NormalContact\100_Commands\VehForward_2.ogg", "NormalContact\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"NormalContact\100_Commands\VehLeft_1.ogg", "NormalContact\100_Commands\VehLeft_2.ogg", "NormalContact\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"NormalContact\100_Commands\VehRight_1.ogg", "NormalContact\100_Commands\VehRight_2.ogg", "NormalContact\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"NormalContact\100_Commands\VehSlow_1.ogg", "NormalContact\100_Commands\VehSlow_2.ogg", "NormalContact\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"NormalContact\100_Commands\VehStop_1.ogg", "NormalContact\100_Commands\VehStop_2.ogg", "NormalContact\100_Commands\VehStop_3.ogg"};
			victor[] = {"NormalContact\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"NormalContact\020_Names\Viper.ogg"};
			Waiting[] = {"NormalContact\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"NormalContact\020_Names\Walker.ogg"};
			Wardak[] = {"NormalContact\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"NormalContact\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"NormalContact\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"NormalContact\140_Com_Status\WeGotAManDownE_1.ogg", "NormalContact\140_Com_Status\WeGotAManDownE_2.ogg", "NormalContact\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"NormalContact\140_Com_Status\WeLostOneE_1.ogg", "NormalContact\140_Com_Status\WeLostOneE_2.ogg", "NormalContact\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"NormalContact\DirectionCompass1\west_1.ogg", "NormalContact\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"NormalContact\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"NormalContact\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"NormalContact\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"NormalContact\200_CombatShouts\WitnessKilledE_1.ogg", "NormalContact\200_CombatShouts\WitnessKilledE_2.ogg", "NormalContact\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"NormalContact\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"NormalContact\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"NormalContact\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"NormalContact\020_Names\Yousuf.ogg"};
			zero[] = {"NormalContact\025_Numbers\zero.ogg"};
			zulu[] = {"NormalContact\080_MoveAlphabet\zulu.ogg"};
		};
		class NormalEngage: Normal
		{
			__1[] = {"NormalEngage\Misc\__1.ogg"};
			__10[] = {"NormalEngage\Misc\__10.ogg"};
			__11[] = {"NormalEngage\Misc\__11.ogg"};
			__12[] = {"NormalEngage\Misc\__12.ogg"};
			__13[] = {"NormalEngage\Misc\__13.ogg"};
			__14[] = {"NormalEngage\Misc\__14.ogg"};
			__15[] = {"NormalEngage\Misc\__15.ogg"};
			__1_1[] = {"NormalEngage\Combat\__1_1.ogg"};
			__2[] = {"NormalEngage\Misc\__2.ogg"};
			__2_1[] = {"NormalEngage\Misc\__2_1.ogg"};
			__3[] = {"NormalEngage\Misc\__3.ogg"};
			__4[] = {"NormalEngage\Misc\__4.ogg"};
			__4_CMPS[] = {"NormalEngage\Misc\__4_CMPS.ogg"};
			__5[] = {"NormalEngage\Misc\__5.ogg"};
			__6[] = {"NormalEngage\Misc\__6.ogg"};
			__6_3[] = {"NormalEngage\Misc\__6_3.ogg"};
			__6_ABS[] = {"NormalEngage\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"NormalEngage\Misc\__6_CMPS.ogg"};
			__7[] = {"NormalEngage\Misc\__7.ogg"};
			__7_CLCK[] = {"NormalEngage\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"NormalEngage\Misc\__7_CMPS.ogg"};
			__8[] = {"NormalEngage\Misc\__8.ogg"};
			__9[] = {"NormalEngage\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"NormalEngage\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"NormalEngage\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"NormalEngage\020_Names\Adams.ogg"};
			Advance[] = {"NormalEngage\100_Commands\Advance.ogg"};
			alpha[] = {"NormalEngage\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"NormalEngage\020_Names\Amin.ogg"};
			AmmoCritical[] = {"NormalEngage\140_Com_Status\AmmoCritical_1.ogg", "NormalEngage\140_Com_Status\AmmoCritical_2.ogg", "NormalEngage\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"NormalEngage\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"NormalEngage\020_Names\Anthis.ogg"};
			AreaClear[] = {"NormalEngage\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"NormalEngage\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"NormalEngage\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"NormalEngage\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"NormalEngage\DirectionRelative2\at1_1.ogg", "NormalEngage\DirectionRelative2\at1_2.ogg"};
			at10[] = {"NormalEngage\DirectionRelative2\at10_1.ogg", "NormalEngage\DirectionRelative2\at10_2.ogg"};
			at11[] = {"NormalEngage\DirectionRelative2\at11_1.ogg", "NormalEngage\DirectionRelative2\at11_2.ogg"};
			at12[] = {"NormalEngage\DirectionRelative2\at12_1.ogg", "NormalEngage\DirectionRelative2\at12_2.ogg"};
			at2[] = {"NormalEngage\DirectionRelative2\at2_1.ogg", "NormalEngage\DirectionRelative2\at2_2.ogg"};
			at3[] = {"NormalEngage\DirectionRelative2\at3_1.ogg", "NormalEngage\DirectionRelative2\at3_2.ogg"};
			at4[] = {"NormalEngage\DirectionRelative2\at4_1.ogg", "NormalEngage\DirectionRelative2\at4_2.ogg"};
			at5[] = {"NormalEngage\DirectionRelative2\at5_1.ogg", "NormalEngage\DirectionRelative2\at5_2.ogg"};
			at6[] = {"NormalEngage\DirectionRelative2\at6_1.ogg", "NormalEngage\DirectionRelative2\at6_2.ogg"};
			at7[] = {"NormalEngage\DirectionRelative2\at7_1.ogg", "NormalEngage\DirectionRelative2\at7_2.ogg"};
			at8[] = {"NormalEngage\DirectionRelative2\at8_1.ogg", "NormalEngage\DirectionRelative2\at8_2.ogg"};
			at9[] = {"NormalEngage\DirectionRelative2\at9_1.ogg", "NormalEngage\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"NormalEngage\015_Targeting\Attack_1.ogg", "NormalEngage\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"NormalEngage\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"NormalEngage\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"NormalEngage\DirectionRelative1\back_1.ogg", "NormalEngage\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"NormalEngage\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"NormalEngage\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"NormalEngage\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"NormalEngage\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"NormalEngage\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"NormalEngage\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"NormalEngage\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"NormalEngage\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"NormalEngage\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"NormalEngage\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"NormalEngage\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"NormalEngage\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"NormalEngage\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"NormalEngage\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"NormalEngage\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"NormalEngage\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"NormalEngage\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"NormalEngage\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"NormalEngage\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"NormalEngage\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"NormalEngage\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"NormalEngage\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"NormalEngage\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"NormalEngage\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"NormalEngage\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"NormalEngage\020_Names\Bennett.ogg"};
			blueTeam[] = {"NormalEngage\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"NormalEngage\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"NormalEngage\150_Reporting\BombDetected_1.ogg", "NormalEngage\150_Reporting\BombDetected_2.ogg", "NormalEngage\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"NormalEngage\005_Weapons\Bombs.ogg"};
			bravo[] = {"NormalEngage\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"NormalEngage\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"NormalEngage\100_Commands\CancelManualFire_1.ogg", "NormalEngage\100_Commands\CancelManualFire_2.ogg", "NormalEngage\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"NormalEngage\015_Targeting\CancelTarget_1.ogg", "NormalEngage\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"NormalEngage\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"NormalEngage\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"NormalEngage\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"NormalEngage\130_Com_Reply\CannotComply_1.ogg", "NormalEngage\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"NormalEngage\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"NormalEngage\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"NormalEngage\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"NormalEngage\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"NormalEngage\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"NormalEngage\100_Commands\CeaseFire_1.ogg", "NormalEngage\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"NormalEngage\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"NormalEngage\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"NormalEngage\200_CombatShouts\CheeringE_1.ogg", "NormalEngage\200_CombatShouts\CheeringE_2.ogg", "NormalEngage\200_CombatShouts\CheeringE_3.ogg", "NormalEngage\200_CombatShouts\CheeringE_4.ogg", "NormalEngage\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"NormalEngage\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"NormalEngage\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"NormalEngage\200_CombatShouts\CombatGenericE_1.ogg", "NormalEngage\200_CombatShouts\CombatGenericE_2.ogg", "NormalEngage\200_CombatShouts\CombatGenericE_3.ogg", "NormalEngage\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"NormalEngage\100_Commands\CombatOpenFire_1.ogg", "NormalEngage\100_Commands\CombatOpenFire_2.ogg", "NormalEngage\100_Commands\CombatOpenFire_3.ogg", "NormalEngage\100_Commands\CombatOpenFire_4.ogg", "NormalEngage\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"NormalEngage\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"NormalEngage\130_Com_Reply\Confirmation1_1.ogg", "NormalEngage\130_Com_Reply\Confirmation1_2.ogg", "NormalEngage\130_Com_Reply\Confirmation1_3.ogg", "NormalEngage\130_Com_Reply\Confirmation1_4.ogg", "NormalEngage\130_Com_Reply\Confirmation1_5.ogg", "NormalEngage\130_Com_Reply\Confirmation1_6.ogg", "NormalEngage\130_Com_Reply\Confirmation1_7.ogg", "NormalEngage\130_Com_Reply\Confirmation1_8.ogg", "NormalEngage\130_Com_Reply\Confirmation1_9.ogg", "NormalEngage\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"NormalEngage\130_Com_Reply\Confirmation2_1.ogg", "NormalEngage\130_Com_Reply\Confirmation2_2.ogg", "NormalEngage\130_Com_Reply\Confirmation2_3.ogg", "NormalEngage\130_Com_Reply\Confirmation2_4.ogg", "NormalEngage\130_Com_Reply\Confirmation2_5.ogg", "NormalEngage\130_Com_Reply\Confirmation2_6.ogg", "NormalEngage\130_Com_Reply\Confirmation2_7.ogg", "NormalEngage\130_Com_Reply\Confirmation2_8.ogg", "NormalEngage\130_Com_Reply\Confirmation2_9.ogg", "NormalEngage\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"NormalEngage\150_Reporting\Contact_1.ogg", "NormalEngage\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"NormalEngage\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"NormalEngage\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"NormalEngage\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"NormalEngage\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"NormalEngage\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"NormalEngage\020_Names\Costa.ogg"};
			CoveringE[] = {"NormalEngage\200_CombatShouts\CoveringE_1.ogg", "NormalEngage\200_CombatShouts\CoveringE_2.ogg", "NormalEngage\200_CombatShouts\CoveringE_3.ogg", "NormalEngage\200_CombatShouts\CoveringE_4.ogg", "NormalEngage\200_CombatShouts\CoveringE_5.ogg", "NormalEngage\200_CombatShouts\CoveringE_6.ogg", "NormalEngage\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"NormalEngage\200_CombatShouts\CoverMeE_1.ogg", "NormalEngage\200_CombatShouts\CoverMeE_2.ogg", "NormalEngage\200_CombatShouts\CoverMeE_3.ogg", "NormalEngage\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"NormalEngage\140_Com_Status\CriticalDamage_1.ogg", "NormalEngage\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"NormalEngage\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"NormalEngage\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"NormalEngage\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"NormalEngage\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"NormalEngage\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"NormalEngage\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"NormalEngage\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"NormalEngage\100_Commands\Disengage.ogg"};
			Dismount[] = {"NormalEngage\100_Commands\Dismount_1.ogg", "NormalEngage\100_Commands\Dismount_2.ogg"};
			dist100[] = {"NormalEngage\DistanceAbsolute1\dist100_1.ogg", "NormalEngage\DistanceAbsolute1\dist100_2.ogg", "NormalEngage\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"NormalEngage\DistanceAbsolute1\dist1000_1.ogg", "NormalEngage\DistanceAbsolute1\dist1000_2.ogg", "NormalEngage\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"NormalEngage\DistanceAbsolute1\dist1500_1.ogg", "NormalEngage\DistanceAbsolute1\dist1500_2.ogg", "NormalEngage\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"NormalEngage\DistanceAbsolute1\dist200_1.ogg", "NormalEngage\DistanceAbsolute1\dist200_2.ogg", "NormalEngage\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"NormalEngage\DistanceAbsolute1\dist2000_1.ogg", "NormalEngage\DistanceAbsolute1\dist2000_2.ogg", "NormalEngage\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"NormalEngage\DistanceAbsolute1\dist2500_1.ogg", "NormalEngage\DistanceAbsolute1\dist2500_2.ogg", "NormalEngage\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"NormalEngage\DistanceAbsolute1\dist300_1.ogg", "NormalEngage\DistanceAbsolute1\dist300_2.ogg", "NormalEngage\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"NormalEngage\DistanceAbsolute1\dist400_1.ogg", "NormalEngage\DistanceAbsolute1\dist400_2.ogg", "NormalEngage\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"NormalEngage\DistanceAbsolute1\dist500_1.ogg", "NormalEngage\DistanceAbsolute1\dist500_2.ogg", "NormalEngage\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"NormalEngage\DistanceAbsolute1\dist600_1.ogg", "NormalEngage\DistanceAbsolute1\dist600_2.ogg", "NormalEngage\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"NormalEngage\DistanceAbsolute1\dist700_1.ogg", "NormalEngage\DistanceAbsolute1\dist700_2.ogg", "NormalEngage\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"NormalEngage\DistanceAbsolute1\dist75_1.ogg", "NormalEngage\DistanceAbsolute1\dist75_2.ogg", "NormalEngage\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"NormalEngage\DistanceAbsolute1\dist800_1.ogg", "NormalEngage\DistanceAbsolute1\dist800_2.ogg", "NormalEngage\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"NormalEngage\020_Names\Dixon.ogg"};
			dloc_base[] = {"NormalEngage\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"NormalEngage\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"NormalEngage\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"NormalEngage\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"NormalEngage\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"NormalEngage\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"NormalEngage\100_Commands\DropYourPack.ogg"};
			east[] = {"NormalEngage\DirectionCompass1\east_1.ogg", "NormalEngage\DirectionCompass1\east_2.ogg"};
			echo[] = {"NormalEngage\080_MoveAlphabet\echo.ogg"};
			eight[] = {"NormalEngage\025_Numbers\eight.ogg"};
			eighteen[] = {"NormalEngage\025_Numbers\eighteen.ogg"};
			eighty[] = {"NormalEngage\025_Numbers\eighty.ogg"};
			Eject[] = {"NormalEngage\100_Commands\Eject_1.ogg", "NormalEngage\100_Commands\Eject_2.ogg"};
			eleven[] = {"NormalEngage\025_Numbers\eleven.ogg"};
			Elias[] = {"NormalEngage\020_Names\Elias.ogg"};
			EndangeredE[] = {"NormalEngage\200_CombatShouts\EndangeredE_1.ogg", "NormalEngage\200_CombatShouts\EndangeredE_2.ogg", "NormalEngage\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"NormalEngage\150_Reporting\EnemyDetected_1.ogg", "NormalEngage\150_Reporting\EnemyDetected_2.ogg", "NormalEngage\150_Reporting\EnemyDetected_3.ogg", "NormalEngage\150_Reporting\EnemyDetected_4.ogg", "NormalEngage\150_Reporting\EnemyDetected_5.ogg", "NormalEngage\150_Reporting\EnemyDetected_6.ogg", "NormalEngage\150_Reporting\EnemyDetected_7.ogg", "NormalEngage\150_Reporting\EnemyDetected_8.ogg", "NormalEngage\150_Reporting\EnemyDetected_9.ogg", "NormalEngage\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"NormalEngage\015_Targeting\Engage_1.ogg", "NormalEngage\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"NormalEngage\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"NormalEngage\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"NormalEngage\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"NormalEngage\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"NormalEngage\150_Reporting\ExplosiveDetected_1.ogg", "NormalEngage\150_Reporting\ExplosiveDetected_2.ogg", "NormalEngage\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"NormalEngage\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"NormalEngage\020_Names\Fahim.ogg"};
			FallBack[] = {"NormalEngage\100_Commands\FallBack.ogg"};
			fifteen[] = {"NormalEngage\025_Numbers\fifteen.ogg"};
			fifty[] = {"NormalEngage\025_Numbers\fifty.ogg"};
			Fire[] = {"NormalEngage\015_Targeting\Fire_1.ogg", "NormalEngage\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"NormalEngage\100_Commands\FireAtWill.ogg"};
			five[] = {"NormalEngage\025_Numbers\five.ogg"};
			FlankLeft[] = {"NormalEngage\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"NormalEngage\100_Commands\FlankRight.ogg"};
			Flares[] = {"NormalEngage\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"NormalEngage\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"NormalEngage\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"NormalEngage\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"NormalEngage\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"NormalEngage\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"NormalEngage\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"NormalEngage\100_Commands\FormFile.ogg"};
			FormLine[] = {"NormalEngage\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"NormalEngage\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"NormalEngage\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"NormalEngage\100_Commands\FormVee.ogg"};
			FormWedge[] = {"NormalEngage\100_Commands\FormWedge.ogg"};
			forty[] = {"NormalEngage\025_Numbers\forty.ogg"};
			four[] = {"NormalEngage\025_Numbers\four.ogg"};
			fourteen[] = {"NormalEngage\025_Numbers\fourteen.ogg"};
			Fox[] = {"NormalEngage\020_Names\Fox.ogg"};
			foxtrot[] = {"NormalEngage\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"NormalEngage\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"NormalEngage\100_Commands\FreeToEngage.ogg"};
			front[] = {"NormalEngage\DirectionRelative1\front_1.ogg", "NormalEngage\DirectionRelative1\front_2.ogg"};
			Frost[] = {"NormalEngage\020_Names\Frost.ogg"};
			FuelCritical[] = {"NormalEngage\140_Com_Status\FuelCritical_1.ogg", "NormalEngage\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"NormalEngage\140_Com_Status\FuelLow_1.ogg", "NormalEngage\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"NormalEngage\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"NormalEngage\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"NormalEngage\999_FX\FXDeath_1.ogg", "NormalEngage\999_FX\FXDeath_2.ogg", "NormalEngage\999_FX\FXDeath_3.ogg", "NormalEngage\999_FX\FXDeath_4.ogg", "NormalEngage\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"NormalEngage\999_FX\FXDrowning_1.ogg", "NormalEngage\999_FX\FXDrowning_2.ogg", "NormalEngage\999_FX\FXDrowning_3.ogg", "NormalEngage\999_FX\FXDrowning_4.ogg", "NormalEngage\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"NormalEngage\999_FX\FXEffort_1.ogg", "NormalEngage\999_FX\FXEffort_2.ogg", "NormalEngage\999_FX\FXEffort_3.ogg", "NormalEngage\999_FX\FXEffort_4.ogg", "NormalEngage\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"NormalEngage\999_FX\FXHit_1.ogg", "NormalEngage\999_FX\FXHit_2.ogg", "NormalEngage\999_FX\FXHit_3.ogg", "NormalEngage\999_FX\FXHit_4.ogg", "NormalEngage\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"NormalEngage\999_FX\FXHurt_1.ogg", "NormalEngage\999_FX\FXHurt_2.ogg", "NormalEngage\999_FX\FXHurt_3.ogg", "NormalEngage\999_FX\FXHurt_4.ogg", "NormalEngage\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"NormalEngage\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"NormalEngage\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"NormalEngage\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"NormalEngage\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"NormalEngage\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"NormalEngage\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"NormalEngage\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"NormalEngage\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"NormalEngage\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"NormalEngage\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"NormalEngage\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"NormalEngage\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"NormalEngage\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"NormalEngage\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"NormalEngage\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"NormalEngage\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"NormalEngage\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"NormalEngage\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"NormalEngage\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"NormalEngage\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"NormalEngage\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"NormalEngage\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"NormalEngage\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"NormalEngage\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"NormalEngage\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"NormalEngage\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"NormalEngage\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"NormalEngage\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"NormalEngage\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"NormalEngage\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"NormalEngage\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"NormalEngage\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"NormalEngage\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"NormalEngage\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"NormalEngage\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"NormalEngage\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"NormalEngage\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"NormalEngage\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"NormalEngage\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"NormalEngage\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"NormalEngage\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"NormalEngage\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"NormalEngage\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"NormalEngage\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"NormalEngage\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"NormalEngage\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"NormalEngage\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"NormalEngage\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"NormalEngage\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"NormalEngage\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"NormalEngage\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"NormalEngage\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"NormalEngage\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"NormalEngage\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"NormalEngage\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"NormalEngage\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"NormalEngage\100_Commands\GetSupport.ogg"};
			Ghost[] = {"NormalEngage\020_Names\Ghost.ogg"};
			Givens[] = {"NormalEngage\020_Names\Givens.ogg"};
			golf[] = {"NormalEngage\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"NormalEngage\100_Commands\GoProne_1.ogg", "NormalEngage\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"NormalEngage\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"NormalEngage\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"NormalEngage\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"NormalEngage\035_NumbersGrid\grid_eight_1.ogg", "NormalEngage\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"NormalEngage\035_NumbersGrid\grid_eight_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"NormalEngage\035_NumbersGrid\grid_eight_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"NormalEngage\035_NumbersGrid\grid_five_1.ogg", "NormalEngage\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"NormalEngage\035_NumbersGrid\grid_five_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"NormalEngage\035_NumbersGrid\grid_five_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"NormalEngage\035_NumbersGrid\grid_four_1.ogg", "NormalEngage\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"NormalEngage\035_NumbersGrid\grid_four_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"NormalEngage\035_NumbersGrid\grid_four_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"NormalEngage\035_NumbersGrid\grid_move_to_eight_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"NormalEngage\035_NumbersGrid\grid_move_to_five_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"NormalEngage\035_NumbersGrid\grid_move_to_four_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"NormalEngage\035_NumbersGrid\grid_move_to_nine_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"NormalEngage\035_NumbersGrid\grid_move_to_one_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"NormalEngage\035_NumbersGrid\grid_move_to_seven_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"NormalEngage\035_NumbersGrid\grid_move_to_six_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"NormalEngage\035_NumbersGrid\grid_move_to_three_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"NormalEngage\035_NumbersGrid\grid_move_to_two_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"NormalEngage\035_NumbersGrid\grid_move_to_zero_1.ogg", "NormalEngage\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"NormalEngage\035_NumbersGrid\grid_nine_1.ogg", "NormalEngage\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"NormalEngage\035_NumbersGrid\grid_nine_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"NormalEngage\035_NumbersGrid\grid_nine_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"NormalEngage\035_NumbersGrid\grid_one_1.ogg", "NormalEngage\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"NormalEngage\035_NumbersGrid\grid_one_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"NormalEngage\035_NumbersGrid\grid_one_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"NormalEngage\035_NumbersGrid\grid_seven_1.ogg", "NormalEngage\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"NormalEngage\035_NumbersGrid\grid_seven_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"NormalEngage\035_NumbersGrid\grid_seven_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"NormalEngage\035_NumbersGrid\grid_six_1.ogg", "NormalEngage\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"NormalEngage\035_NumbersGrid\grid_six_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"NormalEngage\035_NumbersGrid\grid_six_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"NormalEngage\035_NumbersGrid\grid_three_1.ogg", "NormalEngage\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"NormalEngage\035_NumbersGrid\grid_three_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"NormalEngage\035_NumbersGrid\grid_three_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"NormalEngage\035_NumbersGrid\grid_two_1.ogg", "NormalEngage\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"NormalEngage\035_NumbersGrid\grid_two_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"NormalEngage\035_NumbersGrid\grid_two_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"NormalEngage\035_NumbersGrid\grid_zero_1.ogg", "NormalEngage\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"NormalEngage\035_NumbersGrid\grid_zero_2_1.ogg", "NormalEngage\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"NormalEngage\035_NumbersGrid\grid_zero_3_1.ogg", "NormalEngage\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"NormalEngage\020_Names\Habibi.ogg"};
			Halt[] = {"NormalEngage\100_Commands\Halt.ogg"};
			Hardy[] = {"NormalEngage\020_Names\Hardy.ogg"};
			Hawkins[] = {"NormalEngage\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"NormalEngage\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"NormalEngage\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"NormalEngage\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"NormalEngage\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"NormalEngage\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"NormalEngage\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"NormalEngage\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"NormalEngage\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"NormalEngage\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"NormalEngage\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"NormalEngage\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"NormalEngage\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"NormalEngage\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"NormalEngage\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"NormalEngage\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"NormalEngage\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"NormalEngage\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"NormalEngage\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"NormalEngage\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"NormalEngage\025_Numbers\hundred.ogg"};
			IAmReady[] = {"NormalEngage\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"NormalEngage\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"NormalEngage\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"NormalEngage\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"NormalEngage\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"NormalEngage\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"NormalEngage\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"NormalEngage\020_Names\Jackson.ogg"};
			James[] = {"NormalEngage\020_Names\James.ogg"};
			Jawadi[] = {"NormalEngage\020_Names\Jawadi.ogg"};
			Jester[] = {"NormalEngage\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"NormalEngage\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"NormalEngage\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"NormalEngage\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"NormalEngage\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"NormalEngage\020_Names\Kerry.ogg"};
			kilo[] = {"NormalEngage\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"NormalEngage\020_Names\Korneedler.ogg"};
			Kouris[] = {"NormalEngage\020_Names\Kouris.ogg"};
			Kushan[] = {"NormalEngage\020_Names\Kushan.ogg"};
			Lacey[] = {"NormalEngage\020_Names\Lacey.ogg"};
			Larkin[] = {"NormalEngage\020_Names\Larkin.ogg"};
			left[] = {"NormalEngage\DirectionRelative1\left_1.ogg", "NormalEngage\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"NormalEngage\020_Names\Leventis.ogg"};
			Levine[] = {"NormalEngage\020_Names\Levine.ogg"};
			LightThatFire[] = {"NormalEngage\100_Commands\LightThatFire.ogg"};
			lima[] = {"NormalEngage\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"NormalEngage\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"NormalEngage\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"NormalEngage\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"NormalEngage\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"NormalEngage\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"NormalEngage\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"NormalEngage\020_Names\Lopez.ogg"};
			ManDownE[] = {"NormalEngage\140_Com_Status\ManDownE_1.ogg", "NormalEngage\140_Com_Status\ManDownE_2.ogg", "NormalEngage\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"NormalEngage\100_Commands\ManualFire_1.ogg", "NormalEngage\100_Commands\ManualFire_2.ogg", "NormalEngage\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"NormalEngage\020_Names\Markos.ogg"};
			Martinez[] = {"NormalEngage\020_Names\Martinez.ogg"};
			Masood[] = {"NormalEngage\020_Names\Masood.ogg"};
			McKay[] = {"NormalEngage\020_Names\McKay.ogg"};
			McKendrick[] = {"NormalEngage\020_Names\McKendrick.ogg"};
			mgun[] = {"NormalEngage\005_Weapons\mgun.ogg"};
			mike[] = {"NormalEngage\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"NormalEngage\020_Names\Miller.ogg"};
			MineDetected[] = {"NormalEngage\150_Reporting\MineDetected_1.ogg", "NormalEngage\150_Reporting\MineDetected_2.ogg", "NormalEngage\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"NormalEngage\005_Weapons\missiles.ogg"};
			move_dist100[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"NormalEngage\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"NormalEngage\070_MoveDirectionRelative1\moveBack_1.ogg", "NormalEngage\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"NormalEngage\070_MoveDirectionRelative1\moveLeft_1.ogg", "NormalEngage\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"NormalEngage\070_MoveDirectionRelative1\moveRight_1.ogg", "NormalEngage\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"NormalEngage\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"NormalEngage\070_MoveDirectionRelative1\moveUp_1.ogg", "NormalEngage\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"NormalEngage\020_Names\Nazari.ogg"};
			Negative[] = {"NormalEngage\130_Com_Reply\Negative_1.ogg", "NormalEngage\130_Com_Reply\Negative_2.ogg", "NormalEngage\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"NormalEngage\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"NormalEngage\020_Names\Nichols.ogg"};
			Nicolo[] = {"NormalEngage\020_Names\Nicolo.ogg"};
			Nikas[] = {"NormalEngage\020_Names\Nikas.ogg"};
			nine[] = {"NormalEngage\025_Numbers\nine.ogg"};
			nineteen[] = {"NormalEngage\025_Numbers\nineteen.ogg"};
			ninety[] = {"NormalEngage\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"NormalEngage\130_Com_Reply\NoCanDo_1.ogg", "NormalEngage\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"NormalEngage\DirectionCompass1\north_1.ogg", "NormalEngage\DirectionCompass1\north_2.ogg"};
			northEast[] = {"NormalEngage\DirectionCompass1\northEast_1.ogg", "NormalEngage\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"NormalEngage\020_Names\Northgate.ogg"};
			northWest[] = {"NormalEngage\DirectionCompass1\northWest_1.ogg", "NormalEngage\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"NormalEngage\015_Targeting\NoTarget_1.ogg", "NormalEngage\015_Targeting\NoTarget_2.ogg"};
			november[] = {"NormalEngage\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"NormalEngage\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"NormalEngage\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"NormalEngage\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"NormalEngage\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"NormalEngage\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"NormalEngage\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"NormalEngage\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"NormalEngage\020_Names\OConnor.ogg"};
			one[] = {"NormalEngage\025_Numbers\one.ogg"};
			OnTheMove[] = {"NormalEngage\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"NormalEngage\130_Com_Reply\OnTheWay_1.ogg", "NormalEngage\130_Com_Reply\OnTheWay_2.ogg", "NormalEngage\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"NormalEngage\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"NormalEngage\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"NormalEngage\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"NormalEngage\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"NormalEngage\140_Com_Status\OutOfFirstAidKits_1.ogg", "NormalEngage\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"NormalEngage\020_Names\Panas.ogg"};
			papa[] = {"NormalEngage\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"NormalEngage\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"NormalEngage\020_Names\Patterson.ogg"};
			Petros[] = {"NormalEngage\020_Names\Petros.ogg"};
			PointersOff[] = {"NormalEngage\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"NormalEngage\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"NormalEngage\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"NormalEngage\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"NormalEngage\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"NormalEngage\100_Commands\RallyUp.ogg"};
			Razer[] = {"NormalEngage\020_Names\Razer.ogg"};
			Ready[] = {"NormalEngage\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"NormalEngage\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"NormalEngage\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"NormalEngage\100_Commands\Rearm.ogg"};
			redTeam[] = {"NormalEngage\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"NormalEngage\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"NormalEngage\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"NormalEngage\100_Commands\Regroup.ogg"};
			Relax[] = {"NormalEngage\100_Commands\Relax.ogg"};
			ReloadingE[] = {"NormalEngage\200_CombatShouts\ReloadingE_1.ogg", "NormalEngage\200_CombatShouts\ReloadingE_2.ogg", "NormalEngage\200_CombatShouts\ReloadingE_3.ogg", "NormalEngage\200_CombatShouts\ReloadingE_4.ogg", "NormalEngage\200_CombatShouts\ReloadingE_5.ogg", "NormalEngage\200_CombatShouts\ReloadingE_6.ogg", "NormalEngage\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"NormalEngage\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"NormalEngage\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"NormalEngage\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"NormalEngage\DirectionRelative3\reportBack_1.ogg", "NormalEngage\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"NormalEngage\DirectionRelative3\reportFront_1.ogg", "NormalEngage\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"NormalEngage\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"NormalEngage\DirectionRelative3\reportLeft_1.ogg", "NormalEngage\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"NormalEngage\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"NormalEngage\DirectionRelative3\reportRight_1.ogg", "NormalEngage\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"NormalEngage\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"NormalEngage\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"NormalEngage\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"NormalEngage\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"NormalEngage\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"NormalEngage\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"NormalEngage\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"NormalEngage\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"NormalEngage\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"NormalEngage\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"NormalEngage\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"NormalEngage\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"NormalEngage\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"NormalEngage\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"NormalEngage\020_Names\Reynolds.ogg"};
			right[] = {"NormalEngage\DirectionRelative1\right_1.ogg", "NormalEngage\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"NormalEngage\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"NormalEngage\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"NormalEngage\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"NormalEngage\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"NormalEngage\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"NormalEngage\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"NormalEngage\020_Names\Ryan.ogg"};
			sabot[] = {"NormalEngage\005_Weapons\sabot.ogg"};
			Safe[] = {"NormalEngage\100_Commands\Safe_1.ogg", "NormalEngage\100_Commands\Safe_2.ogg"};
			Samaras[] = {"NormalEngage\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"NormalEngage\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"NormalEngage\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"NormalEngage\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"NormalEngage\200_CombatShouts\ScreamingE_1.ogg", "NormalEngage\200_CombatShouts\ScreamingE_2.ogg", "NormalEngage\200_CombatShouts\ScreamingE_3.ogg", "NormalEngage\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"NormalEngage\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"NormalEngage\100_Commands\SetTheTimer.ogg"};
			seven[] = {"NormalEngage\025_Numbers\seven.ogg"};
			seventeen[] = {"NormalEngage\025_Numbers\seventeen.ogg"};
			seventy[] = {"NormalEngage\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"NormalEngage\020_Names\Siddiqi.ogg"};
			sierra[] = {"NormalEngage\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"NormalEngage\100_Commands\Silence.ogg"};
			Sitrep[] = {"NormalEngage\120_Com_Ask\Sitrep.ogg"};
			six[] = {"NormalEngage\025_Numbers\six.ogg"};
			sixteen[] = {"NormalEngage\025_Numbers\sixteen.ogg"};
			sixty[] = {"NormalEngage\025_Numbers\sixty.ogg"};
			Snake[] = {"NormalEngage\020_Names\Snake.ogg"};
			south[] = {"NormalEngage\DirectionCompass1\south_1.ogg", "NormalEngage\DirectionCompass1\south_2.ogg"};
			southEast[] = {"NormalEngage\DirectionCompass1\southEast_1.ogg", "NormalEngage\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"NormalEngage\DirectionCompass1\southWest_1.ogg", "NormalEngage\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"NormalEngage\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"NormalEngage\020_Names\Stavrou.ogg"};
			StayAlert[] = {"NormalEngage\100_Commands\StayAlert.ogg"};
			StayBack[] = {"NormalEngage\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"NormalEngage\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"NormalEngage\100_Commands\StayLow.ogg"};
			Stop[] = {"NormalEngage\100_Commands\Stop.ogg"};
			Stranger[] = {"NormalEngage\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"NormalEngage\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"NormalEngage\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"NormalEngage\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"NormalEngage\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"NormalEngage\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"NormalEngage\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"NormalEngage\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"NormalEngage\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"NormalEngage\130_Com_Reply\Suppressing_1.ogg", "NormalEngage\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"NormalEngage\200_CombatShouts\SuppressingE_1.ogg", "NormalEngage\200_CombatShouts\SuppressingE_2.ogg", "NormalEngage\200_CombatShouts\SuppressingE_3.ogg", "NormalEngage\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"NormalEngage\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"NormalEngage\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"NormalEngage\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"NormalEngage\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"NormalEngage\020_Names\Sykes.ogg"};
			TakeCover[] = {"NormalEngage\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"NormalEngage\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"NormalEngage\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"NormalEngage\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"NormalEngage\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"NormalEngage\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"NormalEngage\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"NormalEngage\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"NormalEngage\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"NormalEngage\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"NormalEngage\020_Names\Tanny.ogg"};
			Target[] = {"NormalEngage\015_Targeting\Target_1.ogg", "NormalEngage\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"NormalEngage\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"NormalEngage\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"NormalEngage\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"NormalEngage\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"NormalEngage\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"NormalEngage\020_Names\Taylor.ogg"};
			ten[] = {"NormalEngage\025_Numbers\ten.ogg"};
			Thanos[] = {"NormalEngage\020_Names\Thanos.ogg"};
			thirteen[] = {"NormalEngage\025_Numbers\thirteen.ogg"};
			thirty[] = {"NormalEngage\025_Numbers\thirty.ogg"};
			three[] = {"NormalEngage\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"NormalEngage\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"NormalEngage\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"NormalEngage\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"NormalEngage\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"NormalEngage\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"NormalEngage\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"NormalEngage\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"NormalEngage\025_Numbers\twelve.ogg"};
			twenty[] = {"NormalEngage\025_Numbers\twenty.ogg"};
			two[] = {"NormalEngage\025_Numbers\two.ogg"};
			UnderFireE[] = {"NormalEngage\200_CombatShouts\UnderFireE_1.ogg", "NormalEngage\200_CombatShouts\UnderFireE_2.ogg", "NormalEngage\200_CombatShouts\UnderFireE_3.ogg", "NormalEngage\200_CombatShouts\UnderFireE_4.ogg", "NormalEngage\200_CombatShouts\UnderFireE_5.ogg", "NormalEngage\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"NormalEngage\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"NormalEngage\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"NormalEngage\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"NormalEngage\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"NormalEngage\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"NormalEngage\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"NormalEngage\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"NormalEngage\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"NormalEngage\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"NormalEngage\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"NormalEngage\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"NormalEngage\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"NormalEngage\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"NormalEngage\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"NormalEngage\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"NormalEngage\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"NormalEngage\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"NormalEngage\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"NormalEngage\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"NormalEngage\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"NormalEngage\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"NormalEngage\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"NormalEngage\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"NormalEngage\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"NormalEngage\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"NormalEngage\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"NormalEngage\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"NormalEngage\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"NormalEngage\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"NormalEngage\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"NormalEngage\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"NormalEngage\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"NormalEngage\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"NormalEngage\010_Vehicles\veh_infantry_p_1.ogg", "NormalEngage\010_Vehicles\veh_infantry_p_2.ogg", "NormalEngage\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"NormalEngage\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"NormalEngage\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"NormalEngage\010_Vehicles\veh_infantry_s_1.ogg", "NormalEngage\010_Vehicles\veh_infantry_s_2.ogg", "NormalEngage\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"NormalEngage\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"NormalEngage\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"NormalEngage\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"NormalEngage\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"NormalEngage\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"NormalEngage\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"NormalEngage\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"NormalEngage\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"NormalEngage\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"NormalEngage\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"NormalEngage\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"NormalEngage\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"NormalEngage\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"NormalEngage\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"NormalEngage\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"NormalEngage\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"NormalEngage\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"NormalEngage\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"NormalEngage\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"NormalEngage\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"NormalEngage\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"NormalEngage\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"NormalEngage\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"NormalEngage\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"NormalEngage\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"NormalEngage\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"NormalEngage\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"NormalEngage\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"NormalEngage\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"NormalEngage\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"NormalEngage\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"NormalEngage\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"NormalEngage\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"NormalEngage\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"NormalEngage\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"NormalEngage\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"NormalEngage\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"NormalEngage\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"NormalEngage\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"NormalEngage\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"NormalEngage\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"NormalEngage\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"NormalEngage\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"NormalEngage\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"NormalEngage\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"NormalEngage\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"NormalEngage\100_Commands\VehBackward_1.ogg", "NormalEngage\100_Commands\VehBackward_2.ogg", "NormalEngage\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"NormalEngage\100_Commands\VehFast_1.ogg", "NormalEngage\100_Commands\VehFast_2.ogg", "NormalEngage\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"NormalEngage\100_Commands\VehForward_1.ogg", "NormalEngage\100_Commands\VehForward_2.ogg", "NormalEngage\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"NormalEngage\100_Commands\VehLeft_1.ogg", "NormalEngage\100_Commands\VehLeft_2.ogg", "NormalEngage\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"NormalEngage\100_Commands\VehRight_1.ogg", "NormalEngage\100_Commands\VehRight_2.ogg", "NormalEngage\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"NormalEngage\100_Commands\VehSlow_1.ogg", "NormalEngage\100_Commands\VehSlow_2.ogg", "NormalEngage\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"NormalEngage\100_Commands\VehStop_1.ogg", "NormalEngage\100_Commands\VehStop_2.ogg", "NormalEngage\100_Commands\VehStop_3.ogg"};
			victor[] = {"NormalEngage\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"NormalEngage\020_Names\Viper.ogg"};
			Waiting[] = {"NormalEngage\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"NormalEngage\020_Names\Walker.ogg"};
			Wardak[] = {"NormalEngage\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"NormalEngage\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"NormalEngage\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"NormalEngage\140_Com_Status\WeGotAManDownE_1.ogg", "NormalEngage\140_Com_Status\WeGotAManDownE_2.ogg", "NormalEngage\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"NormalEngage\140_Com_Status\WeLostOneE_1.ogg", "NormalEngage\140_Com_Status\WeLostOneE_2.ogg", "NormalEngage\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"NormalEngage\DirectionCompass1\west_1.ogg", "NormalEngage\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"NormalEngage\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"NormalEngage\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"NormalEngage\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"NormalEngage\200_CombatShouts\WitnessKilledE_1.ogg", "NormalEngage\200_CombatShouts\WitnessKilledE_2.ogg", "NormalEngage\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"NormalEngage\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"NormalEngage\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"NormalEngage\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"NormalEngage\020_Names\Yousuf.ogg"};
			zero[] = {"NormalEngage\025_Numbers\zero.ogg"};
			zulu[] = {"NormalEngage\080_MoveAlphabet\zulu.ogg"};
		};
		class NormalTarget: Normal
		{
			__1[] = {"NormalTarget\Misc\__1.ogg"};
			__10[] = {"NormalTarget\Misc\__10.ogg"};
			__11[] = {"NormalTarget\Misc\__11.ogg"};
			__12[] = {"NormalTarget\Misc\__12.ogg"};
			__13[] = {"NormalTarget\Misc\__13.ogg"};
			__14[] = {"NormalTarget\Misc\__14.ogg"};
			__15[] = {"NormalTarget\Misc\__15.ogg"};
			__1_1[] = {"NormalTarget\Combat\__1_1.ogg"};
			__2[] = {"NormalTarget\Misc\__2.ogg"};
			__2_1[] = {"NormalTarget\Misc\__2_1.ogg"};
			__3[] = {"NormalTarget\Misc\__3.ogg"};
			__4[] = {"NormalTarget\Misc\__4.ogg"};
			__4_CMPS[] = {"NormalTarget\Misc\__4_CMPS.ogg"};
			__5[] = {"NormalTarget\Misc\__5.ogg"};
			__6[] = {"NormalTarget\Misc\__6.ogg"};
			__6_3[] = {"NormalTarget\Misc\__6_3.ogg"};
			__6_ABS[] = {"NormalTarget\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"NormalTarget\Misc\__6_CMPS.ogg"};
			__7[] = {"NormalTarget\Misc\__7.ogg"};
			__7_CLCK[] = {"NormalTarget\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"NormalTarget\Misc\__7_CMPS.ogg"};
			__8[] = {"NormalTarget\Misc\__8.ogg"};
			__9[] = {"NormalTarget\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"NormalTarget\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"NormalTarget\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"NormalTarget\020_Names\Adams.ogg"};
			Advance[] = {"NormalTarget\100_Commands\Advance.ogg"};
			alpha[] = {"NormalTarget\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"NormalTarget\020_Names\Amin.ogg"};
			AmmoCritical[] = {"NormalTarget\140_Com_Status\AmmoCritical_1.ogg", "NormalTarget\140_Com_Status\AmmoCritical_2.ogg", "NormalTarget\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"NormalTarget\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"NormalTarget\020_Names\Anthis.ogg"};
			AreaClear[] = {"NormalTarget\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"NormalTarget\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"NormalTarget\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"NormalTarget\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"NormalTarget\DirectionRelative2\at1_1.ogg", "NormalTarget\DirectionRelative2\at1_2.ogg"};
			at10[] = {"NormalTarget\DirectionRelative2\at10_1.ogg", "NormalTarget\DirectionRelative2\at10_2.ogg"};
			at11[] = {"NormalTarget\DirectionRelative2\at11_1.ogg", "NormalTarget\DirectionRelative2\at11_2.ogg"};
			at12[] = {"NormalTarget\DirectionRelative2\at12_1.ogg", "NormalTarget\DirectionRelative2\at12_2.ogg"};
			at2[] = {"NormalTarget\DirectionRelative2\at2_1.ogg", "NormalTarget\DirectionRelative2\at2_2.ogg"};
			at3[] = {"NormalTarget\DirectionRelative2\at3_1.ogg", "NormalTarget\DirectionRelative2\at3_2.ogg"};
			at4[] = {"NormalTarget\DirectionRelative2\at4_1.ogg", "NormalTarget\DirectionRelative2\at4_2.ogg"};
			at5[] = {"NormalTarget\DirectionRelative2\at5_1.ogg", "NormalTarget\DirectionRelative2\at5_2.ogg"};
			at6[] = {"NormalTarget\DirectionRelative2\at6_1.ogg", "NormalTarget\DirectionRelative2\at6_2.ogg"};
			at7[] = {"NormalTarget\DirectionRelative2\at7_1.ogg", "NormalTarget\DirectionRelative2\at7_2.ogg"};
			at8[] = {"NormalTarget\DirectionRelative2\at8_1.ogg", "NormalTarget\DirectionRelative2\at8_2.ogg"};
			at9[] = {"NormalTarget\DirectionRelative2\at9_1.ogg", "NormalTarget\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"NormalTarget\015_Targeting\Attack_1.ogg", "NormalTarget\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"NormalTarget\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"NormalTarget\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"NormalTarget\DirectionRelative1\back_1.ogg", "NormalTarget\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"NormalTarget\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"NormalTarget\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"NormalTarget\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"NormalTarget\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"NormalTarget\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"NormalTarget\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"NormalTarget\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"NormalTarget\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"NormalTarget\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"NormalTarget\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"NormalTarget\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"NormalTarget\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"NormalTarget\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"NormalTarget\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"NormalTarget\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"NormalTarget\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"NormalTarget\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"NormalTarget\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"NormalTarget\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"NormalTarget\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"NormalTarget\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"NormalTarget\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"NormalTarget\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"NormalTarget\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"NormalTarget\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"NormalTarget\020_Names\Bennett.ogg"};
			blueTeam[] = {"NormalTarget\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"NormalTarget\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"NormalTarget\150_Reporting\BombDetected_1.ogg", "NormalTarget\150_Reporting\BombDetected_2.ogg", "NormalTarget\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"NormalTarget\005_Weapons\Bombs.ogg"};
			bravo[] = {"NormalTarget\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"NormalTarget\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"NormalTarget\100_Commands\CancelManualFire_1.ogg", "NormalTarget\100_Commands\CancelManualFire_2.ogg", "NormalTarget\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"NormalTarget\015_Targeting\CancelTarget_1.ogg", "NormalTarget\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"NormalTarget\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"NormalTarget\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"NormalTarget\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"NormalTarget\130_Com_Reply\CannotComply_1.ogg", "NormalTarget\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"NormalTarget\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"NormalTarget\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"NormalTarget\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"NormalTarget\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"NormalTarget\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"NormalTarget\100_Commands\CeaseFire_1.ogg", "NormalTarget\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"NormalTarget\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"NormalTarget\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"NormalTarget\200_CombatShouts\CheeringE_1.ogg", "NormalTarget\200_CombatShouts\CheeringE_2.ogg", "NormalTarget\200_CombatShouts\CheeringE_3.ogg", "NormalTarget\200_CombatShouts\CheeringE_4.ogg", "NormalTarget\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"NormalTarget\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"NormalTarget\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"NormalTarget\200_CombatShouts\CombatGenericE_1.ogg", "NormalTarget\200_CombatShouts\CombatGenericE_2.ogg", "NormalTarget\200_CombatShouts\CombatGenericE_3.ogg", "NormalTarget\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"NormalTarget\100_Commands\CombatOpenFire_1.ogg", "NormalTarget\100_Commands\CombatOpenFire_2.ogg", "NormalTarget\100_Commands\CombatOpenFire_3.ogg", "NormalTarget\100_Commands\CombatOpenFire_4.ogg", "NormalTarget\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"NormalTarget\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"NormalTarget\130_Com_Reply\Confirmation1_1.ogg", "NormalTarget\130_Com_Reply\Confirmation1_2.ogg", "NormalTarget\130_Com_Reply\Confirmation1_3.ogg", "NormalTarget\130_Com_Reply\Confirmation1_4.ogg", "NormalTarget\130_Com_Reply\Confirmation1_5.ogg", "NormalTarget\130_Com_Reply\Confirmation1_6.ogg", "NormalTarget\130_Com_Reply\Confirmation1_7.ogg", "NormalTarget\130_Com_Reply\Confirmation1_8.ogg", "NormalTarget\130_Com_Reply\Confirmation1_9.ogg", "NormalTarget\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"NormalTarget\130_Com_Reply\Confirmation2_1.ogg", "NormalTarget\130_Com_Reply\Confirmation2_2.ogg", "NormalTarget\130_Com_Reply\Confirmation2_3.ogg", "NormalTarget\130_Com_Reply\Confirmation2_4.ogg", "NormalTarget\130_Com_Reply\Confirmation2_5.ogg", "NormalTarget\130_Com_Reply\Confirmation2_6.ogg", "NormalTarget\130_Com_Reply\Confirmation2_7.ogg", "NormalTarget\130_Com_Reply\Confirmation2_8.ogg", "NormalTarget\130_Com_Reply\Confirmation2_9.ogg", "NormalTarget\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"NormalTarget\150_Reporting\Contact_1.ogg", "NormalTarget\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"NormalTarget\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"NormalTarget\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"NormalTarget\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"NormalTarget\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"NormalTarget\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"NormalTarget\020_Names\Costa.ogg"};
			CoveringE[] = {"NormalTarget\200_CombatShouts\CoveringE_1.ogg", "NormalTarget\200_CombatShouts\CoveringE_2.ogg", "NormalTarget\200_CombatShouts\CoveringE_3.ogg", "NormalTarget\200_CombatShouts\CoveringE_4.ogg", "NormalTarget\200_CombatShouts\CoveringE_5.ogg", "NormalTarget\200_CombatShouts\CoveringE_6.ogg", "NormalTarget\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"NormalTarget\200_CombatShouts\CoverMeE_1.ogg", "NormalTarget\200_CombatShouts\CoverMeE_2.ogg", "NormalTarget\200_CombatShouts\CoverMeE_3.ogg", "NormalTarget\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"NormalTarget\140_Com_Status\CriticalDamage_1.ogg", "NormalTarget\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"NormalTarget\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"NormalTarget\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"NormalTarget\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"NormalTarget\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"NormalTarget\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"NormalTarget\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"NormalTarget\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"NormalTarget\100_Commands\Disengage.ogg"};
			Dismount[] = {"NormalTarget\100_Commands\Dismount_1.ogg", "NormalTarget\100_Commands\Dismount_2.ogg"};
			dist100[] = {"NormalTarget\DistanceAbsolute1\dist100_1.ogg", "NormalTarget\DistanceAbsolute1\dist100_2.ogg", "NormalTarget\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"NormalTarget\DistanceAbsolute1\dist1000_1.ogg", "NormalTarget\DistanceAbsolute1\dist1000_2.ogg", "NormalTarget\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"NormalTarget\DistanceAbsolute1\dist1500_1.ogg", "NormalTarget\DistanceAbsolute1\dist1500_2.ogg", "NormalTarget\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"NormalTarget\DistanceAbsolute1\dist200_1.ogg", "NormalTarget\DistanceAbsolute1\dist200_2.ogg", "NormalTarget\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"NormalTarget\DistanceAbsolute1\dist2000_1.ogg", "NormalTarget\DistanceAbsolute1\dist2000_2.ogg", "NormalTarget\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"NormalTarget\DistanceAbsolute1\dist2500_1.ogg", "NormalTarget\DistanceAbsolute1\dist2500_2.ogg", "NormalTarget\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"NormalTarget\DistanceAbsolute1\dist300_1.ogg", "NormalTarget\DistanceAbsolute1\dist300_2.ogg", "NormalTarget\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"NormalTarget\DistanceAbsolute1\dist400_1.ogg", "NormalTarget\DistanceAbsolute1\dist400_2.ogg", "NormalTarget\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"NormalTarget\DistanceAbsolute1\dist500_1.ogg", "NormalTarget\DistanceAbsolute1\dist500_2.ogg", "NormalTarget\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"NormalTarget\DistanceAbsolute1\dist600_1.ogg", "NormalTarget\DistanceAbsolute1\dist600_2.ogg", "NormalTarget\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"NormalTarget\DistanceAbsolute1\dist700_1.ogg", "NormalTarget\DistanceAbsolute1\dist700_2.ogg", "NormalTarget\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"NormalTarget\DistanceAbsolute1\dist75_1.ogg", "NormalTarget\DistanceAbsolute1\dist75_2.ogg", "NormalTarget\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"NormalTarget\DistanceAbsolute1\dist800_1.ogg", "NormalTarget\DistanceAbsolute1\dist800_2.ogg", "NormalTarget\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"NormalTarget\020_Names\Dixon.ogg"};
			dloc_base[] = {"NormalTarget\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"NormalTarget\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"NormalTarget\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"NormalTarget\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"NormalTarget\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"NormalTarget\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"NormalTarget\100_Commands\DropYourPack.ogg"};
			east[] = {"NormalTarget\DirectionCompass1\east_1.ogg", "NormalTarget\DirectionCompass1\east_2.ogg"};
			echo[] = {"NormalTarget\080_MoveAlphabet\echo.ogg"};
			eight[] = {"NormalTarget\025_Numbers\eight.ogg"};
			eighteen[] = {"NormalTarget\025_Numbers\eighteen.ogg"};
			eighty[] = {"NormalTarget\025_Numbers\eighty.ogg"};
			Eject[] = {"NormalTarget\100_Commands\Eject_1.ogg", "NormalTarget\100_Commands\Eject_2.ogg"};
			eleven[] = {"NormalTarget\025_Numbers\eleven.ogg"};
			Elias[] = {"NormalTarget\020_Names\Elias.ogg"};
			EndangeredE[] = {"NormalTarget\200_CombatShouts\EndangeredE_1.ogg", "NormalTarget\200_CombatShouts\EndangeredE_2.ogg", "NormalTarget\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"NormalTarget\150_Reporting\EnemyDetected_1.ogg", "NormalTarget\150_Reporting\EnemyDetected_2.ogg", "NormalTarget\150_Reporting\EnemyDetected_3.ogg", "NormalTarget\150_Reporting\EnemyDetected_4.ogg", "NormalTarget\150_Reporting\EnemyDetected_5.ogg", "NormalTarget\150_Reporting\EnemyDetected_6.ogg", "NormalTarget\150_Reporting\EnemyDetected_7.ogg", "NormalTarget\150_Reporting\EnemyDetected_8.ogg", "NormalTarget\150_Reporting\EnemyDetected_9.ogg", "NormalTarget\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"NormalTarget\015_Targeting\Engage_1.ogg", "NormalTarget\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"NormalTarget\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"NormalTarget\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"NormalTarget\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"NormalTarget\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"NormalTarget\150_Reporting\ExplosiveDetected_1.ogg", "NormalTarget\150_Reporting\ExplosiveDetected_2.ogg", "NormalTarget\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"NormalTarget\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"NormalTarget\020_Names\Fahim.ogg"};
			FallBack[] = {"NormalTarget\100_Commands\FallBack.ogg"};
			fifteen[] = {"NormalTarget\025_Numbers\fifteen.ogg"};
			fifty[] = {"NormalTarget\025_Numbers\fifty.ogg"};
			Fire[] = {"NormalTarget\015_Targeting\Fire_1.ogg", "NormalTarget\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"NormalTarget\100_Commands\FireAtWill.ogg"};
			five[] = {"NormalTarget\025_Numbers\five.ogg"};
			FlankLeft[] = {"NormalTarget\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"NormalTarget\100_Commands\FlankRight.ogg"};
			Flares[] = {"NormalTarget\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"NormalTarget\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"NormalTarget\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"NormalTarget\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"NormalTarget\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"NormalTarget\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"NormalTarget\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"NormalTarget\100_Commands\FormFile.ogg"};
			FormLine[] = {"NormalTarget\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"NormalTarget\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"NormalTarget\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"NormalTarget\100_Commands\FormVee.ogg"};
			FormWedge[] = {"NormalTarget\100_Commands\FormWedge.ogg"};
			forty[] = {"NormalTarget\025_Numbers\forty.ogg"};
			four[] = {"NormalTarget\025_Numbers\four.ogg"};
			fourteen[] = {"NormalTarget\025_Numbers\fourteen.ogg"};
			Fox[] = {"NormalTarget\020_Names\Fox.ogg"};
			foxtrot[] = {"NormalTarget\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"NormalTarget\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"NormalTarget\100_Commands\FreeToEngage.ogg"};
			front[] = {"NormalTarget\DirectionRelative1\front_1.ogg", "NormalTarget\DirectionRelative1\front_2.ogg"};
			Frost[] = {"NormalTarget\020_Names\Frost.ogg"};
			FuelCritical[] = {"NormalTarget\140_Com_Status\FuelCritical_1.ogg", "NormalTarget\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"NormalTarget\140_Com_Status\FuelLow_1.ogg", "NormalTarget\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"NormalTarget\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"NormalTarget\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"NormalTarget\999_FX\FXDeath_1.ogg", "NormalTarget\999_FX\FXDeath_2.ogg", "NormalTarget\999_FX\FXDeath_3.ogg", "NormalTarget\999_FX\FXDeath_4.ogg", "NormalTarget\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"NormalTarget\999_FX\FXDrowning_1.ogg", "NormalTarget\999_FX\FXDrowning_2.ogg", "NormalTarget\999_FX\FXDrowning_3.ogg", "NormalTarget\999_FX\FXDrowning_4.ogg", "NormalTarget\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"NormalTarget\999_FX\FXEffort_1.ogg", "NormalTarget\999_FX\FXEffort_2.ogg", "NormalTarget\999_FX\FXEffort_3.ogg", "NormalTarget\999_FX\FXEffort_4.ogg", "NormalTarget\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"NormalTarget\999_FX\FXHit_1.ogg", "NormalTarget\999_FX\FXHit_2.ogg", "NormalTarget\999_FX\FXHit_3.ogg", "NormalTarget\999_FX\FXHit_4.ogg", "NormalTarget\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"NormalTarget\999_FX\FXHurt_1.ogg", "NormalTarget\999_FX\FXHurt_2.ogg", "NormalTarget\999_FX\FXHurt_3.ogg", "NormalTarget\999_FX\FXHurt_4.ogg", "NormalTarget\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"NormalTarget\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"NormalTarget\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"NormalTarget\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"NormalTarget\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"NormalTarget\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"NormalTarget\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"NormalTarget\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"NormalTarget\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"NormalTarget\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"NormalTarget\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"NormalTarget\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"NormalTarget\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"NormalTarget\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"NormalTarget\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"NormalTarget\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"NormalTarget\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"NormalTarget\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"NormalTarget\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"NormalTarget\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"NormalTarget\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"NormalTarget\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"NormalTarget\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"NormalTarget\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"NormalTarget\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"NormalTarget\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"NormalTarget\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"NormalTarget\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"NormalTarget\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"NormalTarget\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"NormalTarget\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"NormalTarget\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"NormalTarget\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"NormalTarget\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"NormalTarget\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"NormalTarget\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"NormalTarget\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"NormalTarget\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"NormalTarget\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"NormalTarget\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"NormalTarget\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"NormalTarget\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"NormalTarget\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"NormalTarget\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"NormalTarget\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"NormalTarget\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"NormalTarget\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"NormalTarget\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"NormalTarget\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"NormalTarget\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"NormalTarget\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"NormalTarget\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"NormalTarget\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"NormalTarget\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"NormalTarget\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"NormalTarget\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"NormalTarget\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"NormalTarget\100_Commands\GetSupport.ogg"};
			Ghost[] = {"NormalTarget\020_Names\Ghost.ogg"};
			Givens[] = {"NormalTarget\020_Names\Givens.ogg"};
			golf[] = {"NormalTarget\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"NormalTarget\100_Commands\GoProne_1.ogg", "NormalTarget\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"NormalTarget\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"NormalTarget\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"NormalTarget\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"NormalTarget\035_NumbersGrid\grid_eight_1.ogg", "NormalTarget\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"NormalTarget\035_NumbersGrid\grid_eight_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"NormalTarget\035_NumbersGrid\grid_eight_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"NormalTarget\035_NumbersGrid\grid_five_1.ogg", "NormalTarget\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"NormalTarget\035_NumbersGrid\grid_five_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"NormalTarget\035_NumbersGrid\grid_five_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"NormalTarget\035_NumbersGrid\grid_four_1.ogg", "NormalTarget\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"NormalTarget\035_NumbersGrid\grid_four_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"NormalTarget\035_NumbersGrid\grid_four_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"NormalTarget\035_NumbersGrid\grid_move_to_eight_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"NormalTarget\035_NumbersGrid\grid_move_to_five_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"NormalTarget\035_NumbersGrid\grid_move_to_four_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"NormalTarget\035_NumbersGrid\grid_move_to_nine_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"NormalTarget\035_NumbersGrid\grid_move_to_one_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"NormalTarget\035_NumbersGrid\grid_move_to_seven_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"NormalTarget\035_NumbersGrid\grid_move_to_six_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"NormalTarget\035_NumbersGrid\grid_move_to_three_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"NormalTarget\035_NumbersGrid\grid_move_to_two_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"NormalTarget\035_NumbersGrid\grid_move_to_zero_1.ogg", "NormalTarget\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"NormalTarget\035_NumbersGrid\grid_nine_1.ogg", "NormalTarget\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"NormalTarget\035_NumbersGrid\grid_nine_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"NormalTarget\035_NumbersGrid\grid_nine_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"NormalTarget\035_NumbersGrid\grid_one_1.ogg", "NormalTarget\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"NormalTarget\035_NumbersGrid\grid_one_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"NormalTarget\035_NumbersGrid\grid_one_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"NormalTarget\035_NumbersGrid\grid_seven_1.ogg", "NormalTarget\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"NormalTarget\035_NumbersGrid\grid_seven_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"NormalTarget\035_NumbersGrid\grid_seven_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"NormalTarget\035_NumbersGrid\grid_six_1.ogg", "NormalTarget\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"NormalTarget\035_NumbersGrid\grid_six_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"NormalTarget\035_NumbersGrid\grid_six_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"NormalTarget\035_NumbersGrid\grid_three_1.ogg", "NormalTarget\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"NormalTarget\035_NumbersGrid\grid_three_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"NormalTarget\035_NumbersGrid\grid_three_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"NormalTarget\035_NumbersGrid\grid_two_1.ogg", "NormalTarget\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"NormalTarget\035_NumbersGrid\grid_two_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"NormalTarget\035_NumbersGrid\grid_two_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"NormalTarget\035_NumbersGrid\grid_zero_1.ogg", "NormalTarget\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"NormalTarget\035_NumbersGrid\grid_zero_2_1.ogg", "NormalTarget\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"NormalTarget\035_NumbersGrid\grid_zero_3_1.ogg", "NormalTarget\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"NormalTarget\020_Names\Habibi.ogg"};
			Halt[] = {"NormalTarget\100_Commands\Halt.ogg"};
			Hardy[] = {"NormalTarget\020_Names\Hardy.ogg"};
			Hawkins[] = {"NormalTarget\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"NormalTarget\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"NormalTarget\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"NormalTarget\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"NormalTarget\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"NormalTarget\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"NormalTarget\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"NormalTarget\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"NormalTarget\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"NormalTarget\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"NormalTarget\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"NormalTarget\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"NormalTarget\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"NormalTarget\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"NormalTarget\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"NormalTarget\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"NormalTarget\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"NormalTarget\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"NormalTarget\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"NormalTarget\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"NormalTarget\025_Numbers\hundred.ogg"};
			IAmReady[] = {"NormalTarget\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"NormalTarget\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"NormalTarget\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"NormalTarget\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"NormalTarget\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"NormalTarget\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"NormalTarget\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"NormalTarget\020_Names\Jackson.ogg"};
			James[] = {"NormalTarget\020_Names\James.ogg"};
			Jawadi[] = {"NormalTarget\020_Names\Jawadi.ogg"};
			Jester[] = {"NormalTarget\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"NormalTarget\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"NormalTarget\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"NormalTarget\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"NormalTarget\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"NormalTarget\020_Names\Kerry.ogg"};
			kilo[] = {"NormalTarget\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"NormalTarget\020_Names\Korneedler.ogg"};
			Kouris[] = {"NormalTarget\020_Names\Kouris.ogg"};
			Kushan[] = {"NormalTarget\020_Names\Kushan.ogg"};
			Lacey[] = {"NormalTarget\020_Names\Lacey.ogg"};
			Larkin[] = {"NormalTarget\020_Names\Larkin.ogg"};
			left[] = {"NormalTarget\DirectionRelative1\left_1.ogg", "NormalTarget\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"NormalTarget\020_Names\Leventis.ogg"};
			Levine[] = {"NormalTarget\020_Names\Levine.ogg"};
			LightThatFire[] = {"NormalTarget\100_Commands\LightThatFire.ogg"};
			lima[] = {"NormalTarget\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"NormalTarget\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"NormalTarget\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"NormalTarget\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"NormalTarget\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"NormalTarget\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"NormalTarget\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"NormalTarget\020_Names\Lopez.ogg"};
			ManDownE[] = {"NormalTarget\140_Com_Status\ManDownE_1.ogg", "NormalTarget\140_Com_Status\ManDownE_2.ogg", "NormalTarget\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"NormalTarget\100_Commands\ManualFire_1.ogg", "NormalTarget\100_Commands\ManualFire_2.ogg", "NormalTarget\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"NormalTarget\020_Names\Markos.ogg"};
			Martinez[] = {"NormalTarget\020_Names\Martinez.ogg"};
			Masood[] = {"NormalTarget\020_Names\Masood.ogg"};
			McKay[] = {"NormalTarget\020_Names\McKay.ogg"};
			McKendrick[] = {"NormalTarget\020_Names\McKendrick.ogg"};
			mgun[] = {"NormalTarget\005_Weapons\mgun.ogg"};
			mike[] = {"NormalTarget\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"NormalTarget\020_Names\Miller.ogg"};
			MineDetected[] = {"NormalTarget\150_Reporting\MineDetected_1.ogg", "NormalTarget\150_Reporting\MineDetected_2.ogg", "NormalTarget\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"NormalTarget\005_Weapons\missiles.ogg"};
			move_dist100[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"NormalTarget\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"NormalTarget\070_MoveDirectionRelative1\moveBack_1.ogg", "NormalTarget\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"NormalTarget\070_MoveDirectionRelative1\moveLeft_1.ogg", "NormalTarget\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"NormalTarget\070_MoveDirectionRelative1\moveRight_1.ogg", "NormalTarget\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"NormalTarget\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"NormalTarget\070_MoveDirectionRelative1\moveUp_1.ogg", "NormalTarget\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"NormalTarget\020_Names\Nazari.ogg"};
			Negative[] = {"NormalTarget\130_Com_Reply\Negative_1.ogg", "NormalTarget\130_Com_Reply\Negative_2.ogg", "NormalTarget\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"NormalTarget\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"NormalTarget\020_Names\Nichols.ogg"};
			Nicolo[] = {"NormalTarget\020_Names\Nicolo.ogg"};
			Nikas[] = {"NormalTarget\020_Names\Nikas.ogg"};
			nine[] = {"NormalTarget\025_Numbers\nine.ogg"};
			nineteen[] = {"NormalTarget\025_Numbers\nineteen.ogg"};
			ninety[] = {"NormalTarget\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"NormalTarget\130_Com_Reply\NoCanDo_1.ogg", "NormalTarget\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"NormalTarget\DirectionCompass1\north_1.ogg", "NormalTarget\DirectionCompass1\north_2.ogg"};
			northEast[] = {"NormalTarget\DirectionCompass1\northEast_1.ogg", "NormalTarget\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"NormalTarget\020_Names\Northgate.ogg"};
			northWest[] = {"NormalTarget\DirectionCompass1\northWest_1.ogg", "NormalTarget\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"NormalTarget\015_Targeting\NoTarget_1.ogg", "NormalTarget\015_Targeting\NoTarget_2.ogg"};
			november[] = {"NormalTarget\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"NormalTarget\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"NormalTarget\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"NormalTarget\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"NormalTarget\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"NormalTarget\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"NormalTarget\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"NormalTarget\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"NormalTarget\020_Names\OConnor.ogg"};
			one[] = {"NormalTarget\025_Numbers\one.ogg"};
			OnTheMove[] = {"NormalTarget\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"NormalTarget\130_Com_Reply\OnTheWay_1.ogg", "NormalTarget\130_Com_Reply\OnTheWay_2.ogg", "NormalTarget\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"NormalTarget\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"NormalTarget\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"NormalTarget\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"NormalTarget\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"NormalTarget\140_Com_Status\OutOfFirstAidKits_1.ogg", "NormalTarget\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"NormalTarget\020_Names\Panas.ogg"};
			papa[] = {"NormalTarget\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"NormalTarget\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"NormalTarget\020_Names\Patterson.ogg"};
			Petros[] = {"NormalTarget\020_Names\Petros.ogg"};
			PointersOff[] = {"NormalTarget\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"NormalTarget\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"NormalTarget\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"NormalTarget\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"NormalTarget\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"NormalTarget\100_Commands\RallyUp.ogg"};
			Razer[] = {"NormalTarget\020_Names\Razer.ogg"};
			Ready[] = {"NormalTarget\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"NormalTarget\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"NormalTarget\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"NormalTarget\100_Commands\Rearm.ogg"};
			redTeam[] = {"NormalTarget\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"NormalTarget\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"NormalTarget\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"NormalTarget\100_Commands\Regroup.ogg"};
			Relax[] = {"NormalTarget\100_Commands\Relax.ogg"};
			ReloadingE[] = {"NormalTarget\200_CombatShouts\ReloadingE_1.ogg", "NormalTarget\200_CombatShouts\ReloadingE_2.ogg", "NormalTarget\200_CombatShouts\ReloadingE_3.ogg", "NormalTarget\200_CombatShouts\ReloadingE_4.ogg", "NormalTarget\200_CombatShouts\ReloadingE_5.ogg", "NormalTarget\200_CombatShouts\ReloadingE_6.ogg", "NormalTarget\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"NormalTarget\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"NormalTarget\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"NormalTarget\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"NormalTarget\DirectionRelative3\reportBack_1.ogg", "NormalTarget\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"NormalTarget\DirectionRelative3\reportFront_1.ogg", "NormalTarget\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"NormalTarget\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"NormalTarget\DirectionRelative3\reportLeft_1.ogg", "NormalTarget\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"NormalTarget\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"NormalTarget\DirectionRelative3\reportRight_1.ogg", "NormalTarget\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"NormalTarget\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"NormalTarget\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"NormalTarget\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"NormalTarget\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"NormalTarget\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"NormalTarget\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"NormalTarget\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"NormalTarget\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"NormalTarget\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"NormalTarget\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"NormalTarget\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"NormalTarget\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"NormalTarget\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"NormalTarget\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"NormalTarget\020_Names\Reynolds.ogg"};
			right[] = {"NormalTarget\DirectionRelative1\right_1.ogg", "NormalTarget\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"NormalTarget\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"NormalTarget\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"NormalTarget\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"NormalTarget\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"NormalTarget\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"NormalTarget\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"NormalTarget\020_Names\Ryan.ogg"};
			sabot[] = {"NormalTarget\005_Weapons\sabot.ogg"};
			Safe[] = {"NormalTarget\100_Commands\Safe_1.ogg", "NormalTarget\100_Commands\Safe_2.ogg"};
			Samaras[] = {"NormalTarget\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"NormalTarget\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"NormalTarget\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"NormalTarget\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"NormalTarget\200_CombatShouts\ScreamingE_1.ogg", "NormalTarget\200_CombatShouts\ScreamingE_2.ogg", "NormalTarget\200_CombatShouts\ScreamingE_3.ogg", "NormalTarget\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"NormalTarget\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"NormalTarget\100_Commands\SetTheTimer.ogg"};
			seven[] = {"NormalTarget\025_Numbers\seven.ogg"};
			seventeen[] = {"NormalTarget\025_Numbers\seventeen.ogg"};
			seventy[] = {"NormalTarget\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"NormalTarget\020_Names\Siddiqi.ogg"};
			sierra[] = {"NormalTarget\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"NormalTarget\100_Commands\Silence.ogg"};
			Sitrep[] = {"NormalTarget\120_Com_Ask\Sitrep.ogg"};
			six[] = {"NormalTarget\025_Numbers\six.ogg"};
			sixteen[] = {"NormalTarget\025_Numbers\sixteen.ogg"};
			sixty[] = {"NormalTarget\025_Numbers\sixty.ogg"};
			Snake[] = {"NormalTarget\020_Names\Snake.ogg"};
			south[] = {"NormalTarget\DirectionCompass1\south_1.ogg", "NormalTarget\DirectionCompass1\south_2.ogg"};
			southEast[] = {"NormalTarget\DirectionCompass1\southEast_1.ogg", "NormalTarget\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"NormalTarget\DirectionCompass1\southWest_1.ogg", "NormalTarget\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"NormalTarget\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"NormalTarget\020_Names\Stavrou.ogg"};
			StayAlert[] = {"NormalTarget\100_Commands\StayAlert.ogg"};
			StayBack[] = {"NormalTarget\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"NormalTarget\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"NormalTarget\100_Commands\StayLow.ogg"};
			Stop[] = {"NormalTarget\100_Commands\Stop.ogg"};
			Stranger[] = {"NormalTarget\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"NormalTarget\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"NormalTarget\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"NormalTarget\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"NormalTarget\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"NormalTarget\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"NormalTarget\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"NormalTarget\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"NormalTarget\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"NormalTarget\130_Com_Reply\Suppressing_1.ogg", "NormalTarget\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"NormalTarget\200_CombatShouts\SuppressingE_1.ogg", "NormalTarget\200_CombatShouts\SuppressingE_2.ogg", "NormalTarget\200_CombatShouts\SuppressingE_3.ogg", "NormalTarget\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"NormalTarget\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"NormalTarget\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"NormalTarget\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"NormalTarget\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"NormalTarget\020_Names\Sykes.ogg"};
			TakeCover[] = {"NormalTarget\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"NormalTarget\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"NormalTarget\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"NormalTarget\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"NormalTarget\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"NormalTarget\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"NormalTarget\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"NormalTarget\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"NormalTarget\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"NormalTarget\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"NormalTarget\020_Names\Tanny.ogg"};
			Target[] = {"NormalTarget\015_Targeting\Target_1.ogg", "NormalTarget\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"NormalTarget\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"NormalTarget\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"NormalTarget\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"NormalTarget\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"NormalTarget\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"NormalTarget\020_Names\Taylor.ogg"};
			ten[] = {"NormalTarget\025_Numbers\ten.ogg"};
			Thanos[] = {"NormalTarget\020_Names\Thanos.ogg"};
			thirteen[] = {"NormalTarget\025_Numbers\thirteen.ogg"};
			thirty[] = {"NormalTarget\025_Numbers\thirty.ogg"};
			three[] = {"NormalTarget\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"NormalTarget\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"NormalTarget\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"NormalTarget\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"NormalTarget\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"NormalTarget\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"NormalTarget\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"NormalTarget\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"NormalTarget\025_Numbers\twelve.ogg"};
			twenty[] = {"NormalTarget\025_Numbers\twenty.ogg"};
			two[] = {"NormalTarget\025_Numbers\two.ogg"};
			UnderFireE[] = {"NormalTarget\200_CombatShouts\UnderFireE_1.ogg", "NormalTarget\200_CombatShouts\UnderFireE_2.ogg", "NormalTarget\200_CombatShouts\UnderFireE_3.ogg", "NormalTarget\200_CombatShouts\UnderFireE_4.ogg", "NormalTarget\200_CombatShouts\UnderFireE_5.ogg", "NormalTarget\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"NormalTarget\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"NormalTarget\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"NormalTarget\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"NormalTarget\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"NormalTarget\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"NormalTarget\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"NormalTarget\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"NormalTarget\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"NormalTarget\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"NormalTarget\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"NormalTarget\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"NormalTarget\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"NormalTarget\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"NormalTarget\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"NormalTarget\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"NormalTarget\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"NormalTarget\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"NormalTarget\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"NormalTarget\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"NormalTarget\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"NormalTarget\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"NormalTarget\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"NormalTarget\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"NormalTarget\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"NormalTarget\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"NormalTarget\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"NormalTarget\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"NormalTarget\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"NormalTarget\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"NormalTarget\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"NormalTarget\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"NormalTarget\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"NormalTarget\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"NormalTarget\010_Vehicles\veh_infantry_p_1.ogg", "NormalTarget\010_Vehicles\veh_infantry_p_2.ogg", "NormalTarget\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"NormalTarget\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"NormalTarget\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"NormalTarget\010_Vehicles\veh_infantry_s_1.ogg", "NormalTarget\010_Vehicles\veh_infantry_s_2.ogg", "NormalTarget\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"NormalTarget\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"NormalTarget\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"NormalTarget\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"NormalTarget\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"NormalTarget\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"NormalTarget\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"NormalTarget\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"NormalTarget\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"NormalTarget\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"NormalTarget\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"NormalTarget\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"NormalTarget\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"NormalTarget\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"NormalTarget\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"NormalTarget\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"NormalTarget\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"NormalTarget\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"NormalTarget\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"NormalTarget\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"NormalTarget\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"NormalTarget\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"NormalTarget\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"NormalTarget\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"NormalTarget\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"NormalTarget\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"NormalTarget\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"NormalTarget\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"NormalTarget\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"NormalTarget\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"NormalTarget\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"NormalTarget\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"NormalTarget\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"NormalTarget\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"NormalTarget\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"NormalTarget\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"NormalTarget\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"NormalTarget\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"NormalTarget\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"NormalTarget\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"NormalTarget\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"NormalTarget\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"NormalTarget\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"NormalTarget\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"NormalTarget\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"NormalTarget\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"NormalTarget\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"NormalTarget\100_Commands\VehBackward_1.ogg", "NormalTarget\100_Commands\VehBackward_2.ogg", "NormalTarget\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"NormalTarget\100_Commands\VehFast_1.ogg", "NormalTarget\100_Commands\VehFast_2.ogg", "NormalTarget\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"NormalTarget\100_Commands\VehForward_1.ogg", "NormalTarget\100_Commands\VehForward_2.ogg", "NormalTarget\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"NormalTarget\100_Commands\VehLeft_1.ogg", "NormalTarget\100_Commands\VehLeft_2.ogg", "NormalTarget\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"NormalTarget\100_Commands\VehRight_1.ogg", "NormalTarget\100_Commands\VehRight_2.ogg", "NormalTarget\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"NormalTarget\100_Commands\VehSlow_1.ogg", "NormalTarget\100_Commands\VehSlow_2.ogg", "NormalTarget\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"NormalTarget\100_Commands\VehStop_1.ogg", "NormalTarget\100_Commands\VehStop_2.ogg", "NormalTarget\100_Commands\VehStop_3.ogg"};
			victor[] = {"NormalTarget\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"NormalTarget\020_Names\Viper.ogg"};
			Waiting[] = {"NormalTarget\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"NormalTarget\020_Names\Walker.ogg"};
			Wardak[] = {"NormalTarget\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"NormalTarget\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"NormalTarget\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"NormalTarget\140_Com_Status\WeGotAManDownE_1.ogg", "NormalTarget\140_Com_Status\WeGotAManDownE_2.ogg", "NormalTarget\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"NormalTarget\140_Com_Status\WeLostOneE_1.ogg", "NormalTarget\140_Com_Status\WeLostOneE_2.ogg", "NormalTarget\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"NormalTarget\DirectionCompass1\west_1.ogg", "NormalTarget\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"NormalTarget\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"NormalTarget\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"NormalTarget\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"NormalTarget\200_CombatShouts\WitnessKilledE_1.ogg", "NormalTarget\200_CombatShouts\WitnessKilledE_2.ogg", "NormalTarget\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"NormalTarget\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"NormalTarget\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"NormalTarget\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"NormalTarget\020_Names\Yousuf.ogg"};
			zero[] = {"NormalTarget\025_Numbers\zero.ogg"};
			zulu[] = {"NormalTarget\080_MoveAlphabet\zulu.ogg"};
		};
		class NormalWatch: Normal
		{
			__1[] = {"NormalWatch\Misc\__1.ogg"};
			__10[] = {"NormalWatch\Misc\__10.ogg"};
			__11[] = {"NormalWatch\Misc\__11.ogg"};
			__12[] = {"NormalWatch\Misc\__12.ogg"};
			__13[] = {"NormalWatch\Misc\__13.ogg"};
			__14[] = {"NormalWatch\Misc\__14.ogg"};
			__15[] = {"NormalWatch\Misc\__15.ogg"};
			__1_1[] = {"NormalWatch\Combat\__1_1.ogg"};
			__2[] = {"NormalWatch\Misc\__2.ogg"};
			__2_1[] = {"NormalWatch\Misc\__2_1.ogg"};
			__3[] = {"NormalWatch\Misc\__3.ogg"};
			__4[] = {"NormalWatch\Misc\__4.ogg"};
			__4_CMPS[] = {"NormalWatch\Misc\__4_CMPS.ogg"};
			__5[] = {"NormalWatch\Misc\__5.ogg"};
			__6[] = {"NormalWatch\Misc\__6.ogg"};
			__6_3[] = {"NormalWatch\Misc\__6_3.ogg"};
			__6_ABS[] = {"NormalWatch\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"NormalWatch\Misc\__6_CMPS.ogg"};
			__7[] = {"NormalWatch\Misc\__7.ogg"};
			__7_CLCK[] = {"NormalWatch\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"NormalWatch\Misc\__7_CMPS.ogg"};
			__8[] = {"NormalWatch\Misc\__8.ogg"};
			__9[] = {"NormalWatch\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"NormalWatch\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"NormalWatch\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"NormalWatch\020_Names\Adams.ogg"};
			Advance[] = {"NormalWatch\100_Commands\Advance.ogg"};
			alpha[] = {"NormalWatch\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"NormalWatch\020_Names\Amin.ogg"};
			AmmoCritical[] = {"NormalWatch\140_Com_Status\AmmoCritical_1.ogg", "NormalWatch\140_Com_Status\AmmoCritical_2.ogg", "NormalWatch\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"NormalWatch\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"NormalWatch\020_Names\Anthis.ogg"};
			AreaClear[] = {"NormalWatch\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"NormalWatch\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"NormalWatch\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"NormalWatch\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"NormalWatch\DirectionRelative2\at1_1.ogg", "NormalWatch\DirectionRelative2\at1_2.ogg"};
			at10[] = {"NormalWatch\DirectionRelative2\at10_1.ogg", "NormalWatch\DirectionRelative2\at10_2.ogg"};
			at11[] = {"NormalWatch\DirectionRelative2\at11_1.ogg", "NormalWatch\DirectionRelative2\at11_2.ogg"};
			at12[] = {"NormalWatch\DirectionRelative2\at12_1.ogg", "NormalWatch\DirectionRelative2\at12_2.ogg"};
			at2[] = {"NormalWatch\DirectionRelative2\at2_1.ogg", "NormalWatch\DirectionRelative2\at2_2.ogg"};
			at3[] = {"NormalWatch\DirectionRelative2\at3_1.ogg", "NormalWatch\DirectionRelative2\at3_2.ogg"};
			at4[] = {"NormalWatch\DirectionRelative2\at4_1.ogg", "NormalWatch\DirectionRelative2\at4_2.ogg"};
			at5[] = {"NormalWatch\DirectionRelative2\at5_1.ogg", "NormalWatch\DirectionRelative2\at5_2.ogg"};
			at6[] = {"NormalWatch\DirectionRelative2\at6_1.ogg", "NormalWatch\DirectionRelative2\at6_2.ogg"};
			at7[] = {"NormalWatch\DirectionRelative2\at7_1.ogg", "NormalWatch\DirectionRelative2\at7_2.ogg"};
			at8[] = {"NormalWatch\DirectionRelative2\at8_1.ogg", "NormalWatch\DirectionRelative2\at8_2.ogg"};
			at9[] = {"NormalWatch\DirectionRelative2\at9_1.ogg", "NormalWatch\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"NormalWatch\015_Targeting\Attack_1.ogg", "NormalWatch\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"NormalWatch\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"NormalWatch\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"NormalWatch\DirectionRelative1\back_1.ogg", "NormalWatch\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"NormalWatch\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"NormalWatch\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"NormalWatch\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"NormalWatch\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"NormalWatch\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"NormalWatch\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"NormalWatch\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"NormalWatch\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"NormalWatch\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"NormalWatch\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"NormalWatch\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"NormalWatch\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"NormalWatch\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"NormalWatch\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"NormalWatch\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"NormalWatch\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"NormalWatch\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"NormalWatch\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"NormalWatch\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"NormalWatch\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"NormalWatch\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"NormalWatch\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"NormalWatch\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"NormalWatch\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"NormalWatch\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"NormalWatch\020_Names\Bennett.ogg"};
			blueTeam[] = {"NormalWatch\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"NormalWatch\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"NormalWatch\150_Reporting\BombDetected_1.ogg", "NormalWatch\150_Reporting\BombDetected_2.ogg", "NormalWatch\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"NormalWatch\005_Weapons\Bombs.ogg"};
			bravo[] = {"NormalWatch\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"NormalWatch\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"NormalWatch\100_Commands\CancelManualFire_1.ogg", "NormalWatch\100_Commands\CancelManualFire_2.ogg", "NormalWatch\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"NormalWatch\015_Targeting\CancelTarget_1.ogg", "NormalWatch\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"NormalWatch\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"NormalWatch\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"NormalWatch\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"NormalWatch\130_Com_Reply\CannotComply_1.ogg", "NormalWatch\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"NormalWatch\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"NormalWatch\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"NormalWatch\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"NormalWatch\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"NormalWatch\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"NormalWatch\100_Commands\CeaseFire_1.ogg", "NormalWatch\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"NormalWatch\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"NormalWatch\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"NormalWatch\200_CombatShouts\CheeringE_1.ogg", "NormalWatch\200_CombatShouts\CheeringE_2.ogg", "NormalWatch\200_CombatShouts\CheeringE_3.ogg", "NormalWatch\200_CombatShouts\CheeringE_4.ogg", "NormalWatch\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"NormalWatch\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"NormalWatch\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"NormalWatch\200_CombatShouts\CombatGenericE_1.ogg", "NormalWatch\200_CombatShouts\CombatGenericE_2.ogg", "NormalWatch\200_CombatShouts\CombatGenericE_3.ogg", "NormalWatch\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"NormalWatch\100_Commands\CombatOpenFire_1.ogg", "NormalWatch\100_Commands\CombatOpenFire_2.ogg", "NormalWatch\100_Commands\CombatOpenFire_3.ogg", "NormalWatch\100_Commands\CombatOpenFire_4.ogg", "NormalWatch\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"NormalWatch\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"NormalWatch\130_Com_Reply\Confirmation1_1.ogg", "NormalWatch\130_Com_Reply\Confirmation1_2.ogg", "NormalWatch\130_Com_Reply\Confirmation1_3.ogg", "NormalWatch\130_Com_Reply\Confirmation1_4.ogg", "NormalWatch\130_Com_Reply\Confirmation1_5.ogg", "NormalWatch\130_Com_Reply\Confirmation1_6.ogg", "NormalWatch\130_Com_Reply\Confirmation1_7.ogg", "NormalWatch\130_Com_Reply\Confirmation1_8.ogg", "NormalWatch\130_Com_Reply\Confirmation1_9.ogg", "NormalWatch\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"NormalWatch\130_Com_Reply\Confirmation2_1.ogg", "NormalWatch\130_Com_Reply\Confirmation2_2.ogg", "NormalWatch\130_Com_Reply\Confirmation2_3.ogg", "NormalWatch\130_Com_Reply\Confirmation2_4.ogg", "NormalWatch\130_Com_Reply\Confirmation2_5.ogg", "NormalWatch\130_Com_Reply\Confirmation2_6.ogg", "NormalWatch\130_Com_Reply\Confirmation2_7.ogg", "NormalWatch\130_Com_Reply\Confirmation2_8.ogg", "NormalWatch\130_Com_Reply\Confirmation2_9.ogg", "NormalWatch\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"NormalWatch\150_Reporting\Contact_1.ogg", "NormalWatch\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"NormalWatch\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"NormalWatch\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"NormalWatch\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"NormalWatch\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"NormalWatch\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"NormalWatch\020_Names\Costa.ogg"};
			CoveringE[] = {"NormalWatch\200_CombatShouts\CoveringE_1.ogg", "NormalWatch\200_CombatShouts\CoveringE_2.ogg", "NormalWatch\200_CombatShouts\CoveringE_3.ogg", "NormalWatch\200_CombatShouts\CoveringE_4.ogg", "NormalWatch\200_CombatShouts\CoveringE_5.ogg", "NormalWatch\200_CombatShouts\CoveringE_6.ogg", "NormalWatch\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"NormalWatch\200_CombatShouts\CoverMeE_1.ogg", "NormalWatch\200_CombatShouts\CoverMeE_2.ogg", "NormalWatch\200_CombatShouts\CoverMeE_3.ogg", "NormalWatch\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"NormalWatch\140_Com_Status\CriticalDamage_1.ogg", "NormalWatch\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"NormalWatch\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"NormalWatch\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"NormalWatch\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"NormalWatch\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"NormalWatch\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"NormalWatch\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"NormalWatch\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"NormalWatch\100_Commands\Disengage.ogg"};
			Dismount[] = {"NormalWatch\100_Commands\Dismount_1.ogg", "NormalWatch\100_Commands\Dismount_2.ogg"};
			dist100[] = {"NormalWatch\DistanceAbsolute1\dist100_1.ogg", "NormalWatch\DistanceAbsolute1\dist100_2.ogg", "NormalWatch\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"NormalWatch\DistanceAbsolute1\dist1000_1.ogg", "NormalWatch\DistanceAbsolute1\dist1000_2.ogg", "NormalWatch\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"NormalWatch\DistanceAbsolute1\dist1500_1.ogg", "NormalWatch\DistanceAbsolute1\dist1500_2.ogg", "NormalWatch\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"NormalWatch\DistanceAbsolute1\dist200_1.ogg", "NormalWatch\DistanceAbsolute1\dist200_2.ogg", "NormalWatch\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"NormalWatch\DistanceAbsolute1\dist2000_1.ogg", "NormalWatch\DistanceAbsolute1\dist2000_2.ogg", "NormalWatch\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"NormalWatch\DistanceAbsolute1\dist2500_1.ogg", "NormalWatch\DistanceAbsolute1\dist2500_2.ogg", "NormalWatch\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"NormalWatch\DistanceAbsolute1\dist300_1.ogg", "NormalWatch\DistanceAbsolute1\dist300_2.ogg", "NormalWatch\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"NormalWatch\DistanceAbsolute1\dist400_1.ogg", "NormalWatch\DistanceAbsolute1\dist400_2.ogg", "NormalWatch\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"NormalWatch\DistanceAbsolute1\dist500_1.ogg", "NormalWatch\DistanceAbsolute1\dist500_2.ogg", "NormalWatch\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"NormalWatch\DistanceAbsolute1\dist600_1.ogg", "NormalWatch\DistanceAbsolute1\dist600_2.ogg", "NormalWatch\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"NormalWatch\DistanceAbsolute1\dist700_1.ogg", "NormalWatch\DistanceAbsolute1\dist700_2.ogg", "NormalWatch\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"NormalWatch\DistanceAbsolute1\dist75_1.ogg", "NormalWatch\DistanceAbsolute1\dist75_2.ogg", "NormalWatch\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"NormalWatch\DistanceAbsolute1\dist800_1.ogg", "NormalWatch\DistanceAbsolute1\dist800_2.ogg", "NormalWatch\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"NormalWatch\020_Names\Dixon.ogg"};
			dloc_base[] = {"NormalWatch\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"NormalWatch\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"NormalWatch\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"NormalWatch\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"NormalWatch\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"NormalWatch\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"NormalWatch\100_Commands\DropYourPack.ogg"};
			east[] = {"NormalWatch\DirectionCompass1\east_1.ogg", "NormalWatch\DirectionCompass1\east_2.ogg"};
			echo[] = {"NormalWatch\080_MoveAlphabet\echo.ogg"};
			eight[] = {"NormalWatch\025_Numbers\eight.ogg"};
			eighteen[] = {"NormalWatch\025_Numbers\eighteen.ogg"};
			eighty[] = {"NormalWatch\025_Numbers\eighty.ogg"};
			Eject[] = {"NormalWatch\100_Commands\Eject_1.ogg", "NormalWatch\100_Commands\Eject_2.ogg"};
			eleven[] = {"NormalWatch\025_Numbers\eleven.ogg"};
			Elias[] = {"NormalWatch\020_Names\Elias.ogg"};
			EndangeredE[] = {"NormalWatch\200_CombatShouts\EndangeredE_1.ogg", "NormalWatch\200_CombatShouts\EndangeredE_2.ogg", "NormalWatch\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"NormalWatch\150_Reporting\EnemyDetected_1.ogg", "NormalWatch\150_Reporting\EnemyDetected_2.ogg", "NormalWatch\150_Reporting\EnemyDetected_3.ogg", "NormalWatch\150_Reporting\EnemyDetected_4.ogg", "NormalWatch\150_Reporting\EnemyDetected_5.ogg", "NormalWatch\150_Reporting\EnemyDetected_6.ogg", "NormalWatch\150_Reporting\EnemyDetected_7.ogg", "NormalWatch\150_Reporting\EnemyDetected_8.ogg", "NormalWatch\150_Reporting\EnemyDetected_9.ogg", "NormalWatch\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"NormalWatch\015_Targeting\Engage_1.ogg", "NormalWatch\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"NormalWatch\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"NormalWatch\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"NormalWatch\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"NormalWatch\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"NormalWatch\150_Reporting\ExplosiveDetected_1.ogg", "NormalWatch\150_Reporting\ExplosiveDetected_2.ogg", "NormalWatch\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"NormalWatch\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"NormalWatch\020_Names\Fahim.ogg"};
			FallBack[] = {"NormalWatch\100_Commands\FallBack.ogg"};
			fifteen[] = {"NormalWatch\025_Numbers\fifteen.ogg"};
			fifty[] = {"NormalWatch\025_Numbers\fifty.ogg"};
			Fire[] = {"NormalWatch\015_Targeting\Fire_1.ogg", "NormalWatch\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"NormalWatch\100_Commands\FireAtWill.ogg"};
			five[] = {"NormalWatch\025_Numbers\five.ogg"};
			FlankLeft[] = {"NormalWatch\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"NormalWatch\100_Commands\FlankRight.ogg"};
			Flares[] = {"NormalWatch\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"NormalWatch\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"NormalWatch\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"NormalWatch\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"NormalWatch\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"NormalWatch\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"NormalWatch\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"NormalWatch\100_Commands\FormFile.ogg"};
			FormLine[] = {"NormalWatch\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"NormalWatch\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"NormalWatch\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"NormalWatch\100_Commands\FormVee.ogg"};
			FormWedge[] = {"NormalWatch\100_Commands\FormWedge.ogg"};
			forty[] = {"NormalWatch\025_Numbers\forty.ogg"};
			four[] = {"NormalWatch\025_Numbers\four.ogg"};
			fourteen[] = {"NormalWatch\025_Numbers\fourteen.ogg"};
			Fox[] = {"NormalWatch\020_Names\Fox.ogg"};
			foxtrot[] = {"NormalWatch\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"NormalWatch\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"NormalWatch\100_Commands\FreeToEngage.ogg"};
			front[] = {"NormalWatch\DirectionRelative1\front_1.ogg", "NormalWatch\DirectionRelative1\front_2.ogg"};
			Frost[] = {"NormalWatch\020_Names\Frost.ogg"};
			FuelCritical[] = {"NormalWatch\140_Com_Status\FuelCritical_1.ogg", "NormalWatch\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"NormalWatch\140_Com_Status\FuelLow_1.ogg", "NormalWatch\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"NormalWatch\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"NormalWatch\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"NormalWatch\999_FX\FXDeath_1.ogg", "NormalWatch\999_FX\FXDeath_2.ogg", "NormalWatch\999_FX\FXDeath_3.ogg", "NormalWatch\999_FX\FXDeath_4.ogg", "NormalWatch\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"NormalWatch\999_FX\FXDrowning_1.ogg", "NormalWatch\999_FX\FXDrowning_2.ogg", "NormalWatch\999_FX\FXDrowning_3.ogg", "NormalWatch\999_FX\FXDrowning_4.ogg", "NormalWatch\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"NormalWatch\999_FX\FXEffort_1.ogg", "NormalWatch\999_FX\FXEffort_2.ogg", "NormalWatch\999_FX\FXEffort_3.ogg", "NormalWatch\999_FX\FXEffort_4.ogg", "NormalWatch\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"NormalWatch\999_FX\FXHit_1.ogg", "NormalWatch\999_FX\FXHit_2.ogg", "NormalWatch\999_FX\FXHit_3.ogg", "NormalWatch\999_FX\FXHit_4.ogg", "NormalWatch\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"NormalWatch\999_FX\FXHurt_1.ogg", "NormalWatch\999_FX\FXHurt_2.ogg", "NormalWatch\999_FX\FXHurt_3.ogg", "NormalWatch\999_FX\FXHurt_4.ogg", "NormalWatch\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"NormalWatch\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"NormalWatch\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"NormalWatch\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"NormalWatch\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"NormalWatch\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"NormalWatch\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"NormalWatch\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"NormalWatch\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"NormalWatch\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"NormalWatch\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"NormalWatch\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"NormalWatch\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"NormalWatch\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"NormalWatch\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"NormalWatch\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"NormalWatch\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"NormalWatch\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"NormalWatch\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"NormalWatch\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"NormalWatch\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"NormalWatch\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"NormalWatch\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"NormalWatch\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"NormalWatch\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"NormalWatch\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"NormalWatch\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"NormalWatch\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"NormalWatch\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"NormalWatch\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"NormalWatch\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"NormalWatch\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"NormalWatch\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"NormalWatch\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"NormalWatch\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"NormalWatch\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"NormalWatch\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"NormalWatch\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"NormalWatch\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"NormalWatch\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"NormalWatch\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"NormalWatch\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"NormalWatch\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"NormalWatch\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"NormalWatch\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"NormalWatch\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"NormalWatch\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"NormalWatch\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"NormalWatch\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"NormalWatch\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"NormalWatch\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"NormalWatch\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"NormalWatch\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"NormalWatch\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"NormalWatch\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"NormalWatch\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"NormalWatch\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"NormalWatch\100_Commands\GetSupport.ogg"};
			Ghost[] = {"NormalWatch\020_Names\Ghost.ogg"};
			Givens[] = {"NormalWatch\020_Names\Givens.ogg"};
			golf[] = {"NormalWatch\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"NormalWatch\100_Commands\GoProne_1.ogg", "NormalWatch\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"NormalWatch\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"NormalWatch\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"NormalWatch\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"NormalWatch\035_NumbersGrid\grid_eight_1.ogg", "NormalWatch\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"NormalWatch\035_NumbersGrid\grid_eight_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"NormalWatch\035_NumbersGrid\grid_eight_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"NormalWatch\035_NumbersGrid\grid_five_1.ogg", "NormalWatch\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"NormalWatch\035_NumbersGrid\grid_five_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"NormalWatch\035_NumbersGrid\grid_five_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"NormalWatch\035_NumbersGrid\grid_four_1.ogg", "NormalWatch\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"NormalWatch\035_NumbersGrid\grid_four_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"NormalWatch\035_NumbersGrid\grid_four_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"NormalWatch\035_NumbersGrid\grid_move_to_eight_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"NormalWatch\035_NumbersGrid\grid_move_to_five_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"NormalWatch\035_NumbersGrid\grid_move_to_four_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"NormalWatch\035_NumbersGrid\grid_move_to_nine_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"NormalWatch\035_NumbersGrid\grid_move_to_one_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"NormalWatch\035_NumbersGrid\grid_move_to_seven_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"NormalWatch\035_NumbersGrid\grid_move_to_six_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"NormalWatch\035_NumbersGrid\grid_move_to_three_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"NormalWatch\035_NumbersGrid\grid_move_to_two_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"NormalWatch\035_NumbersGrid\grid_move_to_zero_1.ogg", "NormalWatch\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"NormalWatch\035_NumbersGrid\grid_nine_1.ogg", "NormalWatch\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"NormalWatch\035_NumbersGrid\grid_nine_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"NormalWatch\035_NumbersGrid\grid_nine_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"NormalWatch\035_NumbersGrid\grid_one_1.ogg", "NormalWatch\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"NormalWatch\035_NumbersGrid\grid_one_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"NormalWatch\035_NumbersGrid\grid_one_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"NormalWatch\035_NumbersGrid\grid_seven_1.ogg", "NormalWatch\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"NormalWatch\035_NumbersGrid\grid_seven_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"NormalWatch\035_NumbersGrid\grid_seven_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"NormalWatch\035_NumbersGrid\grid_six_1.ogg", "NormalWatch\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"NormalWatch\035_NumbersGrid\grid_six_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"NormalWatch\035_NumbersGrid\grid_six_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"NormalWatch\035_NumbersGrid\grid_three_1.ogg", "NormalWatch\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"NormalWatch\035_NumbersGrid\grid_three_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"NormalWatch\035_NumbersGrid\grid_three_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"NormalWatch\035_NumbersGrid\grid_two_1.ogg", "NormalWatch\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"NormalWatch\035_NumbersGrid\grid_two_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"NormalWatch\035_NumbersGrid\grid_two_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"NormalWatch\035_NumbersGrid\grid_zero_1.ogg", "NormalWatch\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"NormalWatch\035_NumbersGrid\grid_zero_2_1.ogg", "NormalWatch\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"NormalWatch\035_NumbersGrid\grid_zero_3_1.ogg", "NormalWatch\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"NormalWatch\020_Names\Habibi.ogg"};
			Halt[] = {"NormalWatch\100_Commands\Halt.ogg"};
			Hardy[] = {"NormalWatch\020_Names\Hardy.ogg"};
			Hawkins[] = {"NormalWatch\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"NormalWatch\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"NormalWatch\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"NormalWatch\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"NormalWatch\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"NormalWatch\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"NormalWatch\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"NormalWatch\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"NormalWatch\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"NormalWatch\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"NormalWatch\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"NormalWatch\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"NormalWatch\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"NormalWatch\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"NormalWatch\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"NormalWatch\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"NormalWatch\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"NormalWatch\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"NormalWatch\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"NormalWatch\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"NormalWatch\025_Numbers\hundred.ogg"};
			IAmReady[] = {"NormalWatch\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"NormalWatch\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"NormalWatch\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"NormalWatch\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"NormalWatch\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"NormalWatch\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"NormalWatch\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"NormalWatch\020_Names\Jackson.ogg"};
			James[] = {"NormalWatch\020_Names\James.ogg"};
			Jawadi[] = {"NormalWatch\020_Names\Jawadi.ogg"};
			Jester[] = {"NormalWatch\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"NormalWatch\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"NormalWatch\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"NormalWatch\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"NormalWatch\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"NormalWatch\020_Names\Kerry.ogg"};
			kilo[] = {"NormalWatch\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"NormalWatch\020_Names\Korneedler.ogg"};
			Kouris[] = {"NormalWatch\020_Names\Kouris.ogg"};
			Kushan[] = {"NormalWatch\020_Names\Kushan.ogg"};
			Lacey[] = {"NormalWatch\020_Names\Lacey.ogg"};
			Larkin[] = {"NormalWatch\020_Names\Larkin.ogg"};
			left[] = {"NormalWatch\DirectionRelative1\left_1.ogg", "NormalWatch\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"NormalWatch\020_Names\Leventis.ogg"};
			Levine[] = {"NormalWatch\020_Names\Levine.ogg"};
			LightThatFire[] = {"NormalWatch\100_Commands\LightThatFire.ogg"};
			lima[] = {"NormalWatch\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"NormalWatch\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"NormalWatch\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"NormalWatch\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"NormalWatch\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"NormalWatch\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"NormalWatch\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"NormalWatch\020_Names\Lopez.ogg"};
			ManDownE[] = {"NormalWatch\140_Com_Status\ManDownE_1.ogg", "NormalWatch\140_Com_Status\ManDownE_2.ogg", "NormalWatch\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"NormalWatch\100_Commands\ManualFire_1.ogg", "NormalWatch\100_Commands\ManualFire_2.ogg", "NormalWatch\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"NormalWatch\020_Names\Markos.ogg"};
			Martinez[] = {"NormalWatch\020_Names\Martinez.ogg"};
			Masood[] = {"NormalWatch\020_Names\Masood.ogg"};
			McKay[] = {"NormalWatch\020_Names\McKay.ogg"};
			McKendrick[] = {"NormalWatch\020_Names\McKendrick.ogg"};
			mgun[] = {"NormalWatch\005_Weapons\mgun.ogg"};
			mike[] = {"NormalWatch\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"NormalWatch\020_Names\Miller.ogg"};
			MineDetected[] = {"NormalWatch\150_Reporting\MineDetected_1.ogg", "NormalWatch\150_Reporting\MineDetected_2.ogg", "NormalWatch\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"NormalWatch\005_Weapons\missiles.ogg"};
			move_dist100[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"NormalWatch\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"NormalWatch\070_MoveDirectionRelative1\moveBack_1.ogg", "NormalWatch\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"NormalWatch\070_MoveDirectionRelative1\moveLeft_1.ogg", "NormalWatch\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"NormalWatch\070_MoveDirectionRelative1\moveRight_1.ogg", "NormalWatch\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"NormalWatch\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"NormalWatch\070_MoveDirectionRelative1\moveUp_1.ogg", "NormalWatch\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"NormalWatch\020_Names\Nazari.ogg"};
			Negative[] = {"NormalWatch\130_Com_Reply\Negative_1.ogg", "NormalWatch\130_Com_Reply\Negative_2.ogg", "NormalWatch\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"NormalWatch\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"NormalWatch\020_Names\Nichols.ogg"};
			Nicolo[] = {"NormalWatch\020_Names\Nicolo.ogg"};
			Nikas[] = {"NormalWatch\020_Names\Nikas.ogg"};
			nine[] = {"NormalWatch\025_Numbers\nine.ogg"};
			nineteen[] = {"NormalWatch\025_Numbers\nineteen.ogg"};
			ninety[] = {"NormalWatch\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"NormalWatch\130_Com_Reply\NoCanDo_1.ogg", "NormalWatch\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"NormalWatch\DirectionCompass1\north_1.ogg", "NormalWatch\DirectionCompass1\north_2.ogg"};
			northEast[] = {"NormalWatch\DirectionCompass1\northEast_1.ogg", "NormalWatch\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"NormalWatch\020_Names\Northgate.ogg"};
			northWest[] = {"NormalWatch\DirectionCompass1\northWest_1.ogg", "NormalWatch\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"NormalWatch\015_Targeting\NoTarget_1.ogg", "NormalWatch\015_Targeting\NoTarget_2.ogg"};
			november[] = {"NormalWatch\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"NormalWatch\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"NormalWatch\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"NormalWatch\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"NormalWatch\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"NormalWatch\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"NormalWatch\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"NormalWatch\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"NormalWatch\020_Names\OConnor.ogg"};
			one[] = {"NormalWatch\025_Numbers\one.ogg"};
			OnTheMove[] = {"NormalWatch\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"NormalWatch\130_Com_Reply\OnTheWay_1.ogg", "NormalWatch\130_Com_Reply\OnTheWay_2.ogg", "NormalWatch\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"NormalWatch\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"NormalWatch\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"NormalWatch\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"NormalWatch\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"NormalWatch\140_Com_Status\OutOfFirstAidKits_1.ogg", "NormalWatch\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"NormalWatch\020_Names\Panas.ogg"};
			papa[] = {"NormalWatch\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"NormalWatch\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"NormalWatch\020_Names\Patterson.ogg"};
			Petros[] = {"NormalWatch\020_Names\Petros.ogg"};
			PointersOff[] = {"NormalWatch\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"NormalWatch\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"NormalWatch\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"NormalWatch\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"NormalWatch\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"NormalWatch\100_Commands\RallyUp.ogg"};
			Razer[] = {"NormalWatch\020_Names\Razer.ogg"};
			Ready[] = {"NormalWatch\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"NormalWatch\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"NormalWatch\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"NormalWatch\100_Commands\Rearm.ogg"};
			redTeam[] = {"NormalWatch\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"NormalWatch\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"NormalWatch\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"NormalWatch\100_Commands\Regroup.ogg"};
			Relax[] = {"NormalWatch\100_Commands\Relax.ogg"};
			ReloadingE[] = {"NormalWatch\200_CombatShouts\ReloadingE_1.ogg", "NormalWatch\200_CombatShouts\ReloadingE_2.ogg", "NormalWatch\200_CombatShouts\ReloadingE_3.ogg", "NormalWatch\200_CombatShouts\ReloadingE_4.ogg", "NormalWatch\200_CombatShouts\ReloadingE_5.ogg", "NormalWatch\200_CombatShouts\ReloadingE_6.ogg", "NormalWatch\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"NormalWatch\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"NormalWatch\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"NormalWatch\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"NormalWatch\DirectionRelative3\reportBack_1.ogg", "NormalWatch\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"NormalWatch\DirectionRelative3\reportFront_1.ogg", "NormalWatch\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"NormalWatch\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"NormalWatch\DirectionRelative3\reportLeft_1.ogg", "NormalWatch\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"NormalWatch\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"NormalWatch\DirectionRelative3\reportRight_1.ogg", "NormalWatch\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"NormalWatch\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"NormalWatch\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"NormalWatch\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"NormalWatch\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"NormalWatch\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"NormalWatch\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"NormalWatch\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"NormalWatch\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"NormalWatch\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"NormalWatch\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"NormalWatch\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"NormalWatch\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"NormalWatch\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"NormalWatch\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"NormalWatch\020_Names\Reynolds.ogg"};
			right[] = {"NormalWatch\DirectionRelative1\right_1.ogg", "NormalWatch\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"NormalWatch\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"NormalWatch\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"NormalWatch\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"NormalWatch\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"NormalWatch\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"NormalWatch\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"NormalWatch\020_Names\Ryan.ogg"};
			sabot[] = {"NormalWatch\005_Weapons\sabot.ogg"};
			Safe[] = {"NormalWatch\100_Commands\Safe_1.ogg", "NormalWatch\100_Commands\Safe_2.ogg"};
			Samaras[] = {"NormalWatch\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"NormalWatch\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"NormalWatch\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"NormalWatch\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"NormalWatch\200_CombatShouts\ScreamingE_1.ogg", "NormalWatch\200_CombatShouts\ScreamingE_2.ogg", "NormalWatch\200_CombatShouts\ScreamingE_3.ogg", "NormalWatch\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"NormalWatch\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"NormalWatch\100_Commands\SetTheTimer.ogg"};
			seven[] = {"NormalWatch\025_Numbers\seven.ogg"};
			seventeen[] = {"NormalWatch\025_Numbers\seventeen.ogg"};
			seventy[] = {"NormalWatch\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"NormalWatch\020_Names\Siddiqi.ogg"};
			sierra[] = {"NormalWatch\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"NormalWatch\100_Commands\Silence.ogg"};
			Sitrep[] = {"NormalWatch\120_Com_Ask\Sitrep.ogg"};
			six[] = {"NormalWatch\025_Numbers\six.ogg"};
			sixteen[] = {"NormalWatch\025_Numbers\sixteen.ogg"};
			sixty[] = {"NormalWatch\025_Numbers\sixty.ogg"};
			Snake[] = {"NormalWatch\020_Names\Snake.ogg"};
			south[] = {"NormalWatch\DirectionCompass1\south_1.ogg", "NormalWatch\DirectionCompass1\south_2.ogg"};
			southEast[] = {"NormalWatch\DirectionCompass1\southEast_1.ogg", "NormalWatch\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"NormalWatch\DirectionCompass1\southWest_1.ogg", "NormalWatch\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"NormalWatch\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"NormalWatch\020_Names\Stavrou.ogg"};
			StayAlert[] = {"NormalWatch\100_Commands\StayAlert.ogg"};
			StayBack[] = {"NormalWatch\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"NormalWatch\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"NormalWatch\100_Commands\StayLow.ogg"};
			Stop[] = {"NormalWatch\100_Commands\Stop.ogg"};
			Stranger[] = {"NormalWatch\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"NormalWatch\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"NormalWatch\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"NormalWatch\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"NormalWatch\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"NormalWatch\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"NormalWatch\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"NormalWatch\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"NormalWatch\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"NormalWatch\130_Com_Reply\Suppressing_1.ogg", "NormalWatch\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"NormalWatch\200_CombatShouts\SuppressingE_1.ogg", "NormalWatch\200_CombatShouts\SuppressingE_2.ogg", "NormalWatch\200_CombatShouts\SuppressingE_3.ogg", "NormalWatch\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"NormalWatch\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"NormalWatch\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"NormalWatch\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"NormalWatch\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"NormalWatch\020_Names\Sykes.ogg"};
			TakeCover[] = {"NormalWatch\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"NormalWatch\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"NormalWatch\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"NormalWatch\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"NormalWatch\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"NormalWatch\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"NormalWatch\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"NormalWatch\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"NormalWatch\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"NormalWatch\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"NormalWatch\020_Names\Tanny.ogg"};
			Target[] = {"NormalWatch\015_Targeting\Target_1.ogg", "NormalWatch\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"NormalWatch\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"NormalWatch\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"NormalWatch\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"NormalWatch\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"NormalWatch\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"NormalWatch\020_Names\Taylor.ogg"};
			ten[] = {"NormalWatch\025_Numbers\ten.ogg"};
			Thanos[] = {"NormalWatch\020_Names\Thanos.ogg"};
			thirteen[] = {"NormalWatch\025_Numbers\thirteen.ogg"};
			thirty[] = {"NormalWatch\025_Numbers\thirty.ogg"};
			three[] = {"NormalWatch\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"NormalWatch\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"NormalWatch\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"NormalWatch\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"NormalWatch\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"NormalWatch\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"NormalWatch\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"NormalWatch\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"NormalWatch\025_Numbers\twelve.ogg"};
			twenty[] = {"NormalWatch\025_Numbers\twenty.ogg"};
			two[] = {"NormalWatch\025_Numbers\two.ogg"};
			UnderFireE[] = {"NormalWatch\200_CombatShouts\UnderFireE_1.ogg", "NormalWatch\200_CombatShouts\UnderFireE_2.ogg", "NormalWatch\200_CombatShouts\UnderFireE_3.ogg", "NormalWatch\200_CombatShouts\UnderFireE_4.ogg", "NormalWatch\200_CombatShouts\UnderFireE_5.ogg", "NormalWatch\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"NormalWatch\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"NormalWatch\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"NormalWatch\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"NormalWatch\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"NormalWatch\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"NormalWatch\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"NormalWatch\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"NormalWatch\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"NormalWatch\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"NormalWatch\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"NormalWatch\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"NormalWatch\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"NormalWatch\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"NormalWatch\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"NormalWatch\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"NormalWatch\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"NormalWatch\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"NormalWatch\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"NormalWatch\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"NormalWatch\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"NormalWatch\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"NormalWatch\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"NormalWatch\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"NormalWatch\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"NormalWatch\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"NormalWatch\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"NormalWatch\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"NormalWatch\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"NormalWatch\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"NormalWatch\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"NormalWatch\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"NormalWatch\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"NormalWatch\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"NormalWatch\010_Vehicles\veh_infantry_p_1.ogg", "NormalWatch\010_Vehicles\veh_infantry_p_2.ogg", "NormalWatch\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"NormalWatch\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"NormalWatch\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"NormalWatch\010_Vehicles\veh_infantry_s_1.ogg", "NormalWatch\010_Vehicles\veh_infantry_s_2.ogg", "NormalWatch\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"NormalWatch\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"NormalWatch\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"NormalWatch\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"NormalWatch\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"NormalWatch\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"NormalWatch\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"NormalWatch\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"NormalWatch\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"NormalWatch\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"NormalWatch\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"NormalWatch\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"NormalWatch\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"NormalWatch\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"NormalWatch\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"NormalWatch\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"NormalWatch\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"NormalWatch\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"NormalWatch\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"NormalWatch\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"NormalWatch\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"NormalWatch\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"NormalWatch\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"NormalWatch\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"NormalWatch\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"NormalWatch\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"NormalWatch\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"NormalWatch\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"NormalWatch\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"NormalWatch\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"NormalWatch\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"NormalWatch\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"NormalWatch\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"NormalWatch\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"NormalWatch\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"NormalWatch\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"NormalWatch\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"NormalWatch\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"NormalWatch\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"NormalWatch\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"NormalWatch\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"NormalWatch\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"NormalWatch\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"NormalWatch\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"NormalWatch\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"NormalWatch\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"NormalWatch\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"NormalWatch\100_Commands\VehBackward_1.ogg", "NormalWatch\100_Commands\VehBackward_2.ogg", "NormalWatch\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"NormalWatch\100_Commands\VehFast_1.ogg", "NormalWatch\100_Commands\VehFast_2.ogg", "NormalWatch\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"NormalWatch\100_Commands\VehForward_1.ogg", "NormalWatch\100_Commands\VehForward_2.ogg", "NormalWatch\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"NormalWatch\100_Commands\VehLeft_1.ogg", "NormalWatch\100_Commands\VehLeft_2.ogg", "NormalWatch\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"NormalWatch\100_Commands\VehRight_1.ogg", "NormalWatch\100_Commands\VehRight_2.ogg", "NormalWatch\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"NormalWatch\100_Commands\VehSlow_1.ogg", "NormalWatch\100_Commands\VehSlow_2.ogg", "NormalWatch\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"NormalWatch\100_Commands\VehStop_1.ogg", "NormalWatch\100_Commands\VehStop_2.ogg", "NormalWatch\100_Commands\VehStop_3.ogg"};
			victor[] = {"NormalWatch\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"NormalWatch\020_Names\Viper.ogg"};
			Waiting[] = {"NormalWatch\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"NormalWatch\020_Names\Walker.ogg"};
			Wardak[] = {"NormalWatch\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"NormalWatch\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"NormalWatch\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"NormalWatch\140_Com_Status\WeGotAManDownE_1.ogg", "NormalWatch\140_Com_Status\WeGotAManDownE_2.ogg", "NormalWatch\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"NormalWatch\140_Com_Status\WeLostOneE_1.ogg", "NormalWatch\140_Com_Status\WeLostOneE_2.ogg", "NormalWatch\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"NormalWatch\DirectionCompass1\west_1.ogg", "NormalWatch\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"NormalWatch\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"NormalWatch\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"NormalWatch\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"NormalWatch\200_CombatShouts\WitnessKilledE_1.ogg", "NormalWatch\200_CombatShouts\WitnessKilledE_2.ogg", "NormalWatch\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"NormalWatch\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"NormalWatch\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"NormalWatch\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"NormalWatch\020_Names\Yousuf.ogg"};
			zero[] = {"NormalWatch\025_Numbers\zero.ogg"};
			zulu[] = {"NormalWatch\080_MoveAlphabet\zulu.ogg"};
		};
		class Stealth: Normal
		{
			__1[] = {"Stealth\Misc\__1.ogg"};
			__10[] = {"Stealth\Misc\__10.ogg"};
			__11[] = {"Stealth\Misc\__11.ogg"};
			__12[] = {"Stealth\Misc\__12.ogg"};
			__13[] = {"Stealth\Misc\__13.ogg"};
			__14[] = {"Stealth\Misc\__14.ogg"};
			__15[] = {"Stealth\Misc\__15.ogg"};
			__1_1[] = {"Stealth\Combat\__1_1.ogg"};
			__2[] = {"Stealth\Misc\__2.ogg"};
			__2_1[] = {"Stealth\Misc\__2_1.ogg"};
			__3[] = {"Stealth\Misc\__3.ogg"};
			__4[] = {"Stealth\Misc\__4.ogg"};
			__4_CMPS[] = {"Stealth\Misc\__4_CMPS.ogg"};
			__5[] = {"Stealth\Misc\__5.ogg"};
			__6[] = {"Stealth\Misc\__6.ogg"};
			__6_3[] = {"Stealth\Misc\__6_3.ogg"};
			__6_ABS[] = {"Stealth\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"Stealth\Misc\__6_CMPS.ogg"};
			__7[] = {"Stealth\Misc\__7.ogg"};
			__7_CLCK[] = {"Stealth\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"Stealth\Misc\__7_CMPS.ogg"};
			__8[] = {"Stealth\Misc\__8.ogg"};
			__9[] = {"Stealth\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"Stealth\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"Stealth\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"Stealth\020_Names\Adams.ogg"};
			Advance[] = {"Stealth\100_Commands\Advance.ogg"};
			alpha[] = {"Stealth\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"Stealth\020_Names\Amin.ogg"};
			AmmoCritical[] = {"Stealth\140_Com_Status\AmmoCritical_1.ogg", "Stealth\140_Com_Status\AmmoCritical_2.ogg", "Stealth\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"Stealth\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"Stealth\020_Names\Anthis.ogg"};
			AreaClear[] = {"Stealth\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"Stealth\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"Stealth\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"Stealth\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"Stealth\DirectionRelative2\at1_1.ogg", "Stealth\DirectionRelative2\at1_2.ogg"};
			at10[] = {"Stealth\DirectionRelative2\at10_1.ogg", "Stealth\DirectionRelative2\at10_2.ogg"};
			at11[] = {"Stealth\DirectionRelative2\at11_1.ogg", "Stealth\DirectionRelative2\at11_2.ogg"};
			at12[] = {"Stealth\DirectionRelative2\at12_1.ogg", "Stealth\DirectionRelative2\at12_2.ogg"};
			at2[] = {"Stealth\DirectionRelative2\at2_1.ogg", "Stealth\DirectionRelative2\at2_2.ogg"};
			at3[] = {"Stealth\DirectionRelative2\at3_1.ogg", "Stealth\DirectionRelative2\at3_2.ogg"};
			at4[] = {"Stealth\DirectionRelative2\at4_1.ogg", "Stealth\DirectionRelative2\at4_2.ogg"};
			at5[] = {"Stealth\DirectionRelative2\at5_1.ogg", "Stealth\DirectionRelative2\at5_2.ogg"};
			at6[] = {"Stealth\DirectionRelative2\at6_1.ogg", "Stealth\DirectionRelative2\at6_2.ogg"};
			at7[] = {"Stealth\DirectionRelative2\at7_1.ogg", "Stealth\DirectionRelative2\at7_2.ogg"};
			at8[] = {"Stealth\DirectionRelative2\at8_1.ogg", "Stealth\DirectionRelative2\at8_2.ogg"};
			at9[] = {"Stealth\DirectionRelative2\at9_1.ogg", "Stealth\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"Stealth\015_Targeting\Attack_1.ogg", "Stealth\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"Stealth\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"Stealth\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"Stealth\DirectionRelative1\back_1.ogg", "Stealth\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"Stealth\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"Stealth\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"Stealth\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"Stealth\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"Stealth\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"Stealth\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"Stealth\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"Stealth\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"Stealth\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"Stealth\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"Stealth\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"Stealth\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"Stealth\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"Stealth\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"Stealth\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"Stealth\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"Stealth\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"Stealth\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"Stealth\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"Stealth\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"Stealth\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"Stealth\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"Stealth\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"Stealth\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"Stealth\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"Stealth\020_Names\Bennett.ogg"};
			blueTeam[] = {"Stealth\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"Stealth\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"Stealth\150_Reporting\BombDetected_1.ogg", "Stealth\150_Reporting\BombDetected_2.ogg", "Stealth\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"Stealth\005_Weapons\Bombs.ogg"};
			bravo[] = {"Stealth\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"Stealth\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"Stealth\100_Commands\CancelManualFire_1.ogg", "Stealth\100_Commands\CancelManualFire_2.ogg", "Stealth\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"Stealth\015_Targeting\CancelTarget_1.ogg", "Stealth\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"Stealth\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"Stealth\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"Stealth\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"Stealth\130_Com_Reply\CannotComply_1.ogg", "Stealth\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"Stealth\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"Stealth\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"Stealth\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"Stealth\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"Stealth\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"Stealth\100_Commands\CeaseFire_1.ogg", "Stealth\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"Stealth\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"Stealth\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"Stealth\200_CombatShouts\CheeringE_1.ogg", "Stealth\200_CombatShouts\CheeringE_2.ogg", "Stealth\200_CombatShouts\CheeringE_3.ogg", "Stealth\200_CombatShouts\CheeringE_4.ogg", "Stealth\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"Stealth\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"Stealth\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"Stealth\200_CombatShouts\CombatGenericE_1.ogg", "Stealth\200_CombatShouts\CombatGenericE_2.ogg", "Stealth\200_CombatShouts\CombatGenericE_3.ogg", "Stealth\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"Stealth\100_Commands\CombatOpenFire_1.ogg", "Stealth\100_Commands\CombatOpenFire_2.ogg", "Stealth\100_Commands\CombatOpenFire_3.ogg", "Stealth\100_Commands\CombatOpenFire_4.ogg", "Stealth\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"Stealth\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"Stealth\130_Com_Reply\Confirmation1_1.ogg", "Stealth\130_Com_Reply\Confirmation1_2.ogg", "Stealth\130_Com_Reply\Confirmation1_3.ogg", "Stealth\130_Com_Reply\Confirmation1_4.ogg", "Stealth\130_Com_Reply\Confirmation1_5.ogg", "Stealth\130_Com_Reply\Confirmation1_6.ogg", "Stealth\130_Com_Reply\Confirmation1_7.ogg", "Stealth\130_Com_Reply\Confirmation1_8.ogg", "Stealth\130_Com_Reply\Confirmation1_9.ogg", "Stealth\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"Stealth\130_Com_Reply\Confirmation2_1.ogg", "Stealth\130_Com_Reply\Confirmation2_2.ogg", "Stealth\130_Com_Reply\Confirmation2_3.ogg", "Stealth\130_Com_Reply\Confirmation2_4.ogg", "Stealth\130_Com_Reply\Confirmation2_5.ogg", "Stealth\130_Com_Reply\Confirmation2_6.ogg", "Stealth\130_Com_Reply\Confirmation2_7.ogg", "Stealth\130_Com_Reply\Confirmation2_8.ogg", "Stealth\130_Com_Reply\Confirmation2_9.ogg", "Stealth\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"Stealth\150_Reporting\Contact_1.ogg", "Stealth\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"Stealth\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"Stealth\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"Stealth\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"Stealth\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"Stealth\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"Stealth\020_Names\Costa.ogg"};
			CoveringE[] = {"Stealth\200_CombatShouts\CoveringE_1.ogg", "Stealth\200_CombatShouts\CoveringE_2.ogg", "Stealth\200_CombatShouts\CoveringE_3.ogg", "Stealth\200_CombatShouts\CoveringE_4.ogg", "Stealth\200_CombatShouts\CoveringE_5.ogg", "Stealth\200_CombatShouts\CoveringE_6.ogg", "Stealth\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"Stealth\200_CombatShouts\CoverMeE_1.ogg", "Stealth\200_CombatShouts\CoverMeE_2.ogg", "Stealth\200_CombatShouts\CoverMeE_3.ogg", "Stealth\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"Stealth\140_Com_Status\CriticalDamage_1.ogg", "Stealth\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"Stealth\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"Stealth\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"Stealth\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"Stealth\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"Stealth\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"Stealth\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"Stealth\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"Stealth\100_Commands\Disengage.ogg"};
			Dismount[] = {"Stealth\100_Commands\Dismount_1.ogg", "Stealth\100_Commands\Dismount_2.ogg"};
			dist100[] = {"Stealth\DistanceAbsolute1\dist100_1.ogg", "Stealth\DistanceAbsolute1\dist100_2.ogg", "Stealth\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"Stealth\DistanceAbsolute1\dist1000_1.ogg", "Stealth\DistanceAbsolute1\dist1000_2.ogg", "Stealth\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"Stealth\DistanceAbsolute1\dist1500_1.ogg", "Stealth\DistanceAbsolute1\dist1500_2.ogg", "Stealth\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"Stealth\DistanceAbsolute1\dist200_1.ogg", "Stealth\DistanceAbsolute1\dist200_2.ogg", "Stealth\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"Stealth\DistanceAbsolute1\dist2000_1.ogg", "Stealth\DistanceAbsolute1\dist2000_2.ogg", "Stealth\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"Stealth\DistanceAbsolute1\dist2500_1.ogg", "Stealth\DistanceAbsolute1\dist2500_2.ogg", "Stealth\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"Stealth\DistanceAbsolute1\dist300_1.ogg", "Stealth\DistanceAbsolute1\dist300_2.ogg", "Stealth\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"Stealth\DistanceAbsolute1\dist400_1.ogg", "Stealth\DistanceAbsolute1\dist400_2.ogg", "Stealth\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"Stealth\DistanceAbsolute1\dist500_1.ogg", "Stealth\DistanceAbsolute1\dist500_2.ogg", "Stealth\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"Stealth\DistanceAbsolute1\dist600_1.ogg", "Stealth\DistanceAbsolute1\dist600_2.ogg", "Stealth\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"Stealth\DistanceAbsolute1\dist700_1.ogg", "Stealth\DistanceAbsolute1\dist700_2.ogg", "Stealth\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"Stealth\DistanceAbsolute1\dist75_1.ogg", "Stealth\DistanceAbsolute1\dist75_2.ogg", "Stealth\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"Stealth\DistanceAbsolute1\dist800_1.ogg", "Stealth\DistanceAbsolute1\dist800_2.ogg", "Stealth\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"Stealth\020_Names\Dixon.ogg"};
			dloc_base[] = {"Stealth\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"Stealth\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"Stealth\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"Stealth\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"Stealth\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"Stealth\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"Stealth\100_Commands\DropYourPack.ogg"};
			east[] = {"Stealth\DirectionCompass1\east_1.ogg", "Stealth\DirectionCompass1\east_2.ogg"};
			echo[] = {"Stealth\080_MoveAlphabet\echo.ogg"};
			eight[] = {"Stealth\025_Numbers\eight.ogg"};
			eighteen[] = {"Stealth\025_Numbers\eighteen.ogg"};
			eighty[] = {"Stealth\025_Numbers\eighty.ogg"};
			Eject[] = {"Stealth\100_Commands\Eject_1.ogg", "Stealth\100_Commands\Eject_2.ogg"};
			eleven[] = {"Stealth\025_Numbers\eleven.ogg"};
			Elias[] = {"Stealth\020_Names\Elias.ogg"};
			EndangeredE[] = {"Stealth\200_CombatShouts\EndangeredE_1.ogg", "Stealth\200_CombatShouts\EndangeredE_2.ogg", "Stealth\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"Stealth\150_Reporting\EnemyDetected_1.ogg", "Stealth\150_Reporting\EnemyDetected_2.ogg", "Stealth\150_Reporting\EnemyDetected_3.ogg", "Stealth\150_Reporting\EnemyDetected_4.ogg", "Stealth\150_Reporting\EnemyDetected_5.ogg", "Stealth\150_Reporting\EnemyDetected_6.ogg", "Stealth\150_Reporting\EnemyDetected_7.ogg", "Stealth\150_Reporting\EnemyDetected_8.ogg", "Stealth\150_Reporting\EnemyDetected_9.ogg", "Stealth\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"Stealth\015_Targeting\Engage_1.ogg", "Stealth\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"Stealth\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"Stealth\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"Stealth\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"Stealth\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"Stealth\150_Reporting\ExplosiveDetected_1.ogg", "Stealth\150_Reporting\ExplosiveDetected_2.ogg", "Stealth\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"Stealth\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"Stealth\020_Names\Fahim.ogg"};
			FallBack[] = {"Stealth\100_Commands\FallBack.ogg"};
			fifteen[] = {"Stealth\025_Numbers\fifteen.ogg"};
			fifty[] = {"Stealth\025_Numbers\fifty.ogg"};
			Fire[] = {"Stealth\015_Targeting\Fire_1.ogg", "Stealth\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"Stealth\100_Commands\FireAtWill.ogg"};
			five[] = {"Stealth\025_Numbers\five.ogg"};
			FlankLeft[] = {"Stealth\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"Stealth\100_Commands\FlankRight.ogg"};
			Flares[] = {"Stealth\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"Stealth\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"Stealth\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"Stealth\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"Stealth\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"Stealth\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"Stealth\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"Stealth\100_Commands\FormFile.ogg"};
			FormLine[] = {"Stealth\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"Stealth\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"Stealth\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"Stealth\100_Commands\FormVee.ogg"};
			FormWedge[] = {"Stealth\100_Commands\FormWedge.ogg"};
			forty[] = {"Stealth\025_Numbers\forty.ogg"};
			four[] = {"Stealth\025_Numbers\four.ogg"};
			fourteen[] = {"Stealth\025_Numbers\fourteen.ogg"};
			Fox[] = {"Stealth\020_Names\Fox.ogg"};
			foxtrot[] = {"Stealth\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"Stealth\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"Stealth\100_Commands\FreeToEngage.ogg"};
			front[] = {"Stealth\DirectionRelative1\front_1.ogg", "Stealth\DirectionRelative1\front_2.ogg"};
			Frost[] = {"Stealth\020_Names\Frost.ogg"};
			FuelCritical[] = {"Stealth\140_Com_Status\FuelCritical_1.ogg", "Stealth\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"Stealth\140_Com_Status\FuelLow_1.ogg", "Stealth\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"Stealth\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"Stealth\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"Stealth\999_FX\FXDeath_1.ogg", "Stealth\999_FX\FXDeath_2.ogg", "Stealth\999_FX\FXDeath_3.ogg", "Stealth\999_FX\FXDeath_4.ogg", "Stealth\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"Stealth\999_FX\FXDrowning_1.ogg", "Stealth\999_FX\FXDrowning_2.ogg", "Stealth\999_FX\FXDrowning_3.ogg", "Stealth\999_FX\FXDrowning_4.ogg", "Stealth\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"Stealth\999_FX\FXEffort_1.ogg", "Stealth\999_FX\FXEffort_2.ogg", "Stealth\999_FX\FXEffort_3.ogg", "Stealth\999_FX\FXEffort_4.ogg", "Stealth\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"Stealth\999_FX\FXHit_1.ogg", "Stealth\999_FX\FXHit_2.ogg", "Stealth\999_FX\FXHit_3.ogg", "Stealth\999_FX\FXHit_4.ogg", "Stealth\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"Stealth\999_FX\FXHurt_1.ogg", "Stealth\999_FX\FXHurt_2.ogg", "Stealth\999_FX\FXHurt_3.ogg", "Stealth\999_FX\FXHurt_4.ogg", "Stealth\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"Stealth\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"Stealth\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"Stealth\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"Stealth\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"Stealth\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"Stealth\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"Stealth\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"Stealth\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"Stealth\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"Stealth\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"Stealth\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"Stealth\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"Stealth\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"Stealth\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"Stealth\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"Stealth\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"Stealth\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"Stealth\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"Stealth\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"Stealth\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"Stealth\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"Stealth\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"Stealth\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"Stealth\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"Stealth\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"Stealth\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"Stealth\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"Stealth\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"Stealth\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"Stealth\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"Stealth\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"Stealth\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"Stealth\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"Stealth\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"Stealth\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"Stealth\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"Stealth\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"Stealth\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"Stealth\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"Stealth\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"Stealth\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"Stealth\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"Stealth\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"Stealth\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"Stealth\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"Stealth\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"Stealth\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"Stealth\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"Stealth\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"Stealth\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"Stealth\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"Stealth\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"Stealth\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"Stealth\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"Stealth\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"Stealth\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"Stealth\100_Commands\GetSupport.ogg"};
			Ghost[] = {"Stealth\020_Names\Ghost.ogg"};
			Givens[] = {"Stealth\020_Names\Givens.ogg"};
			golf[] = {"Stealth\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"Stealth\100_Commands\GoProne_1.ogg", "Stealth\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"Stealth\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"Stealth\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"Stealth\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"Stealth\035_NumbersGrid\grid_eight_1.ogg", "Stealth\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"Stealth\035_NumbersGrid\grid_eight_2_1.ogg", "Stealth\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"Stealth\035_NumbersGrid\grid_eight_3_1.ogg", "Stealth\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"Stealth\035_NumbersGrid\grid_five_1.ogg", "Stealth\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"Stealth\035_NumbersGrid\grid_five_2_1.ogg", "Stealth\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"Stealth\035_NumbersGrid\grid_five_3_1.ogg", "Stealth\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"Stealth\035_NumbersGrid\grid_four_1.ogg", "Stealth\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"Stealth\035_NumbersGrid\grid_four_2_1.ogg", "Stealth\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"Stealth\035_NumbersGrid\grid_four_3_1.ogg", "Stealth\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"Stealth\035_NumbersGrid\grid_move_to_eight_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"Stealth\035_NumbersGrid\grid_move_to_five_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"Stealth\035_NumbersGrid\grid_move_to_four_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"Stealth\035_NumbersGrid\grid_move_to_nine_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"Stealth\035_NumbersGrid\grid_move_to_one_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"Stealth\035_NumbersGrid\grid_move_to_seven_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"Stealth\035_NumbersGrid\grid_move_to_six_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"Stealth\035_NumbersGrid\grid_move_to_three_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"Stealth\035_NumbersGrid\grid_move_to_two_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"Stealth\035_NumbersGrid\grid_move_to_zero_1.ogg", "Stealth\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"Stealth\035_NumbersGrid\grid_nine_1.ogg", "Stealth\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"Stealth\035_NumbersGrid\grid_nine_2_1.ogg", "Stealth\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"Stealth\035_NumbersGrid\grid_nine_3_1.ogg", "Stealth\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"Stealth\035_NumbersGrid\grid_one_1.ogg", "Stealth\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"Stealth\035_NumbersGrid\grid_one_2_1.ogg", "Stealth\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"Stealth\035_NumbersGrid\grid_one_3_1.ogg", "Stealth\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"Stealth\035_NumbersGrid\grid_seven_1.ogg", "Stealth\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"Stealth\035_NumbersGrid\grid_seven_2_1.ogg", "Stealth\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"Stealth\035_NumbersGrid\grid_seven_3_1.ogg", "Stealth\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"Stealth\035_NumbersGrid\grid_six_1.ogg", "Stealth\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"Stealth\035_NumbersGrid\grid_six_2_1.ogg", "Stealth\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"Stealth\035_NumbersGrid\grid_six_3_1.ogg", "Stealth\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"Stealth\035_NumbersGrid\grid_three_1.ogg", "Stealth\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"Stealth\035_NumbersGrid\grid_three_2_1.ogg", "Stealth\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"Stealth\035_NumbersGrid\grid_three_3_1.ogg", "Stealth\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"Stealth\035_NumbersGrid\grid_two_1.ogg", "Stealth\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"Stealth\035_NumbersGrid\grid_two_2_1.ogg", "Stealth\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"Stealth\035_NumbersGrid\grid_two_3_1.ogg", "Stealth\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"Stealth\035_NumbersGrid\grid_zero_1.ogg", "Stealth\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"Stealth\035_NumbersGrid\grid_zero_2_1.ogg", "Stealth\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"Stealth\035_NumbersGrid\grid_zero_3_1.ogg", "Stealth\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"Stealth\020_Names\Habibi.ogg"};
			Halt[] = {"Stealth\100_Commands\Halt.ogg"};
			Hardy[] = {"Stealth\020_Names\Hardy.ogg"};
			Hawkins[] = {"Stealth\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"Stealth\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"Stealth\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"Stealth\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"Stealth\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"Stealth\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"Stealth\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"Stealth\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"Stealth\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"Stealth\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"Stealth\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"Stealth\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"Stealth\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"Stealth\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"Stealth\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"Stealth\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"Stealth\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"Stealth\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"Stealth\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"Stealth\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"Stealth\025_Numbers\hundred.ogg"};
			IAmReady[] = {"Stealth\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"Stealth\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"Stealth\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"Stealth\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"Stealth\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"Stealth\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"Stealth\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"Stealth\020_Names\Jackson.ogg"};
			James[] = {"Stealth\020_Names\James.ogg"};
			Jawadi[] = {"Stealth\020_Names\Jawadi.ogg"};
			Jester[] = {"Stealth\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"Stealth\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"Stealth\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"Stealth\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"Stealth\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"Stealth\020_Names\Kerry.ogg"};
			kilo[] = {"Stealth\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"Stealth\020_Names\Korneedler.ogg"};
			Kouris[] = {"Stealth\020_Names\Kouris.ogg"};
			Kushan[] = {"Stealth\020_Names\Kushan.ogg"};
			Lacey[] = {"Stealth\020_Names\Lacey.ogg"};
			Larkin[] = {"Stealth\020_Names\Larkin.ogg"};
			left[] = {"Stealth\DirectionRelative1\left_1.ogg", "Stealth\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"Stealth\020_Names\Leventis.ogg"};
			Levine[] = {"Stealth\020_Names\Levine.ogg"};
			LightThatFire[] = {"Stealth\100_Commands\LightThatFire.ogg"};
			lima[] = {"Stealth\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"Stealth\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"Stealth\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"Stealth\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"Stealth\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"Stealth\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"Stealth\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"Stealth\020_Names\Lopez.ogg"};
			ManDownE[] = {"Stealth\140_Com_Status\ManDownE_1.ogg", "Stealth\140_Com_Status\ManDownE_2.ogg", "Stealth\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"Stealth\100_Commands\ManualFire_1.ogg", "Stealth\100_Commands\ManualFire_2.ogg", "Stealth\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"Stealth\020_Names\Markos.ogg"};
			Martinez[] = {"Stealth\020_Names\Martinez.ogg"};
			Masood[] = {"Stealth\020_Names\Masood.ogg"};
			McKay[] = {"Stealth\020_Names\McKay.ogg"};
			McKendrick[] = {"Stealth\020_Names\McKendrick.ogg"};
			mgun[] = {"Stealth\005_Weapons\mgun.ogg"};
			mike[] = {"Stealth\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"Stealth\020_Names\Miller.ogg"};
			MineDetected[] = {"Stealth\150_Reporting\MineDetected_1.ogg", "Stealth\150_Reporting\MineDetected_2.ogg", "Stealth\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"Stealth\005_Weapons\missiles.ogg"};
			move_dist100[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"Stealth\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"Stealth\070_MoveDirectionRelative1\moveBack_1.ogg", "Stealth\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"Stealth\070_MoveDirectionRelative1\moveLeft_1.ogg", "Stealth\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"Stealth\070_MoveDirectionRelative1\moveRight_1.ogg", "Stealth\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"Stealth\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"Stealth\070_MoveDirectionRelative1\moveUp_1.ogg", "Stealth\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"Stealth\020_Names\Nazari.ogg"};
			Negative[] = {"Stealth\130_Com_Reply\Negative_1.ogg", "Stealth\130_Com_Reply\Negative_2.ogg", "Stealth\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"Stealth\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"Stealth\020_Names\Nichols.ogg"};
			Nicolo[] = {"Stealth\020_Names\Nicolo.ogg"};
			Nikas[] = {"Stealth\020_Names\Nikas.ogg"};
			nine[] = {"Stealth\025_Numbers\nine.ogg"};
			nineteen[] = {"Stealth\025_Numbers\nineteen.ogg"};
			ninety[] = {"Stealth\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"Stealth\130_Com_Reply\NoCanDo_1.ogg", "Stealth\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"Stealth\DirectionCompass1\north_1.ogg", "Stealth\DirectionCompass1\north_2.ogg"};
			northEast[] = {"Stealth\DirectionCompass1\northEast_1.ogg", "Stealth\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"Stealth\020_Names\Northgate.ogg"};
			northWest[] = {"Stealth\DirectionCompass1\northWest_1.ogg", "Stealth\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"Stealth\015_Targeting\NoTarget_1.ogg", "Stealth\015_Targeting\NoTarget_2.ogg"};
			november[] = {"Stealth\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"Stealth\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"Stealth\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"Stealth\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"Stealth\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"Stealth\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"Stealth\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"Stealth\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"Stealth\020_Names\OConnor.ogg"};
			one[] = {"Stealth\025_Numbers\one.ogg"};
			OnTheMove[] = {"Stealth\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"Stealth\130_Com_Reply\OnTheWay_1.ogg", "Stealth\130_Com_Reply\OnTheWay_2.ogg", "Stealth\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"Stealth\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"Stealth\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"Stealth\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"Stealth\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"Stealth\140_Com_Status\OutOfFirstAidKits_1.ogg", "Stealth\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"Stealth\020_Names\Panas.ogg"};
			papa[] = {"Stealth\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"Stealth\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"Stealth\020_Names\Patterson.ogg"};
			Petros[] = {"Stealth\020_Names\Petros.ogg"};
			PointersOff[] = {"Stealth\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"Stealth\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"Stealth\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"Stealth\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"Stealth\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"Stealth\100_Commands\RallyUp.ogg"};
			Razer[] = {"Stealth\020_Names\Razer.ogg"};
			Ready[] = {"Stealth\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"Stealth\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"Stealth\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"Stealth\100_Commands\Rearm.ogg"};
			redTeam[] = {"Stealth\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"Stealth\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"Stealth\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"Stealth\100_Commands\Regroup.ogg"};
			Relax[] = {"Stealth\100_Commands\Relax.ogg"};
			ReloadingE[] = {"Stealth\200_CombatShouts\ReloadingE_1.ogg", "Stealth\200_CombatShouts\ReloadingE_2.ogg", "Stealth\200_CombatShouts\ReloadingE_3.ogg", "Stealth\200_CombatShouts\ReloadingE_4.ogg", "Stealth\200_CombatShouts\ReloadingE_5.ogg", "Stealth\200_CombatShouts\ReloadingE_6.ogg", "Stealth\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"Stealth\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"Stealth\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"Stealth\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"Stealth\DirectionRelative3\reportBack_1.ogg", "Stealth\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"Stealth\DirectionRelative3\reportFront_1.ogg", "Stealth\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"Stealth\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"Stealth\DirectionRelative3\reportLeft_1.ogg", "Stealth\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"Stealth\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"Stealth\DirectionRelative3\reportRight_1.ogg", "Stealth\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"Stealth\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"Stealth\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"Stealth\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"Stealth\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"Stealth\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"Stealth\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"Stealth\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"Stealth\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"Stealth\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"Stealth\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"Stealth\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"Stealth\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"Stealth\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"Stealth\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"Stealth\020_Names\Reynolds.ogg"};
			right[] = {"Stealth\DirectionRelative1\right_1.ogg", "Stealth\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"Stealth\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"Stealth\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"Stealth\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"Stealth\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"Stealth\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"Stealth\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"Stealth\020_Names\Ryan.ogg"};
			sabot[] = {"Stealth\005_Weapons\sabot.ogg"};
			Safe[] = {"Stealth\100_Commands\Safe_1.ogg", "Stealth\100_Commands\Safe_2.ogg"};
			Samaras[] = {"Stealth\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"Stealth\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"Stealth\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"Stealth\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"Stealth\200_CombatShouts\ScreamingE_1.ogg", "Stealth\200_CombatShouts\ScreamingE_2.ogg", "Stealth\200_CombatShouts\ScreamingE_3.ogg", "Stealth\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"Stealth\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"Stealth\100_Commands\SetTheTimer.ogg"};
			seven[] = {"Stealth\025_Numbers\seven.ogg"};
			seventeen[] = {"Stealth\025_Numbers\seventeen.ogg"};
			seventy[] = {"Stealth\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"Stealth\020_Names\Siddiqi.ogg"};
			sierra[] = {"Stealth\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"Stealth\100_Commands\Silence.ogg"};
			Sitrep[] = {"Stealth\120_Com_Ask\Sitrep.ogg"};
			six[] = {"Stealth\025_Numbers\six.ogg"};
			sixteen[] = {"Stealth\025_Numbers\sixteen.ogg"};
			sixty[] = {"Stealth\025_Numbers\sixty.ogg"};
			Snake[] = {"Stealth\020_Names\Snake.ogg"};
			south[] = {"Stealth\DirectionCompass1\south_1.ogg", "Stealth\DirectionCompass1\south_2.ogg"};
			southEast[] = {"Stealth\DirectionCompass1\southEast_1.ogg", "Stealth\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"Stealth\DirectionCompass1\southWest_1.ogg", "Stealth\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"Stealth\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"Stealth\020_Names\Stavrou.ogg"};
			StayAlert[] = {"Stealth\100_Commands\StayAlert.ogg"};
			StayBack[] = {"Stealth\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"Stealth\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"Stealth\100_Commands\StayLow.ogg"};
			Stop[] = {"Stealth\100_Commands\Stop.ogg"};
			Stranger[] = {"Stealth\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"Stealth\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"Stealth\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"Stealth\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"Stealth\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"Stealth\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"Stealth\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"Stealth\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"Stealth\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"Stealth\130_Com_Reply\Suppressing_1.ogg", "Stealth\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"Stealth\200_CombatShouts\SuppressingE_1.ogg", "Stealth\200_CombatShouts\SuppressingE_2.ogg", "Stealth\200_CombatShouts\SuppressingE_3.ogg", "Stealth\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"Stealth\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"Stealth\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"Stealth\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"Stealth\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"Stealth\020_Names\Sykes.ogg"};
			TakeCover[] = {"Stealth\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"Stealth\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"Stealth\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"Stealth\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"Stealth\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"Stealth\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"Stealth\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"Stealth\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"Stealth\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"Stealth\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"Stealth\020_Names\Tanny.ogg"};
			Target[] = {"Stealth\015_Targeting\Target_1.ogg", "Stealth\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"Stealth\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"Stealth\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"Stealth\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"Stealth\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"Stealth\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"Stealth\020_Names\Taylor.ogg"};
			ten[] = {"Stealth\025_Numbers\ten.ogg"};
			Thanos[] = {"Stealth\020_Names\Thanos.ogg"};
			thirteen[] = {"Stealth\025_Numbers\thirteen.ogg"};
			thirty[] = {"Stealth\025_Numbers\thirty.ogg"};
			three[] = {"Stealth\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"Stealth\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"Stealth\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"Stealth\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"Stealth\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"Stealth\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"Stealth\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"Stealth\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"Stealth\025_Numbers\twelve.ogg"};
			twenty[] = {"Stealth\025_Numbers\twenty.ogg"};
			two[] = {"Stealth\025_Numbers\two.ogg"};
			UnderFireE[] = {"Stealth\200_CombatShouts\UnderFireE_1.ogg", "Stealth\200_CombatShouts\UnderFireE_2.ogg", "Stealth\200_CombatShouts\UnderFireE_3.ogg", "Stealth\200_CombatShouts\UnderFireE_4.ogg", "Stealth\200_CombatShouts\UnderFireE_5.ogg", "Stealth\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"Stealth\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"Stealth\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"Stealth\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"Stealth\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"Stealth\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"Stealth\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"Stealth\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"Stealth\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"Stealth\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"Stealth\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"Stealth\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"Stealth\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"Stealth\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"Stealth\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"Stealth\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"Stealth\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"Stealth\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"Stealth\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"Stealth\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"Stealth\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"Stealth\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"Stealth\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"Stealth\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"Stealth\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"Stealth\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"Stealth\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"Stealth\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"Stealth\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"Stealth\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"Stealth\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"Stealth\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"Stealth\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"Stealth\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"Stealth\010_Vehicles\veh_infantry_p_1.ogg", "Stealth\010_Vehicles\veh_infantry_p_2.ogg", "Stealth\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"Stealth\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"Stealth\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"Stealth\010_Vehicles\veh_infantry_s_1.ogg", "Stealth\010_Vehicles\veh_infantry_s_2.ogg", "Stealth\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"Stealth\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"Stealth\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"Stealth\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"Stealth\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"Stealth\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"Stealth\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"Stealth\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"Stealth\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"Stealth\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"Stealth\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"Stealth\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"Stealth\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"Stealth\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"Stealth\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"Stealth\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"Stealth\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"Stealth\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"Stealth\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"Stealth\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"Stealth\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"Stealth\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"Stealth\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"Stealth\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"Stealth\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"Stealth\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"Stealth\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"Stealth\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"Stealth\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"Stealth\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"Stealth\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"Stealth\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"Stealth\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"Stealth\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"Stealth\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"Stealth\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"Stealth\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"Stealth\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"Stealth\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"Stealth\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"Stealth\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"Stealth\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"Stealth\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"Stealth\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"Stealth\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"Stealth\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"Stealth\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"Stealth\100_Commands\VehBackward_1.ogg", "Stealth\100_Commands\VehBackward_2.ogg", "Stealth\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"Stealth\100_Commands\VehFast_1.ogg", "Stealth\100_Commands\VehFast_2.ogg", "Stealth\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"Stealth\100_Commands\VehForward_1.ogg", "Stealth\100_Commands\VehForward_2.ogg", "Stealth\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"Stealth\100_Commands\VehLeft_1.ogg", "Stealth\100_Commands\VehLeft_2.ogg", "Stealth\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"Stealth\100_Commands\VehRight_1.ogg", "Stealth\100_Commands\VehRight_2.ogg", "Stealth\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"Stealth\100_Commands\VehSlow_1.ogg", "Stealth\100_Commands\VehSlow_2.ogg", "Stealth\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"Stealth\100_Commands\VehStop_1.ogg", "Stealth\100_Commands\VehStop_2.ogg", "Stealth\100_Commands\VehStop_3.ogg"};
			victor[] = {"Stealth\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"Stealth\020_Names\Viper.ogg"};
			Waiting[] = {"Stealth\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"Stealth\020_Names\Walker.ogg"};
			Wardak[] = {"Stealth\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"Stealth\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"Stealth\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"Stealth\140_Com_Status\WeGotAManDownE_1.ogg", "Stealth\140_Com_Status\WeGotAManDownE_2.ogg", "Stealth\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"Stealth\140_Com_Status\WeLostOneE_1.ogg", "Stealth\140_Com_Status\WeLostOneE_2.ogg", "Stealth\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"Stealth\DirectionCompass1\west_1.ogg", "Stealth\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"Stealth\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"Stealth\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"Stealth\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"Stealth\200_CombatShouts\WitnessKilledE_1.ogg", "Stealth\200_CombatShouts\WitnessKilledE_2.ogg", "Stealth\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"Stealth\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"Stealth\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"Stealth\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"Stealth\020_Names\Yousuf.ogg"};
			zero[] = {"Stealth\025_Numbers\zero.ogg"};
			zulu[] = {"Stealth\080_MoveAlphabet\zulu.ogg"};
		};
		class StealthEngage: Normal
		{
			__1[] = {"StealthEngage\Misc\__1.ogg"};
			__10[] = {"StealthEngage\Misc\__10.ogg"};
			__11[] = {"StealthEngage\Misc\__11.ogg"};
			__12[] = {"StealthEngage\Misc\__12.ogg"};
			__13[] = {"StealthEngage\Misc\__13.ogg"};
			__14[] = {"StealthEngage\Misc\__14.ogg"};
			__15[] = {"StealthEngage\Misc\__15.ogg"};
			__1_1[] = {"StealthEngage\Combat\__1_1.ogg"};
			__2[] = {"StealthEngage\Misc\__2.ogg"};
			__2_1[] = {"StealthEngage\Misc\__2_1.ogg"};
			__3[] = {"StealthEngage\Misc\__3.ogg"};
			__4[] = {"StealthEngage\Misc\__4.ogg"};
			__4_CMPS[] = {"StealthEngage\Misc\__4_CMPS.ogg"};
			__5[] = {"StealthEngage\Misc\__5.ogg"};
			__6[] = {"StealthEngage\Misc\__6.ogg"};
			__6_3[] = {"StealthEngage\Misc\__6_3.ogg"};
			__6_ABS[] = {"StealthEngage\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"StealthEngage\Misc\__6_CMPS.ogg"};
			__7[] = {"StealthEngage\Misc\__7.ogg"};
			__7_CLCK[] = {"StealthEngage\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"StealthEngage\Misc\__7_CMPS.ogg"};
			__8[] = {"StealthEngage\Misc\__8.ogg"};
			__9[] = {"StealthEngage\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"StealthEngage\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"StealthEngage\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"StealthEngage\020_Names\Adams.ogg"};
			Advance[] = {"StealthEngage\100_Commands\Advance.ogg"};
			alpha[] = {"StealthEngage\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"StealthEngage\020_Names\Amin.ogg"};
			AmmoCritical[] = {"StealthEngage\140_Com_Status\AmmoCritical_1.ogg", "StealthEngage\140_Com_Status\AmmoCritical_2.ogg", "StealthEngage\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"StealthEngage\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"StealthEngage\020_Names\Anthis.ogg"};
			AreaClear[] = {"StealthEngage\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"StealthEngage\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"StealthEngage\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"StealthEngage\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"StealthEngage\DirectionRelative2\at1_1.ogg", "StealthEngage\DirectionRelative2\at1_2.ogg"};
			at10[] = {"StealthEngage\DirectionRelative2\at10_1.ogg", "StealthEngage\DirectionRelative2\at10_2.ogg"};
			at11[] = {"StealthEngage\DirectionRelative2\at11_1.ogg", "StealthEngage\DirectionRelative2\at11_2.ogg"};
			at12[] = {"StealthEngage\DirectionRelative2\at12_1.ogg", "StealthEngage\DirectionRelative2\at12_2.ogg"};
			at2[] = {"StealthEngage\DirectionRelative2\at2_1.ogg", "StealthEngage\DirectionRelative2\at2_2.ogg"};
			at3[] = {"StealthEngage\DirectionRelative2\at3_1.ogg", "StealthEngage\DirectionRelative2\at3_2.ogg"};
			at4[] = {"StealthEngage\DirectionRelative2\at4_1.ogg", "StealthEngage\DirectionRelative2\at4_2.ogg"};
			at5[] = {"StealthEngage\DirectionRelative2\at5_1.ogg", "StealthEngage\DirectionRelative2\at5_2.ogg"};
			at6[] = {"StealthEngage\DirectionRelative2\at6_1.ogg", "StealthEngage\DirectionRelative2\at6_2.ogg"};
			at7[] = {"StealthEngage\DirectionRelative2\at7_1.ogg", "StealthEngage\DirectionRelative2\at7_2.ogg"};
			at8[] = {"StealthEngage\DirectionRelative2\at8_1.ogg", "StealthEngage\DirectionRelative2\at8_2.ogg"};
			at9[] = {"StealthEngage\DirectionRelative2\at9_1.ogg", "StealthEngage\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"StealthEngage\015_Targeting\Attack_1.ogg", "StealthEngage\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"StealthEngage\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"StealthEngage\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"StealthEngage\DirectionRelative1\back_1.ogg", "StealthEngage\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"StealthEngage\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"StealthEngage\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"StealthEngage\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"StealthEngage\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"StealthEngage\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"StealthEngage\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"StealthEngage\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"StealthEngage\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"StealthEngage\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"StealthEngage\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"StealthEngage\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"StealthEngage\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"StealthEngage\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"StealthEngage\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"StealthEngage\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"StealthEngage\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"StealthEngage\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"StealthEngage\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"StealthEngage\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"StealthEngage\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"StealthEngage\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"StealthEngage\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"StealthEngage\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"StealthEngage\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"StealthEngage\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"StealthEngage\020_Names\Bennett.ogg"};
			blueTeam[] = {"StealthEngage\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"StealthEngage\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"StealthEngage\150_Reporting\BombDetected_1.ogg", "StealthEngage\150_Reporting\BombDetected_2.ogg", "StealthEngage\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"StealthEngage\005_Weapons\Bombs.ogg"};
			bravo[] = {"StealthEngage\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"StealthEngage\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"StealthEngage\100_Commands\CancelManualFire_1.ogg", "StealthEngage\100_Commands\CancelManualFire_2.ogg", "StealthEngage\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"StealthEngage\015_Targeting\CancelTarget_1.ogg", "StealthEngage\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"StealthEngage\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"StealthEngage\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"StealthEngage\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"StealthEngage\130_Com_Reply\CannotComply_1.ogg", "StealthEngage\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"StealthEngage\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"StealthEngage\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"StealthEngage\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"StealthEngage\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"StealthEngage\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"StealthEngage\100_Commands\CeaseFire_1.ogg", "StealthEngage\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"StealthEngage\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"StealthEngage\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"StealthEngage\200_CombatShouts\CheeringE_1.ogg", "StealthEngage\200_CombatShouts\CheeringE_2.ogg", "StealthEngage\200_CombatShouts\CheeringE_3.ogg", "StealthEngage\200_CombatShouts\CheeringE_4.ogg", "StealthEngage\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"StealthEngage\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"StealthEngage\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"StealthEngage\200_CombatShouts\CombatGenericE_1.ogg", "StealthEngage\200_CombatShouts\CombatGenericE_2.ogg", "StealthEngage\200_CombatShouts\CombatGenericE_3.ogg", "StealthEngage\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"StealthEngage\100_Commands\CombatOpenFire_1.ogg", "StealthEngage\100_Commands\CombatOpenFire_2.ogg", "StealthEngage\100_Commands\CombatOpenFire_3.ogg", "StealthEngage\100_Commands\CombatOpenFire_4.ogg", "StealthEngage\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"StealthEngage\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"StealthEngage\130_Com_Reply\Confirmation1_1.ogg", "StealthEngage\130_Com_Reply\Confirmation1_2.ogg", "StealthEngage\130_Com_Reply\Confirmation1_3.ogg", "StealthEngage\130_Com_Reply\Confirmation1_4.ogg", "StealthEngage\130_Com_Reply\Confirmation1_5.ogg", "StealthEngage\130_Com_Reply\Confirmation1_6.ogg", "StealthEngage\130_Com_Reply\Confirmation1_7.ogg", "StealthEngage\130_Com_Reply\Confirmation1_8.ogg", "StealthEngage\130_Com_Reply\Confirmation1_9.ogg", "StealthEngage\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"StealthEngage\130_Com_Reply\Confirmation2_1.ogg", "StealthEngage\130_Com_Reply\Confirmation2_2.ogg", "StealthEngage\130_Com_Reply\Confirmation2_3.ogg", "StealthEngage\130_Com_Reply\Confirmation2_4.ogg", "StealthEngage\130_Com_Reply\Confirmation2_5.ogg", "StealthEngage\130_Com_Reply\Confirmation2_6.ogg", "StealthEngage\130_Com_Reply\Confirmation2_7.ogg", "StealthEngage\130_Com_Reply\Confirmation2_8.ogg", "StealthEngage\130_Com_Reply\Confirmation2_9.ogg", "StealthEngage\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"StealthEngage\150_Reporting\Contact_1.ogg", "StealthEngage\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"StealthEngage\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"StealthEngage\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"StealthEngage\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"StealthEngage\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"StealthEngage\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"StealthEngage\020_Names\Costa.ogg"};
			CoveringE[] = {"StealthEngage\200_CombatShouts\CoveringE_1.ogg", "StealthEngage\200_CombatShouts\CoveringE_2.ogg", "StealthEngage\200_CombatShouts\CoveringE_3.ogg", "StealthEngage\200_CombatShouts\CoveringE_4.ogg", "StealthEngage\200_CombatShouts\CoveringE_5.ogg", "StealthEngage\200_CombatShouts\CoveringE_6.ogg", "StealthEngage\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"StealthEngage\200_CombatShouts\CoverMeE_1.ogg", "StealthEngage\200_CombatShouts\CoverMeE_2.ogg", "StealthEngage\200_CombatShouts\CoverMeE_3.ogg", "StealthEngage\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"StealthEngage\140_Com_Status\CriticalDamage_1.ogg", "StealthEngage\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"StealthEngage\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"StealthEngage\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"StealthEngage\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"StealthEngage\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"StealthEngage\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"StealthEngage\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"StealthEngage\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"StealthEngage\100_Commands\Disengage.ogg"};
			Dismount[] = {"StealthEngage\100_Commands\Dismount_1.ogg", "StealthEngage\100_Commands\Dismount_2.ogg"};
			dist100[] = {"StealthEngage\DistanceAbsolute1\dist100_1.ogg", "StealthEngage\DistanceAbsolute1\dist100_2.ogg", "StealthEngage\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"StealthEngage\DistanceAbsolute1\dist1000_1.ogg", "StealthEngage\DistanceAbsolute1\dist1000_2.ogg", "StealthEngage\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"StealthEngage\DistanceAbsolute1\dist1500_1.ogg", "StealthEngage\DistanceAbsolute1\dist1500_2.ogg", "StealthEngage\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"StealthEngage\DistanceAbsolute1\dist200_1.ogg", "StealthEngage\DistanceAbsolute1\dist200_2.ogg", "StealthEngage\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"StealthEngage\DistanceAbsolute1\dist2000_1.ogg", "StealthEngage\DistanceAbsolute1\dist2000_2.ogg", "StealthEngage\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"StealthEngage\DistanceAbsolute1\dist2500_1.ogg", "StealthEngage\DistanceAbsolute1\dist2500_2.ogg", "StealthEngage\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"StealthEngage\DistanceAbsolute1\dist300_1.ogg", "StealthEngage\DistanceAbsolute1\dist300_2.ogg", "StealthEngage\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"StealthEngage\DistanceAbsolute1\dist400_1.ogg", "StealthEngage\DistanceAbsolute1\dist400_2.ogg", "StealthEngage\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"StealthEngage\DistanceAbsolute1\dist500_1.ogg", "StealthEngage\DistanceAbsolute1\dist500_2.ogg", "StealthEngage\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"StealthEngage\DistanceAbsolute1\dist600_1.ogg", "StealthEngage\DistanceAbsolute1\dist600_2.ogg", "StealthEngage\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"StealthEngage\DistanceAbsolute1\dist700_1.ogg", "StealthEngage\DistanceAbsolute1\dist700_2.ogg", "StealthEngage\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"StealthEngage\DistanceAbsolute1\dist75_1.ogg", "StealthEngage\DistanceAbsolute1\dist75_2.ogg", "StealthEngage\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"StealthEngage\DistanceAbsolute1\dist800_1.ogg", "StealthEngage\DistanceAbsolute1\dist800_2.ogg", "StealthEngage\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"StealthEngage\020_Names\Dixon.ogg"};
			dloc_base[] = {"StealthEngage\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"StealthEngage\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"StealthEngage\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"StealthEngage\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"StealthEngage\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"StealthEngage\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"StealthEngage\100_Commands\DropYourPack.ogg"};
			east[] = {"StealthEngage\DirectionCompass1\east_1.ogg", "StealthEngage\DirectionCompass1\east_2.ogg"};
			echo[] = {"StealthEngage\080_MoveAlphabet\echo.ogg"};
			eight[] = {"StealthEngage\025_Numbers\eight.ogg"};
			eighteen[] = {"StealthEngage\025_Numbers\eighteen.ogg"};
			eighty[] = {"StealthEngage\025_Numbers\eighty.ogg"};
			Eject[] = {"StealthEngage\100_Commands\Eject_1.ogg", "StealthEngage\100_Commands\Eject_2.ogg"};
			eleven[] = {"StealthEngage\025_Numbers\eleven.ogg"};
			Elias[] = {"StealthEngage\020_Names\Elias.ogg"};
			EndangeredE[] = {"StealthEngage\200_CombatShouts\EndangeredE_1.ogg", "StealthEngage\200_CombatShouts\EndangeredE_2.ogg", "StealthEngage\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"StealthEngage\150_Reporting\EnemyDetected_1.ogg", "StealthEngage\150_Reporting\EnemyDetected_2.ogg", "StealthEngage\150_Reporting\EnemyDetected_3.ogg", "StealthEngage\150_Reporting\EnemyDetected_4.ogg", "StealthEngage\150_Reporting\EnemyDetected_5.ogg", "StealthEngage\150_Reporting\EnemyDetected_6.ogg", "StealthEngage\150_Reporting\EnemyDetected_7.ogg", "StealthEngage\150_Reporting\EnemyDetected_8.ogg", "StealthEngage\150_Reporting\EnemyDetected_9.ogg", "StealthEngage\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"StealthEngage\015_Targeting\Engage_1.ogg", "StealthEngage\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"StealthEngage\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"StealthEngage\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"StealthEngage\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"StealthEngage\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"StealthEngage\150_Reporting\ExplosiveDetected_1.ogg", "StealthEngage\150_Reporting\ExplosiveDetected_2.ogg", "StealthEngage\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"StealthEngage\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"StealthEngage\020_Names\Fahim.ogg"};
			FallBack[] = {"StealthEngage\100_Commands\FallBack.ogg"};
			fifteen[] = {"StealthEngage\025_Numbers\fifteen.ogg"};
			fifty[] = {"StealthEngage\025_Numbers\fifty.ogg"};
			Fire[] = {"StealthEngage\015_Targeting\Fire_1.ogg", "StealthEngage\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"StealthEngage\100_Commands\FireAtWill.ogg"};
			five[] = {"StealthEngage\025_Numbers\five.ogg"};
			FlankLeft[] = {"StealthEngage\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"StealthEngage\100_Commands\FlankRight.ogg"};
			Flares[] = {"StealthEngage\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"StealthEngage\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"StealthEngage\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"StealthEngage\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"StealthEngage\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"StealthEngage\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"StealthEngage\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"StealthEngage\100_Commands\FormFile.ogg"};
			FormLine[] = {"StealthEngage\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"StealthEngage\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"StealthEngage\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"StealthEngage\100_Commands\FormVee.ogg"};
			FormWedge[] = {"StealthEngage\100_Commands\FormWedge.ogg"};
			forty[] = {"StealthEngage\025_Numbers\forty.ogg"};
			four[] = {"StealthEngage\025_Numbers\four.ogg"};
			fourteen[] = {"StealthEngage\025_Numbers\fourteen.ogg"};
			Fox[] = {"StealthEngage\020_Names\Fox.ogg"};
			foxtrot[] = {"StealthEngage\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"StealthEngage\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"StealthEngage\100_Commands\FreeToEngage.ogg"};
			front[] = {"StealthEngage\DirectionRelative1\front_1.ogg", "StealthEngage\DirectionRelative1\front_2.ogg"};
			Frost[] = {"StealthEngage\020_Names\Frost.ogg"};
			FuelCritical[] = {"StealthEngage\140_Com_Status\FuelCritical_1.ogg", "StealthEngage\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"StealthEngage\140_Com_Status\FuelLow_1.ogg", "StealthEngage\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"StealthEngage\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"StealthEngage\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"StealthEngage\999_FX\FXDeath_1.ogg", "StealthEngage\999_FX\FXDeath_2.ogg", "StealthEngage\999_FX\FXDeath_3.ogg", "StealthEngage\999_FX\FXDeath_4.ogg", "StealthEngage\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"StealthEngage\999_FX\FXDrowning_1.ogg", "StealthEngage\999_FX\FXDrowning_2.ogg", "StealthEngage\999_FX\FXDrowning_3.ogg", "StealthEngage\999_FX\FXDrowning_4.ogg", "StealthEngage\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"StealthEngage\999_FX\FXEffort_1.ogg", "StealthEngage\999_FX\FXEffort_2.ogg", "StealthEngage\999_FX\FXEffort_3.ogg", "StealthEngage\999_FX\FXEffort_4.ogg", "StealthEngage\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"StealthEngage\999_FX\FXHit_1.ogg", "StealthEngage\999_FX\FXHit_2.ogg", "StealthEngage\999_FX\FXHit_3.ogg", "StealthEngage\999_FX\FXHit_4.ogg", "StealthEngage\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"StealthEngage\999_FX\FXHurt_1.ogg", "StealthEngage\999_FX\FXHurt_2.ogg", "StealthEngage\999_FX\FXHurt_3.ogg", "StealthEngage\999_FX\FXHurt_4.ogg", "StealthEngage\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"StealthEngage\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"StealthEngage\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"StealthEngage\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"StealthEngage\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"StealthEngage\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"StealthEngage\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"StealthEngage\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"StealthEngage\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"StealthEngage\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"StealthEngage\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"StealthEngage\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"StealthEngage\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"StealthEngage\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"StealthEngage\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"StealthEngage\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"StealthEngage\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"StealthEngage\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"StealthEngage\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"StealthEngage\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"StealthEngage\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"StealthEngage\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"StealthEngage\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"StealthEngage\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"StealthEngage\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"StealthEngage\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"StealthEngage\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"StealthEngage\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"StealthEngage\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"StealthEngage\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"StealthEngage\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"StealthEngage\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"StealthEngage\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"StealthEngage\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"StealthEngage\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"StealthEngage\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"StealthEngage\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"StealthEngage\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"StealthEngage\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"StealthEngage\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"StealthEngage\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"StealthEngage\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"StealthEngage\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"StealthEngage\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"StealthEngage\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"StealthEngage\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"StealthEngage\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"StealthEngage\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"StealthEngage\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"StealthEngage\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"StealthEngage\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"StealthEngage\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"StealthEngage\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"StealthEngage\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"StealthEngage\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"StealthEngage\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"StealthEngage\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"StealthEngage\100_Commands\GetSupport.ogg"};
			Ghost[] = {"StealthEngage\020_Names\Ghost.ogg"};
			Givens[] = {"StealthEngage\020_Names\Givens.ogg"};
			golf[] = {"StealthEngage\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"StealthEngage\100_Commands\GoProne_1.ogg", "StealthEngage\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"StealthEngage\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"StealthEngage\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"StealthEngage\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"StealthEngage\035_NumbersGrid\grid_eight_1.ogg", "StealthEngage\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"StealthEngage\035_NumbersGrid\grid_eight_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"StealthEngage\035_NumbersGrid\grid_eight_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"StealthEngage\035_NumbersGrid\grid_five_1.ogg", "StealthEngage\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"StealthEngage\035_NumbersGrid\grid_five_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"StealthEngage\035_NumbersGrid\grid_five_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"StealthEngage\035_NumbersGrid\grid_four_1.ogg", "StealthEngage\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"StealthEngage\035_NumbersGrid\grid_four_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"StealthEngage\035_NumbersGrid\grid_four_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"StealthEngage\035_NumbersGrid\grid_move_to_eight_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"StealthEngage\035_NumbersGrid\grid_move_to_five_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"StealthEngage\035_NumbersGrid\grid_move_to_four_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"StealthEngage\035_NumbersGrid\grid_move_to_nine_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"StealthEngage\035_NumbersGrid\grid_move_to_one_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"StealthEngage\035_NumbersGrid\grid_move_to_seven_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"StealthEngage\035_NumbersGrid\grid_move_to_six_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"StealthEngage\035_NumbersGrid\grid_move_to_three_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"StealthEngage\035_NumbersGrid\grid_move_to_two_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"StealthEngage\035_NumbersGrid\grid_move_to_zero_1.ogg", "StealthEngage\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"StealthEngage\035_NumbersGrid\grid_nine_1.ogg", "StealthEngage\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"StealthEngage\035_NumbersGrid\grid_nine_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"StealthEngage\035_NumbersGrid\grid_nine_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"StealthEngage\035_NumbersGrid\grid_one_1.ogg", "StealthEngage\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"StealthEngage\035_NumbersGrid\grid_one_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"StealthEngage\035_NumbersGrid\grid_one_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"StealthEngage\035_NumbersGrid\grid_seven_1.ogg", "StealthEngage\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"StealthEngage\035_NumbersGrid\grid_seven_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"StealthEngage\035_NumbersGrid\grid_seven_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"StealthEngage\035_NumbersGrid\grid_six_1.ogg", "StealthEngage\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"StealthEngage\035_NumbersGrid\grid_six_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"StealthEngage\035_NumbersGrid\grid_six_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"StealthEngage\035_NumbersGrid\grid_three_1.ogg", "StealthEngage\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"StealthEngage\035_NumbersGrid\grid_three_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"StealthEngage\035_NumbersGrid\grid_three_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"StealthEngage\035_NumbersGrid\grid_two_1.ogg", "StealthEngage\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"StealthEngage\035_NumbersGrid\grid_two_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"StealthEngage\035_NumbersGrid\grid_two_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"StealthEngage\035_NumbersGrid\grid_zero_1.ogg", "StealthEngage\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"StealthEngage\035_NumbersGrid\grid_zero_2_1.ogg", "StealthEngage\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"StealthEngage\035_NumbersGrid\grid_zero_3_1.ogg", "StealthEngage\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"StealthEngage\020_Names\Habibi.ogg"};
			Halt[] = {"StealthEngage\100_Commands\Halt.ogg"};
			Hardy[] = {"StealthEngage\020_Names\Hardy.ogg"};
			Hawkins[] = {"StealthEngage\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"StealthEngage\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"StealthEngage\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"StealthEngage\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"StealthEngage\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"StealthEngage\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"StealthEngage\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"StealthEngage\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"StealthEngage\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"StealthEngage\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"StealthEngage\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"StealthEngage\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"StealthEngage\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"StealthEngage\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"StealthEngage\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"StealthEngage\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"StealthEngage\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"StealthEngage\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"StealthEngage\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"StealthEngage\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"StealthEngage\025_Numbers\hundred.ogg"};
			IAmReady[] = {"StealthEngage\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"StealthEngage\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"StealthEngage\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"StealthEngage\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"StealthEngage\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"StealthEngage\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"StealthEngage\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"StealthEngage\020_Names\Jackson.ogg"};
			James[] = {"StealthEngage\020_Names\James.ogg"};
			Jawadi[] = {"StealthEngage\020_Names\Jawadi.ogg"};
			Jester[] = {"StealthEngage\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"StealthEngage\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"StealthEngage\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"StealthEngage\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"StealthEngage\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"StealthEngage\020_Names\Kerry.ogg"};
			kilo[] = {"StealthEngage\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"StealthEngage\020_Names\Korneedler.ogg"};
			Kouris[] = {"StealthEngage\020_Names\Kouris.ogg"};
			Kushan[] = {"StealthEngage\020_Names\Kushan.ogg"};
			Lacey[] = {"StealthEngage\020_Names\Lacey.ogg"};
			Larkin[] = {"StealthEngage\020_Names\Larkin.ogg"};
			left[] = {"StealthEngage\DirectionRelative1\left_1.ogg", "StealthEngage\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"StealthEngage\020_Names\Leventis.ogg"};
			Levine[] = {"StealthEngage\020_Names\Levine.ogg"};
			LightThatFire[] = {"StealthEngage\100_Commands\LightThatFire.ogg"};
			lima[] = {"StealthEngage\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"StealthEngage\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"StealthEngage\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"StealthEngage\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"StealthEngage\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"StealthEngage\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"StealthEngage\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"StealthEngage\020_Names\Lopez.ogg"};
			ManDownE[] = {"StealthEngage\140_Com_Status\ManDownE_1.ogg", "StealthEngage\140_Com_Status\ManDownE_2.ogg", "StealthEngage\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"StealthEngage\100_Commands\ManualFire_1.ogg", "StealthEngage\100_Commands\ManualFire_2.ogg", "StealthEngage\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"StealthEngage\020_Names\Markos.ogg"};
			Martinez[] = {"StealthEngage\020_Names\Martinez.ogg"};
			Masood[] = {"StealthEngage\020_Names\Masood.ogg"};
			McKay[] = {"StealthEngage\020_Names\McKay.ogg"};
			McKendrick[] = {"StealthEngage\020_Names\McKendrick.ogg"};
			mgun[] = {"StealthEngage\005_Weapons\mgun.ogg"};
			mike[] = {"StealthEngage\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"StealthEngage\020_Names\Miller.ogg"};
			MineDetected[] = {"StealthEngage\150_Reporting\MineDetected_1.ogg", "StealthEngage\150_Reporting\MineDetected_2.ogg", "StealthEngage\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"StealthEngage\005_Weapons\missiles.ogg"};
			move_dist100[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"StealthEngage\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"StealthEngage\070_MoveDirectionRelative1\moveBack_1.ogg", "StealthEngage\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"StealthEngage\070_MoveDirectionRelative1\moveLeft_1.ogg", "StealthEngage\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"StealthEngage\070_MoveDirectionRelative1\moveRight_1.ogg", "StealthEngage\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"StealthEngage\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"StealthEngage\070_MoveDirectionRelative1\moveUp_1.ogg", "StealthEngage\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"StealthEngage\020_Names\Nazari.ogg"};
			Negative[] = {"StealthEngage\130_Com_Reply\Negative_1.ogg", "StealthEngage\130_Com_Reply\Negative_2.ogg", "StealthEngage\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"StealthEngage\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"StealthEngage\020_Names\Nichols.ogg"};
			Nicolo[] = {"StealthEngage\020_Names\Nicolo.ogg"};
			Nikas[] = {"StealthEngage\020_Names\Nikas.ogg"};
			nine[] = {"StealthEngage\025_Numbers\nine.ogg"};
			nineteen[] = {"StealthEngage\025_Numbers\nineteen.ogg"};
			ninety[] = {"StealthEngage\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"StealthEngage\130_Com_Reply\NoCanDo_1.ogg", "StealthEngage\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"StealthEngage\DirectionCompass1\north_1.ogg", "StealthEngage\DirectionCompass1\north_2.ogg"};
			northEast[] = {"StealthEngage\DirectionCompass1\northEast_1.ogg", "StealthEngage\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"StealthEngage\020_Names\Northgate.ogg"};
			northWest[] = {"StealthEngage\DirectionCompass1\northWest_1.ogg", "StealthEngage\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"StealthEngage\015_Targeting\NoTarget_1.ogg", "StealthEngage\015_Targeting\NoTarget_2.ogg"};
			november[] = {"StealthEngage\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"StealthEngage\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"StealthEngage\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"StealthEngage\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"StealthEngage\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"StealthEngage\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"StealthEngage\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"StealthEngage\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"StealthEngage\020_Names\OConnor.ogg"};
			one[] = {"StealthEngage\025_Numbers\one.ogg"};
			OnTheMove[] = {"StealthEngage\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"StealthEngage\130_Com_Reply\OnTheWay_1.ogg", "StealthEngage\130_Com_Reply\OnTheWay_2.ogg", "StealthEngage\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"StealthEngage\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"StealthEngage\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"StealthEngage\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"StealthEngage\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"StealthEngage\140_Com_Status\OutOfFirstAidKits_1.ogg", "StealthEngage\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"StealthEngage\020_Names\Panas.ogg"};
			papa[] = {"StealthEngage\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"StealthEngage\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"StealthEngage\020_Names\Patterson.ogg"};
			Petros[] = {"StealthEngage\020_Names\Petros.ogg"};
			PointersOff[] = {"StealthEngage\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"StealthEngage\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"StealthEngage\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"StealthEngage\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"StealthEngage\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"StealthEngage\100_Commands\RallyUp.ogg"};
			Razer[] = {"StealthEngage\020_Names\Razer.ogg"};
			Ready[] = {"StealthEngage\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"StealthEngage\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"StealthEngage\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"StealthEngage\100_Commands\Rearm.ogg"};
			redTeam[] = {"StealthEngage\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"StealthEngage\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"StealthEngage\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"StealthEngage\100_Commands\Regroup.ogg"};
			Relax[] = {"StealthEngage\100_Commands\Relax.ogg"};
			ReloadingE[] = {"StealthEngage\200_CombatShouts\ReloadingE_1.ogg", "StealthEngage\200_CombatShouts\ReloadingE_2.ogg", "StealthEngage\200_CombatShouts\ReloadingE_3.ogg", "StealthEngage\200_CombatShouts\ReloadingE_4.ogg", "StealthEngage\200_CombatShouts\ReloadingE_5.ogg", "StealthEngage\200_CombatShouts\ReloadingE_6.ogg", "StealthEngage\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"StealthEngage\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"StealthEngage\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"StealthEngage\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"StealthEngage\DirectionRelative3\reportBack_1.ogg", "StealthEngage\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"StealthEngage\DirectionRelative3\reportFront_1.ogg", "StealthEngage\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"StealthEngage\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"StealthEngage\DirectionRelative3\reportLeft_1.ogg", "StealthEngage\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"StealthEngage\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"StealthEngage\DirectionRelative3\reportRight_1.ogg", "StealthEngage\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"StealthEngage\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"StealthEngage\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"StealthEngage\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"StealthEngage\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"StealthEngage\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"StealthEngage\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"StealthEngage\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"StealthEngage\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"StealthEngage\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"StealthEngage\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"StealthEngage\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"StealthEngage\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"StealthEngage\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"StealthEngage\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"StealthEngage\020_Names\Reynolds.ogg"};
			right[] = {"StealthEngage\DirectionRelative1\right_1.ogg", "StealthEngage\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"StealthEngage\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"StealthEngage\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"StealthEngage\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"StealthEngage\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"StealthEngage\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"StealthEngage\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"StealthEngage\020_Names\Ryan.ogg"};
			sabot[] = {"StealthEngage\005_Weapons\sabot.ogg"};
			Safe[] = {"StealthEngage\100_Commands\Safe_1.ogg", "StealthEngage\100_Commands\Safe_2.ogg"};
			Samaras[] = {"StealthEngage\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"StealthEngage\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"StealthEngage\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"StealthEngage\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"StealthEngage\200_CombatShouts\ScreamingE_1.ogg", "StealthEngage\200_CombatShouts\ScreamingE_2.ogg", "StealthEngage\200_CombatShouts\ScreamingE_3.ogg", "StealthEngage\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"StealthEngage\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"StealthEngage\100_Commands\SetTheTimer.ogg"};
			seven[] = {"StealthEngage\025_Numbers\seven.ogg"};
			seventeen[] = {"StealthEngage\025_Numbers\seventeen.ogg"};
			seventy[] = {"StealthEngage\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"StealthEngage\020_Names\Siddiqi.ogg"};
			sierra[] = {"StealthEngage\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"StealthEngage\100_Commands\Silence.ogg"};
			Sitrep[] = {"StealthEngage\120_Com_Ask\Sitrep.ogg"};
			six[] = {"StealthEngage\025_Numbers\six.ogg"};
			sixteen[] = {"StealthEngage\025_Numbers\sixteen.ogg"};
			sixty[] = {"StealthEngage\025_Numbers\sixty.ogg"};
			Snake[] = {"StealthEngage\020_Names\Snake.ogg"};
			south[] = {"StealthEngage\DirectionCompass1\south_1.ogg", "StealthEngage\DirectionCompass1\south_2.ogg"};
			southEast[] = {"StealthEngage\DirectionCompass1\southEast_1.ogg", "StealthEngage\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"StealthEngage\DirectionCompass1\southWest_1.ogg", "StealthEngage\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"StealthEngage\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"StealthEngage\020_Names\Stavrou.ogg"};
			StayAlert[] = {"StealthEngage\100_Commands\StayAlert.ogg"};
			StayBack[] = {"StealthEngage\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"StealthEngage\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"StealthEngage\100_Commands\StayLow.ogg"};
			Stop[] = {"StealthEngage\100_Commands\Stop.ogg"};
			Stranger[] = {"StealthEngage\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"StealthEngage\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"StealthEngage\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"StealthEngage\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"StealthEngage\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"StealthEngage\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"StealthEngage\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"StealthEngage\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"StealthEngage\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"StealthEngage\130_Com_Reply\Suppressing_1.ogg", "StealthEngage\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"StealthEngage\200_CombatShouts\SuppressingE_1.ogg", "StealthEngage\200_CombatShouts\SuppressingE_2.ogg", "StealthEngage\200_CombatShouts\SuppressingE_3.ogg", "StealthEngage\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"StealthEngage\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"StealthEngage\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"StealthEngage\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"StealthEngage\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"StealthEngage\020_Names\Sykes.ogg"};
			TakeCover[] = {"StealthEngage\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"StealthEngage\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"StealthEngage\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"StealthEngage\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"StealthEngage\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"StealthEngage\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"StealthEngage\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"StealthEngage\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"StealthEngage\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"StealthEngage\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"StealthEngage\020_Names\Tanny.ogg"};
			Target[] = {"StealthEngage\015_Targeting\Target_1.ogg", "StealthEngage\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"StealthEngage\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"StealthEngage\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"StealthEngage\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"StealthEngage\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"StealthEngage\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"StealthEngage\020_Names\Taylor.ogg"};
			ten[] = {"StealthEngage\025_Numbers\ten.ogg"};
			Thanos[] = {"StealthEngage\020_Names\Thanos.ogg"};
			thirteen[] = {"StealthEngage\025_Numbers\thirteen.ogg"};
			thirty[] = {"StealthEngage\025_Numbers\thirty.ogg"};
			three[] = {"StealthEngage\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"StealthEngage\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"StealthEngage\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"StealthEngage\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"StealthEngage\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"StealthEngage\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"StealthEngage\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"StealthEngage\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"StealthEngage\025_Numbers\twelve.ogg"};
			twenty[] = {"StealthEngage\025_Numbers\twenty.ogg"};
			two[] = {"StealthEngage\025_Numbers\two.ogg"};
			UnderFireE[] = {"StealthEngage\200_CombatShouts\UnderFireE_1.ogg", "StealthEngage\200_CombatShouts\UnderFireE_2.ogg", "StealthEngage\200_CombatShouts\UnderFireE_3.ogg", "StealthEngage\200_CombatShouts\UnderFireE_4.ogg", "StealthEngage\200_CombatShouts\UnderFireE_5.ogg", "StealthEngage\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"StealthEngage\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"StealthEngage\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"StealthEngage\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"StealthEngage\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"StealthEngage\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"StealthEngage\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"StealthEngage\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"StealthEngage\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"StealthEngage\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"StealthEngage\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"StealthEngage\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"StealthEngage\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"StealthEngage\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"StealthEngage\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"StealthEngage\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"StealthEngage\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"StealthEngage\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"StealthEngage\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"StealthEngage\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"StealthEngage\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"StealthEngage\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"StealthEngage\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"StealthEngage\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"StealthEngage\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"StealthEngage\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"StealthEngage\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"StealthEngage\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"StealthEngage\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"StealthEngage\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"StealthEngage\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"StealthEngage\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"StealthEngage\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"StealthEngage\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"StealthEngage\010_Vehicles\veh_infantry_p_1.ogg", "StealthEngage\010_Vehicles\veh_infantry_p_2.ogg", "StealthEngage\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"StealthEngage\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"StealthEngage\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"StealthEngage\010_Vehicles\veh_infantry_s_1.ogg", "StealthEngage\010_Vehicles\veh_infantry_s_2.ogg", "StealthEngage\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"StealthEngage\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"StealthEngage\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"StealthEngage\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"StealthEngage\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"StealthEngage\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"StealthEngage\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"StealthEngage\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"StealthEngage\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"StealthEngage\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"StealthEngage\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"StealthEngage\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"StealthEngage\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"StealthEngage\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"StealthEngage\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"StealthEngage\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"StealthEngage\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"StealthEngage\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"StealthEngage\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"StealthEngage\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"StealthEngage\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"StealthEngage\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"StealthEngage\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"StealthEngage\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"StealthEngage\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"StealthEngage\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"StealthEngage\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"StealthEngage\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"StealthEngage\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"StealthEngage\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"StealthEngage\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"StealthEngage\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"StealthEngage\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"StealthEngage\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"StealthEngage\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"StealthEngage\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"StealthEngage\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"StealthEngage\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"StealthEngage\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"StealthEngage\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"StealthEngage\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"StealthEngage\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"StealthEngage\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"StealthEngage\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"StealthEngage\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"StealthEngage\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"StealthEngage\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"StealthEngage\100_Commands\VehBackward_1.ogg", "StealthEngage\100_Commands\VehBackward_2.ogg", "StealthEngage\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"StealthEngage\100_Commands\VehFast_1.ogg", "StealthEngage\100_Commands\VehFast_2.ogg", "StealthEngage\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"StealthEngage\100_Commands\VehForward_1.ogg", "StealthEngage\100_Commands\VehForward_2.ogg", "StealthEngage\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"StealthEngage\100_Commands\VehLeft_1.ogg", "StealthEngage\100_Commands\VehLeft_2.ogg", "StealthEngage\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"StealthEngage\100_Commands\VehRight_1.ogg", "StealthEngage\100_Commands\VehRight_2.ogg", "StealthEngage\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"StealthEngage\100_Commands\VehSlow_1.ogg", "StealthEngage\100_Commands\VehSlow_2.ogg", "StealthEngage\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"StealthEngage\100_Commands\VehStop_1.ogg", "StealthEngage\100_Commands\VehStop_2.ogg", "StealthEngage\100_Commands\VehStop_3.ogg"};
			victor[] = {"StealthEngage\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"StealthEngage\020_Names\Viper.ogg"};
			Waiting[] = {"StealthEngage\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"StealthEngage\020_Names\Walker.ogg"};
			Wardak[] = {"StealthEngage\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"StealthEngage\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"StealthEngage\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"StealthEngage\140_Com_Status\WeGotAManDownE_1.ogg", "StealthEngage\140_Com_Status\WeGotAManDownE_2.ogg", "StealthEngage\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"StealthEngage\140_Com_Status\WeLostOneE_1.ogg", "StealthEngage\140_Com_Status\WeLostOneE_2.ogg", "StealthEngage\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"StealthEngage\DirectionCompass1\west_1.ogg", "StealthEngage\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"StealthEngage\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"StealthEngage\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"StealthEngage\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"StealthEngage\200_CombatShouts\WitnessKilledE_1.ogg", "StealthEngage\200_CombatShouts\WitnessKilledE_2.ogg", "StealthEngage\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"StealthEngage\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"StealthEngage\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"StealthEngage\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"StealthEngage\020_Names\Yousuf.ogg"};
			zero[] = {"StealthEngage\025_Numbers\zero.ogg"};
			zulu[] = {"StealthEngage\080_MoveAlphabet\zulu.ogg"};
		};
		class StealthWatch: Normal
		{
			__1[] = {"StealthWatch\Misc\__1.ogg"};
			__10[] = {"StealthWatch\Misc\__10.ogg"};
			__11[] = {"StealthWatch\Misc\__11.ogg"};
			__12[] = {"StealthWatch\Misc\__12.ogg"};
			__13[] = {"StealthWatch\Misc\__13.ogg"};
			__14[] = {"StealthWatch\Misc\__14.ogg"};
			__15[] = {"StealthWatch\Misc\__15.ogg"};
			__1_1[] = {"StealthWatch\Combat\__1_1.ogg"};
			__2[] = {"StealthWatch\Misc\__2.ogg"};
			__2_1[] = {"StealthWatch\Misc\__2_1.ogg"};
			__3[] = {"StealthWatch\Misc\__3.ogg"};
			__4[] = {"StealthWatch\Misc\__4.ogg"};
			__4_CMPS[] = {"StealthWatch\Misc\__4_CMPS.ogg"};
			__5[] = {"StealthWatch\Misc\__5.ogg"};
			__6[] = {"StealthWatch\Misc\__6.ogg"};
			__6_3[] = {"StealthWatch\Misc\__6_3.ogg"};
			__6_ABS[] = {"StealthWatch\Misc\__6_ABS.ogg"};
			__6_CMPS[] = {"StealthWatch\Misc\__6_CMPS.ogg"};
			__7[] = {"StealthWatch\Misc\__7.ogg"};
			__7_CLCK[] = {"StealthWatch\Misc\__7_CLCK.ogg"};
			__7_CMPS[] = {"StealthWatch\Misc\__7_CMPS.ogg"};
			__8[] = {"StealthWatch\Misc\__8.ogg"};
			__9[] = {"StealthWatch\Misc\__9.ogg"};
			_eGRPDIR_102[] = {"StealthWatch\Misc\_eGRPDIR_102.ogg"};
			_mGRPDIS_300[] = {"StealthWatch\Misc\_mGRPDIS_300.ogg"};
			Adams[] = {"StealthWatch\020_Names\Adams.ogg"};
			Advance[] = {"StealthWatch\100_Commands\Advance.ogg"};
			alpha[] = {"StealthWatch\080_MoveAlphabet\alpha.ogg"};
			Amin[] = {"StealthWatch\020_Names\Amin.ogg"};
			AmmoCritical[] = {"StealthWatch\140_Com_Status\AmmoCritical_1.ogg", "StealthWatch\140_Com_Status\AmmoCritical_2.ogg", "StealthWatch\140_Com_Status\AmmoCritical_3.ogg"};
			AmmoLow[] = {"StealthWatch\140_Com_Status\AmmoLow.ogg"};
			Anthis[] = {"StealthWatch\020_Names\Anthis.ogg"};
			AreaClear[] = {"StealthWatch\110_Com_Announce\AreaClear.ogg"};
			Armstrong[] = {"StealthWatch\020_Names\Armstrong.ogg"};
			ArtySGSupportRoundsComplete[] = {"StealthWatch\220_Support\ArtySGSupportRoundsComplete.ogg"};
			AssembleThatWeapon[] = {"StealthWatch\100_Commands\AssembleThatWeapon.ogg"};
			at1[] = {"StealthWatch\DirectionRelative2\at1_1.ogg", "StealthWatch\DirectionRelative2\at1_2.ogg"};
			at10[] = {"StealthWatch\DirectionRelative2\at10_1.ogg", "StealthWatch\DirectionRelative2\at10_2.ogg"};
			at11[] = {"StealthWatch\DirectionRelative2\at11_1.ogg", "StealthWatch\DirectionRelative2\at11_2.ogg"};
			at12[] = {"StealthWatch\DirectionRelative2\at12_1.ogg", "StealthWatch\DirectionRelative2\at12_2.ogg"};
			at2[] = {"StealthWatch\DirectionRelative2\at2_1.ogg", "StealthWatch\DirectionRelative2\at2_2.ogg"};
			at3[] = {"StealthWatch\DirectionRelative2\at3_1.ogg", "StealthWatch\DirectionRelative2\at3_2.ogg"};
			at4[] = {"StealthWatch\DirectionRelative2\at4_1.ogg", "StealthWatch\DirectionRelative2\at4_2.ogg"};
			at5[] = {"StealthWatch\DirectionRelative2\at5_1.ogg", "StealthWatch\DirectionRelative2\at5_2.ogg"};
			at6[] = {"StealthWatch\DirectionRelative2\at6_1.ogg", "StealthWatch\DirectionRelative2\at6_2.ogg"};
			at7[] = {"StealthWatch\DirectionRelative2\at7_1.ogg", "StealthWatch\DirectionRelative2\at7_2.ogg"};
			at8[] = {"StealthWatch\DirectionRelative2\at8_1.ogg", "StealthWatch\DirectionRelative2\at8_2.ogg"};
			at9[] = {"StealthWatch\DirectionRelative2\at9_1.ogg", "StealthWatch\DirectionRelative2\at9_2.ogg"};
			Attack[] = {"StealthWatch\015_Targeting\Attack_1.ogg", "StealthWatch\015_Targeting\Attack_2.ogg"};
			Attacking[] = {"StealthWatch\130_Com_Reply\Attacking.ogg"};
			AwaitingOrders[] = {"StealthWatch\110_Com_Announce\AwaitingOrders.ogg"};
			back[] = {"StealthWatch\DirectionRelative1\back_1.ogg", "StealthWatch\DirectionRelative1\back_2.ogg"};
			bearing000[] = {"StealthWatch\DirectionCompass2\bearing000.ogg"};
			bearing015[] = {"StealthWatch\DirectionCompass2\bearing015.ogg"};
			bearing030[] = {"StealthWatch\DirectionCompass2\bearing030.ogg"};
			bearing045[] = {"StealthWatch\DirectionCompass2\bearing045.ogg"};
			bearing060[] = {"StealthWatch\DirectionCompass2\bearing060.ogg"};
			bearing075[] = {"StealthWatch\DirectionCompass2\bearing075.ogg"};
			bearing090[] = {"StealthWatch\DirectionCompass2\bearing090.ogg"};
			bearing105[] = {"StealthWatch\DirectionCompass2\bearing105.ogg"};
			bearing120[] = {"StealthWatch\DirectionCompass2\bearing120.ogg"};
			bearing135[] = {"StealthWatch\DirectionCompass2\bearing135.ogg"};
			bearing150[] = {"StealthWatch\DirectionCompass2\bearing150.ogg"};
			bearing165[] = {"StealthWatch\DirectionCompass2\bearing165.ogg"};
			bearing180[] = {"StealthWatch\DirectionCompass2\bearing180.ogg"};
			bearing195[] = {"StealthWatch\DirectionCompass2\bearing195.ogg"};
			bearing210[] = {"StealthWatch\DirectionCompass2\bearing210.ogg"};
			bearing225[] = {"StealthWatch\DirectionCompass2\bearing225.ogg"};
			bearing240[] = {"StealthWatch\DirectionCompass2\bearing240.ogg"};
			bearing255[] = {"StealthWatch\DirectionCompass2\bearing255.ogg"};
			bearing270[] = {"StealthWatch\DirectionCompass2\bearing270.ogg"};
			bearing285[] = {"StealthWatch\DirectionCompass2\bearing285.ogg"};
			bearing300[] = {"StealthWatch\DirectionCompass2\bearing300.ogg"};
			bearing315[] = {"StealthWatch\DirectionCompass2\bearing315.ogg"};
			bearing330[] = {"StealthWatch\DirectionCompass2\bearing330.ogg"};
			bearing345[] = {"StealthWatch\DirectionCompass2\bearing345.ogg"};
			bearing360[] = {"StealthWatch\DirectionCompass2\bearing360.ogg"};
			Bennett[] = {"StealthWatch\020_Names\Bennett.ogg"};
			blueTeam[] = {"StealthWatch\030_Teams\blueTeam.ogg"};
			BoardThatVehicle[] = {"StealthWatch\100_Commands\BoardThatVehicle.ogg"};
			BombDetected[] = {"StealthWatch\150_Reporting\BombDetected_1.ogg", "StealthWatch\150_Reporting\BombDetected_2.ogg", "StealthWatch\150_Reporting\BombDetected_3.ogg"};
			Bombs[] = {"StealthWatch\005_Weapons\Bombs.ogg"};
			bravo[] = {"StealthWatch\080_MoveAlphabet\bravo.ogg"};
			Campbell[] = {"StealthWatch\020_Names\Campbell.ogg"};
			CancelManualFire[] = {"StealthWatch\100_Commands\CancelManualFire_1.ogg", "StealthWatch\100_Commands\CancelManualFire_2.ogg", "StealthWatch\100_Commands\CancelManualFire_3.ogg"};
			CancelTarget[] = {"StealthWatch\015_Targeting\CancelTarget_1.ogg", "StealthWatch\015_Targeting\CancelTarget_2.ogg"};
			cannon[] = {"StealthWatch\005_Weapons\cannon.ogg"};
			cannonHigh[] = {"StealthWatch\005_Weapons\cannonHigh.ogg"};
			cannonLow[] = {"StealthWatch\005_Weapons\cannonLow.ogg"};
			CannotComply[] = {"StealthWatch\130_Com_Reply\CannotComply_1.ogg", "StealthWatch\130_Com_Reply\CannotComply_2.ogg"};
			CannotExecuteAdjustCoordinates[] = {"StealthWatch\100_Commands\CannotExecuteAdjustCoordinates.ogg"};
			CannotExecuteOutsideEnvelope[] = {"StealthWatch\100_Commands\CannotExecuteOutsideEnvelope.ogg"};
			CannotFire[] = {"StealthWatch\130_Com_Reply\CannotFire.ogg"};
			CantGetThere[] = {"StealthWatch\130_Com_Reply\CantGetThere.ogg"};
			CarryThatSoldier[] = {"StealthWatch\100_Commands\CarryThatSoldier.ogg"};
			CeaseFire[] = {"StealthWatch\100_Commands\CeaseFire_1.ogg", "StealthWatch\100_Commands\CeaseFire_2.ogg"};
			charlie[] = {"StealthWatch\080_MoveAlphabet\charlie.ogg"};
			CheckYourFire[] = {"StealthWatch\100_Commands\CheckYourFire.ogg"};
			CheeringE[] = {"StealthWatch\200_CombatShouts\CheeringE_1.ogg", "StealthWatch\200_CombatShouts\CheeringE_2.ogg", "StealthWatch\200_CombatShouts\CheeringE_3.ogg", "StealthWatch\200_CombatShouts\CheeringE_4.ogg", "StealthWatch\200_CombatShouts\CheeringE_5.ogg"};
			Clear[] = {"StealthWatch\110_Com_Announce\Clear.ogg"};
			CloseThatDoor[] = {"StealthWatch\100_Commands\CloseThatDoor.ogg"};
			CombatGenericE[] = {"StealthWatch\200_CombatShouts\CombatGenericE_1.ogg", "StealthWatch\200_CombatShouts\CombatGenericE_2.ogg", "StealthWatch\200_CombatShouts\CombatGenericE_3.ogg", "StealthWatch\200_CombatShouts\CombatGenericE_4.ogg"};
			CombatOpenFire[] = {"StealthWatch\100_Commands\CombatOpenFire_1.ogg", "StealthWatch\100_Commands\CombatOpenFire_2.ogg", "StealthWatch\100_Commands\CombatOpenFire_3.ogg", "StealthWatch\100_Commands\CombatOpenFire_4.ogg", "StealthWatch\100_Commands\CombatOpenFire_5.ogg"};
			CommStealth[] = {"StealthWatch\100_Commands\CommStealth.ogg"};
			Confirmation1[] = {"StealthWatch\130_Com_Reply\Confirmation1_1.ogg", "StealthWatch\130_Com_Reply\Confirmation1_2.ogg", "StealthWatch\130_Com_Reply\Confirmation1_3.ogg", "StealthWatch\130_Com_Reply\Confirmation1_4.ogg", "StealthWatch\130_Com_Reply\Confirmation1_5.ogg", "StealthWatch\130_Com_Reply\Confirmation1_6.ogg", "StealthWatch\130_Com_Reply\Confirmation1_7.ogg", "StealthWatch\130_Com_Reply\Confirmation1_8.ogg", "StealthWatch\130_Com_Reply\Confirmation1_9.ogg", "StealthWatch\130_Com_Reply\Confirmation1_10.ogg"};
			Confirmation2[] = {"StealthWatch\130_Com_Reply\Confirmation2_1.ogg", "StealthWatch\130_Com_Reply\Confirmation2_2.ogg", "StealthWatch\130_Com_Reply\Confirmation2_3.ogg", "StealthWatch\130_Com_Reply\Confirmation2_4.ogg", "StealthWatch\130_Com_Reply\Confirmation2_5.ogg", "StealthWatch\130_Com_Reply\Confirmation2_6.ogg", "StealthWatch\130_Com_Reply\Confirmation2_7.ogg", "StealthWatch\130_Com_Reply\Confirmation2_8.ogg", "StealthWatch\130_Com_Reply\Confirmation2_9.ogg", "StealthWatch\130_Com_Reply\Confirmation2_10.ogg"};
			Contact[] = {"StealthWatch\150_Reporting\Contact_1.ogg", "StealthWatch\150_Reporting\Contact_2.ogg"};
			ContactE_1[] = {"StealthWatch\200_CombatShouts\ContactE_1.ogg"};
			ContactE_2[] = {"StealthWatch\200_CombatShouts\ContactE_2.ogg"};
			ContactE_3[] = {"StealthWatch\200_CombatShouts\ContactE_3.ogg"};
			CopyIAmOnHim[] = {"StealthWatch\130_Com_Reply\CopyIAmOnHim.ogg"};
			CopyMyStance[] = {"StealthWatch\100_Commands\CopyMyStance.ogg"};
			Costa[] = {"StealthWatch\020_Names\Costa.ogg"};
			CoveringE[] = {"StealthWatch\200_CombatShouts\CoveringE_1.ogg", "StealthWatch\200_CombatShouts\CoveringE_2.ogg", "StealthWatch\200_CombatShouts\CoveringE_3.ogg", "StealthWatch\200_CombatShouts\CoveringE_4.ogg", "StealthWatch\200_CombatShouts\CoveringE_5.ogg", "StealthWatch\200_CombatShouts\CoveringE_6.ogg", "StealthWatch\200_CombatShouts\CoveringE_7.ogg"};
			CoverMeE[] = {"StealthWatch\200_CombatShouts\CoverMeE_1.ogg", "StealthWatch\200_CombatShouts\CoverMeE_2.ogg", "StealthWatch\200_CombatShouts\CoverMeE_3.ogg", "StealthWatch\200_CombatShouts\CoverMeE_4.ogg"};
			CriticalDamage[] = {"StealthWatch\140_Com_Status\CriticalDamage_1.ogg", "StealthWatch\140_Com_Status\CriticalDamage_2.ogg"};
			Danger[] = {"StealthWatch\100_Commands\Danger.ogg"};
			DeactivateCharge[] = {"StealthWatch\100_Commands\DeactivateCharge.ogg"};
			delta[] = {"StealthWatch\080_MoveAlphabet\delta.ogg"};
			DetonateCharge[] = {"StealthWatch\100_Commands\DetonateCharge.ogg"};
			Dimitirou[] = {"StealthWatch\020_Names\Dimitirou.ogg"};
			DisarmThatMine[] = {"StealthWatch\100_Commands\DisarmThatMine.ogg"};
			DisassembleThatWeapon[] = {"StealthWatch\100_Commands\DisassembleThatWeapon.ogg"};
			Disengage[] = {"StealthWatch\100_Commands\Disengage.ogg"};
			Dismount[] = {"StealthWatch\100_Commands\Dismount_1.ogg", "StealthWatch\100_Commands\Dismount_2.ogg"};
			dist100[] = {"StealthWatch\DistanceAbsolute1\dist100_1.ogg", "StealthWatch\DistanceAbsolute1\dist100_2.ogg", "StealthWatch\DistanceAbsolute1\dist100_3.ogg"};
			dist1000[] = {"StealthWatch\DistanceAbsolute1\dist1000_1.ogg", "StealthWatch\DistanceAbsolute1\dist1000_2.ogg", "StealthWatch\DistanceAbsolute1\dist1000_3.ogg"};
			dist1500[] = {"StealthWatch\DistanceAbsolute1\dist1500_1.ogg", "StealthWatch\DistanceAbsolute1\dist1500_2.ogg", "StealthWatch\DistanceAbsolute1\dist1500_3.ogg"};
			dist200[] = {"StealthWatch\DistanceAbsolute1\dist200_1.ogg", "StealthWatch\DistanceAbsolute1\dist200_2.ogg", "StealthWatch\DistanceAbsolute1\dist200_3.ogg"};
			dist2000[] = {"StealthWatch\DistanceAbsolute1\dist2000_1.ogg", "StealthWatch\DistanceAbsolute1\dist2000_2.ogg", "StealthWatch\DistanceAbsolute1\dist2000_3.ogg"};
			dist2500[] = {"StealthWatch\DistanceAbsolute1\dist2500_1.ogg", "StealthWatch\DistanceAbsolute1\dist2500_2.ogg", "StealthWatch\DistanceAbsolute1\dist2500_3.ogg"};
			dist300[] = {"StealthWatch\DistanceAbsolute1\dist300_1.ogg", "StealthWatch\DistanceAbsolute1\dist300_2.ogg", "StealthWatch\DistanceAbsolute1\dist300_3.ogg"};
			dist400[] = {"StealthWatch\DistanceAbsolute1\dist400_1.ogg", "StealthWatch\DistanceAbsolute1\dist400_2.ogg", "StealthWatch\DistanceAbsolute1\dist400_3.ogg"};
			dist500[] = {"StealthWatch\DistanceAbsolute1\dist500_1.ogg", "StealthWatch\DistanceAbsolute1\dist500_2.ogg", "StealthWatch\DistanceAbsolute1\dist500_3.ogg"};
			dist600[] = {"StealthWatch\DistanceAbsolute1\dist600_1.ogg", "StealthWatch\DistanceAbsolute1\dist600_2.ogg", "StealthWatch\DistanceAbsolute1\dist600_3.ogg"};
			dist700[] = {"StealthWatch\DistanceAbsolute1\dist700_1.ogg", "StealthWatch\DistanceAbsolute1\dist700_2.ogg", "StealthWatch\DistanceAbsolute1\dist700_3.ogg"};
			dist75[] = {"StealthWatch\DistanceAbsolute1\dist75_1.ogg", "StealthWatch\DistanceAbsolute1\dist75_2.ogg", "StealthWatch\DistanceAbsolute1\dist75_3.ogg"};
			dist800[] = {"StealthWatch\DistanceAbsolute1\dist800_1.ogg", "StealthWatch\DistanceAbsolute1\dist800_2.ogg", "StealthWatch\DistanceAbsolute1\dist800_3.ogg"};
			Dixon[] = {"StealthWatch\020_Names\Dixon.ogg"};
			dloc_base[] = {"StealthWatch\090_MoveLocations\dloc_base.ogg"};
			dloc_RV[] = {"StealthWatch\090_MoveLocations\dloc_RV.ogg"};
			DoNotFire[] = {"StealthWatch\100_Commands\DoNotFire.ogg"};
			DownAndQuiet[] = {"StealthWatch\100_Commands\DownAndQuiet.ogg"};
			DropThatMagazine[] = {"StealthWatch\100_Commands\DropThatMagazine.ogg"};
			DropTheWeapon[] = {"StealthWatch\100_Commands\DropTheWeapon.ogg"};
			DropYourPack[] = {"StealthWatch\100_Commands\DropYourPack.ogg"};
			east[] = {"StealthWatch\DirectionCompass1\east_1.ogg", "StealthWatch\DirectionCompass1\east_2.ogg"};
			echo[] = {"StealthWatch\080_MoveAlphabet\echo.ogg"};
			eight[] = {"StealthWatch\025_Numbers\eight.ogg"};
			eighteen[] = {"StealthWatch\025_Numbers\eighteen.ogg"};
			eighty[] = {"StealthWatch\025_Numbers\eighty.ogg"};
			Eject[] = {"StealthWatch\100_Commands\Eject_1.ogg", "StealthWatch\100_Commands\Eject_2.ogg"};
			eleven[] = {"StealthWatch\025_Numbers\eleven.ogg"};
			Elias[] = {"StealthWatch\020_Names\Elias.ogg"};
			EndangeredE[] = {"StealthWatch\200_CombatShouts\EndangeredE_1.ogg", "StealthWatch\200_CombatShouts\EndangeredE_2.ogg", "StealthWatch\200_CombatShouts\EndangeredE_3.ogg"};
			EnemyDetected[] = {"StealthWatch\150_Reporting\EnemyDetected_1.ogg", "StealthWatch\150_Reporting\EnemyDetected_2.ogg", "StealthWatch\150_Reporting\EnemyDetected_3.ogg", "StealthWatch\150_Reporting\EnemyDetected_4.ogg", "StealthWatch\150_Reporting\EnemyDetected_5.ogg", "StealthWatch\150_Reporting\EnemyDetected_6.ogg", "StealthWatch\150_Reporting\EnemyDetected_7.ogg", "StealthWatch\150_Reporting\EnemyDetected_8.ogg", "StealthWatch\150_Reporting\EnemyDetected_9.ogg", "StealthWatch\150_Reporting\EnemyDetected_10.ogg"};
			Engage[] = {"StealthWatch\015_Targeting\Engage_1.ogg", "StealthWatch\015_Targeting\Engage_2.ogg"};
			EngageAtWill[] = {"StealthWatch\100_Commands\EngageAtWill.ogg"};
			Engaging[] = {"StealthWatch\130_Com_Reply\Engaging.ogg"};
			EngagingTarget[] = {"StealthWatch\130_Com_Reply\EngagingTarget.ogg"};
			Everett[] = {"StealthWatch\020_Names\Everett.ogg"};
			ExplosiveDetected[] = {"StealthWatch\150_Reporting\ExplosiveDetected_1.ogg", "StealthWatch\150_Reporting\ExplosiveDetected_2.ogg", "StealthWatch\150_Reporting\ExplosiveDetected_3.ogg"};
			EyesOnTarget[] = {"StealthWatch\110_Com_Announce\EyesOnTarget.ogg"};
			Fahim[] = {"StealthWatch\020_Names\Fahim.ogg"};
			FallBack[] = {"StealthWatch\100_Commands\FallBack.ogg"};
			fifteen[] = {"StealthWatch\025_Numbers\fifteen.ogg"};
			fifty[] = {"StealthWatch\025_Numbers\fifty.ogg"};
			Fire[] = {"StealthWatch\015_Targeting\Fire_1.ogg", "StealthWatch\015_Targeting\Fire_2.ogg"};
			FireAtWill[] = {"StealthWatch\100_Commands\FireAtWill.ogg"};
			five[] = {"StealthWatch\025_Numbers\five.ogg"};
			FlankLeft[] = {"StealthWatch\100_Commands\FlankLeft.ogg"};
			FlankRight[] = {"StealthWatch\100_Commands\FlankRight.ogg"};
			Flares[] = {"StealthWatch\005_Weapons\Flares.ogg"};
			FlashlightsOff[] = {"StealthWatch\100_Commands\FlashlightsOff.ogg"};
			FlashlightsOn[] = {"StealthWatch\100_Commands\FlashlightsOn.ogg"};
			FormColumn[] = {"StealthWatch\100_Commands\FormColumn.ogg"};
			FormDiamond[] = {"StealthWatch\100_Commands\FormDiamond.ogg"};
			FormEcholonLeft[] = {"StealthWatch\100_Commands\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"StealthWatch\100_Commands\FormEcholonRight.ogg"};
			FormFile[] = {"StealthWatch\100_Commands\FormFile.ogg"};
			FormLine[] = {"StealthWatch\100_Commands\FormLine.ogg"};
			FormOnMe[] = {"StealthWatch\100_Commands\FormOnMe.ogg"};
			FormStaggeredColumn[] = {"StealthWatch\100_Commands\FormStaggeredColumn.ogg"};
			FormVee[] = {"StealthWatch\100_Commands\FormVee.ogg"};
			FormWedge[] = {"StealthWatch\100_Commands\FormWedge.ogg"};
			forty[] = {"StealthWatch\025_Numbers\forty.ogg"};
			four[] = {"StealthWatch\025_Numbers\four.ogg"};
			fourteen[] = {"StealthWatch\025_Numbers\fourteen.ogg"};
			Fox[] = {"StealthWatch\020_Names\Fox.ogg"};
			foxtrot[] = {"StealthWatch\080_MoveAlphabet\foxtrot.ogg"};
			Franklin[] = {"StealthWatch\020_Names\Franklin.ogg"};
			FreeToEngage[] = {"StealthWatch\100_Commands\FreeToEngage.ogg"};
			front[] = {"StealthWatch\DirectionRelative1\front_1.ogg", "StealthWatch\DirectionRelative1\front_2.ogg"};
			Frost[] = {"StealthWatch\020_Names\Frost.ogg"};
			FuelCritical[] = {"StealthWatch\140_Com_Status\FuelCritical_1.ogg", "StealthWatch\140_Com_Status\FuelCritical_2.ogg"};
			FuelLow[] = {"StealthWatch\140_Com_Status\FuelLow_1.ogg", "StealthWatch\140_Com_Status\FuelLow_2.ogg"};
			FXBreathingFast[] = {"StealthWatch\999_FX\FXBreathingFast.ogg"};
			FXBreathingSlow[] = {"StealthWatch\999_FX\FXBreathingSlow.ogg"};
			FXDeath[] = {"StealthWatch\999_FX\FXDeath_1.ogg", "StealthWatch\999_FX\FXDeath_2.ogg", "StealthWatch\999_FX\FXDeath_3.ogg", "StealthWatch\999_FX\FXDeath_4.ogg", "StealthWatch\999_FX\FXDeath_5.ogg"};
			FXDrowning[] = {"StealthWatch\999_FX\FXDrowning_1.ogg", "StealthWatch\999_FX\FXDrowning_2.ogg", "StealthWatch\999_FX\FXDrowning_3.ogg", "StealthWatch\999_FX\FXDrowning_4.ogg", "StealthWatch\999_FX\FXDrowning_5.ogg"};
			FXEffort[] = {"StealthWatch\999_FX\FXEffort_1.ogg", "StealthWatch\999_FX\FXEffort_2.ogg", "StealthWatch\999_FX\FXEffort_3.ogg", "StealthWatch\999_FX\FXEffort_4.ogg", "StealthWatch\999_FX\FXEffort_5.ogg"};
			FXHit[] = {"StealthWatch\999_FX\FXHit_1.ogg", "StealthWatch\999_FX\FXHit_2.ogg", "StealthWatch\999_FX\FXHit_3.ogg", "StealthWatch\999_FX\FXHit_4.ogg", "StealthWatch\999_FX\FXHit_5.ogg"};
			FXHurt[] = {"StealthWatch\999_FX\FXHurt_1.ogg", "StealthWatch\999_FX\FXHurt_2.ogg", "StealthWatch\999_FX\FXHurt_3.ogg", "StealthWatch\999_FX\FXHurt_4.ogg", "StealthWatch\999_FX\FXHurt_5.ogg"};
			Gekas[] = {"StealthWatch\020_Names\Gekas.ogg"};
			GenBaseSideEnemyEAST[] = {"StealthWatch\230_GenericRadioMessages\GenBaseSideEnemyEAST.ogg"};
			GenBaseSideEnemyGUER[] = {"StealthWatch\230_GenericRadioMessages\GenBaseSideEnemyGUER.ogg"};
			GenBaseSideEnemyWEST[] = {"StealthWatch\230_GenericRadioMessages\GenBaseSideEnemyWEST.ogg"};
			GenBaseSideFriendlyEAST[] = {"StealthWatch\230_GenericRadioMessages\GenBaseSideFriendlyEAST.ogg"};
			GenBaseSideFriendlyGUER[] = {"StealthWatch\230_GenericRadioMessages\GenBaseSideFriendlyGUER.ogg"};
			GenBaseSideFriendlyWEST[] = {"StealthWatch\230_GenericRadioMessages\GenBaseSideFriendlyWEST.ogg"};
			GenBaseUnlockRespawn1[] = {"StealthWatch\230_GenericRadioMessages\GenBaseUnlockRespawn1.ogg"};
			GenBaseUnlockRespawn2[] = {"StealthWatch\230_GenericRadioMessages\GenBaseUnlockRespawn2.ogg"};
			GenBaseUnlockRespawn3[] = {"StealthWatch\230_GenericRadioMessages\GenBaseUnlockRespawn3.ogg"};
			GenBaseUnlockVehicle1[] = {"StealthWatch\230_GenericRadioMessages\GenBaseUnlockVehicle1.ogg"};
			GenBaseUnlockVehicle2[] = {"StealthWatch\230_GenericRadioMessages\GenBaseUnlockVehicle2.ogg"};
			GenBaseUnlockVehicle3[] = {"StealthWatch\230_GenericRadioMessages\GenBaseUnlockVehicle3.ogg"};
			GenCmdDefend1[] = {"StealthWatch\230_GenericRadioMessages\GenCmdDefend1.ogg"};
			GenCmdDefend2[] = {"StealthWatch\230_GenericRadioMessages\GenCmdDefend2.ogg"};
			GenCmdRTB1[] = {"StealthWatch\230_GenericRadioMessages\GenCmdRTB1.ogg"};
			GenCmdRTB2[] = {"StealthWatch\230_GenericRadioMessages\GenCmdRTB2.ogg"};
			GenCmdSeize1[] = {"StealthWatch\230_GenericRadioMessages\GenCmdSeize1.ogg"};
			GenCmdSeize2[] = {"StealthWatch\230_GenericRadioMessages\GenCmdSeize2.ogg"};
			GenCmdTargetEscort[] = {"StealthWatch\230_GenericRadioMessages\GenCmdTargetEscort.ogg"};
			GenCmdTargetFind1[] = {"StealthWatch\230_GenericRadioMessages\GenCmdTargetFind1.ogg"};
			GenCmdTargetFind2[] = {"StealthWatch\230_GenericRadioMessages\GenCmdTargetFind2.ogg"};
			GenCmdTargetNeutralize1[] = {"StealthWatch\230_GenericRadioMessages\GenCmdTargetNeutralize1.ogg"};
			GenCmdTargetNeutralize2[] = {"StealthWatch\230_GenericRadioMessages\GenCmdTargetNeutralize2.ogg"};
			GenCmdTargetProtect1[] = {"StealthWatch\230_GenericRadioMessages\GenCmdTargetProtect1.ogg"};
			GenCmdTargetProtect2[] = {"StealthWatch\230_GenericRadioMessages\GenCmdTargetProtect2.ogg"};
			GenComplete1[] = {"StealthWatch\230_GenericRadioMessages\GenComplete1.ogg"};
			GenComplete2[] = {"StealthWatch\230_GenericRadioMessages\GenComplete2.ogg"};
			GenComplete3[] = {"StealthWatch\230_GenericRadioMessages\GenComplete3.ogg"};
			GenIncoming1[] = {"StealthWatch\230_GenericRadioMessages\GenIncoming1.ogg"};
			GenIncoming2[] = {"StealthWatch\230_GenericRadioMessages\GenIncoming2.ogg"};
			GenIncoming3[] = {"StealthWatch\230_GenericRadioMessages\GenIncoming3.ogg"};
			GenLeavingAO1[] = {"StealthWatch\230_GenericRadioMessages\GenLeavingAO1.ogg"};
			GenLeavingAO2[] = {"StealthWatch\230_GenericRadioMessages\GenLeavingAO2.ogg"};
			GenLeavingAO3[] = {"StealthWatch\230_GenericRadioMessages\GenLeavingAO3.ogg"};
			GenLosing1[] = {"StealthWatch\230_GenericRadioMessages\GenLosing1.ogg"};
			GenLosing2[] = {"StealthWatch\230_GenericRadioMessages\GenLosing2.ogg"};
			GenLosing3[] = {"StealthWatch\230_GenericRadioMessages\GenLosing3.ogg"};
			GenLost1[] = {"StealthWatch\230_GenericRadioMessages\GenLost1.ogg"};
			GenLost2[] = {"StealthWatch\230_GenericRadioMessages\GenLost2.ogg"};
			GenLost3[] = {"StealthWatch\230_GenericRadioMessages\GenLost3.ogg"};
			GenReinforcementsArrived1[] = {"StealthWatch\230_GenericRadioMessages\GenReinforcementsArrived1.ogg"};
			GenReinforcementsArrived2[] = {"StealthWatch\230_GenericRadioMessages\GenReinforcementsArrived2.ogg"};
			GenReinforcementsConfirmed1[] = {"StealthWatch\230_GenericRadioMessages\GenReinforcementsConfirmed1.ogg"};
			GenReinforcementsConfirmed2[] = {"StealthWatch\230_GenericRadioMessages\GenReinforcementsConfirmed2.ogg"};
			GenReinforcementsRejected1[] = {"StealthWatch\230_GenericRadioMessages\GenReinforcementsRejected1.ogg"};
			GenReinforcementsRejected2[] = {"StealthWatch\230_GenericRadioMessages\GenReinforcementsRejected2.ogg"};
			GenTime1[] = {"StealthWatch\230_GenericRadioMessages\GenTime1.ogg"};
			GenTime2[] = {"StealthWatch\230_GenericRadioMessages\GenTime2.ogg"};
			GenTime3[] = {"StealthWatch\230_GenericRadioMessages\GenTime3.ogg"};
			GetInThatVehicle[] = {"StealthWatch\100_Commands\GetInThatVehicle.ogg"};
			GetInThatVehicleCommander[] = {"StealthWatch\100_Commands\GetInThatVehicleCommander.ogg"};
			GetInThatVehicleDriver[] = {"StealthWatch\100_Commands\GetInThatVehicleDriver.ogg"};
			GetInThatVehicleGunner[] = {"StealthWatch\100_Commands\GetInThatVehicleGunner.ogg"};
			GetInThatVehiclePilot[] = {"StealthWatch\100_Commands\GetInThatVehiclePilot.ogg"};
			GetReadyToFight[] = {"StealthWatch\100_Commands\GetReadyToFight.ogg"};
			GetSupport[] = {"StealthWatch\100_Commands\GetSupport.ogg"};
			Ghost[] = {"StealthWatch\020_Names\Ghost.ogg"};
			Givens[] = {"StealthWatch\020_Names\Givens.ogg"};
			golf[] = {"StealthWatch\080_MoveAlphabet\golf.ogg"};
			GoProne[] = {"StealthWatch\100_Commands\GoProne_1.ogg", "StealthWatch\100_Commands\GoProne_2.ogg"};
			GoToThatMedic[] = {"StealthWatch\100_Commands\GoToThatMedic.ogg"};
			GoToTheMedic[] = {"StealthWatch\100_Commands\GoToTheMedic.ogg"};
			greenTeam[] = {"StealthWatch\030_Teams\greenTeam.ogg"};
			grid_eight[] = {"StealthWatch\035_NumbersGrid\grid_eight_1.ogg", "StealthWatch\035_NumbersGrid\grid_eight_2.ogg"};
			grid_eight_2[] = {"StealthWatch\035_NumbersGrid\grid_eight_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_eight_2_2.ogg"};
			grid_eight_3[] = {"StealthWatch\035_NumbersGrid\grid_eight_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_eight_3_2.ogg"};
			grid_five[] = {"StealthWatch\035_NumbersGrid\grid_five_1.ogg", "StealthWatch\035_NumbersGrid\grid_five_2.ogg"};
			grid_five_2[] = {"StealthWatch\035_NumbersGrid\grid_five_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_five_2_2.ogg"};
			grid_five_3[] = {"StealthWatch\035_NumbersGrid\grid_five_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_five_3_2.ogg"};
			grid_four[] = {"StealthWatch\035_NumbersGrid\grid_four_1.ogg", "StealthWatch\035_NumbersGrid\grid_four_2.ogg"};
			grid_four_2[] = {"StealthWatch\035_NumbersGrid\grid_four_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_four_2_2.ogg"};
			grid_four_3[] = {"StealthWatch\035_NumbersGrid\grid_four_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_four_3_2.ogg"};
			grid_move_to_eight[] = {"StealthWatch\035_NumbersGrid\grid_move_to_eight_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_eight_2.ogg"};
			grid_move_to_five[] = {"StealthWatch\035_NumbersGrid\grid_move_to_five_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_five_2.ogg"};
			grid_move_to_four[] = {"StealthWatch\035_NumbersGrid\grid_move_to_four_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_four_2.ogg"};
			grid_move_to_nine[] = {"StealthWatch\035_NumbersGrid\grid_move_to_nine_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_nine_2.ogg"};
			grid_move_to_one[] = {"StealthWatch\035_NumbersGrid\grid_move_to_one_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_one_2.ogg"};
			grid_move_to_seven[] = {"StealthWatch\035_NumbersGrid\grid_move_to_seven_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_seven_2.ogg"};
			grid_move_to_six[] = {"StealthWatch\035_NumbersGrid\grid_move_to_six_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_six_2.ogg"};
			grid_move_to_three[] = {"StealthWatch\035_NumbersGrid\grid_move_to_three_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_three_2.ogg"};
			grid_move_to_two[] = {"StealthWatch\035_NumbersGrid\grid_move_to_two_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_two_2.ogg"};
			grid_move_to_zero[] = {"StealthWatch\035_NumbersGrid\grid_move_to_zero_1.ogg", "StealthWatch\035_NumbersGrid\grid_move_to_zero_2.ogg"};
			grid_nine[] = {"StealthWatch\035_NumbersGrid\grid_nine_1.ogg", "StealthWatch\035_NumbersGrid\grid_nine_2.ogg"};
			grid_nine_2[] = {"StealthWatch\035_NumbersGrid\grid_nine_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_nine_2_2.ogg"};
			grid_nine_3[] = {"StealthWatch\035_NumbersGrid\grid_nine_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_nine_3_2.ogg"};
			grid_one[] = {"StealthWatch\035_NumbersGrid\grid_one_1.ogg", "StealthWatch\035_NumbersGrid\grid_one_2.ogg"};
			grid_one_2[] = {"StealthWatch\035_NumbersGrid\grid_one_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_one_2_2.ogg"};
			grid_one_3[] = {"StealthWatch\035_NumbersGrid\grid_one_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_one_3_2.ogg"};
			grid_seven[] = {"StealthWatch\035_NumbersGrid\grid_seven_1.ogg", "StealthWatch\035_NumbersGrid\grid_seven_2.ogg"};
			grid_seven_2[] = {"StealthWatch\035_NumbersGrid\grid_seven_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_seven_2_2.ogg"};
			grid_seven_3[] = {"StealthWatch\035_NumbersGrid\grid_seven_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_seven_3_2.ogg"};
			grid_six[] = {"StealthWatch\035_NumbersGrid\grid_six_1.ogg", "StealthWatch\035_NumbersGrid\grid_six_2.ogg"};
			grid_six_2[] = {"StealthWatch\035_NumbersGrid\grid_six_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_six_2_2.ogg"};
			grid_six_3[] = {"StealthWatch\035_NumbersGrid\grid_six_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_six_3_2.ogg"};
			grid_three[] = {"StealthWatch\035_NumbersGrid\grid_three_1.ogg", "StealthWatch\035_NumbersGrid\grid_three_2.ogg"};
			grid_three_2[] = {"StealthWatch\035_NumbersGrid\grid_three_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_three_2_2.ogg"};
			grid_three_3[] = {"StealthWatch\035_NumbersGrid\grid_three_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_three_3_2.ogg"};
			grid_two[] = {"StealthWatch\035_NumbersGrid\grid_two_1.ogg", "StealthWatch\035_NumbersGrid\grid_two_2.ogg"};
			grid_two_2[] = {"StealthWatch\035_NumbersGrid\grid_two_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_two_2_2.ogg"};
			grid_two_3[] = {"StealthWatch\035_NumbersGrid\grid_two_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_two_3_2.ogg"};
			grid_zero[] = {"StealthWatch\035_NumbersGrid\grid_zero_1.ogg", "StealthWatch\035_NumbersGrid\grid_zero_2.ogg"};
			grid_zero_2[] = {"StealthWatch\035_NumbersGrid\grid_zero_2_1.ogg", "StealthWatch\035_NumbersGrid\grid_zero_2_2.ogg"};
			grid_zero_3[] = {"StealthWatch\035_NumbersGrid\grid_zero_3_1.ogg", "StealthWatch\035_NumbersGrid\grid_zero_3_2.ogg"};
			Habibi[] = {"StealthWatch\020_Names\Habibi.ogg"};
			Halt[] = {"StealthWatch\100_Commands\Halt.ogg"};
			Hardy[] = {"StealthWatch\020_Names\Hardy.ogg"};
			Hawkins[] = {"StealthWatch\020_Names\Hawkins.ogg"};
			HealThatSoldier[] = {"StealthWatch\100_Commands\HealThatSoldier.ogg"};
			HealthIAmBadlyHurt[] = {"StealthWatch\140_Com_Status\HealthIAmBadlyHurt.ogg"};
			HealthIAmWounded[] = {"StealthWatch\140_Com_Status\HealthIAmWounded.ogg"};
			HealthINeedHelpNow[] = {"StealthWatch\140_Com_Status\HealthINeedHelpNow.ogg"};
			HealthINeedSomeHelpHere[] = {"StealthWatch\140_Com_Status\HealthINeedSomeHelpHere.ogg"};
			HealthInjured[] = {"StealthWatch\140_Com_Status\HealthInjured.ogg"};
			HealthMedic[] = {"StealthWatch\140_Com_Status\HealthMedic.ogg"};
			HealthNeedHelp[] = {"StealthWatch\140_Com_Status\HealthNeedHelp.ogg"};
			HealthNeedMedicNow[] = {"StealthWatch\140_Com_Status\HealthNeedMedicNow.ogg"};
			HealthSomebodyHelpMe[] = {"StealthWatch\140_Com_Status\HealthSomebodyHelpMe.ogg"};
			HealthWounded[] = {"StealthWatch\140_Com_Status\HealthWounded.ogg"};
			heat[] = {"StealthWatch\005_Weapons\heat.ogg"};
			HeIsDeadE[] = {"StealthWatch\140_Com_Status\HeIsDeadE.ogg"};
			HeIsDown[] = {"StealthWatch\110_Com_Announce\HeIsDown.ogg"};
			HeIsHitE[] = {"StealthWatch\140_Com_Status\HeIsHitE.ogg"};
			HelpThatSoldier[] = {"StealthWatch\100_Commands\HelpThatSoldier.ogg"};
			HoldFire[] = {"StealthWatch\100_Commands\HoldFire.ogg"};
			HostileDown[] = {"StealthWatch\110_Com_Announce\HostileDown.ogg"};
			hotel[] = {"StealthWatch\080_MoveAlphabet\hotel.ogg"};
			hundred[] = {"StealthWatch\025_Numbers\hundred.ogg"};
			IAmReady[] = {"StealthWatch\110_Com_Announce\IAmReady.ogg"};
			IAmTheNewActual[] = {"StealthWatch\110_Com_Announce\IAmTheNewActual.ogg"};
			IncomingGrenadeE_1[] = {"StealthWatch\200_CombatShouts\IncomingGrenadeE_1.ogg"};
			IncomingGrenadeE_2[] = {"StealthWatch\200_CombatShouts\IncomingGrenadeE_2.ogg"};
			IncomingGrenadeE_3[] = {"StealthWatch\200_CombatShouts\IncomingGrenadeE_3.ogg"};
			india[] = {"StealthWatch\080_MoveAlphabet\india.ogg"};
			IVeGotHim[] = {"StealthWatch\110_Com_Announce\IVeGotHim.ogg"};
			Jackson[] = {"StealthWatch\020_Names\Jackson.ogg"};
			James[] = {"StealthWatch\020_Names\James.ogg"};
			Jawadi[] = {"StealthWatch\020_Names\Jawadi.ogg"};
			Jester[] = {"StealthWatch\020_Names\Jester.ogg"};
			JoinThatGroup[] = {"StealthWatch\100_Commands\JoinThatGroup.ogg"};
			juliet[] = {"StealthWatch\080_MoveAlphabet\juliet.ogg"};
			KeepFocused[] = {"StealthWatch\100_Commands\KeepFocused.ogg"};
			KeepFormation[] = {"StealthWatch\100_Commands\KeepFormation.ogg"};
			Kerry[] = {"StealthWatch\020_Names\Kerry.ogg"};
			kilo[] = {"StealthWatch\080_MoveAlphabet\kilo.ogg"};
			Korneedler[] = {"StealthWatch\020_Names\Korneedler.ogg"};
			Kouris[] = {"StealthWatch\020_Names\Kouris.ogg"};
			Kushan[] = {"StealthWatch\020_Names\Kushan.ogg"};
			Lacey[] = {"StealthWatch\020_Names\Lacey.ogg"};
			Larkin[] = {"StealthWatch\020_Names\Larkin.ogg"};
			left[] = {"StealthWatch\DirectionRelative1\left_1.ogg", "StealthWatch\DirectionRelative1\left_2.ogg"};
			Leventis[] = {"StealthWatch\020_Names\Leventis.ogg"};
			Levine[] = {"StealthWatch\020_Names\Levine.ogg"};
			LightThatFire[] = {"StealthWatch\100_Commands\LightThatFire.ogg"};
			lima[] = {"StealthWatch\080_MoveAlphabet\lima.ogg"};
			loc_beach[] = {"StealthWatch\090_MoveLocations\loc_beach.ogg"};
			loc_city[] = {"StealthWatch\090_MoveLocations\loc_city.ogg"};
			loc_forest[] = {"StealthWatch\090_MoveLocations\loc_forest.ogg"};
			loc_town[] = {"StealthWatch\090_MoveLocations\loc_town.ogg"};
			loc_village[] = {"StealthWatch\090_MoveLocations\loc_village.ogg"};
			LockAndLoad[] = {"StealthWatch\100_Commands\LockAndLoad.ogg"};
			Lopez[] = {"StealthWatch\020_Names\Lopez.ogg"};
			ManDownE[] = {"StealthWatch\140_Com_Status\ManDownE_1.ogg", "StealthWatch\140_Com_Status\ManDownE_2.ogg", "StealthWatch\140_Com_Status\ManDownE_3.ogg"};
			ManualFire[] = {"StealthWatch\100_Commands\ManualFire_1.ogg", "StealthWatch\100_Commands\ManualFire_2.ogg", "StealthWatch\100_Commands\ManualFire_3.ogg"};
			Markos[] = {"StealthWatch\020_Names\Markos.ogg"};
			Martinez[] = {"StealthWatch\020_Names\Martinez.ogg"};
			Masood[] = {"StealthWatch\020_Names\Masood.ogg"};
			McKay[] = {"StealthWatch\020_Names\McKay.ogg"};
			McKendrick[] = {"StealthWatch\020_Names\McKendrick.ogg"};
			mgun[] = {"StealthWatch\005_Weapons\mgun.ogg"};
			mike[] = {"StealthWatch\080_MoveAlphabet\mike.ogg"};
			Miller[] = {"StealthWatch\020_Names\Miller.ogg"};
			MineDetected[] = {"StealthWatch\150_Reporting\MineDetected_1.ogg", "StealthWatch\150_Reporting\MineDetected_2.ogg", "StealthWatch\150_Reporting\MineDetected_3.ogg"};
			missiles[] = {"StealthWatch\005_Weapons\missiles.ogg"};
			move_dist100[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist100.ogg"};
			move_dist1000[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist1000.ogg"};
			move_dist1500[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist1500.ogg"};
			move_dist200[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist200.ogg"};
			move_dist2000[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist2000.ogg"};
			move_dist2500[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist2500.ogg"};
			move_dist300[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist300.ogg"};
			move_dist400[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist400.ogg"};
			move_dist500[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist500.ogg"};
			move_dist600[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist600.ogg"};
			move_dist700[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist700.ogg"};
			move_dist75[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist75.ogg"};
			move_dist800[] = {"StealthWatch\040_MoveDistanceAbsolute1\move_dist800.ogg"};
			moveBack[] = {"StealthWatch\070_MoveDirectionRelative1\moveBack_1.ogg", "StealthWatch\070_MoveDirectionRelative1\moveBack_2.ogg"};
			moveLeft[] = {"StealthWatch\070_MoveDirectionRelative1\moveLeft_1.ogg", "StealthWatch\070_MoveDirectionRelative1\moveLeft_2.ogg"};
			moveRight[] = {"StealthWatch\070_MoveDirectionRelative1\moveRight_1.ogg", "StealthWatch\070_MoveDirectionRelative1\moveRight_2.ogg"};
			MoveToCargo[] = {"StealthWatch\100_Commands\MoveToCargo.ogg"};
			moveUp[] = {"StealthWatch\070_MoveDirectionRelative1\moveUp_1.ogg", "StealthWatch\070_MoveDirectionRelative1\moveUp_2.ogg"};
			Nazari[] = {"StealthWatch\020_Names\Nazari.ogg"};
			Negative[] = {"StealthWatch\130_Com_Reply\Negative_1.ogg", "StealthWatch\130_Com_Reply\Negative_2.ogg", "StealthWatch\130_Com_Reply\Negative_3.ogg"};
			NegativeCantMakeItThere[] = {"StealthWatch\130_Com_Reply\NegativeCantMakeItThere.ogg"};
			Nichols[] = {"StealthWatch\020_Names\Nichols.ogg"};
			Nicolo[] = {"StealthWatch\020_Names\Nicolo.ogg"};
			Nikas[] = {"StealthWatch\020_Names\Nikas.ogg"};
			nine[] = {"StealthWatch\025_Numbers\nine.ogg"};
			nineteen[] = {"StealthWatch\025_Numbers\nineteen.ogg"};
			ninety[] = {"StealthWatch\025_Numbers\ninety.ogg"};
			NoCanDo[] = {"StealthWatch\130_Com_Reply\NoCanDo_1.ogg", "StealthWatch\130_Com_Reply\NoCanDo_2.ogg"};
			north[] = {"StealthWatch\DirectionCompass1\north_1.ogg", "StealthWatch\DirectionCompass1\north_2.ogg"};
			northEast[] = {"StealthWatch\DirectionCompass1\northEast_1.ogg", "StealthWatch\DirectionCompass1\northEast_2.ogg"};
			Northgate[] = {"StealthWatch\020_Names\Northgate.ogg"};
			northWest[] = {"StealthWatch\DirectionCompass1\northWest_1.ogg", "StealthWatch\DirectionCompass1\northWest_2.ogg"};
			NoTarget[] = {"StealthWatch\015_Targeting\NoTarget_1.ogg", "StealthWatch\015_Targeting\NoTarget_2.ogg"};
			november[] = {"StealthWatch\080_MoveAlphabet\november.ogg"};
			obj_church[] = {"StealthWatch\090_MoveLocations\obj_church.ogg"};
			obj_fortress[] = {"StealthWatch\090_MoveLocations\obj_fortress.ogg"};
			obj_lighthouse[] = {"StealthWatch\090_MoveLocations\obj_lighthouse.ogg"};
			obj_powersolar[] = {"StealthWatch\090_MoveLocations\obj_powersolar.ogg"};
			obj_powerwind[] = {"StealthWatch\090_MoveLocations\obj_powerwind.ogg"};
			obj_transmitter[] = {"StealthWatch\090_MoveLocations\obj_transmitter.ogg"};
			ObserveThatPosition[] = {"StealthWatch\100_Commands\ObserveThatPosition.ogg"};
			OConnor[] = {"StealthWatch\020_Names\OConnor.ogg"};
			one[] = {"StealthWatch\025_Numbers\one.ogg"};
			OnTheMove[] = {"StealthWatch\130_Com_Reply\OnTheMove.ogg"};
			OnTheWay[] = {"StealthWatch\130_Com_Reply\OnTheWay_1.ogg", "StealthWatch\130_Com_Reply\OnTheWay_2.ogg", "StealthWatch\130_Com_Reply\OnTheWay_3.ogg"};
			OnYourFeet[] = {"StealthWatch\100_Commands\OnYourFeet.ogg"};
			OpenThatDoor[] = {"StealthWatch\100_Commands\OpenThatDoor.ogg"};
			OpenUpYourPack[] = {"StealthWatch\100_Commands\OpenUpYourPack.ogg"};
			oscar[] = {"StealthWatch\080_MoveAlphabet\oscar.ogg"};
			OutOfFirstAidKits[] = {"StealthWatch\140_Com_Status\OutOfFirstAidKits_1.ogg", "StealthWatch\140_Com_Status\OutOfFirstAidKits_2.ogg"};
			Panas[] = {"StealthWatch\020_Names\Panas.ogg"};
			papa[] = {"StealthWatch\080_MoveAlphabet\papa.ogg"};
			PatchYourself[] = {"StealthWatch\100_Commands\PatchYourself.ogg"};
			Patterson[] = {"StealthWatch\020_Names\Patterson.ogg"};
			Petros[] = {"StealthWatch\020_Names\Petros.ogg"};
			PointersOff[] = {"StealthWatch\100_Commands\PointersOff.ogg"};
			PointersOn[] = {"StealthWatch\100_Commands\PointersOn.ogg"};
			PrepareForContact[] = {"StealthWatch\100_Commands\PrepareForContact.ogg"};
			PutOutThatFire[] = {"StealthWatch\100_Commands\PutOutThatFire.ogg"};
			quebec[] = {"StealthWatch\080_MoveAlphabet\quebec.ogg"};
			RallyUp[] = {"StealthWatch\100_Commands\RallyUp.ogg"};
			Razer[] = {"StealthWatch\020_Names\Razer.ogg"};
			Ready[] = {"StealthWatch\110_Com_Announce\Ready.ogg"};
			ReadyForOrders[] = {"StealthWatch\110_Com_Announce\ReadyForOrders.ogg"};
			ReadyToFire[] = {"StealthWatch\110_Com_Announce\ReadyToFire.ogg"};
			Rearm[] = {"StealthWatch\100_Commands\Rearm.ogg"};
			redTeam[] = {"StealthWatch\030_Teams\redTeam.ogg"};
			RefuelThatVehicle[] = {"StealthWatch\100_Commands\RefuelThatVehicle.ogg"};
			RefuelTheVehicle[] = {"StealthWatch\100_Commands\RefuelTheVehicle.ogg"};
			Regroup[] = {"StealthWatch\100_Commands\Regroup.ogg"};
			Relax[] = {"StealthWatch\100_Commands\Relax.ogg"};
			ReloadingE[] = {"StealthWatch\200_CombatShouts\ReloadingE_1.ogg", "StealthWatch\200_CombatShouts\ReloadingE_2.ogg", "StealthWatch\200_CombatShouts\ReloadingE_3.ogg", "StealthWatch\200_CombatShouts\ReloadingE_4.ogg", "StealthWatch\200_CombatShouts\ReloadingE_5.ogg", "StealthWatch\200_CombatShouts\ReloadingE_6.ogg", "StealthWatch\200_CombatShouts\ReloadingE_7.ogg"};
			RepairThatVehicle[] = {"StealthWatch\100_Commands\RepairThatVehicle.ogg"};
			RepairTheVehicle[] = {"StealthWatch\100_Commands\RepairTheVehicle.ogg"};
			RepeatLastOver[] = {"StealthWatch\120_Com_Ask\RepeatLastOver.ogg"};
			reportBack[] = {"StealthWatch\DirectionRelative3\reportBack_1.ogg", "StealthWatch\DirectionRelative3\reportBack_2.ogg"};
			reportFront[] = {"StealthWatch\DirectionRelative3\reportFront_1.ogg", "StealthWatch\DirectionRelative3\reportFront_2.ogg"};
			ReportIn[] = {"StealthWatch\120_Com_Ask\ReportIn.ogg"};
			reportLeft[] = {"StealthWatch\DirectionRelative3\reportLeft_1.ogg", "StealthWatch\DirectionRelative3\reportLeft_2.ogg"};
			ReportPosition[] = {"StealthWatch\120_Com_Ask\ReportPosition.ogg"};
			reportRight[] = {"StealthWatch\DirectionRelative3\reportRight_1.ogg", "StealthWatch\DirectionRelative3\reportRight_2.ogg"};
			RequestAccomplishedSGArty[] = {"StealthWatch\220_Support\RequestAccomplishedSGArty.ogg"};
			RequestAccomplishedSGCASBombing[] = {"StealthWatch\220_Support\RequestAccomplishedSGCASBombing.ogg"};
			RequestAccomplishedSGCASHelicopter[] = {"StealthWatch\220_Support\RequestAccomplishedSGCASHelicopter.ogg"};
			RequestAccomplishedSGSupplyDrop[] = {"StealthWatch\220_Support\RequestAccomplishedSGSupplyDrop.ogg"};
			RequestAccomplishedSGTransport[] = {"StealthWatch\220_Support\RequestAccomplishedSGTransport.ogg"};
			RequestAccomplishedSGUAV[] = {"StealthWatch\220_Support\RequestAccomplishedSGUAV.ogg"};
			RequestAcknowledgedSGArty[] = {"StealthWatch\220_Support\RequestAcknowledgedSGArty.ogg"};
			RequestAcknowledgedSGCASBombing[] = {"StealthWatch\220_Support\RequestAcknowledgedSGCASBombing.ogg"};
			RequestAcknowledgedSGCASHelicopter[] = {"StealthWatch\220_Support\RequestAcknowledgedSGCASHelicopter.ogg"};
			RequestAcknowledgedSGSupplyDrop[] = {"StealthWatch\220_Support\RequestAcknowledgedSGSupplyDrop.ogg"};
			RequestAcknowledgedSGUAV[] = {"StealthWatch\220_Support\RequestAcknowledgedSGUAV.ogg"};
			RequestAcknowledgedTransport[] = {"StealthWatch\220_Support\RequestAcknowledgedTransport.ogg"};
			RequestingSupport[] = {"StealthWatch\100_Commands\RequestingSupport.ogg"};
			ReturnToFormation[] = {"StealthWatch\100_Commands\ReturnToFormation.ogg"};
			Reynolds[] = {"StealthWatch\020_Names\Reynolds.ogg"};
			right[] = {"StealthWatch\DirectionRelative1\right_1.ogg", "StealthWatch\DirectionRelative1\right_2.ogg"};
			Rockets[] = {"StealthWatch\005_Weapons\Rockets.ogg"};
			RocketsPairs[] = {"StealthWatch\005_Weapons\RocketsPairs.ogg"};
			RocketsSalvo[] = {"StealthWatch\005_Weapons\RocketsSalvo.ogg"};
			romeo[] = {"StealthWatch\080_MoveAlphabet\romeo.ogg"};
			Rosi[] = {"StealthWatch\020_Names\Rosi.ogg"};
			RoundsComplete[] = {"StealthWatch\100_Commands\RoundsComplete.ogg"};
			Ryan[] = {"StealthWatch\020_Names\Ryan.ogg"};
			sabot[] = {"StealthWatch\005_Weapons\sabot.ogg"};
			Safe[] = {"StealthWatch\100_Commands\Safe_1.ogg", "StealthWatch\100_Commands\Safe_2.ogg"};
			Samaras[] = {"StealthWatch\020_Names\Samaras.ogg"};
			SayAgainOver[] = {"StealthWatch\120_Com_Ask\SayAgainOver.ogg"};
			ScanHorizon[] = {"StealthWatch\100_Commands\ScanHorizon.ogg"};
			ScratchOne[] = {"StealthWatch\110_Com_Announce\ScratchOne.ogg"};
			ScreamingE[] = {"StealthWatch\200_CombatShouts\ScreamingE_1.ogg", "StealthWatch\200_CombatShouts\ScreamingE_2.ogg", "StealthWatch\200_CombatShouts\ScreamingE_3.ogg", "StealthWatch\200_CombatShouts\ScreamingE_4.ogg"};
			SetCharge[] = {"StealthWatch\100_Commands\SetCharge.ogg"};
			SetTheTimer[] = {"StealthWatch\100_Commands\SetTheTimer.ogg"};
			seven[] = {"StealthWatch\025_Numbers\seven.ogg"};
			seventeen[] = {"StealthWatch\025_Numbers\seventeen.ogg"};
			seventy[] = {"StealthWatch\025_Numbers\seventy.ogg"};
			Siddiqi[] = {"StealthWatch\020_Names\Siddiqi.ogg"};
			sierra[] = {"StealthWatch\080_MoveAlphabet\sierra.ogg"};
			Silence[] = {"StealthWatch\100_Commands\Silence.ogg"};
			Sitrep[] = {"StealthWatch\120_Com_Ask\Sitrep.ogg"};
			six[] = {"StealthWatch\025_Numbers\six.ogg"};
			sixteen[] = {"StealthWatch\025_Numbers\sixteen.ogg"};
			sixty[] = {"StealthWatch\025_Numbers\sixty.ogg"};
			Snake[] = {"StealthWatch\020_Names\Snake.ogg"};
			south[] = {"StealthWatch\DirectionCompass1\south_1.ogg", "StealthWatch\DirectionCompass1\south_2.ogg"};
			southEast[] = {"StealthWatch\DirectionCompass1\southEast_1.ogg", "StealthWatch\DirectionCompass1\southEast_2.ogg"};
			southWest[] = {"StealthWatch\DirectionCompass1\southWest_1.ogg", "StealthWatch\DirectionCompass1\southWest_2.ogg"};
			StandingBy[] = {"StealthWatch\110_Com_Announce\StandingBy.ogg"};
			Stavrou[] = {"StealthWatch\020_Names\Stavrou.ogg"};
			StayAlert[] = {"StealthWatch\100_Commands\StayAlert.ogg"};
			StayBack[] = {"StealthWatch\100_Commands\StayBack.ogg"};
			StayInFormation[] = {"StealthWatch\100_Commands\StayInFormation.ogg"};
			StayLow[] = {"StealthWatch\100_Commands\StayLow.ogg"};
			Stop[] = {"StealthWatch\100_Commands\Stop.ogg"};
			Stranger[] = {"StealthWatch\020_Names\Stranger.ogg"};
			SupportAddedDuringMission[] = {"StealthWatch\220_Support\SupportAddedDuringMission.ogg"};
			Supporting[] = {"StealthWatch\130_Com_Reply\Supporting.ogg"};
			SupportRequestRGArty[] = {"StealthWatch\220_Support\SupportRequestRGArty.ogg"};
			SupportRequestRGCASBombing[] = {"StealthWatch\220_Support\SupportRequestRGCASBombing.ogg"};
			SupportRequestRGCASHelicopter[] = {"StealthWatch\220_Support\SupportRequestRGCASHelicopter.ogg"};
			SupportRequestRGSupplyDrop[] = {"StealthWatch\220_Support\SupportRequestRGSupplyDrop.ogg"};
			SupportRequestRGTransport[] = {"StealthWatch\220_Support\SupportRequestRGTransport.ogg"};
			SupportRequestRGUAV[] = {"StealthWatch\220_Support\SupportRequestRGUAV.ogg"};
			Suppressing[] = {"StealthWatch\130_Com_Reply\Suppressing_1.ogg", "StealthWatch\130_Com_Reply\Suppressing_2.ogg"};
			SuppressingE[] = {"StealthWatch\200_CombatShouts\SuppressingE_1.ogg", "StealthWatch\200_CombatShouts\SuppressingE_2.ogg", "StealthWatch\200_CombatShouts\SuppressingE_3.ogg", "StealthWatch\200_CombatShouts\SuppressingE_4.ogg"};
			SuppressiveFire[] = {"StealthWatch\100_Commands\SuppressiveFire.ogg"};
			SwitchToCommander[] = {"StealthWatch\100_Commands\SwitchToCommander.ogg"};
			SwitchToDriver[] = {"StealthWatch\100_Commands\SwitchToDriver.ogg"};
			SwitchToGunner[] = {"StealthWatch\100_Commands\SwitchToGunner.ogg"};
			Sykes[] = {"StealthWatch\020_Names\Sykes.ogg"};
			TakeCover[] = {"StealthWatch\100_Commands\TakeCover.ogg"};
			TakeThatMagazine[] = {"StealthWatch\100_Commands\TakeThatMagazine.ogg"};
			TakeThatMine[] = {"StealthWatch\100_Commands\TakeThatMine.ogg"};
			TakeThatPack[] = {"StealthWatch\100_Commands\TakeThatPack.ogg"};
			TakeThatWeapon[] = {"StealthWatch\100_Commands\TakeThatWeapon.ogg"};
			TakeTheMagazine[] = {"StealthWatch\100_Commands\TakeTheMagazine.ogg"};
			TakeTheWeapon[] = {"StealthWatch\100_Commands\TakeTheWeapon.ogg"};
			Takhtar[] = {"StealthWatch\020_Names\Takhtar.ogg"};
			TakingCommand[] = {"StealthWatch\110_Com_Announce\TakingCommand.ogg"};
			tango[] = {"StealthWatch\080_MoveAlphabet\tango.ogg"};
			Tanny[] = {"StealthWatch\020_Names\Tanny.ogg"};
			Target[] = {"StealthWatch\015_Targeting\Target_1.ogg", "StealthWatch\015_Targeting\Target_2.ogg"};
			TargetAcquired[] = {"StealthWatch\110_Com_Announce\TargetAcquired.ogg"};
			TargetEliminated[] = {"StealthWatch\110_Com_Announce\TargetEliminated.ogg"};
			TargetInSight[] = {"StealthWatch\110_Com_Announce\TargetInSight.ogg"};
			TargetIsDown[] = {"StealthWatch\110_Com_Announce\TargetIsDown.ogg"};
			TargetIsNeutralized[] = {"StealthWatch\110_Com_Announce\TargetIsNeutralized.ogg"};
			Taylor[] = {"StealthWatch\020_Names\Taylor.ogg"};
			ten[] = {"StealthWatch\025_Numbers\ten.ogg"};
			Thanos[] = {"StealthWatch\020_Names\Thanos.ogg"};
			thirteen[] = {"StealthWatch\025_Numbers\thirteen.ogg"};
			thirty[] = {"StealthWatch\025_Numbers\thirty.ogg"};
			three[] = {"StealthWatch\025_Numbers\three.ogg"};
			ThrowingGrenadeE_1[] = {"StealthWatch\200_CombatShouts\ThrowingGrenadeE_1.ogg"};
			ThrowingGrenadeE_2[] = {"StealthWatch\200_CombatShouts\ThrowingGrenadeE_2.ogg"};
			ThrowingGrenadeE_3[] = {"StealthWatch\200_CombatShouts\ThrowingGrenadeE_3.ogg"};
			ThrowingSmokeE_1[] = {"StealthWatch\200_CombatShouts\ThrowingSmokeE_1.ogg"};
			ThrowingSmokeE_2[] = {"StealthWatch\200_CombatShouts\ThrowingSmokeE_2.ogg"};
			TransportSGLZCoordinatesSelected[] = {"StealthWatch\220_Support\TransportSGLZCoordinatesSelected.ogg"};
			TransportSGWelcomeAboard[] = {"StealthWatch\220_Support\TransportSGWelcomeAboard.ogg"};
			twelve[] = {"StealthWatch\025_Numbers\twelve.ogg"};
			twenty[] = {"StealthWatch\025_Numbers\twenty.ogg"};
			two[] = {"StealthWatch\025_Numbers\two.ogg"};
			UnderFireE[] = {"StealthWatch\200_CombatShouts\UnderFireE_1.ogg", "StealthWatch\200_CombatShouts\UnderFireE_2.ogg", "StealthWatch\200_CombatShouts\UnderFireE_3.ogg", "StealthWatch\200_CombatShouts\UnderFireE_4.ogg", "StealthWatch\200_CombatShouts\UnderFireE_5.ogg", "StealthWatch\200_CombatShouts\UnderFireE_6.ogg"};
			uniform[] = {"StealthWatch\080_MoveAlphabet\uniform.ogg"};
			UnitDestroyedHQArty[] = {"StealthWatch\220_Support\UnitDestroyedHQArty.ogg"};
			UnitDestroyedHQCASBombing[] = {"StealthWatch\220_Support\UnitDestroyedHQCASBombing.ogg"};
			UnitDestroyedHQSupplyDrop[] = {"StealthWatch\220_Support\UnitDestroyedHQSupplyDrop.ogg"};
			UnitDestroyedHQTransport[] = {"StealthWatch\220_Support\UnitDestroyedHQTransport.ogg"};
			UnitDestroyedHQUAV[] = {"StealthWatch\220_Support\UnitDestroyedHQUAV.ogg"};
			Vega[] = {"StealthWatch\020_Names\Vega.ogg"};
			veh_air_gunship_p[] = {"StealthWatch\010_Vehicles\veh_air_gunship_p.ogg"};
			veh_air_gunship_s[] = {"StealthWatch\010_Vehicles\veh_air_gunship_s.ogg"};
			veh_air_helicopter_p[] = {"StealthWatch\010_Vehicles\veh_air_helicopter_p.ogg"};
			veh_air_helicopter_s[] = {"StealthWatch\010_Vehicles\veh_air_helicopter_s.ogg"};
			veh_air_p[] = {"StealthWatch\010_Vehicles\veh_air_p.ogg"};
			veh_air_parachute_p[] = {"StealthWatch\010_Vehicles\veh_air_parachute_p.ogg"};
			veh_air_parachute_s[] = {"StealthWatch\010_Vehicles\veh_air_parachute_s.ogg"};
			veh_air_plane_p[] = {"StealthWatch\010_Vehicles\veh_air_plane_p.ogg"};
			veh_air_plane_s[] = {"StealthWatch\010_Vehicles\veh_air_plane_s.ogg"};
			veh_air_s[] = {"StealthWatch\010_Vehicles\veh_air_s.ogg"};
			veh_air_uav_p[] = {"StealthWatch\010_Vehicles\veh_air_uav_p.ogg"};
			veh_air_uav_s[] = {"StealthWatch\010_Vehicles\veh_air_uav_s.ogg"};
			veh_infantry_AA_p[] = {"StealthWatch\010_Vehicles\veh_infantry_AA_p.ogg"};
			veh_infantry_AA_s[] = {"StealthWatch\010_Vehicles\veh_infantry_AA_s.ogg"};
			veh_infantry_AT_p[] = {"StealthWatch\010_Vehicles\veh_infantry_AT_p.ogg"};
			veh_infantry_AT_s[] = {"StealthWatch\010_Vehicles\veh_infantry_AT_s.ogg"};
			veh_infantry_civilian_p[] = {"StealthWatch\010_Vehicles\veh_infantry_civilian_p.ogg"};
			veh_infantry_civilian_s[] = {"StealthWatch\010_Vehicles\veh_infantry_civilian_s.ogg"};
			veh_infantry_diver_p[] = {"StealthWatch\010_Vehicles\veh_infantry_diver_p.ogg"};
			veh_infantry_diver_s[] = {"StealthWatch\010_Vehicles\veh_infantry_diver_s.ogg"};
			veh_infantry_medic_p[] = {"StealthWatch\010_Vehicles\veh_infantry_medic_p.ogg"};
			veh_infantry_medic_s[] = {"StealthWatch\010_Vehicles\veh_infantry_medic_s.ogg"};
			veh_infantry_MG_p[] = {"StealthWatch\010_Vehicles\veh_infantry_MG_p.ogg"};
			veh_infantry_MG_s[] = {"StealthWatch\010_Vehicles\veh_infantry_MG_s.ogg"};
			veh_infantry_officer_p[] = {"StealthWatch\010_Vehicles\veh_infantry_officer_p.ogg"};
			veh_infantry_officer_s[] = {"StealthWatch\010_Vehicles\veh_infantry_officer_s.ogg"};
			veh_infantry_p[] = {"StealthWatch\010_Vehicles\veh_infantry_p_1.ogg", "StealthWatch\010_Vehicles\veh_infantry_p_2.ogg", "StealthWatch\010_Vehicles\veh_infantry_p_3.ogg"};
			veh_infantry_pilot_p[] = {"StealthWatch\010_Vehicles\veh_infantry_pilot_p.ogg"};
			veh_infantry_pilot_s[] = {"StealthWatch\010_Vehicles\veh_infantry_pilot_s.ogg"};
			veh_infantry_s[] = {"StealthWatch\010_Vehicles\veh_infantry_s_1.ogg", "StealthWatch\010_Vehicles\veh_infantry_s_2.ogg", "StealthWatch\010_Vehicles\veh_infantry_s_3.ogg"};
			veh_infantry_SF_p[] = {"StealthWatch\010_Vehicles\veh_infantry_SF_p.ogg"};
			veh_infantry_SF_s[] = {"StealthWatch\010_Vehicles\veh_infantry_SF_s.ogg"};
			veh_infantry_Sniper_p[] = {"StealthWatch\010_Vehicles\veh_infantry_Sniper_p.ogg"};
			veh_infantry_Sniper_s[] = {"StealthWatch\010_Vehicles\veh_infantry_Sniper_s.ogg"};
			veh_ship_attackBoat_p[] = {"StealthWatch\010_Vehicles\veh_ship_attackBoat_p.ogg"};
			veh_ship_attackBoat_s[] = {"StealthWatch\010_Vehicles\veh_ship_attackBoat_s.ogg"};
			veh_ship_boat_p[] = {"StealthWatch\010_Vehicles\veh_ship_boat_p.ogg"};
			veh_ship_boat_s[] = {"StealthWatch\010_Vehicles\veh_ship_boat_s.ogg"};
			veh_ship_p[] = {"StealthWatch\010_Vehicles\veh_ship_p.ogg"};
			veh_ship_s[] = {"StealthWatch\010_Vehicles\veh_ship_s.ogg"};
			veh_ship_submarine_p[] = {"StealthWatch\010_Vehicles\veh_ship_submarine_p.ogg"};
			veh_ship_submarine_s[] = {"StealthWatch\010_Vehicles\veh_ship_submarine_s.ogg"};
			veh_static_AA_p[] = {"StealthWatch\010_Vehicles\veh_static_AA_p.ogg"};
			veh_static_AA_s[] = {"StealthWatch\010_Vehicles\veh_static_AA_s.ogg"};
			veh_static_AT_p[] = {"StealthWatch\010_Vehicles\veh_static_AT_p.ogg"};
			veh_static_AT_s[] = {"StealthWatch\010_Vehicles\veh_static_AT_s.ogg"};
			veh_static_cannon_p[] = {"StealthWatch\010_Vehicles\veh_static_cannon_p.ogg"};
			veh_static_cannon_s[] = {"StealthWatch\010_Vehicles\veh_static_cannon_s.ogg"};
			veh_static_GL_p[] = {"StealthWatch\010_Vehicles\veh_static_GL_p.ogg"};
			veh_static_GL_s[] = {"StealthWatch\010_Vehicles\veh_static_GL_s.ogg"};
			veh_Static_MG_p[] = {"StealthWatch\010_Vehicles\veh_Static_MG_p.ogg"};
			veh_Static_MG_s[] = {"StealthWatch\010_Vehicles\veh_Static_MG_s.ogg"};
			veh_Static_mortar_p[] = {"StealthWatch\010_Vehicles\veh_Static_mortar_p.ogg"};
			veh_Static_mortar_s[] = {"StealthWatch\010_Vehicles\veh_Static_mortar_s.ogg"};
			veh_static_p[] = {"StealthWatch\010_Vehicles\veh_static_p.ogg"};
			veh_static_s[] = {"StealthWatch\010_Vehicles\veh_static_s.ogg"};
			veh_unknown_p[] = {"StealthWatch\010_Vehicles\veh_unknown_p.ogg"};
			veh_unknown_s[] = {"StealthWatch\010_Vehicles\veh_unknown_s.ogg"};
			veh_vehicle_APC_p[] = {"StealthWatch\010_Vehicles\veh_vehicle_APC_p.ogg"};
			veh_vehicle_APC_s[] = {"StealthWatch\010_Vehicles\veh_vehicle_APC_s.ogg"};
			veh_vehicle_armedcar_p[] = {"StealthWatch\010_Vehicles\veh_vehicle_armedcar_p.ogg"};
			veh_vehicle_armedcar_s[] = {"StealthWatch\010_Vehicles\veh_vehicle_armedcar_s.ogg"};
			veh_vehicle_armor_p[] = {"StealthWatch\010_Vehicles\veh_vehicle_armor_p.ogg"};
			veh_vehicle_armor_s[] = {"StealthWatch\010_Vehicles\veh_vehicle_armor_s.ogg"};
			veh_vehicle_car_p[] = {"StealthWatch\010_Vehicles\veh_vehicle_car_p.ogg"};
			veh_vehicle_car_s[] = {"StealthWatch\010_Vehicles\veh_vehicle_car_s.ogg"};
			veh_vehicle_mrap_p[] = {"StealthWatch\010_Vehicles\veh_vehicle_mrap_p.ogg"};
			veh_vehicle_mrap_s[] = {"StealthWatch\010_Vehicles\veh_vehicle_mrap_s.ogg"};
			veh_vehicle_p[] = {"StealthWatch\010_Vehicles\veh_vehicle_p.ogg"};
			veh_vehicle_s[] = {"StealthWatch\010_Vehicles\veh_vehicle_s.ogg"};
			veh_vehicle_tank_p[] = {"StealthWatch\010_Vehicles\veh_vehicle_tank_p.ogg"};
			veh_vehicle_tank_s[] = {"StealthWatch\010_Vehicles\veh_vehicle_tank_s.ogg"};
			veh_vehicle_truck_p[] = {"StealthWatch\010_Vehicles\veh_vehicle_truck_p.ogg"};
			veh_vehicle_truck_s[] = {"StealthWatch\010_Vehicles\veh_vehicle_truck_s.ogg"};
			veh_vehicle_ugv_p[] = {"StealthWatch\010_Vehicles\veh_vehicle_ugv_p.ogg"};
			veh_vehicle_ugv_s[] = {"StealthWatch\010_Vehicles\veh_vehicle_ugv_s.ogg"};
			VehBackward[] = {"StealthWatch\100_Commands\VehBackward_1.ogg", "StealthWatch\100_Commands\VehBackward_2.ogg", "StealthWatch\100_Commands\VehBackward_3.ogg"};
			VehFast[] = {"StealthWatch\100_Commands\VehFast_1.ogg", "StealthWatch\100_Commands\VehFast_2.ogg", "StealthWatch\100_Commands\VehFast_3.ogg"};
			VehForward[] = {"StealthWatch\100_Commands\VehForward_1.ogg", "StealthWatch\100_Commands\VehForward_2.ogg", "StealthWatch\100_Commands\VehForward_3.ogg"};
			VehLeft[] = {"StealthWatch\100_Commands\VehLeft_1.ogg", "StealthWatch\100_Commands\VehLeft_2.ogg", "StealthWatch\100_Commands\VehLeft_3.ogg"};
			VehRight[] = {"StealthWatch\100_Commands\VehRight_1.ogg", "StealthWatch\100_Commands\VehRight_2.ogg", "StealthWatch\100_Commands\VehRight_3.ogg"};
			VehSlow[] = {"StealthWatch\100_Commands\VehSlow_1.ogg", "StealthWatch\100_Commands\VehSlow_2.ogg", "StealthWatch\100_Commands\VehSlow_3.ogg"};
			VehStop[] = {"StealthWatch\100_Commands\VehStop_1.ogg", "StealthWatch\100_Commands\VehStop_2.ogg", "StealthWatch\100_Commands\VehStop_3.ogg"};
			victor[] = {"StealthWatch\080_MoveAlphabet\victor.ogg"};
			Viper[] = {"StealthWatch\020_Names\Viper.ogg"};
			Waiting[] = {"StealthWatch\110_Com_Announce\Waiting.ogg"};
			Walker[] = {"StealthWatch\020_Names\Walker.ogg"};
			Wardak[] = {"StealthWatch\020_Names\Wardak.ogg"};
			WatchThatTarget[] = {"StealthWatch\100_Commands\WatchThatTarget.ogg"};
			WeaponsFree[] = {"StealthWatch\100_Commands\WeaponsFree.ogg"};
			WeGotAManDownE[] = {"StealthWatch\140_Com_Status\WeGotAManDownE_1.ogg", "StealthWatch\140_Com_Status\WeGotAManDownE_2.ogg", "StealthWatch\140_Com_Status\WeGotAManDownE_3.ogg"};
			WeLostOneE[] = {"StealthWatch\140_Com_Status\WeLostOneE_1.ogg", "StealthWatch\140_Com_Status\WeLostOneE_2.ogg", "StealthWatch\140_Com_Status\WeLostOneE_3.ogg"};
			west[] = {"StealthWatch\DirectionCompass1\west_1.ogg", "StealthWatch\DirectionCompass1\west_2.ogg"};
			WhatIsYourLocationQ[] = {"StealthWatch\120_Com_Ask\WhatIsYourLocationQ.ogg"};
			whiskey[] = {"StealthWatch\080_MoveAlphabet\whiskey.ogg"};
			whiteTeam[] = {"StealthWatch\030_Teams\whiteTeam.ogg"};
			WitnessKilledE[] = {"StealthWatch\200_CombatShouts\WitnessKilledE_1.ogg", "StealthWatch\200_CombatShouts\WitnessKilledE_2.ogg", "StealthWatch\200_CombatShouts\WitnessKilledE_3.ogg"};
			xray[] = {"StealthWatch\080_MoveAlphabet\xray.ogg"};
			yankee[] = {"StealthWatch\080_MoveAlphabet\yankee.ogg"};
			yellowTeam[] = {"StealthWatch\030_Teams\yellowTeam.ogg"};
			Yousuf[] = {"StealthWatch\020_Names\Yousuf.ogg"};
			zero[] = {"StealthWatch\025_Numbers\zero.ogg"};
			zulu[] = {"StealthWatch\080_MoveAlphabet\zulu.ogg"};
		};
	};
};
