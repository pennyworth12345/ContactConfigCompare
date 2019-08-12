class AirDestructionEffects
{
	class Fire
	{
		intensity = 0.15;
		interval = 1;
		lifeTime = 200;
		position = "destructionEffect1";
		simulation = "particles";
		start = "damage - 0.99";
		type = "AirObjectDestructionFire";
	};
	class FireSparksBig1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 200;
		position = "destructionEffect1";
		simulation = "particles";
		start = "damage - 0.99";
		type = "AirFireSparks";
	};
	class LightBig1
	{
		enabled = "distToWater";
		intensity = 0.001;
		interval = 1;
		lifeTime = 200;
		position = "destructionEffect1";
		simulation = "light";
		start = "damage - 0.99";
		type = "ObjectDestructionLight";
	};
	class Refract1
	{
		intensity = 0.15;
		interval = 1;
		lifeTime = 200;
		position = "destructionEffect1";
		simulation = "particles";
		start = "damage - 0.99";
		type = "ObjectDestructionRefractSmall";
	};
	class SmokeBig1
	{
		intensity = 0.15;
		interval = 1;
		lifeTime = 200;
		position = "destructionEffect1";
		simulation = "particles";
		start = "damage - 0.99";
		type = "AirObjectDestructionSmoke";
	};
	class Sound
	{
		intensity = 1;
		interval = 1;
		lifeTime = 200;
		position = "destructionEffect1";
		simulation = "sound";
		start = "damage - 0.99";
		type = "Fire";
	};
};
