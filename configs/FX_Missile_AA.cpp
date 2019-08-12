class FX_Missile_AA
{
	class FX_Missile_AA_light_01
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "RocketLight";
	};
	class FX_Plane_Missile_AA_high
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "Missile3";
	};
	class FX_Plane_Missile_AA_low
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 0;
		simulation = "particles";
		type = "Missile3";
	};
	class FX_Plane_Missile_AA_medium
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "Missile3";
	};
};
