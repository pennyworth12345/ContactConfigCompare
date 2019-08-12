class CfgMovesSheep_F: CfgMovesAnimal_Base_F
{
	collisionGeomCompPattern[] = {1};
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a"};
	skeletonName = "Sheep_F";
	class Actions: Actions
	{
		class NoActions: NoActions {};
		class SheepActions: NoActions
		{
			CanNotMove = "Sheep_Idle_Stop";
			Civil = "Sheep_Idle_Stop";
			CivilLying = "Sheep_Idle_Stop";
			Combat = "Sheep_Idle_Stop";
			Crouch = "Sheep_Idle_Stop";
			Default = "Sheep_Idle_Stop";
			Die = "Sheep_Die";
			Down = "Sheep_Idle_Stop";
			Eat = "Sheep_Idle_Eat";
			EvasiveForward = "Sheep_Idle_Run";
			FastF = "Sheep_Idle_Run";
			FireNotPossible = "Sheep_Idle_Stop";
			JumpOff = "Sheep_Idle_Stop";
			limitFast = 5.5;
			Lying = "Sheep_Idle_Stop";
			PlayerCrouch = "Sheep_Idle_Stop";
			PlayerProne = "Sheep_Idle_Stop";
			PlayerStand = "Sheep_Idle_Stop";
			Rest = "Sheep_Idle_Eat";
			SlowF = "Sheep_Idle_Walk";
			Stand = "Sheep_Idle_Stop";
			Stop = "Sheep_Idle_Stop";
			StopRelaxed = "Sheep_Idle_Eat";
			TurnL = "Sheep_TurnL";
			TurnLRelaxed = "Sheep_TurnL";
			TurnR = "Sheep_TurnR";
			TurnRRelaxed = "Sheep_TurnR";
			turnSpeed = 1;
			Up = "Sheep_Idle_Stop";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Sheep_Idle_Walk";
		};
		class SheepForceRun: SheepActions
		{
			CivilLying = "Sheep_Run";
		};
		class SheepForceStop: SheepActions
		{
			CivilLying = "Sheep_Stop";
		};
		class SheepForceWalk: SheepActions
		{
			CivilLying = "Sheep_Walk";
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head", 1};
		headDefault[] = {"head", 0.8, "neck2", 0.8, "neck1", 0.7, "neck", 0.5, "headEnd", 0.8, "LeftRearEar1", 0.8, "LeftRearEar2", 0.8, "LeftRearEar3", 0.8, "RightRearEar1", 0.8, "RightRearEar2", 0.8, "RightRearEar3", 0.8, "LeftShoulder", 0.1, "RightShoulder", 0.1, "Spine2", 0.2};
	};
	class Default: Default
	{
		actions = "SheepActions";
		collisionShape = "A3\animals_f_beta\sheep\sheep_CollShape.p3d";
	};
	class DefaultDie: Default {};
	class StandBase: Default {};
	class States
	{
		class Sheep_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\A3\animals_f_beta\sheep\data\Anim\sheepDeath2";
			looped = 0;
			speed = 0.666;
			terminal = 1;
			variantAfter[] = {0, 0, 0};
			variantsAI[] = {};
			variantsPlayer[] = {};
		};
		class Sheep_Idle_Eat: Sheep_Idle_Stop
		{
			connectTo[] = {"Sheep_Idle_Eat", 0.1};
			file = "\A3\animals_f_beta\sheep\data\Anim\sheepEat";
			interpolateTo[] = {"Sheep_Idle_Run", 0.1, "Sheep_Idle_Walk", 0.1, "Sheep_Idle_Stop", 0.1, "Sheep_Stop", 0.5, "Sheep_Walk", 0.5, "Sheep_Run", 0.5, "Sheep_Die", 0.1};
			looped = 1;
			speed = -9;
			variantsAI[] = {};
		};
		class Sheep_Idle_Run: Sheep_Idle_Stop
		{
			connectTo[] = {"Sheep_Idle_Run", 0.1};
			duty = -0.5;
			file = "\A3\animals_f_beta\sheep\data\Anim\sheepRun";
			interpolateTo[] = {"Sheep_Idle_Eat", 0.1, "Sheep_Idle_Walk", 0.1, "Sheep_Idle_Stop", 0.1, "Sheep_Stop", 0.5, "Sheep_Walk", 0.5, "Sheep_Run", 0.5, "Sheep_Die", 0.1};
			looped = 1;
			speed = 1;
			variantsAI[] = {};
		};
		class Sheep_Idle_Stop: StandBase
		{
			connectTo[] = {};
			duty = -1;
			file = "\A3\animals_f_beta\sheep\data\Anim\sheep_stop";
			interpolateTo[] = {"Sheep_Idle_Stop", 0.1, "Sheep_Idle_Walk", 0.1, "Sheep_Idle_Eat", 0.1, "Sheep_Idle_Run", 0.1, "Sheep_Stop", 0.5, "Sheep_Walk", 0.5, "Sheep_Run", 0.5, "Sheep_Die", 0.1};
			preload = 1;
			speed = 1;
			variantAfter[] = {3, 6, 9};
			variantsAI[] = {"Sheep_Idle_Eat", 0.6, "Sheep_Idle_Walk", 0.3, "Sheep_Idle_Run", 0.1};
			variantsPlayer[] = {};
		};
		class Sheep_Idle_Walk: Sheep_Idle_Stop
		{
			connectTo[] = {"Sheep_Idle_Stop", 0.1};
			duty = -0.7;
			file = "\A3\animals_f_beta\sheep\data\Anim\sheepWalk";
			head = "headDefault";
			interpolateTo[] = {"Sheep_Idle_Run", 0.1, "Sheep_Idle_Eat", 0.1, "Sheep_Idle_Stop", 0.1, "Sheep_Stop", 0.5, "Sheep_Walk", 0.5, "Sheep_Run", 0.5, "Sheep_Die", 0.1};
			looped = 1;
			speed = 0.8;
			variantsAI[] = {};
		};
		class Sheep_Run: Sheep_Idle_Run
		{
			actions = "SheepForceRun";
			connectTo[] = {"Sheep_Run", 0.02};
			interpolateTo[] = {"Sheep_Idle_Stop", 0.02, "Sheep_Stop", 0.02, "Sheep_Walk", 0.02, "Sheep_Die", 0.02};
		};
		class Sheep_Stop: Sheep_Idle_Stop
		{
			actions = "SheepForceStop";
			connectTo[] = {"Sheep_Stop", 0.02};
			interpolateTo[] = {"Sheep_Idle_Stop", 0.02, "Sheep_Walk", 0.02, "Sheep_Run", 0.02, "Sheep_Die", 0.02};
			variantsAI[] = {};
		};
		class Sheep_TurnL: Sheep_Idle_Stop
		{
			connectTo[] = {"Sheep_Idle_Stop", 0.1};
			file = "\A3\animals_f_beta\Sheep\data\Anim\Sheep_rotateL";
			interpolateTo[] = {"Sheep_Idle_Stop", 0.1, "Sheep_Die", 0.1};
			speed = 1;
			variantsAI[] = {};
		};
		class Sheep_TurnR: Sheep_TurnL
		{
			file = "\A3\animals_f_beta\Sheep\data\Anim\Sheep_rotateR";
		};
		class Sheep_Walk: Sheep_Idle_Walk
		{
			actions = "SheepForceWalk";
			connectTo[] = {"Sheep_Walk", 0.02};
			interpolateTo[] = {"Sheep_Idle_Stop", 0.02, "Sheep_Stop", 0.02, "Sheep_Run", 0.02, "Sheep_Die", 0.02};
		};
	};
};
