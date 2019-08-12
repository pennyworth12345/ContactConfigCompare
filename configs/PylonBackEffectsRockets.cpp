class PylonBackEffectsRockets
{
	class RocketBackfire1
	{
		lifeTime = 0.0001;
		simulation = "particles";
		start = 1;
		type = "PylonBackfireRockets";
	};
	class RocketBacksmoke2: RocketBackfire1
	{
		lifeTime = 1e-006;
		simulation = "particles";
		type = "PylonBacksmoke";
	};
};
