class ClusterExplosionEffects
{
	class ClusterFire
	{
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ClusterFire";
	};
	class ClusterLight
	{
		intensity = "0.001*1000";
		interval = 1;
		lifeTime = "0.25*2";
		position[] = {0, 1.5, 0};
		simulation = "light";
		type = "ClusterLight";
	};
	class ClusterSmoke
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ClusterSmoke";
	};
	class ClusterSmokeLingering
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "ClusterSmokeLingering";
	};
};
