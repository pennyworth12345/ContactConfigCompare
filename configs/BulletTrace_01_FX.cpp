class BulletTrace_01_FX
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
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "BulletTrace_01_FX";
	};
	class MissileEffects2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "Beam_Trace_Refract_Light";
	};
};
