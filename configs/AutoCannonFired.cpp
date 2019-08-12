class AutoCannonFired: MachineGun2
{
	class AutoCannonFired
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "AutoCannonFired";
	};
	class Light1
	{
		intensity = 0;
		interval = 1;
		lifeTime = 0.08;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "FiredLightSmall";
	};
};
