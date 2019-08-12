class IEDMineFlame
{
	class Fire1
	{
		lifeTime = 7;
		simulation = "particles";
		type = "IEDFlameF";
	};
	class Light1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 7;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "SmallFlameLight";
	};
	class Smoke1
	{
		lifeTime = 7;
		simulation = "particles";
		type = "IEDFlameS";
	};
	class sound
	{
		intensity = 1;
		interval = 1;
		lifeTime = 7;
		simulation = "sound";
		type = "Fire";
	};
};
