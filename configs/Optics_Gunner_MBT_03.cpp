class Optics_Gunner_MBT_03: Optics_Armored
{
	class Medium: Medium
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_m_F.p3d";
		initFov = "(120 * 0.05625 / 120)";
		maxFov = "(120 * 0.05625 / 120)";
		minFov = "(120 * 0.05625 / 120)";
		thermalMode[] = {0, 1};
	};
	class Narrow: Narrow
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_n_F.p3d";
		thermalMode[] = {0, 1};
	};
	class Wide: Wide
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
		initFov = "(24 / 120)";
		maxFov = "(24 / 120)";
		minFov = "(24 / 120)";
		thermalMode[] = {0, 1};
	};
};
