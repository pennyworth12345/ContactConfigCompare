class DirectionalMineExplosion
{
	class Explosion1
	{
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "MineExplosionParticles";
	};
	class FireSparksSmall1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "FireSparksSmall2";
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
	class MissileCircleDust
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "MineCircleDust1";
	};
	class SmallSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CloudSmallLight2";
	};
};
