class RscConfigEditor_Main
{
	enableSimulation = 0;
	idd = 3030;
	movingEnable = 1;
	onload = "uinamespace setvariable ['BIS_configviewer_display',_this select 0];";
	onunload = "_nil = [] spawn BIS_configviewer_unload";
	class Controls
	{
		class MainBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 0.85};
			h = "safezoneH";
			idc = -1;
			w = "safezoneW";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class MainCaption: CA_Title
		{
			colorBackground[] = {0, 0, 0, 0.2};
			h = 0.05;
			idc = -1;
			moving = 1;
			text = "Config viewer";
			w = "safezoneW";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class MainList: MainTree
		{
			idc = 2;
			onKeyDown = "_this spawn BIS_configviewer_keydown_list;";
			onLBDblClick = "";
			onLBSelChanged = "";
			onMouseButtonDown = "";
			shadow = 0;
			w = "safezoneWAbs - 0.485 - 0.03";
			x = "safezoneXAbs + 0.485 + 0.02";
		};
		class MainTree
		{
			autoScrollDelay = 0;
			autoScrollRewind = 0;
			autoScrollSpeed = 0;
			color[] = {0.95, 0.95, 0.95, 1};
			colorBackground[] = {0, 0, 0, 1};
			colorScrollbar[] = {0.95, 0.95, 0.95, 1};
			colorSelect[] = {0, 0, 0, 1};
			colorSelect2[] = {0, 0, 0, 1};
			colorSelectBackground[] = {0.4, 0.4, 0.4, 1};
			colorSelectBackground2[] = {0.4, 0.4, 0.4, 1};
			colorText[] = {0.95, 0.95, 0.95, 1};
			font = "RobotoCondensedBold";
			h = "safezoneH - 0.07 - 0.03";
			idc = 1;
			maxHistoryDelay = 0;
			onKeyDown = "_this spawn BIS_configviewer_keydown;";
			onLBDblClick = "_this spawn BIS_configviewer_open;";
			onLBSelChanged = "_this spawn BIS_configviewer_show;";
			onMouseButtonDown = "_this spawn BIS_configviewer_return;";
			period = 0;
			rowHeight = 0;
			shadow = 0;
			sizeEx = 0.023;
			soundSelect[] = {"", 0.1, 1};
			style = 0;
			text = "";
			type = 5;
			w = 0.485;
			x = "safezoneXAbs + 0.01";
			y = "safezoneY + 0.07";
			class ScrollBar: ScrollBar {};
		};
		class PathLine: MainCaption
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 3;
			shadow = 2;
			sizeEx = 0.028;
			style = 0;
			text = "Configfile";
			y = "safezoneY + 0.04";
		};
	};
};
