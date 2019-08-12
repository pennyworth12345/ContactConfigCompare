class RscDisplayMainMap
{
	access = 0;
	idd = 12;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDiary"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiary"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	saveParams = 1;
	scriptName = "RscDiary";
	scriptPath = "GUI";
	class controls
	{
		class BriefingIntroBackgroundLayer: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "safezoneH";
			idc = 1102;
			show = 0;
			w = "safezoneWabs";
			x = "safezoneXabs";
			y = "safezoneY";
		};
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
		class BriefingIntroVideoLayer: BriefingIntroGraphicsLayer
		{
			idc = 1100;
		};
		class ButtonBack: RscActiveText
		{
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 0.7};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			style = 48;
			text = "\A3\ui_f\data\map\diary\back_gs.paa";
			tooltip = "Close";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "-0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ButtonPlayers: RscButtonTextOnly
		{
			colorFocused[] = {1, 1, 1, 0.5};
			colorFocused2[] = {1, 1, 1, 0.1};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 117;
			period = 1.2;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 0;
			text = "Players:";
			w = "8.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ButtonTexturesReal: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 107;
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class CA_ContentBackgroundd: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1023;
			w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_DiaryGroup: RscControlsGroup
		{
			h = "safezoneH - 7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1013;
			w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
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
			h = "safezoneH - 7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			padding = 0.004;
			shadowPictureLeft = 0;
			shadowPictureRight = 0;
			shadowTextLeft = 0;
			shadowTextRight = 0;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
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
		class CA_MainBackground: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1020;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_MainBackgroundGradient: RscPicture
		{
			colorText[] = {1, 1, 1, 0.15};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1200;
			text = "\A3\ui_f\data\map\diary\gradient_gs.paa";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_MissionName: RscText
		{
			colorText[] = {1, 1, 1, 1};
			font = "RobotoCondensedLight";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 112;
			shadow = 0;
			sizeEx = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Mission name:";
			w = "14 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_MouseOver: RscText
		{
			colorText[] = {0.7, 0.1, 0, 1};
			h = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1016;
			shadow = 0;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = "0x00 + 0x10";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -10;
			y = -10;
		};
		class CA_SubTopicsBackground: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1022;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_TopicsBackground: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1021;
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Copyright: RscText
		{
			font = "RobotoCondensedBold";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			shadow = 2;
			sizeEx = "0.6*0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 1;
			w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - (12 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "safezoneY + safezoneH - (1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
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
			h = "safezoneH - 7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
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
		class HC_tooltip_back: IGUIBack
		{
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			h = 0;
			idc = 1124;
			w = 0;
			x = 0;
			y = 0;
		};
		class HC_tooltip_text: RscStructuredText
		{
			h = 0;
			idc = 1125;
			size = 0.035;
			w = 0;
			x = 0;
			y = 0;
			class Attributes
			{
				align = "left";
				color = "#B6F862";
				font = "RobotoCondensedBold";
				shadow = 1;
			};
		};
		class MuteAll: RscCheckBox
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 119;
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
			x = "15.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
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
		class Tooltip: RscMapControlTooltip {};
		class TopRight: RscControlsGroup
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2302;
			w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - (26 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class ButtonPlayer: RscActiveText
				{
					color[] = {1, 1, 1, 0.7};
					colorActive[] = {1, 1, 1, 1};
					colorText[] = {1, 1, 1, 0.7};
					h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1202;
					onbuttonclick = "with uinamespace do {['ButtonPlayer',_this,''] call RscDiary_script};";
					style = 48;
					text = "\A3\ui_f\data\igui\cfg\islandmap\iconplayer_ca.paa";
					tooltip = "Move map to player position";
					w = "1.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonTextures: RscActiveText
				{
					color[] = {1, 1, 1, 0.7};
					colorActive[] = {1, 1, 1, 1};
					colorText[] = {1, 1, 1, 0.7};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					onbuttonclick = "with uinamespace do {['ButtonTextures',_this,''] call RscDiary_script};";
					style = 48;
					text = "\A3\ui_f\data\map\diary\textures_ca.paa";
					tooltip = "Toggle map textures";
					w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_PlayerName: RscText
				{
					font = "RobotoCondensedLight";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 111;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					text = "Player name:";
					w = "10.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Clock: RscText
				{
					colorText[] = {1, 1, 1, 0.7};
					font = "RobotoCondensedLight";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 101;
					shadow = 0;
					sizeEx = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 0;
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "20.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "-0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MarkerColor: RscCombo
				{
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1090;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "Marker color";
					w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "11.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MarkerIcon: RscCombo
				{
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1091;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "Marker icon.";
					w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "14.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ProfileBackground: RscText
				{
					colorBackground[] = {1, 1, 1, 0.2};
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1014;
					w = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "10.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ProfilePicture: RscPicture
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 116;
					text = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "10.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Separator1: RscPicture
				{
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1205;
					text = "\A3\ui_f\data\map\diary\separator_ca.paa";
					w = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Separator2: RscPicture
				{
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1204;
					text = "\A3\ui_f\data\map\diary\separator_ca.paa";
					w = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "20.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
		class CA_Black: CA_Black_Back {};
		class CA_Map: RscMapControl
		{
			idcMarkerColor = 1090;
			idcMarkerIcon = 1091;
		};
		class CA_RscMapSignalBackground: RscMapSignalBackground {};
		class CA_RscMapSignalPicture: RscMapSignalPicture {};
		class CA_RscMapSignalText: RscMapSignalText {};
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
