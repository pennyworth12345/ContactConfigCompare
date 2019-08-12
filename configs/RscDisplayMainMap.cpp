class RscDisplayMainMap
{
	access = 0;
	idd = 12;
	movingEnable = 0;
	onKeyDown = "		[			'selectAll',			'SelectGroupUnit1',			'SelectGroupUnit2',			'SelectGroupUnit3',			'SelectGroupUnit4',			'SelectGroupUnit5',			'SelectGroupUnit6',			'SelectGroupUnit7',			'SelectGroupUnit8',			'SelectGroupUnit9',			'SelectGroupUnit0'		] findif {(_this # 1) in (actionkeys _x)} >= 0	";
	onLoad = "[""onLoad"",_this,""RscDisplayMainMap"",'ContactDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMainMap"",'ContactDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	saveParams = 1;
	scriptName = "RscDisplayMainMap";
	scriptPath = "ContactDisplaysTemp";
	class controls
	{
		class BriefingIntroGraphicsLayer: RscPictureKeepAspect
		{
			color[] = {1, 1, 1, 1};
			h = "safezoneH";
			idc = 1101;
			show = 0;
			w = "safezoneWabs";
			x = "safezoneXabs";
			y = "safezoneY";
		};
		class CA_ContentBackgroundd: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = 0;
			idc = 1023;
			w = 0;
			x = -10;
			y = -10;
		};
		class CA_DiaryGroup: RscControlsGroup
		{
			h = 0;
			idc = 1013;
			onLoad = "(_this # 0) ctrlenable false;";
			w = 0;
			x = -10;
			y = -10;
			class controls
			{
				class CA_Diary: RscHTML
				{
					colorLink[] = {1, 0.72, 0.3, 1};
					colorLinkActive[] = {1, 0.72, 0.3, 1};
					cycleAllLinks = 0;
					cycleLinks = 0;
					h = 100;
					idc = 1003;
					shadow = 0;
					w = "20.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class H1
					{
						font = "RobotoCondensed";
						fontBold = "RobotoCondensedBold";
						sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
					};
					class P
					{
						font = "RobotoCondensed";
						fontBold = "RobotoCondensedBold";
						sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					};
				};
			};
		};
		class CA_DiaryIndex: RscListNBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelect2Right[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.2};
			colorSelectBackground2[] = {1, 1, 1, 0.3};
			colorSelectRight[] = {1, 1, 1, 1};
			columns[] = {"7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)", "15.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)"};
			h = 0;
			idc = 1002;
			onLoad = "(_this # 0) ctrlenable false;";
			padding = 0.004;
			shadowPictureLeft = 0;
			shadowPictureRight = 0;
			shadowTextLeft = 0;
			shadowTextRight = 0;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = 0;
			x = -10;
			y = -10;
			class MuteCheckBoxTemplate: RscCheckBox
			{
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				textureChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureDisabledChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureDisabledUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureFocusedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureFocusedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureHoverChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureHoverUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				texturePressedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				texturePressedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = 0;
				y = 0;
			};
		};
		class CA_SubTopicsBackground: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = 0;
			idc = 1022;
			w = 0;
			x = -10;
			y = -10;
		};
		class CA_TopicsBackground: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = 0;
			idc = 1021;
			w = 0;
			x = -10;
			y = -10;
		};
		class DiaryCategories: RscDiaryCategories {};
		class DiaryCategoriesBackground: RscDiaryCategoriesBackground {};
		class DiaryGroup: RscDiaryGroup {};
		class DiaryList: RscListNBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelect2Right[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.2};
			colorSelectBackground2[] = {1, 1, 1, 0.3};
			colorSelectRight[] = {1, 1, 1, 1};
			columns[] = {0};
			default = 1;
			h = 0;
			idc = 1001;
			onLoad = "(_this # 0) ctrlenable false;";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = 0;
			x = -10;
			y = -10;
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
		class GPS: RscControlsGroup
		{
			h = 0;
			idc = 106;
			w = 0;
			x = -1;
			y = -1;
			class controls
			{
				class GPS_ALTMeasurement: RscText
				{
					font = "RobotoCondensedBold";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1008;
					shadow = 2;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GPS_HeadingMeasurement: RscText
				{
					font = "RobotoCondensedBold";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1015;
					shadow = 2;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GPSAlt: RscText
				{
					font = "RobotoCondensedBold";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 77;
					shadow = 2;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GPSHeading: RscText
				{
					font = "RobotoCondensedBold";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 78;
					shadow = 2;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GPSSquare: RscText
				{
					font = "RobotoCondensedBold";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 75;
					shadow = 2;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class MapCategories: RscMapCategories {};
		class MapCategoriesSimple: RscMapCategoriesSimple {};
		class MarkerColor: RscCombo
		{
			idc = 1090;
			show = 0;
		};
		class MarkerIcon: RscCombo
		{
			idc = 1091;
			show = 0;
		};
		class SortPlayers: RscPicture
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 118;
			sortDown = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_down_ca.paa";
			sortUp = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			text = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Tooltip: RscMapTooltip {};
		class TooltipArea: RscMapTooltipArea {};
		class TooltipSimple: RscMapTooltipSimple {};
		class WalkieTalkie: RscControlsGroup
		{
			h = 0;
			idc = 103;
			w = 0;
			x = -1;
			y = -1;
			class controls
			{
				class RadioAlpha: RscActiveText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 63;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RadioBravo: RadioAlpha
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 64;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RadioCharlie: RadioAlpha
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 65;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RadioDelta: RadioAlpha
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 66;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RadioEcho: RadioAlpha
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 67;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RadioFoxtrot: RadioAlpha
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 68;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RadioGolf: RadioAlpha
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 69;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RadioHotel: RadioAlpha
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 70;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RadioIndia: RadioAlpha
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 71;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RadioJuliet: RadioAlpha
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 72;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class controlsBackground
	{
		class CA_Black: CA_Black_Back
		{
			h = "safezoneH";
			idc = 510;
			text = "#(rgb,1,1,1)color(1,1,1,1)";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class CA_Map: RscMapControl
		{
			h = "safezoneH";
			idcMarkerColor = 1090;
			idcMarkerIcon = 1091;
			onLoad = "with uinamespace do {_this call bin_fnc_drawMap;};";
			w = "safezoneWAbs + 2 * (		20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "safezoneXAbs - (		20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "safezoneY";
		};
		class FakeMap: RscControlsGroupNoScrollbars
		{
			h = "safezoneH * 	1.2";
			idc = 270982;
			onLoad = "(_this # 0) ctrlenable false;";
			w = "safezoneH * 3/4 * 	1.2";
			x = "0.5 - safezoneH * 3/4 / 2 * 	1.2";
			y = "0.5 - safezoneH / 2 * 	1.2";
		};
		class ProbeMap: RscMapControlEmpty
		{
			h = "safezoneH";
			idc = 20778;
			onLoad = "with uinamespace do {_this call bin_fnc_drawProbeMap;};";
			scaleDefault = 0.5;
			scaleMax = 0.6;
			scaleMin = 0.3;
			show = 0;
			text = "#(rgb,1,1,1)color(1,1,1,1)";
			w = "safezoneWAbs + 2 * (		20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "safezoneXAbs - (		20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "safezoneY";
		};
		class SpectrumMap: RscMapSpectrum
		{
			idc = 20779;
		};
	};
	class objects
	{
		class Compass: RscObject
		{
			direction[] = {1, 0, 0};
			enableZoom = 1;
			idc = 102;
			inBack = "False";
			model = "\A3\ui_f\objects\Compass.p3d";
			scale = 0.35;
			selectionArrow = "";
			type = 80;
			up[] = {0, 1, 0};
			waitForLoad = 0;
			x = 0.16;
			xBack = 0.6;
			y = 0.925;
			yBack = 0.5;
			z = 0.2;
			zBack = 0.1;
			zoomDuration = 1;
		};
		class Notepad: RscObject
		{
			enableZoom = 1;
			idc = 104;
			inBack = 0;
			model = "\core\notepad\notepad.p3d";
			paper1 = "#(argb,8,8,3)color(1,1,1,1)";
			paper2 = "#(argb,8,8,3)color(1,1,1,1)";
			paper3 = "#(argb,8,8,3)color(1,1,1,1)";
			paper4 = "#(argb,8,8,3)color(1,1,1,1)";
			paper5 = "#(argb,8,8,3)color(1,1,1,1)";
			paper6 = "#(argb,8,8,3)color(1,1,1,1)";
			paper7 = "#(argb,8,8,3)color(1,1,1,1)";
			position[] = {-0.08, 0, 0.32};
			positionBack[] = {-0.325, 0.197, 0.8};
			scale = 1.2;
			selectionPaper = "paper";
			type = 82;
			zoomDuration = 0.5;
			class Areas
			{
				class Paper
				{
					selection = "paper";
					class controls
					{
						class Bookmark1: RscBookmarkText
						{
							idc = 58;
							text = "Plan";
							x = 0;
						};
						class Bookmark2: RscBookmarkText
						{
							idc = 57;
							text = "Notes";
							x = 0.25;
						};
						class Bookmark3: RscBookmarkText
						{
							idc = 60;
							text = "Group";
							x = 0.5;
						};
						class Bookmark4: RscBookmarkText
						{
							idc = 59;
							text = "Playable";
							x = 0.75;
						};
						class Briefing: RscHTML
						{
							h = "0.89 * 2.082";
							idc = 56;
							size = "1 * 2.082";
							w = 0.98;
							x = 0.02;
							y = "0.11 * 2.082";
							class H1: H1
							{
								sizeEx = "0.04 * 2.082";
							};
							class H2: H2
							{
								sizeEx = "0.04 * 2.082";
							};
							class H3: H3
							{
								sizeEx = "0.04 * 2.082";
							};
							class H4: H4
							{
								sizeEx = "0.04 * 2.082";
							};
							class H5: H5
							{
								sizeEx = "0.04 * 2.082";
							};
							class H6: H6
							{
								sizeEx = "0.04 * 2.082";
							};
							class P: P
							{
								sizeEx = "0.04 * 2.082";
							};
						};
						class Name: RscText
						{
							color[] = {1, 1, 1, 1};
							h = "0.05 * 2.082";
							idc = 73;
							sizeEx = "0.04 * 2.082";
							style = 2;
							w = 1;
							x = 0;
							y = "0 * 2.082";
						};
						class RscBookmarkText: RscActiveText
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {0.85, 0.85, 0.85, 1};
							h = "0.05 * 2.082";
							idc = -1;
							sizeEx = "0.04 * 2.082";
							style = 2;
							w = 0.25;
							x = 0;
							y = "0.05 * 2.082";
						};
					};
				};
			};
		};
	};
};
