class FX_FuselageVapour_FighterJet
{
	class FX_Plane_BodyTrail_high
	{
		enabled = "accelY interpolate [89.9999999,90,-1,1]";
		qualityLevel = 2;
		simulation = "particles";
		type = "FX_BodyTrail_FighterJet";
	};
	class FX_Plane_BodyTrail_low
	{
		enabled = "accelY interpolate [89.9999999,90,-1,1]";
		qualityLevel = 0;
		simulation = "particles";
		type = "FX_BodyTrail_FighterJet";
	};
	class FX_Plane_BodyTrail_medium
	{
		enabled = "accelY interpolate [89.9999999,90,-1,1]";
		qualityLevel = 1;
		simulation = "particles";
		type = "FX_BodyTrail_FighterJet";
	};
};
