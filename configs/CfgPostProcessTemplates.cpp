class CfgPostProcessTemplates
{
	class BlackAndWhite
	{
		colorCorrections[] = {1, 1, 0, {1, 1, 1, 0}, {1, 1, 1, 0}, {0.75, 0.25, 0, 1}};
		displayName = "Black and White";
		filmGrain[] = {0.04, 1, 1, 0, 1};
	};
	class Default
	{
		colorCorrections[] = {1, 1, 0, {0, 0, 0, 0}, {1, 1, 1, 1}, {0, 0, 0, 0}};
		displayName = "None";
		filmGrain[] = {0, 0, 0, 0, 0};
	};
	class EastWind
	{
		colorCorrections[] = {1, 1.08, -0.06, {0.5, 0.5, 0.5, 0}, {1, 1, 1, 1.21}, {0.09, 0.09, 0.09, 0}};
		displayName = "The East Wind";
	};
	class Mediterranean
	{
		colorCorrections[] = {1, 1.14, -0.04, {1, 0, 0, -0.07}, {1, 1, 1, 0.8}, {1, 0, 0, 1}};
		displayName = "Mediterranean";
	};
	class RealIsBrown
	{
		colorCorrections[] = {1, 1, 0, {0.1, 0.2, 0.3, -0.5}, {1, 1, 1, 0.4}, {0.5, 0.2, 0, 1}};
		displayName = "'Real is Brown'";
		filmGrain[] = {0.04, 1, 1, 0, 1};
	};
};
