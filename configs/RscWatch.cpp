class RscWatch: RscObject
{
	enableZoom = 1;
	idc = -1;
	inBack = 1;
	model = "\a3\UI_F_Enoch\Data\Objects\Watch.p3d";
	position[] = {0.026, 0.047, 0.2};
	positionBack[] = {0.0475, -0.0575, 0.225};
	scale = "1 * 0.675 * (SafeZoneW Min SafeZoneH)";
	selectionDate1 = "date1";
	selectionDate2 = "date2";
	selectionDay = "day";
	type = 81;
	zoomDuration = 0.5;
	class AnimationSources
	{
		class Threat_Level_Source
		{
			animPeriod = 1;
			initPhase = 0.005;
			source = "user";
		};
	};
};
