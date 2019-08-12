class ArtilleryFired1
{
	class CannonFiredDust
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CircleDustArtillery";
	};
	class Light1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.12;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "FiredLightMed";
	};
	class Smoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ArtilleryFired1";
	};
};
