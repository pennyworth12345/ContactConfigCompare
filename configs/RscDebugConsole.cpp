class RscDebugConsole: RscControlsGroupNoScrollbars
{
	h = "21.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 13184;
	w = "21.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "9 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class ButtonAnimations: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13291;
			text = "ANIMATIONS";
			w = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "19.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCodePerformance: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13284;
			style = 2;
			text = "<img image='\a3\Ui_f\data\GUI\RscCommon\RscDebugConsole\performance_ca.paa' align='center' size='0.7' />";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class TextPos
			{
				bottom = 0;
				left = 0;
				right = 0;
				top = 0;
			};
		};
		class ButtonConfig: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13290;
			text = "CONFIG";
			w = "7.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "20.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonExecuteAll: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13285;
			text = "GLOBAL EXEC";
			w = "6.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonExecuteAllBackground: RscText
		{
			colorBackground[] = {1, 0, 0, 0.25};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = -1;
			show = "isMultiplayer";
			w = "6.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonExecuteLocal: RscButtonMenu
		{
			default = 1;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13484;
			text = "LOCAL EXEC";
			w = "6.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonExecuteLocalBackground: RscText
		{
			colorBackground[] = {0, 0, 1, 0.25};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = -1;
			show = "isMultiplayer";
			w = "6.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonExecuteServer: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13286;
			text = "SERVER EXEC";
			w = "6.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonExecuteServerBackground: RscText
		{
			colorBackground[] = {0, 1, 0, 0.25};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = -1;
			show = "isMultiplayer";
			w = "6.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "9.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonFunctions: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13289;
			text = "FUNCTIONS";
			w = "7.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "19.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonGUI: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13292;
			text = "GUI EDITOR";
			w = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "20.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonSpectatorCamera: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13287;
			text = "SPECTATOR";
			w = "7.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "19.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonSplendidCamera: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13288;
			text = "CAMERA";
			w = "7.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "20.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Expression: RscEdit
		{
			autocomplete = "scripting";
			font = "EtelkaMonospacePro";
			h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12284;
			onMouseButtonDblClick = "ctrlSetFocus (_this select 0)";
			sizeEx = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 16;
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ExpressionBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11885;
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ExpressionOutput: RscEdit
		{
			canModify = 0;
			colorBackground[] = {0, 0, 0, 0.8};
			font = "EtelkaMonospacePro";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13190;
			onLoad = "parsingNamespace setVariable [""BIS_RscDebugConsoleExpressionResultCtrl"", _this select 0]";
			onMouseButtonDblClick = "ctrlSetFocus (_this select 0)";
			sizeEx = "0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 512;
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "7.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ExpressionOutputBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13191;
			show = "isMultiplayer";
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "7.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ExpressionText: RscText
		{
			h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11892;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Execute";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Link: RscHTML
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11891;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscTitle
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11884;
			text = "Debug console";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "8.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11886;
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "10.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchInput1: RscEdit
		{
			autocomplete = "scripting";
			font = "EtelkaMonospacePro";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12285;
			onKillFocus = "_this select 0 setVariable ['RscDebugConsole_watchPaused', false]";
			onMouseButtonDblClick = "ctrlSetFocus (_this select 0)";
			onSetFocus = "_this select 0 setVariable ['RscDebugConsole_watchPaused', true]";
			shadow = 0;
			sizeEx = "0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchInput2: WatchInput1
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12287;
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "13 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchInput3: WatchInput1
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12289;
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchInput4: WatchInput1
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12291;
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutput1: RscEdit
		{
			canModify = 0;
			colorBackground[] = {0, 0, 0, 0.8};
			font = "EtelkaMonospacePro";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12286;
			onMouseButtonDblClick = "ctrlSetFocus (_this select 0)";
			sizeEx = "0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 512;
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "12 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutput2: WatchOutput1
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12288;
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "14 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutput3: WatchOutput1
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12290;
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "16 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchOutput4: WatchOutput1
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 12293;
			w = "21 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "18 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class WatchText: RscText
		{
			h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11893;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Watch:";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "10.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
