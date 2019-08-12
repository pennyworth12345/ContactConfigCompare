class CfgRagDollSkeletons
{
	class BaseRagdoll
	{
		animBlendTime = 0;
		idleAnim = "";
		networkBonePrimary = "";
		networkBoneSecondary = "";
		primaryWeaponBone = "";
		recoveryBlendTime = 0.01;
		recoveryCosLimit = -1;
		recoveryDistLimit = 100;
		secondaryWeaponBone = "";
		simulateDistanceLimit = 0.5;
		simulateDistanceLimitTime = 2;
		simulateMaxTime = 3;
		simulateMinTime = 1.5;
		sleepAngularVelocity = 0.1;
		sleepLinearVelocity = 0.1;
		weaponDistanceLimit = 0.1;
		weaponDistanceLimitTime = 2;
		weaponDropMaxTime = 3;
		weaponDropMinTime = 1;
		weaponSleepAngularVelocity = 0.1;
		weaponSleepLinearVelocity = 0.1;
	};
	class Soldier: BaseRagdoll
	{
		draggingMask = "dragging";
		hitMask = "hit";
		hitMaskUnderwater = "hitUnderwater";
		idleAnim = "A3\anims_f\data\Anim\sdr\ragdoll_fingers.rtm";
		networkBonePrimary = "chest";
		networkBoneSecondary = "pelvis";
		primaryWeaponBone = "weapon";
		secondaryWeaponBone = "launcher";
		class BaseRagdollBone
		{
			childrenUseIdleAnim = 0;
			childrenUseStartTrans = 1;
			material = "Ragdoll";
		};
		class Bones
		{
			class Chest: BaseRagdollBone
			{
				endBone = "head";
				mass = 20;
				name = "chest";
				radius = 0.16;
				size[] = {0.11, 0.14, 0.19};
				startBone = "spine2";
				type = "box";
			};
			class Head: BaseRagdollBone
			{
				mass = 9.75;
				name = "head";
				radius = 0.12;
				startBone = "head";
				type = "sphere";
			};
			class Launcher: BaseRagdollBone
			{
				endPosRelToStart[] = {0, 0, 0.4};
				mass = 9;
				name = "launcher";
				startBone = "launcher";
				type = "weapon";
			};
			class LeftArm: BaseRagdollBone
			{
				endBone = "leftForeArm";
				mass = 9.75;
				name = "leftArm";
				startBone = "leftArm";
				type = "capsule";
			};
			class LeftFoot: BaseRagdollBone
			{
				mass = 2.3;
				name = "leftFoot";
				networkType = "leftFoot";
				size[] = {0.15, 0.05, 0.07};
				startBone = "leftFoot";
				type = "box";
			};
			class LeftForeArm: BaseRagdollBone
			{
				endBone = "leftHand";
				mass = 12;
				name = "leftForeArm";
				startBone = "leftForeArm";
				type = "capsule";
			};
			class LeftHand: BaseRagdollBone
			{
				childrenUseIdleAnim = 1;
				childrenUseStartTrans = 0;
				mass = 6;
				name = "leftHand";
				networkType = "leftHand";
				radius = 0.08;
				startBone = "leftHand";
				type = "sphere";
			};
			class LeftLeg: BaseRagdollBone
			{
				endBone = "leftFoot";
				mass = 13;
				name = "leftLeg";
				startBone = "leftLeg";
				type = "capsule";
			};
			class LeftUpLeg: BaseRagdollBone
			{
				endBone = "leftLeg";
				mass = 25.5;
				name = "leftUpLeg";
				startBone = "leftUpLeg";
				type = "capsule";
			};
			class Pelvis: BaseRagdollBone
			{
				endBone = "spine2";
				mass = 36;
				name = "pelvis";
				networkType = "root";
				radius = 0.12;
				size[] = {0.11, 0.12, 0.21};
				startBone = "pelvis";
				type = "box";
			};
			class RightArm: BaseRagdollBone
			{
				endBone = "rightForeArm";
				mass = 9.75;
				name = "rightArm";
				startBone = "rightArm";
				type = "capsule";
			};
			class RightFoot: BaseRagdollBone
			{
				mass = 2.3;
				name = "rightFoot";
				networkType = "rightFoot";
				size[] = {0.15, 0.05, 0.07};
				startBone = "rightFoot";
				type = "box";
			};
			class RightForeArm: BaseRagdollBone
			{
				endBone = "rightHand";
				mass = 12;
				name = "rightForeArm";
				startBone = "rightForeArm";
				type = "capsule";
			};
			class RightHand: BaseRagdollBone
			{
				childrenUseIdleAnim = 1;
				childrenUseStartTrans = 0;
				mass = 4;
				name = "rightHand";
				networkType = "rightHand";
				radius = 0.08;
				startBone = "rightHand";
				type = "sphere";
			};
			class RightLeg: BaseRagdollBone
			{
				endBone = "rightFoot";
				mass = 13;
				name = "rightLeg";
				startBone = "rightLeg";
				type = "capsule";
			};
			class RightUpLeg: BaseRagdollBone
			{
				endBone = "rightLeg";
				mass = 25.5;
				name = "rightUpLeg";
				startBone = "rightUpLeg";
				type = "capsule";
			};
			class Weapon: BaseRagdollBone
			{
				endPosRelToStart[] = {0, 0, 0.4};
				mass = 4;
				name = "weapon";
				startBone = "weapon";
				type = "weapon";
			};
		};
		class JointsPX2
		{
			class Chest_Head_PX2: RagDollSphericalJoint
			{
				bone1 = "chest";
				bone2 = "head";
				name = "chest_head";
				class SwingLimit: SwingLimit
				{
					value = 20;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value = 15;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value = -15;
				};
			};
			class Chest_LeftArm_PX2: RagDollSphericalJoint
			{
				axis[] = {-1, -0, 0.5};
				bone1 = "chest";
				bone2 = "leftArm";
				enableCollision = 1;
				name = "chest_leftArm";
				class SwingLimit: SwingLimit
				{
					value = 60;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value = 20;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value = -20;
				};
			};
			class Chest_RightArm_PX2: RagDollSphericalJoint
			{
				axis[] = {1, -0, 0.5};
				bone1 = "chest";
				bone2 = "rightArm";
				enableCollision = 1;
				name = "chest_rightArm";
				class SwingLimit: SwingLimit
				{
					value = 60;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value = 20;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value = -20;
				};
			};
			class LeftArm_LeftForeArm_PX2: RagDollRevoluteJoint
			{
				axis[] = {1, -1, 0.2};
				bone1 = "leftArm";
				bone2 = "leftForeArm";
				name = "leftArm_leftForeArm";
				class LimitHigh: LimitHigh
				{
					value = 60;
				};
				class LimitLow: LimitLow
				{
					value = -2;
				};
			};
			class LeftForeArm_LeftHand_PX2: RagDollSphericalJoint
			{
				bone1 = "leftForeArm";
				bone2 = "leftHand";
				name = "leftForeArm_leftHand";
				class SwingLimit: SwingLimit
				{
					value = 20;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value = 5;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value = -5;
				};
			};
			class LeftLeg_LeftFoot_PX2: RagDollRevoluteJoint
			{
				axis[] = {-1, 0, 0};
				bone1 = "leftLeg";
				bone2 = "leftFoot";
				name = "leftLeg_leftFoot";
				class LimitHigh: LimitHigh
				{
					value = 45;
				};
				class LimitLow: LimitLow
				{
					value = -15;
				};
			};
			class LeftUpLeg_LeftLeg_PX2: RagDollRevoluteJoint
			{
				axis[] = {-1, 0, 0};
				bone1 = "leftUpLeg";
				bone2 = "leftLeg";
				name = "leftUpLeg_leftLeg";
				class LimitHigh: LimitHigh
				{
					value = 110;
				};
				class LimitLow: LimitLow
				{
					value = -5;
				};
			};
			class Pelvis_Chest_PX2: RagDollSphericalJoint
			{
				axis[] = {0, 1, 0.3};
				bone1 = "pelvis";
				bone2 = "chest";
				name = "pelvis_chest";
				class SwingLimit: SwingLimit
				{
					value = 25;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value = 25;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value = -15;
				};
			};
			class Pelvis_LeftUpLeg_PX2: RagDollSphericalJoint
			{
				axis[] = {-1.5, -1.1, 2};
				bone1 = "pelvis";
				bone2 = "leftUpLeg";
				enableCollision = 1;
				name = "pelvis_leftUpLeg";
				class SwingLimit: SwingLimit
				{
					value = 45;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value = 20;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value = -10;
				};
			};
			class Pelvis_RightUpLeg_PX2: RagDollSphericalJoint
			{
				axis[] = {1.5, -1.1, 2};
				bone1 = "pelvis";
				bone2 = "rightUpLeg";
				enableCollision = 1;
				name = "pelvis_rightUpLeg";
				class SwingLimit: SwingLimit
				{
					value = 45;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value = 20;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value = -10;
				};
			};
			class RightArm_RightForeArm_PX2: RagDollRevoluteJoint
			{
				axis[] = {1, 1, -0.2};
				bone1 = "rightArm";
				bone2 = "rightForeArm";
				name = "rightArm_rightForeArm";
				class LimitHigh: LimitHigh
				{
					value = 60;
				};
				class LimitLow: LimitLow
				{
					value = -2;
				};
			};
			class RightForeArm_RightHand_PX2: RagDollSphericalJoint
			{
				bone1 = "rightForeArm";
				bone2 = "rightHand";
				name = "rightForeArm_rightHand";
				class SwingLimit: SwingLimit
				{
					value = 20;
				};
				class TwistLimitHigh: TwistLimitHigh
				{
					value = 5;
				};
				class TwistLimitLow: TwistLimitLow
				{
					value = -5;
				};
			};
			class RightLeg_RightFoot_PX2: RagDollRevoluteJoint
			{
				axis[] = {-1, 0, 0};
				bone1 = "rightLeg";
				bone2 = "rightFoot";
				name = "rightLeg_rightFoot";
				class LimitHigh: LimitHigh
				{
					value = 45;
				};
				class LimitLow: LimitLow
				{
					value = -15;
				};
			};
			class RightUpLeg_RightLeg_PX2: RagDollRevoluteJoint
			{
				axis[] = {-1, 0, 0};
				bone1 = "rightUpLeg";
				bone2 = "rightLeg";
				name = "rightUpLeg_rightLeg";
				class LimitHigh: LimitHigh
				{
					value = 110;
				};
				class LimitLow: LimitLow
				{
					value = -5;
				};
			};
		};
		class JointsPX3
		{
			class Chest_Head_PX3: RagDollD6Joint_PX3
			{
				bone1 = "chest";
				bone2 = "head";
				driveDamping = 30;
				driveDampingWater = 3;
				driveSpring = 15;
				driveSpringWater = 1.5;
				name = "chest_head";
				swingLimitY = 45;
				swingLimitZ = 45;
				twistDamping = 30;
				twistLimitLower = -40;
				twistLimitUpper = 40;
				twistSpring = 15;
			};
			class Chest_LeftArm_PX3: RagDollD6Joint_PX3
			{
				bone1 = "chest";
				bone2 = "leftArm";
				driveDamping = 30;
				driveDampingWater = 3;
				driveSpring = 15;
				driveSpringWater = 3;
				enableCollision = 1;
				name = "chest_leftArm";
				swingDamping = 25;
				swingLimitY = 5;
				swingLimitZ = 15;
				swingSpring = 25;
				twistDamping = 25;
				twistLimitLower = -50;
				twistLimitUpper = 50;
				twistSpring = 1;
			};
			class Chest_RightArm_PX3: RagDollD6Joint_PX3
			{
				bone1 = "chest";
				bone2 = "rightArm";
				driveDamping = 30;
				driveDampingWater = 3;
				driveSpring = 15;
				driveSpringWater = 3;
				enableCollision = 1;
				name = "chest_rightArm";
				swingDamping = 25;
				swingLimitY = 15;
				swingLimitZ = 15;
				swingSpring = 25;
				twistDamping = 25;
				twistLimitLower = -50;
				twistLimitUpper = 50;
				twistSpring = 1;
			};
			class LeftArm_LeftForeArm_PX3: RagDollD6Joint_PX3
			{
				axis[] = {-1, 1, -0.2};
				bone1 = "leftArm";
				bone2 = "leftForeArm";
				driveDamping = 10;
				driveDampingWater = 1;
				driveSpring = 10;
				driveSpringWater = 1;
				name = "leftArm_leftForeArm";
				swingLimitY = 10;
				swingLimitZ = 10;
				twistLimitLower = -5;
				twistLimitUpper = 150;
			};
			class LeftForeArm_LeftHand_PX3: RagDollD6Joint_PX3
			{
				bone1 = "leftForeArm";
				bone2 = "leftHand";
				driveDamping = 10;
				driveDampingWater = 1;
				driveSpring = 10;
				driveSpringWater = 1;
				name = "leftForeArm_leftHand";
				swingLimitY = 10;
				swingLimitZ = 10;
				twistLimitLower = -20;
				twistLimitUpper = 20;
			};
			class LeftLeg_LeftFoot_PX3: RagDollD6Joint_PX3
			{
				axis[] = {1, 0, 0};
				bone1 = "leftLeg";
				bone2 = "leftFoot";
				driveDamping = 20;
				driveDampingWater = 2;
				driveSpring = 20;
				driveSpringWater = 2;
				enableCollision = 1;
				name = "leftLeg_leftFoot";
				swingLimitY = 5;
				swingLimitZ = 5;
				twistLimitLower = -15;
				twistLimitUpper = 45;
			};
			class LeftUpLeg_LeftLeg_PX3: RagDollD6Joint_PX3
			{
				axis[] = {1, 0, 0};
				bone1 = "leftUpLeg";
				bone2 = "leftLeg";
				driveDamping = 30;
				driveDampingWater = 2;
				driveSpring = 550;
				driveSpringWater = 2;
				name = "leftUpLeg_leftLeg";
				swingLimitY = 1;
				swingLimitZ = 0.01;
				twistDamping = 15;
				twistLimitLower = 0;
				twistLimitUpper = 15;
				twistSpring = 5;
			};
			class Pelvis_Chest_PX3: RagDollD6Joint_PX3
			{
				axis[] = {0, 1, 0.3};
				bone1 = "pelvis";
				bone2 = "chest";
				driveDamping = 30;
				driveDampingWater = 5;
				driveSpring = 30;
				driveSpringWater = 5;
				enableCollision = 0;
				name = "pelvis_chest";
				swingLimitY = 30;
				swingLimitZ = 30;
				twistLimitLower = -25;
				twistLimitUpper = 25;
			};
			class Pelvis_LeftUpLeg_PX3: RagDollD6Joint_PX3
			{
				bone1 = "pelvis";
				bone2 = "leftUpLeg";
				driveDamping = 130;
				driveDampingWater = 3;
				driveSpring = 550;
				driveSpringWater = 3;
				enableCollision = 1;
				name = "pelvis_leftUpLeg";
				swingDamping = 5;
				swingLimitY = 1;
				swingLimitZ = 1;
				swingSpring = 5;
				twistDamping = 5;
				twistLimitLower = -80;
				twistLimitUpper = 80;
				twistSpring = 5;
			};
			class Pelvis_RightUpLeg_PX3: RagDollD6Joint_PX3
			{
				bone1 = "pelvis";
				bone2 = "rightUpLeg";
				driveDamping = 130;
				driveDampingWater = 3;
				driveSpring = 550;
				driveSpringWater = 3;
				enableCollision = 1;
				name = "pelvis_rightUpLeg";
				swingDamping = 5;
				swingLimitY = 1;
				swingLimitZ = 1;
				swingSpring = 1;
				twistDamping = 5;
				twistLimitLower = -80;
				twistLimitUpper = 80;
				twistSpring = 5;
			};
			class RightArm_RightForeArm_PX3: RagDollD6Joint_PX3
			{
				axis[] = {-1, -1, 0.2};
				bone1 = "rightArm";
				bone2 = "rightForeArm";
				driveDamping = 10;
				driveDampingWater = 1;
				driveSpring = 10;
				driveSpringWater = 1;
				name = "rightArm_rightForeArm";
				swingLimitY = 10;
				swingLimitZ = 10;
				twistLimitLower = -5;
				twistLimitUpper = 150;
			};
			class RightForeArm_RightHand_PX3: RagDollD6Joint_PX3
			{
				bone1 = "rightForeArm";
				bone2 = "rightHand";
				driveDamping = 10;
				driveDampingWater = 1;
				driveSpring = 10;
				driveSpringWater = 1;
				name = "rightForeArm_rightHand";
				swingLimitY = 10;
				swingLimitZ = 10;
				twistLimitLower = -20;
				twistLimitUpper = 20;
			};
			class RightLeg_RightFoot_PX3: RagDollD6Joint_PX3
			{
				axis[] = {1, 0, 0};
				bone1 = "rightLeg";
				bone2 = "rightFoot";
				driveDamping = 20;
				driveDampingWater = 2;
				driveSpring = 20;
				driveSpringWater = 2;
				enableCollision = 1;
				name = "rightLeg_rightFoot";
				swingLimitY = 5;
				swingLimitZ = 5;
				twistLimitLower = -15;
				twistLimitUpper = 45;
			};
			class RightUpLeg_RightLeg_PX3: RagDollD6Joint_PX3
			{
				axis[] = {1, 0, 0};
				bone1 = "rightUpLeg";
				bone2 = "rightLeg";
				driveDamping = 30;
				driveDampingWater = 2;
				driveSpring = 550;
				driveSpringWater = 2;
				name = "rightUpLeg_rightLeg";
				swingLimitY = 1;
				swingLimitZ = 0.01;
				twistDamping = 15;
				twistLimitLower = 0;
				twistLimitUpper = 15;
				twistSpring = 5;
			};
		};
		class Masks
		{
			class DraggingMask
			{
				mask[] = {{"pelvis", 0, 1}, {"chest", 0, 1}, {"head", 1, 0}, {"leftArm", 1, 0}, {"leftForeArm", 1, 0}, {"leftHand", 1, 0}, {"rightArm", 1, 0}, {"rightForeArm", 1, 0}, {"rightHand", 1, 0}, {"leftUpLeg", 1, 0}, {"leftLeg", 1, 0}, {"leftFoot", 1, 0}, {"rightUpLeg", 1, 0}, {"rightLeg", 1, 0}, {"rightFoot", 1, 0}, {"weapon", 0.2, 1}, {"launcher", 0, 1}};
				name = "dragging";
			};
			class HitMask
			{
				mask[] = {{"pelvis", 0, 1}, {"chest", 1, 0}, {"head", 1, 0}, {"leftArm", 1, 0}, {"leftForeArm", 1, 0}, {"leftHand", 1, 0}, {"rightArm", 1, 0}, {"rightForeArm", 1, 0}, {"rightHand", 1, 0}, {"leftUpLeg", 0, 1}, {"leftLeg", 0, 1}, {"leftFoot", 0, 1}, {"rightUpLeg", 0, 1}, {"rightLeg", 0, 1}, {"rightFoot", 0, 1}, {"weapon", 0, 1}, {"launcher", 0, 1}};
				name = "hit";
			};
			class HitMaskUnderwater
			{
				mask[] = {{"pelvis", 1, 1}, {"chest", 1, 1}, {"head", 1, 0}, {"leftArm", 1, 0}, {"leftForeArm", 1, 0}, {"leftHand", 1, 0}, {"rightArm", 1, 0}, {"rightForeArm", 1, 0}, {"rightHand", 1, 0}, {"leftUpLeg", 1, 0}, {"leftLeg", 1, 0}, {"leftFoot", 1, 0}, {"rightUpLeg", 1, 0}, {"rightLeg", 1, 0}, {"rightFoot", 1, 0}, {"weapon", 1, 0}, {"launcher", 1, 0}};
				name = "hitUnderwater";
			};
		};
		class WeaponLinkBones
		{
			class LinkBone1
			{
				bone = "leftHand";
				canBeDropped = 1;
				prefference = 1;
			};
			class LinkBone2
			{
				bone = "rightHand";
				canBeDropped = 1;
				prefference = 1;
			};
			class LinkBone3
			{
				bone = "chest";
				canBeDropped = 1;
				prefference = 2;
			};
		};
	};
};
