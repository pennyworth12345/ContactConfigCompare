class Mode_Burst: Mode_SemiAuto
{
	aiDispersionCoefX = 1.9;
	aiDispersionCoefY = 2.4;
	burst = 3;
	dispersion = 0.0005;
	displayName = "Burst";
	maxRange = 150;
	maxRangeProbab = 0.04;
	midRange = 60;
	midRangeProbab = 0.58;
	minRange = 10;
	minRangeProbab = 0.3;
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	sound[] = {"", 10, 1};
	soundBurst = 0;
	soundEnd[] = {"sound", 1};
	soundLoop[] = {"sound", 1};
	textureType = "burst";
};
