class RscDisplayDiary
{
	access = 0;
	idd = 129;
	movingEnable = 0;
	onKeyDown = "if ((_this select 1) == 22) then {closeDialog 129; true} else {false}";
	onLoad = "[""onLoad"",_this,""RscDisplayDiary"",'ContactDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDiary"",'ContactDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayDiary";
	scriptPath = "ContactDisplaysTemp";
	class Controls
	{
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
		class TooltipSimple: RscMapTooltipSimple {};
		class Vignette: RscVignette
		{
			colorText[] = {0, 0, 0, 0.2};
		};
	};
};
