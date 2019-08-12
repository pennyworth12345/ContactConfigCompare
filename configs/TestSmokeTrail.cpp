class TestSmokeTrail
{
	class Light1
	{
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "RocketLight";
	};
	class Missile3
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "Circles_Magic";
	};
	class smoke
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CounterMeasureRefract";
	};
};
