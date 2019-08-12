class MineUnderwaterExplosion
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
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "MineUnderwaterSmoke1";
	};
	class MineWater1
	{
		enabled = "distToWater interpolate [-16.001,-16,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
		simulation = "particles";
		type = "MineUnderwaterWater1";
	};
	class MineWater1L
	{
		enabled = "distToWater interpolate [-16.001,-16,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 0;
		simulation = "particles";
		type = "MineUnderwaterWater1M";
	};
	class MineWater1M
	{
		enabled = "distToWater interpolate [-16.001,-16,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
		simulation = "particles";
		type = "MineUnderwaterWater1M";
	};
	class MineWater2
	{
		enabled = "distToWater interpolate [-16.001,-16,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
		simulation = "particles";
		type = "MineUnderwaterWater2";
	};
	class MineWater2M
	{
		enabled = "distToWater interpolate [-16.001,-16,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
		simulation = "particles";
		type = "MineUnderwaterWater2";
	};
	class MineWave
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "MineWave";
	};
	class MineWaveM
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "MineWaveM";
	};
};
