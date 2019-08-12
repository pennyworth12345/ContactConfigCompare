class RocketBackEffectsRPG
{
	class RocketBackfire1
	{
		enabled = "(density interpolate [0.98,0.981,-1,1])";
		simulation = "particles";
		type = "RocketBackfireRPG";
	};
	class RocketBacksmoke2
	{
		enabled = "(density interpolate [0.98,0.981,-1,1])";
		simulation = "particles";
		type = "RocketBacksmokeRPG";
	};
	class RocketFrontsmoke
	{
		enabled = "(density interpolate [0.98,0.981,-1,1])";
		simulation = "particles";
		type = "RocketFrontsmokeRPG";
	};
};
