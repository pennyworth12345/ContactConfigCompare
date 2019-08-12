class Display3DENTutorial: DisplaySimulated
{
	idd = 318;
	onLoad = "[""onLoad"",_this,""Display3DENTutorial"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENTutorial"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	picture = "#(argb,8,8,3)color(0,0,0,0)";
	pictureCompleted = "\a3\3DEN\Data\Displays\Display3DENTutorial\pictureCompleted_ca.paa";
	scriptName = "Display3DENTutorial";
	scriptPath = "3DENDisplays";
	class Controls
	{
		class ButtonBegin: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "Begin";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonClose: ctrlButtonClose
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class List: ctrlTree
		{
			colorBackground[] = {0, 0, 0, 0.5};
			colorBorder[] = {0, 0, 0, 0};
			font = "RobotoCondensedLight";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 23 * (pixelH * pixelGrid * 	0.50)";
			idc = 201;
			sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 200;
			text = "Tutorials";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (10 + 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
	};
};
