class CfgSoundEffects
{
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
	class RadioFilterEffects
	{
		class Part0
		{
			bandwidth[] = {1, 2, 1, 1.2};
			center[] = {370, 900, 6000, 10000};
			enabled[] = {1, 0, 1};
			gain[] = {1, 1.58489, 1.58489, 1.77828};
			lim_attack = 5;
			lim_limit = 1;
			lim_release = 50;
		};
		class Part1
		{
			filter_cut_off = 650;
			filter_enabled = 1;
			filter_one_over_Q = 0.5;
		};
		class Part2
		{
			bandwidth[] = {2, 1.9, 2, 2};
			center[] = {100, 250, 900, 5000};
			comp_attack = 1;
			comp_ratio = 0.27;
			comp_relase = 100;
			comp_threshold = 1;
			enabled[] = {1, 0, 0};
			gain[] = {0.125893, 0.125893, 1.58489, 0.707946};
			lim_attack = 1;
			lim_limit = 0.125893;
			lim_release = 500;
		};
	};
	class UnconsciousStateEffect
	{
		class Echo0
		{
			Delay = 50;
			Feedback = 0.15;
			WetDryMix = 0.25;
		};
		class Echo1
		{
			Delay = 100;
			Feedback = 0.2;
			WetDryMix = 0.5;
		};
		class Equalizer0
		{
			bandwidth[] = {1, 1, 1, 1};
			center[] = {100, 800, 2000, 10000};
			gain[] = {1, 0.562341, 0.316228, 0.316228};
		};
		class Equalizer1
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {100, 800, 2000, 10000};
			gain[] = {1, 0.316228, 0.125893, 0.125893};
		};
	};
	class UnderWaterEffects
	{
		class Equalizer
		{
			bandwidth[] = {2, 2, 2, 2};
			center[] = {100, 800, 2000, 10000};
			distance = 3;
			gain[] = {1.41254, 1, 0.177828, 0.125893};
		};
		class Mono
		{
			distance = 1;
		};
	};
	class WeaponsEffects
	{
		class Default
		{
			attack = 1;
			bandwidth[] = {1, 1, 1, 1};
			center[] = {100, 800, 2000, 10000};
			distance = 1;
			frequency = 1;
			gain[] = {1, 1, 1, 1};
			ratio = 1;
			release = 1;
			threshold = 1;
		};
		class DefaultExplosion
		{
			class Begin: Default {};
			class End: Default
			{
				attack = 10;
				distance = 200;
				frequency = 0.9;
				gain[] = {2.51189, 1.41254, 0.316228, 0.125893};
				ratio = 0.6;
				threshold = 0.1;
			};
			class Middle: Default
			{
				attack = 90;
				distance = 100;
				frequency = 0.95;
				gain[] = {1, 1, 0.562341, 0.354813};
				ratio = 0.5;
				threshold = 0.1;
			};
		};
		class DefaultHandGun
		{
			class Begin: Default {};
			class End: Default
			{
				attack = 0;
				distance = 150;
				frequency = 0.9;
				gain[] = {1, 0.562341, 0.316228, 0.125893};
				threshold = 0.01;
			};
			class Middle: Default
			{
				attack = 45;
				distance = 30;
				frequency = 0.95;
				gain[] = {1, 0.794328, 0.501187, 0.316228};
				threshold = 0.316228;
			};
		};
		class DefaultRifle
		{
			class Begin: Default {};
			class End: Default
			{
				attack = 0;
				distance = 200;
				frequency = 0.85;
				gain[] = {1, 0.562341, 0.125893, 0.125893};
				ratio = 0.1;
				threshold = 0.1;
			};
			class Middle: Default
			{
				attack = 40;
				distance = 100;
				frequency = 0.9;
				gain[] = {1, 1, 0.398107, 0.251189};
				ratio = 0.5;
				threshold = 0.1;
			};
		};
	};
};
