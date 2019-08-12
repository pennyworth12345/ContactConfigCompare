class ImpactMetalSabotSmall
{
	class ImpactSmoke2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ImpactSmokeSabot2";
	};
	class ImpactSparks1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ImpactSparksSabot1Small";
	};
	class ImpactSparks2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ImpactSparksSabot2";
	};
	class SparksLight
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "SparksLightSabot";
	};
};
