class PrototypeCannonBeam
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
		type = "PrototypeCannonBeam";
	};
	class MissileEffects2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "PrototypeCannonBeamRefract";
	};
};
