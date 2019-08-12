class SensorTemplateIR: SensorTemplateAntiRadiation
{
	angleRangeHorizontal = 60;
	angleRangeVertical = 60;
	color[] = {1, 0, 0, 1};
	componentType = "IRSensorComponent";
	maxFogSeeThrough = 0.995;
	typeRecognitionDistance = 2000;
	class AirTarget
	{
		maxRange = 3000;
		minRange = 500;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = 1;
	};
	class GroundTarget
	{
		maxRange = 2000;
		minRange = 500;
		objectDistanceLimitCoef = 1;
		viewDistanceLimitCoef = 1;
	};
};
