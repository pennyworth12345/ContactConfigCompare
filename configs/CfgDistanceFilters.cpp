class CfgDistanceFilters
{
	class defaultDistanceFreqAttenuationFilter
	{
		innerRange = 10;
		minCutoffFrequency = 150;
		powerFactor = 32;
		qFactor = 1;
		range = 1000;
		type = "lowPassFilter";
	};
	class explosionDistanceFreqAttenuationFilter
	{
		innerRange = 10;
		minCutoffFrequency = 150;
		powerFactor = 22;
		qFactor = 1;
		range = 2000;
		type = "lowPassFilter";
	};
	class explosionGatlingDistanceFreqAttenuationFilter
	{
		innerRange = 10;
		minCutoffFrequency = 150;
		powerFactor = 22;
		qFactor = 1;
		range = 400;
		type = "lowPassFilter";
	};
	class explosionTailDistanceFreqAttenuationFilter
	{
		innerRange = 10;
		minCutoffFrequency = 150;
		powerFactor = 22;
		qFactor = 1;
		range = 2000;
		type = "lowPassFilter";
	};
	class footstepsDistanceFreqAttenuationFilter
	{
		innerRange = 3;
		minCutoffFrequency = 150;
		powerFactor = 20;
		qFactor = 1;
		range = 50;
		type = "lowPassFilter";
	};
	class softVehiclesDistanceFreqAttenuationFilter
	{
		innerRange = 10;
		minCutoffFrequency = 50;
		powerFactor = 96;
		qFactor = 1;
		range = 500;
		type = "lowPassFilter";
	};
	class weaponShotDistanceFreqAttenuationFilter
	{
		innerRange = 10;
		minCutoffFrequency = 300;
		powerFactor = 32;
		qFactor = 1;
		range = 2000;
		type = "lowPassFilter";
	};
	class weaponShotTailDistanceFreqAttenuationFilter
	{
		innerRange = 10;
		minCutoffFrequency = 300;
		powerFactor = 32;
		qFactor = 1;
		range = 1500;
		type = "lowPassFilter";
	};
};
