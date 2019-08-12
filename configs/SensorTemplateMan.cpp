class SensorTemplateMan: SensorTemplateIR
{
	color[] = {1, 0.5, 1, 1};
	componentType = "ManSensorComponent";
	typeRecognitionDistance = 0;
	class AirTarget
	{
		maxRange = 750;
		minRange = 500;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = 1;
	};
	class GroundTarget
	{
		maxRange = 500;
		minRange = 500;
		objectDistanceLimitCoef = 1;
		viewDistanceLimitCoef = 1;
	};
};
