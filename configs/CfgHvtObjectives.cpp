class CfgHvtObjectives
{
	class EndGame: Simple
	{
		fsmPath = "a3\Modules_F_MP_Mark\Objectives\tasks\EndGame.fsm";
		isIndependent = 1;
		kind = "EndGame";
	};
	class Simple
	{
		fsmPath = "a3\Modules_F_MP_Mark\Objectives\tasks\MiddleGame.fsm";
		isIndependent = 0;
		kind = "Simple";
	};
	class StartGame: Simple
	{
		fsmPath = "a3\Modules_F_MP_Mark\Objectives\tasks\StartGame.fsm";
		isIndependent = 1;
		kind = "StartGame";
	};
};
