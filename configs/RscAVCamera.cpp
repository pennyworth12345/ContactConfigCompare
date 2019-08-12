class RscAVCamera
{
	idd = 304;
	onLoad = "[""onLoad"",_this,""RscAVCamera"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscAVCamera"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscAVCamera";
	scriptPath = "IGUI";
	class controls
	{
		class CameraPictureSingleView: RscPicture
		{
			h = "(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_H',		(6.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			text = "#(argb,512,512,1)r2t(uavpipsingleview,1.0)";
			w = "(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_W',		(10.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_X',		(safezoneX + safezoneW - 11.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_Y',		(safezoneY + safezoneH - 17.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class controlsBackground
	{
		class CameraBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			colorText[] = {0, 0, 0, 0.2};
			h = "(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_H',		(6.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			idc = 1000;
			shadow = 0;
			style = 2;
			text = "No connection";
			w = "(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_W',		(10.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			x = "(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_X',		(safezoneX + safezoneW - 11.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_Y',		(safezoneY + safezoneH - 17.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
};
