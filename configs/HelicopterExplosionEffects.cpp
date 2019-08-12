class HelicopterExplosionEffects
{
	class Explosion1
	{
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ExplosionParticles";
	};
	class LightExp
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 1.5, 0};
		simulation = "light";
		type = "ExploLight";
	};
	class Shards
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position = "";
		simulation = "particles";
		type = "HeliDestructionShards1";
	};
	class Shards2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position = "";
		simulation = "particles";
		type = "ObjectDestructionShards";
	};
	class ShardsBurn2
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position = "";
		simulation = "particles";
		type = "ObjectDestructionShardsBurning";
	};
	class SmallSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CloudMedDark";
	};
};
