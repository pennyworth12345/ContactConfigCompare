class RagDollSphericalJoint
{
	enableCollision = 0;
	projectionDistance = 0.05;
	projectionMode = "point";
	type = "spherical";
	class JointSpring: RagDollDefaultSpring
	{
		enabled = 1;
	};
	class SwingLimit: RagDollDefaultLimit {};
	class SwingSpring: RagDollDefaultSpring
	{
		damper = 2;
		enabled = 1;
	};
	class TwistLimitHigh: RagDollDefaultLimit {};
	class TwistLimitLow: RagDollDefaultLimit {};
	class TwistSpring: RagDollDefaultSpring
	{
		enabled = 1;
	};
};
