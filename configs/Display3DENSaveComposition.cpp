class Display3DENSaveComposition: Display3DENEditComposition
{
	idd = 317;
	onLoad = "[""onLoad"",_this,""Display3DENEditComposition"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENEditComposition"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENEditComposition";
	scriptPath = "3DENDisplays";
	textNewComposition = "<New Composition>";
	class ControlsBackground: ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "(		100 - 10) * (pixelH * pixelGrid * 	0.50)";
			w = "130 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		130 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "130 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		130 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: BackgroundDisable {};
		class BackgroundDisableTiles: BackgroundDisableTiles {};
		class ButtonCancel: ButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		130 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "30 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		130 * 0.5 - 55 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Content: Content
		{
			h = "(		100 - 3 * 	5 - 2 * 		2 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			idc = 94;
			w = "(		130 - 2 * 		2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		130 * 0.5 - 		2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 2 * 	5 - 		2) * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Author: Author
				{
					w = "(		130 - 			60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "3 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class AuthorLabel: AuthorLabel
				{
					style = 0;
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "2 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Category: Category
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					w = "(		130 - 			60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "5 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class CategoryLabel: CategoryLabel
				{
					style = 0;
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "4 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Compositions: ctrlTree
				{
					font = "RobotoCondensedLight";
					h = "(		100 - 3 * 	5 - 2 * 		2 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
					idc = 103;
					sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = 0;
				};
				class Name: Name
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					w = "(		130 - 			60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "1 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class NameLabel: NameLabel
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					style = 0;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = 0;
				};
			};
		};
		class Title: Title
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "Save Custom Composition";
			w = "130 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		130 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
