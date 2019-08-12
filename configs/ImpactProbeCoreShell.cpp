class ImpactProbeCoreShell
{
	class ImpactCoreChunks1
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ProbeCore_Hit_Effect1";
	};
	class ImpactCoreChunks2
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ProbeCore_Hit_Effect2";
	};
	class ImpactCoreChunks3
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ProbeCore_Hit_Effect3";
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
	class Sound
	{
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		position[] = {0, 0, 0};
		simulation = "sound";
		type = "Drone_HitProbeArmor_SFX";
	};
};
