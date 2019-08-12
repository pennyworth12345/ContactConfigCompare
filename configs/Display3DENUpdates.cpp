class Display3DENUpdates: DisplaySimulated
{
	idd = 330;
	onLoad = "[""onLoad"",_this,""Display3DENUpdates"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENUpdates"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENUpdates";
	scriptPath = "3DENDisplays";
	class Controls
	{
		class ButtonClose: ctrlButtonClose
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Group: ctrlControlsGroup
		{
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (25 + 	5) * (pixelH * pixelGrid * 	0.50)";
			idc = 202;
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Content: ctrlStructuredText
				{
					colorBackground[] = {1, 1, 1, 1};
					h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 24 * (pixelH * pixelGrid * 	0.50)";
					idc = 203;
					shadow = 0;
					size = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					w = "(		140 - 3) * (pixelW * pixelGrid * 	0.50)";
					class Attributes: Attributes
					{
						color = "#000000";
						font = "RobotoCondensedLight";
					};
				};
			};
		};
		class List: ctrlXListbox
		{
			cycle = 0;
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 201;
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 200;
			text = "Updates Log";
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
