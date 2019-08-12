class PistolCloud
{
	class RifleAssaultCloud1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "RifleAssaultCloud1";
	};
	class RifleAssaultDust1
	{
		enabled = "(humidity interpolate [0.2,0.20001,1,0]) * (distToSurface interpolate [1.0,1.01,1,0])";
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "PistolDust1";
	};
};
