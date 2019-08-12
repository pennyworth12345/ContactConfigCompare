class Beam_Trace1
{
	class Light1
	{
		intensity = 1;
		interval = 1;
		lifeTime = -1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "FiredLightMed";
	};
	class MissileEffects1
	{
		intensity = 1;
		interval = 1;
		lifeTime = -1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "Beam_Trace";
	};
	class MissileEffects2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "Beam_Trace_Refract";
	};
};
