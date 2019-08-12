class RscDisplayQuickPlay: RscStandardDisplay
{
	idd = 177;
	onLoad = "[""onLoad"",_this,""RscDisplayQuickPlay"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayQuickPlay"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayQuickPlay";
	scriptPath = "GUI";
	class controls
	{
		class ButtonBack: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Back";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ButtonLauncherServerBrowser: RscButtonMenuOK
		{
			colorBackground[] = {0.0313726, 0.721569, 0.917647, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 168;
			text = "Server Browser in Launcher";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ButtonShowServers: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 114;
			text = "Show friends in-game";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Content: RscControlsGroupNoScrollbars
		{
			h = "safezoneH - 6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 20002;
			w = "37.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 - 0.5 * 37 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class BestMatch: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 112;
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "safezoneH - (25 - 13) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Items
					{
						class BestFirst
						{
							default = 1;
							text = "Best Server";
							tooltip = "Find the best suitable game. Searching might take longer.";
							value = 1;
						};
						class First
						{
							text = "First Server";
							tooltip = "Join the first available game.";
							value = 0;
						};
					};
				};
				class BestMatchText: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 18707;
					style = 1;
					text = "Find:";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "safezoneH - (25 - 13) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonFindServer: RscButtonMenu
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 113;
					text = "Find and Join Server";
					w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "safezoneH - (25 - 16.6) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
						top = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
				class ContentBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "safezoneH - (25 - 4.4) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 18705;
					w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "12.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GameTypeDescription: RscText
				{
					h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 117;
					style = "0x00 + 0x10";
					text = "Two forces compete to secure valuable schematics against a common enemy.";
					w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GameTypeDescriptionBackground: RscPicture
				{
					angle = 0;
					colorText[] = {0, 0, 0, 1};
					h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 118;
					text = "\a3\Ui_f\data\Map\Diary\gradient_gs.paa";
					w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GameTypeList: RscListBox
				{
					colorBackground[] = {0, 0, 0, 0.75};
					colorDisabled[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					colorPictureRightSelected[] = {0, 0, 0, 1};
					h = "safezoneH - (25 - 16.5) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 110;
					rowHeight = "1.375 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "16.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GameTypeOverview: RscPicture
				{
					h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 116;
					text = "\a3\Ui_f\data\GUI\Cfg\GameTypes\unknown_ca.paa";
					w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GameTypeTitle: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 115;
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GameTypeTitleBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 18714;
					w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MaxPing: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 111;
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "safezoneH - (25 - 14.5) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MaxPingText: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 18706;
					style = 1;
					text = "Max. ping:";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "safezoneH - (25 - 14.5) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ModBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.25};
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 18708;
					w = "16.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "safezoneH - (25 - 16.6) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ModIcon: RscPicture
				{
					colorText[] = {1, 1, 1, 0.75};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 18905;
					text = "\A3\Ui_f\data\GUI\RscCommon\RscTrafficLight\TrafficLight_ca.paa";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "safezoneH - (25 - 17.1) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ModText: RscText
				{
					colorText[] = {1, 1, 1, 0.75};
					font = "RobotoCondensedLight";
					h = "1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 18704;
					onLoad = "(_this select 0) ctrlenable false;";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = "0x00 + 0x10";
					text = "The game is running with custom mods. You can only be connected to servers with mods compatible with yours.";
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "safezoneH - (25- 16.8) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class PlayersName: Title
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18703;
			shadow = 0;
			style = 1;
			w = "(27.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TabDirectConnect: RscButtonMenu
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
		class TabQuickPlay: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 164;
			text = "Quick Play";
			tooltip = "Quickly find the multiplayer game that suits you best.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TabServers: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 165;
			text = "Servers";
			tooltip = "Browse the existing servers.";
			w = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TabSetupServer: RscButtonMenu
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
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18702;
			shadow = 0;
			style = 0;
			text = "Server Browser";
			w = "(10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
	};
	class controlsbackground
	{
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "SafezoneH - (5.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1081;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
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
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
