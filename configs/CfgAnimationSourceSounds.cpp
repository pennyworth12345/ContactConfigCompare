class CfgAnimationSourceSounds
{
	class FenceGateDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.25, "sound1", 0.25, "sound2", 0.25, "sound3", 0.25};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSqueak_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSqueak_2", 1, 1, 20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSqueak_3", 1, 1, 20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSqueak_4", 1, 1, 20};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class DoorMovementDone
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSlam_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSlam_2", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateKnob", 0.707946, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSlam_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSlam_2", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class GateDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateSqueak_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateSqueak_1", 1, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class DoorMovementDone
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateSlam", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateKnob", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class GenericBigDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.25, "sound1", 0.25, "sound2", 0.25, "sound3", 0.25};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_2", 1, 1, 20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_3", 1, 1, 20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_4", 1, 1, 20};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsKnob", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class GenericDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.25, "sound1", 0.25, "sound2", 0.25, "sound3", 0.25};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak2", 1, 1, 20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak3", 1, 1, 20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak4", 1, 1, 20};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\knob1", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\slam1", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class GlassBigDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.25, "sound1", 0.25, "sound2", 0.25, "sound3", 0.25};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSqueak_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSqueak_2", 1, 1, 20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSqueak_3", 1, 1, 20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSqueak_4", 1, 1, 20};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsKnob", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class GlassMetalDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassMetalDoors\GlassMetalDoorsSqueak_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassMetalDoors\GlassMetalDoorsSqueak_2", 1, 1, 20};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassMetalDoors\GlassMetalDoorsKnob", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassMetalDoors\GlassMetalDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class GlassServoDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.25, "sound1", 0.25, "sound2", 0.25, "sound3", 0.25};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSqueak_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSqueak_2", 1, 1, 20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSqueak_3", 1, 1, 20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSqueak_4", 1, 1, 20};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class DoorMovementDone
		{
			loop = 0;
			sound[] = {"sound0", 1, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSlam_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSlam_2", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsKnob_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsKnob_2", 1, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSlam_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSlam_2", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class MetalBigDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsSqueak_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsSqueak_2", 1, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class DoorMovementDone
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsKnob_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsKnob_2", 1, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class MetalDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.2, "sound1", 0.2, "sound2", 0.4, "sound3", 0.2};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_1", 0.562341, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_2", 0.562341, 1, 20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_3", 0.562341, 1, 20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_4", 0.562341, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsKnob", 0.630957, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class MetalOldBigDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsSqueak_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsSqueak_2", 1, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class DoorMovementDone
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsKnob", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class MetalOldDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.33, "sound1", 0.33, "sound2", 0.33};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_2", 1, 1, 20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_3", 1, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsKnob", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class OldWoodDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.25, "sound1", 0.25, "sound2", 0.25, "sound3", 0.25};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSqueak_1", 0.398107, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSqueak_2", 0.398107, 1, 20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSqueak_3", 0.398107, 1, 20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSqueak_4", 0.398107, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsKnob", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class PlasticDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\PlasticDoors\PlasticDoorsSqueake_1", 1, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\PlasticDoors\PlasticDoorsSqueake_1", 1, 1, 20};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\PlasticDoors\PlasticDoorsKnob", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\PlasticDoors\PlasticDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class PlowSound
	{
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"a3\Sounds_F\vehicles\armor\Bobcat\Bobcat_Plow_Down_01", 1.58489, 1, 20};
			terminate = 0;
			trigger = "direction";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"a3\Sounds_F\vehicles\armor\Bobcat\Bobcat_Plow_Up_01", 1.58489, 1, 20};
			terminate = 0;
			trigger = "(1 - direction)";
		};
	};
	class RoadGateDoors
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.25, "sound1", 0.25, "sound2", 0.25, "sound3", 0.25};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSqueake_1", 1, 1, 45};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSqueake_2", 1, 1, 45};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSqueake_3", 1, 1, 45};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSqueake_4", 1, 1, 45};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class DoorMovementDone
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSlam", 1, 1, 45};
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\dummysound", 1, 1, 45};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSlam", 1, 1, 45};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
		};
	};
	class RollDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.25, "sound1", 0.25, "sound2", 0.25, "sound3", 0.25};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSqueak_1", 1, 1, 35};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSqueak_2", 1, 1, 35};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSqueak_3", 1, 1, 35};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSqueak_4", 1, 1, 35};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class DoorMovementDone
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_1", 1, 1, 35};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_2", 1, 1, 35};
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsKnob_1", 1, 1, 35};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsKnob_2", 1, 1, 35};
			terminate = 0;
			trigger = "(phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_1", 1, 1, 35};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_2", 1, 1, 35};
			terminate = 0;
			trigger = "(phase factor[0.1,0.09])";
		};
	};
	class ServoDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.25, "sound1", 0.25, "sound2", 0.25, "sound3", 0.25};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_1", 0.354813, 1, 20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_2", 0.354813, 1, 20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_3", 0.354813, 1, 20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_4", 0.354813, 1, 20};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class DoorMovementDone
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam", 0.354813, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
		};
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsKnob", 0.354813, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
		};
	};
	class ServoRampSound
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSound_1", 3.16228, 1, 60};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSound_2", 3.16228, 1, 60};
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
		class DoorMovementDone1
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam", 3.16228, 1, 60};
			terminate = 0;
			trigger = "direction * (phase factor[0.9,0.99])";
		};
		class DoorMovementDone2
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam", 3.16228, 1, 60};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.05])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam", 3.16228, 1, 60};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
		};
	};
	class ServoRampSound_2
	{
		class DoorMovement
		{
			loop = 0;
			sound[] = {"sound0", 0.5, "sound1", 0.5};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSound_1", 3.16228, 1, 60};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSound_2", 3.16228, 1, 60};
			terminate = 1;
			trigger = "(phase factor[0.01,0.02]) * (phase factor[0.99,0.98])";
		};
		class DoorMovementDone1
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSlam", 3.16228, 1, 60};
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
		};
		class DoorMovementDone2
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSlam", 3.16228, 1, 60};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSlam", 1, 1, 60};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
		};
	};
	class Sfx_DeconShowerLarge
	{
		class Sfx_DeconShowerLarge_Off_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_DeconShowerLarge_Off_01", 1, 1, 20};
			terminate = 0;
			trigger = "(1-direction)";
		};
		class Sfx_DeconShowerLarge_On_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_DeconShowerLarge_On_01", 1, 1, 20};
			terminate = 0;
			trigger = "direction";
		};
	};
	class Sfx_DeconShowerSmall_Valves
	{
		class Sfx_DeconShowerSmall_Valves_Open_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_DeconShowerSmall_Valves_Open_01", 1, 1, 20};
			terminate = 1;
			trigger = "(phase factor[0.05,0.1]) * (phase factor[0.99,0.98])";
		};
	};
	class Sfx_Offroad_01_Covered_Backdoor
	{
		class Sfx_Offroad_01_Covered_Backdoor_Close_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F\vehicles2\soft\Offroad_01\Sfx_Offroad_01_Covered_Backdoor_Close_01", 1, 1, 20};
			terminate = 0;
			trigger = "(1-direction)";
		};
		class Sfx_Offroad_01_Covered_Backdoor_Open_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F\vehicles2\soft\Offroad_01\Sfx_Offroad_01_Covered_Backdoor_Open_01", 1, 1, 20};
			terminate = 0;
			trigger = "direction";
		};
	};
	class Sfx_RuggedCabinet_Drawer
	{
		class Sfx_RuggedCabinet_Drawer_Close_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_RuggedCabinet_Drawer_Close_01", 1, 1, 20};
			terminate = 0;
			trigger = "(1-direction)";
		};
		class Sfx_RuggedCabinet_Drawer_Open_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_RuggedCabinet_Drawer_Open_01", 1, 1, 20};
			terminate = 0;
			trigger = "direction";
		};
	};
	class Sfx_RuggedDesk_Drawer
	{
		class Sfx_RuggedDesk_Drawer_Close_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_RuggedDesk_Drawer_Close_01", 1, 1, 20};
			terminate = 0;
			trigger = "(1-direction)";
		};
		class Sfx_RuggedDesk_Drawer_Open_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_RuggedDesk_Drawer_Open_01", 1, 1, 20};
			terminate = 0;
			trigger = "direction";
		};
	};
	class Sfx_TransferSwitch
	{
		class Sfx_TransferSwitch_Lever_Off_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_TransferSwitch_Lever_Off_01", 1, 1, 20};
			terminate = 0;
			trigger = "((1-direction) * (phase factor[0.99,0.98]) * (phase factor[0.0,0.1])) + (direction * (phase factor[-0.05,-0.10]))";
		};
		class Sfx_TransferSwitch_Lever_On_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_TransferSwitch_Lever_On_01", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.05,0.10])";
		};
		class Sfx_TransferSwitch_Lever_Relay_01
		{
			loop = 0;
			sound[] = {"sound1", 1};
			sound1[] = {"A3\Sounds_F_Enoch\Assets\Props\Sfx_TransferSwitch_Lever_Relay_01", 1, 1, 20};
			terminate = 0;
			trigger = "(1-direction) * (phase factor[-0.05,-0.10])";
		};
	};
	class SmallBellSound
	{
		class RingTheBell
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"a3\Sounds_F_Enoch\Assets\Environment\SpotFx\Chapel\bell_chapel", 1.58489, 1, 20};
			terminate = 0;
			trigger = "direction";
		};
	};
	class TerminalAntennaSound
	{
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\sfx\objects\upload_terminal\Terminal_antena_open", 1, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.8,0.81])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\sfx\objects\upload_terminal\Terminal_antena_close", 1, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[2.98,2.97])";
		};
	};
	class TerminalLockSound
	{
		class OpenTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\sfx\objects\upload_terminal\Terminal_lock_open", 0.562341, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
		};
		class SlamTheDoor
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"A3\Sounds_F\sfx\objects\upload_terminal\Terminal_lock_close", 0.562341, 1, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.15,0.14])";
		};
	};
	class TinyBellSound
	{
		class RingTheTinyBell
		{
			loop = 0;
			sound[] = {"sound0", 1};
			sound0[] = {"a3\Sounds_F_Enoch\Assets\Environment\SpotFx\Chapel\bell_chapel_tiny", 1.58489, 1, 20};
			terminate = 0;
			trigger = "direction";
		};
	};
	class Van_02_Door_Front
	{
		class Van_02_Door_Front_Close
		{
			loop = 0;
			sound[] = {"sound1", 0.5, "sound2", 0.5};
			sound1[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Front_Close_01", 1.4, 1, 20};
			sound2[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Front_Close_01", 1.3, 0.95, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.98,0.99])";
		};
		class Van_02_Door_Front_Open
		{
			loop = 0;
			sound[] = {"sound1", 0.5, "sound2", 0.5};
			sound1[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Front_Open_01", 1.4, 1, 20};
			sound2[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Front_Open_01", 1.3, 0.95, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.09,0.1])";
		};
	};
	class Van_02_Door_Rear
	{
		class Van_02_Door_Rear_Close
		{
			loop = 0;
			sound[] = {"sound1", 0.25, "sound2", 0.25, "sound3", 0.25, "sound4", 0.25};
			sound1[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Rear_Close_01", 3.4, 1, 20};
			sound2[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Rear_Close_01", 3.3, 0.95, 20};
			sound3[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Rear_Close_02", 3.4, 1, 20};
			sound4[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Rear_Close_02", 3.3, 0.95, 20};
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.95,0.9])";
		};
		class Van_02_Door_Rear_Open
		{
			loop = 0;
			sound[] = {"sound1", 0.25, "sound2", 0.25, "sound3", 0.25, "sound4", 0.25};
			sound1[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Rear_Open_01", 3.4, 1, 20};
			sound2[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Rear_Open_01", 3.3, 0.95, 20};
			sound3[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Rear_Open_02", 3.4, 1, 20};
			sound4[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Rear_Open_03", 3.4, 1, 20};
			terminate = 0;
			trigger = "direction * (phase factor[0.05,0.10])";
		};
	};
	class Van_02_Door_Slide
	{
		class Door_Slide
		{
			loop = 0;
			sound[] = {"sound1", 0.225, "sound2", 0.225, "sound3", 0.1, "sound4", 0.225, "sound5", 0.225};
			sound1[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Slide_01", 1.5, 1, 20};
			sound2[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Slide_01", 1.4, 0.95, 20};
			sound3[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Slide_02", 1.5, 1, 20};
			sound4[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Slide_03", 1.5, 1, 20};
			sound5[] = {"A3\Sounds_F_Orange\vehicles\soft\Van_02\Van_02_Door_Slide_04", 1.5, 1, 20};
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
		};
	};
};
