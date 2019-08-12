class ImpactProbeTipCore
{
	class ImpactCoreChunks1
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ProbeShell_Hit_Effect1";
	};
	class ImpactCoreChunks2
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ProbeShell_Hit_Effect2";
	};
	class ImpactCoreChunks3
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ProbeShell_Hit_Effect3";
	};
	class ImpactDust
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "ImpactDustProbeCore";
	};
	class ImpactDustLow
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 0;
		simulation = "particles";
		type = "ImpactDustProbeCoreLow";
	};
	class ImpactDustMed
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "ImpactDustProbeCoreMed";
	};
	class ImpactSparks0
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ImpactSparks0";
	};
	class ImpactSparks2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "ImpactSparks2";
	};
	class ImpactSparks2Med
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "ImpactSparksMed2";
	};
	class Sound
	{
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		position[] = {0, 0, 0};
		simulation = "sound";
		type = "Drone_HitProbeWeakpoint_SFX";
	};
	class SparksLight
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "SparksLight";
	};
};
