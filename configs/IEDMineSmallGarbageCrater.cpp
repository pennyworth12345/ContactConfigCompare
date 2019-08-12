class IEDMineSmallGarbageCrater
{
	class CraterSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 9;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CraterSmoke";
	};
	class GrenadeDirt
	{
		intensity = 1.45;
		interval = 0;
		lifeTime = 0.2;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "DirtIEDMine";
	};
	class GrenadeDirtM
	{
		intensity = 1.45;
		interval = 0;
		lifeTime = 0.2;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "DirtIEDMine";
	};
	class Grenadedust
	{
		enabled = "distToWater interpolate [0.0,0.01,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CircleDustSmall";
	};
	class GrenadeFireStones
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "IEDMineFireStones";
	};
	class GrenadeStones
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "IEDMineStones";
	};
	class GrenadeStonesM
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "IEDMineStones";
	};
	class IEDGarbage1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "IEDMineGarbage1";
	};
	class IEDGarbage1M
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "IEDMineGarbage1";
	};
	class IEDGarbage2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "IEDMineGarbage2";
	};
	class IEDGarbage2M
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "IEDMineGarbage2";
	};
};
