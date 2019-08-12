class FX_Missile_SAM
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
		lifeTime = 5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "FX_MissileTrail_SAM";
	};
	class FX_Plane_Missile_SAM_low
	{
		intensity = 1;
		interval = 1;
		lifeTime = 3;
		position[] = {0, 0, 0};
		qualityLevel = 0;
		simulation = "particles";
		type = "FX_MissileTrail_SAM";
	};
	class FX_Plane_Missile_SAM_medium
	{
		intensity = 1;
		interval = 1;
		lifeTime = 4;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "FX_MissileTrail_SAM";
	};
};
