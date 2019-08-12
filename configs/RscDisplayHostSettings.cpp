class RscDisplayHostSettings: RscStandardDisplay
{
	idd = 132;
	onLoad = "[""onLoad"",_this,""RscDisplayHostSettings"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayHostSettings"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayHostSettings";
	scriptPath = "GUI";
	class Controls
	{
		class ButtonBack: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ButtonContinue: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (7.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_TextMaxPlayers: CA_TextName
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			text = "Max. players:";
			w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "7.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_TextName: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			style = 1;
			text = "Name:";
			w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_TextPassword: CA_TextName
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1006;
			text = "Password:";
			w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "8.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_TextPort: CA_TextName
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1004;
			text = "Port:";
			w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_TextPrivate: CA_TextName
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1003;
			text = "Host:";
			w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ValueMaxPlayers: RscEdit
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 103;
			w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "7.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ValueName: RscEdit
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			w = "SafezoneW - (11.2*					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ValuePassword: RscEdit
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "8.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ValuePort: RscEdit
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 105;
			w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ValuePrivate: RscXListBox
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class PlayersName: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			shadow = 0;
			style = 1;
			w = "(27.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TextPortWarning: RscStructuredText
		{
			h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 106;
			w = "SafezoneW - (10.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "9.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "12.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TextUPnP: CA_TextName
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1007;
			text = "UPnP:";
			w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "Host Server";
			w = "(10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ValueUPnP: RscCheckBox
		{
			checked = 0;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 107;
			tooltip = "Create a public server behind NAT (UPnP/IGD enabled router is required).";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "10.06 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
	};
	class controlsBackground
	{
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "SafezoneH - (4.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1081;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
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
