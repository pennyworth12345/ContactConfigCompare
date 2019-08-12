class PylonBackEffects
{
	class RocketBackfire1
	{
		lifeTime = 1e-006;
		simulation = "particles";
		start = 1;
		type = "PylonBackfire";
	};
	class RocketBacksmoke2: RocketBackfire1
	{
		simulation = "particles";
		type = "PylonBacksmoke";
	};
};
