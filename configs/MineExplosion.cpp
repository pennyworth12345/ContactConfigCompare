class MineExplosion
{
	class Explosion1
	{
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
		position = "explosionPos";
		simulation = "particles";
		type = "MineExplosionParticles";
	};
	class FireSparksSmall1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position = "explosionPos";
		simulation = "particles";
		type = "FireSparksSmall";
	};
	class LightExp
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.25;
		position = "explosionPos";
		simulation = "light";
		type = "ExploLight";
	};
	class SmallSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position = "explosionPos";
		simulation = "particles";
		type = "CloudSmallLight";
	};
};
