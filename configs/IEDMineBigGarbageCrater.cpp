class IEDMineBigGarbageCrater
{
	class CraterSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 9;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CraterSmokeBig";
	};
	class GrenadeDirt
	{
		intensity = 1.45;
		interval = 0;
		lifeTime = 0.2;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "DirtIEDMineBig";
	};
	class GrenadeDirtM
	{
		intensity = 1.45;
		interval = 0;
		lifeTime = 0.2;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "DirtIEDMineBig";
	};
	class Grenadedust
	{
		enabled = "distToWater interpolate [0.0,0.01,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CircleDustBig";
	};
	class GrenadeFireStones
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "IEDMineFireStonesBig";
	};
	class GrenadeStones
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "IEDMineStonesBig";
	};
	class GrenadeStonesM
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "IEDMineStonesBig";
	};
	class IEDGarbage1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "IEDMineGarbageBig1";
	};
	class IEDGarbage1M
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "IEDMineGarbageBig1";
	};
	class IEDGarbage2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "IEDMineGarbageBig2";
	};
	class IEDGarbage2M
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "IEDMineGarbageBig2";
	};
};
