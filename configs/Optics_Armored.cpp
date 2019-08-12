class Optics_Armored
{
	class Medium: Wide
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_m_F.p3d";
		initFov = "(150 * 0.05625 / 120)";
		maxFov = "(150 * 0.05625 / 120)";
		minFov = "(150 * 0.05625 / 120)";
	};
	class Narrow: Medium
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_n_F.p3d";
		initFov = "(60 * 0.05625 / 120)";
		maxFov = "(60 * 0.05625 / 120)";
		minFov = "(60 * 0.05625 / 120)";
	};
	class Wide: RCWSOptics
	{
		gunnerOpticsEffect[] = {};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_w_F.p3d";
		initFov = "(36 / 120)";
		maxFov = "(36 / 120)";
		minFov = "(36 / 120)";
		thermalMode[] = {2, 3};
		visionMode[] = {"Normal", "NVG", "TI"};
	};
};
