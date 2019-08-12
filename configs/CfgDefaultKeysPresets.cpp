class CfgDefaultKeysPresets
{
	class A3_Alternative: Arma3
	{
		default = 0;
		displayName = "Arma 3 Alternative";
		toolTip = "Alternative Arma 3: dynamic controls for smooth aiming and movement.";
		class Mappings: Mappings
		{
			action[] = {28, 33, "0x00010000  + 2"};
			actionContext[] = {33, "0x00010000  + 2"};
			autoHover[] = {};
			autoHoverCancel[] = {};
			carFastForward[] = {17};
			carForward[] = {200};
			carHandBrake[] = {57};
			carSlowForward[] = {{17, 31}, {31, 17}};
			compass[] = {};
			compassToggle[] = {37};
			crouch[] = {};
			deployWeaponAuto[] = {{29, 46}};
			flapsDown[] = {{157, 38}};
			heliCollectiveLower[] = {57};
			heliCollectiveRaise[] = {42};
			heliDown[] = {57};
			heliFastForward[] = {};
			heliRudderLeft[] = {16, 211};
			heliRudderRight[] = {18, 207};
			heliUp[] = {42};
			holdBreath[] = {42};
			landGear[] = {34, {157, 34}};
			landGearUp[] = {34, {157, 34}};
			moveDown[] = {44};
			moveFastForward[] = {{17, 31}, {31, 17}};
			moveUp[] = {45};
			nextWeapon[] = {46};
			optics[] = {82};
			opticsTemp[] = {"0x00010000 +1"};
			prone[] = {};
			selectAll[] = {"256+0x29"};
			stand[] = {};
			submarineDown[] = {57, 44};
			submarineUp[] = {42, 45};
			swimDown[] = {44};
			swimUp[] = {45};
			TactShort[] = {65536};
			TactTemp[] = {42};
			TactToggle[] = {};
			turbo[] = {};
			turnIn[] = {44};
			turnOut[] = {45};
			walkRunTemp[] = {57};
			walkRunToggle[] = {};
			watch[] = {};
			watchToggle[] = {24};
		};
	};
	class Arma2
	{
		default = 0;
		displayName = "Arma 2";
		toolTip = "Arma 2: the smallest differences in key mappings from the previous Bohemia Interactive title.";
		class Mappings
		{
			action[] = {28, 57, "0x00010000  + 2"};
			actionContext[] = {"0x00010000  + 2"};
			actionFreeLook[] = {65536};
			adjustDown[] = {{29, 31}};
			adjustLeft[] = {{29, 30}};
			adjustRight[] = {{29, 32}};
			adjustUp[] = {{29, 17}};
			aimDown[] = {"(0x00100000 +3)"};
			aimHeadDown[] = {"(0x00100000 +3)"};
			aimHeadLeft[] = {"(0x00100000 +0)"};
			aimHeadRight[] = {"(0x00100000 +1)"};
			aimHeadUp[] = {"(0x00100000 +2)"};
			aimLeft[] = {"(0x00100000 +0)"};
			aimRight[] = {"(0x00100000 +1)"};
			aimUp[] = {"(0x00100000 +2)"};
			airBankLeft[] = {30, 203};
			airBankRight[] = {32, 205};
			autoHover[] = {"256+0x2B"};
			autoHoverCancel[] = {43};
			binocular[] = {48};
			buldBack[] = {208};
			buldBrushOuter[] = {49};
			buldBrushRandomize[] = {19};
			buldBrushRatio[] = {48};
			buldBrushSetHeight[] = {46};
			buldBrushSmooth[] = {42};
			buldBrushStrength[] = {50};
			BuldClearAllElevationLocks[] = {{42, 50}, {54, 50}};
			BuldCreateObj[] = {47};
			buldDown[] = {209, 44};
			BuldDuplicateSel[] = {46};
			BuldElevateSel[] = {17};
			buldForward[] = {200};
			buldFreeLook[] = {76};
			BuldKeepAbsoluteElevationSel[] = {50};
			buldLeft[] = {203};
			buldLookDown[] = {80};
			buldLookLeft[] = {75};
			buldLookRight[] = {77};
			buldLookUp[] = {72};
			buldMagnetizePlanes[] = {64};
			buldMagnetizePoints[] = {63};
			buldMagnetizeYFixed[] = {65};
			buldMoveBack[] = {"(0x00100000 +3)"};
			buldMoveForward[] = {"(0x00100000 +2)"};
			buldMoveLeft[] = {"(0x00100000 +0)"};
			buldMoveRight[] = {"(0x00100000 +1)"};
			buldRedo[] = {{29, 19}};
			BuldRemoveSel[] = {32};
			buldResetCamera[] = {82};
			buldRight[] = {205};
			BuldRotateSelX[] = {45};
			BuldRotateSelZ[] = {44};
			BuldScaleSel[] = {18};
			buldSelect[] = {57};
			buldSelectionType[] = {31};
			buldSwitchCamera[] = {210};
			buldTerrainLower10cm[] = {36};
			buldTerrainLower1m[] = {38};
			buldTerrainLower50cm[] = {37};
			buldTerrainLower5m[] = {39};
			buldTerrainRaise10cm[] = {22};
			buldTerrainRaise1m[] = {24};
			buldTerrainRaise50cm[] = {23};
			buldTerrainRaise5m[] = {25};
			buldTerrainShowNode[] = {35};
			buldTextureInfo[] = {20};
			buldTurbo[] = {42};
			buldUndo[] = {{29, 44}};
			buldUp[] = {201, 16};
			buldZoomIn[] = {78};
			buldZoomOut[] = {74};
			cameraFlashlight[] = {38};
			cameraInterface[] = {14};
			cameraLookDown[] = {80};
			cameraLookLeft[] = {75};
			cameraLookRight[] = {77};
			cameraLookUp[] = {72};
			cameraMoveBackward[] = {31};
			cameraMoveDown[] = {44};
			cameraMoveForward[] = {17};
			cameraMoveLeft[] = {30};
			cameraMoveRight[] = {32};
			cameraMoveTurbo1[] = {42, 54};
			cameraMoveTurbo2[] = {56, 184};
			cameraMoveUp[] = {16};
			cameraReset[] = {76};
			cameraTarget[] = {33};
			cameraVisionMode[] = {49};
			cameraZoomIn[] = {78};
			cameraZoomOut[] = {74};
			cancelAction[] = {};
			carAimDown[] = {"(0x00100000 +3)"};
			carAimLeft[] = {"(0x00100000 +0)"};
			carAimRight[] = {"(0x00100000 +1)"};
			carAimUp[] = {"(0x00100000 +2)"};
			carBack[] = {31, 208};
			carFastForward[] = {18};
			carForward[] = {17, 200};
			carHandBrake[] = {};
			carLeft[] = {30, 203};
			carRight[] = {32, 205};
			carSlowForward[] = {16};
			carWheelLeft[] = {"(0x00100000 +0)"};
			carWheelRight[] = {"(0x00100000 +1)"};
			chat[] = {53};
			cheat1[] = {220, 219};
			cheat2[] = {184};
			closeContext[] = {"0x00010000  + 128 + 1"};
			commandBack[] = {31, 208};
			commandFast[] = {18};
			commandForward[] = {17, 200};
			commandingmenu0[] = {11};
			commandingmenu1[] = {2};
			commandingmenu2[] = {3};
			commandingmenu3[] = {4};
			commandingmenu4[] = {5};
			commandingmenu5[] = {6};
			commandingmenu6[] = {7};
			commandingmenu7[] = {8};
			commandingmenu8[] = {9};
			commandingmenu9[] = {10};
			commandingMenuSelect0[] = {11};
			commandingMenuSelect1[] = {2};
			commandingMenuSelect2[] = {3};
			commandingMenuSelect3[] = {4};
			commandingMenuSelect4[] = {5};
			commandingMenuSelect5[] = {6};
			commandingMenuSelect6[] = {7};
			commandingMenuSelect7[] = {8};
			commandingMenuSelect8[] = {9};
			commandingMenuSelect9[] = {10};
			commandLeft[] = {30, 203};
			commandRight[] = {32, 205};
			commandSlow[] = {16};
			commandWatch[] = {56};
			compass[] = {37};
			compassToggle[] = {"256+0x25"};
			crouch[] = {};
			CuratorCollapseParent[] = {46};
			curatorCompass[] = {37};
			CuratorContentWaypoint[] = {56};
			CuratorDelete[] = {211};
			CuratorDestroy[] = {207};
			CuratorGetOut[] = {34};
			CuratorGroupMod[] = {29};
			curatorInterface[] = {21};
			CuratorLevelObject[] = {45};
			CuratorLockCameraTo[] = {{29, 33}};
			curatorMapTextures[] = {20};
			CuratorMoveCamTo[] = {33};
			CuratorMoveY[] = {56};
			CuratorMultipleMod[] = {29};
			curatorNightvision[] = {49};
			curatorPersonView[] = {156};
			curatorPingView[] = {57};
			CuratorRotateMod[] = {42};
			curatorToggleCreate[] = {19};
			curatorToggleEdit[] = {18};
			curatorToggleInterface[] = {14};
			curatorWatch[] = {24};
			CycleThrownItems[] = {{29, 20}};
			defaultAction[] = {65536};
			deployWeaponAuto[] = {{29, 46}};
			diary[] = {36};
			editorCameraLookDown[] = {80};
			editorCameraLookLeft[] = {75};
			editorCameraLookRight[] = {77};
			editorCameraLookUp[] = {72};
			editorCameraMoveBackward[] = {31};
			editorCameraMoveDown[] = {44};
			editorCameraMoveForward[] = {17};
			editorCameraMoveLeft[] = {30};
			editorCameraMoveRight[] = {32};
			editorCameraMoveTurbo[] = {42, 54};
			editorCameraMoveUp[] = {16};
			editorCameraReset[] = {76};
			eject[] = {};
			evasiveBack[] = {};
			evasiveForward[] = {};
			evasiveLeft[] = {16};
			evasiveRight[] = {18};
			fire[] = {{29, 65536}};
			flapsDown[] = {{157, 37}};
			flapsUp[] = {{157, 38}};
			freeHeadMove[] = {};
			gear[] = {34};
			getOut[] = {};
			getOver[] = {47};
			grouppageNext[] = {88};
			grouppageprev[] = {87};
			gunElevAuto[] = {43};
			gunElevDown[] = {209};
			gunElevSlow[] = {42, 54};
			gunElevUp[] = {201};
			handgun[] = {39};
			headlights[] = {38};
			heliAPUToggle[] = {{157, 30}};
			heliBack[] = {31, 208, "(0x00100000 +2)"};
			heliBatteriesToggle[] = {{157, 48}};
			heliCollectiveLower[] = {44};
			heliCollectiveRaise[] = {16};
			helicopterTrimOff[] = {{157, 83}};
			helicopterTrimOn[] = {{157, 76}};
			heliCyclicBack[] = {31, 208, "(0x00100000 +2)"};
			heliCyclicForward[] = {17, 200, "(0x00100000 +3)"};
			heliCyclicLeft[] = {30, 203};
			heliCyclicRight[] = {32, 205};
			heliDown[] = {44};
			heliEnginesToggle[] = {{157, 18}};
			heliFastForward[] = {18};
			heliForward[] = {17, 200, "(0x00100000 +3)"};
			heliLeft[] = {"(0x00100000 +0)"};
			heliManualFire[] = {40};
			heliRight[] = {"(0x00100000 +1)"};
			HeliRopeAction[] = {48};
			heliRotorBrakeToggle[] = {{157, 19}};
			heliRudderLeft[] = {45, 211};
			heliRudderRight[] = {46, 207};
			HeliSlingLoadManager[] = {{157, 48}};
			heliStarterToggle1[] = {{157, 2}};
			heliStarterToggle2[] = {{157, 3}};
			heliStarterToggle3[] = {{157, 4}};
			heliThrottleDecrease1[] = {{157, 211}};
			heliThrottleDecrease2[] = {{157, 207}};
			heliThrottleDecrease3[] = {{157, 209}};
			heliThrottleIncrease1[] = {{157, 210}};
			heliThrottleIncrease2[] = {{157, 199}};
			heliThrottleIncrease3[] = {{157, 201}};
			heliThrottleNeg[] = {};
			heliThrottlePos[] = {};
			HeliTrimBackward[] = {{157, 80}};
			HeliTrimForward[] = {{157, 72}};
			HeliTrimLeft[] = {{157, 75}};
			HeliTrimRight[] = {{157, 77}};
			HeliTrimRudderLeft[] = {{157, 79}};
			HeliTrimRudderRight[] = {{157, 81}};
			heliUp[] = {16};
			heliWheelsBrake[] = {{157, 17}};
			help[] = {35};
			hideMap[] = {50};
			holdBreath[] = {"0x00010000  + 1"};
			ingamePause[] = {1};
			landGear[] = {{157, 34}};
			landGearUp[] = {{157, 34}};
			launchCM[] = {19};
			leanLeft[] = {16, "0x00080000  + 3"};
			leanLeftToggle[] = {"256+0x10"};
			leanRight[] = {18, "0x00080000  + 9"};
			leanRightToggle[] = {"256+0x12"};
			liteUnitInfoToggle[] = {{157, 35}};
			lockEmptyTargets[] = {{29, 15}};
			lockTarget[] = {"0x00010000 +1"};
			lockTargets[] = {15};
			lookAround[] = {56};
			lookAroundToggle[] = {"256+0x38", 55};
			lookCenter[] = {76};
			lookDown[] = {80};
			lookDownCont[] = {"0x00080000  + 0"};
			lookLeft[] = {75};
			lookLeftCont[] = {"0x00080000  + 1"};
			lookLeftDown[] = {79};
			lookLeftUp[] = {71};
			lookRight[] = {77};
			lookRightCont[] = {"0x00080000  + 7"};
			lookRightDown[] = {81};
			lookRightUp[] = {73};
			lookRollLeft[] = {{29, 71}};
			lookRollLeftCont[] = {"0x00080000  + 2"};
			lookRollRight[] = {{29, 73}};
			lookRollRightCont[] = {"0x00080000  + 8"};
			lookShiftBack[] = {};
			lookShiftBackCont[] = {};
			lookShiftCenter[] = {{29, 76}};
			lookShiftDown[] = {{29, 209}};
			lookShiftDownCont[] = {};
			lookShiftForward[] = {};
			lookShiftForwardCont[] = {};
			lookShiftLeft[] = {};
			lookShiftLeftCont[] = {"0x00080000  + 3"};
			lookShiftRight[] = {};
			lookShiftRightCont[] = {"0x00080000  + 9"};
			lookShiftUp[] = {{29, 201}};
			lookShiftUpCont[] = {};
			lookUp[] = {72};
			lookUpCont[] = {"0x00080000  + 6"};
			menuSelect[] = {};
			minimap[] = {};
			minimapToggle[] = {{157, 50}};
			moveBack[] = {31, 208};
			moveDown[] = {44};
			moveFastForward[] = {"256+0x11"};
			moveForward[] = {17, 200};
			moveLeft[] = {{42, 16}};
			moveRight[] = {{42, 18}};
			moveSlowForward[] = {};
			moveUp[] = {45};
			navigateMenu[] = {14};
			networkPlayers[] = {25};
			networkStats[] = {23};
			nextAction[] = {"(0x00100000 +5)", 27};
			nextChannel[] = {52};
			nextCM[] = {{29, 19}};
			nextWeapon[] = {33};
			nightVision[] = {49};
			openDlcScreen[] = {{42, 25}};
			optics[] = {"0x00010000 +128+1", 82};
			opticsMode[] = {181};
			opticsTemp[] = {"0x00010000 +128+1", 82};
			personView[] = {156};
			prevAction[] = {"(0x00100000 +4)", 26};
			prevChannel[] = {51};
			prevWeapon[] = {};
			prone[] = {};
			pushToTalk[] = {58};
			PushToTalkAll[] = {};
			PushToTalkCommand[] = {};
			PushToTalkDirect[] = {};
			PushToTalkGroup[] = {};
			PushToTalkSide[] = {};
			PushToTalkVehicle[] = {};
			reloadMagazine[] = {19};
			revealTarget[] = {"0x00010000 +1"};
			salute[] = {43};
			seagullBack[] = {31, 208};
			seagullDown[] = {44, "(0x00100000 +2)"};
			seagullFastForward[] = {18};
			seagullForward[] = {17, 200};
			seagullUp[] = {16, "(0x00100000 +3)"};
			selectAll[] = {41};
			selectgroupunit0[] = {68};
			selectgroupunit1[] = {59};
			selectgroupunit2[] = {60};
			selectgroupunit3[] = {61};
			selectgroupunit4[] = {62};
			selectgroupunit5[] = {63};
			selectgroupunit6[] = {64};
			selectgroupunit7[] = {65};
			selectgroupunit8[] = {66};
			selectgroupunit9[] = {67};
			selectteamblue[] = {{42, 61}, {54, 61}};
			selectteamgreen[] = {{42, 60}, {54, 60}};
			selectteamred[] = {{42, 59}, {54, 59}};
			selectteamwhite[] = {{42, 63}, {54, 63}};
			selectteamyellow[] = {{42, 62}, {54, 62}};
			setteamblue[] = {{29, 61}, {157, 61}};
			setteamgreen[] = {{29, 60}, {157, 60}};
			setteamred[] = {{29, 59}, {157, 59}};
			setteamwhite[] = {{29, 63}, {157, 63}};
			setteamyellow[] = {{29, 62}, {157, 62}};
			showMap[] = {50};
			sitDown[] = {40};
			stand[] = {46};
			submarineBack[] = {31, 208};
			submarineCyclicBack[] = {"(0x00100000 +3)"};
			submarineCyclicForward[] = {"(0x00100000 +2)"};
			submarineDown[] = {44};
			submarineForward[] = {17, 200};
			submarineLeft[] = {30, 203, "(0x00100000 +0)"};
			submarineRight[] = {32, 205, "(0x00100000 +1)"};
			submarineUp[] = {16};
			swapGunner[] = {};
			swimDown[] = {44};
			swimUp[] = {16};
			switchCommand[] = {{29, 57}, 221};
			switchGunnerWeapon[] = {{29, 33}};
			switchWeapon[] = {};
			TacticalPing[] = {};
			tacticalView[] = {83};
			TactTemp[] = {};
			TactToggle[] = {21};
			tasks[] = {};
			teamSwitch[] = {22};
			teamSwitchNext[] = {};
			teamSwitchPrev[] = {};
			tempRaiseWeapon[] = {};
			Throw[] = {20};
			timeDec[] = {12};
			timeInc[] = {13};
			toggleRaiseWeapon[] = {"256+0x1D"};
			TransportNightVision[] = {{157, 49}};
			turbo[] = {};
			turboToggle[] = {};
			turnIn[] = {45, 46};
			turnLeft[] = {30, 203};
			turnOut[] = {44};
			turnRight[] = {32, 205};
			turretElevationDown[] = {{29, 44}};
			turretElevationUp[] = {{29, 16}};
			User1[] = {};
			User10[] = {};
			User11[] = {};
			User12[] = {};
			User13[] = {};
			User14[] = {};
			User15[] = {};
			User16[] = {};
			User17[] = {};
			User18[] = {};
			User19[] = {};
			User2[] = {};
			User20[] = {};
			User3[] = {};
			User4[] = {};
			User5[] = {};
			User6[] = {};
			User7[] = {};
			User8[] = {};
			User9[] = {};
			vehicleTurbo[] = {42};
			vehLockEmptyTargets[] = {{29, 15}};
			vehLockTargets[] = {15};
			voiceOverNet[] = {};
			vtolVectoring[] = {"256+0x2B"};
			vtolVectoringCancel[] = {43};
			walk[] = {};
			walkRunTemp[] = {42};
			walkRunToggle[] = {"256+0x2A"};
			watch[] = {24};
			watchToggle[] = {"256+0x18"};
			zeroingDown[] = {209};
			zeroingUp[] = {201};
			zoomContIn[] = {"0x00080000  + 11"};
			zoomContOut[] = {"0x00080000  + 5"};
			zoomIn[] = {78, "0x00010000 +4"};
			zoomInToggle[] = {"256+0x4E"};
			zoomOut[] = {74, "0x00010000 +3"};
			zoomOutToggle[] = {"256+0x4A"};
			zoomTemp[] = {"0x00010000  + 1"};
		};
	};
	class Arma3: Arma2
	{
		default = 0;
		displayName = "Arma 3";
		toolTip = "Arma 3: sprint, tactical pace, default action selection, grenade throw and inventory keys redefined.";
		class Mappings: Mappings
		{
			action[] = {57, 28};
			actionContext[] = {"0x00010000 +2"};
			actionFreeLook[] = {65536};
			actionInMap[] = {65536};
			ActiveSensorsToggle[] = {{29, 19}};
			AirPlaneBrake[] = {45};
			autoHover[] = {45};
			autoHoverCancel[] = {45};
			carFastForward[] = {{42, 17}};
			carHandBrake[] = {45};
			carSlowForward[] = {{29, 17}};
			CloseLeftVehicleDisplay[] = {};
			CloseRightVehicleDisplay[] = {};
			commandFast[] = {{17, 42}};
			commandSlow[] = {{17, 29}, {29, 17}};
			copyVersion[] = {{29, 53}};
			crouch[] = {};
			CycleThrownItems[] = {{29, 34}};
			deployWeaponAuto[] = {46};
			Eject[] = {"256+0x2F"};
			engineToggle[] = {};
			flapsDown[] = {4.87588e+008, {157, 37}};
			flapsUp[] = {4.87588e+008, {157, 38}};
			gear[] = {23};
			GetOut[] = {47};
			gunElevAuto[] = {20};
			heliCollectiveLower[] = {44};
			heliCollectiveLowerCont[] = {};
			heliCollectiveRaise[] = {42};
			heliCollectiveRaiseCont[] = {};
			helicopterTrimOff[] = {{157, 83}};
			helicopterTrimOn[] = {{157, 76}};
			heliDown[] = {44};
			heliFastForward[] = {};
			heliRopeAction[] = {48};
			heliRudderLeft[] = {16, 211};
			heliRudderRight[] = {18, 207};
			heliSlingLoadManager[] = {{157, 48}};
			heliTrimBackward[] = {{157, 80}};
			heliTrimForward[] = {{157, 72}};
			heliTrimLeft[] = {{157, 75}};
			heliTrimRight[] = {{157, 77}};
			heliTrimRudderLeft[] = {{157, 79}};
			heliTrimRudderRight[] = {{157, 81}};
			heliUp[] = {42};
			heliWheelsBrake[] = {{157, 17}};
			landGear[] = {34};
			landGearUp[] = {34};
			launchCM[] = {46};
			ListLeftVehicleDisplay[] = {26};
			ListPrevLeftVehicleDisplay[] = {};
			ListPrevRightVehicleDisplay[] = {};
			ListRightVehicleDisplay[] = {27};
			lockEmptyTargets[] = {};
			lockTarget[] = {20};
			lockTargets[] = {};
			lookShiftBack[] = {{29, 80}};
			lookShiftForward[] = {{29, 72}};
			lookShiftLeft[] = {{29, 75}};
			lookShiftRight[] = {{29, 77}};
			moveDown[] = {44};
			moveFastForward[] = {};
			moveLeft[] = {};
			moveRight[] = {};
			moveUp[] = {45};
			networkPlayers[] = {{157, 25}};
			networkStats[] = {25};
			nextAction[] = {"(0x00100000 +5)"};
			nextCM[] = {{29, 46}};
			NextModeLeftVehicleDisplay[] = {{157, 26}};
			NextModeRightVehicleDisplay[] = {{157, 27}};
			NextWeapon[] = {33};
			opticsMode[] = {4.87654e+008, 181};
			pilotCamera[] = {4.87654e+008};
			prevAction[] = {"(0x00100000 +4)"};
			prone[] = {};
			revealTarget[] = {20};
			selectAll[] = {41};
			stand[] = {};
			submarineDown[] = {44};
			submarineUp[] = {45};
			swimDown[] = {44};
			swimUp[] = {45};
			switchWeapon[] = {{157, 39}};
			tacticalPing[] = {{42, 20}};
			TactShort[] = {65536};
			TactTemp[] = {};
			TactToggle[] = {46};
			Throw[] = {34};
			turbo[] = {42};
			turnIn[] = {{29, 16}};
			turnOut[] = {{29, 18}};
			turretElevationDown[] = {16};
			turretElevationUp[] = {18};
			uavView[] = {15};
			uavViewToggle[] = {"256+0x0F"};
			vehLockEmptyTargets[] = {};
			vehLockTargets[] = {19};
			vehLockTurretView[] = {{29, 20}};
			vtolVectoring[] = {{29, 45}};
			vtolVectoringCancel[] = {{29, 45}};
			walkRunTemp[] = {};
			walkRunToggle[] = {{17, 31}, {31, 17}};
			zoomTemp[] = {"0x00010000 +1"};
		};
	};
	class Arma3Apex: Arma3
	{
		default = 1;
		displayName = "Arma 3 Apex";
		toolTip = "Arma 3 Apex: re-imagined controls for the Apex expansion with industry standard influences.";
		class Mappings: Mappings
		{
			commandingmenu0[] = {11};
			commandingmenu1[] = {};
			commandingmenu2[] = {};
			commandingmenu3[] = {};
			commandingmenu4[] = {};
			commandingmenu5[] = {};
			commandingmenu6[] = {};
			commandingmenu7[] = {};
			commandingmenu8[] = {};
			commandingmenu9[] = {};
			deployWeaponAuto[] = {46};
			diary[] = {"256+0x24"};
			holdBreath[] = {42};
			switchHandgun[] = {3};
			switchPrimary[] = {2};
			switchSecondary[] = {4};
			SwitchWeaponGrp1[] = {2};
			SwitchWeaponGrp2[] = {3};
			SwitchWeaponGrp3[] = {4};
			SwitchWeaponGrp4[] = {5};
			TactToggle[] = {"256+0x2E"};
			tasks[] = {36};
			walkRunToggle[] = {{29, 46}};
			zeroingDown[] = {209, 4.87588e+008};
			zeroingUp[] = {201, 4.87588e+008};
		};
	};
	class Buldozer: Arma3
	{
		default = 0;
		displayName = "Buldozer";
		toolTip = "Buldozer: useful key preset for map developers.";
		class Mappings: Mappings
		{
			BuldBrushStrength[] = {33};
			buldDown[] = {209, 30};
			buldFreeLook[] = {76, 56};
			buldUp[] = {201, 16};
			cheat1[] = {220};
			evasiveLeft[] = {};
			leanLeft[] = {"0x00080000  + 3"};
			moveBack[] = {208};
			moveForward[] = {200};
			personView[] = {156, 219};
			turnLeft[] = {203};
			turnRight[] = {205};
		};
	};
	class Empty: Arma3
	{
		default = 0;
		displayName = "Empty";
		toolTip = "Empty: use this to remove all key mappings.";
		class Mappings: Mappings
		{
			action[] = {};
			actionContext[] = {};
			actionFreeLook[] = {};
			actionInMap[] = {};
			ActiveSensorsToggle[] = {};
			adjustDown[] = {};
			adjustLeft[] = {};
			adjustRight[] = {};
			adjustUp[] = {};
			aimDown[] = {};
			aimHeadDown[] = {};
			aimHeadLeft[] = {};
			aimHeadRight[] = {};
			aimHeadUp[] = {};
			aimLeft[] = {};
			aimRight[] = {};
			aimUp[] = {};
			airBankLeft[] = {};
			airBankRight[] = {};
			autoHover[] = {};
			autoHoverCancel[] = {};
			binocular[] = {};
			buldBack[] = {};
			buldBrushOuter[] = {};
			buldBrushRandomize[] = {};
			buldBrushRatio[] = {};
			buldBrushSetHeight[] = {};
			buldBrushSmooth[] = {};
			buldBrushStrength[] = {};
			BuldClearAllElevationLocks[] = {};
			BuldCreateObj[] = {};
			buldDown[] = {};
			BuldDuplicateSel[] = {};
			BuldElevateSel[] = {};
			buldForward[] = {};
			buldFreeLook[] = {};
			BuldKeepAbsoluteElevationSel[] = {};
			buldLeft[] = {};
			buldLookDown[] = {};
			buldLookLeft[] = {};
			buldLookRight[] = {};
			buldLookUp[] = {};
			buldMagnetizePlanes[] = {};
			buldMagnetizePoints[] = {};
			buldMagnetizeYFixed[] = {};
			buldMoveBack[] = {};
			buldMoveForward[] = {};
			buldMoveLeft[] = {};
			buldMoveRight[] = {};
			buldRedo[] = {};
			BuldRemoveSel[] = {};
			buldResetCamera[] = {};
			buldRight[] = {};
			BuldRotateSelX[] = {};
			BuldRotateSelZ[] = {};
			BuldScaleSel[] = {};
			buldSelect[] = {};
			buldSelectionType[] = {};
			buldSwitchCamera[] = {};
			buldTerrainLower10cm[] = {};
			buldTerrainLower1m[] = {};
			buldTerrainLower50cm[] = {};
			buldTerrainLower5m[] = {};
			buldTerrainRaise10cm[] = {};
			buldTerrainRaise1m[] = {};
			buldTerrainRaise50cm[] = {};
			buldTerrainRaise5m[] = {};
			buldTerrainShowNode[] = {};
			buldTextureInfo[] = {};
			buldTurbo[] = {};
			buldUndo[] = {};
			buldUp[] = {};
			buldZoomIn[] = {};
			buldZoomOut[] = {};
			cancelAction[] = {};
			carAimDown[] = {};
			carAimLeft[] = {};
			carAimRight[] = {};
			carAimUp[] = {};
			carBack[] = {};
			carFastForward[] = {};
			carForward[] = {};
			carHandBrake[] = {};
			carLeft[] = {};
			carRight[] = {};
			carSlowForward[] = {};
			carWheelLeft[] = {};
			carWheelRight[] = {};
			chat[] = {};
			cheat1[] = {};
			cheat2[] = {};
			closeContext[] = {};
			CloseLeftVehicleDisplay[] = {};
			CloseRightVehicleDisplay[] = {};
			commandBack[] = {};
			commandFast[] = {};
			commandForward[] = {};
			commandingmenu0[] = {};
			commandingmenu1[] = {};
			commandingmenu2[] = {};
			commandingmenu3[] = {};
			commandingmenu4[] = {};
			commandingmenu5[] = {};
			commandingmenu6[] = {};
			commandingmenu7[] = {};
			commandingmenu8[] = {};
			commandingmenu9[] = {};
			commandingMenuSelect0[] = {};
			commandingMenuSelect1[] = {};
			commandingMenuSelect2[] = {};
			commandingMenuSelect3[] = {};
			commandingMenuSelect4[] = {};
			commandingMenuSelect5[] = {};
			commandingMenuSelect6[] = {};
			commandingMenuSelect7[] = {};
			commandingMenuSelect8[] = {};
			commandingMenuSelect9[] = {};
			commandLeft[] = {};
			commandRight[] = {};
			commandSlow[] = {};
			commandWatch[] = {};
			compass[] = {};
			compassToggle[] = {};
			copyVersion[] = {};
			crouch[] = {};
			cycleThrownItems[] = {};
			defaultAction[] = {};
			deployWeaponAuto[] = {};
			diary[] = {};
			eject[] = {};
			engineToggle[] = {};
			evasiveBack[] = {};
			evasiveForward[] = {};
			evasiveLeft[] = {};
			evasiveRight[] = {};
			fire[] = {};
			flapsDown[] = {};
			flapsUp[] = {};
			forceCommandingMode[] = {};
			freeHeadMove[] = {};
			gear[] = {};
			getOut[] = {};
			getOver[] = {};
			grouppageNext[] = {};
			grouppageprev[] = {};
			gunElevAuto[] = {};
			gunElevDown[] = {};
			gunElevSlow[] = {};
			gunElevUp[] = {};
			handgun[] = {};
			headlights[] = {};
			heliAPUToggle[] = {};
			heliBack[] = {};
			heliBatteriesToggle[] = {};
			heliCollectiveLower[] = {};
			heliCollectiveLowerCont[] = {};
			heliCollectiveRaise[] = {};
			heliCollectiveRaiseCont[] = {};
			helicopterTrimOff[] = {};
			helicopterTrimOn[] = {};
			heliCyclicBack[] = {};
			heliCyclicForward[] = {};
			heliCyclicLeft[] = {};
			heliCyclicRight[] = {};
			heliDown[] = {};
			heliEnginesToggle[] = {};
			heliFastForward[] = {};
			heliForward[] = {};
			heliLeft[] = {};
			heliManualFire[] = {};
			heliRight[] = {};
			HeliRopeAction[] = {};
			heliRotorBrakeToggle[] = {};
			heliRudderLeft[] = {};
			heliRudderRight[] = {};
			HeliSlingLoadManager[] = {};
			heliStarterToggle1[] = {};
			heliStarterToggle2[] = {};
			heliStarterToggle3[] = {};
			heliThrottleDecrease1[] = {};
			heliThrottleDecrease2[] = {};
			heliThrottleDecrease3[] = {};
			heliThrottleIncrease1[] = {};
			heliThrottleIncrease2[] = {};
			heliThrottleIncrease3[] = {};
			heliThrottleNeg[] = {};
			heliThrottlePos[] = {};
			HeliTrimBackward[] = {};
			HeliTrimForward[] = {};
			HeliTrimLeft[] = {};
			HeliTrimRight[] = {};
			HeliTrimRudderLeft[] = {};
			HeliTrimRudderRight[] = {};
			heliUp[] = {};
			heliWheelsBrake[] = {};
			help[] = {};
			hideMap[] = {};
			holdBreath[] = {};
			landGear[] = {};
			landGearUp[] = {};
			launchCM[] = {};
			leanLeft[] = {};
			leanLeftToggle[] = {};
			leanRight[] = {};
			leanRightToggle[] = {};
			ListLeftVehicleDisplay[] = {};
			ListPrevLeftVehicleDisplay[] = {};
			ListPrevRightVehicleDisplay[] = {};
			ListRightVehicleDisplay[] = {};
			liteUnitInfoToggle[] = {};
			lockEmptyTargets[] = {};
			lockTarget[] = {};
			lockTargets[] = {};
			lookAround[] = {};
			lookAroundToggle[] = {};
			lookCenter[] = {};
			lookDown[] = {};
			lookDownCont[] = {};
			lookLeft[] = {};
			lookLeftCont[] = {};
			lookLeftDown[] = {};
			lookLeftUp[] = {};
			lookRight[] = {};
			lookRightCont[] = {};
			lookRightDown[] = {};
			lookRightUp[] = {};
			lookRollLeft[] = {};
			lookRollLeftCont[] = {};
			lookRollRight[] = {};
			lookRollRightCont[] = {};
			lookShiftBack[] = {};
			lookShiftBackCont[] = {};
			lookShiftCenter[] = {};
			lookShiftDown[] = {};
			lookShiftDownCont[] = {};
			lookShiftForward[] = {};
			lookShiftForwardCont[] = {};
			lookShiftLeft[] = {};
			lookShiftLeftCont[] = {};
			lookShiftRight[] = {};
			lookShiftRightCont[] = {};
			lookShiftUp[] = {};
			lookShiftUpCont[] = {};
			lookUp[] = {};
			lookUpCont[] = {};
			minimap[] = {};
			minimapToggle[] = {};
			moveBack[] = {};
			moveDown[] = {};
			moveFastForward[] = {};
			moveForward[] = {};
			moveLeft[] = {};
			moveRight[] = {};
			moveSlowForward[] = {};
			moveUp[] = {};
			navigateMenu[] = {};
			networkPlayers[] = {};
			networkStats[] = {};
			nextAction[] = {};
			nextChannel[] = {};
			nextCM[] = {};
			NextModeLeftVehicleDisplay[] = {};
			NextModeRightVehicleDisplay[] = {};
			nextWeapon[] = {};
			nightVision[] = {};
			openDlcScreen[] = {};
			optics[] = {};
			opticsMode[] = {};
			OpticsTemp[] = {};
			personView[] = {};
			pilotCamera[] = {};
			prevAction[] = {};
			prevChannel[] = {};
			prevWeapon[] = {};
			prone[] = {};
			pushToTalk[] = {};
			PushToTalkAll[] = {};
			PushToTalkCommand[] = {};
			PushToTalkDirect[] = {};
			PushToTalkGroup[] = {};
			PushToTalkSide[] = {};
			PushToTalkVehicle[] = {};
			reloadMagazine[] = {};
			revealTarget[] = {};
			salute[] = {};
			seagullBack[] = {};
			seagullDown[] = {};
			seagullFastForward[] = {};
			seagullForward[] = {};
			seagullUp[] = {};
			selectAll[] = {};
			selectgroupunit0[] = {};
			selectgroupunit1[] = {};
			selectgroupunit2[] = {};
			selectgroupunit3[] = {};
			selectgroupunit4[] = {};
			selectgroupunit5[] = {};
			selectgroupunit6[] = {};
			selectgroupunit7[] = {};
			selectgroupunit8[] = {};
			selectgroupunit9[] = {};
			selectteamblue[] = {};
			selectteamgreen[] = {};
			selectteamred[] = {};
			selectteamwhite[] = {};
			selectteamyellow[] = {};
			setteamblue[] = {};
			setteamgreen[] = {};
			setteamred[] = {};
			setteamwhite[] = {};
			setteamyellow[] = {};
			showMap[] = {};
			sitDown[] = {};
			stand[] = {};
			submarineBack[] = {};
			submarineCyclicBack[] = {};
			submarineCyclicForward[] = {};
			submarineDown[] = {};
			submarineForward[] = {};
			submarineLeft[] = {};
			submarineRight[] = {};
			submarineUp[] = {};
			swapGunner[] = {};
			swimDown[] = {};
			swimUp[] = {};
			switchCommand[] = {};
			switchGunnerWeapon[] = {};
			switchHandgun[] = {};
			switchPrimary[] = {};
			switchSecondary[] = {};
			switchWeapon[] = {};
			SwitchWeaponGrp1[] = {};
			SwitchWeaponGrp2[] = {};
			SwitchWeaponGrp3[] = {};
			SwitchWeaponGrp4[] = {};
			TacticalPing[] = {};
			tacticalView[] = {};
			TactShort[] = {};
			tactTemp[] = {};
			tactToggle[] = {};
			tasks[] = {};
			teamSwitch[] = {};
			teamSwitchNext[] = {};
			teamSwitchPrev[] = {};
			tempRaiseWeapon[] = {};
			throw[] = {};
			timeDec[] = {};
			timeInc[] = {};
			toggleRaiseWeapon[] = {};
			turbo[] = {};
			turboToggle[] = {};
			turnIn[] = {};
			turnLeft[] = {};
			turnOut[] = {};
			turnRight[] = {};
			turretElevationDown[] = {};
			turretElevationUp[] = {};
			uavView[] = {};
			uavViewToggle[] = {};
			User1[] = {};
			User10[] = {};
			User11[] = {};
			User12[] = {};
			User13[] = {};
			User14[] = {};
			User15[] = {};
			User16[] = {};
			User17[] = {};
			User18[] = {};
			User19[] = {};
			User2[] = {};
			User20[] = {};
			User3[] = {};
			User4[] = {};
			User5[] = {};
			User6[] = {};
			User7[] = {};
			User8[] = {};
			User9[] = {};
			vehicleTurbo[] = {};
			vehLockEmptyTargets[] = {};
			vehLockTargets[] = {};
			vehLockTurretView[] = {};
			voiceOverNet[] = {};
			vtolVectoring[] = {};
			vtolVectoringCancel[] = {};
			walk[] = {};
			walkRunTemp[] = {};
			walkRunToggle[] = {};
			watch[] = {};
			watchToggle[] = {};
			zeroingDown[] = {};
			zeroingUp[] = {};
			zoomContIn[] = {};
			zoomContOut[] = {};
			zoomIn[] = {};
			zoomInToggle[] = {};
			zoomOut[] = {};
			zoomOutToggle[] = {};
			zoomTemp[] = {};
		};
	};
	class Industry_Standard: Arma3
	{
		default = 0;
		displayName = "Industry Standard";
		toolTip = "Industry standard: the closest preset to contemporary FPS games.";
		class Mappings: Mappings
		{
			action[] = {33};
			actionContext[] = {"0x00010000 +2"};
			actionFreeLook[] = {65536};
			adjustDown[] = {208};
			adjustLeft[] = {203};
			adjustRight[] = {205};
			adjustUp[] = {200};
			autoHover[] = {45};
			autoHoverCancel[] = {45};
			carHandBrake[] = {57};
			chat[] = {28};
			crouch[] = {};
			CycleThrownItems[] = {{42, 34}};
			deployWeaponAuto[] = {46};
			Eject[] = {"256 + 0x2F"};
			fire[] = {{29, 65536}};
			freeHeadMove[] = {};
			gear[] = {23};
			GetOut[] = {47};
			getOver[] = {47};
			heliCollectiveLower[] = {57};
			heliCollectiveRaise[] = {42};
			heliDown[] = {57};
			heliFastForward[] = {};
			heliRudderLeft[] = {16};
			heliRudderRight[] = {18};
			heliUp[] = {42};
			holdBreath[] = {42};
			landGear[] = {34};
			landGearUp[] = {34};
			launchCM[] = {46};
			lookRollLeft[] = {};
			lookRollRight[] = {};
			lookShiftBack[] = {};
			lookShiftCenter[] = {};
			lookShiftDown[] = {};
			lookShiftForward[] = {};
			lookShiftLeft[] = {};
			lookShiftRight[] = {};
			lookShiftUp[] = {};
			MiniMapToggle[] = {{157, 50}};
			moveBack[] = {31};
			moveDown[] = {57};
			moveForward[] = {17};
			moveUp[] = {29};
			networkPlayers[] = {{157, 25}};
			networkStats[] = {25};
			nextAction[] = {"(0x00100000 +5)"};
			nextCM[] = {{29, 46}};
			nextWeapon[] = {44};
			optics[] = {};
			opticsMode[] = {45};
			opticsTemp[] = {"0x00010000 +1"};
			prevAction[] = {"(0x00100000 +4)"};
			prevWeapon[] = {};
			prone[] = {};
			selectAll[] = {41};
			stand[] = {};
			submarineDown[] = {57};
			submarineUp[] = {42};
			swapGunner[] = {};
			swimDown[] = {57};
			swimUp[] = {42};
			switchCommand[] = {{42, 33}, 221};
			switchGunnerWeapon[] = {{29, 44}};
			tacticalPing[] = {{42, 20}};
			teamSwitchNext[] = {};
			teamSwitchPrev[] = {};
			tempRaiseWeapon[] = {};
			Throw[] = {34};
			toggleRaiseWeapon[] = {"256 + 0x2E"};
			turnLeft[] = {30};
			turnRight[] = {32};
			vtolVectoring[] = {45};
			vtolVectoringCancel[] = {45};
			zoomTemp[] = {"0x00010000 +1"};
		};
	};
};
