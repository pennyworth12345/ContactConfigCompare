class PhysXMaterials
{
	class Default: PhysXMaterialBase
	{
		dynamicFriction = 0.55;
		isDefault = 1;
		restitution = 0.05;
		staticFriction = 0.75;
	};
	class DriveOn: PhysXMaterialBase
	{
		dynamicFriction = 0.007;
		restitution = 0;
		staticFriction = 0.01;
	};
	class Grenade: PhysXMaterialBase
	{
		dynamicFriction = 1.5;
		restitution = 0.1;
		staticFriction = 3;
	};
	class PhysXMaterialBase
	{
		dynamicFriction = 0.55;
		isAnisotropic = 0;
		isDefault = 0;
		restitution = 0.05;
		staticFriction = 0.75;
	};
	class Ragdoll: PhysXMaterialBase
	{
		dynamicFriction = 0.45;
		restitution = 0.2;
		staticFriction = 0.6;
	};
	class Terrain: PhysXMaterialBase
	{
		dynamicFriction = 0.46;
		restitution = 0.01;
		staticFriction = 0.6;
	};
	class Wheel: PhysXMaterialBase
	{
		dynamicFriction = 0.68;
		restitution = 0.05;
		staticFriction = 0.9;
	};
	class Wheel2: PhysXMaterialBase
	{
		dynamicFriction = 0.77;
		restitution = 0.01;
		staticFriction = 1;
	};
	class WheelBrake: PhysXMaterialBase
	{
		dynamicFriction = 0.68;
		restitution = 0.05;
		staticFriction = 0.9;
	};
	class WheelBrake_Hard: PhysXMaterialBase
	{
		dynamicFriction = 0.68;
		restitution = 0.05;
		staticFriction = 0.9;
	};
	class WheelBrake_Soft: PhysXMaterialBase
	{
		dynamicFriction = 0.68;
		restitution = 0.05;
		staticFriction = 0.9;
	};
	class WheelBrakeNA: PhysXMaterialBase
	{
		dynamicFriction = 0.68;
		restitution = 0.05;
		staticFriction = 0.9;
	};
	class WheelDestroyed: PhysXMaterialBase
	{
		dynamicFriction = 0.3;
		restitution = 0.01;
		staticFriction = 0.5;
	};
	class WheelNeutralTurn: PhysXMaterialBase
	{
		dynamicFriction = 0.68;
		restitution = 0.01;
		staticFriction = 0.9;
	};
};
