class DeminingExplosiveExplosion
{
	class GrenadeBubbles
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "GrenadeBubbles1";
	};
	class GrenadeExp1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "DeminingExplosiveExp";
	};
	class GrenadeSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "DeminingExplosiveSmoke1";
	};
	class GrenadeSmoke2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "DeminingExplosiveSmoke2";
	};
	class Light1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "ExploLightMed";
	};
};
