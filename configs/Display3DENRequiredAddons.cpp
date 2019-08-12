class Display3DENRequiredAddons: DisplaySimulated
{
	authorEmpty = "Unknown";
	iconAddon = "\a3\3DEN\Data\Controls\CtrlMenu\pictureCheckboxEnabled_ca.paa";
	iconAddonMissing = "#(argb,8,8,3)color(0,0,0,0)";
	idd = 322;
	onLoad = "[""onLoad"",_this,""Display3DENRequiredAddons"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENRequiredAddons"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENRequiredAddons";
	scriptPath = "3DENDisplays";
	textCodeActive = "=== Active Addons ===";
	textCodeMissing = "=== Missing Addons ===";
	class ControlsBackground
	{
		class Advanced: ctrlControlsGroup
		{
			h = "(		100 - 6 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			idc = 1002;
			show = 0;
			w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 4 * 	5 - 3) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Code: ctrlEdit
				{
					font = "EtelkaMonospacePro";
					h = "(		100 - 6 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
					idc = 102;
					sizeEx = "3.41 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					style = 16;
					text = "";
					w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class Background: ctrlStaticBackground
		{
			h = "(		100 - 10) * (pixelH * pixelGrid * 	0.50)";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
		class BackgroundTabs: ctrlStatic
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "(2 * 	5 + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50) - pixelH";
			idc = "IDC_DISPLAY3DEN_TABLEFT_BACKGROUND";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Basic: ctrlControlsGroupNoScrollbars
		{
			h = "(		100 - 6 * 	5 - (	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
			idc = 1001;
			w = "(		120 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 4 * 	5 - 3) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class BackgroundFilter: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
				};
				class BackgroundList: ctrlStaticOverlay
				{
					h = "(		100 - 9 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
					w = "(		120 - 1) * (pixelW * pixelGrid * 	0.50)";
					y = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Filter: ctrlListNBox
				{
					columns[] = {0, 0.05, 0.6};
					disableOverflow = 1;
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 1003;
					w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
					class Items
					{
						class Author
						{
							text = "Author";
							value = -1;
						};
						class Name
						{
							text = "Name";
							value = -1;
						};
						class Presence
						{
							data = "value";
							text = "";
							value = 1;
						};
					};
				};
				class Info: ctrlControlsGroupNoScrollbars
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
					y = "(		100 - 8 * 	5 - (	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Author: Name
						{
							idc = 106;
							text = "";
							y = "5 * (pixelH * pixelGrid * 	0.50)";
						};
						class Name: ctrlStatic
						{
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 105;
							text = "";
							w = "(		120 - 8 * 	5 - 2) * (pixelW * pixelGrid * 	0.50)";
						};
						class URL: ctrlShortcutButton
						{
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 107;
							onLoad = "								(_this select 0) ctrlenable false;								(_this select 0) ctrlsetstructuredtext parsetext format [""<img image='\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa'/> %1"",toupper ctrltext (_this select 0)];							";
							style = 0;
							text = "Website";
							w = "7 * 	5 * (pixelW * pixelGrid * 	0.50)";
							x = "(		120 - 7.5 * 	5 - 2) * (pixelW * pixelGrid * 	0.50)";
							y = "0.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
				class List: ctrlListNBox
				{
					colorDisabled[] = {0.815686, 0.266667, 0.215686, 1};
					colorSelectBackground[] = {1, 1, 1, 0.2};
					colorSelectBackground2[] = {1, 1, 1, 0.2};
					columns[] = {0, 0.6};
					disableOverflow = 1;
					h = "(		100 - 9 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					period = 0;
					w = "(		120 - 1) * (pixelW * pixelGrid * 	0.50)";
					y = "5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class ButtonCancel: ctrlButtonClose
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		120 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Notification: ctrlStatic
		{
			colorBackground[] = {0.12549, 0.505882, 0.313726, 0.9};
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 103;
			shadow = 0;
			style = 2;
			text = "All content required by the scenario is installed";
			w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Tabs: ctrlToolbox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorSelectedBg[] = {0.2, 0.2, 0.2, 1};
			columns = 2;
			font = "RobotoCondensedLight";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 1033;
			onToolBoxSelChanged = "				_display = ctrlparent (_this select 0);				(_display displayctrl 1001) ctrlshow ((_this select 1) == 0);				(_display displayctrl 1002) ctrlshow ((_this select 1) == 1);			";
			strings[] = {"Basic", "Advanced"};
			w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 3 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "Required Addons";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class Warning: Notification
		{
			colorBackground[] = {0.815686, 0.266667, 0.215686, 0.9};
			idc = 104;
			show = 0;
			text = "The scenario requires content which is not installed!";
		};
	};
};
