class collisionEffect
{
	class collisionVeh1
	{
		lifeTime = 0.2;
		simulation = "particles";
		type = "collisionVeh1";
	};
	class collisionVeh2
	{
		lifeTime = 0.2;
		simulation = "particles";
		type = "collisionVeh2";
	};
	class collisionVehSmoke
	{
		enabled = "forceSize interpolate [150,150.1,-1,1]";
		lifeTime = 0.2;
		simulation = "particles";
		type = "collisionVehSmoke";
	};
};
