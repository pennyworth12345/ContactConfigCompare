class CfgVideoOptions
{
	class AnisotropicFiltering
	{
		class Disabled
		{
			text = "Disabled";
			value = 0;
		};
		class High
		{
			text = "Very High";
			value = 12;
		};
		class Low
		{
			text = "Standard";
			value = 4;
		};
		class Normal
		{
			text = "High";
			value = 8;
		};
		class VeryHigh
		{
			text = "Ultra";
			value = 16;
		};
		class VeryLow
		{
			text = "Low";
			value = 2;
		};
	};
	class ATOCQuality
	{
		class All: Disabled
		{
			grass = 1;
			newTrees = 1;
			oldTrees = 1;
			other = 1;
			text = "All trees + grass";
		};
		class Disabled
		{
			grass = 0;
			newTrees = 0;
			oldTrees = 0;
			other = 0;
			text = "Disabled";
		};
		class Grass: Disabled
		{
			grass = 1;
			other = 1;
			text = "Grass";
		};
		class NewTree: Disabled
		{
			newTrees = 1;
			other = 1;
			text = "Arrowhead trees";
		};
		class NewTreeGrass: Disabled
		{
			grass = 1;
			newTrees = 1;
			other = 1;
			text = "Arrowhead trees + grass";
		};
		class OldTree: Disabled
		{
			oldTrees = 1;
			other = 1;
			text = "Arma 2 trees";
		};
		class OldTreeGrass: Disabled
		{
			grass = 1;
			oldTrees = 1;
			other = 1;
			text = "Arma 2 trees + grass";
		};
		class OldTreeNewTree: Disabled
		{
			newTrees = 1;
			oldTrees = 1;
			other = 1;
			text = "All trees";
		};
	};
	class Benchmark
	{
		cpuDefaultResult = 1000;
		cpuResultLimits[] = {250, 180, 130, 100, 0};
		gpuDefaultResult = 1000;
		gpuResultLimits[] = {300, 150, 100, 45, 0};
	};
	class CloudQuality
	{
		class High
		{
			text = "Very High";
			value = 96;
		};
		class Low
		{
			text = "Standard";
			value = 48;
		};
		class Normal
		{
			text = "High";
			value = 64;
		};
		class VeryHigh
		{
			text = "Ultra";
			value = 128;
		};
		class VeryLow
		{
			text = "Low";
			value = 32;
		};
	};
	class DefaultSettings
	{
		anisotropicFiltering = "Normal";
		atocQuality = "All";
		cloudQuality = "Normal";
		dynamicLights = "Normal";
		hdr = "Normal";
		multiSampleCount = 4;
		objectsQuality = "Normal";
		objectVisibility = 1200;
		particles = "Normal";
		pip = "Normal";
		postProcessQuality = 3;
		ppaa = "Disabled";
		ppaaAlternative = "Disabled";
		ppBloom = 1;
		ppCausticsQuality = "Enabled";
		ppDOF = 1;
		ppRadialBlur = 1;
		ppRotBlur = 1;
		ppSharpen = 0;
		ppSSAOQuality = "HDAOLow";
		ppSSAOQualityAlternative = "HDAOLow";
		shadowQuality = "Normal";
		shadowVisibility = 100;
		terrainQuality = "Normal";
		text = "Default";
		textureQuality = "Normal";
		visibility = 1600;
		waterSSReflectionsQuality = "Disabled";
	};
	class DynamicLights
	{
		class High
		{
			text = "Very High";
			value = 12;
		};
		class Low
		{
			text = "Standard";
			value = 6;
		};
		class Normal
		{
			text = "High";
			value = 8;
		};
		class VeryHigh
		{
			text = "Ultra";
			value = 16;
		};
		class VeryLow
		{
			text = "Low";
			value = 4;
		};
	};
	class HDR
	{
		class Low
		{
			text = "Low";
			value = 8;
		};
		class Normal
		{
			text = "Standard";
			value = 16;
		};
	};
	class ObjectsQuality
	{
		class High
		{
			text = "Very High";
			value = 1.3e+006;
		};
		class Low
		{
			text = "Standard";
			value = 600000;
		};
		class Normal
		{
			text = "High";
			value = 900000;
		};
		class VeryHigh
		{
			text = "Ultra";
			value = 1.8e+006;
		};
		class VeryLow
		{
			text = "Low";
			value = 400000;
		};
	};
	class ObjectsVisibility
	{
		maxValue = 12000;
		minValue = 500;
	};
	class OverallSettings
	{
		class High: DefaultSettings
		{
			anisotropicFiltering = "High";
			atocQuality = "All";
			cloudQuality = "High";
			dynamicLights = "High";
			hdr = "Normal";
			multiSampleCount = 4;
			objectsQuality = "High";
			objectVisibility = 1900;
			particles = "High";
			pip = "Normal";
			postProcessQuality = 4;
			ppaa = "CMAANormal";
			ppaaAlternative = "FXAANormal";
			ppBloom = 1;
			ppCausticsQuality = "Enabled";
			ppDOF = 1;
			ppRadialBlur = 1;
			ppRotBlur = 1;
			ppSharpen = 0.5;
			ppSSAOQuality = "HBAOPlusMedium";
			ppSSAOQualityAlternative = "HDAOStandard";
			shadowQuality = "High";
			shadowVisibility = 100;
			terrainQuality = "Normal";
			text = "Very High";
			textureQuality = "High";
			visibility = 3000;
			waterSSReflectionsQuality = "Normal";
		};
		class Low: DefaultSettings
		{
			anisotropicFiltering = "Low";
			atocQuality = "Disabled";
			cloudQuality = "Low";
			dynamicLights = "Low";
			hdr = "Normal";
			multiSampleCount = 1;
			objectsQuality = "Low";
			objectVisibility = 1300;
			particles = "Normal";
			pip = "Low";
			postProcessQuality = 2;
			ppaa = "Disabled";
			ppaaAlternative = "Disabled";
			ppBloom = 1;
			ppCausticsQuality = "Enabled";
			ppDOF = 1;
			ppRadialBlur = 1;
			ppRotBlur = 1;
			ppSharpen = 0;
			ppSSAOQuality = "Disabled";
			ppSSAOQualityAlternative = "Disabled";
			shadowQuality = "Normal";
			shadowVisibility = 100;
			terrainQuality = "Low";
			text = "Standard";
			textureQuality = "Low";
			visibility = 1600;
			waterSSReflectionsQuality = "Disabled";
		};
		class Normal: DefaultSettings
		{
			anisotropicFiltering = "Normal";
			atocQuality = "All";
			cloudQuality = "Normal";
			dynamicLights = "Normal";
			hdr = "Normal";
			multiSampleCount = 2;
			objectsQuality = "Normal";
			objectVisibility = 1500;
			particles = "Normal";
			pip = "Low";
			postProcessQuality = 3;
			ppaa = "CMAANormal";
			ppaaAlternative = "FXAALow";
			ppBloom = 1;
			ppCausticsQuality = "Enabled";
			ppDOF = 1;
			ppRadialBlur = 1;
			ppRotBlur = 1;
			ppSharpen = 0.5;
			ppSSAOQuality = "HDAOLow";
			ppSSAOQualityAlternative = "HDAOLow";
			shadowQuality = "Normal";
			shadowVisibility = 100;
			terrainQuality = "Normal";
			text = "High";
			textureQuality = "Normal";
			visibility = 2200;
			waterSSReflectionsQuality = "Low";
		};
		class VeryHigh: DefaultSettings
		{
			anisotropicFiltering = "VeryHigh";
			atocQuality = "All";
			cloudQuality = "VeryHigh";
			dynamicLights = "VeryHigh";
			hdr = "Normal";
			multiSampleCount = 8;
			objectsQuality = "VeryHigh";
			objectVisibility = 2300;
			particles = "High";
			pip = "Normal";
			postProcessQuality = 5;
			ppaa = "SMAAHigh";
			ppaaAlternative = "SMAAHigh";
			ppBloom = 1;
			ppCausticsQuality = "Enabled";
			ppDOF = 1;
			ppRadialBlur = 1;
			ppRotBlur = 1;
			ppSharpen = 0.5;
			ppSSAOQuality = "HBAOPlusMedium";
			ppSSAOQualityAlternative = "HDAOHigh";
			shadowQuality = "VeryHigh";
			shadowVisibility = 100;
			terrainQuality = "VeryHigh";
			text = "Ultra";
			textureQuality = "VeryHigh";
			visibility = 3800;
			waterSSReflectionsQuality = "High";
		};
		class VeryLow: DefaultSettings
		{
			anisotropicFiltering = "Disabled";
			atocQuality = "Disabled";
			cloudQuality = "VeryLow";
			dynamicLights = "VeryLow";
			hdr = "Normal";
			multiSampleCount = 1;
			objectsQuality = "VeryLow";
			objectVisibility = 800;
			particles = "Low";
			pip = "VeryLow";
			postProcessQuality = 0;
			ppaa = "Disabled";
			ppaaAlternative = "Disabled";
			ppBloom = 0;
			ppCausticsQuality = "Disabled";
			ppDOF = 0;
			ppRadialBlur = 0;
			ppRotBlur = 0;
			ppSharpen = 0;
			ppSSAOQuality = "Disabled";
			ppSSAOQualityAlternative = "Disabled";
			shadowQuality = "Low";
			shadowVisibility = 100;
			terrainQuality = "Low";
			text = "Low";
			textureQuality = "VeryLow";
			visibility = 1000;
			waterSSReflectionsQuality = "Disabled";
		};
	};
	class Particles
	{
		class High
		{
			highQualityShader = 1;
			numFullSizeParticles = 60;
			particlesHardLimit = 15000;
			particlesSoftLimit = 13000;
			smokeGenMaxDist = 800;
			smokeGenMinDist = 200;
			smokeIntervalCoef = 4;
			smokeSizeCoef = 2;
			smokeZoomCoef = 1.42857;
			text = "High";
		};
		class Low
		{
			highQualityShader = 0;
			numFullSizeParticles = 20;
			particlesHardLimit = 9000;
			particlesSoftLimit = 7000;
			smokeGenMaxDist = 200;
			smokeGenMinDist = 50;
			smokeIntervalCoef = 4;
			smokeSizeCoef = 2;
			smokeZoomCoef = 1.42857;
			text = "Low";
		};
		class Normal
		{
			highQualityShader = 1;
			numFullSizeParticles = 40;
			particlesHardLimit = 12000;
			particlesSoftLimit = 10000;
			smokeGenMaxDist = 400;
			smokeGenMinDist = 100;
			smokeIntervalCoef = 4;
			smokeSizeCoef = 2;
			smokeZoomCoef = 1.42857;
			text = "Standard";
		};
	};
	class PiP
	{
		class Disabled
		{
			text = "Disabled";
			value = 0;
		};
		class High
		{
			text = "Very High";
			value = 1500;
		};
		class Low
		{
			text = "Standard";
			value = 800;
		};
		class Normal
		{
			text = "High";
			value = 1000;
		};
		class VeryHigh
		{
			text = "Ultra";
			value = 2000;
		};
		class VeryLow
		{
			text = "Low";
			value = 500;
		};
	};
	class PPAA
	{
		class CMAANormal
		{
			needsDX11 = 1;
			ppaaLevel = 0;
			ppaaType = 3;
			textMethod = "CMAA";
			textQuality = "";
		};
		class Disabled
		{
			needsDX11 = 0;
			ppaaLevel = 0;
			ppaaType = 0;
			textMethod = "Disabled";
			textQuality = "";
		};
		class FXAAHigh
		{
			needsDX11 = 0;
			ppaaLevel = 2;
			ppaaType = 1;
			textMethod = "FXAA";
			textQuality = "Very High";
		};
		class FXAALow
		{
			needsDX11 = 0;
			ppaaLevel = 0;
			ppaaType = 1;
			textMethod = "FXAA";
			textQuality = "Standard";
		};
		class FXAANormal
		{
			needsDX11 = 0;
			ppaaLevel = 1;
			ppaaType = 1;
			textMethod = "FXAA";
			textQuality = "High";
		};
		class FXAAVeryHigh
		{
			needsDX11 = 0;
			ppaaLevel = 3;
			ppaaType = 1;
			textMethod = "FXAA";
			textQuality = "Ultra";
		};
		class SMAAHigh
		{
			needsDX11 = 0;
			ppaaLevel = 2;
			ppaaType = 2;
			textMethod = "SMAA";
			textQuality = "Very High";
		};
		class SMAALow
		{
			needsDX11 = 0;
			ppaaLevel = 0;
			ppaaType = 2;
			textMethod = "SMAA";
			textQuality = "Standard";
		};
		class SMAANormal
		{
			needsDX11 = 0;
			ppaaLevel = 1;
			ppaaType = 2;
			textMethod = "SMAA";
			textQuality = "High";
		};
		class SMAAVeryHigh
		{
			needsDX11 = 0;
			ppaaLevel = 3;
			ppaaType = 2;
			textMethod = "SMAA";
			textQuality = "Ultra";
		};
	};
	class PPBloom
	{
		maxValue = 2;
		minValue = 0;
	};
	class PPBrightness
	{
		maxValue = 2;
		minValue = 0;
	};
	class PPCausticsQuality
	{
		class Disabled
		{
			text = "Disabled";
			value = 0;
		};
		class Enabled
		{
			text = "Enabled";
			value = 1;
		};
	};
	class PPColorPresets
	{
		class Custom
		{
			brightness = -10000;
			contrast = -10000;
			saturation = -10000;
			text = "Custom";
		};
		class Default
		{
			brightness = 1;
			contrast = 1;
			saturation = 1;
			text = "Default";
		};
	};
	class PPContrast
	{
		maxValue = 2;
		minValue = 0;
	};
	class PPDOF
	{
		maxValue = 2;
		minValue = 0;
	};
	class PPRadialBlur
	{
		maxValue = 2;
		minValue = 0;
	};
	class PPRotBlur
	{
		maxValue = 2;
		minValue = 0;
	};
	class PPSaturation
	{
		maxValue = 2;
		minValue = 0;
	};
	class PPSharpen
	{
		maxValue = 2;
		minValue = 0;
	};
	class PPSSAOQuality
	{
		class Disabled
		{
			needsDX11 = 0;
			textMethod = "Disabled";
			textQuality = "";
			value = 0;
		};
		class HBAOPlusMedium
		{
			needsDX11 = 1;
			textMethod = "HBAO+";
			textQuality = "Medium";
			value = 8;
		};
		class HBAOPlusSoft
		{
			needsDX11 = 1;
			textMethod = "HBAO+";
			textQuality = "Soft";
			value = 7;
		};
		class HBAOPlusStrong
		{
			needsDX11 = 1;
			textMethod = "HBAO+";
			textQuality = "Strong";
			value = 9;
		};
		class HDAOHigh
		{
			needsDX11 = 0;
			textMethod = "HDAO";
			textQuality = "High";
			value = 6;
		};
		class HDAOLow
		{
			needsDX11 = 0;
			textMethod = "HDAO";
			textQuality = "Low";
			value = 4;
		};
		class HDAOStandard
		{
			needsDX11 = 0;
			textMethod = "HDAO";
			textQuality = "Standard";
			value = 5;
		};
	};
	class ShadowQuality
	{
		class Disabled
		{
			cascadeLayers = 0;
			shaderQuality = 0;
			shadowType = 0;
			text = "Disabled";
			textureSize = 0;
		};
		class High
		{
			cascadeLayers = 4;
			shaderQuality = 2;
			shadowType = 2;
			text = "Very High";
			textureSize = 2048;
		};
		class Low
		{
			cascadeLayers = 3;
			shaderQuality = 1;
			shadowType = 2;
			text = "Standard";
			textureSize = 1024;
		};
		class Normal
		{
			cascadeLayers = 4;
			shaderQuality = 2;
			shadowType = 2;
			text = "High";
			textureSize = 1024;
		};
		class VeryHigh
		{
			cascadeLayers = 4;
			shaderQuality = 3;
			shadowType = 2;
			text = "Ultra";
			textureSize = 2048;
		};
		class VeryLow
		{
			cascadeLayers = 2;
			shaderQuality = 0;
			shadowType = 2;
			text = "Low";
			textureSize = 1024;
		};
	};
	class ShadowsVisibility
	{
		maxValue = 200;
		minValue = 50;
	};
	class TerrainQuality
	{
		class High
		{
			terrainGrid = 6.25;
			text = "Very High";
		};
		class Low
		{
			terrainGrid = 25;
			text = "Standard";
		};
		class Normal
		{
			terrainGrid = 12.5;
			text = "High";
		};
		class VeryHigh
		{
			terrainGrid = 3.125;
			text = "Ultra";
		};
		class VeryLow
		{
			terrainGrid = 50;
			text = "Low";
		};
	};
	class TextureQuality
	{
		class High
		{
			mipBias = 0.5;
			text = "Very High";
			vramNeeded = 512;
		};
		class Low
		{
			mipBias = 1.5;
			text = "Standard";
			vramNeeded = 256;
		};
		class Normal
		{
			mipBias = 1;
			text = "High";
			vramNeeded = 384;
		};
		class VeryHigh
		{
			mipBias = 0;
			text = "Ultra";
			vramNeeded = 796;
		};
		class VeryLow
		{
			mipBias = 2;
			text = "Low";
			vramNeeded = 0;
		};
	};
	class Visibility
	{
		maxValue = 12000;
		minValue = 500;
	};
	class WaterSSReflectionsQuality
	{
		class Disabled
		{
			text = "Disabled";
			value = 0;
		};
		class High
		{
			text = "Very High";
			value = 1;
		};
		class Low
		{
			text = "Standard";
			value = 0.3;
		};
		class Normal
		{
			text = "High";
			value = 0.5;
		};
	};
};
