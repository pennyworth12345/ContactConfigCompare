class MortarCrater
{
	class MortarDirt
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "DirtMed";
	};
	class MortarDust
	{
		enabled = "distToWater interpolate [0.05,0.06,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CircleDustMed";
	};
};
