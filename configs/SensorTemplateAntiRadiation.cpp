class SensorTemplateAntiRadiation: SensorTemplatePassiveRadar
{
	allowsMarking = 1;
	angleRangeHorizontal = 90;
	angleRangeVertical = 90;
	componentType = "PassiveRadarSensorComponent";
	class AirTarget
	{
		maxRange = 8000;
		minRange = 8000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
	class GroundTarget
	{
		maxRange = 8000;
		minRange = 8000;
		objectDistanceLimitCoef = -1;
		viewDistanceLimitCoef = -1;
	};
};
