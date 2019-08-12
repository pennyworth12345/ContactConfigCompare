class RscDisplayDebriefingTacops
{
	idd = -1;
	onLoad = "[""onLoad"",_this,""RscDisplayDebriefingTacops"",'TacopsDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDebriefingTacops"",'TacopsDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayDebriefingTacops";
	scriptPath = "TacopsDisplays";
	class Controls
	{
		class Background: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "21 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 34605;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonPlay: RscActivePicture
		{
			color[] = {1, 1, 1, 0.75};
			h = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 34805;
			shadow = 0;
			text = "\a3\UI_F_Tacops\Data\Displays\RscDisplayDebriefingTacops\buttonPlay_ca.paa";
			w = "24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonPrompt: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 34607;
			style = 2;
			text = "WATCH AFTER ACTION REVIEW";
			w = "24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Close: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Close";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "33 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Description: RscStructuredText
		{
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 34704;
			w = "24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Title: RscTitle
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 34604;
			text = "Debriefing";
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TitleComplete: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 34606;
			sizeEx = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "OPERATION COMPLETE";
			w = "24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class VideoOverview: RscPicture
		{
			h = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 34804;
			text = "\A3\Missions_F_Tacops\data\img\campaign2_ca.paa";
			w = "24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
};
