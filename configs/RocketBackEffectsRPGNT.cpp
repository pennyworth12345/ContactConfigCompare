class RocketBackEffectsRPGNT
{
	class Light1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.12;
		position[] = {0, 1.8, -1};
		simulation = "light";
		type = "FiredLightLauncher";
	};
	class RocketBackfire1
	{
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.03;
		simulation = "particles";
		type = "RocketBackfireRPGNT";
	};
	class RocketBacksmoke2
	{
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.1;
		simulation = "particles";
		type = "RocketBacksmokeRPGNT";
	};
	class RocketFrontsmoke
	{
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.2;
		simulation = "particles";
		type = "RocketFrontsmokeRPGNT";
	};
};
