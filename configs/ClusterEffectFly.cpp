class ClusterEffectFly
{
	class ClusterExplosion
	{
		enabled = "flyTime interpolate [0,0.2,1,-1]";
		intensity = 1;
		interval = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ClusterExplosion";
	};
	class ClusterFly
	{
		enabled = "speedY interpolate [-0.0001,0.0001,1,-1]";
		intensity = 1;
		interval = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ClusterFly";
	};
	class ClusterFlyLight
	{
		enabled = "speedY interpolate [-0.0001,0.0001,1,-1]";
		intensity = 1;
		interval = 1;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "ClusterFlyLight";
	};
	class GrenadeExp1
	{
		enabled = "flyTime interpolate [0,0.2,1,-1]";
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ClusterExpFire";
	};
};
