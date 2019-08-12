class RscTitles
{
	class binocular
	{
		duration = 1000;
		idd = -1;
		movingEnable = 0;
		class objects
		{
			class binocular: RscObject
			{
				direction[] = {"sin 0", "sin 180 * cos 0", "cos 180 * cos 0"};
				idc = -1;
				model = "\A3\weapons_f\reticle\optics_binoculars.p3d";
				position[] = {0, 0, 0.053};
				up[] = {0, "cos 180", "-sin 180"};
			};
		};
	};
	class RscAAN
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		idd = 3000;
		onLoad = "uinamespace setvariable ['BIS_AAN',_this select 0]";
		onUnLoad = "uinamespace setvariable ['BIS_AAN',nil]";
		class Controls
		{
			class BackgroundClock: RscText
			{
				colorBackground[] = {0, 0, 0, 1};
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + pixelW";
				x = "safezoneX + safezoneW - 6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			};
			class BackgroundMain: RscText
			{
				colorBackground[] = {0.29, 0, 0, 0.6};
				h = "3 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY + safezoneH - 4.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			};
			class BackgroundStripe: BackgroundMain
			{
				colorBackground[] = {1, 1, 1, 1};
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			};
			class Clock: RscText
			{
				font = "PuristaLight";
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				idc = 3003;
				sizeEx = "0.9 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				text = "23:32";
				w = "6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "safezoneX + safezoneW - 6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 1.55 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			};
			class LineBlack: BackgroundMain
			{
				colorBackground[] = {0, 0, 0, 1};
				h = "2 * pixelH";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 2 * pixelH";
			};
			class Logo: RscPicture
			{
				h = "3 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				text = "\A3\ui_f\data\igui\rsctitles\AAN\AAN_logo_ca.paa";
				w = "12 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "safezoneX + 0.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 4.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			};
			class LogoClock: RscPicture
			{
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				text = "\A3\ui_f\data\igui\rsctitles\AAN\AAN_logo_ca.paa";
				w = "4 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "safezoneX + safezoneW - 3.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			};
			class LogoCorner: RscPicture
			{
				colorText[] = {1, 1, 1, 0.25};
				h = "3 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				text = "\A3\ui_f\data\igui\rsctitles\AAN\AAN_logo_corner_ca.paa";
				w = "6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "safezoneX + safezoneW - 7 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + 1 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			};
			class Stripe: RscControlsGroupNoScrollbars
			{
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				class Controls
				{
					class StripeText1: RscStructuredText
					{
						h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						idc = 3002;
						shadow = 0;
						size = "0.9 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						w = "safezoneW";
						x = 0;
						y = 0;
						class Attributes
						{
							align = "left";
							color = "#000000";
							font = "PuristaLight";
							shadow = 0;
						};
					};
					class StripeText2: StripeText1
					{
						idc = 3004;
					};
				};
			};
			class StripeLeft: RscPicture
			{
				colorText[] = {0, 0, 0, 1};
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayInventory\InventoryStripe_ca.paa";
				w = "0.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "safezoneX";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			};
			class StripeRight: StripeLeft
			{
				angle = 180;
				x = "safezoneX + safezoneW - 6.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			};
			class Title: RscStructuredText
			{
				h = "2.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				idc = 3001;
				shadow = 0;
				w = "safezoneW - 10.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "safezoneX + 10.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 4.25 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				class Attributes
				{
					align = "left";
					color = "#ffffff";
					font = "PuristaMedium";
					shadow = 0;
				};
			};
		};
	};
	class RscAANnews
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		idd = 3001;
		onLoad = "uinamespace setvariable ['BIS_AAN_news',_this select 0]";
		onUnLoad = "uinamespace setvariable ['BIS_AAN_news',nil]";
		class controls
		{
			class PictureL1: RscPicture
			{
				h = "safezoneW * 0.46 * 4/3";
				idc = 300101;
				text = "";
				w = "safezoneW * 0.46";
				x = "safezoneX + safezoneW * 0.02";
				y = "safezoneY + (safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - (safezoneW * 0.46 * 4/3))/2";
			};
			class PictureL2: PictureL1
			{
				idc = 300102;
			};
			class PictureL3: PictureL1
			{
				idc = 300103;
			};
			class PictureL4: PictureL1
			{
				idc = 300104;
			};
			class PictureL5: PictureL1
			{
				idc = 300105;
			};
			class PictureL6: PictureL1
			{
				idc = 300106;
			};
			class PictureR1: RscPicture
			{
				h = "(0.22 * safezoneH)";
				idc = 300107;
				text = "";
				w = "(	(0.22 * safezoneH) * 3/4)";
				x = "safezoneX + safezoneW - 	(	(0.22 * safezoneH) * 3/4)";
				y = "safezoneY + safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 	(0.22 * safezoneH)";
			};
			class TextL1: RscStructuredText
			{
				colorText[] = {1, 1, 1, 1};
				h = "safezoneW * 0.46 * 4/3";
				idc = 300108;
				shadow = 0;
				style = "0x00 + 0x10";
				w = "safezoneW * 0.46";
				x = "safezoneX + safezoneW * 0.02";
				y = "safezoneY + (safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - (safezoneW * 0.46 * 4/3))/2";
				class Attributes
				{
					align = "left";
					color = "#ffffff";
					font = "RobotoCondensed";
					shadow = 0;
					valign = "top";
				};
			};
			class TextR1: RscStructuredText
			{
				colorText[] = {1, 1, 1, 1};
				h = "(	(0.22 * safezoneH) + 0.08 * safezoneH) - 	(0.22 * safezoneH)";
				idc = 300109;
				shadow = 0;
				size = "(0.025) * safezoneH";
				style = "0x00 + 0x10";
				w = "(	(0.22 * safezoneH) * 3/4) * 0.9";
				x = "safezoneX + safezoneW - (	(	(0.22 * safezoneH) * 3/4)) * 0.95";
				y = "safezoneY + safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - (		(	(0.22 * safezoneH) + 0.08 * safezoneH)) + 0.01";
				class Attributes
				{
					align = "left";
					color = "#ffffff";
					font = "RobotoCondensed";
					shadow = 0;
					valign = "top";
				};
			};
		};
		class ControlsBackground
		{
			class BackgroundLeftRed: RscText
			{
				colorbackground[] = {0.29, 0, 0, 0.5};
				h = "safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				idc = 300110;
				w = "safezoneW * 0.5";
				x = "safezoneX";
				y = "safezoneY";
			};
			class BackgroundLeftRedGradient: RscPicture
			{
				colortext[] = {0.29, 0, 0, 0.5};
				h = "safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				idc = 300111;
				text = "A3\ui_f\data\igui\rsctitles\rscAANnews\gradient_right_gs.paa";
				w = "safezoneW * 0.5";
				x = "safezoneX";
				y = "safezoneY";
			};
			class BackgroundRightRed: RscText
			{
				colorbackground[] = {0.29, 0, 0, 0.5};
				h = "(	(0.22 * safezoneH) + 0.08 * safezoneH)";
				idc = 300112;
				w = "(	(0.22 * safezoneH) * 3/4)";
				x = "safezoneX + safezoneW - 	(	(0.22 * safezoneH) * 3/4)";
				y = "safezoneY + safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(	(0.22 * safezoneH) + 0.08 * safezoneH)";
			};
			class BackgroundRightRedGradient: RscPicture
			{
				colortext[] = {0.29, 0, 0, 0.5};
				h = "(	(0.22 * safezoneH) + 0.08 * safezoneH)";
				idc = 300113;
				text = "A3\ui_f\data\igui\rsctitles\rscAANnews\gradient_left_gs.paa";
				w = "(	(0.22 * safezoneH) * 3/4)";
				x = "safezoneX + safezoneW - 	(	(0.22 * safezoneH) * 3/4)";
				y = "safezoneY + safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(	(0.22 * safezoneH) + 0.08 * safezoneH)";
			};
		};
	};
	class RscAdvancedHint
	{
		duration = 1e+010;
		fadeIn = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscAdvancedHint"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscAdvancedHint"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscAdvancedHint";
		scriptPath = "IGUI";
		class controls
		{
			class HintGroup: RscHintGroup {};
		};
	};
	class RscAnimatedScreen
	{
		duration = 1e+011;
		fadeIn = 0;
		fadeOut = 0;
		idd = -1;
		onLoad = "uiNamespace setVariable ['bis_animatedScreen_displayMain',_this select 0];";
		class Controls {};
	};
	class RscAnimatedScreenOverlay
	{
		duration = 1e+011;
		fadeIn = 0;
		fadeOut = 0;
		idd = -1;
		onLoad = "uiNamespace setVariable ['bis_animatedScreen_displayOverlay',_this select 0];";
		class Controls {};
	};
	class RscBlindfold: RscCBRN_APR
	{
		class Controls: Controls
		{
			class Texture: Texture
			{
				text = "\a3\ui_f_contact\data\objects\data\optics_blindfold_CA.paa";
			};
		};
	};
	class RscCameraPIP
	{
		duration = 1e+011;
		fadein = 0;
		idd = -1;
		onLoad = "uinamespace setvariable ['RscCameraPIP', _this select 0];";
		onUnload = "uinamespace setvariable ['RscCameraPIP', nil];";
		class controls {};
		class controlsBackground
		{
			class NoPIP: RscPicture
			{
				h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				IDC = 2301;
				text = "#(rgb,8,8,3)color(1,1,1,1)";
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safezoneX + 0.15 * safezoneW";
				y = "safezoneY + 0.05 * safezoneH";
			};
			class PIP: RscPicture
			{
				h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				IDC = 2300;
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safezoneX + 0.15 * safezoneW";
				y = "safezoneY + 0.05 * safezoneH";
			};
		};
	};
	class RscCBRN_APR
	{
		duration = 1000;
		fadeIn = 0;
		idd = -1;
		movingEnable = 0;
		class Controls
		{
			class BlackLeft: RscText
			{
				colorBackground[] = {0, 0, 0, 1};
				h = "safezoneH";
				w = 10;
				x = "-9.5 - safezoneH * 	1.8 * 0.5";
				y = "safezoneY";
			};
			class BlackRight: BlackLeft
			{
				x = "0.5 + safezoneH * 	1.8 * 0.5";
			};
			class Texture: RscPicture
			{
				angle = 180;
				h = "safezoneH * 	1.8";
				text = "\a3\ui_f_contact\data\objects\data\optics_apr_ca.paa";
				w = "safezoneH * 	1.8";
				x = "0.5 - safezoneH * 	1.8 * 0.5";
				y = "0.5 - safezoneH * 	1.8 * 0.5";
			};
		};
	};
	class RscCBRN_APR_02: RscCBRN_APR
	{
		class Controls: Controls
		{
			class BlackLeft: BlackLeft {};
			class BlackRight: BlackRight {};
			class Texture: Texture
			{
				text = "\a3\ui_f_contact\data\objects\data\optics_APR_02_CA.paa";
			};
		};
	};
	class RscCBRN_Regulator: RscCBRN_APR
	{
		class Controls: Controls
		{
			class Texture: Texture
			{
				text = "\a3\ui_f_contact\data\objects\data\optics_regulator_CA.paa";
			};
		};
	};
	class RscCinemaBorder: RscDisplayBackgroundStripes
	{
		duration = 1e+011;
		enableSimulation = 1;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onload = "uinamespace setvariable ['RscCinemaBorder',_this select 0];";
		class controlsBackground
		{
			class Background1: RscBackgroundStripeTop
			{
				colorBackground[] = {0, 0, 0, 1};
				idc = 100001;
			};
			class Background2: RscBackgroundStripeBottom
			{
				colorBackground[] = {0, 0, 0, 1};
				idc = 100002;
			};
		};
	};
	class RscClouds
	{
		duration = 1e+011;
		fadein = 0;
		idd = 4000;
		movingEnable = 0;
		onLoad = "uinamespace setvariable ['hsim_RscClouds',_this select 0]";
		class controls
		{
			class Picture_0: RscPicture
			{
				autoplay = 1;
				h = 0;
				idc = 1200;
				loops = 1;
				text = "";
				w = 0;
				x = 0;
				y = 0;
			};
			class Picture_1: Picture_0
			{
				idc = 1201;
			};
			class Picture_10: Picture_0
			{
				idc = 1210;
			};
			class Picture_11: Picture_0
			{
				idc = 1211;
			};
			class Picture_12: Picture_0
			{
				idc = 1212;
			};
			class Picture_13: Picture_0
			{
				idc = 1213;
			};
			class Picture_14: Picture_0
			{
				idc = 1214;
			};
			class Picture_15: Picture_0
			{
				idc = 1215;
			};
			class Picture_16: Picture_0
			{
				idc = 1216;
			};
			class Picture_17: Picture_0
			{
				idc = 1217;
			};
			class Picture_18: Picture_0
			{
				idc = 1218;
			};
			class Picture_19: Picture_0
			{
				idc = 1219;
			};
			class Picture_2: Picture_0
			{
				idc = 1202;
			};
			class Picture_20: Picture_0
			{
				idc = 1220;
			};
			class Picture_21: Picture_0
			{
				idc = 1221;
			};
			class Picture_22: Picture_0
			{
				idc = 1222;
			};
			class Picture_23: Picture_0
			{
				idc = 1223;
			};
			class Picture_24: Picture_0
			{
				idc = 1224;
			};
			class Picture_25: Picture_0
			{
				idc = 1225;
			};
			class Picture_26: Picture_0
			{
				idc = 1226;
			};
			class Picture_27: Picture_0
			{
				idc = 1227;
			};
			class Picture_28: Picture_0
			{
				idc = 1228;
			};
			class Picture_29: Picture_0
			{
				idc = 1229;
			};
			class Picture_3: Picture_0
			{
				idc = 1203;
			};
			class Picture_30: Picture_0
			{
				idc = 1230;
			};
			class Picture_31: Picture_0
			{
				idc = 1231;
			};
			class Picture_32: Picture_0
			{
				idc = 1232;
			};
			class Picture_33: Picture_0
			{
				idc = 1233;
			};
			class Picture_34: Picture_0
			{
				idc = 1234;
			};
			class Picture_35: Picture_0
			{
				idc = 1235;
			};
			class Picture_36: Picture_0
			{
				idc = 1236;
			};
			class Picture_37: Picture_0
			{
				idc = 1237;
			};
			class Picture_38: Picture_0
			{
				idc = 1238;
			};
			class Picture_39: Picture_0
			{
				idc = 1239;
			};
			class Picture_4: Picture_0
			{
				idc = 1204;
			};
			class Picture_40: Picture_0
			{
				idc = 1240;
			};
			class Picture_41: Picture_0
			{
				idc = 1241;
			};
			class Picture_42: Picture_0
			{
				idc = 1242;
			};
			class Picture_43: Picture_0
			{
				idc = 1243;
			};
			class Picture_44: Picture_0
			{
				idc = 1244;
			};
			class Picture_45: Picture_0
			{
				idc = 1245;
			};
			class Picture_46: Picture_0
			{
				idc = 1246;
			};
			class Picture_47: Picture_0
			{
				idc = 1247;
			};
			class Picture_48: Picture_0
			{
				idc = 1248;
			};
			class Picture_49: Picture_0
			{
				idc = 1249;
			};
			class Picture_5: Picture_0
			{
				idc = 1205;
			};
			class Picture_50: Picture_0
			{
				idc = 1250;
			};
			class Picture_51: Picture_0
			{
				idc = 1251;
			};
			class Picture_52: Picture_0
			{
				idc = 1252;
			};
			class Picture_53: Picture_0
			{
				idc = 1253;
			};
			class Picture_54: Picture_0
			{
				idc = 1254;
			};
			class Picture_55: Picture_0
			{
				idc = 1255;
			};
			class Picture_56: Picture_0
			{
				idc = 1256;
			};
			class Picture_57: Picture_0
			{
				idc = 1257;
			};
			class Picture_58: Picture_0
			{
				idc = 1258;
			};
			class Picture_59: Picture_0
			{
				idc = 1259;
			};
			class Picture_6: Picture_0
			{
				idc = 1206;
			};
			class Picture_60: Picture_0
			{
				idc = 1260;
			};
			class Picture_61: Picture_0
			{
				idc = 1261;
			};
			class Picture_62: Picture_0
			{
				idc = 1262;
			};
			class Picture_63: Picture_0
			{
				idc = 1263;
			};
			class Picture_64: Picture_0
			{
				idc = 1264;
			};
			class Picture_65: Picture_0
			{
				idc = 1265;
			};
			class Picture_66: Picture_0
			{
				idc = 1266;
			};
			class Picture_67: Picture_0
			{
				idc = 1267;
			};
			class Picture_68: Picture_0
			{
				idc = 1268;
			};
			class Picture_69: Picture_0
			{
				idc = 1269;
			};
			class Picture_7: Picture_0
			{
				idc = 1207;
			};
			class Picture_70: Picture_0
			{
				idc = 1270;
			};
			class Picture_71: Picture_0
			{
				idc = 1271;
			};
			class Picture_72: Picture_0
			{
				idc = 1272;
			};
			class Picture_73: Picture_0
			{
				idc = 1273;
			};
			class Picture_74: Picture_0
			{
				idc = 1274;
			};
			class Picture_75: Picture_0
			{
				idc = 1275;
			};
			class Picture_76: Picture_0
			{
				idc = 1276;
			};
			class Picture_77: Picture_0
			{
				idc = 1277;
			};
			class Picture_78: Picture_0
			{
				idc = 1278;
			};
			class Picture_79: Picture_0
			{
				idc = 1279;
			};
			class Picture_8: Picture_0
			{
				idc = 1208;
			};
			class Picture_80: Picture_0
			{
				idc = 1280;
			};
			class Picture_81: Picture_0
			{
				idc = 1281;
			};
			class Picture_82: Picture_0
			{
				idc = 1282;
			};
			class Picture_83: Picture_0
			{
				idc = 1283;
			};
			class Picture_84: Picture_0
			{
				idc = 1284;
			};
			class Picture_85: Picture_0
			{
				idc = 1285;
			};
			class Picture_86: Picture_0
			{
				idc = 1286;
			};
			class Picture_87: Picture_0
			{
				idc = 1287;
			};
			class Picture_88: Picture_0
			{
				idc = 1288;
			};
			class Picture_89: Picture_0
			{
				idc = 1289;
			};
			class Picture_9: Picture_0
			{
				idc = 1209;
			};
			class Picture_90: Picture_0
			{
				idc = 1290;
			};
			class Picture_91: Picture_0
			{
				idc = 1291;
			};
			class Picture_92: Picture_0
			{
				idc = 1292;
			};
			class Picture_93: Picture_0
			{
				idc = 1293;
			};
			class Picture_94: Picture_0
			{
				idc = 1294;
			};
			class Picture_95: Picture_0
			{
				idc = 1295;
			};
			class Picture_96: Picture_0
			{
				idc = 1296;
			};
			class Picture_97: Picture_0
			{
				idc = 1297;
			};
			class Picture_98: Picture_0
			{
				idc = 1298;
			};
			class Picture_99: Picture_0
			{
				idc = 1299;
			};
		};
	};
	class RscCommMenuItems
	{
		duration = 1e+011;
		fadeIn = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscCommMenuItems"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscCommMenuItems"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscCommMenuItems";
		scriptPath = "IGUI";
		class controls
		{
			class RscCommMenuItems: RscControlsGroupNoScrollbars
			{
				h = "15 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 2300;
				w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_COMM_X"",		(0 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)])";
				y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_COMM_Y"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)])";
				class controls
				{
					class Slot0: Slot1
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1209;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot0Background: Slot1Background
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1009;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot0Text: Slot1Text
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1218;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot1: RscPictureKeepAspect
					{
						colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1200;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot1Background: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1000;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot1Text: RscText
					{
						colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1010;
						shadow = 0;
						sizeEx = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot2: Slot1
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1201;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot2Background: Slot1Background
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1001;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot2Text: Slot1Text
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1210;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot3: Slot1
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1202;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot3Background: Slot1Background
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1002;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot3Text: Slot1Text
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1211;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot4: Slot1
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1203;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot4Background: Slot1Background
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1003;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot4Text: Slot1Text
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1212;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot5: Slot1
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1204;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot5Background: Slot1Background
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1004;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot5Text: Slot1Text
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1213;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot6: Slot1
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1205;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot6Background: Slot1Background
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1005;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot6Text: Slot1Text
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1214;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot7: Slot1
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1206;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot7Background: Slot1Background
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1006;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot7Text: Slot1Text
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1215;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot8: Slot1
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1207;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot8Background: Slot1Background
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1007;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot8Text: Slot1Text
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1216;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot9: Slot1
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1208;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot9Background: Slot1Background
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1008;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot9Text: Slot1Text
					{
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1217;
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscCommonBackground
	{
		duration = 1e+011;
		fadein = 0;
		idd = 4000;
		movingEnable = 0;
		onload = "uinamespace setvariable ['RscCommonBackground',_this select 0]";
		class controlsBackground
		{
			class BcgCommon: RscBackgroundGUI
			{
				backgroundType = 0;
				h = "(uinamespace getvariable 'RscBackground_H')";
				idc = 11000;
				w = "(uinamespace getvariable 'RscBackground_W')";
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y')";
			};
			class BcgCommonBottom: RscBackgroundGUIBottom
			{
				backgroundType = 0;
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 11001;
				w = "(uinamespace getvariable 'RscBackground_W')";
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y') +  		(uinamespace getvariable 'RscBackground_H') 	 - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
			class BcgCommonLeft: RscBackgroundGUILeft
			{
				backgroundType = 0;
				h = "(uinamespace getvariable 'RscBackground_H')";
				idc = 11200;
				w = "(uinamespace getvariable 'RscBackground_W')";
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y')";
			};
			class BcgCommonRight: RscBackgroundGUIRight
			{
				backgroundType = 0;
				h = "(uinamespace getvariable 'RscBackground_H')";
				idc = 11201;
				w = "(uinamespace getvariable 'RscBackground_W')";
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y')";
			};
			class BcgCommonTop: RscBackgroundGUITop
			{
				backgroundType = 0;
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 11002;
				w = "(uinamespace getvariable 'RscBackground_W')";
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y')";
			};
			class TileGroup: RscControlsGroupNoScrollbars
			{
				h = "safezoneH";
				idc = 115099;
				w = "safezoneWAbs";
				x = "safezoneXAbs";
				y = "safezoneY";
				class Controls
				{
					class Background: RscText
					{
						colorBackground[] = {0, 0, 0, 0.5};
						h = "safezoneH";
						idc = 114999;
						w = "safezoneWAbs";
						x = 0;
						y = 0;
					};
				};
			};
			class Vignette: RscVignette
			{
				idc = 114998;
			};
		};
	};
	class RscCompass
	{
		duration = 1e+010;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		class Controls
		{
			class Compass: RscHorizontalCompass
			{
				h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "0.5 - 	(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2";
				y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
		};
	};
	class RscContactCredits
	{
		duration = 1e+010;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscContactCredits"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscContactCredits"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscContactCredits";
		scriptPath = "ContactTitles";
		class Controls
		{
			class Grid: RscControlsGroupNoScrollbars
			{
				h = "safezoneH";
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
				class Controls
				{
					class Grid_H00: RscPicture
					{
						h = "1 * pixelH";
						text = "#(rgb,1,1,1)color(0.196078,0.223529,0.239216,1)";
						w = "safezoneW";
						x = 0;
						y = "pixelH";
					};
					class Grid_H01: Grid_H00
					{
						y = "(01 / 	5) * 			safezoneH - (01 / 	5) * 	1 * pixelH";
					};
					class Grid_H02: Grid_H00
					{
						y = "(02 / 	5) * 			safezoneH - (02 / 	5) * 	1 * pixelH";
					};
					class Grid_H03: Grid_H00
					{
						y = "(03 / 	5) * 			safezoneH - (03 / 	5) * 	1 * pixelH";
					};
					class Grid_H04: Grid_H00
					{
						y = "(04 / 	5) * 			safezoneH - (04 / 	5) * 	1 * pixelH";
					};
					class Grid_H05: Grid_H00
					{
						y = "(05 / 	5) * 			safezoneH - (05 / 	5) * 	1 * pixelH";
					};
					class Grid_H06: Grid_H00
					{
						y = "(06 / 	5) * 			safezoneH - (06 / 	5) * 	1 * pixelH";
					};
					class Grid_H07: Grid_H00
					{
						y = "(07 / 	5) * 			safezoneH - (07 / 	5) * 	1 * pixelH";
					};
					class Grid_H08: Grid_H00
					{
						y = "(08 / 	5) * 			safezoneH - (08 / 	5) * 	1 * pixelH";
					};
					class Grid_H09: Grid_H00
					{
						y = "(09 / 	5) * 			safezoneH - (09 / 	5) * 	1 * pixelH";
					};
					class Grid_H10: Grid_H00
					{
						y = "(10 / 	5) * 			safezoneH - (10 / 	5) * 	1 * pixelH";
					};
					class Grid_H11: Grid_H00
					{
						y = "(11 / 	5) * 			safezoneH - (11 / 	5) * 	1 * pixelH";
					};
					class Grid_V00: Grid_H00
					{
						h = "safezoneH";
						w = "1 * pixelW";
					};
					class Grid_V01: Grid_V00
					{
						x = "(01 / 				11) * 			safezoneW - (01 / 				11) * 	1 * pixelW";
					};
					class Grid_V02: Grid_V00
					{
						x = "(02 / 				11) * 			safezoneW - (02 / 				11) * 	1 * pixelW";
					};
					class Grid_V03: Grid_V00
					{
						x = "(03 / 				11) * 			safezoneW - (03 / 				11) * 	1 * pixelW";
					};
					class Grid_V04: Grid_V00
					{
						x = "(04 / 				11) * 			safezoneW - (04 / 				11) * 	1 * pixelW";
					};
					class Grid_V05: Grid_V00
					{
						x = "(05 / 				11) * 			safezoneW - (05 / 				11) * 	1 * pixelW";
					};
					class Grid_V06: Grid_V00
					{
						x = "(06 / 				11) * 			safezoneW - (06 / 				11) * 	1 * pixelW";
					};
					class Grid_V07: Grid_V00
					{
						x = "(07 / 				11) * 			safezoneW - (07 / 				11) * 	1 * pixelW";
					};
					class Grid_V08: Grid_V00
					{
						x = "(08 / 				11) * 			safezoneW - (08 / 				11) * 	1 * pixelW";
					};
					class Grid_V09: Grid_V00
					{
						x = "(09 / 				11) * 			safezoneW - (09 / 				11) * 	1 * pixelW";
					};
					class Grid_V10: Grid_V00
					{
						x = "(10 / 				11) * 			safezoneW - (10 / 				11) * 	1 * pixelW";
					};
					class Grid_V11: Grid_V00
					{
						x = "(11 / 				11) * 			safezoneW - (11 / 				11) * 	1 * pixelW";
					};
				};
			};
			class Lines: RscControlsGroupNoScrollbars
			{
				h = "safezoneH";
				idc = 1999;
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
				class Controls
				{
					class Line00: RscLine
					{
						colorText[] = {1, 0.8, 0, 1};
						idc = 2000;
						w = "(-			safezoneW / 101)";
						x = 0;
					};
					class Line01: Line00
					{
						idc = 2001;
						x = "(			safezoneW / 101) * (01 + 	0)";
					};
					class Line02: Line00
					{
						idc = 2002;
						x = "(			safezoneW / 101) * (02 + 	0)";
					};
					class Line03: Line00
					{
						idc = 2003;
						x = "(			safezoneW / 101) * (03 + 	0)";
					};
					class Line04: Line00
					{
						idc = 2004;
						x = "(			safezoneW / 101) * (04 + 	0)";
					};
					class Line05: Line00
					{
						idc = 2005;
						x = "(			safezoneW / 101) * (05 + 	0)";
					};
					class Line06: Line00
					{
						idc = 2006;
						x = "(			safezoneW / 101) * (06 + 	0)";
					};
					class Line07: Line00
					{
						idc = 2007;
						x = "(			safezoneW / 101) * (07 + 	0)";
					};
					class Line08: Line00
					{
						idc = 2008;
						x = "(			safezoneW / 101) * (08 + 	0)";
					};
					class Line09: Line00
					{
						idc = 2009;
						x = "(			safezoneW / 101) * (09 + 	0)";
					};
					class Line10: Line00
					{
						idc = 2010;
						x = "(			safezoneW / 101) * (10 + 	0)";
					};
					class Line100: Line00
					{
						idc = 2100;
						x = "(			safezoneW / 101) * (100 + 	0)";
					};
					class Line11: Line00
					{
						idc = 2011;
						x = "(			safezoneW / 101) * (11 + 	0)";
					};
					class Line12: Line00
					{
						idc = 2012;
						x = "(			safezoneW / 101) * (12 + 	0)";
					};
					class Line13: Line00
					{
						idc = 2013;
						x = "(			safezoneW / 101) * (13 + 	0)";
					};
					class Line14: Line00
					{
						idc = 2014;
						x = "(			safezoneW / 101) * (14 + 	0)";
					};
					class Line15: Line00
					{
						idc = 2015;
						x = "(			safezoneW / 101) * (15 + 	0)";
					};
					class Line16: Line00
					{
						idc = 2016;
						x = "(			safezoneW / 101) * (16 + 	0)";
					};
					class Line17: Line00
					{
						idc = 2017;
						x = "(			safezoneW / 101) * (17 + 	0)";
					};
					class Line18: Line00
					{
						idc = 2018;
						x = "(			safezoneW / 101) * (18 + 	0)";
					};
					class Line19: Line00
					{
						idc = 2019;
						x = "(			safezoneW / 101) * (19 + 	0)";
					};
					class Line20: Line00
					{
						idc = 2020;
						x = "(			safezoneW / 101) * (20 + 	0)";
					};
					class Line21: Line00
					{
						idc = 2021;
						x = "(			safezoneW / 101) * (21 + 	0)";
					};
					class Line22: Line00
					{
						idc = 2022;
						x = "(			safezoneW / 101) * (22 + 	0)";
					};
					class Line23: Line00
					{
						idc = 2023;
						x = "(			safezoneW / 101) * (23 + 	0)";
					};
					class Line24: Line00
					{
						idc = 2024;
						x = "(			safezoneW / 101) * (24 + 	0)";
					};
					class Line25: Line00
					{
						idc = 2025;
						x = "(			safezoneW / 101) * (25 + 	0)";
					};
					class Line26: Line00
					{
						idc = 2026;
						x = "(			safezoneW / 101) * (26 + 	0)";
					};
					class Line27: Line00
					{
						idc = 2027;
						x = "(			safezoneW / 101) * (27 + 	0)";
					};
					class Line28: Line00
					{
						idc = 2028;
						x = "(			safezoneW / 101) * (28 + 	0)";
					};
					class Line29: Line00
					{
						idc = 2029;
						x = "(			safezoneW / 101) * (29 + 	0)";
					};
					class Line30: Line00
					{
						idc = 2030;
						x = "(			safezoneW / 101) * (30 + 	0)";
					};
					class Line31: Line00
					{
						idc = 2031;
						x = "(			safezoneW / 101) * (31 + 	0)";
					};
					class Line32: Line00
					{
						idc = 2032;
						x = "(			safezoneW / 101) * (32 + 	0)";
					};
					class Line33: Line00
					{
						idc = 2033;
						x = "(			safezoneW / 101) * (33 + 	0)";
					};
					class Line34: Line00
					{
						idc = 2034;
						x = "(			safezoneW / 101) * (34 + 	0)";
					};
					class Line35: Line00
					{
						idc = 2035;
						x = "(			safezoneW / 101) * (35 + 	0)";
					};
					class Line36: Line00
					{
						idc = 2036;
						x = "(			safezoneW / 101) * (36 + 	0)";
					};
					class Line37: Line00
					{
						idc = 2037;
						x = "(			safezoneW / 101) * (37 + 	0)";
					};
					class Line38: Line00
					{
						idc = 2038;
						x = "(			safezoneW / 101) * (38 + 	0)";
					};
					class Line39: Line00
					{
						idc = 2039;
						x = "(			safezoneW / 101) * (39 + 	0)";
					};
					class Line40: Line00
					{
						idc = 2040;
						x = "(			safezoneW / 101) * (40 + 	0)";
					};
					class Line41: Line00
					{
						idc = 2041;
						x = "(			safezoneW / 101) * (41 + 	0)";
					};
					class Line42: Line00
					{
						idc = 2042;
						x = "(			safezoneW / 101) * (42 + 	0)";
					};
					class Line43: Line00
					{
						idc = 2043;
						x = "(			safezoneW / 101) * (43 + 	0)";
					};
					class Line44: Line00
					{
						idc = 2044;
						x = "(			safezoneW / 101) * (44 + 	0)";
					};
					class Line45: Line00
					{
						idc = 2045;
						x = "(			safezoneW / 101) * (45 + 	0)";
					};
					class Line46: Line00
					{
						idc = 2046;
						x = "(			safezoneW / 101) * (46 + 	0)";
					};
					class Line47: Line00
					{
						idc = 2047;
						x = "(			safezoneW / 101) * (47 + 	0)";
					};
					class Line48: Line00
					{
						idc = 2048;
						x = "(			safezoneW / 101) * (48 + 	0)";
					};
					class Line49: Line00
					{
						idc = 2049;
						x = "(			safezoneW / 101) * (49 + 	0)";
					};
					class Line50: Line00
					{
						idc = 2050;
						x = "(			safezoneW / 101) * (50 + 	0)";
					};
					class Line51: Line00
					{
						idc = 2051;
						x = "(			safezoneW / 101) * (51 + 	0)";
					};
					class Line52: Line00
					{
						idc = 2052;
						x = "(			safezoneW / 101) * (52 + 	0)";
					};
					class Line53: Line00
					{
						idc = 2053;
						x = "(			safezoneW / 101) * (53 + 	0)";
					};
					class Line54: Line00
					{
						idc = 2054;
						x = "(			safezoneW / 101) * (54 + 	0)";
					};
					class Line55: Line00
					{
						idc = 2055;
						x = "(			safezoneW / 101) * (55 + 	0)";
					};
					class Line56: Line00
					{
						idc = 2056;
						x = "(			safezoneW / 101) * (56 + 	0)";
					};
					class Line57: Line00
					{
						idc = 2057;
						x = "(			safezoneW / 101) * (57 + 	0)";
					};
					class Line58: Line00
					{
						idc = 2058;
						x = "(			safezoneW / 101) * (58 + 	0)";
					};
					class Line59: Line00
					{
						idc = 2059;
						x = "(			safezoneW / 101) * (59 + 	0)";
					};
					class Line60: Line00
					{
						idc = 2060;
						x = "(			safezoneW / 101) * (60 + 	0)";
					};
					class Line61: Line00
					{
						idc = 2061;
						x = "(			safezoneW / 101) * (61 + 	0)";
					};
					class Line62: Line00
					{
						idc = 2062;
						x = "(			safezoneW / 101) * (62 + 	0)";
					};
					class Line63: Line00
					{
						idc = 2063;
						x = "(			safezoneW / 101) * (63 + 	0)";
					};
					class Line64: Line00
					{
						idc = 2064;
						x = "(			safezoneW / 101) * (64 + 	0)";
					};
					class Line65: Line00
					{
						idc = 2065;
						x = "(			safezoneW / 101) * (65 + 	0)";
					};
					class Line66: Line00
					{
						idc = 2066;
						x = "(			safezoneW / 101) * (66 + 	0)";
					};
					class Line67: Line00
					{
						idc = 2067;
						x = "(			safezoneW / 101) * (67 + 	0)";
					};
					class Line68: Line00
					{
						idc = 2068;
						x = "(			safezoneW / 101) * (68 + 	0)";
					};
					class Line69: Line00
					{
						idc = 2069;
						x = "(			safezoneW / 101) * (69 + 	0)";
					};
					class Line70: Line00
					{
						idc = 2070;
						x = "(			safezoneW / 101) * (70 + 	0)";
					};
					class Line71: Line00
					{
						idc = 2071;
						x = "(			safezoneW / 101) * (71 + 	0)";
					};
					class Line72: Line00
					{
						idc = 2072;
						x = "(			safezoneW / 101) * (72 + 	0)";
					};
					class Line73: Line00
					{
						idc = 2073;
						x = "(			safezoneW / 101) * (73 + 	0)";
					};
					class Line74: Line00
					{
						idc = 2074;
						x = "(			safezoneW / 101) * (74 + 	0)";
					};
					class Line75: Line00
					{
						idc = 2075;
						x = "(			safezoneW / 101) * (75 + 	0)";
					};
					class Line76: Line00
					{
						idc = 2076;
						x = "(			safezoneW / 101) * (76 + 	0)";
					};
					class Line77: Line00
					{
						idc = 2077;
						x = "(			safezoneW / 101) * (77 + 	0)";
					};
					class Line78: Line00
					{
						idc = 2078;
						x = "(			safezoneW / 101) * (78 + 	0)";
					};
					class Line79: Line00
					{
						idc = 2079;
						x = "(			safezoneW / 101) * (79 + 	0)";
					};
					class Line80: Line00
					{
						idc = 2080;
						x = "(			safezoneW / 101) * (80 + 	0)";
					};
					class Line81: Line00
					{
						idc = 2081;
						x = "(			safezoneW / 101) * (81 + 	0)";
					};
					class Line82: Line00
					{
						idc = 2082;
						x = "(			safezoneW / 101) * (82 + 	0)";
					};
					class Line83: Line00
					{
						idc = 2083;
						x = "(			safezoneW / 101) * (83 + 	0)";
					};
					class Line84: Line00
					{
						idc = 2084;
						x = "(			safezoneW / 101) * (84 + 	0)";
					};
					class Line85: Line00
					{
						idc = 2085;
						x = "(			safezoneW / 101) * (85 + 	0)";
					};
					class Line86: Line00
					{
						idc = 2086;
						x = "(			safezoneW / 101) * (86 + 	0)";
					};
					class Line87: Line00
					{
						idc = 2087;
						x = "(			safezoneW / 101) * (87 + 	0)";
					};
					class Line88: Line00
					{
						idc = 2088;
						x = "(			safezoneW / 101) * (88 + 	0)";
					};
					class Line89: Line00
					{
						idc = 2089;
						x = "(			safezoneW / 101) * (89 + 	0)";
					};
					class Line90: Line00
					{
						idc = 2090;
						x = "(			safezoneW / 101) * (90 + 	0)";
					};
					class Line91: Line00
					{
						idc = 2091;
						x = "(			safezoneW / 101) * (91 + 	0)";
					};
					class Line92: Line00
					{
						idc = 2092;
						x = "(			safezoneW / 101) * (92 + 	0)";
					};
					class Line93: Line00
					{
						idc = 2093;
						x = "(			safezoneW / 101) * (93 + 	0)";
					};
					class Line94: Line00
					{
						idc = 2094;
						x = "(			safezoneW / 101) * (94 + 	0)";
					};
					class Line95: Line00
					{
						idc = 2095;
						x = "(			safezoneW / 101) * (95 + 	0)";
					};
					class Line96: Line00
					{
						idc = 2096;
						x = "(			safezoneW / 101) * (96 + 	0)";
					};
					class Line97: Line00
					{
						idc = 2097;
						x = "(			safezoneW / 101) * (97 + 	0)";
					};
					class Line98: Line00
					{
						idc = 2098;
						x = "(			safezoneW / 101) * (98 + 	0)";
					};
					class Line99: Line00
					{
						idc = 2099;
						x = "(			safezoneW / 101) * (99 + 	0)";
					};
					class LineOld00: RscPicture
					{
						colorText[] = {0.262745, 0.243137, 0.113725, 1};
						idc = 3000;
						text = "\a3\UI_F_Contact\Data\RscIngameUI\RscWeaponSpectrumAnalyzer\lineOld_ca.paa";
						w = "(			safezoneW / 101)";
						x = 0;
					};
					class LineOld01: LineOld00
					{
						idc = 3001;
						x = "(			safezoneW / 101) * (01 + 	-0.5)";
					};
					class LineOld02: LineOld00
					{
						idc = 3002;
						x = "(			safezoneW / 101) * (02 + 	-0.5)";
					};
					class LineOld03: LineOld00
					{
						idc = 3003;
						x = "(			safezoneW / 101) * (03 + 	-0.5)";
					};
					class LineOld04: LineOld00
					{
						idc = 3004;
						x = "(			safezoneW / 101) * (04 + 	-0.5)";
					};
					class LineOld05: LineOld00
					{
						idc = 3005;
						x = "(			safezoneW / 101) * (05 + 	-0.5)";
					};
					class LineOld06: LineOld00
					{
						idc = 3006;
						x = "(			safezoneW / 101) * (06 + 	-0.5)";
					};
					class LineOld07: LineOld00
					{
						idc = 3007;
						x = "(			safezoneW / 101) * (07 + 	-0.5)";
					};
					class LineOld08: LineOld00
					{
						idc = 3008;
						x = "(			safezoneW / 101) * (08 + 	-0.5)";
					};
					class LineOld09: LineOld00
					{
						idc = 3009;
						x = "(			safezoneW / 101) * (09 + 	-0.5)";
					};
					class LineOld10: LineOld00
					{
						idc = 3010;
						x = "(			safezoneW / 101) * (10 + 	-0.5)";
					};
					class LineOld100: LineOld00
					{
						idc = 3100;
						x = "(			safezoneW / 101) * (100 + 	-0.5)";
					};
					class LineOld11: LineOld00
					{
						idc = 3011;
						x = "(			safezoneW / 101) * (11 + 	-0.5)";
					};
					class LineOld12: LineOld00
					{
						idc = 3012;
						x = "(			safezoneW / 101) * (12 + 	-0.5)";
					};
					class LineOld13: LineOld00
					{
						idc = 3013;
						x = "(			safezoneW / 101) * (13 + 	-0.5)";
					};
					class LineOld14: LineOld00
					{
						idc = 3014;
						x = "(			safezoneW / 101) * (14 + 	-0.5)";
					};
					class LineOld15: LineOld00
					{
						idc = 3015;
						x = "(			safezoneW / 101) * (15 + 	-0.5)";
					};
					class LineOld16: LineOld00
					{
						idc = 3016;
						x = "(			safezoneW / 101) * (16 + 	-0.5)";
					};
					class LineOld17: LineOld00
					{
						idc = 3017;
						x = "(			safezoneW / 101) * (17 + 	-0.5)";
					};
					class LineOld18: LineOld00
					{
						idc = 3018;
						x = "(			safezoneW / 101) * (18 + 	-0.5)";
					};
					class LineOld19: LineOld00
					{
						idc = 3019;
						x = "(			safezoneW / 101) * (19 + 	-0.5)";
					};
					class LineOld20: LineOld00
					{
						idc = 3020;
						x = "(			safezoneW / 101) * (20 + 	-0.5)";
					};
					class LineOld21: LineOld00
					{
						idc = 3021;
						x = "(			safezoneW / 101) * (21 + 	-0.5)";
					};
					class LineOld22: LineOld00
					{
						idc = 3022;
						x = "(			safezoneW / 101) * (22 + 	-0.5)";
					};
					class LineOld23: LineOld00
					{
						idc = 3023;
						x = "(			safezoneW / 101) * (23 + 	-0.5)";
					};
					class LineOld24: LineOld00
					{
						idc = 3024;
						x = "(			safezoneW / 101) * (24 + 	-0.5)";
					};
					class LineOld25: LineOld00
					{
						idc = 3025;
						x = "(			safezoneW / 101) * (25 + 	-0.5)";
					};
					class LineOld26: LineOld00
					{
						idc = 3026;
						x = "(			safezoneW / 101) * (26 + 	-0.5)";
					};
					class LineOld27: LineOld00
					{
						idc = 3027;
						x = "(			safezoneW / 101) * (27 + 	-0.5)";
					};
					class LineOld28: LineOld00
					{
						idc = 3028;
						x = "(			safezoneW / 101) * (28 + 	-0.5)";
					};
					class LineOld29: LineOld00
					{
						idc = 3029;
						x = "(			safezoneW / 101) * (29 + 	-0.5)";
					};
					class LineOld30: LineOld00
					{
						idc = 3030;
						x = "(			safezoneW / 101) * (30 + 	-0.5)";
					};
					class LineOld31: LineOld00
					{
						idc = 3031;
						x = "(			safezoneW / 101) * (31 + 	-0.5)";
					};
					class LineOld32: LineOld00
					{
						idc = 3032;
						x = "(			safezoneW / 101) * (32 + 	-0.5)";
					};
					class LineOld33: LineOld00
					{
						idc = 3033;
						x = "(			safezoneW / 101) * (33 + 	-0.5)";
					};
					class LineOld34: LineOld00
					{
						idc = 3034;
						x = "(			safezoneW / 101) * (34 + 	-0.5)";
					};
					class LineOld35: LineOld00
					{
						idc = 3035;
						x = "(			safezoneW / 101) * (35 + 	-0.5)";
					};
					class LineOld36: LineOld00
					{
						idc = 3036;
						x = "(			safezoneW / 101) * (36 + 	-0.5)";
					};
					class LineOld37: LineOld00
					{
						idc = 3037;
						x = "(			safezoneW / 101) * (37 + 	-0.5)";
					};
					class LineOld38: LineOld00
					{
						idc = 3038;
						x = "(			safezoneW / 101) * (38 + 	-0.5)";
					};
					class LineOld39: LineOld00
					{
						idc = 3039;
						x = "(			safezoneW / 101) * (39 + 	-0.5)";
					};
					class LineOld40: LineOld00
					{
						idc = 3040;
						x = "(			safezoneW / 101) * (40 + 	-0.5)";
					};
					class LineOld41: LineOld00
					{
						idc = 3041;
						x = "(			safezoneW / 101) * (41 + 	-0.5)";
					};
					class LineOld42: LineOld00
					{
						idc = 3042;
						x = "(			safezoneW / 101) * (42 + 	-0.5)";
					};
					class LineOld43: LineOld00
					{
						idc = 3043;
						x = "(			safezoneW / 101) * (43 + 	-0.5)";
					};
					class LineOld44: LineOld00
					{
						idc = 3044;
						x = "(			safezoneW / 101) * (44 + 	-0.5)";
					};
					class LineOld45: LineOld00
					{
						idc = 3045;
						x = "(			safezoneW / 101) * (45 + 	-0.5)";
					};
					class LineOld46: LineOld00
					{
						idc = 3046;
						x = "(			safezoneW / 101) * (46 + 	-0.5)";
					};
					class LineOld47: LineOld00
					{
						idc = 3047;
						x = "(			safezoneW / 101) * (47 + 	-0.5)";
					};
					class LineOld48: LineOld00
					{
						idc = 3048;
						x = "(			safezoneW / 101) * (48 + 	-0.5)";
					};
					class LineOld49: LineOld00
					{
						idc = 3049;
						x = "(			safezoneW / 101) * (49 + 	-0.5)";
					};
					class LineOld50: LineOld00
					{
						idc = 3050;
						x = "(			safezoneW / 101) * (50 + 	-0.5)";
					};
					class LineOld51: LineOld00
					{
						idc = 3051;
						x = "(			safezoneW / 101) * (51 + 	-0.5)";
					};
					class LineOld52: LineOld00
					{
						idc = 3052;
						x = "(			safezoneW / 101) * (52 + 	-0.5)";
					};
					class LineOld53: LineOld00
					{
						idc = 3053;
						x = "(			safezoneW / 101) * (53 + 	-0.5)";
					};
					class LineOld54: LineOld00
					{
						idc = 3054;
						x = "(			safezoneW / 101) * (54 + 	-0.5)";
					};
					class LineOld55: LineOld00
					{
						idc = 3055;
						x = "(			safezoneW / 101) * (55 + 	-0.5)";
					};
					class LineOld56: LineOld00
					{
						idc = 3056;
						x = "(			safezoneW / 101) * (56 + 	-0.5)";
					};
					class LineOld57: LineOld00
					{
						idc = 3057;
						x = "(			safezoneW / 101) * (57 + 	-0.5)";
					};
					class LineOld58: LineOld00
					{
						idc = 3058;
						x = "(			safezoneW / 101) * (58 + 	-0.5)";
					};
					class LineOld59: LineOld00
					{
						idc = 3059;
						x = "(			safezoneW / 101) * (59 + 	-0.5)";
					};
					class LineOld60: LineOld00
					{
						idc = 3060;
						x = "(			safezoneW / 101) * (60 + 	-0.5)";
					};
					class LineOld61: LineOld00
					{
						idc = 3061;
						x = "(			safezoneW / 101) * (61 + 	-0.5)";
					};
					class LineOld62: LineOld00
					{
						idc = 3062;
						x = "(			safezoneW / 101) * (62 + 	-0.5)";
					};
					class LineOld63: LineOld00
					{
						idc = 3063;
						x = "(			safezoneW / 101) * (63 + 	-0.5)";
					};
					class LineOld64: LineOld00
					{
						idc = 3064;
						x = "(			safezoneW / 101) * (64 + 	-0.5)";
					};
					class LineOld65: LineOld00
					{
						idc = 3065;
						x = "(			safezoneW / 101) * (65 + 	-0.5)";
					};
					class LineOld66: LineOld00
					{
						idc = 3066;
						x = "(			safezoneW / 101) * (66 + 	-0.5)";
					};
					class LineOld67: LineOld00
					{
						idc = 3067;
						x = "(			safezoneW / 101) * (67 + 	-0.5)";
					};
					class LineOld68: LineOld00
					{
						idc = 3068;
						x = "(			safezoneW / 101) * (68 + 	-0.5)";
					};
					class LineOld69: LineOld00
					{
						idc = 3069;
						x = "(			safezoneW / 101) * (69 + 	-0.5)";
					};
					class LineOld70: LineOld00
					{
						idc = 3070;
						x = "(			safezoneW / 101) * (70 + 	-0.5)";
					};
					class LineOld71: LineOld00
					{
						idc = 3071;
						x = "(			safezoneW / 101) * (71 + 	-0.5)";
					};
					class LineOld72: LineOld00
					{
						idc = 3072;
						x = "(			safezoneW / 101) * (72 + 	-0.5)";
					};
					class LineOld73: LineOld00
					{
						idc = 3073;
						x = "(			safezoneW / 101) * (73 + 	-0.5)";
					};
					class LineOld74: LineOld00
					{
						idc = 3074;
						x = "(			safezoneW / 101) * (74 + 	-0.5)";
					};
					class LineOld75: LineOld00
					{
						idc = 3075;
						x = "(			safezoneW / 101) * (75 + 	-0.5)";
					};
					class LineOld76: LineOld00
					{
						idc = 3076;
						x = "(			safezoneW / 101) * (76 + 	-0.5)";
					};
					class LineOld77: LineOld00
					{
						idc = 3077;
						x = "(			safezoneW / 101) * (77 + 	-0.5)";
					};
					class LineOld78: LineOld00
					{
						idc = 3078;
						x = "(			safezoneW / 101) * (78 + 	-0.5)";
					};
					class LineOld79: LineOld00
					{
						idc = 3079;
						x = "(			safezoneW / 101) * (79 + 	-0.5)";
					};
					class LineOld80: LineOld00
					{
						idc = 3080;
						x = "(			safezoneW / 101) * (80 + 	-0.5)";
					};
					class LineOld81: LineOld00
					{
						idc = 3081;
						x = "(			safezoneW / 101) * (81 + 	-0.5)";
					};
					class LineOld82: LineOld00
					{
						idc = 3082;
						x = "(			safezoneW / 101) * (82 + 	-0.5)";
					};
					class LineOld83: LineOld00
					{
						idc = 3083;
						x = "(			safezoneW / 101) * (83 + 	-0.5)";
					};
					class LineOld84: LineOld00
					{
						idc = 3084;
						x = "(			safezoneW / 101) * (84 + 	-0.5)";
					};
					class LineOld85: LineOld00
					{
						idc = 3085;
						x = "(			safezoneW / 101) * (85 + 	-0.5)";
					};
					class LineOld86: LineOld00
					{
						idc = 3086;
						x = "(			safezoneW / 101) * (86 + 	-0.5)";
					};
					class LineOld87: LineOld00
					{
						idc = 3087;
						x = "(			safezoneW / 101) * (87 + 	-0.5)";
					};
					class LineOld88: LineOld00
					{
						idc = 3088;
						x = "(			safezoneW / 101) * (88 + 	-0.5)";
					};
					class LineOld89: LineOld00
					{
						idc = 3089;
						x = "(			safezoneW / 101) * (89 + 	-0.5)";
					};
					class LineOld90: LineOld00
					{
						idc = 3090;
						x = "(			safezoneW / 101) * (90 + 	-0.5)";
					};
					class LineOld91: LineOld00
					{
						idc = 3091;
						x = "(			safezoneW / 101) * (91 + 	-0.5)";
					};
					class LineOld92: LineOld00
					{
						idc = 3092;
						x = "(			safezoneW / 101) * (92 + 	-0.5)";
					};
					class LineOld93: LineOld00
					{
						idc = 3093;
						x = "(			safezoneW / 101) * (93 + 	-0.5)";
					};
					class LineOld94: LineOld00
					{
						idc = 3094;
						x = "(			safezoneW / 101) * (94 + 	-0.5)";
					};
					class LineOld95: LineOld00
					{
						idc = 3095;
						x = "(			safezoneW / 101) * (95 + 	-0.5)";
					};
					class LineOld96: LineOld00
					{
						idc = 3096;
						x = "(			safezoneW / 101) * (96 + 	-0.5)";
					};
					class LineOld97: LineOld00
					{
						idc = 3097;
						x = "(			safezoneW / 101) * (97 + 	-0.5)";
					};
					class LineOld98: LineOld00
					{
						idc = 3098;
						x = "(			safezoneW / 101) * (98 + 	-0.5)";
					};
					class LineOld99: LineOld00
					{
						idc = 3099;
						x = "(			safezoneW / 101) * (99 + 	-0.5)";
					};
				};
			};
			class Overlay: RscText
			{
				colorBackground[] = {0, 0, 0, 0.15};
				h = "safezoneH";
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
			};
			class Selected: RscControlsGroupNoScrollbars
			{
				h = "safezoneH";
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
				class Controls
				{
					class Focus: RscPicture
					{
						colorText[] = {0.28, 0.73, 1, 0.2};
						fade = 1;
						h = 0;
						idc = 4002;
						text = "#(rgb,1,1,1)color(1,1,1,0.5)";
						w = 0;
					};
					class Progress: RscPicture
					{
						colorText[] = {0.28, 0.73, 1, 0.4};
						fade = 1;
						h = 0;
						idc = 4005;
						text = "#(rgb,1,1,1)color(1,1,1,0.5)";
						w = 0;
					};
					class Selected: RscPicture
					{
						colorText[] = {0.28, 0.73, 1, 1};
						fade = 0;
						idc = 4000;
						text = "\a3\UI_F_Contact\Data\RscIngameUI\RscWeaponSpectrumAnalyzer\selectedCredits_ca.paa";
						w = 0;
					};
					class TransmitOverlay: RscPicture
					{
						colorText[] = {0, 0, 0, 0.5};
						h = "safezoneH";
						idc = 1997;
						show = 0;
						text = "#(rgb,1,1,1)color(1,1,1,0.5)";
						w = "safezoneW";
					};
				};
			};
			class Vignette: RscVignette
			{
				colorText[] = {0, 0, 0, 0.5};
				h = "safezoneH";
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
			};
		};
		class ControlsBackground
		{
			class Background: RscPicture
			{
				h = "safezoneH";
				text = "#(rgb,1,1,1)color(0.0901961,0.113725,0.129412,1)";
				w = "safezoneWAbs * 1.1";
				x = "safezoneXAbs";
				y = "safezoneY";
			};
			class Map: RscMapControlEmpty
			{
				h = 0;
				onDraw = "['onDraw',_this,''] call (uinamespace getvariable 'RscContactCredits_script');";
				scaleMax = 0.001;
				scaleMin = 0.001;
				w = 0;
			};
		};
	};
	class RscCredits
	{
		duration = 1e+011;
		fadein = 0;
		idd = 999;
		movingEnable = 1;
		class controls
		{
			class Picture_0: RscPicture
			{
				autoplay = 1;
				idc = 1200;
				loops = 1;
				text = "";
				x = -3;
				y = -3;
			};
			class Picture_1: Picture_0
			{
				idc = 1201;
			};
			class Picture_10: Picture_0
			{
				idc = 1210;
			};
			class Picture_11: Picture_0
			{
				idc = 1211;
			};
			class Picture_12: Picture_0
			{
				idc = 1212;
			};
			class Picture_13: Picture_0
			{
				idc = 1213;
			};
			class Picture_14: Picture_0
			{
				idc = 1214;
			};
			class Picture_15: Picture_0
			{
				idc = 1215;
			};
			class Picture_16: Picture_0
			{
				idc = 1216;
			};
			class Picture_17: Picture_0
			{
				idc = 1217;
			};
			class Picture_18: Picture_0
			{
				idc = 1218;
			};
			class Picture_19: Picture_0
			{
				idc = 1219;
			};
			class Picture_2: Picture_0
			{
				idc = 1202;
			};
			class Picture_20: Picture_0
			{
				idc = 1220;
			};
			class Picture_21: Picture_0
			{
				idc = 1221;
			};
			class Picture_22: Picture_0
			{
				idc = 1222;
			};
			class Picture_23: Picture_0
			{
				idc = 1223;
			};
			class Picture_24: Picture_0
			{
				idc = 1224;
			};
			class Picture_25: Picture_0
			{
				idc = 1225;
			};
			class Picture_26: Picture_0
			{
				idc = 1226;
			};
			class Picture_27: Picture_0
			{
				idc = 1227;
			};
			class Picture_28: Picture_0
			{
				idc = 1228;
			};
			class Picture_29: Picture_0
			{
				idc = 1229;
			};
			class Picture_3: Picture_0
			{
				idc = 1203;
			};
			class Picture_30: Picture_0
			{
				idc = 1230;
			};
			class Picture_31: Picture_0
			{
				idc = 1231;
			};
			class Picture_32: Picture_0
			{
				idc = 1232;
			};
			class Picture_33: Picture_0
			{
				idc = 1233;
			};
			class Picture_34: Picture_0
			{
				idc = 1234;
			};
			class Picture_35: Picture_0
			{
				idc = 1235;
			};
			class Picture_36: Picture_0
			{
				idc = 1236;
			};
			class Picture_37: Picture_0
			{
				idc = 1237;
			};
			class Picture_38: Picture_0
			{
				idc = 1238;
			};
			class Picture_39: Picture_0
			{
				idc = 1239;
			};
			class Picture_4: Picture_0
			{
				idc = 1204;
			};
			class Picture_40: Picture_0
			{
				idc = 1240;
			};
			class Picture_41: Picture_0
			{
				idc = 1241;
			};
			class Picture_42: Picture_0
			{
				idc = 1242;
			};
			class Picture_43: Picture_0
			{
				idc = 1243;
			};
			class Picture_44: Picture_0
			{
				idc = 1244;
			};
			class Picture_45: Picture_0
			{
				idc = 1245;
			};
			class Picture_46: Picture_0
			{
				idc = 1246;
			};
			class Picture_47: Picture_0
			{
				idc = 1247;
			};
			class Picture_48: Picture_0
			{
				idc = 1248;
			};
			class Picture_49: Picture_0
			{
				idc = 1249;
			};
			class Picture_5: Picture_0
			{
				idc = 1205;
			};
			class Picture_50: Picture_0
			{
				idc = 1250;
			};
			class Picture_51: Picture_0
			{
				idc = 1251;
			};
			class Picture_52: Picture_0
			{
				idc = 1252;
			};
			class Picture_53: Picture_0
			{
				idc = 1253;
			};
			class Picture_54: Picture_0
			{
				idc = 1254;
			};
			class Picture_55: Picture_0
			{
				idc = 1255;
			};
			class Picture_56: Picture_0
			{
				idc = 1256;
			};
			class Picture_57: Picture_0
			{
				idc = 1257;
			};
			class Picture_58: Picture_0
			{
				idc = 1258;
			};
			class Picture_59: Picture_0
			{
				idc = 1259;
			};
			class Picture_6: Picture_0
			{
				idc = 1206;
			};
			class Picture_60: Picture_0
			{
				idc = 1260;
			};
			class Picture_61: Picture_0
			{
				idc = 1261;
			};
			class Picture_62: Picture_0
			{
				idc = 1262;
			};
			class Picture_63: Picture_0
			{
				idc = 1263;
			};
			class Picture_64: Picture_0
			{
				idc = 1264;
			};
			class Picture_65: Picture_0
			{
				idc = 1265;
			};
			class Picture_66: Picture_0
			{
				idc = 1266;
			};
			class Picture_67: Picture_0
			{
				idc = 1267;
			};
			class Picture_68: Picture_0
			{
				idc = 1268;
			};
			class Picture_69: Picture_0
			{
				idc = 1269;
			};
			class Picture_7: Picture_0
			{
				idc = 1207;
			};
			class Picture_70: Picture_0
			{
				idc = 1270;
			};
			class Picture_71: Picture_0
			{
				idc = 1271;
			};
			class Picture_72: Picture_0
			{
				idc = 1272;
			};
			class Picture_73: Picture_0
			{
				idc = 1273;
			};
			class Picture_74: Picture_0
			{
				idc = 1274;
			};
			class Picture_75: Picture_0
			{
				idc = 1275;
			};
			class Picture_76: Picture_0
			{
				idc = 1276;
			};
			class Picture_77: Picture_0
			{
				idc = 1277;
			};
			class Picture_78: Picture_0
			{
				idc = 1278;
			};
			class Picture_79: Picture_0
			{
				idc = 1279;
			};
			class Picture_8: Picture_0
			{
				idc = 1208;
			};
			class Picture_80: Picture_0
			{
				idc = 1280;
			};
			class Picture_81: Picture_0
			{
				idc = 1281;
			};
			class Picture_82: Picture_0
			{
				idc = 1282;
			};
			class Picture_83: Picture_0
			{
				idc = 1283;
			};
			class Picture_84: Picture_0
			{
				idc = 1284;
			};
			class Picture_85: Picture_0
			{
				idc = 1285;
			};
			class Picture_86: Picture_0
			{
				idc = 1286;
			};
			class Picture_87: Picture_0
			{
				idc = 1287;
			};
			class Picture_88: Picture_0
			{
				idc = 1288;
			};
			class Picture_89: Picture_0
			{
				idc = 1289;
			};
			class Picture_9: Picture_0
			{
				idc = 1209;
			};
			class Picture_90: Picture_0
			{
				idc = 1290;
			};
			class Picture_91: Picture_0
			{
				idc = 1291;
			};
			class Picture_92: Picture_0
			{
				idc = 1292;
			};
			class Picture_93: Picture_0
			{
				idc = 1293;
			};
			class Picture_94: Picture_0
			{
				idc = 1294;
			};
			class Picture_95: Picture_0
			{
				idc = 1295;
			};
			class Picture_96: Picture_0
			{
				idc = 1296;
			};
			class Picture_97: Picture_0
			{
				idc = 1297;
			};
			class Picture_98: Picture_0
			{
				idc = 1298;
			};
			class Picture_99: Picture_0
			{
				idc = 1299;
			};
			class PictureKeepAspect_0: RscPictureKeepAspect
			{
				idc = 1300;
				text = "";
				x = -3;
				y = -3;
			};
			class PictureKeepAspect_1: PictureKeepAspect_0
			{
				idc = 1301;
			};
			class PictureKeepAspect_10: PictureKeepAspect_0
			{
				idc = 1310;
			};
			class PictureKeepAspect_11: PictureKeepAspect_0
			{
				idc = 1311;
			};
			class PictureKeepAspect_12: PictureKeepAspect_0
			{
				idc = 1312;
			};
			class PictureKeepAspect_13: PictureKeepAspect_0
			{
				idc = 1313;
			};
			class PictureKeepAspect_14: PictureKeepAspect_0
			{
				idc = 1314;
			};
			class PictureKeepAspect_15: PictureKeepAspect_0
			{
				idc = 1315;
			};
			class PictureKeepAspect_16: PictureKeepAspect_0
			{
				idc = 1316;
			};
			class PictureKeepAspect_17: PictureKeepAspect_0
			{
				idc = 1317;
			};
			class PictureKeepAspect_18: PictureKeepAspect_0
			{
				idc = 1318;
			};
			class PictureKeepAspect_19: PictureKeepAspect_0
			{
				idc = 1319;
			};
			class PictureKeepAspect_2: PictureKeepAspect_0
			{
				idc = 1302;
			};
			class PictureKeepAspect_20: PictureKeepAspect_0
			{
				idc = 1320;
			};
			class PictureKeepAspect_21: PictureKeepAspect_0
			{
				idc = 1321;
			};
			class PictureKeepAspect_22: PictureKeepAspect_0
			{
				idc = 1322;
			};
			class PictureKeepAspect_23: PictureKeepAspect_0
			{
				idc = 1323;
			};
			class PictureKeepAspect_24: PictureKeepAspect_0
			{
				idc = 1324;
			};
			class PictureKeepAspect_25: PictureKeepAspect_0
			{
				idc = 1325;
			};
			class PictureKeepAspect_26: PictureKeepAspect_0
			{
				idc = 1326;
			};
			class PictureKeepAspect_27: PictureKeepAspect_0
			{
				idc = 1327;
			};
			class PictureKeepAspect_28: PictureKeepAspect_0
			{
				idc = 1328;
			};
			class PictureKeepAspect_29: PictureKeepAspect_0
			{
				idc = 1329;
			};
			class PictureKeepAspect_3: PictureKeepAspect_0
			{
				idc = 1303;
			};
			class PictureKeepAspect_30: PictureKeepAspect_0
			{
				idc = 1330;
			};
			class PictureKeepAspect_31: PictureKeepAspect_0
			{
				idc = 1331;
			};
			class PictureKeepAspect_32: PictureKeepAspect_0
			{
				idc = 1332;
			};
			class PictureKeepAspect_33: PictureKeepAspect_0
			{
				idc = 1333;
			};
			class PictureKeepAspect_34: PictureKeepAspect_0
			{
				idc = 1334;
			};
			class PictureKeepAspect_35: PictureKeepAspect_0
			{
				idc = 1335;
			};
			class PictureKeepAspect_36: PictureKeepAspect_0
			{
				idc = 1336;
			};
			class PictureKeepAspect_37: PictureKeepAspect_0
			{
				idc = 1337;
			};
			class PictureKeepAspect_38: PictureKeepAspect_0
			{
				idc = 1338;
			};
			class PictureKeepAspect_39: PictureKeepAspect_0
			{
				idc = 1339;
			};
			class PictureKeepAspect_4: PictureKeepAspect_0
			{
				idc = 1304;
			};
			class PictureKeepAspect_40: PictureKeepAspect_0
			{
				idc = 1340;
			};
			class PictureKeepAspect_41: PictureKeepAspect_0
			{
				idc = 1341;
			};
			class PictureKeepAspect_42: PictureKeepAspect_0
			{
				idc = 1342;
			};
			class PictureKeepAspect_43: PictureKeepAspect_0
			{
				idc = 1343;
			};
			class PictureKeepAspect_44: PictureKeepAspect_0
			{
				idc = 1344;
			};
			class PictureKeepAspect_45: PictureKeepAspect_0
			{
				idc = 1345;
			};
			class PictureKeepAspect_46: PictureKeepAspect_0
			{
				idc = 1346;
			};
			class PictureKeepAspect_47: PictureKeepAspect_0
			{
				idc = 1347;
			};
			class PictureKeepAspect_48: PictureKeepAspect_0
			{
				idc = 1348;
			};
			class PictureKeepAspect_49: PictureKeepAspect_0
			{
				idc = 1349;
			};
			class PictureKeepAspect_5: PictureKeepAspect_0
			{
				idc = 1305;
			};
			class PictureKeepAspect_50: PictureKeepAspect_0
			{
				idc = 1350;
			};
			class PictureKeepAspect_51: PictureKeepAspect_0
			{
				idc = 1351;
			};
			class PictureKeepAspect_52: PictureKeepAspect_0
			{
				idc = 1352;
			};
			class PictureKeepAspect_53: PictureKeepAspect_0
			{
				idc = 1353;
			};
			class PictureKeepAspect_54: PictureKeepAspect_0
			{
				idc = 1354;
			};
			class PictureKeepAspect_55: PictureKeepAspect_0
			{
				idc = 1355;
			};
			class PictureKeepAspect_56: PictureKeepAspect_0
			{
				idc = 1356;
			};
			class PictureKeepAspect_57: PictureKeepAspect_0
			{
				idc = 1357;
			};
			class PictureKeepAspect_58: PictureKeepAspect_0
			{
				idc = 1358;
			};
			class PictureKeepAspect_59: PictureKeepAspect_0
			{
				idc = 1359;
			};
			class PictureKeepAspect_6: PictureKeepAspect_0
			{
				idc = 1306;
			};
			class PictureKeepAspect_60: PictureKeepAspect_0
			{
				idc = 1360;
			};
			class PictureKeepAspect_61: PictureKeepAspect_0
			{
				idc = 1361;
			};
			class PictureKeepAspect_62: PictureKeepAspect_0
			{
				idc = 1362;
			};
			class PictureKeepAspect_63: PictureKeepAspect_0
			{
				idc = 1363;
			};
			class PictureKeepAspect_64: PictureKeepAspect_0
			{
				idc = 1364;
			};
			class PictureKeepAspect_65: PictureKeepAspect_0
			{
				idc = 1365;
			};
			class PictureKeepAspect_66: PictureKeepAspect_0
			{
				idc = 1366;
			};
			class PictureKeepAspect_67: PictureKeepAspect_0
			{
				idc = 1367;
			};
			class PictureKeepAspect_68: PictureKeepAspect_0
			{
				idc = 1368;
			};
			class PictureKeepAspect_69: PictureKeepAspect_0
			{
				idc = 1369;
			};
			class PictureKeepAspect_7: PictureKeepAspect_0
			{
				idc = 1307;
			};
			class PictureKeepAspect_70: PictureKeepAspect_0
			{
				idc = 1370;
			};
			class PictureKeepAspect_71: PictureKeepAspect_0
			{
				idc = 1371;
			};
			class PictureKeepAspect_72: PictureKeepAspect_0
			{
				idc = 1372;
			};
			class PictureKeepAspect_73: PictureKeepAspect_0
			{
				idc = 1373;
			};
			class PictureKeepAspect_74: PictureKeepAspect_0
			{
				idc = 1374;
			};
			class PictureKeepAspect_75: PictureKeepAspect_0
			{
				idc = 1375;
			};
			class PictureKeepAspect_76: PictureKeepAspect_0
			{
				idc = 1376;
			};
			class PictureKeepAspect_77: PictureKeepAspect_0
			{
				idc = 1377;
			};
			class PictureKeepAspect_78: PictureKeepAspect_0
			{
				idc = 1378;
			};
			class PictureKeepAspect_79: PictureKeepAspect_0
			{
				idc = 1379;
			};
			class PictureKeepAspect_8: PictureKeepAspect_0
			{
				idc = 1308;
			};
			class PictureKeepAspect_80: PictureKeepAspect_0
			{
				idc = 1380;
			};
			class PictureKeepAspect_81: PictureKeepAspect_0
			{
				idc = 1381;
			};
			class PictureKeepAspect_82: PictureKeepAspect_0
			{
				idc = 1382;
			};
			class PictureKeepAspect_83: PictureKeepAspect_0
			{
				idc = 1383;
			};
			class PictureKeepAspect_84: PictureKeepAspect_0
			{
				idc = 1384;
			};
			class PictureKeepAspect_85: PictureKeepAspect_0
			{
				idc = 1385;
			};
			class PictureKeepAspect_86: PictureKeepAspect_0
			{
				idc = 1386;
			};
			class PictureKeepAspect_87: PictureKeepAspect_0
			{
				idc = 1387;
			};
			class PictureKeepAspect_88: PictureKeepAspect_0
			{
				idc = 1388;
			};
			class PictureKeepAspect_89: PictureKeepAspect_0
			{
				idc = 1389;
			};
			class PictureKeepAspect_9: PictureKeepAspect_0
			{
				idc = 1309;
			};
			class PictureKeepAspect_90: PictureKeepAspect_0
			{
				idc = 1390;
			};
			class PictureKeepAspect_91: PictureKeepAspect_0
			{
				idc = 1391;
			};
			class PictureKeepAspect_92: PictureKeepAspect_0
			{
				idc = 1392;
			};
			class PictureKeepAspect_93: PictureKeepAspect_0
			{
				idc = 1393;
			};
			class PictureKeepAspect_94: PictureKeepAspect_0
			{
				idc = 1394;
			};
			class PictureKeepAspect_95: PictureKeepAspect_0
			{
				idc = 1395;
			};
			class PictureKeepAspect_96: PictureKeepAspect_0
			{
				idc = 1396;
			};
			class PictureKeepAspect_97: PictureKeepAspect_0
			{
				idc = 1397;
			};
			class PictureKeepAspect_98: PictureKeepAspect_0
			{
				idc = 1398;
			};
			class PictureKeepAspect_99: PictureKeepAspect_0
			{
				idc = 1399;
			};
			class StructuredText_0: RscStructuredText
			{
				idc = 1100;
				text = "";
				x = -3;
				y = -3;
			};
			class StructuredText_1: StructuredText_0
			{
				idc = 1101;
			};
			class StructuredText_10: StructuredText_0
			{
				idc = 1110;
			};
			class StructuredText_11: StructuredText_0
			{
				idc = 1111;
			};
			class StructuredText_12: StructuredText_0
			{
				idc = 1112;
			};
			class StructuredText_13: StructuredText_0
			{
				idc = 1113;
			};
			class StructuredText_14: StructuredText_0
			{
				idc = 1114;
			};
			class StructuredText_15: StructuredText_0
			{
				idc = 1115;
			};
			class StructuredText_16: StructuredText_0
			{
				idc = 1116;
			};
			class StructuredText_17: StructuredText_0
			{
				idc = 1117;
			};
			class StructuredText_18: StructuredText_0
			{
				idc = 1118;
			};
			class StructuredText_19: StructuredText_0
			{
				idc = 1119;
			};
			class StructuredText_2: StructuredText_0
			{
				idc = 1102;
			};
			class StructuredText_20: StructuredText_0
			{
				idc = 1120;
			};
			class StructuredText_21: StructuredText_0
			{
				idc = 1121;
			};
			class StructuredText_22: StructuredText_0
			{
				idc = 1122;
			};
			class StructuredText_23: StructuredText_0
			{
				idc = 1123;
			};
			class StructuredText_24: StructuredText_0
			{
				idc = 1124;
			};
			class StructuredText_25: StructuredText_0
			{
				idc = 1125;
			};
			class StructuredText_26: StructuredText_0
			{
				idc = 1126;
			};
			class StructuredText_27: StructuredText_0
			{
				idc = 1127;
			};
			class StructuredText_28: StructuredText_0
			{
				idc = 1128;
			};
			class StructuredText_29: StructuredText_0
			{
				idc = 1129;
			};
			class StructuredText_3: StructuredText_0
			{
				idc = 1103;
			};
			class StructuredText_30: StructuredText_0
			{
				idc = 1130;
			};
			class StructuredText_31: StructuredText_0
			{
				idc = 1131;
			};
			class StructuredText_32: StructuredText_0
			{
				idc = 1132;
			};
			class StructuredText_33: StructuredText_0
			{
				idc = 1133;
			};
			class StructuredText_34: StructuredText_0
			{
				idc = 1134;
			};
			class StructuredText_35: StructuredText_0
			{
				idc = 1135;
			};
			class StructuredText_36: StructuredText_0
			{
				idc = 1136;
			};
			class StructuredText_37: StructuredText_0
			{
				idc = 1137;
			};
			class StructuredText_38: StructuredText_0
			{
				idc = 1138;
			};
			class StructuredText_39: StructuredText_0
			{
				idc = 1139;
			};
			class StructuredText_4: StructuredText_0
			{
				idc = 1104;
			};
			class StructuredText_40: StructuredText_0
			{
				idc = 1140;
			};
			class StructuredText_41: StructuredText_0
			{
				idc = 1141;
			};
			class StructuredText_42: StructuredText_0
			{
				idc = 1142;
			};
			class StructuredText_43: StructuredText_0
			{
				idc = 1143;
			};
			class StructuredText_44: StructuredText_0
			{
				idc = 1144;
			};
			class StructuredText_45: StructuredText_0
			{
				idc = 1145;
			};
			class StructuredText_46: StructuredText_0
			{
				idc = 1146;
			};
			class StructuredText_47: StructuredText_0
			{
				idc = 1147;
			};
			class StructuredText_48: StructuredText_0
			{
				idc = 1148;
			};
			class StructuredText_49: StructuredText_0
			{
				idc = 1149;
			};
			class StructuredText_5: StructuredText_0
			{
				idc = 1105;
			};
			class StructuredText_50: StructuredText_0
			{
				idc = 1150;
			};
			class StructuredText_51: StructuredText_0
			{
				idc = 1151;
			};
			class StructuredText_52: StructuredText_0
			{
				idc = 1152;
			};
			class StructuredText_53: StructuredText_0
			{
				idc = 1153;
			};
			class StructuredText_54: StructuredText_0
			{
				idc = 1154;
			};
			class StructuredText_55: StructuredText_0
			{
				idc = 1155;
			};
			class StructuredText_56: StructuredText_0
			{
				idc = 1156;
			};
			class StructuredText_57: StructuredText_0
			{
				idc = 1157;
			};
			class StructuredText_58: StructuredText_0
			{
				idc = 1158;
			};
			class StructuredText_59: StructuredText_0
			{
				idc = 1159;
			};
			class StructuredText_6: StructuredText_0
			{
				idc = 1106;
			};
			class StructuredText_60: StructuredText_0
			{
				idc = 1160;
			};
			class StructuredText_61: StructuredText_0
			{
				idc = 1161;
			};
			class StructuredText_62: StructuredText_0
			{
				idc = 1162;
			};
			class StructuredText_63: StructuredText_0
			{
				idc = 1163;
			};
			class StructuredText_64: StructuredText_0
			{
				idc = 1164;
			};
			class StructuredText_65: StructuredText_0
			{
				idc = 1165;
			};
			class StructuredText_66: StructuredText_0
			{
				idc = 1166;
			};
			class StructuredText_67: StructuredText_0
			{
				idc = 1167;
			};
			class StructuredText_68: StructuredText_0
			{
				idc = 1168;
			};
			class StructuredText_69: StructuredText_0
			{
				idc = 1169;
			};
			class StructuredText_7: StructuredText_0
			{
				idc = 1107;
			};
			class StructuredText_70: StructuredText_0
			{
				idc = 1170;
			};
			class StructuredText_71: StructuredText_0
			{
				idc = 1171;
			};
			class StructuredText_72: StructuredText_0
			{
				idc = 1172;
			};
			class StructuredText_73: StructuredText_0
			{
				idc = 1173;
			};
			class StructuredText_74: StructuredText_0
			{
				idc = 1174;
			};
			class StructuredText_75: StructuredText_0
			{
				idc = 1175;
			};
			class StructuredText_76: StructuredText_0
			{
				idc = 1176;
			};
			class StructuredText_77: StructuredText_0
			{
				idc = 1177;
			};
			class StructuredText_78: StructuredText_0
			{
				idc = 1178;
			};
			class StructuredText_79: StructuredText_0
			{
				idc = 1179;
			};
			class StructuredText_8: StructuredText_0
			{
				idc = 1108;
			};
			class StructuredText_80: StructuredText_0
			{
				idc = 1180;
			};
			class StructuredText_81: StructuredText_0
			{
				idc = 1181;
			};
			class StructuredText_82: StructuredText_0
			{
				idc = 1182;
			};
			class StructuredText_83: StructuredText_0
			{
				idc = 1183;
			};
			class StructuredText_84: StructuredText_0
			{
				idc = 1184;
			};
			class StructuredText_85: StructuredText_0
			{
				idc = 1185;
			};
			class StructuredText_86: StructuredText_0
			{
				idc = 1186;
			};
			class StructuredText_87: StructuredText_0
			{
				idc = 1187;
			};
			class StructuredText_88: StructuredText_0
			{
				idc = 1188;
			};
			class StructuredText_89: StructuredText_0
			{
				idc = 1189;
			};
			class StructuredText_9: StructuredText_0
			{
				idc = 1109;
			};
			class StructuredText_90: StructuredText_0
			{
				idc = 1190;
			};
			class StructuredText_91: StructuredText_0
			{
				idc = 1191;
			};
			class StructuredText_92: StructuredText_0
			{
				idc = 1192;
			};
			class StructuredText_93: StructuredText_0
			{
				idc = 1193;
			};
			class StructuredText_94: StructuredText_0
			{
				idc = 1194;
			};
			class StructuredText_95: StructuredText_0
			{
				idc = 1195;
			};
			class StructuredText_96: StructuredText_0
			{
				idc = 1196;
			};
			class StructuredText_97: StructuredText_0
			{
				idc = 1197;
			};
			class StructuredText_98: StructuredText_0
			{
				idc = 1198;
			};
			class StructuredText_99: StructuredText_0
			{
				idc = 1199;
			};
			class Text_0: RscText
			{
				idc = 1000;
				text = "";
				x = -3;
				y = -3;
			};
			class Text_1: Text_0
			{
				idc = 1001;
			};
			class Text_10: Text_0
			{
				idc = 1010;
			};
			class Text_11: Text_0
			{
				idc = 1011;
			};
			class Text_12: Text_0
			{
				idc = 1012;
			};
			class Text_13: Text_0
			{
				idc = 1013;
			};
			class Text_14: Text_0
			{
				idc = 1014;
			};
			class Text_15: Text_0
			{
				idc = 1015;
			};
			class Text_16: Text_0
			{
				idc = 1016;
			};
			class Text_17: Text_0
			{
				idc = 1017;
			};
			class Text_18: Text_0
			{
				idc = 1018;
			};
			class Text_19: Text_0
			{
				idc = 1019;
			};
			class Text_2: Text_0
			{
				idc = 1002;
			};
			class Text_20: Text_0
			{
				idc = 1020;
			};
			class Text_21: Text_0
			{
				idc = 1021;
			};
			class Text_22: Text_0
			{
				idc = 1022;
			};
			class Text_23: Text_0
			{
				idc = 1023;
			};
			class Text_24: Text_0
			{
				idc = 1024;
			};
			class Text_25: Text_0
			{
				idc = 1025;
			};
			class Text_26: Text_0
			{
				idc = 1026;
			};
			class Text_27: Text_0
			{
				idc = 1027;
			};
			class Text_28: Text_0
			{
				idc = 1028;
			};
			class Text_29: Text_0
			{
				idc = 1029;
			};
			class Text_3: Text_0
			{
				idc = 1003;
			};
			class Text_30: Text_0
			{
				idc = 1030;
			};
			class Text_31: Text_0
			{
				idc = 1031;
			};
			class Text_32: Text_0
			{
				idc = 1032;
			};
			class Text_33: Text_0
			{
				idc = 1033;
			};
			class Text_34: Text_0
			{
				idc = 1034;
			};
			class Text_35: Text_0
			{
				idc = 1035;
			};
			class Text_36: Text_0
			{
				idc = 1036;
			};
			class Text_37: Text_0
			{
				idc = 1037;
			};
			class Text_38: Text_0
			{
				idc = 1038;
			};
			class Text_39: Text_0
			{
				idc = 1039;
			};
			class Text_4: Text_0
			{
				idc = 1004;
			};
			class Text_40: Text_0
			{
				idc = 1040;
			};
			class Text_41: Text_0
			{
				idc = 1041;
			};
			class Text_42: Text_0
			{
				idc = 1042;
			};
			class Text_43: Text_0
			{
				idc = 1043;
			};
			class Text_44: Text_0
			{
				idc = 1044;
			};
			class Text_45: Text_0
			{
				idc = 1045;
			};
			class Text_46: Text_0
			{
				idc = 1046;
			};
			class Text_47: Text_0
			{
				idc = 1047;
			};
			class Text_48: Text_0
			{
				idc = 1048;
			};
			class Text_49: Text_0
			{
				idc = 1049;
			};
			class Text_5: Text_0
			{
				idc = 1005;
			};
			class Text_50: Text_0
			{
				idc = 1050;
			};
			class Text_51: Text_0
			{
				idc = 1051;
			};
			class Text_52: Text_0
			{
				idc = 1052;
			};
			class Text_53: Text_0
			{
				idc = 1053;
			};
			class Text_54: Text_0
			{
				idc = 1054;
			};
			class Text_55: Text_0
			{
				idc = 1055;
			};
			class Text_56: Text_0
			{
				idc = 1056;
			};
			class Text_57: Text_0
			{
				idc = 1057;
			};
			class Text_58: Text_0
			{
				idc = 1058;
			};
			class Text_59: Text_0
			{
				idc = 1059;
			};
			class Text_6: Text_0
			{
				idc = 1006;
			};
			class Text_60: Text_0
			{
				idc = 1060;
			};
			class Text_61: Text_0
			{
				idc = 1061;
			};
			class Text_62: Text_0
			{
				idc = 1062;
			};
			class Text_63: Text_0
			{
				idc = 1063;
			};
			class Text_64: Text_0
			{
				idc = 1064;
			};
			class Text_65: Text_0
			{
				idc = 1065;
			};
			class Text_66: Text_0
			{
				idc = 1066;
			};
			class Text_67: Text_0
			{
				idc = 1067;
			};
			class Text_68: Text_0
			{
				idc = 1068;
			};
			class Text_69: Text_0
			{
				idc = 1069;
			};
			class Text_7: Text_0
			{
				idc = 1007;
			};
			class Text_70: Text_0
			{
				idc = 1070;
			};
			class Text_71: Text_0
			{
				idc = 1071;
			};
			class Text_72: Text_0
			{
				idc = 1072;
			};
			class Text_73: Text_0
			{
				idc = 1073;
			};
			class Text_74: Text_0
			{
				idc = 1074;
			};
			class Text_75: Text_0
			{
				idc = 1075;
			};
			class Text_76: Text_0
			{
				idc = 1076;
			};
			class Text_77: Text_0
			{
				idc = 1077;
			};
			class Text_78: Text_0
			{
				idc = 1078;
			};
			class Text_79: Text_0
			{
				idc = 1079;
			};
			class Text_8: Text_0
			{
				idc = 1008;
			};
			class Text_80: Text_0
			{
				idc = 1080;
			};
			class Text_81: Text_0
			{
				idc = 1081;
			};
			class Text_82: Text_0
			{
				idc = 1082;
			};
			class Text_83: Text_0
			{
				idc = 1083;
			};
			class Text_84: Text_0
			{
				idc = 1084;
			};
			class Text_85: Text_0
			{
				idc = 1085;
			};
			class Text_86: Text_0
			{
				idc = 1086;
			};
			class Text_87: Text_0
			{
				idc = 1087;
			};
			class Text_88: Text_0
			{
				idc = 1088;
			};
			class Text_89: Text_0
			{
				idc = 1089;
			};
			class Text_9: Text_0
			{
				idc = 1009;
			};
			class Text_90: Text_0
			{
				idc = 1090;
			};
			class Text_91: Text_0
			{
				idc = 1091;
			};
			class Text_92: Text_0
			{
				idc = 1092;
			};
			class Text_93: Text_0
			{
				idc = 1093;
			};
			class Text_94: Text_0
			{
				idc = 1094;
			};
			class Text_95: Text_0
			{
				idc = 1095;
			};
			class Text_96: Text_0
			{
				idc = 1096;
			};
			class Text_97: Text_0
			{
				idc = 1097;
			};
			class Text_98: Text_0
			{
				idc = 1098;
			};
			class Text_99: Text_0
			{
				idc = 1099;
			};
			class TextCredits_0: RscStructuredText
			{
				idc = 9000;
				size = "(safezoneH*0.028)";
				text = "";
				x = -3;
				y = -3;
			};
			class TextCredits_1: TextCredits_0
			{
				idc = 9001;
			};
			class TextCredits_10: TextCredits_0
			{
				idc = 9010;
			};
			class TextCredits_11: TextCredits_0
			{
				idc = 9011;
			};
			class TextCredits_12: TextCredits_0
			{
				idc = 9012;
			};
			class TextCredits_13: TextCredits_0
			{
				idc = 9013;
			};
			class TextCredits_14: TextCredits_0
			{
				idc = 9014;
			};
			class TextCredits_15: TextCredits_0
			{
				idc = 9015;
			};
			class TextCredits_16: TextCredits_0
			{
				idc = 9016;
			};
			class TextCredits_17: TextCredits_0
			{
				idc = 9017;
			};
			class TextCredits_18: TextCredits_0
			{
				idc = 9018;
			};
			class TextCredits_19: TextCredits_0
			{
				idc = 9019;
			};
			class TextCredits_2: TextCredits_0
			{
				idc = 9002;
			};
			class TextCredits_20: TextCredits_0
			{
				idc = 9020;
			};
			class TextCredits_21: TextCredits_0
			{
				idc = 9021;
			};
			class TextCredits_22: TextCredits_0
			{
				idc = 9022;
			};
			class TextCredits_23: TextCredits_0
			{
				idc = 9023;
			};
			class TextCredits_24: TextCredits_0
			{
				idc = 9024;
			};
			class TextCredits_25: TextCredits_0
			{
				idc = 9025;
			};
			class TextCredits_26: TextCredits_0
			{
				idc = 9026;
			};
			class TextCredits_27: TextCredits_0
			{
				idc = 9027;
			};
			class TextCredits_28: TextCredits_0
			{
				idc = 9028;
			};
			class TextCredits_29: TextCredits_0
			{
				idc = 9029;
			};
			class TextCredits_3: TextCredits_0
			{
				idc = 9003;
			};
			class TextCredits_30: TextCredits_0
			{
				idc = 9030;
			};
			class TextCredits_31: TextCredits_0
			{
				idc = 9031;
			};
			class TextCredits_32: TextCredits_0
			{
				idc = 9032;
			};
			class TextCredits_33: TextCredits_0
			{
				idc = 9033;
			};
			class TextCredits_34: TextCredits_0
			{
				idc = 9034;
			};
			class TextCredits_35: TextCredits_0
			{
				idc = 9035;
			};
			class TextCredits_36: TextCredits_0
			{
				idc = 9036;
			};
			class TextCredits_37: TextCredits_0
			{
				idc = 9037;
			};
			class TextCredits_38: TextCredits_0
			{
				idc = 9038;
			};
			class TextCredits_39: TextCredits_0
			{
				idc = 9039;
			};
			class TextCredits_4: TextCredits_0
			{
				idc = 9004;
			};
			class TextCredits_40: TextCredits_0
			{
				idc = 9040;
			};
			class TextCredits_41: TextCredits_0
			{
				idc = 9041;
			};
			class TextCredits_42: TextCredits_0
			{
				idc = 9042;
			};
			class TextCredits_43: TextCredits_0
			{
				idc = 9043;
			};
			class TextCredits_44: TextCredits_0
			{
				idc = 9044;
			};
			class TextCredits_45: TextCredits_0
			{
				idc = 9045;
			};
			class TextCredits_46: TextCredits_0
			{
				idc = 9046;
			};
			class TextCredits_47: TextCredits_0
			{
				idc = 9047;
			};
			class TextCredits_48: TextCredits_0
			{
				idc = 9048;
			};
			class TextCredits_49: TextCredits_0
			{
				idc = 9049;
			};
			class TextCredits_5: TextCredits_0
			{
				idc = 9005;
			};
			class TextCredits_50: TextCredits_0
			{
				idc = 9050;
			};
			class TextCredits_51: TextCredits_0
			{
				idc = 9051;
			};
			class TextCredits_52: TextCredits_0
			{
				idc = 9052;
			};
			class TextCredits_53: TextCredits_0
			{
				idc = 9053;
			};
			class TextCredits_54: TextCredits_0
			{
				idc = 9054;
			};
			class TextCredits_55: TextCredits_0
			{
				idc = 9055;
			};
			class TextCredits_56: TextCredits_0
			{
				idc = 9056;
			};
			class TextCredits_57: TextCredits_0
			{
				idc = 9057;
			};
			class TextCredits_58: TextCredits_0
			{
				idc = 9058;
			};
			class TextCredits_59: TextCredits_0
			{
				idc = 9059;
			};
			class TextCredits_6: TextCredits_0
			{
				idc = 9006;
			};
			class TextCredits_60: TextCredits_0
			{
				idc = 9060;
			};
			class TextCredits_61: TextCredits_0
			{
				idc = 9061;
			};
			class TextCredits_62: TextCredits_0
			{
				idc = 9062;
			};
			class TextCredits_63: TextCredits_0
			{
				idc = 9063;
			};
			class TextCredits_64: TextCredits_0
			{
				idc = 9064;
			};
			class TextCredits_65: TextCredits_0
			{
				idc = 9065;
			};
			class TextCredits_66: TextCredits_0
			{
				idc = 9066;
			};
			class TextCredits_67: TextCredits_0
			{
				idc = 9067;
			};
			class TextCredits_68: TextCredits_0
			{
				idc = 9068;
			};
			class TextCredits_69: TextCredits_0
			{
				idc = 9069;
			};
			class TextCredits_7: TextCredits_0
			{
				idc = 9007;
			};
			class TextCredits_70: TextCredits_0
			{
				idc = 9070;
			};
			class TextCredits_71: TextCredits_0
			{
				idc = 9071;
			};
			class TextCredits_72: TextCredits_0
			{
				idc = 9072;
			};
			class TextCredits_73: TextCredits_0
			{
				idc = 9073;
			};
			class TextCredits_74: TextCredits_0
			{
				idc = 9074;
			};
			class TextCredits_75: TextCredits_0
			{
				idc = 9075;
			};
			class TextCredits_76: TextCredits_0
			{
				idc = 9076;
			};
			class TextCredits_77: TextCredits_0
			{
				idc = 9077;
			};
			class TextCredits_78: TextCredits_0
			{
				idc = 9078;
			};
			class TextCredits_79: TextCredits_0
			{
				idc = 9079;
			};
			class TextCredits_8: TextCredits_0
			{
				idc = 9008;
			};
			class TextCredits_80: TextCredits_0
			{
				idc = 9080;
			};
			class TextCredits_81: TextCredits_0
			{
				idc = 9081;
			};
			class TextCredits_82: TextCredits_0
			{
				idc = 9082;
			};
			class TextCredits_83: TextCredits_0
			{
				idc = 9083;
			};
			class TextCredits_84: TextCredits_0
			{
				idc = 9084;
			};
			class TextCredits_85: TextCredits_0
			{
				idc = 9085;
			};
			class TextCredits_86: TextCredits_0
			{
				idc = 9086;
			};
			class TextCredits_87: TextCredits_0
			{
				idc = 9087;
			};
			class TextCredits_88: TextCredits_0
			{
				idc = 9088;
			};
			class TextCredits_89: TextCredits_0
			{
				idc = 9089;
			};
			class TextCredits_9: TextCredits_0
			{
				idc = 9009;
			};
			class TextCredits_90: TextCredits_0
			{
				idc = 9090;
			};
			class TextCredits_91: TextCredits_0
			{
				idc = 9091;
			};
			class TextCredits_92: TextCredits_0
			{
				idc = 9092;
			};
			class TextCredits_93: TextCredits_0
			{
				idc = 9093;
			};
			class TextCredits_94: TextCredits_0
			{
				idc = 9094;
			};
			class TextCredits_95: TextCredits_0
			{
				idc = 9095;
			};
			class TextCredits_96: TextCredits_0
			{
				idc = 9096;
			};
			class TextCredits_97: TextCredits_0
			{
				idc = 9097;
			};
			class TextCredits_98: TextCredits_0
			{
				idc = 9098;
			};
			class TextCredits_99: TextCredits_0
			{
				idc = 9099;
			};
		};
	};
	class RscCuratorPing
	{
		duration = 1;
		fadeIn = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscCuratorPing"",'CuratorTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscCuratorPing"",'CuratorTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscCuratorPing";
		scriptPath = "CuratorTitles";
		class controls
		{
			class Icon: RscPicture
			{
				h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 10674;
				text = "\a3\ui_f_curator\data\logos\arma3_curator_eye_64_ca.paa";
				w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			};
			class Player: RscPicture
			{
				h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 10675;
				text = "\A3\ui_f\data\igui\cfg\islandmap\iconPlayer_ca.paa";
				w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			};
		};
	};
	class RscCuratorVisionModes
	{
		duration = 2;
		fadeIn = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscCuratorVisionModes"",'CuratorTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscCuratorVisionModes"",'CuratorTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscCuratorVisionModes";
		scriptPath = "CuratorTitles";
		class controls
		{
			class VisionModes: RscControlsGroupNoScrollbars
			{
				h = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 11763;
				w = "safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safezoneX + 12.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "2.2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
				class controls
				{
					class VisionMode0: RscText
					{
						h = "0.75 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 10463;
						shadow = 0;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						w = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 0";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class VisionMode1: VisionMode0
					{
						idc = 10464;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 1";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class VisionMode2: VisionMode0
					{
						idc = 10465;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 2";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class VisionMode3: VisionMode0
					{
						idc = 10466;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 3";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class VisionMode4: VisionMode0
					{
						idc = 10467;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 4";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class VisionMode5: VisionMode0
					{
						idc = 10468;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 5";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class VisionMode6: VisionMode0
					{
						idc = 10469;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 6";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class VisionMode7: VisionMode0
					{
						idc = 10470;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 7";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class VisionMode8: VisionMode0
					{
						idc = 10471;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 8";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class VisionMode9: VisionMode0
					{
						idc = 10472;
						sizeEx = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						x = "(safezoneW - 25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1 * 9";
						y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscCurrentTask
	{
		duration = 1e+010;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscCurrentTask"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscCurrentTask"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscCurrentTask";
		scriptPath = "ContactTitles";
		class Controls
		{
			class Area: RscControlsGroupNoScrollbars
			{
				h = "(6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				idc = 1000;
				w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "(profilenamespace getvariable [""IGUI_GRID_NOTIFICATION_X"",	(0.5 - 6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_NOTIFICATION_Y"",	(safezoneY + 6.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Controls
				{
					class Background: RscPicture
					{
						colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.5};
						h = "(6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						idc = 10010;
						text = "\a3\UI_F_Contact\Data\RscTitles\RscSimpleNotification\background_ca.paa";
						w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
						x = 0;
						y = 0;
					};
					class Text: RscStructuredText
					{
						h = "(6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						idc = 10011;
						text = "No task selected.\nPress 2xJ or M to access list of available tasks.";
						w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 2 * 	0.01";
						x = 0.01;
						y = 0;
						class Attributes
						{
							align = "center";
							color = "#ffffff";
							colorLink = "#ffffff";
							font = "RobotoCondensed";
							shadow = 1;
							size = 1;
						};
					};
				};
			};
		};
	};
	class RscDangerZone
	{
		duration = 10;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscDangerZone"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscDangerZone"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscDangerZone";
		scriptPath = "ContactTitles";
		class Controls
		{
			class BackgroundOverlay: RscText
			{
				colorBackground[] = {0, 0, 0, 0.4};
				fade = 1;
				h = "safezoneH";
				idc = 1080;
				w = "safezoneWAbs";
				x = "safezoneXAbs";
				y = "safezoneY";
			};
			class CA_Background: IGUIBack
			{
				fade = 1;
				h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 1083;
				w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 14 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2) + 8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
		};
	};
	class RscDebugText
	{
		duration = 1e+010;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onLoad = "uinamespace setvariable ['RscDebugText',_this # 0];";
		class Controls
		{
			class Text: RscListBox
			{
				colorBackground[] = {0, 0, 0, 0};
				colorShadow[] = {0, 0, 0, 1};
				colorText[] = {1, 1, 0, 1};
				colorTextRight[] = {1, 1, 0, 1};
				font = "LucidaConsoleB";
				h = "safezoneH - 26 * pixelH";
				idc = 1001;
				shadow = 2;
				sizeEx = "(11 * pixelH)";
				w = "(300 * pixelW)";
				x = "safezoneX";
				y = "safezoneY + 26 * pixelH";
			};
		};
	};
	class RscDisplayMainMenuBackground
	{
		duration = 1e+010;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscDisplayMainMenuBackground"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscDisplayMainMenuBackground"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscDisplayMainMenuBackground";
		scriptPath = "GUI";
		class Controls
		{
			class Background: RscText
			{
				colorBackground[] = {0.1, 0.1, 0.1, 1};
				h = "2 * 	10";
				idc = 101;
				w = "safezoneWAbs";
				x = "safezoneXAbs";
				y = "-	10";
			};
			class BackgroundLeft: Background
			{
				w = "safezoneX + 	10";
				x = "-	10";
			};
			class BackgroundRight: Background
			{
				w = 10;
				x = "safezoneX + safezoneW";
			};
			class Picture: RscPicture
			{
				h = "safezoneW * 4/3";
				idc = 102;
				text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayMain\backgroundGrey.jpg";
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
			};
		};
	};
	class RscDynamicText
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 1;
		onload = "uinamespace setvariable ['BIS_dynamicText',_this select 0];";
		class controls
		{
			class Text: RscStructuredText
			{
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				h = 10000;
				idc = 9999;
				size = "(0.05 / 1.17647) * safezoneH";
				sizeEx = 0.4;
				style = "1 + 16";
				text = "";
				w = 1;
				x = 0;
				y = 0.45;
				class Attributes: Attributes
				{
					align = "center";
					color = "#ffffff";
					shadow = 0;
					valign = "top";
				};
			};
		};
	};
	class RscE3_E3_PiP: RscE3_US_CORE_P2_01
	{
		class controls: controls
		{
			class RscPicture_1200: RscPicture_1200 {};
			class RscPicture_1201: RscPicture_1201 {};
			class RscPicture_1202: RscPicture_1202 {};
			class RscPicture_1203: RscPicture_1203 {};
			class RscPicture_1204: RscPicture_1204 {};
			class RscPicture_1205: RscPicture_1205 {};
			class RscPicture_1206: RscPicture_1206 {};
			class RscPicture_1207: RscPicture_1207 {};
			class RscText_1000: RscText_1000
			{
				text = "Picture in picture ";
			};
			class RscText_1001: RscText_1001
			{
				text = "Brand new Render-to-Texture technology ";
			};
			class RscText_1002: RscText_1002
			{
				text = "Real-time 'video' from the game world ";
			};
			class RscText_1003: RscText_1003
			{
				text = "Functional mirrors and displays ";
			};
			class RscText_1004: RscText_1004
			{
				text = "Forward-looking Infrared ";
			};
			class RscText_1005: RscText_1005
			{
				text = "Thermal Imaging technology ";
			};
			class RscText_1006: RscText_1006
			{
				text = "Identify heat signatures ";
			};
			class RscText_1007: RscText_1007
			{
				text = "People, vehicles, ambient life, and more ";
			};
		};
	};
	class RscE3_E3_Slingload: RscE3_E3_PiP
	{
		class controls: controls
		{
			class RscPicture_1200: RscPicture_1200 {};
			class RscPicture_1201: RscPicture_1201 {};
			class RscPicture_1202: RscPicture_1202 {};
			class RscPicture_1203: RscPicture_1203 {};
			class RscText_1000: RscText_1000
			{
				text = "Sling-load ";
			};
			class RscText_1001: RscText_1001
			{
				text = "Attach external loads to helicopters ";
			};
			class RscText_1002: RscText_1002
			{
				text = "Pendulum effect on the helicopter flight model ";
			};
			class RscText_1003: RscText_1003
			{
				text = "People, vehicles, cargo - a wide range of gameplay opportunities ";
			};
		};
	};
	class RscE3_US_CORE_P2_01
	{
		duration = 50;
		fadein = 0;
		idd = 3000;
		movingEnable = 0;
		onload = "uinamespace setvariable ['RscE3',_this select 0]";
		class controls
		{
			class RscPicture_1200: RscPicture
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1200;
				shadow = 2;
				text = "A3\ui_f\data\tut\icons\checkboxes\active.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "8 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "3.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1201: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1201;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "4.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1202: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1202;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "5.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1203: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1203;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "6.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1204: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1204;
				text = "A3\ui_f\data\tut\icons\checkboxes\active.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "8 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "8 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1205: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1205;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "9 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1206: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1206;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "10 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1207: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1207;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "11 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1208: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1208;
				text = "A3\ui_f\data\tut\icons\checkboxes\active.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "8 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "12.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1209: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1209;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "13.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1210: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1210;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "14.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscPicture_1211: RscPicture_1200
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1211;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "15.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1000: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1000;
				text = "Pre-flight";
				w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "3.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1001: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1001;
				text = "Detailed Environment";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "4.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1002: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1002;
				text = "Interactive Objects ";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "5.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1003: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1003;
				text = "Ambient Characters ";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "6.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1004: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1004;
				text = "Start-up ";
				w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "8 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1005: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1005;
				text = "Optional ";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "9 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1006: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1006;
				text = "Authentic ";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "10 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1007: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1007;
				text = "Visual ";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "11 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1008: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1008;
				text = "Take off ";
				w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "12.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1009: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1009;
				text = "Flight-dynamics ";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "13.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1010: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1010;
				text = "Variables ";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "14.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class RscText_1011: RscText
			{
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 1011;
				text = "Models ";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "15.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
		};
		class controlsBackground
		{
			class Background: RscText
			{
				colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 0.6};
				h = "safezoneH";
				idc = 999;
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
			};
			class Cloud0: RscPicture
			{
				idc = 2000;
			};
			class Cloud1: Cloud0
			{
				idc = 2001;
			};
			class Cloud2: Cloud0
			{
				idc = 2002;
			};
			class Cloud3: Cloud0
			{
				idc = 2003;
			};
			class Cloud4: Cloud0
			{
				idc = 2004;
			};
		};
	};
	class RscEGProgress
	{
		duration = 1e+011;
		fadein = 0.1;
		fadeout = 0.1;
		idd = 60992;
		onLoad = "[""onLoad"",_this,""RscEGProgress"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscEGProgress"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscEGProgress";
		scriptPath = "IGUI";
		class Controls
		{
			class Download: RscControlsGroupNoScrollbars
			{
				h = "3.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 9376;
				w = "14.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safeZoneX + 1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "10.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				class controls
				{
					class Activity: RscPictureKeepAspect
					{
						colorText[] = {0.8, 0.5, 0, 1};
						fade = 1;
						h = "0.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9372;
						text = "A3\Ui_f\data\IGUI\Cfg\simpleTasks\types\Attack_ca.paa";
						w = "0.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "1.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ActivityBackground: RscText
					{
						colorBackground[] = {0, 0, 0, 0.5};
						fade = 1;
						h = "0.57514 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9172;
						w = "0.6339 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "1.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class DownloadIcon: RscPictureKeepAspect
					{
						colorText[] = {0.8, 0.5, 0, 1};
						fade = 1;
						h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9374;
						text = "A3\Ui_f\data\IGUI\RscTitles\RscEGProgress\DownloadIcon_ca.paa";
						w = "0.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class DownloadIconBackground: RscText
					{
						colorBackground[] = {0, 0, 0, 0.5};
						fade = 1;
						h = "1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9170;
						w = "1.4339 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ObjectiveBackground: RscPictureKeepAspect
					{
						colorBackground[] = {0, 0, 0, 0.75};
						colorText[] = {0, 0, 0, 0.5};
						fade = 1;
						h = "1.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9370;
						text = "A3\Ui_f\data\IGUI\Cfg\simpleTasks\background1_ca.paa";
						w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ObjectiveBackgroundColoured: RscPictureKeepAspect
					{
						colorText[] = {0, 0, 1, 0.5};
						fade = 1;
						h = "1.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9375;
						text = "A3\Ui_f\data\IGUI\Cfg\simpleTasks\background1_ca.paa";
						w = "1.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ObjectiveLetter: RscText
					{
						fade = 1;
						h = "1.47 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9171;
						shadow = 0;
						sizeEx = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						text = "A";
						w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ProgressBar: RscProgress
					{
						colorBackground[] = {0.8, 0.5, 0, 1};
						fade = 1;
						h = "0.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9180;
						w = "11.55 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2.44 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ProgressBarBackground: RscText
					{
						colorBackground[] = {0, 0, 0, 0.5};
						fade = 1;
						h = "0.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9173;
						w = "11.72 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Title: RscText
					{
						colorBackground[] = {0, 0, 0, 0.5};
						fade = 1;
						h = "1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9174;
						shadow = 0;
						sizeEx = "1.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 0;
						text = "DOWNLOADING...";
						w = "10.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "3.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscEstablishingShot
	{
		duration = 1e+011;
		effectTilesAlpha = 0.15;
		fadeIn = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscEstablishingShot"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscEstablishingShot"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscEstablishingShot";
		scriptPath = "GUI";
		class controlsBackground
		{
			class SITREP: RscStructuredText
			{
				h = 0;
				IDC = 2500;
				w = 0;
				x = 0;
				y = 0;
			};
			class TileGroup: RscControlsGroupNoScrollbars
			{
				h = "safezoneH";
				idc = 115099;
				w = "safezoneWAbs";
				x = "safezoneXAbs";
				y = "safezoneY";
				class Controls
				{
					class Background: RscText
					{
						colorBackground[] = {0, 0, 0, 0.5};
						h = "safezoneH";
						idc = 114999;
						w = "safezoneWAbs";
						x = 0;
						y = 0;
					};
				};
			};
			class Vignette: RscVignette
			{
				idc = 114998;
			};
		};
	};
	class RscFiringDrillCheckpoint
	{
		duration = 1e+010;
		fadein = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscFiringDrillCheckpoint"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscFiringDrillCheckpoint"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscFiringDrillCheckpoint";
		scriptPath = "IGUI";
		class Controls
		{
			class Checkpoint: RscControlsGroupNoScrollbars
			{
				h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 2300;
				w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class CheckpointBackground: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1000;
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class CheckpointPicture: RscPictureKeepAspect
					{
						colorText[] = {0, 0, 0, 0.5};
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1200;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class CheckpointText: RscText
					{
						h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1004;
						sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class StanceBackground: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1002;
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class StancePicture: RscPictureKeepAspect
					{
						colorText[] = {0, 0, 0, 1};
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1201;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class TargetBackground: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1001;
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class TargetPicture: RscPictureKeepAspect
					{
						colorText[] = {0, 0, 0, 0.5};
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1203;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class TargetTextCurrent: RscText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1006;
						sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "-0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class TargetTextTotal: RscText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1005;
						style = 2;
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class WeaponBackground: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1003;
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class WeaponPicture: RscPictureKeepAspect
					{
						colorText[] = {0, 0, 0, 1};
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1202;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscFiringDrillTime
	{
		duration = 1e+010;
		fadein = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscFiringDrillTime"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscFiringDrillTime"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscFiringDrillTime";
		scriptPath = "IGUI";
		class Controls
		{
			class Time: RscControlsGroupNoScrollbars
			{
				h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 2300;
				w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class controls
				{
					class Best: RscStructuredText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1101;
						w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Bonus: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1103;
						w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Current: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1104;
						w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class CurrentBackground: RscStructuredText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1100;
						w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Penalty: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1105;
						w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Previous: RscStructuredText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1102;
						w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscFunctionError
	{
		duration = 5;
		fadein = 0;
		idd = 500;
		movingEnable = 0;
		onload = "uinamespace setvariable ['RscFunctionError',_this select 0]";
		class Controls
		{
			class Error: RscStructuredText
			{
				colorBackground[] = {0, 0, 0, 0.8};
				font = "RobotoCondensedBold";
				h = "0.05 * safezoneH";
				idc = 1100;
				sizeEx = "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 0.55";
				w = "1 * safezoneW";
				x = "-6.20841e-009 * safezoneW + safezoneX";
				y = "0.95 * safezoneH + safezoneY";
			};
			class Icon: RscPicture
			{
				colorText[] = {1, 0.5, 0, 1};
				h = "0.05 * safezoneH";
				idc = 1200;
				text = "A3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_functions_ca.paa";
				w = "0.03125 * safezoneW";
				x = "0.96875 * safezoneW + safezoneX";
				y = "0.95 * safezoneH + safezoneY";
			};
		};
	};
	class RscGroupIndicator
	{
		duration = 1e+011;
		enableDisplay = 1;
		enableSimulation = 1;
		fadein = 0;
		fadeout = 0;
		idd = 1166;
		movingEnable = 1;
		onLoad = "['Init',_this] call (uinamespace getvariable 'bis_fnc_groupIndicator')";
		onUnload = "['Exit',_this] call (uinamespace getvariable 'bis_fnc_groupIndicator')";
		class Controls
		{
			class MiniMap: RscMapControl
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
				h = 0.2;
				idc = 116601;
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
				w = 0.15;
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
		};
	};
	class RscHealthTextures
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 1;
		idd = -1;
		onload = "uinamespace setvariable ['RscHealthTextures',_this select 0]";
		class controls
		{
			class Blood_1: Flame_1
			{
				idc = 1211;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\blood_lower_ca.paa";
			};
			class Blood_2: Flame_1
			{
				idc = 1212;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\blood_middle_ca.paa";
			};
			class Blood_3: Flame_1
			{
				idc = 1213;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\blood_upper_ca.paa";
			};
			class Dust_1: Flame_1
			{
				idc = 1214;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_lower_ca.paa";
			};
			class Dust_2: Flame_1
			{
				idc = 1215;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
			};
			class Flame_1: RscPicture
			{
				h = 0;
				idc = 1201;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire01_CA.paa";
				w = 0;
				x = 0;
				y = 0;
			};
			class Flame_10: Flame_1
			{
				idc = 1210;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire10_CA.paa";
			};
			class Flame_2: Flame_1
			{
				idc = 1202;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire02_CA.paa";
			};
			class Flame_3: Flame_1
			{
				idc = 1203;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire03_CA.paa";
			};
			class Flame_4: Flame_1
			{
				idc = 1204;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire04_CA.paa";
			};
			class Flame_5: Flame_1
			{
				idc = 1205;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire05_CA.paa";
			};
			class Flame_6: Flame_1
			{
				idc = 1206;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire06_CA.paa";
			};
			class Flame_7: Flame_1
			{
				idc = 1207;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire07_CA.paa";
			};
			class Flame_8: Flame_1
			{
				idc = 1208;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire08_CA.paa";
			};
			class Flame_9: Flame_1
			{
				idc = 1209;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire09_CA.paa";
			};
		};
	};
	class RscHvtPhase
	{
		duration = 1e+011;
		fadein = 0.5;
		fadeout = 0.5;
		idd = 60491;
		onLoad = "[""onLoad"",_this,""RscHvtPhase"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscHvtPhase"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscHvtPhase";
		scriptPath = "IGUI";
		class Controls
		{
			class CarrierPicture: RscPictureKeepAspect
			{
				h = "1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 6811;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safeZoneX";
				y = "4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class Download: RscControlsGroupNoScrollbars
			{
				h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 7910;
				w = "15.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safeZoneX + 1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "8.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				class controls
				{
					class DownloadContent: RscText
					{
						colorBackground[] = {0.3, 0.3, 0.3, 0.7};
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 6613;
						w = "15.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class DownloadSpeed: RscText
					{
						colorText[] = {1, 1, 1, 0.7};
						h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 6621;
						sizeEx = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						text = "5.67 / 8.09 TB";
						w = "8.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "3.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class DownloadTitle: RscText
					{
						colorBackground[] = {0, 0, 0, 0.7};
						h = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 6612;
						shadow = 0;
						sizeEx = "1.15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						text = "DOWNLOADING...";
						w = "8.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Multiplier: RscText
					{
						colorBackground[] = {0, 0, 0, 0.7};
						colorText[] = {1, 1, 1, 0.5};
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 6614;
						sizeEx = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						text = "2x";
						w = "2.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ProgressBar: RscProgress
					{
						colorBackground[] = {0.8, 0.5, 0, 0.7};
						h = "1.775 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 6620;
						w = "11.1339 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Range: RscPictureKeepAspect
					{
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 6810;
						text = "a3\Ui_f\data\IGUI\RscTitles\RscHvtPhase\JAC_A3_Signal_4_ca.paa";
						w = "2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "13.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class RangeBackground: RscText
					{
						colorBackground[] = {0, 0, 0, 0.5};
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 6615;
						w = "2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "13.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
			class Dynamic: RscText
			{
				colorBackground[] = {0, 0, 0, 0.7};
				colorText[] = {1, 1, 1, 1};
				h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 6611;
				shadow = 0;
				sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safeZoneX + 1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "5.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class Persistent: RscText
			{
				colorBackground[] = {0, 0, 0, 0.7};
				colorText[] = {1, 1, 1, 1};
				h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 6610;
				shadow = 0;
				sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				style = 2;
				w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safeZoneX";
				y = "5.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class Timer: RscText
			{
				colorBackground[] = {0, 0, 0, 0.7};
				colorText[] = {1, 1, 1, 1};
				h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 6616;
				shadow = 0;
				sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				style = 2;
				text = "12:36";
				w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safeZoneX + 1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "11.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
		};
	};
	class RscInfoText
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		idd = 3100;
		onLoad = "uinamespace setvariable ['BIS_InfoText',_this select 0]";
		onUnLoad = "uinamespace setvariable ['BIS_InfoText',nil]";
		class Controls
		{
			class InfoText: RscText
			{
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				fixedWidth = 1;
				font = "RobotoCondensedBold";
				h = "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				idc = 3101;
				lineSpacing = 1;
				sizeEx = 0.045;
				style = "0x01 + 0x10 + 0x200 + 0x100";
				text = "";
				w = "(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			};
		};
	};
	class RscInterlacing
	{
		duration = 1e+011;
		fadeIn = 0;
		idd = -1;
		name = "Video Interlacing";
		class controls
		{
			class Interlacing: RscInterlacingScreen {};
		};
	};
	class RscLoadingLogoIn
	{
		duration = 10;
		fadein = 1;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onLoad = "uinamespace setVariable ['bin_showLoadingLogo',true]";
		class Controls
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
						text = "\a3\data_f_contact\logos\logoTitle_ca.paa";
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
	};
	class RscLoadingLogoOut: RscLoadingLogoIn
	{
		duration = 5;
		fadein = 0;
		fadeout = 1;
		onLoad = "[] spawn {sleep 0.01; uinamespace setVariable ['bin_showLoadingLogo',false];};";
	};
	class RscMissionEnd
	{
		duration = "11+2";
		fadeIn = 0.2;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscDisplayDebriefing"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscDisplayDebriefing"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscDisplayDebriefing";
		scriptPath = "GUI";
		class controls
		{
			class Picture: RscPictureKeepAspect
			{
				colorText[] = {0, 0.3, 0.6, 1};
				h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 20793;
				w = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			};
			class Sides: RscControlsGroupNoScrollbars
			{
				h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 21899;
				w = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				class controls
				{
					class Side1: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 20696;
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Side2: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 20697;
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Side3: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 20698;
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Side4: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 20699;
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Side5: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 20700;
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
			class Subtitle: RscText
			{
				colorBackground[] = {0, 0, 0, 1};
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 20601;
				sizeEx = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				style = 2;
				w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "10.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "12.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			};
			class Title: RscText
			{
				colorBackground[] = {0, 0, 0, 1};
				h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 20600;
				sizeEx = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				style = 2;
				text = "Mission Completed";
				w = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			};
		};
	};
	class RscMissionScreen
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 1;
		idd = -1;
		movingEnable = 1;
		onload = "uinamespace setvariable ['BIS_RscMissionScreen',_this select 0];";
		class controls
		{
			class Picture_0: RscPicture
			{
				autoplay = 1;
				h = "safezoneH";
				idc = 1100;
				loops = 1;
				text = "";
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
			};
			class Picture_1: Picture_0
			{
				idc = 1101;
			};
			class Picture_10: Picture_0
			{
				idc = 1110;
			};
			class Picture_11: Picture_0
			{
				idc = 1111;
			};
			class Picture_12: Picture_0
			{
				idc = 1112;
			};
			class Picture_13: Picture_0
			{
				idc = 1113;
			};
			class Picture_14: Picture_0
			{
				idc = 1114;
			};
			class Picture_15: Picture_0
			{
				idc = 1115;
			};
			class Picture_16: Picture_0
			{
				idc = 1116;
			};
			class Picture_17: Picture_0
			{
				idc = 1117;
			};
			class Picture_18: Picture_0
			{
				idc = 1118;
			};
			class Picture_19: Picture_0
			{
				idc = 1119;
			};
			class Picture_2: Picture_0
			{
				idc = 1102;
			};
			class Picture_20: Picture_0
			{
				idc = 1120;
			};
			class Picture_21: Picture_0
			{
				idc = 1121;
			};
			class Picture_22: Picture_0
			{
				idc = 1122;
			};
			class Picture_23: Picture_0
			{
				idc = 1123;
			};
			class Picture_24: Picture_0
			{
				idc = 1124;
			};
			class Picture_25: Picture_0
			{
				idc = 1125;
			};
			class Picture_26: Picture_0
			{
				idc = 1126;
			};
			class Picture_27: Picture_0
			{
				idc = 1127;
			};
			class Picture_28: Picture_0
			{
				idc = 1128;
			};
			class Picture_29: Picture_0
			{
				idc = 1129;
			};
			class Picture_3: Picture_0
			{
				idc = 1103;
			};
			class Picture_30: Picture_0
			{
				idc = 1130;
			};
			class Picture_31: Picture_0
			{
				idc = 1131;
			};
			class Picture_32: Picture_0
			{
				idc = 1132;
			};
			class Picture_33: Picture_0
			{
				idc = 1133;
			};
			class Picture_34: Picture_0
			{
				idc = 1134;
			};
			class Picture_35: Picture_0
			{
				idc = 1135;
			};
			class Picture_36: Picture_0
			{
				idc = 1136;
			};
			class Picture_37: Picture_0
			{
				idc = 1137;
			};
			class Picture_38: Picture_0
			{
				idc = 1138;
			};
			class Picture_39: Picture_0
			{
				idc = 1139;
			};
			class Picture_4: Picture_0
			{
				idc = 1104;
			};
			class Picture_40: Picture_0
			{
				idc = 1140;
			};
			class Picture_41: Picture_0
			{
				idc = 1141;
			};
			class Picture_42: Picture_0
			{
				idc = 1142;
			};
			class Picture_43: Picture_0
			{
				idc = 1143;
			};
			class Picture_44: Picture_0
			{
				idc = 1144;
			};
			class Picture_45: Picture_0
			{
				idc = 1145;
			};
			class Picture_46: Picture_0
			{
				idc = 1146;
			};
			class Picture_47: Picture_0
			{
				idc = 1147;
			};
			class Picture_48: Picture_0
			{
				idc = 1148;
			};
			class Picture_49: Picture_0
			{
				idc = 1149;
			};
			class Picture_5: Picture_0
			{
				idc = 1105;
			};
			class Picture_50: Picture_0
			{
				idc = 1150;
			};
			class Picture_6: Picture_0
			{
				idc = 1106;
			};
			class Picture_7: Picture_0
			{
				idc = 1107;
			};
			class Picture_8: Picture_0
			{
				idc = 1108;
			};
			class Picture_9: Picture_0
			{
				idc = 1109;
			};
			class PictureShadow_0: Picture_0
			{
				idc = 1200;
				shadow = 2;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc = 1201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc = 1202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc = 1203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc = 1204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc = 1205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc = 1206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc = 1207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc = 1208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc = 1209;
			};
			class Text_0: RscStructuredText
			{
				h = "safezoneH";
				idc = 1300;
				text = "";
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
			};
			class Text_1: Text_0
			{
				idc = 1301;
			};
			class Text_2: Text_0
			{
				idc = 1302;
			};
			class Text_3: Text_0
			{
				idc = 1303;
			};
			class Text_4: Text_0
			{
				idc = 1304;
			};
			class Text_5: Text_0
			{
				idc = 1305;
			};
			class Text_6: Text_0
			{
				idc = 1306;
			};
			class Text_7: Text_0
			{
				idc = 1307;
			};
			class Text_8: Text_0
			{
				idc = 1308;
			};
			class Text_9: Text_0
			{
				idc = 1309;
			};
		};
	};
	class RscMissionText
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		idd = 20145;
		onLoad = "[""onLoad"",_this,""RscMissionText"",'BootcampTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscMissionText"",'BootcampTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscMissionText";
		scriptPath = "BootcampTitles";
		class Controls
		{
			class Text: RscStructuredText
			{
				h = "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				idc = 20146;
				style = 1;
				w = "(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				x = "(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Attributes
				{
					align = "right";
					color = "#ffffff";
					font = "RobotoCondensed";
					shadow = 1;
				};
			};
		};
	};
	class RscMPProgress
	{
		duration = 1e+011;
		fadeIn = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscMissionStatus"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscMissionStatus"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscMissionStatus";
		scriptPath = "IGUI";
		class controls
		{
			class MPProgress: RscMissionStatus {};
		};
	};
	class RscNoise
	{
		duration = 1e+011;
		fadeIn = 0;
		idd = -1;
		name = "Video Noise";
		onLoad = "[""onLoad"",_this,""RscNoise"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscNoise"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscNoise";
		scriptPath = "IGUI";
		class controls
		{
			class Noise: RscPicture
			{
				colorText[] = {1, 1, 1, 1};
				h = "safeZoneH";
				idc = 1200;
				text = "#(ai,1024,512,9)perlinNoise(256,256,0,1)";
				w = "safeZoneWAbs";
				x = "safeZoneXAbs";
				y = "safeZoneY";
			};
		};
	};
	class RscNotification
	{
		duration = 1e+011;
		fadein = 0;
		idd = 3000;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscNotification"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscNotification"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscNotification";
		scriptPath = "IGUI";
		class Controls
		{
			class NotificationArea: RscNotificationArea {};
		};
	};
	class RscPhaseRules
	{
		duration = 1e+011;
		idd = 4.71235e+006;
		onLoad = "[""onLoad"",_this,""RscPhaseRules"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscPhaseRules"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscPhaseRules";
		scriptPath = "IGUI";
		class Controls
		{
			class PhaseRules: RscControlsGroupNoScrollbars
			{
				h = "17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 10431;
				w = "15.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
				y = "0.5 - ((17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2)";
				class Controls
				{
					class Phase1Info: RscStructuredText
					{
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9137;
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase1Number: RscText
					{
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9131;
						shadow = 0;
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase1Text: RscText
					{
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9132;
						shadow = 0;
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase2Info: RscStructuredText
					{
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9138;
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "9.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase2Number: RscText
					{
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9134;
						shadow = 0;
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase2Text: RscText
					{
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9133;
						shadow = 0;
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase3Info: RscStructuredText
					{
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9139;
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "15.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase3Number: RscText
					{
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9136;
						shadow = 0;
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 2;
						w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase3Text: RscText
					{
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 9135;
						shadow = 0;
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscPhoneCall
	{
		duration = 10;
		fadeIn = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscPhoneCall"",'OrangeTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscPhoneCall"",'OrangeTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscPhoneCall";
		scriptPath = "OrangeTitles";
		class Controls
		{
			class Call: RscControlsGroup
			{
				h = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 8868;
				w = "14.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safezoneX + safezoneW - 15.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "safezoneY + safezoneH - 4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class Controls
				{
					class Avatar: RscPicture
					{
						h = "1.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7769;
						text = "#(argb,8,8,3)color(1,1,1,1)";
						w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Background: RscText
					{
						colorBackground[] = {0.3, 0.3, 0.3, 1};
						h = "3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7568;
						w = "14.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class BackgroundCancel: RscPicture
					{
						colorText[] = {1, 0, 0, 1};
						h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7771;
						text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\buttonBackground_ca.paa";
						w = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "12.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class BackgroundMute: RscPicture
					{
						colorText[] = {0, 0.6, 0.9, 1};
						h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7770;
						text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\buttonBackground_ca.paa";
						w = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "10.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class IconCancel: RscPicture
					{
						h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7773;
						text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\cancel_ca.paa";
						w = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "12.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class IconMute: RscPicture
					{
						h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7772;
						text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\mute_ca.paa";
						w = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "10.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Logo: RscPicture
					{
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7768;
						text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\logo_ca.paa";
						w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Name: RscText
					{
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7570;
						shadow = 0;
						sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						text = "AAN - Catherine Bishop";
						w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Timestamp: RscText
					{
						colorText[] = {1, 1, 1, 0.75};
						font = "RobotoCondensedLight";
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7571;
						shadow = 0;
						sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						text = "11:38";
						w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Title: RscText
					{
						colorBackground[] = {0.2, 0.2, 0.2, 1};
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 7569;
						w = "14.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscPIP
	{
		duration = 1e+011;
		fadein = 0;
		idd = -1;
		onLoad = "uinamespace setvariable ['RscPIP',_this select 0];";
		onUnload = "uinamespace setvariable ['RscPIP',nil];";
		class controls
		{
			class B: RscPicture
			{
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_B_ca.paa";
				w = "(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (2 * 	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + 		(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
			class BL: RscPicture
			{
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_BL_ca.paa";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + 		(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
			class BR: RscPicture
			{
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_BR_ca.paa";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + 				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + 		(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
			class L: RscPicture
			{
				h = "(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (2 * 	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_L_ca.paa";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
			class R: RscPicture
			{
				h = "(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (2 * 	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_R_ca.paa";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + 				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
			class Static_00: RscPicture
			{
				h = 0;
				IDC = 2400;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_00_ca.paa";
				w = 0;
				x = 0;
				y = 0;
			};
			class Static_01: Static_00
			{
				IDC = 2401;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_01_ca.paa";
			};
			class Static_02: Static_00
			{
				IDC = 2402;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_02_ca.paa";
			};
			class Static_03: Static_00
			{
				IDC = 2403;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_03_ca.paa";
			};
			class Static_04: Static_00
			{
				IDC = 2404;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_04_ca.paa";
			};
			class Static_05: Static_00
			{
				IDC = 2405;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_05_ca.paa";
			};
			class Static_06: Static_00
			{
				IDC = 2406;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_06_ca.paa";
			};
			class Static_07: Static_00
			{
				IDC = 2407;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_07_ca.paa";
			};
			class Static_08: Static_00
			{
				IDC = 2408;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_08_ca.paa";
			};
			class Static_09: Static_00
			{
				IDC = 2409;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_09_ca.paa";
			};
			class Static_10: Static_00
			{
				IDC = 2410;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_10_ca.paa";
			};
			class Static_11: Static_00
			{
				IDC = 2411;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_11_ca.paa";
			};
			class Static_12: Static_00
			{
				IDC = 2412;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_12_ca.paa";
			};
			class T: RscPicture
			{
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_T_ca.paa";
				w = "(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (2 * 	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
			};
			class TL: RscPicture
			{
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_TL_ca.paa";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
			};
			class TR: RscPicture
			{
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_TR_ca.paa";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + 				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
			};
		};
		class controlsBackground
		{
			class PIP: RscPicture
			{
				h = "(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (2 * 	0.5 * 	0.67 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				IDC = 2300;
				w = "(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (2 * 	0.5 * 	0.67 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + (	0.5 * 	0.67 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + (	0.5 * 	0.67 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
		};
	};
	class RscProcedureVisualization
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		idd = 455546;
		onLoad = "[""onLoad"",_this,""RscProcedureVisualization"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscProcedureVisualization"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscProcedureVisualization";
		scriptPath = "IGUI";
		class Controls
		{
			class Progress: RscText
			{
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				h = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 68374;
				w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "4.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			};
			class Text: RscText
			{
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.7};
				colorText[] = {1, 1, 1, 1};
				h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 68375;
				shadow = 0;
				sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				style = 2;
				w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			};
		};
	};
	class RscRecruitStatus
	{
		duration = 1e+011;
		fadein = 0.5;
		fadeout = 0.5;
		idd = 455545;
		onLoad = "[""onLoad"",_this,""RscRecruitStatus"",'BootcampTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscRecruitStatus"",'BootcampTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscRecruitStatus";
		scriptPath = "BootcampTitles";
		class Controls
		{
			class Background: IGUIBack
			{
				h = "4.2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 15186;
				w = "13.7 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "13 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
				y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			};
			class Description: RscStructuredText
			{
				colorBackground[] = {1, 1, 1, 0.8};
				colorText[] = {0, 0, 0, 0.8};
				h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 14087;
				shadow = 0;
				w = "13.4 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "13.13 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
				y = "3.9 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
				class Attributes
				{
					align = "center";
				};
			};
			class List: RscListBox
			{
				h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 14486;
				w = "13.4 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "13.13 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
				y = "5.1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
				class ListScrollBar: ScrollBar
				{
					autoScrollEnabled = 0;
					color[] = {1, 1, 1, 0};
				};
			};
			class ProgressBar: RscText
			{
				colorBackground[] = {0.5, 1, 0.5, 0.8};
				h = "0.3 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 13986;
				w = "13.4 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "13.13 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
				y = "3.4 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			};
			class Title: RscStructuredText
			{
				colorBackground[] = {1, 0.8, 0.4, 0.8};
				colorText[] = {0, 0, 0, 1};
				h = "1.2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 14086;
				w = "13.7 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "13 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
				y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
				class Attributes
				{
					align = "center";
				};
			};
		};
	};
	class RscRespawnCounter
	{
		duration = 1e+011;
		fadein = 0;
		idd = 3000;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscRespawnCounter"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscRespawnCounter"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscRespawnCounter";
		scriptPath = "IGUI";
		class Controls
		{
			class Description: RscStructuredText
			{
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 1100;
				sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "24.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			};
			class MPTable: RscText
			{
				colorBackground[] = {0, 0, 0, 0};
				h = 0.78;
				idc = 1000;
				w = 0.95;
				x = 0.025;
				y = 0.08;
			};
			class PlayerRespawnTime: RscText
			{
				h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 1003;
				sizeEx = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				text = "00:00.000";
				w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "16.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "22.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			};
			class Title: RscText
			{
				colorBackground[] = {0, 0, 0, 0.5};
				h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 1001;
				w = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "22.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			};
			class TitleBackground: RscText
			{
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 1002;
				w = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "22.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			};
		};
	};
	class RscRestartOS
	{
		duration = 1e+010;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscRestartOS"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscRestartOS"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscRestartOS";
		scriptPath = "ContactTitles";
		class Controls
		{
			class Hacked: RscControlsGroupNoScrollbars
			{
				h = "safezoneH";
				w = "safezoneWAbs";
				x = "safezoneXAbs";
				y = "safezoneY";
				class Controls
				{
					class Background: RscText
					{
						colorBackground[] = {0, 0.470588, 0.843137, 1};
						h = "safezoneH";
						w = "safezoneWAbs";
						x = 0;
						y = 0;
					};
					class SadFace: RscText
					{
						h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 10";
						shadow = 0;
						sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 10";
						text = ":(";
						w = "(			((safezoneW / safezoneH) min 1.2) / 40) * 10";
						x = "safezoneWAbs / 2 - 			(			((safezoneW / safezoneH) min 1.2) / 40) * 15";
						y = "safezoneH / 2 - 			(			((safezoneW / safezoneH) min 1.2) / 40) * 15";
					};
					class Subtext: Text
					{
						text = "If you'd like to know more, you can search online later for this error: INVALID_FIRMWARE_ACCESS";
						y = "safezoneH / 2 + 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 6";
						class Attributes
						{
							align = "left";
							color = "#ffffff";
							colorLink = "#ffffff";
							font = "RobotoCondensedLight";
							size = 1.5;
						};
					};
					class Text: RscStructuredText
					{
						h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 5";
						shadow = 0;
						text = "Your device ran into a problem and needs to restart. We'll restart for you.";
						w = "(			((safezoneW / safezoneH) min 1.2) / 40) * 30";
						x = "safezoneWAbs / 2 - 			(			((safezoneW / safezoneH) min 1.2) / 40) * 15";
						y = "safezoneH / 2";
						class Attributes
						{
							align = "left";
							color = "#ffffff";
							colorLink = "#ffffff";
							font = "RobotoCondensedLight";
							size = 2;
						};
					};
				};
			};
		};
	};
	class RscRevive
	{
		duration = 1e+011;
		fadein = 0;
		idd = 3000;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscRevive"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscRevive"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscRevive";
		scriptPath = "GUI";
		class Controls
		{
			class ReviveBar: RscText
			{
				h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 4820;
				w = "safeZoneW";
				x = "safeZoneX";
				y = "17.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveDeath: RscPicture
			{
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 5019;
				w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveKey: RscStructuredText
			{
				colorBackground[] = {0, 0, 0, 0};
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 4921;
				w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "18.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "18.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveKeyBackground: RscStructuredText
			{
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 4920;
				w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "18.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveKeyProgress: RscText
			{
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 4819;
				w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "18.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveMedikit: RscPicture
			{
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 5017;
				w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "28 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveMedikitProgress: RscPicture
			{
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 5018;
				w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "21.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveProgress: RscProgress
			{
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 4818;
				w = "15.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "12.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveProgressBackground: RscStructuredText
			{
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 4817;
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveRespawn: RscControlsGroupNoScrollbars
			{
				h = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 6117;
				w = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "safezoneY + 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class Controls
				{
					class ReviveCountdown: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "2.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4918;
						w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ReviveInfo: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0};
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4919;
						w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
			class ReviveText: RscStructuredText
			{
				colorBackground[] = {0, 0, 0, 0};
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 4917;
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "18.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
			class ReviveText2: RscStructuredText
			{
				colorBackground[] = {0, 0, 0, 0};
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 6118;
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "18.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
		};
	};
	class RscSavegame
	{
		duration = 1;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscSavegame"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscSavegame"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscSavegame";
		scriptPath = "ContactTitles";
		class Controls
		{
			class Savegame: RscSavegameInfo {};
		};
	};
	class RscSimpleNotification
	{
		duration = 1e+010;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscSimpleNotification"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscSimpleNotification"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscSimpleNotification";
		scriptPath = "ContactTitles";
		class Controls
		{
			class Area: RscControlsGroupNoScrollbars
			{
				h = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 1000;
				w = 1;
				x = 0;
				y = "safezoneY + (1.6) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class Controls {};
			};
		};
	};
	class RscSpectator
	{
		duration = 1e+011;
		fadein = 0;
		idd = 3000;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscSpectator"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscSpectator"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscSpectator";
		scriptPath = "IGUI";
		class Controls
		{
			class Player: RscControlsGroup
			{
				h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 2300;
				w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "safezoneX + safezoneW - 16 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				class controls
				{
					class PlayerDescription: RscStructuredText
					{
						colorBackground[] = {0, 0, 0, 0.5};
						h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1100;
						w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class PlayerGroup: RscText
					{
						colorText[] = {1, 1, 1, 0.5};
						font = "RobotoCondensedLight";
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1001;
						sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 1;
						w = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class PlayerName: RscText
					{
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1002;
						w = "9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class PlayerNameBackground: RscText
					{
						colorBackground[] = {0, 0, 0, 1};
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 1000;
						w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
			class PlayerIcon: RscPicture
			{
				h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 1200;
				shadow = 2;
				text = "\A3\ui_f\data\igui\cfg\cursors\select_ca.paa";
				w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
				y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			};
		};
		class ControlsBackground
		{
			class Map: RscMapControl
			{
				h = 0;
				w = 0;
				x = -1;
				y = -1;
			};
		};
	};
	class RscStatic
	{
		duration = 1;
		fadeIn = 0;
		idd = -1;
		name = "Video Glitch";
		onLoad = "[""onLoad"",_this,""RscStatic"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscStatic"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscStatic";
		scriptPath = "IGUI";
		class controls
		{
			class Static_00: RscPicture
			{
				h = 0;
				IDC = 2400;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_00_ca.paa";
				w = 0;
				x = 0;
				y = 0;
			};
			class Static_01: Static_00
			{
				IDC = 2401;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_01_ca.paa";
			};
			class Static_02: Static_00
			{
				IDC = 2402;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_02_ca.paa";
			};
			class Static_03: Static_00
			{
				IDC = 2403;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_03_ca.paa";
			};
			class Static_04: Static_00
			{
				IDC = 2404;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_04_ca.paa";
			};
			class Static_05: Static_00
			{
				IDC = 2405;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_05_ca.paa";
			};
			class Static_06: Static_00
			{
				IDC = 2406;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_06_ca.paa";
			};
			class Static_07: Static_00
			{
				IDC = 2407;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_07_ca.paa";
			};
			class Static_08: Static_00
			{
				IDC = 2408;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_08_ca.paa";
			};
			class Static_09: Static_00
			{
				IDC = 2409;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_09_ca.paa";
			};
			class Static_10: Static_00
			{
				IDC = 2410;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_10_ca.paa";
			};
			class Static_11: Static_00
			{
				IDC = 2411;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_11_ca.paa";
			};
			class Static_12: Static_00
			{
				IDC = 2412;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_12_ca.paa";
			};
		};
	};
	class RscTilesGroup
	{
		duration = 1e+011;
		fadein = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscTilesGroup"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscTilesGroup"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscTilesGroup";
		scriptPath = "IGUI";
		class controls
		{
			class Group_00: RscControlsGroup
			{
				idc = 1000;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1200;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1100;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_01: RscControlsGroup
			{
				idc = 1001;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1201;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1101;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_02: RscControlsGroup
			{
				idc = 1002;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1202;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1102;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_03: RscControlsGroup
			{
				idc = 1003;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1203;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1103;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_04: RscControlsGroup
			{
				idc = 1004;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1204;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1104;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_05: RscControlsGroup
			{
				idc = 1005;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1205;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1105;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_06: RscControlsGroup
			{
				idc = 1006;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1206;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1106;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_07: RscControlsGroup
			{
				idc = 1007;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1207;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1107;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_08: RscControlsGroup
			{
				idc = 1008;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1208;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1108;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_09: RscControlsGroup
			{
				idc = 1009;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1209;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1109;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_10: RscControlsGroup
			{
				idc = 1010;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1210;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1110;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_11: RscControlsGroup
			{
				idc = 1011;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1211;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1111;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_12: RscControlsGroup
			{
				idc = 1012;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1212;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1112;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_13: RscControlsGroup
			{
				idc = 1013;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1213;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1113;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_14: RscControlsGroup
			{
				idc = 1014;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1214;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1114;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_15: RscControlsGroup
			{
				idc = 1015;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1215;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1115;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_16: RscControlsGroup
			{
				idc = 1016;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1216;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1116;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_17: RscControlsGroup
			{
				idc = 1017;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1217;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1117;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_18: RscControlsGroup
			{
				idc = 1018;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1218;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1118;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_19: RscControlsGroup
			{
				idc = 1019;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1219;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1119;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_20: RscControlsGroup
			{
				idc = 1020;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1220;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1120;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_21: RscControlsGroup
			{
				idc = 1021;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1221;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1121;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_22: RscControlsGroup
			{
				idc = 1022;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1222;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1122;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_23: RscControlsGroup
			{
				idc = 1023;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1223;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1123;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_24: RscControlsGroup
			{
				idc = 1024;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1224;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1124;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_25: RscControlsGroup
			{
				idc = 1025;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1225;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1125;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_26: RscControlsGroup
			{
				idc = 1026;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1226;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1126;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_27: RscControlsGroup
			{
				idc = 1027;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1227;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1127;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_28: RscControlsGroup
			{
				idc = 1028;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1228;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1128;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_29: RscControlsGroup
			{
				idc = 1029;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1229;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1129;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_30: RscControlsGroup
			{
				idc = 1030;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1230;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1130;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_31: RscControlsGroup
			{
				idc = 1031;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1231;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1131;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_32: RscControlsGroup
			{
				idc = 1032;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1232;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1132;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_33: RscControlsGroup
			{
				idc = 1033;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1233;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1133;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_34: RscControlsGroup
			{
				idc = 1034;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1234;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1134;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_35: RscControlsGroup
			{
				idc = 1035;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1235;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1135;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_36: RscControlsGroup
			{
				idc = 1036;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1236;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1136;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_37: RscControlsGroup
			{
				idc = 1037;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1237;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1137;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_38: RscControlsGroup
			{
				idc = 1038;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1238;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1138;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_39: RscControlsGroup
			{
				idc = 1039;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1239;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1139;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_40: RscControlsGroup
			{
				idc = 1040;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1240;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1140;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_41: RscControlsGroup
			{
				idc = 1041;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1241;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1141;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_42: RscControlsGroup
			{
				idc = 1042;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1242;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1142;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_43: RscControlsGroup
			{
				idc = 1043;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1243;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1143;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_44: RscControlsGroup
			{
				idc = 1044;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1244;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1144;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_45: RscControlsGroup
			{
				idc = 1045;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1245;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1145;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_46: RscControlsGroup
			{
				idc = 1046;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1246;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1146;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_47: RscControlsGroup
			{
				idc = 1047;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1247;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1147;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_48: RscControlsGroup
			{
				idc = 1048;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1248;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1148;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_49: RscControlsGroup
			{
				idc = 1049;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1249;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1149;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_50: RscControlsGroup
			{
				idc = 1050;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1250;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1150;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_51: RscControlsGroup
			{
				idc = 1051;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1251;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1151;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_52: RscControlsGroup
			{
				idc = 1052;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1252;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1152;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_53: RscControlsGroup
			{
				idc = 1053;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1253;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1153;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_54: RscControlsGroup
			{
				idc = 1054;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1254;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1154;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_55: RscControlsGroup
			{
				idc = 1055;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1255;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1155;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_56: RscControlsGroup
			{
				idc = 1056;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1256;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1156;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_57: RscControlsGroup
			{
				idc = 1057;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1257;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1157;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_58: RscControlsGroup
			{
				idc = 1058;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1258;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1158;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_59: RscControlsGroup
			{
				idc = 1059;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1259;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1159;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_60: RscControlsGroup
			{
				idc = 1060;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1260;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1160;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_61: RscControlsGroup
			{
				idc = 1061;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1261;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1161;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_62: RscControlsGroup
			{
				idc = 1062;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1262;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1162;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_63: RscControlsGroup
			{
				idc = 1063;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1263;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1163;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_64: RscControlsGroup
			{
				idc = 1064;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1264;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1164;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_65: RscControlsGroup
			{
				idc = 1065;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1265;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1165;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_66: RscControlsGroup
			{
				idc = 1066;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1266;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1166;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_67: RscControlsGroup
			{
				idc = 1067;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1267;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1167;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_68: RscControlsGroup
			{
				idc = 1068;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1268;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1168;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_69: RscControlsGroup
			{
				idc = 1069;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1269;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1169;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_70: RscControlsGroup
			{
				idc = 1070;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1270;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1170;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_71: RscControlsGroup
			{
				idc = 1071;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1271;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1171;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_72: RscControlsGroup
			{
				idc = 1072;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1272;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1172;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_73: RscControlsGroup
			{
				idc = 1073;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1273;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1173;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_74: RscControlsGroup
			{
				idc = 1074;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1274;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1174;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_75: RscControlsGroup
			{
				idc = 1075;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1275;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1175;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_76: RscControlsGroup
			{
				idc = 1076;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1276;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1176;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_77: RscControlsGroup
			{
				idc = 1077;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1277;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1177;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_78: RscControlsGroup
			{
				idc = 1078;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1278;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1178;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_79: RscControlsGroup
			{
				idc = 1079;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1279;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1179;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_80: RscControlsGroup
			{
				idc = 1080;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1280;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1180;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_81: RscControlsGroup
			{
				idc = 1081;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1281;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1181;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_82: RscControlsGroup
			{
				idc = 1082;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1282;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1182;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_83: RscControlsGroup
			{
				idc = 1083;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1283;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1183;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_84: RscControlsGroup
			{
				idc = 1084;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1284;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1184;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_85: RscControlsGroup
			{
				idc = 1085;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1285;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1185;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_86: RscControlsGroup
			{
				idc = 1086;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1286;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1186;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_87: RscControlsGroup
			{
				idc = 1087;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1287;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1187;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_88: RscControlsGroup
			{
				idc = 1088;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1288;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1188;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_89: RscControlsGroup
			{
				idc = 1089;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1289;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1189;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_90: RscControlsGroup
			{
				idc = 1090;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1290;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1190;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_91: RscControlsGroup
			{
				idc = 1091;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1291;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1191;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_92: RscControlsGroup
			{
				idc = 1092;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1292;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1192;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_93: RscControlsGroup
			{
				idc = 1093;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1293;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1193;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_94: RscControlsGroup
			{
				idc = 1094;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1294;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1194;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_95: RscControlsGroup
			{
				idc = 1095;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1295;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1195;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_96: RscControlsGroup
			{
				idc = 1096;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1296;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1196;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_97: RscControlsGroup
			{
				idc = 1097;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1297;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1197;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_98: RscControlsGroup
			{
				idc = 1098;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1298;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1198;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
			class Group_99: RscControlsGroup
			{
				idc = 1099;
				class controls
				{
					class RscPicture: RscPicture
					{
						h = 0;
						idc = 1299;
						w = 0;
						x = 0;
						y = 0;
					};
					class StructuredText: RscStructuredText
					{
						h = 0;
						idc = 1199;
						w = 0;
						x = 0;
						y = 0;
					};
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
			};
		};
	};
	class RscTime
	{
		duration = 10000;
		enableDisplay = 1;
		enableSimulation = 1;
		fadein = 0;
		idd = 1123;
		movingEnable = 1;
		onload = "uinamespace setvariable ['BIS_InfoTime',_this select 0]";
		onunload = "uinamespace setvariable ['BIS_InfoTime',nil]";
		class controls
		{
			class text0: RscStructuredText
			{
				colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				h = 1;
				idc = 112301;
				size = 0.035;
				w = 1;
				x = 0;
				y = 0.4;
				class Attributes
				{
					align = "center";
					font = "RobotoCondensedBold";
					shadow = 1;
					valign = "top";
				};
			};
		};
	};
	class RscTitleCommon: RscDisplayCommon
	{
		onload = "uinamespace setvariable ['Hsim_RscTitleCommon',_this select 0];";
		onunload = "uinamespace setvariable ['Hsim_RscTitleCommon',nil];";
	};
	class RscTitleDisplayEmpty: RscDisplayEmpty
	{
		duration = 1e+011;
		fadeIn = 0;
		fadeOut = 0;
		onLoad = "uiNamespace setVariable ['RscTitleDisplayEmpty',_this select 0]";
	};
	class RscTitleStructuredText
	{
		duration = 10;
		fadein = 0.5;
		idd = -1;
		movingEnable = 1;
		onload = "uinamespace setvariable ['RscTitleStructuredText',_this select 0];";
		class controls
		{
			class Text: RscStructuredText
			{
				h = "3 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				idc = 9999;
				w = "(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				x = "(profilenamespace getvariable [""IGUI_GRID_CHAT_X"",		(safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 3 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				class Attributes: Attributes
				{
					align = "center";
				};
			};
		};
	};
	class RscUnitInfoUAV
	{
		duration = 10000;
		enableDisplay = 1;
		enableSimulation = 1;
		fadein = 0;
		idd = 1125;
		movingEnable = 1;
		onload = "uinamespace setvariable ['BIS_UAV_DISPLAY',_this select 0]";
		onunload = "uinamespace setvariable ['BIS_UAV_DISPLAY',nil]";
		class controls
		{
			class AltWanted: Speed
			{
				idc = 112413;
				sizeEx = "0.024*1.2";
				y = "SafeZoneY + SafezoneH - 0.16";
			};
			class CA_MiniMap: RscMapControl
			{
				alphaFadeEndScale = 0;
				alphaFadeStartScale = 0;
				colorbackground[] = {1, 1, 1, 1};
				h = "0.33 - 0.02";
				IDC = 112410;
				ShowCountourInterval = 0;
				w = "0.33 - 0.02";
				x = "0.012 + SafeZoneX + 0.01";
				y = "0.016 + SafeZoneY + 0.01";
			};
			class Hint_brightness: Locked_text_L
			{
				h = 0.15;
				idc = 112414;
				linespacing = 1;
				style = "0x00 + 0x10 + 0x200 + 0x100";
				text = "";
				w = 0.35;
				x = "SafeZoneX + 0.012";
				y = "SafeZoneY + 0.4";
			};
			class Locked_frame_L: Locked_text_L
			{
				idc = 112402;
				style = 64;
			};
			class Locked_frame_R: Locked_text_R
			{
				idc = 112404;
				style = 64;
			};
			class Locked_text_L: RscText
			{
				colorbackground[] = {0, 0, 0, 0};
				colortext[] = {1, 1, 1, 1};
				font = "RobotoCondensedBold";
				h = 0.7;
				idc = 112401;
				linespacing = 1.8;
				sizeEx = "0.024*1.3";
				style = "0x02 + 0x10";
				text = "\nL\n\nO\n\nC\n\nK\n\nE\n\nD";
				w = 0.07;
				x = "SafeZoneX + 0.025";
				y = "SafeZoneY + 0.200";
			};
			class Locked_text_R: Locked_text_L
			{
				idc = 112403;
				x = "SafeZoneX + SafeZoneW - 0.025 - 0.07";
			};
			class Speed: RscIGUIText
			{
				color[] = {1, 1, 1, 1};
				colortext[] = {1, 1, 1, 1};
				font = "RobotoCondensedBold";
				h = 0.05;
				idc = 112411;
				sizeEx = "0.024*1.3";
				style = "0x01 + 0x100";
				w = 0.3;
				x = "SafeZoneX + SafeZoneW - 0.45";
				y = "SafeZoneY + SafezoneH - 0.26";
			};
			class SpeedWanted: Speed
			{
				idc = 112412;
				sizeEx = "0.024*1.2";
				y = "SafeZoneY + SafezoneH - 0.23";
			};
		};
	};
	class RscUnitPlay
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 1;
		onload = "uinamespace setvariable ['RscUnitPlay',_this select 0];";
		class controls
		{
			class Map: RscMapControlEmpty
			{
				h = 0;
				idc = 1000;
				w = 0;
				x = 10;
				y = 10;
			};
		};
	};
	class RscVision
	{
		duration = 1e+010;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscVision"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscVision"",'ContactTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscVision";
		scriptPath = "ContactTitles";
		class Controls
		{
			class Map: RscMapControlEmpty
			{
				h = 0;
				onDraw = "['draw',_this,''] call (uinamespace getvariable 'RscVision_script')";
				w = 0;
			};
		};
	};
	class RscVRMeta
	{
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		onLoad = "[""onLoad"",_this,""RscVRMeta"",'BootcampTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscVRMeta"",'BootcampTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscVRMeta";
		scriptPath = "BootcampTitles";
		class Controls
		{
			class VRMeta: RscControlsGroupNoScrollbars
			{
				h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 5778;
				w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class controls
				{
					class BackgroundSpeed: RscText
					{
						colorBackground[] = {0.2, 0.2, 0.2, 0.3};
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4479;
						w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class BackgroundTgt: BackgroundSpeed
					{
						colorBackground[] = {0.2, 0.2, 0.2, 0.3};
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4481;
						w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ProgressSpeed: RscProgress
					{
						colorBackground[] = {0, 0, 0, 0.25};
						colorBar[] = {0, 0, 0, 0.25};
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4484;
						w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ProgressTgt: ProgressSpeed
					{
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4492;
						w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class TextSpeed: RscText
					{
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4487;
						sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						text = "Speed";
						w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class TextTgt: TextSpeed
					{
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4491;
						text = "Target";
						w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ValueSpeed: RscText
					{
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4490;
						sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						style = 1;
						w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ValueTgt: ValueSpeed
					{
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4494;
						style = 2;
						w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ValueTgtDmg: ValueTgt
					{
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						idc = 4495;
						style = 1;
						w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscWeaponChemicalDetector
	{
		duration = 99999;
		enableSimulation = 1;
		fadeIn = "false";
		fadeOut = "false";
		idd = -1;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscWeaponChemicalDetector"",'EnochIngameUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscWeaponChemicalDetector"",'EnochIngameUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscWeaponChemicalDetector";
		scriptPath = "EnochIngameUI";
		class Objects
		{
			class TestObject: RscObject
			{
				direction[] = {0, 0, 1};
				enableZoom = 0;
				idc = 101;
				inBack = 0;
				model = "\a3\UI_F_Contact\Data\Objects\ChemicalDetector_01_ui_F.p3d";
				position[] = {0.0155, -0.026, 0.1};
				positionBack[] = {0.0515, -0.0575, 0.225};
				scale = 0.7;
				type = 82;
				up[] = {0, 1, 0};
				zoomDuration = 0;
				class Areas
				{
					class Usertexture
					{
						selection = "display";
						class Controls {};
					};
				};
			};
		};
	};
	class SplashArma3
	{
		controls[] = {"Picture"};
		duration = 3;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		name = "Splash screen Arma 3";
		class Picture: RscPicture
		{
			h = "10 * 		(0.025 * SafezoneH)";
			idc = 1200;
			text = "\A3\Ui_f\data\Logos\arma3_splash_ca.paa";
			w = "20 * 		(0.01875 * SafezoneH)";
			x = "0.5 - 10 * 		(0.01875 * SafezoneH)";
			y = "0.5 - 6 * 		(0.025 * SafezoneH)";
		};
	};
	class SplashArma3Apex: SplashArma3
	{
		class Picture: Picture
		{
			text = "\a3\Ui_f\Data\Logos\arma3apex_white_ca.paa";
			y = "0.5 - 7 * 		(0.025 * SafezoneH)";
		};
	};
	class SplashArma3Lite
	{
		controls[] = {"Picture", "Tagline"};
		duration = 3;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		class Picture: RscPicture
		{
			h = "10 * 		(0.025 * SafezoneH)";
			idc = 1200;
			text = "\A3\Ui_f\data\IGUI\RscTitles\SplashArma3\arma3_lite_splash_ca.paa";
			w = "20 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (20 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (17 * 		(0.025 * SafezoneH)) / 2";
		};
		class Tagline: RscPicture
		{
			h = "8.05 * 		(0.025 * SafezoneH)";
			idc = 1201;
			text = "\A3\Ui_f\data\IGUI\RscTitles\SplashTagline\ThisIsWar_ca.paa";
			w = "16.1 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (16.1 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (2.9 * 		(0.025 * SafezoneH)) / 2";
		};
	};
	class SplashArma3Orange: SplashArma3
	{
		duration = 20;
		fadein = 0.5;
		name = "";
		onLoad = "[""onLoad"",_this,""SplashArma3Orange"",'OrangeTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""SplashArma3Orange"",'OrangeTitles'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "SplashArma3Orange";
		scriptPath = "OrangeTitles";
		class Picture: Picture
		{
			text = "\a3\Data_F_Orange\Logos\arma3_orange_logoTitle_ca.paa";
		};
	};
	class SplashBohemia
	{
		controls[] = {"Picture", "TextPresents"};
		duration = 3;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		name = "Splash screen Bohemia Interactive";
		class Picture: RscPicture
		{
			h = "24 * 		(0.025 * SafezoneH)";
			idc = 1200;
			text = "\A3\Ui_f\data\IGUI\RscTitles\SplashBohemia\bi_logo_small_ca.paa";
			w = "48 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (48 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (31.7 * 		(0.025 * SafezoneH)) / 2";
		};
		class TextPresents: RscText
		{
			h = "0.03 * SafezoneH";
			idc = 1000;
			shadow = 0;
			sizeEx = "0.03*SafezoneH";
			style = 2;
			text = "PRESENTS";
			w = "48 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (46.5 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH - (0.505 * SafezoneH)";
		};
	};
	class SplashContact
	{
		controls[] = {"Picture"};
		duration = 3;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		name = "Splash screen Contact";
		class Picture: RscPicture
		{
			h = "10 * 		(0.025 * SafezoneH)";
			idc = 1200;
			text = "\a3\data_f_contact\logos\logoTitle_ca.paa";
			w = "20 * 		(0.01875 * SafezoneH)";
			x = "0.5 - 10 * 		(0.01875 * SafezoneH)";
			y = "0.5 - 6 * 		(0.025 * SafezoneH)";
		};
	};
	class SplashContactPrototypeMission
	{
		controls[] = {"Picture", "Text"};
		duration = 15;
		fadein = 3;
		fadeout = 3;
		idd = -1;
		movingEnable = 0;
		name = "Splash screen Contact - Prototype Mission";
		class Picture: RscPicture
		{
			h = "10 * 		(0.025 * SafezoneH)";
			idc = 1200;
			text = "\a3\data_f_contact\logos\logoTitle_ca.paa";
			w = "20 * 		(0.01875 * SafezoneH)";
			x = "0.5 - 10 * 		(0.01875 * SafezoneH)";
			y = "0.5 - 8 * 		(0.025 * SafezoneH)";
		};
		class Text: RscStructuredText
		{
			h = "0.39 * SafezoneH";
			idc = -1;
			shadow = 0;
			size = "0.02 * SafezoneH";
			text = "<t size='3'>PROTOTYPE</t><br /><br />Thanks for playing this early slice of gameplay! Please share your thoughts with us on Confluence.<br /><br />You'll find some more experimental prototypes via the CONCEPTS button in the main menu, and feel free to explore Enoch via the EDITOR.<br /><br /><br /><t color='#ff9900'>CLASSIFIED - INTERNAL USE ONLY</t>";
			w = "50 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (50 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH - (0.4 * SafezoneH)";
			class Attributes
			{
				align = "center";
				shadow = 0;
			};
		};
	};
	class SplashCopyright
	{
		controls[] = {"PictureA3Logo", "PictureBIlogo", "PicturePhysXLogo", "LegalText"};
		duration = 3;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		name = "Splash screen Copyright";
		class LegalText: RscStructuredText
		{
			h = "0.39 * SafezoneH";
			idc = -1;
			shadow = 0;
			size = "0.02 * SafezoneH";
			text = "© 2013-2019 Bohemia Interactive a.s. Arma® and Bohemia Interactive® are registered trademarks of Bohemia Interactive a.s. All rights reserved.<br /><br /><br /><br />NVIDIA GameWorks™ Technology provided under license from NVIDIA Corporation. Copyright © 2002-2019 NVIDIA Corporation. All rights reserved.<br />NVIDIA® and PhysX® are trademarks of NVIDIA Corporation and are used under license.<br /><br />Portions of this software utilize Simul True Sky technology (© 2015 Simul Software Ltd, all rights reserved).<br /><br />This product includes copyrighted material of DigitalGlobe, Inc. All rights reserved.<br /><br />Arma 3 simulates real-world weapons, vehicles and other equipment. The product names, logos, brands and other trademarks<br />depicted or referred to in the game or in its ancillary materials are the property of their respective trademark owners.<br />These trademark owners, and the manufacturers of the weapons, vehicles and other equipment used in the game,<br />are not affiliated with the producer of Arma 3 and do not endorse or sponsor the game.";
			w = "50 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (50 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH - (0.38 * SafezoneH)";
			class Attributes
			{
				align = "center";
				shadow = 0;
			};
		};
		class PictureA3Logo: RscPicture
		{
			h = "4 * 		(0.025 * SafezoneH)";
			idc = 1200;
			text = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
			w = "8 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (36 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (13.7 * 		(0.025 * SafezoneH)) / 2";
		};
		class PictureBIlogo: RscPicture
		{
			h = "16 * 		(0.025 * SafezoneH)";
			idc = 1201;
			text = "\A3\Ui_f\data\IGUI\RscTitles\SplashBohemia\bi_logo_small_ca.paa";
			w = "32 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (33 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (25.7 * 		(0.025 * SafezoneH)) / 2";
		};
		class PicturePhysXLogo: RscPicture
		{
			h = "4 * 		(0.025 * SafezoneH)";
			idc = 1202;
			text = "\A3\Ui_f\data\Logos\GameWorks_white_ca.paa";
			w = "16 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 + (16.5 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (13.6 * 		(0.025 * SafezoneH)) / 2";
		};
	};
	class SplashESRB
	{
		controls[] = {"Picture"};
		duration = 4;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		name = "Splash screen ESRB";
		class Picture: RscPicture
		{
			h = "36 * 		(0.025 * SafezoneH)";
			text = "\A3\Ui_f\data\IGUI\RscTitles\SplashESRB\ESRB_co.paa";
			w = "72 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (72 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (36 * 		(0.025 * SafezoneH)) / 2";
		};
	};
	class SplashNoise
	{
		controls[] = {"BackgroundNoise"};
		duration = 11;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		class BackgroundNoise: RscPicture
		{
			colorText[] = {1, 1, 1, 0.7};
			h = "safezoneH";
			text = "\A3\Ui_f\data\IGUI\RscTitles\SplashArma3\arma3_splashNoise_ca.paa";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
	};
	class SplashTagline
	{
		controls[] = {"Picture"};
		duration = 3;
		fadein = 0;
		fadeout = 0;
		idd = -1;
		movingEnable = 0;
		name = "Splash screen Tagline";
		class Picture: RscPicture
		{
			h = "24 * 		(0.025 * SafezoneH)";
			idc = 1200;
			text = "\A3\Ui_f\data\IGUI\RscTitles\SplashTagline\ThisIsWar_ca.paa";
			w = "48 * 		(0.01875 * SafezoneH)";
			x = "SafeZoneX + SafeZoneW / 2 - (48 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (31.7 * 		(0.025 * SafezoneH)) / 2";
		};
	};
};
