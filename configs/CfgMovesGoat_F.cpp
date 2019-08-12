class CfgMovesGoat_F: CfgMovesAnimal_Base_F
{
	access = 1;
	collisionGeomCompPattern[] = {1};
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a"};
	skeletonName = "Goat_F";
	transitionsDisabled[] = {};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	class Actions: Actions
	{
		class GoatActions: NoActions
		{
			CanNotMove = "Goat_Idle_Stop";
			Civil = "Goat_Idle_Eat";
			CivilLying = "Goat_Idle_Stop";
			Combat = "Goat_Idle_Stop";
			Crouch = "Goat_Idle_Stop";
			Default = "Goat_Idle_Stop";
			Die = "Goat_Die";
			Down = "Goat_Idle_Stop";
			EvasiveForward = "Goat_Idle_Run";
			FastF = "Goat_Idle_Run";
			FireNotPossible = "Goat_Idle_Stop";
			JumpOff = "Goat_Idle_Stop";
			limitFast = 5.5;
			Lying = "Goat_Idle_Stop";
			PlayerCrouch = "Goat_Idle_Stop";
			PlayerProne = "Goat_Idle_Stop";
			PlayerStand = "Goat_Idle_Stop";
			SlowF = "Goat_Idle_Walk";
			Stand = "Goat_Idle_Stop";
			Stop = "Goat_Idle_Stop";
			StopRelaxed = "Goat_Idle_Eat";
			TurnL = "Goat_TurnL";
			TurnLRelaxed = "Goat_TurnL";
			TurnR = "Goat_TurnR";
			TurnRRelaxed = "Goat_TurnR";
			turnSpeed = 8;
			Up = "Goat_Idle_Stop";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Goat_Idle_Walk";
		};
		class GoatForceRun: GoatActions
		{
			CivilLying = "Goat_Run";
		};
		class GoatForceStop: GoatActions
		{
			CivilLying = "Goat_Stop";
		};
		class GoatForceWalk: GoatActions
		{
			CivilLying = "Goat_Walk";
		};
		class NoActions: NoActions
		{
			limitFast = 5.5;
			turnSpeed = 3;
			upDegree = 0;
			useFastMove = 0;
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head", 1, "head", 1, "head", 1};
		aimingNo[] = {};
		aimingUpDefault[] = {};
		headDefault[] = {"head", 1, "neck2", 1, "neck1", 0.6, "Spine2", 0.2};
		headNo[] = {};
		legsDefault[] = {};
		legsNo[] = {};
		untiltWeaponDefault[] = {};
	};
	class Default: Default
	{
		actions = "GoatActions";
		collisionShape = "A3\animals_f_beta\goat\goat_CollShape.p3d";
	};
	class DefaultDie: Default
	{
		aiming = "aimingNo";
		disableWeapons = 1;
		enableDirectControl = 0;
		head = "headNo";
		interpolationRestart = 1;
		legs = "legsNo";
	};
	class Interpolations {};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		disableWeapons = 1;
	};
	class States
	{
		class Goat_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\A3\animals_f_beta\goat\data\Anim\goatDeath";
			looped = 0;
			speed = 0.625;
			terminal = 1;
			variantAfter[] = {0, 0, 0};
			variantsAI[] = {};
			variantsPlayer[] = {};
		};
		class Goat_Idle_Eat: Goat_Idle_Stop
		{
			connectTo[] = {"Goat_Idle_Eat", 0.02};
			file = "\A3\animals_f_beta\goat\data\Anim\goatEat";
			interpolateTo[] = {"Goat_Idle_Run", 0.02, "Goat_Idle_Walk", 0.02, "Goat_Idle_Stop", 0.02, "Goat_Stop", 0.5, "Goat_Walk", 0.5, "Goat_Run", 0.5, "Goat_Die", 0.01};
			speed = -9;
			variantsAI[] = {};
		};
		class Goat_Idle_Run: Goat_Idle_Stop
		{
			connectTo[] = {"Goat_Idle_Run", 0.02};
			duty = -0.5;
			file = "\A3\animals_f_beta\goat\data\Anim\goatRunning";
			interpolateTo[] = {"Goat_Idle_Walk", 0.02, "Goat_Idle_Eat", 0.02, "Goat_Idle_Stop", 0.02, "Goat_Stop", 0.5, "Goat_Walk", 0.5, "Goat_Run", 0.5, "Goat_Die", 0.01};
			speed = 0.5;
			variantsAI[] = {};
		};
		class Goat_Idle_Stop: StandBase
		{
			actions = "GoatActions";
			connectTo[] = {};
			disableWeapons = 1;
			disableWeaponsLong = 1;
			duty = -1;
			enableBinocular = 1;
			enableDirectControl = 0;
			file = "\A3\animals_f_beta\goat\data\Anim\goat_stop";
			interpolateTo[] = {"Goat_Idle_Stop", 0.02, "Goat_Idle_Walk", 0.2, "Goat_Idle_Run", 0.02, "Goat_Idle_Eat", 0.02, "Goat_Stop", 0.5, "Goat_Walk", 0.5, "Goat_Run", 0.5, "Goat_Die", 0.01};
			looped = 1;
			preload = 1;
			relSpeedMax = 1.1;
			relSpeedMin = 0.7;
			showWeaponAim = 0;
			soundEnabled = 0;
			speed = 1e+010;
			variantAfter[] = {3, 6, 9};
			variantsAI[] = {"Goat_Idle_Eat", 0.6, "Goat_Idle_Walk", 0.3, "Goat_Idle_Run", 0.1};
			variantsPlayer[] = {};
		};
		class Goat_Idle_Walk: Goat_Idle_Stop
		{
			connectTo[] = {"Goat_Idle_Walk", 0.02};
			duty = -0.7;
			file = "\A3\animals_f_beta\goat\data\Anim\goatWalk";
			interpolateTo[] = {"Goat_Idle_Run", 0.02, "Goat_Idle_Eat", 0.02, "Goat_Idle_Stop", 0.02, "Goat_Stop", 0.5, "Goat_Walk", 0.5, "Goat_Run", 0.5, "Goat_Die", 0.01};
			speed = 0.7;
			variantsAI[] = {};
		};
		class Goat_Run: Goat_Idle_Run
		{
			actions = "GoatForceRun";
			connectTo[] = {"Goat_Run", 0.02};
			interpolateTo[] = {"Goat_Idle_Stop", 0.02, "Goat_Stop", 0.02, "Goat_Walk", 0.02, "Goat_Die", 0.02};
		};
		class Goat_Stop: Goat_Idle_Stop
		{
			actions = "GoatForceStop";
			connectTo[] = {"Goat_Stop", 0.02};
			interpolateTo[] = {"Goat_Idle_Stop", 0.02, "Goat_Walk", 0.02, "Goat_Run", 0.02, "Goat_Die", 0.02};
			variantsAI[] = {};
		};
		class Goat_TurnL: Goat_Idle_Stop
		{
			connectFrom[] = {"Goat_Idle_Stop", 0.1};
			connectTo[] = {"Goat_Idle_Stop", 0.1};
			file = "\A3\animals_f_beta\Goat\data\Anim\Goat_rotateL";
			interpolateTo[] = {"Goat_Idle_Stop", 0.1, "Goat_Die", 0.01};
			speed = 1;
		};
		class Goat_TurnR: Goat_TurnL
		{
			file = "\A3\animals_f_beta\Goat\data\Anim\Goat_rotateR";
		};
		class Goat_Walk: Goat_Idle_Walk
		{
			actions = "GoatForceWalk";
			connectTo[] = {"Goat_Walk", 0.02};
			interpolateTo[] = {"Goat_Idle_Stop", 0.02, "Goat_Stop", 0.02, "Goat_Run", 0.02, "Goat_Die", 0.02};
		};
	};
};
