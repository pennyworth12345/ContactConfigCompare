class CfgWeaponHandling
{
	class Camera
	{
		aimTransitionSpeed = 5;
	};
	class Recoil
	{
		impulseCoef = 1;
		kickVisual = 0.6;
		prone = 1.25;
	};
	class SightAlignment
	{
		decay = 1.8;
		gunnerCoef = 0.2;
		maximum = 0.7;
		rate = 0.1;
	};
	class Stabilization
	{
		characterPoints[] = {"lElbow", "rElbow"};
		deployBipodTime = 0.4;
		deployedCoef = 0.1;
		deployedProneCoef = 0.02;
		deployedRecoil = 0.5;
		deployedRecoilPersistent = 0;
		deployTime = 0.2;
		groundLimits[] = {0.139626, 0.314159};
		objectLimits[] = {0.349066, 0.837758};
		restingCoef = 0.4;
		restingProneCoef = 0.08;
		restingRecoil = 0.5;
		restingRecoilPersistent = 0.5;
		undeployBipodTime = 0.3;
		undeployTime = 0.2;
		upperBodyRadius = 0.12;
		weaponPoints[] = {"Usti hlavne", "Konec hlavne"};
		weaponRadius = 0.4;
	};
	class SwayDistortion
	{
		decay = 7;
		gunnerCoef = 1.2;
		maximum = 10;
		rate = 14;
	};
};
