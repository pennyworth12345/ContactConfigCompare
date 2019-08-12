class Optics_Gunner_MBT_02: Optics_Armored
{
	class Medium: Medium
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
		thermalMode[] = {0, 1};
	};
	class Narrow: Narrow
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
		thermalMode[] = {0, 1};
	};
	class Wide: Wide
	{
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
		thermalMode[] = {0, 1};
	};
};
