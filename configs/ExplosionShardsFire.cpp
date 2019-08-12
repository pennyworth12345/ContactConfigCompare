class ExplosionShardsFire
{
	class Fire
	{
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "ExpSparksFire";
	};
	class Light1
	{
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		position[] = {0, 0, 0};
		qualityLevel = 2;
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
		qualityLevel = 2;
		simulation = "particles";
		type = "ExpSparksSmoke";
	};
};
