class SensorTemplatePassiveRadar
{
	aimDown = 0;
	allowsMarking = 0;
	angleRangeHorizontal = 360;
	angleRangeVertical = 360;
	animDirection = "";
	color[] = {0.5, 1, 0.5, 0.5};
	componentType = "PassiveRadarSensorComponent";
	groundNoiseDistanceCoef = -1;
	maxGroundNoiseDistance = -1;
	maxSpeedThreshold = 0;
	maxTrackableATL = 1e+010;
	maxTrackableSpeed = 1e+010;
	minSpeedThreshold = 0;
	minTrackableATL = -1e+010;
	minTrackableSpeed = -1e+010;
	typeRecognitionDistance = 12000;
	class AirTarget
	{
		maxRange = 16000;
		minRange = 16000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	class GroundTarget
	{
		maxRange = 16000;
		minRange = 16000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
};
