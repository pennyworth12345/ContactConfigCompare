class PylonBackEffects_InitDelay
{
	class RocketBackfire1
	{
		lifeTime = 1e-005;
		simulation = "particles";
		start = "(density interpolate [0.019,0.02,1,0])";
		type = "PylonBackfire";
	};
	class RocketBacksmoke2: RocketBackfire1
	{
		simulation = "particles";
		type = "PylonBacksmoke";
	};
};
