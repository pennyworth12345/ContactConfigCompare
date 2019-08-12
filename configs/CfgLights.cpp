class CfgLights
{
	class BigFireLight: ObjectDestructionLight
	{
		intensity = "25000 * (power interpolate [0.1, 1.0, 0.7, 1.0])";
	};
	class ChemLight_Blue: Chemlight_Green
	{
		color[] = {0, 0.6, 1, 1};
		diffuse[] = {0, 0.6, 1};
	};
	class Chemlight_Green
	{
		ambient[] = {0, 0, 0, 0};
		brightness = 1;
		color[] = {0.2, 1, 0, 1};
		diffuse[] = {0.02, 0.1, 0};
		drawLight = 0;
		intensity = 4000;
		position[] = {0, 0, 0};
		class Attenuation
		{
			constant = 1;
			linear = 0;
			quadratic = 5;
			start = 0;
		};
	};
	class Chemlight_Red: Chemlight_Green
	{
		color[] = {1, 0, 0.025, 1};
		diffuse[] = {0.1, 0, 0.0025};
	};
	class ChemLight_Yellow: Chemlight_Green
	{
		color[] = {1, 0.6, 0, 1};
		diffuse[] = {1, 0.6, 0};
	};
	class ClusterFlyLight
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		color[] = {1, 0.8, 0.6};
		diffuse[] = {1, 0.8, 0.6};
		flareMaxDistance = 600;
		flareSize = 1;
		intensity = 40;
		position[] = {0, 0, 0};
		size = 1;
		useFlare = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 10;
			hardLimitStart = 5;
			linear = 0;
			quadratic = 0.2;
			start = 4;
		};
	};
	class ClusterLight
	{
		ambient[] = {1, 0.6, 0.4, 0.001};
		blinking = 0;
		color[] = {1, 0.6, 0.4};
		dayLight = 1;
		diffuse[] = {1, 0.6, 0.4};
		flareMaxDistance = 100;
		flareSize = 10;
		intensity = 10000;
		position[] = {0, 4.5, 0};
		size = 1;
		useFlare = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 2000;
			hardLimitStart = 1000;
			linear = 0;
			quadratic = 0.2;
			start = 4;
		};
	};
	class CM_Light
	{
		ambient[] = {1500, 1200, 1000};
		blinking = 1;
		brightness = 100;
		color[] = {1500, 1200, 1000};
		daylight = 1;
		diffuse[] = {0.4, 0.28, 0.15};
		drawLight = 0;
		flareMaxDistance = 2600;
		flareSize = 75;
		intensity = 450;
		position[] = {0, 0, 0};
		size = 1;
		useFlare = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 3000;
			hardLimitStart = 1500;
			linear = 0;
			quadratic = 0.3;
			start = 0.5;
		};
	};
	class CmeasuresLight
	{
		ambient[] = {0.8, 0.65, 0.5};
		brightness = 0.75;
		color[] = {1, 0.6, 0.5};
		diffuse[] = {1, 1, 1};
		position[] = {0, 0, 0};
	};
	class CruiseMissileLight
	{
		ambient[] = {0, 0, 0};
		blinking = 0;
		brightness = "18 * fireIntensity";
		color[] = {1, 0.6, 0.3};
		dayLight = 1;
		diffuse[] = {1, 0.25, 0.05};
		drawLight = 1;
		flareMaxDistance = 2600;
		flareSize = 1.5;
		intensity = 25000;
		size = 1;
		useFlare = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 200;
			hardLimitStart = 100;
			linear = 0;
			quadratic = 1;
			start = 0;
		};
	};
	class ExploLight
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 200;
		color[] = {1, 0.6, 0.4};
		diffuse[] = {1, 0.6, 0.4};
		drawLight = 0;
		intensity = 100000;
		name = "Explosion Car";
		position[] = {0, 4.5, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 2000;
			hardLimitStart = 1000;
			linear = 0;
			quadratic = 0.2;
			start = 4;
		};
	};
	class ExploLightMed
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 1;
		color[] = {1, 0.28, 0.05};
		diffuse[] = {1, 0.28, 0.05};
		drawLight = 0;
		intensity = 1200;
		position[] = {0, 3.5, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 1600;
			hardLimitStart = 800;
			linear = 0;
			quadratic = 5;
			start = 3;
		};
	};
	class ExplosionLight
	{
		ambient[] = {0.45, 0.22, 0};
		brightness[] = {"fireIntensity", 0, 0.01};
		color[] = {1, 1, 1};
	};
	class FiredLightCannon: FiredLightMed
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 1;
		color[] = {0.937, 0.631, 0.259};
		diffuse[] = {0.937, 0.631, 0.259};
		drawLight = 0;
		intensity = 80000;
		position[] = {"positionX + (directionLocalX * 1.3)", "positionY + (directionLocalY * 1.3)", "positionZ + (directionLocalZ * 1.3)"};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 600;
			hardLimitStart = 300;
			linear = 0;
			quadratic = 2;
			start = 0;
		};
	};
	class FiredLightLauncher
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 1;
		color[] = {1, 0.68, 0.45};
		diffuse[] = {1, 0.68, 0.45};
		drawLight = 0;
		intensity = 1500;
		position[] = {0, 0, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 600;
			hardLimitStart = 300;
			linear = 0;
			quadratic = 2;
			start = 0;
		};
	};
	class FiredLightLauncherSmall
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 1;
		color[] = {1, 0.68, 0.45};
		diffuse[] = {1, 0.68, 0.45};
		drawLight = 0;
		intensity = 550;
		position[] = {0, 0, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 600;
			hardLimitStart = 300;
			linear = 0;
			quadratic = 2;
			start = 0;
		};
	};
	class FiredLightMed
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 1;
		color[] = {1, 0.68, 0.45};
		diffuse[] = {1, 0.68, 0.45};
		drawLight = 0;
		intensity = 80000;
		position[] = {0, 1.8, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 600;
			hardLimitStart = 300;
			linear = 0;
			quadratic = 2;
			start = 0;
		};
	};
	class FiredLightSmall
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 1;
		color[] = {1, 0.9, 0.6};
		diffuse[] = {1, 0.9, 0.6};
		drawLight = 0;
		intensity = 300;
		position[] = {0, 1.5, 0};
		size = 1;
		class Attenuation
		{
			constant = 10;
			hardLimitEnd = 1000;
			hardLimitStart = 500;
			linear = 0;
			quadratic = 150;
			start = 0.1;
		};
	};
	class FlareLight
	{
		ambient[] = {"colorR", "colorG", "colorB"};
		blinking = 0;
		color[] = {"colorR", "colorG", "colorB"};
		dayLight = 1;
		diffuse[] = {"colorR", "colorG", "colorB"};
		flareMaxDistance = 600;
		flareSize = 5;
		intensity = 1e+007;
		position[] = {0, 0, 0};
		size = 1;
		useFlare = 1;
		class Attenuation
		{
			constant = 0.1;
			hardLimitEnd = 0.5;
			hardLimitStart = 0.01;
			linear = 1;
			quadratic = 1;
			start = 0;
		};
	};
	class GrenadeExploLight
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 1;
		brightness = 10;
		color[] = {1, 0.6, 0.4};
		diffuse[] = {1, 0.6, 0.4};
		drawLight = 0;
		intensity = 10000;
		position[] = {0, 3.5, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 1000;
			hardLimitStart = 500;
			linear = 0;
			quadratic = 2.2;
			start = 0;
		};
	};
	class MediumFireLight: ObjectDestructionLightSmall
	{
		intensity = "3500 * (power interpolate [0.1, 1.0, 0.7, 1.0])";
	};
	class MineExploLight
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 1;
		brightness = 20;
		color[] = {0.4, 0.28, 0.15};
		diffuse[] = {0.4, 0.28, 0.15};
		drawLight = 0;
		intensity = 45000;
		position[] = {0, 0, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 3000;
			hardLimitStart = 1500;
			linear = 0;
			quadratic = 0.3;
			start = 0.5;
		};
	};
	class NukeLight
	{
		ambient[] = {1500, 1200, 1000};
		blinking = 1;
		brightness = 1e+007;
		color[] = {1500, 1200, 1000};
		daylight = 1;
		diffuse[] = {0.4, 0.28, 0.15};
		drawLight = 0;
		intensity = 450000;
		position[] = {0, 0, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 3000;
			hardLimitStart = 1500;
			linear = 0;
			quadratic = 0.3;
			start = 0.5;
		};
	};
	class ObjectDestructionLight
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 35;
		color[] = {1, 0.4, 0.15};
		diffuse[] = {1, 0.4, 0.15};
		drawLight = 0;
		intensity = 25000;
		name = "Fire Car";
		position[] = {0, 0, 0};
		size = 0.5;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 800;
			hardLimitStart = 400;
			linear = 0;
			quadratic = 0.2;
			start = 0;
		};
	};
	class ObjectDestructionLightSmall
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 10;
		color[] = {1, 0.45, 0.15};
		diffuse[] = {1, 0.45, 0.15};
		drawLight = 0;
		intensity = 3500;
		name = "Fire Car";
		position[] = {0, 1, 0};
		class Attenuation
		{
			constant = 3;
			linear = 0;
			quadratic = 22;
			start = 1;
		};
	};
	class RocketLight
	{
		ambient[] = {0, 0, 0};
		blinking = 0;
		brightness = "18 * fireIntensity";
		color[] = {1, 0.6, 0.3};
		diffuse[] = {1, 0.25, 0.05};
		drawLight = 0;
		intensity = 25000;
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 200;
			hardLimitStart = 100;
			linear = 0;
			quadratic = 1;
			start = 0;
		};
	};
	class ScudLight
	{
		ambient[] = {0.8, 0.6, 0.2};
		brightness = 0.1;
		color[] = {1, 0.5, 0.2};
		diffuse[] = {1, 1, 1};
		position[] = {"positionX", "positionY", "positionZ"};
	};
	class SmallFireLight
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 10;
		color[] = {1, 0.45, 0.15};
		diffuse[] = {1, 0.45, 0.15};
		drawLight = 0;
		intensity = "2500*(power interpolate[0.1, 1.0, 0.4, 1.0])";
		name = "Light Bonfire";
		position[] = {0, 0.5, 0};
		class Attenuation
		{
			constant = 3;
			linear = 0;
			quadratic = 32;
			start = 0;
		};
	};
	class SmallFirePlaceLight
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 10;
		color[] = {1, 0.45, 0.15};
		diffuse[] = {1, 0.45, 0.15};
		drawLight = 0;
		intensity = "1200*(power interpolate[0.1, 1.0, 0.4, 1.0])";
		name = "Light Bonfire";
		position[] = {0, 0.4, 0};
		class Attenuation
		{
			constant = 3;
			linear = 0;
			quadratic = 22;
			start = 0;
		};
	};
	class SmallFlameLight
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 10;
		color[] = {1, 0.5, 0.2};
		diffuse[] = {1, 0.5, 0.2};
		drawLight = 0;
		intensity = 3000;
		name = "Light Flame";
		position[] = {0, 0, 0};
		class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 5;
			start = 0;
		};
	};
	class SparksLight
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 0.1;
		color[] = {1, 0.8, 0.8};
		diffuse[] = {1, 0.8, 0.8};
		drawLight = 0;
		intensity = 30;
		position[] = {0, 0, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 4;
			hardLimitStart = 2;
			linear = 0;
			quadratic = 40;
			start = 0.05;
		};
	};
	class SparksLightSabot
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 0;
		brightness = 50;
		color[] = {1, 0.8, 0.8};
		diffuse[] = {1, 0.8, 0.8};
		drawLight = 0;
		intensity = 1000;
		position[] = {0, 0, 0};
		size = 1;
		class Attenuation
		{
			constant = 0;
			hardLimitEnd = 80;
			hardLimitStart = 40;
			linear = 0;
			quadratic = 1;
			start = 0;
		};
	};
	class TrainingMine_light
	{
		ambient[] = {0, 0, 0, 0};
		blinking = 1;
		brightness = 1;
		color[] = {1, 0.6, 0, 1};
		diffuse[] = {1, 0.6, 0};
		drawLight = 0;
		intensity = 4000;
		position[] = {0, 0.2, 0};
		class Attenuation
		{
			constant = 1;
			linear = 0;
			quadratic = 40;
			start = 0;
		};
	};
};
