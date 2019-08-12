class MachineGunCloud
{
	class MachineGunCloud1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "MachineGunCloud1";
	};
	class MachineGunDust1
	{
		enabled = "(humidity interpolate [0.2,0.20001,1,0]) * isWaterSurface * (distToSurface interpolate [1.5,1.51,1,0])";
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "MachineGunDust1";
	};
};
