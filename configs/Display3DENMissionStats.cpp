class Display3DENMissionStats: DisplaySimulated
{
	idd = 323;
	onLoad = "[""onLoad"",_this,""Display3DENMissionStats"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENMissionStats"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENMissionStats";
	scriptPath = "3DENDisplays";
	class Controls
	{
		class ButtonClose: ctrlButtonClose
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		60 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + 		100 * (pixelH * pixelGrid * 	0.50) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCopy: ctrlButton
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 203;
			onButtonClick = "['select',_this] call (uinamespace getvariable 'Display3DENMissionStats_script');";
			text = "Select";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		60 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + 		100 * (pixelH * pixelGrid * 	0.50) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Group: ctrlControlsGroup
		{
			h = "100 * (pixelH * pixelGrid * 	0.50) - 23 * (pixelH * pixelGrid * 	0.50)";
			idc = 201;
			w = "(		60 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		60 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - 		100 * (pixelH * pixelGrid * 	0.50) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Stats: ctrlListbox
				{
					h = "100 * (pixelH * pixelGrid * 	0.50) - 23 * (pixelH * pixelGrid * 	0.50)";
					idc = 202;
					onMouseButtonDblClick = "['select',_this] call (uinamespace getvariable 'Display3DENMissionStats_script');";
					size = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					w = "(		60 - 2) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 200;
			text = "Statistics";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		60 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - 		100 * (pixelH * pixelGrid * 	0.50) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "100 * (pixelH * pixelGrid * 	0.50) - (10 + 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		60 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - 		100 * (pixelH * pixelGrid * 	0.50) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		60 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + 		100 * (pixelH * pixelGrid * 	0.50) * 0.5 - (2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
	};
};
