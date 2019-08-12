class RscCustomInfoCrew
{
	idd = 313;
	onLoad = "[""onLoad"",_this,""RscCustomInfoCrew"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscCustomInfoCrew"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscCustomInfoCrew";
	scriptPath = "IGUI";
	class controls
	{
		class controlsGroup: RscControlsGroupNoScrollbars
		{
			h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 15113;
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.125 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class NameList: RscListBox
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					IDC = 102;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "";
					w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = 0;
				};
			};
		};
		class Title: RscIGUIText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 15112;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "CREW";
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class VehicleName: RscIGUIText
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 101;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 1;
			text = "vehname";
			w = "0.75 * 		(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "0.25 * 		(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = 0;
		};
	};
	class controlsBackground
	{
		class Background: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			IDC = 15110;
			text = "A3\Ui_f\data\IGUI\RscCustomInfo\background_ca.paa";
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundGroup: RscControlsGroupNoScrollbars
		{
			h = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_H"",		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 15111;
			w = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_W"",		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.125 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls {};
		};
	};
};
