class ATRocketExplosion
{
	class Explosion1
	{
		intensity = 3;
		interval = 1;
		lifeTime = 0.08;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ExplosionParticles";
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
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CloudBigLight";
	};
};
