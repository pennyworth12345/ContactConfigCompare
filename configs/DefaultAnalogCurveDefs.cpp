class DefaultAnalogCurveDefs
{
	class AimDown
	{
		curve[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
		deadZone = 0;
	};
	class AimHeadDown
	{
		curve[] = {"Gamma", 1, 2.5};
		deadZone = 0;
	};
	class AimHeadLeft
	{
		curve[] = {"Gamma", 2, 4};
		deadZone = 0;
	};
	class AimHeadRight
	{
		curve[] = {"Gamma", 2, 4};
		deadZone = 0;
	};
	class AimHeadUp
	{
		curve[] = {"Gamma", 1, 2.5};
		deadZone = 0;
	};
	class AimLeft
	{
		curve[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, 0.9, 0.99, 1.8, 1, 3}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 1.5, 1, 2.5}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 0.9, 1, 1.2}};
		deadZone = 0;
	};
	class AimRight
	{
		curve[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, 0.9, 0.99, 1.8, 1, 3}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 1.5, 1, 2.5}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 0.9, 1, 1.2}};
		deadZone = 0;
	};
	class AimUp
	{
		curve[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
		deadZone = 0;
	};
	class CarAimDown
	{
		curve[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 1.8, 1, 5.4}, {0.7, 0.2, 0.03, 0.99, 1.2, 1, 4.8}, {0.3, 0.2, 0.02, 0.99, 1.8, 1, 3}};
		deadZone = 0;
	};
	class CarAimLeft
	{
		curve[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, 0.9, 0.99, 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
		deadZone = 0;
	};
	class CarAimRight
	{
		curve[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, 0.9, 0.99, 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
		deadZone = 0;
	};
	class CarAimUp
	{
		curve[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 1.8, 1, 5.4}, {0.7, 0.2, 0.03, 0.99, 1.2, 1, 4.8}, {0.3, 0.2, 0.02, 0.99, 1.8, 1, 3}};
		deadZone = 0;
	};
	class CarBack
	{
		curve[] = {"Gamma", 1, 1.5};
		deadZone = 0;
	};
	class CarFastForward
	{
		curve[] = {"Gamma", 1, 1.5};
		deadZone = 0;
	};
	class CarLeft
	{
		curve[] = {"Gamma", 2, 3};
		deadZone = 0;
	};
	class CarRight
	{
		curve[] = {"Gamma", 2, 3};
		deadZone = 0;
	};
	class HeliBack
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class HeliCyclicLeft
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class HeliCyclicRight
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class HeliDown
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class HeliFastForward
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class HeliRudderLeft
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class HeliRudderRight
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class HeliUp
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class MoveBack
	{
		curve[] = {"Gamma", 1, 4};
		deadZone = 0.1;
	};
	class MoveFastForward
	{
		curve[] = {"Gamma", 1, 4};
		deadZone = 0.1;
	};
	class SeagullBack
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class SeagullDown
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class SeagullFastForward
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class SeagullUp
	{
		curve[] = {"Gamma", 1, 1};
		deadZone = 0;
	};
	class TurnLeft
	{
		curve[] = {"Gamma", 1, 2};
		deadZone = 0.1;
	};
	class TurnRight
	{
		curve[] = {"Gamma", 1, 2};
		deadZone = 0.1;
	};
};
