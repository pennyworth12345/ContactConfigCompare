class FX_Missile_SAM_LongRange
{
	class FX_Missile_SAM_light_01
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "RocketLight";
	};
	class FX_Plane_Missile_SAM_high
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "FX_MissileTrail_SAM_LongRange";
	};
	class FX_Plane_Missile_SAM_low
	{
		intensity = 1.3;
		interval = 0.5;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 0;
		simulation = "particles";
		type = "FX_MissileTrail_SAM_LongRange";
	};
	class FX_Plane_Missile_SAM_medium
	{
		intensity = 1.15;
		interval = 0.7;
		lifeTime = 0.75;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "FX_MissileTrail_SAM_LongRange";
	};
};
