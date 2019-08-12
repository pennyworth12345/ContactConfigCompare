class ImpactAlienWeakPoint_01_Sub
{
	class Fire
	{
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "AlienDrone_01_ImpactWeakPoint_01_fire";
	};
	class Light1
	{
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "SmallFlameLight";
	};
	class Smoke
	{
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ExpSparksSmoke";
	};
};
