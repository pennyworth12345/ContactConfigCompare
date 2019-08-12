class CruiseMissile
{
	class Light1
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, -2};
		simulation = "light";
		type = "CruiseMissileLight";
	};
	class Missile3
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, -2};
		qualityLevel = 2;
		simulation = "particles";
		type = "CruiseMissile";
	};
	class Missile3Med
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, -2};
		qualityLevel = 1;
		simulation = "particles";
		type = "CruiseMissileMed";
	};
};
