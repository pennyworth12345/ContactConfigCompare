class RscDisplayEGSpectator
{
	closeOnMissionEnd = 1;
	enableSimulation = 1;
	idd = 60492;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayEGSpectator"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayEGSpectator"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayEGSpectator";
	scriptPath = "GUI";
	class Controls
	{
		class CameraTypesGroup: RscControlsGroupNoScrollbars
		{
			h = 2.6;
			idc = 52909;
			w = "8.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "safezoneY + safezoneH - 2.38 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class CameraTypesBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 52610;
					w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Follow: RscButton
				{
					colorBackground[] = {0, 0, 0, 0};
					colorBackgroundActive[] = {0, 0, 0, 0};
					colorBackgroundDisabled[] = {0, 0, 0, 0};
					colorFocused[] = {0, 0, 0, 0};
					h = "1.37 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 52810;
					style = 48;
					text = "A3\Ui_f\data\GUI\Rsc\RscDisplayEGSpectator\follow.paa";
					tooltip = "3PP Camera";
					w = "1.63 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Fps: RscButton
				{
					colorBackground[] = {0, 0, 0, 0};
					colorBackgroundActive[] = {0, 0, 0, 0};
					colorBackgroundDisabled[] = {0, 0, 0, 0};
					colorFocused[] = {0, 0, 0, 0};
					h = "1.37 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 52811;
					style = 48;
					text = "A3\Ui_f\data\GUI\Rsc\RscDisplayEGSpectator\fps.paa";
					tooltip = "1PP Camera";
					w = "1.63 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "5.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Free: RscButton
				{
					colorBackground[] = {0, 0, 0, 0};
					colorBackgroundActive[] = {0, 0, 0, 0};
					colorBackgroundDisabled[] = {0, 0, 0, 0};
					colorFocused[] = {0, 0, 0, 0};
					h = "1.37 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 52809;
					style = 48;
					text = "A3\Ui_f\data\GUI\Rsc\RscDisplayEGSpectator\free.paa";
					tooltip = "Free Camera";
					w = "1.63 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class FocusInfo: RscControlsGroupNoScrollbars
		{
			h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 83909;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "12.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "24 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class AirKills: RscPictureKeepAspect
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82814;
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\air_ca.paa";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class AirKills_Count: RscText
				{
					h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82617;
					shadow = 0;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "99";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ArmoredKills: RscPictureKeepAspect
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82813;
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\armored_ca.paa";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "5.76 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ArmoredKills_Count: RscText
				{
					h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82616;
					shadow = 0;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "99";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "5.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Avatar: RscPictureKeepAspect
				{
					h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82809;
					text = "a3\Ui_f\data\GUI\Cfg\UnitInsignia\bi_ca.paa";
					w = "3.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class AvatarBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82613;
					w = "3.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Deaths: RscPictureKeepAspect
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82815;
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\killed_ca.paa";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "7.92 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Deaths_Count: RscText
				{
					h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82618;
					shadow = 0;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "99";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Kills: RscPictureKeepAspect
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82811;
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\infantry_ca.paa";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Kills_Count: RscText
				{
					h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82614;
					shadow = 0;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "99";
					w = "0.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LandKills: RscPictureKeepAspect
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82812;
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\soft_ca.paa";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.64 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LandKills_Count: RscText
				{
					h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82615;
					shadow = 0;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "99";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LowerLeftBackground: RscText
				{
					colorBackground[] = {1, 1, 1, 0.4};
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82611;
					w = "6.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LowerRightBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82612;
					w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Name: RscText
				{
					h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82610;
					shadow = 0;
					sizeEx = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "RoyaltyInExile";
					w = "9.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Total: RscPictureKeepAspect
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82816;
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\total_ca.paa";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8.86 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Total_Count: RscText
				{
					h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82619;
					shadow = 0;
					sizeEx = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "99";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class UnitType: RscPictureKeepAspect
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82810;
					text = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "14.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class UpperBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82609;
					w = "12.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class VehicleType: RscPicture
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82818;
					text = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";
					w = "2.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class WeaponPicture: RscPictureKeepAspect
				{
					h = "1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 82817;
					text = "A3\weapons_F\Rifles\MX\data\UI\gear_mx_rifle_X_CA.paa";
					w = "5.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class GamePhaseText: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 48610;
			shadow = 0;
			sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "PHASE III";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		safezoneY";
		};
		class GameTimeText: RscText
		{
			colorBackground[] = {0, 0, 0, 0.75};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 42609;
			sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "00:00:00";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		safezoneY";
		};
		class Help: RscListNBox
		{
			disableOverflow = 0;
			h = "12.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 73189;
			rowHeight = "SIZEEX_PURISTA(SIZEEX_S)";
			w = "12.0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "37.0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class ListScrollBar: ScrollBar {};
		};
		class HelpBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.75};
			h = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 72812;
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "37 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class List: RscTree
		{
			colorBackground[] = {0, 0, 0, 0.75};
			colorBorder[] = {0, 0, 0, 0};
			colorLines[] = {0, 0, 0, 0};
			disableKeyboardSearch = 1;
			expandOnDoubleclick = 1;
			fade = 0.8;
			h = "safezoneH";
			idc = 43109;
			multiselectEnabled = 0;
			shadow = 1;
			w = "13.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safeZoneX";
			y = "safezoneY + 0.06";
			class ScrollBar
			{
				color[] = {1, 1, 1, 0};
				height = 0;
				scrollSpeed = 0.1;
				width = 0;
			};
		};
		class MapGroup: RscControlsGroupNoScrollbars
		{
			h = "26.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 63909;
			w = "41.5962 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "-0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "-0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class Map: RscMapControl
				{
					colorBackground[] = {1, 1, 1, 1};
					h = "22.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 62609;
					maxSatelliteAlpha = 0.75;
					w = "40.0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-3.36 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MapFooter: RscText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 62611;
					sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "";
					w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "24.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MapHeader: RscText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 62610;
					w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MapTitle: RscText
				{
					colorText[] = {1, 1, 1, 1};
					h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 62612;
					sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "";
					w = "36.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SpectatorsCount: RscText
				{
					colorText[] = {1, 1, 1, 1};
					h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 62613;
					sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "";
					w = "1.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "39.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SpectatorsIcon: RscPictureKeepAspect
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 62809;
					text = "A3\Ui_f\data\GUI\Rsc\RscDisplayEGSpectator\Fps.paa";
					w = "0.900002 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "37.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class RespawnControlsGroup: RscControlsGroupNoScrollbars
		{
			fade = 1;
			h = "(9.7 + 1.15 ) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 88800;
			onLoad = "(_this select 0) ctrlEnable false;_this execVM 'a3\ui_f\scripts\gui\RscRespawnControls.sqf'";
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "(15 - 1.15 ) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class controls
			{
				class AutoRespawn: RscActiveText
				{
					color[] = {1, 1, 1, 0.7};
					colorActive[] = {1, 1, 1, 1};
					colorBackground[] = {1, 1, 1, 0.3};
					colorText[] = {1, 1, 1, 0.3};
					h = "0.60 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88830;
					style = 48;
					text = "\a3\ui_f\data\map\respawn\icon_autorespawn_ca.paa";
					w = "0.60 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "20.95 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.75 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class BackgroungItem: RscPicture
				{
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88825;
					text = "#(argb,8,8,3)color(1,1,1,0.3)";
					w = "3.025 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "28.625 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class BackgroungOptics: RscPicture
				{
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88824;
					text = "#(argb,8,8,3)color(1,1,1,0.3)";
					w = "3.025 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class BackgroungPrimaryWeapon: RscPicture
				{
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88822;
					text = "#(argb,8,8,3)color(1,1,1,0.3)";
					w = "6.15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(5.55 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class BackgroungSecondaryWeapon: RscPicture
				{
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88823;
					text = "#(argb,8,8,3)color(1,1,1,0.3)";
					w = "6.15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "31.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(5.55 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonDetails: RscButtonMenu
				{
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88814;
					text = "DETAILS";
					w = "6.15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "31.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						align = "center";
						color = "#E5E5E5";
						font = "PuristaLight";
						shadow = "false";
					};
					class TextPos
					{
						bottom = 0;
						left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						right = 0.005;
						top = "0.12 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
				class ButtonSpectate: RscButtonMenu
				{
					h = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88811;
					text = "SPECTATE";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(8.5 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						align = "center";
						color = "#E5E5E5";
						font = "PuristaLight";
						shadow = "false";
					};
				};
				class ComboLoadout: RscCombo
				{
					h = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88813;
					sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = 0.22;
					x = "25.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Counter: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "1.55 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88806;
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "15.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.10 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CounterText: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88826;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "15.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.35 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GearBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
					h = "5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88804;
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2.9 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GearTitle: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88821;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.275 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class HeaderBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
					h = "2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88801;
					w = "38.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.2 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class HeaderRespawnButton: RscButtonMenu
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88829;
					text = "RESPAWN";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.35 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						align = "center";
						color = "#E5E5E5";
						font = "PuristaLight";
						shadow = "false";
					};
					class TextPos
					{
						bottom = 0;
						left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						right = 0.005;
						top = "0.65 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
				class LoadoutDisabled: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88834;
					text = "<t align='center' color='#a3ffffff'><img image='#(argb,8,8,3)color(0,0,0,0)' size='0.8' /><br />Loadout unspecified and will be chosen automatically.</t>";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LocBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
					h = "5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88802;
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2.9 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LocDisabled: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88832;
					text = "<t align='center' color='#a3ffffff'><img image='#(argb,8,8,3)color(0,0,0,0)' size='0.8' /><br />Location will be chosen according to mission settings.</t>";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LocList: RscListBox
				{
					colorBackground[] = {0, 0, 0, 0};
					colorPictureSelected[] = {0, 0, 0, 1};
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88808;
					sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LocTitle: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88819;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.275 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OverHeaderBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
					h = "(1.15  - 0.1) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88870;
					show = 0;
					w = "38.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OverHeaderLeft: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "(1.15  - 0.3) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88871;
					show = 0;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "19.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OverHeaderRight: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "(1.15  - 0.3) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88872;
					show = 0;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "19.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureItem: RscPicture
				{
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88818;
					w = "1.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.4625 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureOptics: RscPicture
				{
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88817;
					w = "1.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "26.3375 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PicturePrimaryWeapon: RscPicture
				{
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88815;
					w = "2.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "27.225 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(5.55 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureSecondaryWeapon: RscPicture
				{
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88816;
					w = "2.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "33.475 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(5.55 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RespawnInfo: RscText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "2.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88877;
					show = 0;
					w = "0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.5 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RespawnInfoOption: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88879;
					show = 0;
					w = "5.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.475 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RespawnInfoTitle: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88878;
					show = 0;
					w = "5.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.625 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ReviveInfo: RscText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "2.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88874;
					show = 0;
					w = "0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.5 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ReviveInfoOption: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88876;
					show = 0;
					w = "5.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.475 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ReviveInfoTitle: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88875;
					show = 0;
					w = "5.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.625 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RoleBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
					h = "5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88803;
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2.9 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RoleDisabled: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88833;
					text = "<t align='center' color='#a3ffffff'><img image='#(argb,8,8,3)color(0,0,0,0)' size='0.8' /><br />Role unspecified and will be chosen automatically.</t>";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RoleList: RscListBox
				{
					colorBackground[] = {0, 0, 0, 0};
					colorPictureSelected[] = {0, 0, 0, 1};
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88809;
					sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RoleTitle: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88820;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.275 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Team: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "1.00 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88805;
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.375 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TeamText: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88827;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.625 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Tickets: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "1.00 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88807;
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "30.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.375 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TicketsText: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88828;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "30.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.625 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Warning: RscStructuredText
				{
					colorBackground[] = {0.7, 0, 0, 1};
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88831;
					text = "";
					w = "19.05 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.475 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.35 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class RespawnDetailsControlsGroup: RscControlsGroupNoScrollbars
		{
			fade = 1;
			h = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 88850;
			onLoad = "(_this select 0) ctrlEnable false";
			w = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class controls
			{
				class BackgroundDetails: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
					h = "14.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88851;
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonDetailsClose: RscButton
				{
					colorBackground[] = {1, 1, 1, 1};
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88853;
					w = "0.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "11.85 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DetailsTitle: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0.9};
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88852;
					w = "11.85 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RespawnDetailsListControlsGroup: RscControlsGroup
				{
					h = "13.45 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 88860;
					w = "12.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class controls
					{
						class DetailsList: RscStructuredText
						{
							colorBackground[] = {1, 1, 1, 0.3};
							h = "12.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 88861;
							w = "11.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
					};
				};
			};
		};
		class SideAProgressGroup: RscControlsGroupNoScrollbars
		{
			h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 48909;
			w = "10.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "5.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		safezoneY";
			class controls
			{
				class SideABackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 42613;
					w = "10.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideAColor: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
					h = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 42617;
					w = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideAColorBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 42615;
					w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideATask: RscText
				{
					colorText[] = {1, 1, 1, 1};
					h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 42612;
					shadow = 0;
					sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					text = "DEFEND";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class SideBProgressGroup: RscControlsGroupNoScrollbars
		{
			h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 43910;
			w = "10.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		safezoneY";
			class controls
			{
				class SideBBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 42611;
					w = "10.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideBColor: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
					h = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 42618;
					w = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideBColorBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 42616;
					w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SideBTask: RscText
				{
					colorText[] = {1, 1, 1, 1};
					h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 42614;
					shadow = 0;
					sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 0;
					text = "RETRIEVE";
					w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Tabs: RscToolbox
		{
			colorBackground[] = {0, 0, 0, 0.75};
			colorSelectedBg[] = {0, 0, 0, 0.65};
			columns = 2;
			fade = 0.8;
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 43609;
			rows = 1;
			sizeEx = "1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			strings[] = {"ENTITIES", "LOCATIONS"};
			values[] = {0, 1};
			w = "13.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safeZoneX";
			y = "safezoneY";
		};
	};
	class ControlsBackground
	{
		class MouseHandler: RscText
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "safeZoneH";
			idc = 42989;
			style = 16;
			text = "";
			w = "safeZoneWAbs";
			x = "safeZoneXAbs";
			y = "safeZoneY";
		};
	};
};
