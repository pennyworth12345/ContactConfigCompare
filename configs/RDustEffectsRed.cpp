class RDustEffectsRed
{
	class RightDust1
	{
		qualityLevel = 2;
		simulation = "particles";
		type = "RightDust1Red";
	};
	class RightDust1Low
	{
		qualityLevel = 0;
		simulation = "particles";
		type = "RightDust1RedLow";
	};
	class RightDust1Med
	{
		qualityLevel = 1;
		simulation = "particles";
		type = "RightDust1RedMed";
	};
	class RightDustLong
	{
		qualityLevel = 2;
		simulation = "particles";
		type = "RightDustLongRed";
	};
	class RightDustLongMed
	{
		qualityLevel = 1;
		simulation = "particles";
		type = "RightDustLongRedMed";
	};
	class RightDustWater1
	{
		qualityLevel = 2;
		simulation = "particles";
		type = "RightDustWater1";
	};
	class RightDustWater1Low
	{
		qualityLevel = 0;
		simulation = "particles";
		type = "RightDustWater1Low";
	};
	class RightDustWater1Med
	{
		qualityLevel = 1;
		simulation = "particles";
		type = "RightDustWater1Med";
	};
	class RightVehicleWater1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 2;
		simulation = "particles";
		type = "RightVehicleWater1";
	};
	class RightVehicleWaterMed1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 1;
		simulation = "particles";
		type = "RightVehicleWater1";
	};
	class RVehicleWaterTrack1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 2;
		simulation = "particles";
		type = "RVehicleWaterTrack";
	};
	class RVehicleWaterTrackFront1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 2;
		simulation = "particles";
		type = "RVehicleWaterTrackFront";
	};
	class RVehicleWaterTrackLow1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 0;
		simulation = "particles";
		type = "RVehicleWaterTrackLow";
	};
	class RVehicleWaterTrackMed1
	{
		enabled = "(distToWater interpolate [-0.1,-0.099,1,-1]) * (distToWater interpolate [-2.6001,-2.6,-1,1])";
		qualityLevel = 1;
		simulation = "particles";
		type = "RVehicleWaterTrackMed";
	};
};
