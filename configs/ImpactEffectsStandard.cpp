class ImpactEffectsStandard
{
	class CircleDust1Big
	{
		enabled = "distToWater interpolate [-0.1,-0.099,1,-1]";
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CircleDustMed";
	};
	class MedSmoke1Big
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "SmokeMed";
	};
	class SmokeTrails1BigH
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "SmokeTrails";
	};
	class SmokeTrails1BigM
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "SmokeTrails";
	};
};
