class CannonFire
{
	class Flash
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CannonFlash";
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
	class Smoke
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CannonSmoke";
	};
};
