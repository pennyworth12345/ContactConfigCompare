class RscDisplayLoadMission: RscStandardDisplay
{
	idd = 101;
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayLoading";
	scriptPath = "3DENDisplaysTemp";
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			h = "3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			show = 0;
			w = "18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class DisclaimerDescription: RscStructuredText
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 0.3};
					colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1101;
					shadow = 0;
					w = "18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						size = 0.8;
					};
				};
				class DisclaimerName: RscStructuredText
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1009;
					w = "18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class LoadingStart: RscControlsGroup
		{
			h = "1 * safezoneH";
			idc = 2310;
			w = "1 * safezoneW";
			x = "0 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			class controls
			{
				class Black: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * safezoneH";
					idc = 1000;
					w = "1 * safezoneW";
					x = "0 * safezoneW";
					y = "0 * safezoneH";
				};
				class Logo: RscPictureKeepAspect
				{
					h = "0.25 * safezoneH";
					idc = 1200;
					text = "\A3\Ui_f\data\Logos\arma3_splash_ca.paa";
					w = "0.5 * safezoneW";
					x = "0.25 * safezoneW";
					y = "0.3125 * safezoneH";
				};
				class Noise: RscPicture
				{
					h = "1 * safezoneH";
					idc = 1201;
					text = "\A3\Ui_f\data\IGUI\RscTitles\SplashArma3\arma3_splashNoise_ca.paa";
					w = "1 * safezoneW";
					x = "0 * safezoneW";
					y = "0 * safezoneH";
				};
			};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			h = 0.2;
			onLoad = "if !(isnull (finddisplay 313)) then {(_this select 0) ctrlshow true;};";
			show = 0;
			text = "\a3\3DEN\Data\Logos\3den_512_ca.paa";
			w = 0.3;
			x = "safezoneX + safezoneW - 0.31";
			y = "safezoneY + safezoneH - 0.3";
		};
		class MapAuthor: RscText
		{
			colorText[] = {1, 1, 1, 0.5};
			font = "RobotoCondensedLight";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class MapBackBottom: RscText
		{
			colorBackground[] = {0, 0, 0, 0.6};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1003;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class MapBackTop: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "2.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class MapDescription: RscStructuredText
		{
			h = "1.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1102;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			w = 1;
			x = 0;
			y = "safezoneY + safezoneH - 1.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Attributes
			{
				align = "center";
				size = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
		};
		class MapName: RscText
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "safezoneW - 0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY";
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "37.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class DLCAuthor: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					font = "RobotoCondensedLight";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 3208;
					shadow = 0;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DLCDescription: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0.6};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 3296;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "14.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						size = 0.8;
					};
				};
				class DLCIcon: RscPicture
				{
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 3396;
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "32.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DLCName: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 3207;
					shadow = 0;
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DLCPicture: RscPicture
				{
					h = "7.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 3393;
					w = "15.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DLCPictureBack: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 3209;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DLCStripe: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 3395;
					text = "\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingStripe_ca.paa";
					w = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "30.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MissionAuthor: RscText
				{
					colorText[] = {1, 1, 1, 0.5};
					font = "RobotoCondensedLight";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1007;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MissionBackgroundTop: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "2.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1005;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MissionDescription: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0.6};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1100;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "14.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						size = 0.8;
					};
				};
				class MissionDescriptionEngine: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 101;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "-1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MissionGameType: RscText
				{
					colorBackground[] = {0, 0, 0, 0.6};
					font = "RobotoCondensedLight";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1012;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MissionName: RscText
				{
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1006;
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MissionPicture: RscPictureKeepAspect
				{
					h = "7.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 105;
					w = "15.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MissionPictureBack: RscText
				{
					colorBackground[] = {0, 0, 0, 0.6};
					h = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1010;
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class ProgressMap: RscProgress
		{
			colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			w = "safezoneW";
			x = "safezoneX";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
		};
		class ProgressMission: ProgressMap
		{
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1013;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground
	{
		class Black: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "safezoneH";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class CA_Vignette: RscVignette
		{
			colorText[] = {0, 0, 0, 1};
		};
		class Line: RscPicture
		{
			h = 0.1;
			text = "A3\data_f\tracer.paa";
			w = 0.1;
			x = -10;
			y = -10;
		};
		class Map: RscPicture
		{
			colorText[] = {1, 1, 1, 0.42};
			h = "safezoneW * 4/3";
			idc = 999;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY - (safezoneW * 4/3) / 4";
		};
		class Noise: RscPicture
		{
			colorText[] = {1, 1, 1, 1};
			h = "safezoneH";
			text = "\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
	};
};
