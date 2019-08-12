class ctrlMap: ctrlDefault
{
	alphaFadeEndScale = 2;
	alphaFadeStartScale = 2;
	colorBackground[] = {0.969, 0.957, 0.949, 1};
	colorCountlines[] = {0.572, 0.354, 0.188, 0.25};
	colorCountlinesWater[] = {0.491, 0.577, 0.702, 0.3};
	colorForest[] = {0.624, 0.78, 0.388, 0.5};
	colorForestBorder[] = {0, 0, 0, 0};
	colorForestTextured[] = {0.624, 0.78, 0.388, 0.25};
	colorGrid[] = {0.1, 0.1, 0.1, 0.6};
	colorGridMap[] = {0.1, 0.1, 0.1, 0.6};
	colorInactive[] = {1, 1, 1, 0.5};
	colorLevels[] = {0.286, 0.177, 0.094, 0.5};
	colorMainCountlines[] = {0.572, 0.354, 0.188, 0.5};
	colorMainCountlinesWater[] = {0.491, 0.577, 0.702, 0.6};
	colorMainRoads[] = {0.9, 0.5, 0.3, 1};
	colorMainRoadsFill[] = {1, 0.6, 0.4, 1};
	colorNames[] = {0.1, 0.1, 0.1, 0.9};
	colorOutside[] = {0, 0, 0, 1};
	colorPowerLines[] = {0.1, 0.1, 0.1, 1};
	colorRailWay[] = {1, 0, 0, 1};
	colorRoads[] = {0.7, 0.7, 0.7, 1};
	colorRoadsFill[] = {1, 1, 1, 1};
	colorRocks[] = {0, 0, 0, 0.3};
	colorRocksBorder[] = {0, 0, 0, 0};
	colorSea[] = {0.467, 0.631, 0.851, 0.5};
	colorText[] = {0, 0, 0, 1};
	colorTracks[] = {0.84, 0.76, 0.65, 0.15};
	colorTracksFill[] = {0.84, 0.76, 0.65, 1};
	colorTrails[] = {0.84, 0.76, 0.65, 0.15};
	colorTrailsFill[] = {0.84, 0.76, 0.65, 0.65};
	drawShaded = 0.25;
	font = "RobotoCondensedLight";
	fontGrid = "TahomaB";
	fontInfo = "RobotoCondensedLight";
	fontLabel = "RobotoCondensedLight";
	fontLevel = "TahomaB";
	fontNames = "RobotoCondensed";
	fontUnits = "TahomaB";
	h = "safezoneH";
	idcMarkerColor = -1;
	idcMarkerIcon = -1;
	maxSatelliteAlpha = 0.85;
	moveOnEdges = 1;
	onCanDestroy = "";
	onDestroy = "";
	onDraw = "";
	onKeyDown = "";
	onKeyUp = "";
	onKillFocus = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseHolding = "";
	onMouseMoving = "";
	onMouseZChanged = "";
	onSetFocus = "";
	ptsPerSquareCLn = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareForLod1 = 4;
	ptsPerSquareForLod2 = 1;
	ptsPerSquareMainRoad = 6;
	ptsPerSquareMainRoadSimple = 1;
	ptsPerSquareObj = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareRoadSimple = 1;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 20;
	runwayFont = "LCD14";
	scaleDefault = 0.16;
	scaleMax = 1;
	scaleMin = 0.0001;
	shadedSea = 0.3;
	showCountourInterval = 1;
	showMarkers = "true";
	sizeEx = 0.05;
	sizeExGrid = 0.02;
	sizeExInfo = 0.05;
	sizeExLabel = 0.05;
	sizeExLevel = 0.02;
	sizeExNames = 0.05;
	sizeExUnits = 0.05;
	style = 48;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	type = 101;
	w = "safezoneWAbs";
	widthRailWay = 4;
	x = "safezoneXAbs";
	y = "safezoneY";
	class ActiveMarker
	{
		color[] = {0, 0, 0, 1};
		size = 2;
	};
	class Bunker: Waypoint
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = 1.05;
		size = 14;
	};
	class Bush: Waypoint
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = 0.007;
		size = 7;
	};
	class BusStop: Bush
	{
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
	};
	class Chapel: Cross
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
	};
	class Church: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
	};
	class Command: Waypoint
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		size = 18;
	};
	class Cross: Waypoint
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
	};
	class CustomMark: Waypoint
	{
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
	};
	class Fortress: Bunker
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = 1.6;
		size = 16;
	};
	class Fountain: Bunker
	{
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		importance = 0.6;
		size = 11;
	};
	class FuelStation: Waypoint
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
	};
	class Hospital: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
	};
	class Legend
	{
		color[] = {0, 0, 0, 1};
		colorBackground[] = {1, 1, 1, 0.5};
		font = "RobotoCondensedLight";
		h = 0.1;
		sizeEX = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
		w = 0.4;
		x = 0.5;
		y = 0.5;
	};
	class Lighthouse: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
	};
	class LineMarker
	{
		lineDistanceMin = 3e-005;
		lineLengthMin = 5;
		lineWidthThick = 0.014;
		lineWidthThin = 0.008;
	};
	class Power: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
	};
	class PowerSolar: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
	};
	class PowerWave: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
	};
	class PowerWind: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
	};
	class Quay: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
	};
	class Rock: SmallTree
	{
		color[] = {0.1, 0.1, 0.1, 0.8};
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		importance = 0.3;
	};
	class Ruin: Waypoint
	{
		coefMax = 4;
		coefMin = 1;
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		importance = 0.96;
		size = 16;
	};
	class Shipwreck: Cross
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
	};
	class SmallTree: Bush
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = 0.36;
		size = 12;
	};
	class Stack: Waypoint
	{
		coefMax = 2;
		coefMin = 0.4;
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		importance = 1.6;
		size = 16;
	};
	class Task
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {1, 1, 1, 1};
		colorCanceled[] = {0.7, 0.7, 0.7, 1};
		colorCreated[] = {1, 1, 0, 1};
		colorDone[] = {0.7, 1, 0.3, 1};
		colorFailed[] = {1, 0.3, 0.2, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		importance = 1;
		size = 27;
	};
	class Tourism: Waypoint
	{
		coefMax = 4;
		coefMin = 0.7;
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		importance = 2.8;
		size = 16;
	};
	class Transmitter: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
	};
	class Tree: SmallTree
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = 0.72;
	};
	class ViewTower: Waypoint
	{
		coefMax = 4;
		coefMin = 0.5;
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		importance = 2;
		size = 16;
	};
	class Watertower: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
	};
	class Waypoint
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 24;
	};
	class WaypointCompleted: Waypoint
	{
		icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
	};
};
