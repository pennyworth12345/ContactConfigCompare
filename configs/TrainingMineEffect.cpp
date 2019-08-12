class TrainingMineEffect
{
	class Light1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 14;
		position[] = {0, 0.15, 0.1};
		simulation = "light";
		type = "TrainingMine_light";
	};
	class Smoke
	{
		intensity = 0.1;
		interval = 1;
		lifeTime = 14;
		position[] = {0, 0.15, 0.1};
		simulation = "particles";
		type = "TrainingMine_smoke";
	};
	class Sparks
	{
		intensity = 0.5;
		interval = 1;
		lifeTime = 14;
		position[] = {0, 0.15, 0.1};
		simulation = "particles";
		type = "TrainingMine_FireSparks";
	};
	class TrainingMine_script
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0.15, 0.1};
		simulation = "particles";
		type = "TrainingMine_script";
	};
};
