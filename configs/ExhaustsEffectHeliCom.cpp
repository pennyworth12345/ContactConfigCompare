class ExhaustsEffectHeliCom
{
	class ExhaustsEffect01
	{
		enabled = "(engineOn interpolate [0.45,0.451,1,-1]) * (damage interpolate [0.4,0.41,1,-1])";
		simulation = "particles";
		type = "ExhaustSmoke1HeliCom";
	};
	class ExhaustsEffectRefract01
	{
		simulation = "particles";
		type = "ExhaustSmokeRefractHeliCom";
	};
};
