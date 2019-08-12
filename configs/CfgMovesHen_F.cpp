class CfgMovesHen_F: CfgMovesAnimal_Base_F
{
	collisionGeomCompPattern[] = {1};
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a"};
	skeletonName = "Hen_F";
	class Actions: Actions
	{
		class HenActions: NoActions
		{
			CanNotMove = "Hen_Idle_Stop";
			Civil = "Hen_Idle_Stop";
			CivilLying = "Hen_Idle_Stop";
			Combat = "Hen_Idle_Stop";
			Crouch = "Hen_Lean";
			Default = "Hen_Idle_Stop";
			Die = "Hen_Die";
			Down = "Hen_Lean";
			Eat = "Hen_Idle_Eat_Down_Pose";
			EvasiveForward = "Hen_Idle_Stop";
			FastF = "Hen_Idle_Stop";
			FireNotPossible = "Hen_Idle_Eat_Down_Pose";
			JumpOff = "Hen_Idle_Stop";
			limitFast = 5.5;
			Lying = "Hen_Lean";
			PlayerCrouch = "Hen_Lean";
			PlayerProne = "Hen_Idle_Stop";
			PlayerStand = "Hen_Idle_Stop";
			Rest = "Hen_Lean";
			SlowF = "Hen_Idle_Walk";
			Stand = "Hen_Idle_Stop";
			Stop = "Hen_Idle_Stop";
			StopRelaxed = "Hen_Idle_Eat";
			TurnL = "Hen_Idle_Stop";
			TurnLRelaxed = "Hen_Idle_Stop";
			TurnR = "Hen_Idle_Stop";
			TurnRRelaxed = "Hen_Idle_Stop";
			turnSpeed = 1;
			Up = "Hen_Idle_Stop";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Hen_Idle_Walk";
		};
		class HenForceStop: HenActions
		{
			CivilLying = "Hen_Stop";
		};
		class HenForceWalk: HenActions
		{
			CivilLying = "Hen_Walk";
		};
		class NoActions: NoActions {};
	};
	class BlendAnims: BlendAnims
	{
		headDefault[] = {"head", 0.8, "neck1", 0.7, "neck", 0.5, "headEnd", 0.8, "LeftShoulder", 0.1, "RightShoulder", 0.1, "Spine2", 0.2};
	};
	class Default: Default
	{
		actions = "HenActions";
		collisionShape = "A3\animals_f_beta\chicken\chicken_CollShape.p3d";
	};
	class DefaultDie: Default {};
	class StandBase: Default {};
	class States
	{
		class Hen_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\A3\animals_f_beta\chicken\data\anim\Hen\HenDeath";
			looped = 0;
			speed = 0.1;
			terminal = 1;
			variantAfter[] = {0, 0, 0};
			variantsAI[] = {};
			variantsPlayer[] = {};
		};
		class Hen_Idle_Eat: Hen_Idle_Stop
		{
			connectTo[] = {"Hen_Idle_Eat", 0.1};
			file = "\A3\animals_f_beta\chicken\data\anim\Hen\HenEat";
			interpolateTo[] = {"Hen_Idle_Stop", 0.1, "Hen_Idle_Walk", 0.1, "Hen_Idle_Eat_Down_Pose", 0.1, "Hen_Stop", 0.5, "Hen_Walk", 0.5, "Hen_Die", 0.1};
			speed = -7;
			variantsAI[] = {};
		};
		class Hen_Idle_Eat_Down_Pose: Hen_Idle_Stop
		{
			connectTo[] = {"Hen_Idle_Eat_Down_Pose", 0.1};
			file = "\A3\animals_f_beta\chicken\data\anim\Hen\HenEat2";
			interpolateTo[] = {"Hen_Idle_Stop", 0.1, "Hen_Idle_Walk", 0.1, "Hen_Idle_Eat", 0.1, "Hen_Stop", 0.5, "Hen_Walk", 0.5, "Hen_Die", 0.1};
			speed = -8;
			variantsAI[] = {};
		};
		class Hen_Idle_Stop: StandBase
		{
			connectTo[] = {"Hen_Idle_Stop", 0.1};
			duty = -1;
			file = "\A3\animals_f_beta\chicken\data\anim\Hen\HenStop";
			interpolateTo[] = {"Hen_Idle_Walk", 0.1, "Hen_Idle_Eat", 0.1, "Hen_Idle_Eat_Down_Pose", 0.1, "Hen_Stop", 0.5, "Hen_Walk", 0.5, "Hen_Die", 0.1};
			preload = 1;
			variantAfter[] = {3, 6, 9};
			variantsAI[] = {"Hen_Idle_Stop", 0.1, "Hen_Idle_Walk", 0.3, "Hen_Idle_Eat", 0.3, "Hen_Idle_Eat_Down_Pose", 0.2};
			variantsPlayer[] = {};
		};
		class Hen_Idle_Walk: Hen_Idle_Stop
		{
			connectTo[] = {"Hen_Idle_Walk", 0.1};
			duty = -0.7;
			file = "\A3\animals_f_beta\chicken\data\anim\Hen\HenWalk";
			head = "headDefault";
			interpolateTo[] = {"Hen_Idle_Stop", 0.1, "Hen_Idle_Eat", 0.1, "Hen_Idle_Eat_Down_Pose", 0.1, "Hen_Stop", 0.5, "Hen_Walk", 0.5, "Hen_Die", 0.1};
			speed = 0.379747;
			variantsAI[] = {};
		};
		class Hen_Stop: Hen_Idle_Stop
		{
			actions = "HenForceStop";
			connectTo[] = {"Hen_Stop", 0.02};
			interpolateTo[] = {"Hen_Idle_Stop", 0.02, "Hen_Walk", 0.02, "Hen_Die", 0.02};
			variantsAI[] = {};
		};
		class Hen_Walk: Hen_Idle_Walk
		{
			actions = "HenForceWalk";
			connectTo[] = {"Hen_Walk", 0.02};
			interpolateTo[] = {"Hen_Idle_Stop", 0.02, "Hen_Stop", 0.02, "Hen_Die", 0.02};
		};
	};
};
