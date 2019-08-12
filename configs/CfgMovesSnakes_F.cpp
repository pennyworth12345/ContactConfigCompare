class CfgMovesSnakes_F: CfgMovesAnimal_Base_F
{
	collisionGeomCompPattern[] = {1};
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a"};
	skeletonName = "Snake_F";
	class Actions: Actions
	{
		class NoActions: NoActions {};
		class SnakesActions: NoActions
		{
			CanNotMove = "Snakes_Idle_Stop";
			Civil = "Snakes_Idle_Stop";
			CivilLying = "Snakes_Idle_Stop";
			Combat = "Snakes_Idle_Stop";
			Crouch = "Snakes_Idle_Stop";
			Default = "Snakes_Idle_Move";
			Die = "Snakes_Idle_Stop";
			Down = "Snakes_Idle_Stop";
			EvasiveForward = "Snakes_Idle_Move";
			FastF = "Snakes_Idle_Move";
			FireNotPossible = "Snakes_Idle_Stop";
			JumpOff = "Snakes_Idle_Stop";
			limitFast = 5.5;
			LookAround = "Snakes_Idle_Move";
			Lying = "Snakes_Idle_Stop";
			PlayerCrouch = "Snakes_Idle_Stop";
			PlayerProne = "Snakes_Idle_Stop";
			PlayerStand = "Snakes_Idle_Stop";
			SlowF = "Snakes_Idle_Move";
			Stand = "Snakes_Idle_Stop";
			Stop = "Snakes_Idle_Move";
			StopRelaxed = "Snakes_Idle_Move";
			TactF = "Snakes_Idle_Move";
			TurnL = "Snakes_TurnL";
			TurnLRelaxed = "Snakes_TurnL";
			TurnR = "Snakes_TurnR";
			TurnRRelaxed = "Snakes_TurnR";
			turnSpeed = 300;
			Up = "Snakes_Idle_Stop";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Snakes_Idle_Move";
		};
		class SnakesForceMove: SnakesActions
		{
			CivilLying = "Snakes_Move";
		};
		class SnakesForceStop: SnakesActions
		{
			CivilLying = "Snakes_Stop";
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {};
		fullbodyonground[] = {"bonesnake_01", 1, "bonesnake_02", 1, "bonesnake_03", 1, "bonesnake_04", 1, "bonesnake_05", 1, "bonesnake_06", 1, "bonesnake_07", 1, "bonesnake_08", 1, "bonesnake_09", 1, "bonesnake_10", 1};
		headDefault[] = {};
	};
	class Default: Default
	{
		actions = "SnakesActions";
		collisionShape = "A3\Animals_F\Snakes\snakes_CollShape.p3d";
	};
	class StandBase: Default
	{
		file = "\A3\animals_f\Snakes\data\anim\snake_idle";
		interpolationSpeed = 1;
	};
	class States
	{
		class Snakes_Idle_Move: StandBase
		{
			connectTo[] = {"Snakes_Idle_Move", 1};
			equivalentTo = "Snakes_Idle_Move";
			file = "\A3\animals_f\Snakes\data\anim\snake_move";
			interpolateTo[] = {"Snakes_Idle_Stop", 1, "Snakes_Idle_Move_S1", 1, "Snakes_Idle_Move_S2", 1, "Snakes_TurnL", 1, "Snakes_TurnR", 1};
			legs = "fullbodyonground";
			speed = -3.5;
			variantsAI[] = {};
		};
		class Snakes_Idle_Move_S1: Snakes_Idle_Move
		{
			connectTo[] = {"Snakes_Idle_Move", 0.1};
			file = "\A3\animals_f\Snakes\data\anim\snake_idle";
			speed = -3.5;
		};
		class Snakes_Idle_Move_S2: Snakes_Idle_Move
		{
			connectTo[] = {"Snakes_Idle_Move", 0.1};
			file = "\A3\animals_f\Snakes\data\anim\snake_move_short";
			speed = -0.6;
		};
		class Snakes_Idle_Stop: StandBase
		{
			connectTo[] = {"Snakes_Idle_Stop", 1};
			file = "\A3\animals_f\Snakes\data\anim\snake_stop";
			interpolateTo[] = {"Snakes_Idle_Move", 0.5, "Snakes_Stop", 1, "Snakes_Move", 1};
			legs = "fullbodyonground";
			speed = -1;
			variantAfter[] = {0.5, 0.5, 0.5};
			variantsAI[] = {"Snakes_Idle_Move", 0.65, "Snakes_Idle_Move_S1", 0.25, "Snakes_Idle_Move_S2", 0.05, "Snakes_Idle_Stop", 0.05};
		};
		class Snakes_Move: Snakes_Idle_Move
		{
			actions = "SnakesForceMove";
			connectTo[] = {"Snakes_Move", 1};
			interpolateTo[] = {"Snakes_Idle_Stop", 1, "Snakes_Stop", 1};
		};
		class Snakes_Stop: Snakes_Idle_Stop
		{
			actions = "SnakesForceStop";
			connectTo[] = {"Snakes_Stop", 1};
			interpolateTo[] = {"Snakes_Idle_Stop", 1, "Snakes_Move", 1};
			variantsAI[] = {};
		};
		class Snakes_TurnL: Snakes_Idle_Stop
		{
			connectTo[] = {"Snakes_Idle_Stop", 0.1};
			file = "\A3\animals_f\Snakes\data\anim\snake_turnL";
			interpolateTo[] = {"Snakes_Idle_Stop", 0.1};
			speed = -0.6;
		};
		class Snakes_TurnR: Snakes_TurnL
		{
			file = "\A3\animals_f\Snakes\data\anim\snake_turnR";
		};
	};
};
