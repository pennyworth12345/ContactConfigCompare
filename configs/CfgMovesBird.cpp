class CfgMovesBird
{
	access = 0;
	collisionGeomCompPattern[] = {};
	collisionVertexPattern[] = {};
	skeletonName = "BirdSkeleton";
	transitionsDisabled[] = {};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	class Actions
	{
		class DefaultActions: NoActions
		{
			default = "Fly";
			open = "Open";
			upDegree = 0;
		};
		class NoActions: ManActions
		{
			limitFast = 5;
			stance = "ManStanceUndefined";
			turnSpeed = 1;
			upDegree = -1;
			useFastMove = 0;
		};
	};
	class default
	{
		actions = "DefaultActions";
		autocenter = 0;
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		controlHead = 0;
		equivalentTo = "";
		file = "";
		interpolateFrom[] = {};
		interpolateTo[] = {};
		interpolateWith[] = {};
		interpolationRestart = 0;
		interpolationSpeed = 6;
		looped = 1;
		onLandBeg = 0;
		onLandEnd = 0;
		predictSpeedCoef = 1;
		preload = 0;
		relSpeedMax = 1;
		relSpeedMin = 1;
		reversed = 0;
		soundEdge[] = {0.5, 1};
		soundEnabled = 1;
		soundOverride = "";
		speed = 0.5;
		terminal = 0;
	};
	class Interpolations {};
	class ManActions
	{
		default = "";
		open = "";
	};
	class States
	{
		class Fly: default
		{
			file = "\A3\animals_f\data\anim\flying.rtm";
			looped = 1;
			speed = -0.25;
			walkcycles = 1;
		};
		class Open: default
		{
			connectFrom[] = {"Fly", 1};
			connectTo[] = {"Fly", 1};
			file = "\A3\animals_f\data\anim\land.rtm";
			looped = 0;
			speed = -1;
			walkcycles = 1;
		};
	};
};
