class CfgMovesButterfly
{
	access = 0;
	collisionGeomCompPattern[] = {};
	collisionVertexPattern[] = {};
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
	class Default
	{
		actions = "DefaultActions";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		controlHead = 0;
		equivalentTo = "";
		file = "";
		forceAim = 0;
		headBobMode = 0;
		headBobStrength = 0;
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
		soundEdge[] = {};
		soundEnabled = 0;
		soundOverride = "";
		speed = 0.5;
		terminal = 0;
		walkcycles = 1;
	};
	class Interpolations {};
	class ManActions
	{
		default = "";
		open = "";
	};
	class States
	{
		class Fly: Default
		{
			file = "\A3\animals_f\data\anim\Butterfly_Fly.rtm";
			looped = 1;
			speed = -0.25;
		};
		class Open: Default
		{
			connectFrom[] = {"Fly", 1};
			connectTo[] = {"Fly", 1};
			file = "\A3\animals_f\data\anim\Butterfly_Open.rtm";
			looped = 0;
			speed = -1;
		};
	};
};
