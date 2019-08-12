class CounterMeasureLight
{
	class Light
	{
		intensity = 1;
		interval = 1;
		lifeTime = 4;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "CM_Light";
	};
	class smoke
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "CounterMeasureRefract";
	};
};
