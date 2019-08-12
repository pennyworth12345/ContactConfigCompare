class RscCustomInfoTransportFeedMissile: RscCustomInfoUAVFeed
{
	idd = 319;
	onLoad = "[""onLoad"",_this,""RscCustomInfoTransportFeedMissile"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscCustomInfoTransportFeedMissile"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscCustomInfoTransportFeedMissile";
	scriptPath = "IGUI";
	class controls
	{
		class CameraPictureSingleView: RscPicture
		{
			h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			text = "#(argb,512,512,1)r2t(transportPipViewMissile,1.0)";
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.125 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CamMode: RscIGUIText
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 105;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 1;
			text = "MODE";
			w = "0.4 * 		(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "0.6 * 		(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = 0;
		};
		class Source: RscIGUIText
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 103;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "Missile";
			w = "0.3 * 		(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "0.2 * 		(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = 0;
		};
		class Title: RscIGUIText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 103;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "CAM";
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
