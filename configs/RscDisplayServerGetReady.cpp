class RscDisplayServerGetReady: RscDisplayGetReady
{
	color0[] = {0.4, 0.4, 0.4, 1};
	color1[] = {1, 0.6, 0, 1};
	color2[] = {0.1961, 0.1451, 0.0941, 1};
	idd = 52;
	onLoad = "[""onLoad"",_this,""RscDiary"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiary"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDiary";
	scriptPath = "GUI";
	class controls
	{
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
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class ShortcutPos: ShortcutPos
			{
				left = "9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			};
		};
		class ButtonContinue: RscButtonMenuOK
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			shortcuts[] = {"0x00050000 + 8", "0x00050000 + 0", 28, 57, 156};
			text = "Continue";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (11 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class ShortcutPos: ShortcutPos
			{
				left = "8.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			};
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
		class Players: RscListBox
		{
			h = 0.3;
			idc = 120;
			w = 0.25;
			x = -2;
			y = -2;
		};
		class PlayersTitle: RscText
		{
			style = "0x00 + 0xA0";
			text = "Players";
			w = 0.25;
			x = -2;
			y = -2;
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
};
