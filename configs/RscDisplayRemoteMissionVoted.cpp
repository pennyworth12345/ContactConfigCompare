class RscDisplayRemoteMissionVoted: RscStandardDisplay
{
	idd = 126;
	onLoad = "[""onLoad"",_this,""RscDisplayRemoteMissionVoted"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayRemoteMissionVoted"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayRemoteMissionVoted";
	scriptPath = "GUI";
	class controls
	{
		class CA_ChangeVote: RscButtonMenu
		{
			default = 1;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Back";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Players_list: RscListBox
		{
			h = "19.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 105;
			w = "13.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "3.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Remaining_Time: RscTitle
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 118;
			w = "13.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TextPlayer: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 117;
			text = "Map:";
			w = "13.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Voted_diff: RscText
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 119;
			w = "24 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "21.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Voted_missions_list: CA_Players_list
		{
			h = "18.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 116;
			w = "24 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "3.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class PlayersName: RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 109;
			style = 1;
			w = "24 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TextMissions: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1006;
			text = "Missions:";
			w = "24 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
	class controlsBackground
	{
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1081;
			w = "24 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "21.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "38 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
};
