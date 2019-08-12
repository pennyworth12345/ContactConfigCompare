class CfgMovesSharks_F: CfgMovesAnimal_Base_F
{
	skeletonName = "Shark_F";
	class Actions: Actions
	{
		class NoActions: NoActions
		{
			CanNotMove = "Sharks_Stop";
			Civil = "Sharks_Swim";
			CivilLying = "Sharks_Swim";
			Combat = "Sharks_Swim";
			Crouch = "Sharks_Swim";
			Default = "Sharks_Swim";
			Die = "Sharks_Die";
			Down = "Sharks_Swim";
			Eat = "Sharks_Swim";
			EvasiveForward = "Sharks_swim";
			FastF = "Sharks_swim";
			FireNotPossible = "Sharks_Swim";
			JumpOff = "Sharks_Swim";
			Lying = "Sharks_Swim";
			PlayerCrouch = "Sharks_Swim";
			PlayerProne = "Sharks_Swim";
			PlayerStand = "Sharks_Swim";
			Rest = "Sharks_Swim";
			SlowF = "Sharks_swim";
			Stand = "Sharks_Swim";
			StartSwim = "Sharks_swim";
			Stop = "Sharks_Stop";
			StopRelaxed = "Sharks_Stop";
			StopSwim = "Sharks_Swim";
			TurnL = "Sharks_Stop";
			TurnLRelaxed = "Sharks_Stop";
			TurnR = "Sharks_Stop";
			TurnRRelaxed = "Sharks_Stop";
			Up = "Sharks_Swim";
			WalkF = "Sharks_swim";
		};
		class SharksActions: NoActions
		{
			CanNotMove = "Sharks_Stop";
			Civil = "Sharks_Swim";
			CivilLying = "Sharks_Swim";
			Combat = "Sharks_Swim";
			Crouch = "Sharks_Swim";
			Default = "Sharks_Swim";
			Die = "Sharks_Die";
			Down = "Sharks_Swim";
			Eat = "Sharks_Swim";
			EvasiveForward = "Sharks_swim";
			FastF = "Sharks_swim";
			FireNotPossible = "Sharks_Swim";
			JumpOff = "Sharks_Swim";
			limitFast = 5.5;
			Lying = "Sharks_Swim";
			PlayerCrouch = "Sharks_Swim";
			PlayerProne = "Sharks_Swim";
			PlayerStand = "Sharks_Swim";
			Rest = "Sharks_Swim";
			SlowF = "Sharks_swim";
			Stand = "Sharks_Swim";
			StartSwim = "Sharks_swim";
			Stop = "Sharks_Stop";
			StopRelaxed = "Sharks_Stop";
			StopSwim = "Sharks_Swim";
			TurnL = "Sharks_Stop";
			TurnLRelaxed = "Sharks_Stop";
			TurnR = "Sharks_Stop";
			TurnRRelaxed = "Sharks_Stop";
			turnSpeed = 1;
			Up = "Sharks_Swim";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Sharks_swim";
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"fish_head", 1};
		headDefault[] = {"fish_head", 1};
	};
	class Default: Default
	{
		actions = "SharksActions";
		collisionShape = "A3\Animals_F\empty_CollShape.p3d";
	};
	class DefaultDie: Default {};
	class StandBase: Default
	{
		file = "\A3\animals_f\Fishes\data\anim\catshark_swimcycle.rtm";
	};
	class States
	{
		class Sharks_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\A3\animals_f\fishes\data\anim\catshark_death.rtm";
			interpolateFrom[] = {"Sharks_Swim", 0.02, "Sharks_Stop", 0.2};
			interpolateTo[] = {"Sharks_Die", 1, "Sharks_Die2", 1};
			looped = "False";
			speed = -0.7;
			terminal = 1;
			variantAfter[] = {0, 0, 0};
			variantsAI[] = {};
			variantsPlayer[] = {"Sharks_Die", 0.5, "Sharks_Die2", 0.5};
		};
		class Sharks_Die2: Sharks_Die
		{
			file = "\A3\animals_f\fishes\data\anim\catshark_death_bellyup.rtm";
			looped = 0;
			speed = -2;
			variantAfter[] = {0, 0, 0};
		};
		class Sharks_Stop: StandBase
		{
			connectFrom[] = {"Sharks_Swim", 1};
			connectTo[] = {"Sharks_Swim", 1};
			file = "\A3\animals_f\Fishes\data\anim\catshark_stop.rtm";
			looped = 1;
			speed = -1.5;
		};
		class Sharks_Swim: StandBase
		{
			connectTo[] = {"Sharks_Stop", 1, "Sharks_Swim", 1, "Sharks_Swim_S1", 1, "Sharks_Swim_S2", 1, "Sharks_Swim_S3", 1};
			equivalentTo = "Sharks_Swim";
			file = "\A3\animals_f\Fishes\data\anim\catshark_swimcycle.rtm";
			interpolateTo[] = {"Sharks_Die", 1, "Sharks_Die2", 1};
			looped = 1;
			speed = -0.7;
			variantAfter[] = {0.83, 0.83, 0.83};
			variantsAI[] = {"Sharks_Swim", 0.01, "Sharks_Swim_S1", 0.33, "Sharks_Swim_S2", 0.33, "Sharks_Swim_S3", 0.33};
		};
		class Sharks_Swim_S1: StandBase
		{
			connectTo[] = {"Sharks_Swim", 0.1};
			file = "\A3\animals_f\Fishes\data\anim\catshark_swimcycle_long.rtm";
			speed = -1.5;
			variantAfter[] = {0.83, 0.83, 0.83};
		};
		class Sharks_Swim_S2: StandBase
		{
			connectTo[] = {"Sharks_Swim", 0.1};
			file = "\A3\animals_f\Fishes\data\anim\catshark_swimcycle.rtm";
			speed = -0.8;
			variantAfter[] = {0.83, 0.83, 0.83};
		};
		class Sharks_Swim_S3: StandBase
		{
			connectTo[] = {"Sharks_Swim", 0.1};
			file = "\A3\animals_f\Fishes\data\anim\catshark_swimcycle_long.rtm";
			speed = -1.4;
			variantAfter[] = {0.83, 0.83, 0.83};
		};
	};
};
