class Display3DENCopy: DisplaySimulated
{
	idd = 319;
	onLoad = "[""onLoad"",_this,""Display3DENCopy"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENCopy"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENCopy";
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
		class ButtonCopy: ctrlButton
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 204;
			onButtonClick = "				_display = ctrlparent (_this select 0);				copytoclipboard ctrltext (_display displayctrl 202);			";
			text = "Copy";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Group: ctrlControlsGroup
		{
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 23 * (pixelH * pixelGrid * 	0.50)";
			idc = 201;
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Edit: ctrlEditMulti
				{
					canModify = 0;
					font = "EtelkaMonospacePro";
					h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 23 * (pixelH * pixelGrid * 	0.50)";
					idc = 202;
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
				};
				class EditFake: ctrlStructuredText
				{
					h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 23 * (pixelH * pixelGrid * 	0.50)";
					idc = 203;
					show = 0;
					size = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
					class Attributes: Attributes
					{
						font = "EtelkaMonospacePro";
					};
				};
			};
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 200;
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
