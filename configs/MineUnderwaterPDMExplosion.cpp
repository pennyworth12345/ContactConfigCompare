class MineUnderwaterPDMExplosion
{
	class GrenadeExp1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.07;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "MineExp";
	};
	class Light1
	{
		intensity = 0.1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "MineExploLight";
	};
	class MineSmoke1
	{
		enabled = "distToWater interpolate [0.1,0.100001,1,-1]";
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "MineUnderwaterSmokeAB1";
	};
	class MineWater1
	{
		enabled = "distToWater interpolate [-5.0001,-5,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		simulation = "particles";
		type = "MineUnderwaterWaterPDM";
	};
	class MineWave
	{
		enabled = "(distToWater interpolate [-8.0001,-8,-1,1]) * (distToWater interpolate [0.1,0.10001,-1,1])";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "MineWaveSmall";
	};
};
