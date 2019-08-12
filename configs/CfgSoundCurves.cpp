class CfgSoundCurves
{
	class CannonCloseShotCurve
	{
		points[] = {{0, 0.9751}, {0.1, 0.6332}, {0.2, 0.4307}, {0.3, 0.3009}, {0.4, 0.2128}, {0.5, 0.1503}, {0.6, 0.1043}, {0.7, 0.0695}, {0.8, 0.0426}, {0.9, 0.0213}, {1, 0.0041}};
	};
	class CannonMidShotCurve
	{
		points[] = {{0, 0.9751}, {0.1, 0.6332}, {0.2, 0.4307}, {0.3, 0.3009}, {0.4, 0.2128}, {0.5, 0.1503}, {0.6, 0.1043}, {0.7, 0.0695}, {0.8, 0.0426}, {0.9, 0.0213}, {1, 0.0041}};
	};
	class closeShotCurve
	{
		points[] = {{0, 1}, {0.1, 0.5613}, {0.2, 0.3502}, {0.3, 0.2309}, {0.4, 0.1569}, {0.5, 0.108}, {0.6, 0.0739}, {0.7, 0.0493}, {0.8, 0.0308}, {0.9, 0.0167}, {1, 0}};
	};
	class Constant1Curve
	{
		points[] = {{0, 1}, {1, 1}};
	};
	class defaultAmpAttenuationCurve
	{
		points[] = {{0, 1}, {0.01, 0.7}, {0.035, 0.45}, {0.085, 0.25}, {0.14, 0.15}, {0.22, 0.09}, {0.325, 0.05}, {0.45, 0.02}, {0.7, 0.01}, {1, 0}};
	};
	class defaultLFECurve
	{
		points[] = {{0, 0.55}, {0.0625, 0.25}, {0.125, 0.1}, {0.25, 0.05}, {1, 0}};
	};
	class defaultWeaponAmpAttenuationCurve
	{
		points[] = {{0, 1}, {0.0025, 0.7}, {0.00875, 0.45}, {0.02125, 0.25}, {0.035, 0.15}, {0.08125, 0.1}, {0.175, 0.075}, {0.7, 0.01}, {1, 0}};
	};
	class InsectCurve
	{
		points[] = {{0, 1}, {0.01, 0.7}, {0.035, 0.5}, {0.085, 0.3}, {0.14, 0.2}, {0.22, 0.18}, {0.325, 0.1}, {0.45, 0.04}, {0.7, 0.02}, {1, 0}};
	};
	class InverseSquare1Curve
	{
		points[] = {{0, 0.9751}, {0.1, 0.6332}, {0.2, 0.4307}, {0.3, 0.3009}, {0.4, 0.2128}, {0.5, 0.1503}, {0.6, 0.1043}, {0.7, 0.0695}, {0.8, 0.0426}, {0.9, 0.0213}, {1, 0.0041}};
	};
	class InverseSquare1CurveFootsteps
	{
		points[] = {{0, 0.616}, {0.1, 0.4458}, {0.2, 0.3033}, {0.3, 0.2119}, {0.4, 0.1498}, {0.5, 0.1058}, {0.6, 0.0733}, {0.7, 0.0489}, {0.8, 0.03}, {0.9, 0.015}, {1, 0.0029}};
	};
	class InverseSquare2Curve
	{
		points[] = {{0, 1}, {0.05, 0.615}, {0.1, 0.4194}, {0.15, 0.3015}, {0.2, 0.225}, {0.25, 0.1725}, {0.3, 0.135}, {0.35, 0.1072}, {0.4, 0.0861}, {0.45, 0.0697}, {0.5, 0.0566}, {0.6, 0.0375}, {0.7, 0.0244}, {0.8, 0.015}, {0.9, 0.0081}, {1, 0}};
	};
	class InverseSquare3Curve
	{
		points[] = {{0, 1}, {0.01, 0.7886}, {0.02, 0.6394}, {0.03, 0.5309}, {0.04, 0.4496}, {0.05, 0.387}, {0.07, 0.2983}, {0.1, 0.2175}, {0.13, 0.169}, {0.2, 0.1096}, {0.4, 0.0533}, {0.6, 0.0315}, {0.8, 0.0168}, {1, 0}};
	};
	class InverseSquare4Curve
	{
		points[] = {{0, 1}, {0.0025, 0.7735}, {0.005, 0.6219}, {0.0075, 0.5142}, {0.01, 0.435}, {0.015, 0.3284}, {0.02, 0.2619}, {0.025, 0.2176}, {0.035, 0.1639}, {0.05, 0.1233}, {0.07, 0.0976}, {0.09, 0.0842}, {0.15, 0.0663}, {0.2, 0.0591}, {0.3, 0.0493}, {0.4, 0.0415}, {0.5, 0.0343}, {0.6, 0.0274}, {0.7, 0.0205}, {0.8, 0.0137}, {0.9, 0.007}, {1, 0}};
	};
	class LinearCurve
	{
		points[] = {{0, 1}, {1, 0}};
	};
	class LinearReverseCurve
	{
		points[] = {{0, 0}, {1, 1}};
	};
	class LogReverse1Curve
	{
		points[] = {{0, 1}, {0.1, 0.9573}, {0.2, 0.912}, {0.3, 0.8615}, {0.4, 0.8042}, {0.5, 0.7383}, {0.6, 0.6605}, {0.7, 0.5658}, {0.8, 0.4443}, {0.9, 0.2752}, {1, 0}};
	};
	class Smooth1Curve
	{
		points[] = {{0, 1}, {0.1, 0.98}, {0.2, 0.92}, {0.3, 0.8}, {0.4, 0.65}, {0.5, 0.5}, {0.6, 0.35}, {0.7, 0.2}, {0.8, 0.08}, {0.9, 0.02}, {1, 0}};
	};
};