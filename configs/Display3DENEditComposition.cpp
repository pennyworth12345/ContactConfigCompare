class Display3DENEditComposition: DisplaySimulated
{
	idd = 317;
	onLoad = "[""onLoad"",_this,""Display3DENEditComposition"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENEditComposition"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENEditComposition";
	scriptPath = "3DENDisplays";
	class ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "(		50 - 10) * (pixelH * pixelGrid * 	0.50)";
			w = "100 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		100 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		50 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "100 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		100 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		50 * 0.5 - 2 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
		class ButtonCancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		100 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		50 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "30 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		100 * 0.5 - 55 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		50 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Content: ctrlControlsGroupNoScrollbars
		{
			h = "(		50 - 4 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			idc = 94;
			w = "(		100 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		100 * 0.5 - 	5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		50 * 0.5 - 3 * 	5) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Author: Name
				{
					idc = 96;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class AuthorLabel: NameLabel
				{
					text = "Author";
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Category: ctrlCombo
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 97;
					onLoad = "						_ctrlCombo = _this select 0;						{							_lbadd = _ctrlCombo lbadd gettext (_x >> 'displayName');							_ctrlCombo lbsetdata [_lbadd,configname _x];							if (_foreachindex == 0) then {_ctrlCombo lbsetvalue [_lbadd,1];};						} foreach configproperties [configfile >> 'CfgEditorSubcategories','isclass _x'];						_ctrlCombo lbsetcursel 0;						lbsort _ctrlCombo;					";
					w = "((		100 - 2 * 	5) * 0.75) * (pixelW * pixelGrid * 	0.50)";
					x = "((		100 - 2 * 	5) * 0.25) * (pixelW * pixelGrid * 	0.50)";
					y = "2 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class CategoryLabel: NameLabel
				{
					text = "Category";
					y = "2 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Name: ctrlEdit
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 95;
					w = "((		100 - 2 * 	5) * 0.75) * (pixelW * pixelGrid * 	0.50)";
					x = "((		100 - 2 * 	5) * 0.25) * (pixelW * pixelGrid * 	0.50)";
					y = 0;
				};
				class NameLabel: ctrlStatic
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					style = 1;
					text = "Title";
					w = "((		100 - 2 * 	5) * 0.25) * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = 0;
				};
			};
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "Edit Custom Composition";
			w = "100 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		100 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		50 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
