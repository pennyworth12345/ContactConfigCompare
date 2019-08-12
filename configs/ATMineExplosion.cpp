class ATMineExplosion
{
	class Explosion1
	{
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ATMineExplosionParticles";
	};
	class LightExp
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 1.5, 0};
		simulation = "light";
		type = "ExploLight";
	};
	class SmallSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "ATCloudSmallLight";
	};
	class SmallSmoke1L
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
		position[] = {0, 0, 0};
		qualityLevel = 0;
		simulation = "particles";
		type = "ATCloudSmallLightM";
	};
	class SmallSmoke1M
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "ATCloudSmallLightM";
	};
};
