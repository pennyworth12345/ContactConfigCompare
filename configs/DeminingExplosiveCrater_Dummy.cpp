class DeminingExplosiveCrater_Dummy
{
	class Charge
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "DeminingExplosiveDummy_charge";
	};
	class SmokeTrial
	{
		intensity = 1;
		interval = 1;
		lifeTime = 60;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "DeminingExplosiveDummy_smoke";
	};
};
