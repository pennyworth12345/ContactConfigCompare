class MineNondirectionalExplosion
{
	class GrenadeExp1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "MineExp";
	};
	class Light1
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "GrenadeExploLight";
	};
	class MineSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.6;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "MineSmoke1";
	};
	class MineSmoke1Low
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.6;
		position[] = {0, 0, 0};
		qualityLevel = 0;
		simulation = "particles";
		type = "MineSmokeLow1";
	};
	class MineSmoke1Med
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.6;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "MineSmoke1";
	};
};
