class RscDisplayMultiplayer: RscStandardDisplay
{
	colorPingBad[] = {1, 0, 0, 1};
	colorPingGood[] = {0, 1, 0, 1};
	colorPingPoor[] = {1, 0.6, 0, 1};
	colorPingUnknown[] = {0.4, 0.4, 0.4, 1};
	colorVersionBad[] = {1, 0, 0, 1};
	colorVersionGood[] = {1, 1, 1, 1};
	hideBattlEye = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\hidebattleeye_ca.paa";
	hideExpansions = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\hideexpansions_ca.paa";
	hideFull = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\hidefull_ca.paa";
	hidePassworded = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\hidepassworded_ca.paa";
	idd = 8;
	modMissing = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_addons_ca.paa";
	modPresent = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_none_ca.paa";
	onLoad = "[""onLoad"",_this,""RscDisplayMultiplayer"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMultiplayer"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayMultiplayer";
	scriptPath = "GUI";
	showBattlEye = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\showbattleye_ca.paa";
	showExpansions = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\showexpansions_ca.paa";
	showFull = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\showfull_ca.paa";
	showNoBattlEye = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\shownobattleye_ca.paa";
	showPassworded = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\showpassworded_ca.paa";
	sortDown = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_down_ca.paa";
	sortUp = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
	class controls
	{
		class ButtonLauncherServerBrowser: RscButtonMenu
		{
			colorBackground[] = {0.0313726, 0.721569, 0.917647, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 168;
			text = "Server Browser in Launcher";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_BFilter: CA_Cancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 124;
			shortcuts[] = {};
			text = "Filter";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "13.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_BRemote: CA_Cancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 166;
			shortcuts[] = {};
			text = "Direct Connect";
			tooltip = "Connect to the server using its IP address and port.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_Cancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Back";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_FavoriteColumn: RscShortcutButton
		{
			animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureOver = "#(argb,8,8,3)color(1,1,1,0.5)";
			animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
			colorBackground[] = {0, 0, 0, 0.8};
			colorBackground2[] = {1, 1, 1, 0.5};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 156;
			shadow = 0;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 0;
			text = "<img image='a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\favouritecolumntitle_ca.paa'>";
			type = 16;
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "safezoneY + (5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			class TextPos
			{
				bottom = 0;
				left = 0;
				right = 0;
				top = 0.003;
			};
		};
		class CA_FavoriteIcon: RscPicture
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 157;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "safezoneY + (5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_FilterFullServers: CA_FilterPasswordedServers
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 151;
			text = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\hidefull_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "13.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_FilterPasswordedServers: RscPicture
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 150;
			text = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\hidepassworded_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "13.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_FrameExpansions: RscFrame
		{
			h = "7.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1802;
			text = "Expansions";
			w = "(12.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.333*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (26.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.666*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			y = "14.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_FrameMission: RscFrame
		{
			h = "7.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1803;
			text = "Mission";
			w = "(12.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.333*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "14.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_FramePlayers: RscFrame
		{
			h = "7.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1801;
			text = "Friends";
			w = "(12.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.333*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (13.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.333*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			y = "14.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Join: RscButtonMenuOK
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 105;
			text = "Join";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (7.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "13.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_MissionColumn: CA_ServerColumn
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 114;
			text = "Mission";
			w = "(10.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (18.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_MissionIcon: CA_ServerIcon
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 113;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (27.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_New: CA_Cancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 167;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Host Server";
			tooltip = "Create a new server on Internet or LAN.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_PingColumn: CA_ServerColumn
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 120;
			text = "Ping";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (35.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_PingIcon: CA_ServerIcon
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 119;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (37.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_PlayersColumn: CA_ServerColumn
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 118;
			text = "Players";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (32.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_PlayersIcon: CA_ServerIcon
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 117;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (34.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_Refresh: CA_Cancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 123;
			shortcuts[] = {"0x00050000 + 3", 63};
			text = "Refresh";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11.85 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "13.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerBEFilter: CA_FilterPasswordedServers
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 154;
			text = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\hidebattleeye_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "13.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerColumn: RscButtonTextOnly
		{
			colorFocused[] = {1, 1, 1, 0.5};
			colorFocused2[] = {1, 1, 1, 0.1};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 112;
			period = 1.2;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 0;
			text = "Host";
			w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "2.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "safezoneY + (5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_ServerCount: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 158;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 0;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ServerDetailBE: CA_ServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 201;
			w = "(4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.3*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "18.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailCountry: CA_ServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 145;
			w = "(4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.3*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "18.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailDifficulty: CA_ServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 138;
			w = "(4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.3*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "16.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailExpansion: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "7.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 148;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "(12.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.333*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (26.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.666*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			y = "15.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailHost: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 129;
			shadow = 1;
			w = "(11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.333*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "1.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "15.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailIsland: RscText
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 132;
			shadow = 1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "(4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.3*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "16.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailPassword: RscPicture
		{
			h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 143;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "15.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailPlatform: CA_ServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 130;
			w = "(4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.3*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailPlayers: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "7.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 149;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "(12.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.333*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (13.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.333*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			y = "15.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailTimeLeft: CA_ServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 134;
			w = "(4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.3*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "20.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailVersion: CA_ServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 144;
			w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerDetailVersionRequired: CA_ServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 147;
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "21.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerExpansionsFilter: CA_FilterPasswordedServers
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 155;
			text = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\hideexpansions_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "4.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "13.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ServerIcon: RscPicture
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 111;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (13.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			y = "safezoneY + (5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_StateColumn: CA_ServerColumn
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 116;
			text = "Status";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (29.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_StateIcon: CA_ServerIcon
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 115;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (31.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_TextServerDetailBE: CA_TextServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1010;
			text = "BattlEye required:";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "18.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TextServerDetailCountry: CA_TextServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1012;
			text = "Country:";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "18.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TextServerDetailDifficulty: CA_TextServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1021;
			text = "Difficulty:";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "16.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TextServerDetailIsland: RscText
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1019;
			shadow = 1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Map:";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "16.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TextServerDetailPlatform: CA_TextServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1014;
			text = "Type:";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TextServerDetailTimeLeft: CA_TextServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1017;
			text = "Time until mission ends:";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "20.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Title2: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "Server Browser";
			w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
		};
		class CA_TypeColumn: CA_ServerColumn
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 141;
			text = "Type";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_TypeIcon: CA_ServerIcon
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 140;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (17 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
		};
		class CA_ValueSessions: RscListBox
		{
			addons = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_addons_ca.paa";
			allowedFilePatching = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_version_ca.paa";
			colorPingBad[] = {1, 0, 0, 1};
			colorPingGood[] = {0, 1, 0, 1};
			colorPingPoor[] = {1, 0.6, 0, 1};
			colorPingUnknown[] = {0.4, 0.4, 0.4, 1};
			colorSelect[] = {0, 0, 0, 1};
			h = "SafezoneH - (17.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 102;
			locked = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_locked_ca.paa";
			mods = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_mods_ca.paa";
			none = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_none_ca.paa";
			password = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_password_ca.paa";
			serverDislike = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\mp_serverdislike_ca.paa";
			serverEmpty = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\mp_serverempty_ca.paa";
			serverLike = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\mp_serverlike_ca.paa";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			star = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_star_ca.paa";
			style = 16;
			version = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\sessions_version_ca.paa";
			w = "SafezoneW - (2.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "safezoneY + (5.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			class Columns
			{
				class ColumnFavorite
				{
					w = "(2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
				};
				class ColumnMission
				{
					w = "(10.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
					x = "safezoneX + (18.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
				};
				class ColumnPing
				{
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "safezoneX + (35.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
				};
				class ColumnPlayers
				{
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "safezoneX + (32.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
				};
				class ColumnServer
				{
					w = "(11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
					x = "2.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
				};
				class ColumnState
				{
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "safezoneX + (29.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.9*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
				};
				class ColumnType
				{
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "safezoneX + (15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
				};
			};
		};
		class PlayersName: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1008;
			shadow = 0;
			style = 1;
			w = "(17.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (21.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ServerDetailFilepatching: CA_ServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 169;
			w = "(4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.3*(safezoneW - 			((safezoneW / safezoneH) min 1.2))";
			x = "8.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "19.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TabFriends: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 162;
			text = "Friends";
			tooltip = "Network games with friends.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TabInternet: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 159;
			text = "Internet";
			tooltip = "Network games on Internet.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "31.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TabLAN: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 161;
			text = "LAN";
			tooltip = "Network games on LAN.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TabOfficialServers: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 163;
			text = "Official Servers";
			tooltip = "Network games on official servers.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TabQuickPlay: CA_Cancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 164;
			onButtonClick = "(findDisplay 8) createDisplay 'RscDisplayQuickPlay'";
			text = "Quick Play";
			tooltip = "Quickly find the multiplayer game that suits you best.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TabRecent: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 160;
			text = "Recent";
			tooltip = "Network games played recently.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TabServers: CA_Cancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 165;
			text = "Servers";
			tooltip = "Browse the existing servers.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TextServerDetailFilepatching: CA_TextServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1025;
			text = "File patching allowed:";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "19.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TextServerType: CA_TextServerDetailIsland
		{
			h = "0.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1007;
			text = "Server type:";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
	class controlsbackground
	{
		class HeadersBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.6};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1084;
			w = "SafezoneW - (2.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "safezoneY + (5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "SafezoneH - (5.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1081;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class RscTitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ServerTabsBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1083;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "safezoneY + (4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TabsBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1082;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "safezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
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
