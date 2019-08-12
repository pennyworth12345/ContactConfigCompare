class CfgTasks
{
	class AnimalMainTask
	{
		condition = "\A3\animals_f\Data\scripts\createSingleTask.sqf";
		description = "Animal master task";
		destination = "";
		fsm = "\A3\animals_f\Data\scripts\main.fsm";
		name = "Animal Main Task";
		resources[] = {};
	};
	class Default
	{
		condition = "\a3\Data_F_Curator\Data\Scripts\dummy.sqf";
		description = "";
		destination = "";
		fsm = "\a3\Data_F_Curator\Data\Scripts\dummy.fsm";
		name = "";
		resources[] = {};
	};
};
