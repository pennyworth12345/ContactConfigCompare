class CfgMovesTurtle_F: CfgMovesAnimal_Base_F
{
	skeletonName = "Turtle_F";
	class Actions: Actions
	{
		class NoActions: NoActions {};
		class Turtle_swim_Actions: Turtle_walk_Actions
		{
			Down = "Turtle_Stop_swim";
			EvasiveForward = "Turtle_swim";
			FastF = "Turtle_swim";
			SlowF = "Turtle_swim";
			Stop = "Turtle_Stop_swim";
			StopRelaxed = "Turtle_Stop_swim";
			TurnL = "turtle_TurnL";
			TurnLRelaxed = "turtle_TurnL";
			TurnR = "turtle_TurnR";
			TurnRRelaxed = "turtle_TurnR";
			Up = "Turtle_Stop_swim";
			WalkF = "Turtle_swim";
		};
		class Turtle_walk_Actions: NoActions
		{
			CanNotMove = "Turtle_Stop";
			Civil = "Turtle_Stop";
			CivilLying = "Turtle_Stop";
			Combat = "Turtle_Stop";
			Crouch = "Turtle_Stop";
			Default = "Turtle_Stop";
			Die = "Turtle_Die";
			Down = "Turtle_Stop";
			Eat = "Turtle_Stop";
			EvasiveForward = "Turtle_walk";
			FastF = "Turtle_walk";
			FireNotPossible = "Turtle_Stop";
			JumpOff = "Turtle_Stop";
			limitFast = 5.5;
			Lying = "Turtle_Stop";
			PlayerCrouch = "Turtle_Stop";
			PlayerProne = "Turtle_Stop";
			PlayerStand = "Turtle_Stop";
			Rest = "Turtle_Stop";
			SlowF = "Turtle_walk";
			Stand = "Turtle_Stop";
			StartSwim = "Turtle_swim";
			Stop = "Turtle_Stop";
			StopRelaxed = "Turtle_Stop";
			StopSwim = "Turtle_walk";
			TurnL = "Turtle_Stop";
			TurnLRelaxed = "Turtle_Stop";
			TurnR = "Turtle_Stop";
			TurnRRelaxed = "Turtle_Stop";
			turnSpeed = 1;
			Up = "Turtle_Stop";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Turtle_walk";
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"turtleHead", 1};
		headDefault[] = {"turtleHead", 1};
	};
	class Default: Default
	{
		actions = "Turtle_walk_Actions";
		collisionShape = "A3\animals_f\turtle\turtle_CollShape.p3d";
	};
	class DefaultDie: Default {};
	class StandBase: Default
	{
		file = "\A3\animals_f\Turtle\data\anim\turtle_idle_land1.rtm";
	};
	class States
	{
		class Turtle_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\A3\animals_f\Turtle\data\anim\turtle_swim_death.rtm";
			looped = "False";
			speed = -2;
			terminal = 1;
		};
		class Turtle_Stop: StandBase
		{
			connectFrom[] = {"Turtle_Swim", 1, "Turtle_walk", 1};
			connectTo[] = {"Turtle_Swim", 1, "Turtle_walk", 1};
			file = "\A3\animals_f\Turtle\data\anim\turtle_idle_land1.rtm";
			interpolateTo[] = {"Turtle_Die", 0.1};
			looped = 0;
			speed = -3;
		};
		class Turtle_Stop_swim: StandBase
		{
			actions = "Turtle_swim_Actions";
			connectFrom[] = {"Turtle_Swim", 1, "Turtle_walk", 1};
			connectTo[] = {"Turtle_Swim", 1, "Turtle_walk", 1};
			file = "\A3\animals_f\Turtle\data\anim\turtle_swim_idle1";
			interpolateTo[] = {"Turtle_Die", 0.1};
			looped = 0;
			speed = -6;
		};
		class Turtle_Swim: StandBase
		{
			actions = "Turtle_swim_Actions";
			equivalentTo = "Turtle_Swim";
			file = "\A3\animals_f\Turtle\data\anim\turtle_swim.rtm";
			interpolateTo[] = {"Turtle_Stop", 1, "Turtle_Swim", 1, "Turtle_walk", 1, "Turtle_Swim_S1", 1, "Turtle_Swim_S2", 1, "Turtle_Swim_S3", 1, "Turtle_Die", 0.1};
			looped = 1;
			speed = -1.5;
			variantAfter[] = {1.66, 1.66, 1.66};
			variantsAI[] = {"Turtle_Swim", 0.01, "Turtle_Swim_S1", 0.33, "Turtle_Swim_S2", 0.33, "Turtle_Swim_S3", 0.33};
		};
		class Turtle_Swim_S1: StandBase
		{
			connectTo[] = {"Turtle_Swim", 0.1};
			file = "\A3\animals_f\Turtle\data\anim\turtle_swim2.rtm";
			interpolateTo[] = {"Turtle_Die", 0.1};
			speed = -1.25;
			variantAfter[] = {1.33, 1.33, 1.33};
		};
		class Turtle_Swim_S2: StandBase
		{
			connectTo[] = {"Turtle_Swim", 0.1};
			file = "\A3\animals_f\Turtle\data\anim\turtle_swim.rtm";
			interpolateTo[] = {"Turtle_Die", 0.1};
			speed = -1.5;
			variantAfter[] = {1.66, 1.66, 1.66};
		};
		class Turtle_Swim_S3: StandBase
		{
			connectTo[] = {"Turtle_Swim", 0.1};
			file = "\A3\animals_f\Turtle\data\anim\turtle_swim2.rtm";
			interpolateTo[] = {"Turtle_Die", 0.1};
			speed = -1.45;
			variantAfter[] = {1.99, 1.99, 1.99};
		};
		class turtle_TurnL: Turtle_Stop_swim
		{
			connectFrom[] = {"Turtle_Stop_swim", 0.1};
			connectTo[] = {"Turtle_Stop_swim", 0.1};
			file = "\A3\animals_f\Turtle\data\anim\turtle_swim_turnL.rtm";
			interpolateFrom[] = {"Turtle_Stop_swim", 0.1};
			interpolateTo[] = {"Turtle_Stop_swim", 0.1, "Turtle_Die", 0.1};
			speed = 1;
		};
		class turtle_TurnR: turtle_TurnL
		{
			file = "\A3\animals_f\Turtle\data\anim\turtle_swim_turnR.rtm";
		};
		class Turtle_walk: StandBase
		{
			equivalentTo = "Turtle_walk";
			file = "\A3\animals_f\Turtle\data\anim\turtle_walk.rtm";
			interpolateTo[] = {"Turtle_Stop", 1, "Turtle_walk", 1, "Turtle_swim", 1, "Turtle_walk_S1", 1, "Turtle_walk_S2", 1, "Turtle_walk_S3", 1, "Turtle_Die", 0.1};
			looped = 1;
			speed = -5.3;
			variantAfter[] = {5, 5, 5};
			variantsAI[] = {"Turtle_walk", 0.01, "Turtle_walk_S1", 0.33, "Turtle_walk_S2", 0.33, "Turtle_walk_S3", 0.33};
		};
		class Turtle_walk_S1: StandBase
		{
			connectTo[] = {"Turtle_walk", 0.1};
			file = "\A3\animals_f\Turtle\data\anim\turtle_walk.rtm";
			interpolateTo[] = {"Turtle_Die", 0.1};
			speed = -5;
			variantAfter[] = {5, 5, 5};
		};
		class Turtle_walk_S2: StandBase
		{
			connectTo[] = {"Turtle_walk", 0.1};
			file = "\A3\animals_f\Turtle\data\anim\turtle_walk.rtm";
			interpolateTo[] = {"Turtle_Die", 0.1};
			speed = -5.3;
			variantAfter[] = {5, 5, 5};
		};
		class Turtle_walk_S3: StandBase
		{
			connectTo[] = {"Turtle_walk", 0.1};
			file = "\A3\animals_f\Turtle\data\anim\turtle_walk.rtm";
			interpolateTo[] = {"Turtle_Die", 0.1};
			speed = -5.5;
			variantAfter[] = {5, 5, 5};
		};
	};
};
