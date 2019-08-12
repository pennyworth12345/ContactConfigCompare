class UAVWater
{
	class UAVWater1
	{
		enabled = "density interpolate [0.05,0.050001,-1,1]";
		qualityLevel = 2;
		simulation = "particles";
		type = "UAVWater1";
	};
	class UAVWater1L
	{
		qualityLevel = 0;
		simulation = "particles";
		type = "UAVWater1M";
	};
	class UAVWater1M
	{
		enabled = "density interpolate [0.05,0.050001,-1,1]";
		qualityLevel = 1;
		simulation = "particles";
		type = "UAVWater1M";
	};
};
