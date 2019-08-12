class RagDollRevoluteJoint
{
	enableCollision = 0;
	projectionDistance = 0.05;
	projectionMode = "point";
	type = "revolute";
	class LimitHigh: RagDollDefaultLimit {};
	class LimitLow: RagDollDefaultLimit {};
	class Spring: RagDollDefaultSpring
	{
		enabled = 1;
	};
};
