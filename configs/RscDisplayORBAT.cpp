class RscDisplayORBAT
{
	effectTilesAlpha = 0.042;
	enableSimulation = 0;
	idd = 505;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayORBAT"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayORBAT"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayORBAT";
	scriptPath = "GUI";
	class Controls
	{
		class ButtonBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			font = "RobotoCondensedLight";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			shadow = 0;
			style = 1;
			w = "SafezoneW - (8.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "7.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			default = 1;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Close";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class FadeEffect: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "safezoneH";
			idc = 1099;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			disableCustomColors = 1;
			h = "safezoneH";
			idc = 115099;
			onLoad = "[ctrlParent (_this select 0), ""RscDisplayORBAT""] call (uiNamespace getVariable 'BIS_fnc_guiEffectTiles')";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
			class Controls
			{
				class Tile_0_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115000;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_0_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115001;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_0_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115002;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_0_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115003;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_0_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115004;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_0_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115005;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_1_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115010;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_1_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115011;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_1_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115012;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_1_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115013;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_1_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115014;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_1_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115015;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_2_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115020;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_2_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115021;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_2_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115022;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_2_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115023;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_2_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115024;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_2_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115025;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_3_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115030;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_3_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115031;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_3_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115032;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_3_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115033;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_3_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115034;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_3_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115035;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_4_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115040;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_4_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115041;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_4_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115042;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_4_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115043;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_4_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115044;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_4_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115045;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_5_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115050;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_5_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115051;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_5_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115052;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_5_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115053;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_5_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115054;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_5_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115055;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class TileFrame: RscFrame
				{
					colortext[] = {0, 0, 0, 1};
					h = "safezoneH";
					idc = 114999;
					w = "safezoneW";
					x = 0;
					y = 0;
				};
			};
		};
		class Tooltip: RscMapControlTooltip {};
		class Vignette: RscVignette
		{
			colorText[] = {0, 0, 0, 0.3};
		};
	};
	class ControlsBackground
	{
		class Map: RscMapControl
		{
			alphaFadeEndScale = 0;
			alphaFadeStartScale = 0;
			colorBackground[] = {1, 1, 1, 1};
			colorCountlines[] = {0, 0, 0, 0};
			colorCountlinesWater[] = {0, 0, 0, 0};
			colorForest[] = {0, 0, 0, 0};
			colorForestBorder[] = {0, 0, 0, 0};
			colorInactive[] = {0, 0, 0, 0};
			colorLevels[] = {0, 0, 0, 0};
			colorMainCountlines[] = {0, 0, 0, 0};
			colorMainCountlinesWater[] = {0, 0, 0, 0};
			colorNames[] = {0, 0, 0, 0};
			colorOutside[] = {1, 1, 1, 1};
			colorPowerLines[] = {0, 0, 0, 0};
			colorRailWay[] = {0, 0, 0, 0};
			colorRocks[] = {0, 0, 0, 0};
			colorRocksBorder[] = {0, 0, 0, 0};
			colorSea[] = {0, 0, 0, 0};
			h = "safezoneH";
			ptsPerSquareCLn = 1000;
			ptsPerSquareCost = 1000;
			ptsPerSquareExp = 1000;
			ptsPerSquareFor = 1000;
			ptsPerSquareForEdge = 1000;
			ptsPerSquareObj = 1000;
			ptsPerSquareRoad = 1000;
			ptsPerSquareSea = 1000;
			ptsPerSquareTxt = 1000;
			scaleDefault = "uinamespace getvariable ['RscDisplayORBAT_scaleDefault',0.005]";
			scaleMax = "uinamespace getvariable ['RscDisplayORBAT_scaleMax',0.02]";
			scaleMin = "uinamespace getvariable ['RscDisplayORBAT_scaleMin',0.005]";
			type = 101;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
			class Bunker: Bunker
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Bush: Bush
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class busstop: BusStop
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Chapel: Chapel
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class church: Church
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Command: Command
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Cross: Cross
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class CustomMark: CustomMark
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Fortress: Fortress
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Fountain: Fountain
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class fuelstation: Fuelstation
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class hospital: Hospital
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class lighthouse: Lighthouse
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class power: power
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class powersolar: powersolar
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class powerwave: powerwave
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class powerwind: powerwind
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class quay: Quay
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Rock: Rock
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Ruin: Ruin
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class shipwreck: Shipwreck
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class SmallTree: SmallTree
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Stack: Stack
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Task: Task
			{
				color[] = {0, 0, 0, 0};
				colorCanceled[] = {0, 0, 0, 0};
				colorCreated[] = {0, 0, 0, 0};
				colorDone[] = {0, 0, 0, 0};
				colorFailed[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				iconCanceled = "#(argb,8,8,3)color(0,0,0,0)";
				iconCreated = "#(argb,8,8,3)color(0,0,0,0)";
				iconDone = "#(argb,8,8,3)color(0,0,0,0)";
				iconFailed = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Tourism: Tourism
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class transmitter: Transmitter
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Tree: Tree
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class ViewTower: ViewTower
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class watertower: Watertower
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class Waypoint: Waypoint
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
			class WaypointCompleted: WaypointCompleted
			{
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				size = 0;
			};
		};
	};
};
