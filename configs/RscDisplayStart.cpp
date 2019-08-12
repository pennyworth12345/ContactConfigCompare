class RscDisplayStart: RscStandardDisplay
{
	idd = 104;
	onLoad = "[2] call compile preprocessfilelinenumbers gettext (configfile >> 'CfgFunctions' >> 'init'); ['onLoad',_this,'RscDisplayLoading','Loading'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayLoading";
	scriptPath = "3DENDisplaysTemp";
	class controls
	{
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
