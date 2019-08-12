class RifleAssaultCloud
{
	class RifleAssaultCloud1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "RifleAssaultCloud2";
	};
	class RifleAssaultDust1
	{
		enabled = "isWaterSurface * (humidity interpolate [0.2,0.20001,1,0]) * (distToSurface interpolate [1.3,1.31,1,0])";
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "RifleAssaultDust1";
	};
};
