class Mode_FullAuto: Mode_SemiAuto
{
	aiDispersionCoefX = 2;
	aiDispersionCoefY = 3;
	autoFire = 1;
	dispersion = 0.0005;
	displayName = "Full";
	maxRange = 80;
	maxRangeProbab = 0.04;
	midRange = 30;
	midRangeProbab = 0.58;
	minRange = 1;
	minRangeProbab = 0.2;
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	reloadTime = 0.08;
	sound[] = {"", 10, 1};
	soundBurst = 0;
	soundContinuous = 0;
	soundEnd[] = {"sound", 1};
	textureType = "fullAuto";
};
