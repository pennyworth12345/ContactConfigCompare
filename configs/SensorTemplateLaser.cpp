class SensorTemplateLaser: SensorTemplateAntiRadiation
{
	angleRangeHorizontal = 180;
	angleRangeVertical = 180;
	color[] = {1, 1, 1, 0};
	componentType = "LaserSensorComponent";
	typeRecognitionDistance = 0;
	class AirTarget
	{
		maxRange = 6000;
		minRange = 6000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	class GroundTarget
	{
		maxRange = 6000;
		minRange = 6000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
};
