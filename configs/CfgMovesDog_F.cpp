class CfgMovesDog_F: CfgMovesAnimal_Base_F
{
	access = 1;
	collisionGeomCompPattern[] = {1};
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a"};
	enableDirectControl = 0;
	skeletonName = "Dog_F";
	transitionsDisabled[] = {};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	class Actions: Actions
	{
		class FinActions: NoActions
		{
			CanNotMove = "Dog_Idle_Stop";
			Civil = "Dog_Idle_Stop";
			CivilLying = "Dog_Idle_Stop";
			Combat = "Dog_Idle_Stop";
			Crouch = "Dog_Idle_Sitting";
			Default = "Dog_Idling";
			Die = "Dog_Die";
			Down = "Dog_Idle_Stop";
			EvasiveForward = "Dog_Idle_Sprint";
			FastF = "Dog_Idle_Sprint";
			FireNotPossible = "Dog_Idle_Stop";
			JumpOff = "Dog_Idle_Stop";
			limitFast = 5.5;
			Lying = "Dog_Idle_Stop";
			PlayerCrouch = "Dog_Idle_Sitting";
			PlayerProne = "Dog_Idle_Stop";
			PlayerStand = "Dog_Idle_Stop";
			SlowF = "Dog_Idle_Run";
			Stand = "Dog_Idle_Stop";
			Stop = "Dog_Idle_Stop";
			StopRelaxed = "Dog_Idle_Stop";
			TurnL = "Dog_TurnL";
			TurnLRelaxed = "Dog_TurnL";
			TurnR = "Dog_TurnR";
			TurnRRelaxed = "Dog_TurnR";
			turnSpeed = 8;
			Up = "Dog_Idle_Stop";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Dog_Idle_Walk";
		};
		class FinForceRun: FinRun
		{
			CivilLying = "Dog_Run";
		};
		class FinForceSit: FinSit
		{
			CivilLying = "Dog_Sit";
		};
		class FinForceSprint: FinSprint
		{
			CivilLying = "Dog_Sprint";
		};
		class FinForceStop: FinActions
		{
			CivilLying = "Dog_Stop";
		};
		class FinForceWalk: FinActions
		{
			CivilLying = "Dog_Walk";
		};
		class FinRun: FinActions
		{
			Die = "Dog_Die_Run";
		};
		class FinSit: FinActions
		{
			Die = "Dog_Die_Sit";
			Stop = "Dog_Idle_Sitting";
			StopRelaxed = "Dog_Idle_Sitting";
		};
		class FinSprint: FinActions
		{
			Die = "Dog_Die_Sprint";
			EvasiveForward = "Dog_Idle_Sprint";
			FastF = "Dog_Idle_Sprint";
			limitFast = 5.5;
			turnSpeed = 8;
			useFastMove = 1;
		};
		class NoActions: NoActions
		{
			limitFast = 5.5;
			turnSpeed = 8;
			upDegree = 0;
			useFastMove = 0;
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head", 1, "head", 1, "head", 1};
		aimingNo[] = {};
		aimingUpDefault[] = {};
		headDefault[] = {};
		headNo[] = {};
		legsDefault[] = {};
		legsNo[] = {};
		untiltWeaponDefault[] = {};
	};
	class Default: Default
	{
		access = 3;
		aiming = "aimingNo";
		aimingBody = "aimingUpDefault";
		aimPrecision = 1;
		boundingSphere = 1;
		canPullTrigger = 1;
		canreload = 1;
		collisionShape = "A3\animals_f_beta\dog\Dog_CollShape.p3d";
		collisionShapeSafe = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		disableWeapons = 1;
		disableWeaponsLong = 0;
		duty = -0.51;
		enableAutoActions = 0;
		enableBinocular = 0;
		enableDirectControl = 1;
		enableMissile = 0;
		enableOptics = 1;
		equivalentTo = "";
		file = "";
		forceAim = 0;
		hasCollShapeSafe = 0;
		head = "headDefault";
		headBobMode = 1;
		headBobStrength = 0.5;
		interpolateFrom[] = {};
		interpolateTo[] = {};
		interpolateWith[] = {};
		interpolationRestart = 0;
		interpolationSpeed = 6;
		leaning = "aimingNo";
		leaningCorrectionAngleBeg = 0;
		leaningCorrectionAngleEnd = 0;
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leftHandIKBeg = 0;
		leftHandIKCurve = 0;
		leftHandIKEnd = 0;
		legs = "legsNo";
		limitGunMovement = 1;
		looped = 1;
		onLadder = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		predictSpeedCoef = 1;
		preload = 0;
		relSpeedMax = 1;
		relSpeedMin = 1;
		rightHandIKBeg = 0;
		rightHandIKCurve = 0;
		rightHandIKEnd = 0;
		showDisposableGun = 0;
		showHandGun = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showWeaponAim = 1;
		soundEdge[] = {0.5, 1};
		soundEdge1 = 0.5;
		soundEdge2 = 1;
		soundEnabled = 1;
		soundOverride = "";
		speed = 0.5;
		terminal = 0;
		untiltWeapon = "aimingNo";
		variantAfter[] = {5, 10, 20};
		variantsAI[] = {};
		variantsPlayer[] = {};
		visibleSize = 1;
		walkcycles = 1;
		weaponIK = 0;
	};
	class DefaultDie: Default
	{
		aiming = "aimingNo";
		disableWeapons = 1;
		head = "headNo";
		interpolationRestart = 1;
		legs = "legsNo";
		soundEdge1 = 0.45;
		soundEdge2 = 0.45;
		soundOverride = "fallbody";
	};
	class Interpolations {};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		disableWeapons = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};
	class States
	{
		class Dog_Die: DefaultDie
		{
			actions = "NoActions";
			enableDirectControl = 0;
			file = "\A3\animals_f_beta\Dog\data\Anim\dogDeath";
			looped = 0;
			speed = 1.2;
			terminal = 1;
			variantAfter[] = {0, 0, 0};
			variantsAI[] = {};
			variantsPlayer[] = {};
		};
		class Dog_Die_Run: Dog_Die
		{
			file = "\A3\animals_f_beta\Dog\data\Anim\dogTrotDeath";
			terminal = 1;
		};
		class Dog_Die_Sit: Dog_Die
		{
			file = "\A3\animals_f_beta\Dog\data\Anim\dogSit2Death";
			terminal = 1;
		};
		class Dog_Die_Sprint: Dog_Die
		{
			file = "\A3\animals_f_beta\Dog\data\Anim\dogRunDeath";
			terminal = 1;
		};
		class Dog_Idle_01: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle9";
		};
		class Dog_Idle_02: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle1";
		};
		class Dog_Idle_03: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle2";
		};
		class Dog_Idle_04: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle3";
		};
		class Dog_Idle_05: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle4";
		};
		class Dog_Idle_06: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle5";
		};
		class Dog_Idle_07: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle6";
		};
		class Dog_Idle_08: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle7";
		};
		class Dog_Idle_09: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle8";
			speed = -4;
		};
		class Dog_Idle_10: Dog_Idling
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogIdle9";
		};
		class Dog_Idle_Bark: Dog_Idle_Stop
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogBarkingLoop";
			interpolateTo[] = {"Dog_Idle_Stop", 0.1, "Dog_Die", 0.2};
			looped = 1;
			speed = -3;
			variantAfter[] = {3, 6, 9};
			variantsAI[] = {};
		};
		class Dog_Idle_Growl: Dog_Idle_Stop
		{
			equivalentTo = "Dog_Idle_Growl";
			file = "\A3\animals_f_beta\Dog\Data\anim\dogGrowlingLoop";
			interpolateTo[] = {"Dog_Idle_Stop", 0.1, "Dog_Die", 0.2};
			looped = 1;
			speed = -3;
			variantAfter[] = {3, 6, 9};
			variantsAI[] = {};
		};
		class Dog_Idle_Run: Dog_Idle_Stop
		{
			connectTo[] = {};
			duty = -0.5;
			file = "\A3\animals_f_beta\Dog\data\Anim\dogTrot";
			interpolateTo[] = {"Dog_Idle_Run", 0.02, "Dog_Idle_Stop", 0.02, "Dog_Idle_Sprint", 0.02, "Dog_Idle_Walk", 0.02, "Dog_Die_Run", 0.02};
			speed = -1.63;
			variantsAI[] = {};
		};
		class Dog_Idle_Sit01: Dog_Idle_Sitting
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogSit2Idle";
		};
		class Dog_Idle_Sit02: Dog_Idle_Sitting
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogSit2Idle1";
		};
		class Dog_Idle_Sit03: Dog_Idle_Sitting
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogSit2Idle3";
		};
		class Dog_Idle_Sit04: Dog_Idle_Sitting
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogSit2Idle3";
		};
		class Dog_Idle_Sit05: Dog_Idle_Sitting
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogSit2Idle4";
		};
		class Dog_Idle_Sit06: Dog_Idle_Sitting
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogSit2Idle5";
		};
		class Dog_Idle_Sit07: Dog_Idle_Sitting
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogSit2Idle6";
		};
		class Dog_Idle_Sit08: Dog_Idle_Sitting
		{
			file = "\A3\animals_f_beta\Dog\Data\anim\dogSit2Idle7";
		};
		class Dog_Idle_Sitting: Dog_Idle_Stop
		{
			interpolationSpeed = 0.5;
			speed = -3;
			variantAfter[] = {3, 6, 9};
		};
		class Dog_Idle_Sprint: Dog_Idle_Stop
		{
			actions = "FinSprint";
			connectTo[] = {};
			duty = 0.5;
			file = "\A3\animals_f_beta\Dog\data\Anim\dogRun";
			interpolateTo[] = {"Dog_Idle_Run", 0.02, "Dog_Idle_Stop", 0.02, "Dog_Idle_Sprint", 0.02, "Dog_Idle_Walk", 0.02, "Dog_Die_Sprint", 0.02};
			speed = -1.47;
			variantsAI[] = {};
		};
		class Dog_Idle_Stop: StandBase
		{
			actions = "FinActions";
			connectTo[] = {"Dog_TurnL", 0.1, "Dog_TurnR", 0.1};
			disableWeapons = 1;
			disableWeaponsLong = 1;
			duty = -1;
			enableBinocular = 1;
			enableDirectControl = 1;
			file = "\A3\animals_f_beta\Dog\data\Anim\dogStop";
			interpolateTo[] = {"Dog_Idle_Stop", 0.05, "Dog_Idle_01", 0.05, "Dog_Idle_02", 0.05, "Dog_Idle_03", 0.05, "Dog_Idle_04", 0.05, "Dog_Idle_05", 0.05, "Dog_Idle_06", 0.05, "Dog_Idle_07", 0.05, "Dog_Idle_08", 0.05, "Dog_Idle_09", 0.05, "Dog_Idle_10", 0.05, "Dog_Idle_Sit01", 0.05, "Dog_Idle_Sit02", 0.05, "Dog_Idle_Sit03", 0.05, "Dog_Idle_Sit04", 0.05, "Dog_Idle_Sit05", 0.05, "Dog_Idle_Sit06", 0.05, "Dog_Idle_Sit07", 0.05, "Dog_Idle_Sit08", 0.05, "Dog_Idle_Bark", 0.05, "Dog_Idle_Growl", 0.05, "Dog_Idle_Walk", 0.2, "Dog_Idle_Run", 0.02, "Dog_Idle_Sprint", 0.02, "Dog_Die", 0.2, "Dog_Walk", 0.5, "Dog_Run", 0.5, "Dog_Sprint", 0.5, "Dog_Sit", 0.5, "Dog_Stop", 0.5, "Dog_TurnL", 0.1, "Dog_TurnR", 0.1};
			interpolationSpeed = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			looped = 1;
			preload = 1;
			relSpeedMax = 1.1;
			relSpeedMin = 0.7;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			showWeaponAim = 0;
			soundEnabled = 0;
			speed = 1e+010;
			variantAfter[] = {3, 6, 9};
			variantsAI[] = {"Dog_Idle_01", 0.04, "Dog_Idle_02", 0.04, "Dog_Idle_03", 0.04, "Dog_Idle_04", 0.04, "Dog_Idle_05", 0.04, "Dog_Idle_06", 0.04, "Dog_Idle_07", 0.04, "Dog_Idle_08", 0.04, "Dog_Idle_09", 0.04, "Dog_Idle_10", 0.04, "Dog_Idle_Sit01", 0.04, "Dog_Idle_Sit02", 0.04, "Dog_Idle_Sit03", 0.04, "Dog_Idle_Sit04", 0.04, "Dog_Idle_Sit05", 0.04, "Dog_Idle_Sit06", 0.04, "Dog_Idle_Sit07", 0.04, "Dog_Idle_Sit08", 0.04, "Dog_Idle_Bark", 0.04, "Dog_Idle_Growl", 0.04, "Dog_Idle_Walk", 0.1, "Dog_Idle_Run", 0.05, "Dog_Idle_Sprint", 0.05};
			variantsPlayer[] = {};
		};
		class Dog_Idle_Walk: Dog_Idle_Stop
		{
			actions = "FinRun";
			connectTo[] = {};
			duty = -0.7;
			file = "\A3\animals_f_beta\Dog\data\Anim\dogWalk";
			interpolateTo[] = {"Dog_Idle_Run", 0.02, "Dog_Idle_Stop", 0.02, "Dog_Idle_Sprint", 0.02, "Dog_Idle_Walk", 0.02, "Dog_Die", 0.02};
			speed = -2.03;
			variantAfter[] = {3, 10, 20};
			variantsAI[] = {};
		};
		class Dog_Idling: Dog_Idle_Stop
		{
			equivalentTo = "Dog_Idle_Stop";
			speed = -3;
			variantAfter[] = {3, 6, 9};
		};
		class Dog_Run: Dog_Idle_Run
		{
			actions = "FinForceRun";
			interpolateTo[] = {"Dog_Run", 0.02, "Dog_Idle_Stop", 0.02, "Dog_Sprint", 0.02, "Dog_Walk", 0.02, "Dog_Stop", 0.02, "Dog_Die_Run", 0.02};
		};
		class Dog_Sit: Dog_Idle_Sitting
		{
			actions = "FinForceSit";
			file = "\A3\animals_f_beta\Dog\Data\anim\dogSit2Idle";
			interpolateTo[] = {"Dog_Run", 0.02, "Dog_Idle_Stop", 0.02, "Dog_Sprint", 0.02, "Dog_Walk", 0.02, "Dog_Die_Sit", 0.02, "Dog_Sit", 0.02, "Dog_Stop", 0.02};
			variantsAI[] = {};
		};
		class Dog_Sprint: Dog_Idle_Sprint
		{
			actions = "FinForceSprint";
			interpolateTo[] = {"Dog_Run", 0.02, "Dog_Sprint", 0.02, "Dog_Stop", 0.02, "Dog_Die_Sprint", 0.02};
		};
		class Dog_Stop: Dog_Idle_Stop
		{
			actions = "FinForceStop";
			connectTo[] = {"Dog_TurnL", 0.1, "Dog_TurnR", 0.1};
			interpolateTo[] = {"Dog_Idle_01", 0.05, "Dog_Idle_02", 0.05, "Dog_Idle_03", 0.05, "Dog_Idle_04", 0.05, "Dog_Idle_05", 0.05, "Dog_Idle_06", 0.05, "Dog_Idle_07", 0.05, "Dog_Idle_08", 0.05, "Dog_Idle_09", 0.05, "Dog_Idle_10", 0.05, "Dog_Idle_Stop", 0.05, "Dog_Die", 0.2, "Dog_Walk", 0.5, "Dog_Run", 0.5, "Dog_Sprint", 0.5, "Dog_Sit", 0.5, "Dog_TurnL", 0.1, "Dog_TurnR", 0.1};
			variantsAI[] = {"Dog_Idle_01", 0.04, "Dog_Idle_02", 0.04, "Dog_Idle_03", 0.04, "Dog_Idle_04", 0.04, "Dog_Idle_05", 0.04, "Dog_Idle_06", 0.04, "Dog_Idle_07", 0.04, "Dog_Idle_08", 0.04, "Dog_Idle_09", 0.04, "Dog_Idle_10", 0.04};
		};
		class Dog_TurnL: Dog_Idle_Stop
		{
			connectTo[] = {"Dog_Idle_Stop", 0.1, "Dog_Stop", 0.1};
			file = "\A3\animals_f_beta\Dog\data\anim\dogTurnL";
			interpolateTo[] = {"Dog_Idle_Stop", 0.1, "Dog_Stop", 0.1};
			speed = 1;
		};
		class Dog_TurnR: Dog_TurnL
		{
			file = "\A3\animals_f_beta\Dog\data\anim\dogTurnR";
		};
		class Dog_Walk: Dog_Idle_Walk
		{
			actions = "FinForceWalk";
			interpolateTo[] = {"Dog_Run", 0.02, "Dog_Idle_Stop", 0.02, "Dog_Sprint", 0.02, "Dog_Walk", 0.02, "Dog_Die", 0.02, "Dog_Sit", 0.02, "Dog_Stop", 0.02};
		};
	};
};
