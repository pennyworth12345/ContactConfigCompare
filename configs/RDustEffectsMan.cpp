class RDustEffectsMan
{
	class RightDust1
	{
		enabled = "density interpolate [0.15,0.15001,-1,1]";
		lifetime = 0.1;
		qualityLevel = 2;
		simulation = "particles";
		type = "RightDustMan";
	};
	class RightDustMed
	{
		enabled = "density interpolate [0.15,0.15001,-1,1]";
		lifetime = 0.1;
		qualityLevel = 1;
		simulation = "particles";
		type = "RightDustManMed";
	};
	class RightDustWater1
	{
		lifetime = 0.3;
		simulation = "particles";
		type = "DustWaterMan";
	};
};
