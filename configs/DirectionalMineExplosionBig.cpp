class DirectionalMineExplosionBig
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
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "FireSparksSmall3";
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
		qualityLevel = 2;
		simulation = "particles";
		type = "MineCircleDust2";
	};
	class MissileCircleDustM
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "MineCircleDust2";
	};
	class SmallSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "CloudSmallLight3";
	};
	class SmallSmoke1L
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		qualityLevel = 0;
		simulation = "particles";
		type = "CloudSmallLight3L";
	};
	class SmallSmoke1M
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "CloudSmallLight3";
	};
};
