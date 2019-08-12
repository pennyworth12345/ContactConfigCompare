class RscDisplayMapScience
{
	idd = -1;
	onLoad = "[""onLoad"",_this,""RscDisplayMapScience"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMapScience"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayMapScience";
	scriptPath = "ContactDisplays";
	class Controls
	{
		class LegendGroup: RscControlsGroupNoScrollbars
		{
			h = 0.6;
			idc = 1024;
			w = 0.15;
			x = "safezoneX + safezoneW - 	0.15 - 		0.04";
			y = "0.5 - 	0.6 / 2";
			class Controls
			{
				class Background: RscText
				{
					colorBackground[] = {1, 1, 1, 1};
					h = 0.6;
					w = 0.15;
					x = 0;
					y = 0;
				};
				class Bar: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "0.6 - 		0.04 * 2";
					idc = 1025;
					w = 0.03;
					x = "0.15 - 		0.03 * 2";
					y = 0.04;
				};
				class Label: RscText
				{
					colorText[] = {0, 0, 0, 1};
					h = 0.04;
					shadow = 0;
					text = "nT";
					w = "0.03 * 2";
					x = "0.15 - 		0.03 * 2";
					y = "0.6 - 		0.04";
				};
			};
		};
	};
	class ControlsBackground
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 1};
			h = "safezoneH";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class Map: RscMapControl
		{
			alphaFadeEndScale = 10;
			alphaFadeStartScale = 10;
			colorBackground[] = {1, 1, 1, 1};
			colorCountlines[] = {0, 0, 0, 0.1};
			colorCountlinesWater[] = {0, 0, 0, 0};
			colorForest[] = {0, 0, 0, 0};
			colorForestBorder[] = {0, 0, 0, 0};
			colorGrid[] = {0, 0, 0, 0};
			colorGridMap[] = {0, 0, 0, 0};
			colorLevels[] = {0, 0, 0, 0};
			colorMainCountlines[] = {0, 0, 0, 0.2};
			colorMainCountlinesWater[] = {0, 0, 0, 0.7};
			colorMainRoads[] = {0, 0, 0, 1};
			colorMainRoadsFill[] = {0, 0, 0, 0.7};
			colorNames[] = {0, 0, 0, 0};
			colorOutside[] = {0, 0, 0, 0.2};
			colorPowerLines[] = {0, 1, 0, 0.5};
			colorRailWay[] = {0, 0, 1, 1};
			colorRoads[] = {0, 0, 0, 0.5};
			colorRoadsFill[] = {0, 0, 0, 0.5};
			colorRocks[] = {0, 0, 0, 0};
			colorRocksBorder[] = {0, 0, 0, 0};
			colorSea[] = {0, 0, 0, 0.2};
			colorTracks[] = {0, 0, 0, 0.4};
			colorTracksFill[] = {0, 0, 0, 0.4};
			colorTrails[] = {0, 0, 0, 0};
			colorTrailsFill[] = {0, 0, 0, 0};
			h = "safezoneH";
			maxSatelliteAlpha = 0;
			ptsPerSquareFor = 500;
			ptsPerSquareForEdge = 500;
			ptsPerSquareObj = 500;
			ptsPerSquareRoad = 6;
			ptsPerSquareTxt = 500;
			showMarkers = 0;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
	};
};
