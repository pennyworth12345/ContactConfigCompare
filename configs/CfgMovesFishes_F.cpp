class CfgMovesFishes_F: CfgMovesAnimal_Base_F
{
	skeletonName = "Fish_F";
	class Actions: Actions
	{
		class FishesActions: NoActions
		{
			CanNotMove = "Fishes_Stop";
			Civil = "Fishes_Swim";
			CivilLying = "Fishes_Swim";
			Combat = "Fishes_Swim";
			Crouch = "Fishes_Swim";
			Default = "Fishes_Swim";
			Die = "Fishes_Die";
			Down = "Fishes_Swim";
			Eat = "Fishes_Swim";
			EvasiveForward = "Fishes_swim";
			FastF = "Fishes_swim";
			FireNotPossible = "Fishes_Swim";
			JumpOff = "Fishes_Swim";
			limitFast = 5.5;
			Lying = "Fishes_Swim";
			PlayerCrouch = "Fishes_Swim";
			PlayerProne = "Fishes_Swim";
			PlayerStand = "Fishes_Swim";
			Rest = "Fishes_Stop";
			SlowF = "Fishes_swim";
			Stand = "Fishes_Swim";
			StartSwim = "Fishes_swim";
			Stop = "Fishes_Stop";
			StopRelaxed = "Fishes_Stop";
			StopSwim = "Fishes_Swim";
			TurnL = "Fishes_Stop";
			TurnLRelaxed = "Fishes_Stop";
			TurnR = "Fishes_Stop";
			TurnRRelaxed = "Fishes_Stop";
			turnSpeed = 1;
			Up = "Fishes_Swim";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Fishes_swim";
		};
		class NoActions: NoActions
		{
			CanNotMove = "Fishes_Stop";
			Civil = "Fishes_Swim";
			CivilLying = "Fishes_Swim";
			Combat = "Fishes_Swim";
			Crouch = "Fishes_Swim";
			Default = "Fishes_Swim";
			Die = "Fishes_Swim";
			Down = "Fishes_Swim";
			Eat = "Fishes_Die";
			EvasiveForward = "Fishes_swim";
			FastF = "Fishes_swim";
			FireNotPossible = "Fishes_Swim";
			JumpOff = "Fishes_Swim";
			Lying = "Fishes_Swim";
			PlayerCrouch = "Fishes_Swim";
			PlayerProne = "Fishes_Swim";
			PlayerStand = "Fishes_Swim";
			Rest = "Fishes_Swim";
			SlowF = "Fishes_swim";
			Stand = "Fishes_Swim";
			StartSwim = "Fishes_swim";
			Stop = "Fishes_Stop";
			StopRelaxed = "Fishes_Stop";
			StopSwim = "Fishes_Swim";
			TurnL = "Fishes_Stop";
			TurnLRelaxed = "Fishes_Stop";
			TurnR = "Fishes_Stop";
			TurnRRelaxed = "Fishes_Stop";
			Up = "Fishes_Swim";
			WalkF = "Fishes_swim";
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"fish_head", 1};
		headDefault[] = {"fish_head", 1};
	};
	class Default: Default
	{
		actions = "FishesActions";
		collisionShape = "A3\Animals_F\empty_CollShape.p3d";
	};
	class DefaultDie: Default {};
	class StandBase: Default
	{
		file = "\A3\animals_f\fishes\data\anim\fish_swimcycle.rtm";
	};
	class States
	{
		class Fishes_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\A3\animals_f\fishes\data\anim\fish_death.rtm";
			interpolateFrom[] = {"Fishes_Swim", 0.02, "Fishes_Stop", 0.2};
			looped = "False";
			speed = -0.7;
			terminal = 1;
			variantAfter[] = {0, 0, 0};
			variantsAI[] = {};
			variantsPlayer[] = {"Fishes_Die", 0.5, "Fishes_Die2", 0.5};
		};
		class Fishes_Die2: Fishes_Die
		{
			file = "\A3\animals_f\fishes\data\anim\fish_death_bellyup.rtm";
			looped = 0;
			speed = -2;
			variantAfter[] = {0, 0, 0};
		};
		class Fishes_Stop: StandBase
		{
			connectFrom[] = {"Fishes_Swim", 1};
			connectTo[] = {"Fishes_Swim", 1};
			file = "\A3\animals_f\fishes\data\anim\fish_stop.rtm";
			looped = 1;
			speed = 1e+010;
		};
		class Fishes_Swim: StandBase
		{
			connectTo[] = {"Fishes_Stop", 1, "Fishes_Swim", 1, "Fishes_Swim_S1", 1, "Fishes_Swim_S2", 1, "Fishes_Swim_S3", 1};
			equivalentTo = "Fishes_Swim";
			file = "\A3\animals_f\fishes\data\anim\fish_swimcycle.rtm";
			looped = 1;
			speed = -0.4;
			variantAfter[] = {0.33, 0.33, 0.33};
			variantsAI[] = {"Fishes_Swim", 0.01, "Fishes_Swim_S1", 0.33, "Fishes_Swim_S2", 0.33, "Fishes_Swim_S3", 0.33};
		};
		class Fishes_Swim_S1: StandBase
		{
			connectTo[] = {"Fishes_Swim", 0.1};
			file = "\A3\animals_f\fishes\data\anim\fish_swimcycle_long.rtm";
			speed = -0.6;
			variantAfter[] = {0.33, 0.33, 0.33};
		};
		class Fishes_Swim_S2: StandBase
		{
			connectTo[] = {"Fishes_Swim", 0.1};
			file = "\A3\animals_f\fishes\data\anim\fish_swimcycle.rtm";
			speed = -0.5;
			variantAfter[] = {0.33, 0.33, 0.33};
		};
		class Fishes_Swim_S3: StandBase
		{
			connectTo[] = {"Fishes_Swim", 0.1};
			file = "\A3\animals_f\fishes\data\anim\fish_swimcycle_long.rtm";
			speed = -0.8;
			variantAfter[] = {0.33, 0.33, 0.33};
		};
	};
};
