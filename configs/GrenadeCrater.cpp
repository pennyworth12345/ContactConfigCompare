class GrenadeCrater
{
	class CraterSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 14;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CraterSmoke";
	};
	class GrenadeDirt
	{
		intensity = 1.45;
		interval = 0;
		lifeTime = 0.2;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "DirtSmall";
	};
	class Grenadedust
	{
		enabled = "distToWater interpolate [0.0,0.01,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CircleDustSmall";
	};
	class GrenadeStones
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "GrenadeStones";
	};
	class GrenadeStonesStatic
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "GrenadeStonesStatic";
	};
};
