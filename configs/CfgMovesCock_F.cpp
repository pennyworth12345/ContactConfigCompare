class CfgMovesCock_F: CfgMovesAnimal_Base_F
{
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a"};
	skeletonName = "Cock_F";
	class Actions: Actions
	{
		class CockActions: NoActions
		{
			CanNotMove = "Cock_Idle_Stop";
			Civil = "Cock_Idle_Stop";
			CivilLying = "Cock_Idle_Stop";
			Combat = "Cock_Idle_Stop";
			Crouch = "Cock_Idle_Wings";
			Default = "Cock_Idle_Stop";
			Die = "Cock_Die";
			Down = "Cock_Idle_Wings";
			Eat = "Cock_Idle_Eat";
			EvasiveForward = "Cock_Idle_Run";
			FastF = "Cock_Idle_Run";
			FireNotPossible = "Cock_Idle_Eat";
			JumpOff = "Cock_Idle_Stop";
			limitFast = 5.5;
			Lying = "Cock_Idle_Wings";
			PlayerCrouch = "Cock_Idle_Wings";
			PlayerProne = "Cock_Idle_Stop";
			PlayerStand = "Cock_Idle_Stop";
			Rest = "Cock_Idle_Wings";
			SlowF = "Cock_Idle_Walk";
			Stand = "Cock_Idle_Stop";
			Stop = "Cock_Idle_Stop";
			StopRelaxed = "Cock_Idle_Eat";
			TurnL = "Cock_Idle_Stop";
			TurnLRelaxed = "Cock_Idle_Stop";
			TurnR = "Cock_Idle_Stop";
			TurnRRelaxed = "Cock_Idle_Stop";
			turnSpeed = 1;
			Up = "Cock_Idle_Stop";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Cock_Idle_Walk";
		};
		class CockForceRun: CockActions
		{
			CivilLying = "Cock_Run";
		};
		class CockForceStop: CockActions
		{
			CivilLying = "Cock_Stop";
		};
		class CockForceWalk: CockActions
		{
			CivilLying = "Cock_Walk";
		};
		class NoActions: NoActions {};
	};
	class BlendAnims: BlendAnims
	{
		headDefault[] = {"head", 0.8, "neck1", 0.7, "neck", 0.5, "headEnd", 0.8, "LeftShoulder", 0.1, "RightShoulder", 0.1, "Spine2", 0.2};
	};
	class Default: Default
	{
		actions = "CockActions";
		collisionShape = "A3\animals_f_beta\chicken\chicken_CollShape.p3d";
	};
	class DefaultDie: Default {};
	class StandBase: Default {};
	class States
	{
		class Cock_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\A3\animals_f_beta\chicken\data\anim\Cock\CockDeath";
			looped = 0;
			speed = 0.1;
			terminal = 1;
			variantAfter[] = {0, 0, 0};
			variantsAI[] = {};
			variantsPlayer[] = {};
		};
		class Cock_Idle_Eat: Cock_Idle_Stop
		{
			connectTo[] = {"Cock_Idle_Eat", 0.1};
			file = "\A3\animals_f_beta\chicken\data\anim\Cock\CockEat";
			speed = 0.3;
			variantsAI[] = {};
		};
		class Cock_Idle_Run: Cock_Idle_Walk
		{
			connectTo[] = {"Cock_Idle_Run", 0.1};
			duty = -0.5;
			file = "\A3\animals_f_beta\chicken\data\anim\Cock\CockRunning";
			interpolateTo[] = {"Cock_Idle_Stop", 0.1, "Cock_Idle_Walk", 0.1, "Cock_Die", 0.1};
			speed = 2;
			variantsAI[] = {};
		};
		class Cock_Idle_Stop: StandBase
		{
			connectTo[] = {"Cock_Idle_Stop", 0.1};
			duty = -1;
			file = "\A3\animals_f_beta\chicken\data\anim\Cock\CockStop";
			interpolateTo[] = {"Cock_Idle_Walk", 0.1, "Cock_Idle_Walk_Wings", 0.1, "Cock_Idle_Wings", 0.1, "Cock_Idle_Eat", 0.1, "Cock_Idle_Run", 0.1, "Cock_Stop", 0.5, "Cock_Walk", 0.5, "Cock_Run", 0.5, "Cock_Die", 0.1};
			variantAfter[] = {3, 6, 9};
			variantsAI[] = {"Cock_Idle_Stop", 0.1, "Cock_Idle_Walk", 0.3, "Cock_Idle_Walk_Wings", 0.2, "Cock_Idle_Wings", 0.1, "Cock_Idle_Eat", 0.25, "Cock_Idle_Run", 0.05};
			variantsPlayer[] = {};
		};
		class Cock_Idle_Walk: Cock_Idle_Stop
		{
			connectTo[] = {"Cock_Idle_Walk", 0.1};
			duty = -0.7;
			file = "\A3\animals_f_beta\chicken\data\anim\Cock\CockWalk";
			head = "headDefault";
			interpolateTo[] = {"Cock_Idle_Stop", 0.1, "Cock_Idle_Run", 0.1, "Cock_Die", 0.1};
			speed = 0.8;
			variantsAI[] = {};
		};
		class Cock_Idle_Walk_Wings: Cock_Idle_Stop
		{
			connectTo[] = {"Cock_Idle_Walk_Wings", 0.1};
			file = "\A3\animals_f_beta\chicken\data\anim\Cock\CockWalkWings";
			looped = 0;
			speed = 0.7;
			variantsAI[] = {};
		};
		class Cock_Idle_Wings: Cock_Idle_Walk_Wings
		{
			connectTo[] = {"Cock_Idle_Wings", 0.1};
			file = "\A3\animals_f_beta\chicken\data\anim\Cock\CockWings";
			speed = 1e+010;
			variantsAI[] = {};
		};
		class Cock_Run: Cock_Idle_Run
		{
			actions = "CockForceRun";
			connectTo[] = {"Cock_Run", 0.02};
			interpolateTo[] = {"Cock_Idle_Stop", 0.02, "Cock_Stop", 0.02, "Cock_Walk", 0.02, "Cock_Die", 0.02};
		};
		class Cock_Stop: Cock_Idle_Stop
		{
			actions = "CockForceStop";
			connectTo[] = {"Cock_Stop", 0.02};
			interpolateTo[] = {"Cock_Idle_Stop", 0.02, "Cock_Walk", 0.02, "Cock_Run", 0.02, "Cock_Die", 0.02};
			variantsAI[] = {};
		};
		class Cock_Walk: Cock_Idle_Walk
		{
			actions = "CockForceWalk";
			connectTo[] = {"Cock_Walk", 0.02};
			interpolateTo[] = {"Cock_Idle_Stop", 0.02, "Cock_Stop", 0.02, "Cock_Run", 0.02, "Cock_Die", 0.02};
		};
	};
};
