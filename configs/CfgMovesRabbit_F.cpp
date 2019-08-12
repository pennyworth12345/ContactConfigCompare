class CfgMovesRabbit_F: CfgMovesAnimal_Base_F
{
	access = 1;
	collisionGeomCompPattern[] = {1};
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a"};
	skeletonName = "Rabbit_F";
	transitionsDisabled[] = {};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	class Actions: Actions
	{
		class NoActions: NoActions
		{
			limitFast = 5.5;
			turnSpeed = 15;
			upDegree = 0;
			useFastMove = 0;
		};
		class RabbitActions: NoActions
		{
			CanNotMove = "Rabbit_Idle_Stop";
			Civil = "Rabbit_Idle_Stop";
			CivilLying = "Rabbit_Idle_Stop";
			Combat = "Rabbit_Idle_Stop";
			Crouch = "Rabbit_Idle_Stop";
			Default = "Rabbit_Idle_Stop";
			Die = "Rabbit_Die";
			Down = "Rabbit_Idle_Stop";
			EvasiveForward = "Rabbit_Idle_Sprint";
			FastF = "Rabbit_Idle_Sprint";
			FireNotPossible = "Rabbit_Idle_Stop";
			JumpOff = "Rabbit_Idle_Stop";
			limitFast = 5.5;
			LookAround = "";
			Lying = "Rabbit_Idle_Stop";
			PlayerCrouch = "Rabbit_Idle_Stop";
			PlayerProne = "Rabbit_Idle_Stop";
			PlayerStand = "Rabbit_Idle_Stop";
			SlowF = "Rabbit_Idle_Sprint";
			Stand = "Rabbit_Idle_Stop";
			Stop = "Rabbit_Idle_Stop";
			StopRelaxed = "Rabbit_Idle_Stop";
			TurnL = "Rabbit_Idle_Stop";
			TurnLRelaxed = "Rabbit_Idle_Stop";
			TurnR = "Rabbit_Idle_Stop";
			TurnRRelaxed = "Rabbit_Idle_Stop";
			turnSpeed = 300;
			Up = "Rabbit_Idle_Stop";
			upDegree = "ManPosNoWeapon";
			useFastMove = 0;
			WalkF = "Rabbit_Idle_Hop";
		};
		class RabbitForceHop: RabbitActions
		{
			CivilLying = "Rabbit_Hop";
		};
		class RabbitForceStop: RabbitActions
		{
			CivilLying = "Rabbit_Stop";
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head", 1, "leftEar", 1, "rightEar", 1};
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
		actions = "RabbitActions";
		collisionShape = "A3\animals_f\Rabbit\Rabbit_CollShape.p3d";
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
	};
	class Interpolations {};
	class StandBase: Default
	{
		actions = "RabbitActions";
		aiming = "aimingDefault";
		disableWeapons = 1;
		disableWeaponsLong = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};
	class States
	{
		class Rabbit_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\A3\Animals_F\Rabbit\data\Anim\rabbit_death";
			looped = 0;
			speed = 1.4;
			terminal = 1;
			variantAfter[] = {0, 0, 0};
			variantsAI[] = {"Rabbit_Die", 0.5, "Rabbit_Die3", 0.5};
			variantsPlayer[] = {};
		};
		class Rabbit_Die3: Rabbit_Die
		{
			file = "\A3\Animals_F\Rabbit\data\Anim\rabbit_death3";
		};
		class Rabbit_Hop: Rabbit_Idle_Hop
		{
			actions = "RabbitForceHop";
			connectTo[] = {"Rabbit_Stop", 0.02};
			interpolateTo[] = {"Rabbit_Idle_Stop", 0.02, "Rabbit_Hop", 0.02, "Rabbit_Die", 0.02};
		};
		class Rabbit_Idle_Hop: StandBase
		{
			connectFrom[] = {"Rabbit_Idle_Run", 0.1, "Rabbit_Idle_Stop", 0.1};
			connectTo[] = {"Rabbit_Idle_Run", 0.1, "Rabbit_Idle_Stop", 0.1};
			duty = -0.7;
			file = "\A3\Animals_F\Rabbit\data\Anim\rabbit_hop";
			interpolateTo[] = {"Rabbit_Die", 0.1};
			speed = -0.6;
		};
		class Rabbit_Idle_Run: StandBase
		{
			connectFrom[] = {"Rabbit_Idle_Sprint", 0.2, "Rabbit_Idle_Hop", 0.1};
			connectTo[] = {"Rabbit_Idle_Sprint", 0.2, "Rabbit_Idle_Hop", 0.1};
			duty = -0.5;
			file = "\A3\Animals_F\Rabbit\data\Anim\rabbit_run";
			interpolateTo[] = {"Rabbit_Die", 0.1};
			relSpeedMax = 1;
			relSpeedMin = 0.5;
			speed = -0.6;
		};
		class Rabbit_Idle_Sprint: StandBase
		{
			connectTo[] = {"Rabbit_Idle_Sprint", 0.1, "Rabbit_Idle_Run", 0.2};
			duty = 0.5;
			file = "\A3\Animals_F\Rabbit\data\Anim\rabbit_run";
			interpolateTo[] = {"Rabbit_Die", 0.1};
			relSpeedMax = 1;
			relSpeedMin = 0.5;
			speed = -0.3;
		};
		class Rabbit_Idle_Stop: StandBase
		{
			actions = "RabbitActions";
			connectTo[] = {"Rabbit_Idle_Stop", 0.02, "Rabbit_Idle_StopV1", 0.02};
			duty = -1;
			file = "\A3\Animals_F\Rabbit\data\Anim\rabbit_basicIdle";
			interpolateTo[] = {"Rabbit_Idle_Hop", 0.1, "Rabbit_Stop", 0.5, "Rabbit_Hop", 0.5, "Rabbit_Die", 0.1};
			preload = 1;
			relSpeedMax = 1;
			relSpeedMin = 1;
			speed = 1;
			variantsAI[] = {"Rabbit_Idle_Stop", 0.3, "Rabbit_Idle_StopV1", 0.3, "Rabbit_Idle_Hop", 0.4};
		};
		class Rabbit_Idle_StopV1: Rabbit_Idle_Stop
		{
			file = "\A3\Animals_F\Rabbit\data\Anim\rabbit_idleLookAround";
			speed = -6;
		};
		class Rabbit_Stop: Rabbit_Idle_Stop
		{
			actions = "RabbitForceStop";
			connectTo[] = {"Rabbit_Stop", 0.02};
			interpolateTo[] = {"Rabbit_Idle_Stop", 0.02, "Rabbit_Hop", 0.02, "Rabbit_Die", 0.02};
		};
	};
};
