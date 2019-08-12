class AttenuationsEffects
{
	class CarAttenuation
	{
		class Echo
		{
			Delay = 50;
			Feedback = 0.1;
			WetDryMix = 0.1;
		};
		class Equalizer0
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {100, 250, 1000, 5000};
			gain[] = {0.630957, 0.562341, 0.398107, 0.316228};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {60, 500, 3000, 8000};
			gain[] = {0.707946, 0.501187, 0.354813, 0.177828};
		};
	};
	class HeliAttenuation
	{
		class Echo
		{
			Delay = 30;
			Feedback = 0.1;
			WetDryMix = 0.1;
		};
		class Equalizer0
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {100, 250, 1000, 5000};
			gain[] = {0.891251, 0.891251, 0.562341, 0.316228};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {50, 500, 2500, 10000};
			gain[] = {1, 1, 1, 1};
		};
	};
	class HeliAttenuationGunner
	{
		class Echo
		{
			Delay = 1;
			Feedback = 0.01;
			WetDryMix = 0.01;
		};
		class Equalizer0
		{
			bandwidth[] = {0.5, 0.5, 0.5, 0.5};
			center[] = {100, 250, 1000, 5000};
			gain[] = {1, 1, 0.891251, 0.707946};
		};
		class Equalizer1
		{
			bandwidth[] = {0.5, 0.5, 0.5, 0.5};
			center[] = {100, 500, 3000, 7000};
			gain[] = {1, 1, 0.794328, 0.707946};
		};
	};
	class HeliAttenuationRamp
	{
		class Echo
		{
			Delay = 1;
			Feedback = 0.01;
			WetDryMix = 0.01;
		};
		class Equalizer0
		{
			bandwidth[] = {0.5, 0.5, 0.5, 0.5};
			center[] = {100, 250, 1000, 5000};
			gain[] = {1, 1, 0.630957, 0.562341};
		};
		class Equalizer1
		{
			bandwidth[] = {0.5, 0.5, 0.5, 0.5};
			center[] = {100, 500, 3000, 7000};
			gain[] = {1, 1, 0.794328, 0.707946};
		};
	};
	class HouseAttenuation
	{
		class Echo
		{
			Delay = 50;
			Feedback = 0.01;
			WetDryMix = 0.1;
		};
		class Equalizer0
		{
			bandwidth[] = {1, 2, 2, 2};
			center[] = {50, 600, 2000, 6000};
			gain[] = {0.707946, 0.891251, 0.562341, 0.398107};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {60, 500, 3000, 15000};
			gain[] = {1, 1, 1, 1};
		};
	};
	class MrapAttenuation
	{
		class Echo
		{
			Delay = 1;
			Feedback = 0;
			WetDryMix = 0;
		};
		class Equalizer0
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {100, 250, 1000, 5000};
			gain[] = {0.891251, 0.891251, 0.794328, 0.398107};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {50, 500, 2500, 10000};
			gain[] = {0.891251, 0.891251, 0.794328, 0.398107};
		};
	};
	class OpenCarAttenuation
	{
		class Echo
		{
			Delay = 1;
			Feedback = 0;
			WetDryMix = 0;
		};
		class Equalizer0
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {100, 250, 1000, 5000};
			gain[] = {1, 1, 1, 1};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {60, 500, 3000, 8000};
			gain[] = {1, 1, 1, 1};
		};
	};
	class OpenHeliAttenuation
	{
		class Echo
		{
			Delay = 1;
			Feedback = 0.01;
			WetDryMix = 0.01;
		};
		class Equalizer0
		{
			bandwidth[] = {0.5, 0.5, 0.5, 0.5};
			center[] = {100, 250, 1000, 5000};
			gain[] = {1, 1, 0.891251, 0.707946};
		};
		class Equalizer1
		{
			bandwidth[] = {0.5, 0.5, 0.5, 0.5};
			center[] = {100, 500, 3000, 7000};
			gain[] = {1, 1, 0.794328, 0.707946};
		};
	};
	class PlaneAttenuation
	{
		class Echo
		{
			Delay = 30;
			Feedback = 0.1;
			WetDryMix = 0.1;
		};
		class Equalizer0
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {100, 250, 1000, 5000};
			gain[] = {0.891251, 0.891251, 0.398107, 0.223872};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {50, 500, 2500, 10000};
			gain[] = {1, 0.794328, 0.354813, 0.0891251};
		};
	};
	class SemiOpenCarAttenuation
	{
		class Echo
		{
			Delay = 10;
			Feedback = 0.1;
			WetDryMix = 0.1;
		};
		class Equalizer0
		{
			bandwidth[] = {1, 1, 1, 1};
			center[] = {100, 250, 1000, 5000};
			gain[] = {1, 0.891251, 0.794328, 0.707946};
		};
		class Equalizer1
		{
			bandwidth[] = {1, 1, 1, 1};
			center[] = {60, 500, 3000, 8000};
			gain[] = {1, 0.891251, 0.794328, 0.707946};
		};
	};
	class SemiOpenCarAttenuation2
	{
		class Echo
		{
			Delay = 10;
			Feedback = 0.1;
			WetDryMix = 0.1;
		};
		class Equalizer0
		{
			bandwidth[] = {1, 1, 1, 1};
			center[] = {100, 250, 1000, 5000};
			gain[] = {1, 0.794328, 0.630957, 0.562341};
		};
		class Equalizer1
		{
			bandwidth[] = {1, 1, 1, 1};
			center[] = {60, 500, 3000, 8000};
			gain[] = {1, 0.794328, 0.630957, 0.562341};
		};
	};
	class SemiOpenHeliAttenuation
	{
		class Echo
		{
			Delay = 1;
			Feedback = 0.01;
			WetDryMix = 0.01;
		};
		class Equalizer0
		{
			bandwidth[] = {0.5, 0.5, 0.5, 0.5};
			center[] = {100, 250, 1000, 5000};
			gain[] = {1, 1, 0.630957, 0.562341};
		};
		class Equalizer1
		{
			bandwidth[] = {0.5, 0.5, 0.5, 0.5};
			center[] = {100, 500, 3000, 7000};
			gain[] = {1, 1, 0.794328, 0.707946};
		};
	};
	class TankAttenuation
	{
		class Echo
		{
			Delay = 1;
			Feedback = 0;
			WetDryMix = 0;
		};
		class Equalizer0
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {100, 250, 2500, 7500};
			gain[] = {0.891251, 0.841395, 0.398107, 0.125893};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {50, 500, 5000, 10000};
			gain[] = {0.891251, 0.841395, 0.398107, 0.125893};
		};
	};
	class TruckAttenuation
	{
		class Echo
		{
			Delay = 1;
			Feedback = 0;
			WetDryMix = 0;
		};
		class Equalizer0
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {100, 250, 1000, 5000};
			gain[] = {1, 0.891251, 0.630957, 0.501187};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {50, 500, 2500, 10000};
			gain[] = {1, 0.891251, 0.794328, 0.501187};
		};
	};
	class UnconsciousState
	{
		class Echo
		{
			Delay = 600;
			Feedback = 0.2;
			WetDryMix = 0.1;
		};
		class Equalizer0
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {500, 2000, 5000, 15000};
			gain[] = {0.501187, 0.316228, 0.199526, 0.125893};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {1000, 2500, 10000, 20000};
			gain[] = {0.398107, 0.251189, 0.158489, 0.125893};
		};
	};
};
