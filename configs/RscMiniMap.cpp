class RscMiniMap
{
	access = 0;
	enableDisplay = 1;
	enableSimulation = 1;
	idd = 133;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscMiniMap"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscMiniMap"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscMiniMap";
	scriptPath = "IGUI";
	class controls {};
	class controlsBackground
	{
		class GroupIndicator: RscMapControl
		{
			alphaFadeEndScale = 0;
			alphaFadeStartScale = 0;
			colorBackground[] = {0, 0, 0, 0};
			colorCountlines[] = {0, 0, 0, 0};
			colorCountlinesWater[] = {0, 0, 0, 0};
			colorForest[] = {0, 0, 0, 0};
			colorForestBorder[] = {0, 0, 0, 0};
			colorGrid[] = {0, 0, 0, 0};
			colorGridMap[] = {0, 0, 0, 0};
			colorInactive[] = {0, 0, 0, 0};
			colorLevels[] = {0, 0, 0, 0};
			colorMainCountlines[] = {0, 0, 0, 0};
			colorMainCountlinesWater[] = {0, 0, 0, 0};
			colorNames[] = {0, 0, 0, 0};
			colorOutside[] = {0, 0, 0, 0};
			colorPowerLines[] = {0, 0, 0, 0};
			colorRailWay[] = {0, 0, 0, 0};
			colorRocks[] = {0, 0, 0, 0};
			colorRocksBorder[] = {0, 0, 0, 0};
			colorSea[] = {0, 0, 0, 0};
			colorText[] = {0, 0, 0, 0};
			font = "RobotoCondensed";
			h = "(profilenamespace getvariable ['IGUI_GRID_GPS_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			idc = 13302;
			maxSatelliteAlpha = 0;
			ptsPerSquareCLn = 0;
			ptsPerSquareCost = 0;
			ptsPerSquareExp = 0;
			ptsPerSquareFor = 0;
			ptsPerSquareForEdge = 0;
			ptsPerSquareObj = 0;
			ptsPerSquareRoad = 0;
			ptsPerSquareSea = 0;
			ptsPerSquareTxt = 0;
			scaleMax = 1;
			scaleMin = 1e-005;
			shadow = 0;
			ShowCountourInterval = 0;
			sizeEx = 0;
			sizeExGrid = 0;
			sizeExInfo = 0;
			sizeExLabel = 0;
			sizeExLevel = 0;
			sizeExNames = 0;
			sizeExUnits = 0;
			stickX[] = {0, {"Gamma", 0, 0}};
			stickY[] = {0, {"Gamma", 0, 0}};
			style = 0;
			text = "";
			type = 101;
			w = "(profilenamespace getvariable ['IGUI_GRID_GPS_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "(profilenamespace getvariable ['IGUI_GRID_GPS_X',		(safezoneX + safezoneW - 11 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GPS_Y',		(safezoneY + safezoneH - 20.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class NAME
			{
				coefMax = 0;
				coefMin = 0;
				color[] = {0, 0, 0, 0};
				icon = "";
				importance = 0;
				size = 0;
			};
			class Task: Task
			{
				coefMax = 0;
				coefMin = 0;
				color[] = {0, 0, 0, 0};
				colorCanceled[] = {0, 0, 0, 0};
				colorCreated[] = {0, 0, 0, 0};
				colorDone[] = {0, 0, 0, 0};
				colorFailed[] = {0, 0, 0, 0};
				icon = "";
				iconCanceled = "";
				iconCreated = "";
				iconDone = "";
				iconFailed = "";
				importance = 0;
				size = 0;
			};
		};
		class MiniMap: RscControlsGroupNoScrollbars
		{
			h = "(profilenamespace getvariable ['IGUI_GRID_GPS_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			idc = 13301;
			w = "(profilenamespace getvariable ['IGUI_GRID_GPS_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "(profilenamespace getvariable ['IGUI_GRID_GPS_X',		(safezoneX + safezoneW - 11 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GPS_Y',		(safezoneY + safezoneH - 20.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class Controls
			{
				class CA_Background: RscPicture
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					colorText[] = {0, 0, 0, 0.1};
					h = "(profilenamespace getvariable ['IGUI_GRID_GPS_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					text = "\A3\ui_f\data\igui\rscingameui\rscminimap\gradient_gs.paa";
					w = "(profilenamespace getvariable ['IGUI_GRID_GPS_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundTitle: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1000;
					w = "(profilenamespace getvariable ['IGUI_GRID_GPS_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundTitleDark: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					w = "(profilenamespace getvariable ['IGUI_GRID_GPS_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Grid: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1002;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 0;
					w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1004;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_MiniMap: RscMapControl
				{
					alphaFadeEndScale = 10;
					alphaFadeStartScale = 10;
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.5};
					colorCountlines[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.2};
					colorCountlinesWater[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.4};
					colorForest[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.7};
					colorForestBorder[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.5};
					colorGrid[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.3};
					colorGridMap[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.2};
					colorLevels[] = {0, 0, 0, 0};
					colorMainCountlines[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.6};
					colorMainCountlinesWater[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.7};
					colorMainRoads[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					colorMainRoadsFill[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.7};
					colorPowerLines[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.5};
					colorRailWay[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					colorRoads[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					colorRoadsFill[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.5};
					colorRocks[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.1};
					colorRocksBorder[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.5};
					colorSea[] = {0, 0, 0, 0.4};
					colorTracks[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.15};
					colorTracksFill[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.3};
					h = "(profilenamespace getvariable ['IGUI_GRID_GPS_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					IDC = 101;
					maxSatelliteAlpha = 0;
					moveOnEdges = 1;
					ptsPerSquareFor = 15;
					ptsPerSquareForEdge = 15;
					ptsPerSquareObj = 15;
					ptsPerSquareRoad = 6;
					ptsPerSquareTxt = 500;
					ShowCountourInterval = 0;
					w = "(profilenamespace getvariable ['IGUI_GRID_GPS_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					x = "(profilenamespace getvariable ['IGUI_GRID_GPS_X',		(safezoneX + safezoneW - 11 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
					y = "(profilenamespace getvariable ['IGUI_GRID_GPS_Y',		(safezoneY + safezoneH - 20.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class bush: Bush
					{
						color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.4};
					};
					class busstop: BusStop
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class church: Church
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class fuelstation: Fuelstation
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class hospital: Hospital
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class lighthouse: Lighthouse
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class power: power
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class powersolar: powersolar
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class powerwave: powerwave
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class powerwind: powerwind
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class quay: Quay
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class rock: Rock
					{
						color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.8};
					};
					class shipwreck: Shipwreck
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class smalltree: SmallTree
					{
						color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.4};
					};
					class transmitter: Transmitter
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
					class tree: Tree
					{
						color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.4};
					};
					class watertower: Watertower
					{
						color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					};
				};
				class CA_Time: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1003;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
};
