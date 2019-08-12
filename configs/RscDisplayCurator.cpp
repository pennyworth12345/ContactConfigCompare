class RscDisplayCurator
{
	idd = 312;
	onLoad = "[""onLoad"",_this,""RscDisplayCurator"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayCurator"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayCurator";
	scriptPath = "CuratorDisplays";
	class Controls
	{
		class Add: RscControlsGroupNoScrollbars
		{
			h = "safezoneH - 2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 450;
			w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 12.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class CreateBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.5};
					h = "safezoneH - 2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15505;
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CreateClassesBackground: RscText
				{
					h = "safezoneH - 6 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15510;
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CreateFrame: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "safezoneH - 6 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16307;
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CreateGroupsCiv: CreateUnitsWest
				{
					idc = 278;
				};
				class CreateGroupsEast: CreateUnitsWest
				{
					idc = 276;
				};
				class CreateGroupsEmpty: CreateUnitsWest
				{
					idc = 279;
				};
				class CreateGroupsGuer: CreateUnitsWest
				{
					idc = 277;
				};
				class CreateGroupsWest: CreateUnitsWest
				{
					idc = 275;
				};
				class CreateMarkers: CreateUnitsWest
				{
					idc = 281;
				};
				class CreateModules: CreateUnitsWest
				{
					idc = 280;
				};
				class CreateRecent: CreateUnitsWest
				{
					idc = 282;
				};
				class CreateSearch: RscEdit
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 283;
					w = "9.7 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CreateSearchButton: RscButtonSearch
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.8 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CreateUnitsCiv: CreateUnitsWest
				{
					idc = 273;
				};
				class CreateUnitsEast: CreateUnitsWest
				{
					idc = 271;
				};
				class CreateUnitsEmpty: CreateUnitsWest
				{
					idc = 274;
				};
				class CreateUnitsGuer: CreateUnitsWest
				{
					idc = 272;
				};
				class CreateUnitsWest: RscTree
				{
					h = "safezoneH - 7.1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 270;
					idcSearch = 283;
					sizeEx = "0.8 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ModeFrame: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16304;
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ModeGroups: ModeUnits
				{
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 151;
					text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\modeGroups_ca.paa";
					tooltip = "Groups";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ModeMarkers: ModeUnits
				{
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 154;
					text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\modeMarkers_ca.paa";
					tooltip = "Markers";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ModeModules: ModeUnits
				{
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 152;
					text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\modeModules_ca.paa";
					tooltip = "Modules";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ModeRecent: ModeUnits
				{
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 170;
					text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\modeRecent_ca.paa";
					tooltip = "Recent";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ModeUnits: RscActivePicture
				{
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 150;
					text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\modeUnits_ca.paa";
					tooltip = "Units";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideBLUFOR: RscActivePicture
				{
					color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", 1};
					colorActive[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", 1};
					colorText[] = {0, 0.3, 0.6, 1};
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 155;
					shadow = 0;
					text = "\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_west_ca.paa";
					tooltip = "BLUFOR";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideCivilian: SideBLUFOR
				{
					color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", 1};
					colorActive[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", 1};
					colorText[] = {0.4, 0, 0.5, 1};
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 158;
					text = "\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa";
					tooltip = "Civilian";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideEmpty: SideBLUFOR
				{
					color[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])", "(profilenamespace getvariable ['Map_Unknown_G',1])", "(profilenamespace getvariable ['Map_Unknown_B',1])", 1};
					colorActive[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])", "(profilenamespace getvariable ['Map_Unknown_G',1])", "(profilenamespace getvariable ['Map_Unknown_B',1])", 1};
					colorText[] = {0.7, 0.6, 0, 1};
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 159;
					text = "\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_unknown_ca.paa";
					tooltip = "Empty";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideFrame: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16305;
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideIndependent: SideBLUFOR
				{
					color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", 1};
					colorActive[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", 1};
					colorText[] = {0, 0.5, 0, 1};
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 157;
					text = "\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa";
					tooltip = "Independent";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideOPFOR: SideBLUFOR
				{
					color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", 1};
					colorActive[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", 1};
					colorText[] = {0.5, 0, 0, 1};
					h = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 156;
					text = "\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_east_ca.paa";
					tooltip = "OPFOR";
					w = "2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class AddBar: RscControlsGroupNoScrollbars
		{
			h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 16805;
			w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 12.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class AddBarFrame: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16309;
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class AddBarTitle: RscButton
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16105;
					text = "CREATE";
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Black: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "safezoneH";
			idc = 999;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class ButtonTextures: RscActiveText
		{
			h = 0;
			idc = 107;
			w = 0;
			x = -1;
			y = -1;
		};
		class Clock: RscControlsGroup
		{
			h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 16808;
			w = "16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 - 8 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class ClockCountdown: RscText
				{
					colorBackground[] = {0, 0, 0, 0};
					font = "RobotoCondensedLight";
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15511;
					sizeEx = "0.8 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ClockDaytime: RscText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15509;
					style = 2;
					w = "16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "-0.1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ClockDuration: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.5};
					font = "RobotoCondensedLight";
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15506;
					sizeEx = "0.8 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ClockFrame: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16310;
					w = "16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Compass: RscControlsGroupNoScrollbars
		{
			h = "0.7 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 16810;
			w = "16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 - 8 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class CompassBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.5};
					h = "0.7 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15518;
					w = "16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CompassCaret: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "0.7 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16314;
					w = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CompassFrame: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "0.7 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16312;
					w = "16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class HintGroup: RscControlsGroupNoScrollbars
		{
			h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12957;
			w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "safezoneX + safezoneW - 13 * 							(			((safezoneW / safezoneH) min 1.2) / 40) - 		(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "3.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class Hint: RscStructuredText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.7};
					h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 11757;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Title: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0.7};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 11657;
					w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Main: RscControlsGroupNoScrollbars
		{
			h = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 16806;
			w = "safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 12.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class FeedbackMessage: RscText
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15512;
					style = 2;
					w = "safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Logo: RscPicture
				{
					colorText[] = {0, 0, 0, 1};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15715;
					text = "\a3\ui_f_curator\data\logos\arma3_curator_eye_32_ca.paa";
					w = "1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) / 2 - 0.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Points: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 0.8};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 111;
					w = "safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PointsBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.5};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15513;
					w = "safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PointsFrame: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16306;
					w = "safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PointsPreview: RscText
				{
					colorBackground[] = {1, 0, 0, 0.4};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 112;
					shadow = 2;
					style = 2;
					w = "7 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			h = "safezoneH - 2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 453;
			w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class Entities: RscTree
				{
					colorMarked[] = {1, 1, 1, 0.35};
					colorMarkedSelected[] = {1, 1, 1, 0.7};
					expandOnDoubleclick = 0;
					h = "safezoneH - 2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 251;
					multiselectEnabled = 1;
					sizeEx = "0.8 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EntitiesBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.5};
					h = "safezoneH - 2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 15508;
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EntitiesFrame: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "safezoneH - 2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16308;
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class MissionBar: RscControlsGroupNoScrollbars
		{
			h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 16809;
			w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class MissionBarFrame: RscFrame
				{
					colorText[] = {0, 0, 0, 1};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16311;
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MissionBarTitle: RscButton
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 16104;
					text = "EDIT";
					w = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class MPProgress: RscMissionStatus {};
		class NotificationArea: RscNotificationArea {};
		class Watermark: RscPicture
		{
			colorText[] = {1, 1, 1, 0.5};
			h = "4.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 15717;
			text = "\a3\Ui_F_Curator\Data\Logos\arma3_curator_eye_256_ca.paa";
			w = "4.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 5.3 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 4.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class ControlsBackground
	{
		class Map: RscMapControl
		{
			h = "safezoneH";
			idc = 50;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
			class CustomMark
			{
				coefMax = 0;
				coefMin = 0;
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				importance = 0;
				size = 0;
			};
		};
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 53;
			style = 16;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
	};
};
