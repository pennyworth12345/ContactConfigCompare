class CfgSound3DProcessors
{
	class Bird3DProcessingType
	{
		innerRange = 0;
		radius = 3;
		range = 15;
		rangeCurve = "LinearCurve";
		type = "emitter";
	};
	class Coast3DProcessingType
	{
		radius = 7;
		reference = "camera";
		type = "surround_panner";
		volumeAll = "coast * coast / 2";
	};
	class default3DProcessingType
	{
		innerRange = 0;
		radius = 3;
		range = 15;
		type = "emitter";
	};
	class defaultLongPannerProcessingType
	{
		innerRange = 5;
		range = 22;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class defaultShortPannerProcessingType
	{
		innerRange = 1;
		range = 5;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class Drone_01_Movement_Short_3DProcessingType
	{
		innerRange = 10;
		radius = 5;
		range = 10;
		type = "emitter";
	};
	class DroneMovement3DProcessingType
	{
		innerRange = 10;
		radius = 5;
		range = 300;
		rangeCurve = "InverseSquare2Curve";
		type = "emitter";
	};
	class DronePuzzleFeedback3DProcessingType
	{
		innerRange = 10;
		range = 400;
		rangeCurve = "InverseSquare2Curve";
		type = "emitter";
	};
	class ExplosionDebris3DProcessingType
	{
		innerRange = 0;
		range = 30;
		rangeCurve = "InverseSquare2Curve";
		type = "panner";
	};
	class ExplosionHeavy3DProcessingType
	{
		innerRange = 0;
		range = 1500;
		rangeCurve = "InverseSquare2Curve";
		type = "panner";
	};
	class ExplosionHeavyTail3DProcessingType
	{
		innerRange = 10;
		range = 400;
		rangeCurve = "InverseSquare2Curve";
		type = "panner";
	};
	class ExplosionLight3DProcessingType
	{
		innerRange = 0;
		range = 100;
		rangeCurve = "InverseSquare2Curve";
		type = "panner";
	};
	class ExplosionLightTail3DProcessingType
	{
		innerRange = 0;
		range = 200;
		rangeCurve = "InverseSquare2Curve";
		type = "panner";
	};
	class ExplosionMedium3DProcessingType
	{
		innerRange = 0;
		range = 1500;
		rangeCurve = "InverseSquare2Curve";
		type = "panner";
	};
	class ExplosionMediumTail3DProcessingType
	{
		innerRange = 10;
		range = 400;
		rangeCurve = "InverseSquare2Curve";
		type = "panner";
	};
	class Footsteps3DProcessingType
	{
		innerRange = 1;
		radius = 1;
		range = 3;
		type = "panner";
	};
	class FootstepsIntRev3DProcessingType
	{
		innerRange = 0.1;
		range = 8;
		rangeCurve = "InverseSquare1Curve";
		type = "panner";
	};
	class Forest_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeAll = "forest";
	};
	class ForestDay_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeAll = "forest * (trees factor [0.6, 1])";
	};
	class ForestEdge_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeAll = 1;
	};
	class ForestNight_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeAll = 1;
	};
	class ForestRain_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeAll = 1;
	};
	class ForestWind_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeAll = "forest + (0.5*meadow)";
	};
	class JetExt_Close_3DProcessingType
	{
		innerRange = 0;
		range = 100;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class JetExt_Distant_3DProcessingType
	{
		innerRange = 0;
		range = 800;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class JetExt_Middle_3DProcessingType
	{
		innerRange = 0;
		range = 550;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class Launcher3DProcessingType
	{
		innerRange = 5;
		range = 30;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class MeadowWind_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeAll = "meadow + (0.5*forest) + (0.5*trees)";
	};
	class Movement3DProcessingType
	{
		innerRange = 4;
		radius = 3;
		range = 15;
		type = "panner";
	};
	class Offroad_Pa_3DProcessingType
	{
		innerRange = 1;
		range = 1;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class PlaneExt_Distant_3DProcessingType
	{
		innerRange = 0;
		range = 2000;
		rangeCurve = "InverseSquare2Curve";
		type = "panner";
	};
	class PlaneExt_Middle_3DProcessingType
	{
		innerRange = 0;
		range = 500;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class PLant3DProcessingType
	{
		innerRange = 8;
		radius = 2;
		range = 20;
		rangeCurve = "Smooth1Curve";
		type = "emitter";
	};
	class Rain_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeAll = 1;
	};
	class Rain_Center_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeFrontLeft = 1;
		volumeFrontRearLeft = 0;
		volumeFrontRearRight = 0;
		volumeFrontRight = 1;
	};
	class RainRoofLarge3DProcessingType
	{
		innerRange = 5;
		range = 11;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class RainRoofMedium3DProcessingType
	{
		innerRange = 3;
		range = 9;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class RainRoofSmall3DProcessingType
	{
		innerRange = 1;
		range = 6;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class Sfx_SonicBoom_3DProcessingType
	{
		innerRange = 0;
		range = 800;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class ShowerCenter3DProcessingType
	{
		innerRange = 1;
		radius = 2;
		range = 15;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class ShowerNozzle3DProcessingType
	{
		innerRange = 0;
		radius = 2;
		range = 0.1;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class SmallPineTree3DProcessingType
	{
		innerRange = 0;
		radius = 0.25;
		range = 2;
		rangeCurve = "LinearCurve";
		type = "panner";
	};
	class SonicCrackTail3DProcessingType
	{
		innerRange = 0;
		range = 50;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class SpotFx3DProcessingType
	{
		innerRange = 0;
		radius = 2;
		range = 1;
		rangeCurve = "Smooth1Curve";
		type = "emitter";
	};
	class StratisForest_3DProcessingType
	{
		radius = 7;
		reference = "camera";
		type = "surround_panner";
		volumeAll = "forest";
	};
	class Testtones3DProcessingType
	{
		innerRange = 0;
		range = 0;
		type = "panner";
	};
	class Thunder3DProcessingType
	{
		innerRange = 300;
		range = 3000;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class Tree3DProcessingType
	{
		innerRange = 0;
		radius = 1;
		range = 5;
		rangeCurve = "LinearCurve";
		type = "panner";
	};
	class TreeNarrow3DProcessingType
	{
		innerRange = 8;
		radius = 3;
		range = 20;
		rangeCurve = "Smooth1Curve";
		type = "emitter";
	};
	class TreeWide3DProcessingType
	{
		innerRange = 0;
		range = 17;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class Van_02_Eng_Int_Front_3DProcessingType
	{
		radius = 10;
		reference = "vehicle";
		type = "surround_panner";
		volumeBackLeft = 0;
		volumeBackRight = 0;
		volumeFrontLeft = 1;
		volumeFrontRight = 1;
	};
	class Van_02_Tires_Int_Front_3DProcessingType
	{
		radius = 10;
		reference = "vehicle";
		type = "surround_panner";
		volumeBackLeft = 0;
		volumeBackRight = 0;
		volumeFrontLeft = 1;
		volumeFrontRight = 1;
	};
	class Van_Ext_3DProcessingType
	{
		innerRange = 10;
		radius = 5;
		range = 10;
		type = "emitter";
	};
	class VehicleExt_3DProcessingType
	{
		innerRange = 10;
		radius = 5;
		range = 10;
		type = "emitter";
	};
	class VehicleExt_Engine_3DProcessingType
	{
		innerRange = 2;
		range = 6;
		type = "panner";
	};
	class VehicleInt_Back_3DProcessingType
	{
		radius = 10;
		reference = "vehicle";
		type = "surround_panner";
		volumeBackLeft = 1;
		volumeBackRight = 1;
		volumeFrontLeft = 0.3;
		volumeFrontRight = 0.3;
	};
	class VehicleInt_Front_3DProcessingType
	{
		radius = 10;
		reference = "vehicle";
		type = "surround_panner";
		volumeBackLeft = 0.3;
		volumeBackRight = 0.3;
		volumeFrontLeft = 1;
		volumeFrontRight = 1;
	};
	class VehicleInt_Middle_3DProcessingType
	{
		radius = 10;
		reference = "vehicle";
		type = "surround_panner";
		volumeBackLeft = 1;
		volumeBackRight = 1;
		volumeFrontLeft = 1;
		volumeFrontRight = 1;
	};
	class WeaponHeavyShot3DProcessingType
	{
		innerRange = 0;
		range = 15;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class WeaponHeavyShotTail3DProcessingType
	{
		innerRange = 20;
		range = 300;
		rangeCurve = "InverseSquare2Curve";
		type = "panner";
	};
	class WeaponInteriorShotTail3DProcessingType
	{
		innerRange = 5;
		range = 10;
		rangeCurve = "InverseSquare1Curve";
		type = "panner";
	};
	class WeaponLightShot3DProcessingType
	{
		innerRange = 0;
		range = 5;
		rangeCurve = "Smooth1Curve";
		type = "panner";
	};
	class WeaponLightShotTail3DProcessingType
	{
		innerRange = 5;
		range = 100;
		rangeCurve = "InverseSquare1Curve";
		type = "panner";
	};
	class WeaponMediumShot3DProcessingType
	{
		innerRange = 0;
		range = 5;
		rangeCurve = "LinearCurve";
		type = "panner";
	};
	class WeaponMediumShotTail3DProcessingType
	{
		innerRange = 5;
		range = 160;
		rangeCurve = "InverseSquare1Curve";
		type = "panner";
	};
	class Wind_Heavy_Filler_3DProcessingType
	{
		radius = 10;
		reference = "camera";
		type = "surround_panner";
		volumeFrontLeft = 0.8;
		volumeFrontRearLeft = 1;
		volumeFrontRearRight = 1;
		volumeFrontRight = 0.8;
	};
};
