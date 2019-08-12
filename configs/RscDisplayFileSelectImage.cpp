class RscDisplayFileSelectImage
{
	idd = 167;
	onLoad = "[""onLoad"",_this,""RscDisplayFileSelectImage"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayFileSelectImage"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayFileSelectImage";
	scriptPath = "GUI";
	class controls
	{
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "Discard changes.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonSelect: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "Confirm image selection.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ListFiles: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "SafezoneH - (6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 103;
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class OverviewPicture: RscPictureKeepAspect
		{
			h = "6.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayPublishMission\SteamWorksDefaultImage_co.paa";
			w = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class PlayersName: Title
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			style = 1;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextPath: RscText
		{
			colorBackground[] = {0, 0, 0, 0.98};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			style = 0;
			text = "Select Image";
			w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TreeDirectory: RscTree
		{
			h = "SafezoneH - (6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 102;
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
	};
	class controlsBackground
	{
		class FullscreenBackground: RscText
		{
			colorBackground[] = {0.7, 0.7, 0.7, 0.8};
			h = "SafezoneH";
			idc = -1;
			w = "SafezoneW";
			x = "SafezoneX";
			y = "SafezoneY";
		};
		class ListBackground2: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "20.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (1 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
			idc = 1083;
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class PictureBackground2: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "20.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (1 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
			idc = 1084;
			w = "12.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TitleBackground2: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TreeBackground2: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "20.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (1 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
			idc = 1082;
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
	};
};
