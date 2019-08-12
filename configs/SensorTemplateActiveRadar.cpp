class SensorTemplateActiveRadar: SensorTemplateAntiRadiation
{
	angleRangeHorizontal = 120;
	angleRangeVertical = 120;
	color[] = {0, 1, 1, 1};
	componentType = "ActiveRadarSensorComponent";
	groundNoiseDistanceCoef = 0.5;
	maxGroundNoiseDistance = 200;
	maxSpeedThreshold = 27.7778;
	minSpeedThreshold = 20.8333;
	typeRecognitionDistance = 3000;
	class AirTarget
	{
		maxRange = 5000;
		minRange = 5000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	class GroundTarget
	{
		maxRange = 3000;
		minRange = 3000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
};
