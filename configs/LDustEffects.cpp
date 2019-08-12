class LDustEffects
{
	class LeftDust1
	{
		qualityLevel = 2;
		simulation = "particles";
		type = "LeftDust1";
	};
	class LeftDust1Low
	{
		qualityLevel = 0;
		simulation = "particles";
		type = "LeftDust1Low";
	};
	class LeftDust1Med
	{
		qualityLevel = 1;
		simulation = "particles";
		type = "LeftDust1Med";
	};
	class LeftDustLong
	{
		qualityLevel = 2;
		simulation = "particles";
		type = "LeftDustLong";
	};
	class LeftDustLongMed
	{
		qualityLevel = 1;
		simulation = "particles";
		type = "LeftDustLongMed";
	};
	class LeftDustWater1
	{
		qualityLevel = 2;
		simulation = "particles";
		type = "LeftDustWater1";
	};
	class LeftDustWater1Low
	{
		qualityLevel = 0;
		simulation = "particles";
		type = "LeftDustWater1Low";
	};
	class LeftDustWater1Med
	{
		qualityLevel = 1;
		simulation = "particles";
		type = "LeftDustWater1Med";
	};
	class LeftVehicleWater1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 2;
		simulation = "particles";
		type = "LeftVehicleWater1";
	};
	class LeftVehicleWaterMed1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 1;
		simulation = "particles";
		type = "LeftVehicleWater1";
	};
	class LVehicleWaterTrack1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 2;
		simulation = "particles";
		type = "LVehicleWaterTrack";
	};
	class LVehicleWaterTrackFront1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 2;
		simulation = "particles";
		type = "LVehicleWaterTrackFront";
	};
	class LVehicleWaterTrackLow1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 0;
		simulation = "particles";
		type = "LVehicleWaterTrackLow";
	};
	class LVehicleWaterTrackMed1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 1;
		simulation = "particles";
		type = "LVehicleWaterTrackMed";
	};
};
