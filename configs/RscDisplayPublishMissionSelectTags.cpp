class RscDisplayPublishMissionSelectTags
{
	idd = 166;
	onLoad = "[""onLoad"",_this,""RscDisplayPublishMissionSelectTags"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayPublishMissionSelectTags"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayPublishMissionSelectTags";
	scriptPath = "GUI";
	class controls
	{
		class Add: ctrlActivePictureKeepAspect
		{
			h = "(	80 - (5 * 	5 - 1)) * 0.25 * (pixelH * pixelGrid * 	0.50)";
			idc = 103;
			text = "\A3\Ui_f\data\GUI\RscCommon\RscHTML\arrow_right_ca.paa";
			w = "(	80 * 2/20) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 1/20) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.25) * (pixelH * pixelGrid * 	0.50)";
		};
		class Cancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	80 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Next: Previous
		{
			idc = 105;
			text = "Next";
			w = "(	80 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW)";
		};
		class OK: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	80 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Previous: ctrlButton
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 106;
			text = "Back";
			w = "(	80 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - (3 * 	5 + 2.5)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Remove: Add
		{
			idc = 104;
			text = "\A3\Ui_f\data\GUI\RscCommon\RscHTML\arrow_left_ca.paa";
			y = 0.5;
		};
		class TitleMain: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 107;
			text = "Edit Tags";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class Unused: ctrlListbox
		{
			h = "(	80 - (6 * 	5 - 1)) * (pixelH * pixelGrid * 	0.50)";
			idc = 101;
			w = "(	80 * 17/40) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
		};
		class Used: Unused
		{
			idc = 102;
			x = "((getResolution select 2) * 0.5 * pixelW) + (	80 * 3/40 - 1) * (pixelW * pixelGrid * 	0.50)";
		};
	};
	class controlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "(	80 - (10 + 	5)) * (pixelH * pixelGrid * 	0.50)";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.5 - 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - 2 * (	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
	};
};
