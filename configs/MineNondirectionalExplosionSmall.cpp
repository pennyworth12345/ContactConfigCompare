class MineNondirectionalExplosionSmall
{
	class GrenadeExp1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "GrenadeExp";
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
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "MineSmoke2";
	};
	class MineSmoke2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "MineSmoke2";
	};
	class MineSmoke3
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 0;
		simulation = "particles";
		type = "MineSmokeLow2";
	};
};
