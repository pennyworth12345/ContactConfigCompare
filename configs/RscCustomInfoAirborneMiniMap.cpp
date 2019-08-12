class RscCustomInfoAirborneMiniMap: RscCustomInfoMiniMap
{
	class controls: controls
	{
		class Grid: Grid {};
		class Heading: Heading {};
		class MiniMap: MiniMap
		{
			class Controls: Controls
			{
				class CA_MiniMap: CA_MiniMap
				{
					altitudeMapColorHigh[] = {1, 0, 0, 0.15};
					altitudeMapColorLow[] = {0, 1, 0, 0.15};
					altitudeMapColorMid[] = {1, 1, 0, 0.15};
					altitudeMapRange = 100;
					colorForest[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.3};
					colorPowerLines[] = {1, 0.5, 0.5, 0.7};
					colorSea[] = {0.3, 0.75, 1, 0.15};
					drawShaded = 0.1;
					speedCoefSpeed0 = 500;
					speedCoefSpeedMax = 30;
					widthPowerLines = 6;
				};
			};
		};
		class Time: Time {};
		class Title: Title {};
	};
};
