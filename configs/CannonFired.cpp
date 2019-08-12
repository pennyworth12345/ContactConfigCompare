class CannonFired
{
	class CannonFired1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CannonFired1";
	};
	class CannonFired2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.06;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CannonFired2";
	};
	class CannonFired3
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "CannonFired3";
	};
	class CannonFired3Med
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "CannonFired3";
	};
	class CannonFiredDust1
	{
		enabled = "(distToSurface interpolate [10.099,10.1,1,-1])";
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CircleDustTankBig";
	};
	class CannonFiredDust2
	{
		enabled = "(distToSurface interpolate [10.099,10.1,1,-1])";
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CircleDustTankSmall";
	};
	class CannonFiredDust3
	{
		enabled = "(distToSurface interpolate [10.099,10.1,1,-1])";
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CircleDustTankLong";
	};
	class Light1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.12;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "FiredLightCannon";
	};
};
