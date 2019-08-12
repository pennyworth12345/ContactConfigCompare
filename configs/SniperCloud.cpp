class SniperCloud
{
	class SniperCloud1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "RifleAssaultCloud1";
	};
	class SniperDust1
	{
		enabled = "isWaterSurface * (humidity interpolate [0.2,0.20001,1,0]) * (distToSurface interpolate [1.6,1.60001,1,0])";
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "SniperDust1";
	};
};
