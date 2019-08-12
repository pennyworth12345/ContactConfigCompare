class Display3DENSave
{
	enableDisplay = 1;
	enableSimulation = 1;
	idd = 314;
	onLoad = "[""onLoad"",_this,""Display3DENSave"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENSave"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENSave";
	scriptPath = "3DENDisplays";
	textDate = "%d/%m/%Y  %H:%M";
	class ContextMenu: ctrlMenu
	{
		colorBackground[] = {0.1, 0.1, 0.1, 1};
		class Items
		{
			items[] = {"New", "Delete", "Rename"};
			class Default
			{
				data = "Empty";
				enable = 0;
				text = "Empty";
			};
			class Delete
			{
				data = "Delete";
				text = "Delete";
				value = 0;
			};
			class New
			{
				data = "NewFolder";
				text = "Create New Folder";
				value = 0;
			};
			class Rename
			{
				data = "Rename";
				text = "Rename";
				value = 0;
			};
		};
	};
	class Controls
	{
		class Binarize: ctrlCheckbox
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 109;
			onLoad = "(_this select 0) cbSetChecked (if (missionname == '') then {('preferences' get3DENMissionAttribute 'SaveBinarized')} else {('scenario' get3DENMissionAttribute 'SaveBinarized')});";
			w = "5 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (3 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
		};
		class BinarizeText: ctrlStatic
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 108;
			style = 1;
			text = "Binarize the Scenario File";
			tooltip = "When true, the *.sqm file will be binarized. The process saves loading time, but makes the file uneditable in a text editor.";
			w = "(	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (3 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			textImport = "Import";
			textLoad = "Open";
			textMerge = "Merge";
			textSave = "Save";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonPurchase: ctrlShortcutButtonSteam
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 110;
			shortcuts[] = {"1024+0x19"};
			show = 0;
			text = "Purchase";
			w = "35 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 0.5 - 60 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Dummy: ctrlStatic {};
		class Files: ctrlListNBox
		{
			columns[] = {0, 0.33, 0.66};
			disableOverflow = 1;
			font = "EtelkaMonospacePro";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (23 + 4 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
			idc = 103;
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5 * 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Filter: ctrlListNBox
		{
			columns[] = {0, 0.33, 0.66};
			disableOverflow = 1;
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 107;
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5) * (pixelH * pixelGrid * 	0.50)";
			class Items
			{
				class DateModified
				{
					data = "value";
					text = "Date Modified";
					value = -1;
				};
				class Name
				{
					text = "Name";
					value = -1;
				};
				class Terrain
				{
					text = "Terrain";
					value = -1;
				};
			};
		};
		class Folders: ctrlTree
		{
			font = "EtelkaMonospacePro";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (23 + 2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			iconFolder = "\a3\3DEN\Data\Cfg3DEN\Layer\icon_ca.paa";
			iconFolderDefault = "\a3\3DEN\Data\Cfg3DEN\Layer\iconDefault_ca.paa";
			idc = 101;
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "(	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50)";
		};
		class Name: ctrlEdit
		{
			font = "EtelkaMonospacePro";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 102;
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (4 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
		};
		class NameText: ctrlStatic
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			style = 1;
			text = "File Name";
			w = "(	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (4 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
		};
		class Search: ctrlEdit
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 105;
			w = "(	180 / 4) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 1/4 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (11) * (pixelH * pixelGrid * 	0.50)";
		};
		class SearchButton: ctrlButtonSearch
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 106;
			w = "5 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 1/2 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (11) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 104;
			textLoad = "Open";
			textMerge = "Merge";
			textSave = "Save As";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (10 + 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - 2 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
		class BackgroundFiles: ctrlStaticOverlay
		{
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (23 + 	5 * 3 + 3) * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundFilter: ctrlStatic
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5) * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
