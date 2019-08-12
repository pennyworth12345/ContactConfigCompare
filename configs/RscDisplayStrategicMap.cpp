class RscDisplayStrategicMap
{
	effectTilesAlpha = 0.03;
	enableSimulation = 0;
	idd = 506;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayStrategicMap"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayStrategicMap"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayStrategicMap";
	scriptPath = "GUI";
	class controls
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
		class Measure: RscControlsGroupNoScrollbars
		{
			h = 0;
			idc = 2301;
			w = 0;
			x = -1;
			y = -1;
			class Controls
			{
				class km0: RscPicture
				{
					h = 0;
					idc = 1200;
					w = 0;
					x = 0;
					y = 0;
				};
				class km1: km0
				{
					idc = 1201;
				};
				class km2: km0
				{
					idc = 1202;
				};
				class km3: km0
				{
					idc = 1203;
				};
				class km4: km0
				{
					idc = 1204;
				};
				class m0: km0
				{
					idc = 1205;
				};
				class text_0: RscText
				{
					h = 0;
					idc = 1002;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					text = "0";
					w = 0;
					x = 0;
					y = 0;
				};
				class text_km: text_0
				{
					idc = 1004;
					style = 1;
					text = "1 Km";
				};
				class text_m: text_0
				{
					idc = 1003;
					style = 0;
					text = "1 M";
				};
			};
		};
		class MessageBox: RscMessageBox {};
		class Missions: RscXListBox
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1500;
			w = "SafezoneW - (8.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "7.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			disableCustomColors = 1;
			h = "safezoneH";
			idc = 115099;
			onLoad = "[ctrlParent (_this select 0), ""RscDisplayStrategicMap""] call (uiNamespace getVariable 'BIS_fnc_guiEffectTiles')";
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
			idc = 114998;
		};
	};
	class controlsBackground
	{
		class Map: RscMapControl
		{
			alphaFadeEndScale = 100;
			alphaFadeStartScale = 100;
			colorBackground[] = {1, 1, 1, 1};
			colorCountlines[] = {0, 0, 0, 0};
			colorCountlinesWater[] = {0, 0, 0, 0};
			colorForest[] = {1, 1, 1, 1};
			colorGrid[] = {0, 0, 0, 0};
			colorGridMap[] = {0, 0, 0, 0};
			colorMainCountlines[] = {0, 0, 0, 0};
			colorMainCountlinesWater[] = {0, 0, 0, 0};
			colorOutside[] = {"uinamespace getvariable ['RscDisplayStrategicMap_colorOutside_R',0]", "uinamespace getvariable ['RscDisplayStrategicMap_colorOutside_G',0]", "uinamespace getvariable ['RscDisplayStrategicMap_colorOutside_B',0]", 1};
			colorRocks[] = {0, 0, 0, 0};
			colorSea[] = {0.467, 0.631, 0.851, 0.25};
			drawObjects = 0;
			h = "safezoneH";
			maxSatelliteAlpha = "uinamespace getvariable ['RscDisplayStrategicMap_maxSatelliteAlpha',1]";
			moveOnEdges = 1;
			ptsPerSquareCLn = 200;
			ptsPerSquareCost = 200;
			ptsPerSquareFor = 200;
			ptsPerSquareForEdge = 200;
			ptsPerSquareObj = 200;
			ptsPerSquareRoad = 200;
			ptsPerSquareTxt = 20;
			scaleDefault = "uinamespace getvariable ['RscDisplayStrategicMap_scaleDefault',0.3]";
			scaleMax = "uinamespace getvariable ['RscDisplayStrategicMap_scaleMax',0.3]";
			scaleMin = "uinamespace getvariable ['RscDisplayStrategicMap_scaleMin',0.3]";
			showCountourInterval = 0;
			sizeExGrid = 0;
			sizeExInfo = 0;
			sizeExLabel = 0;
			sizeExLevel = 0;
			sizeExNames = 0;
			sizeExUnits = 0;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
			class Task: Task
			{
				size = 0;
			};
		};
	};
};
