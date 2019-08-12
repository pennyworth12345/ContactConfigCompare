class display3DENPublishMission
{
	idd = 165;
	class Controls
	{
		class Area: ctrlControlsGroupNoScrollbars
		{
			h = "(		(120) - 24) * (pixelH * pixelGrid * 	0.50)";
			w = "((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		(120) * 0.5 - 12) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class ChangeNoteDummy: ctrlStatic
				{
					colorText[] = {1, 1, 1, 0.25};
					h = "5 * (3.25) * (pixelH * pixelGrid * 	0.50)";
					style = "0x02 + 0x10 + 0x200";
					text = "You cannot edit the change log when you are publishing the item for the first time.";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((14.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class ChangeNoteDummyFrame: ctrlEditMulti
				{
					h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
					onLoad = "(_this select 0) ctrlenable false;";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((13.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class ChangeNoteGroup: ctrlControlsGroupNoScrollbars
				{
					h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
					idc = 121;
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((13.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class ChangeNote: ctrlEditMulti
						{
							h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
							idc = 107;
							w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
							x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
							y = "((0) * 	5) * (pixelH * pixelGrid * 	0.50)";
						};
						class ChangeNoteBackground: ctrlStaticBackground
						{
							h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
							w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
							x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
							y = "((0) * 	5) * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
				class ChangeNoteLabel: ctrlStaticOverlay
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					text = "Change note:";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((12.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Description: ctrlEditMulti
				{
					h = "5 * (8.5) * (pixelH * pixelGrid * 	0.50)";
					idc = 104;
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((3.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class DescriptionLabel: ctrlStaticOverlay
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					text = "Description:";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((2.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Image: ctrlStaticPictureKeepAspect
				{
					h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
					idc = 108;
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((12.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class ImageDefault: ctrlButton
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					idc = 119;
					text = "Predefined";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34 * 0.5))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((16.75) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class ImageSelect: ctrlButton
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					idc = 118;
					text = "Browse...";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34 * 0.49))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01) + 		0.34 * 0.51))";
					y = "((16.75) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class License: ctrlActiveText
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					idc = 117;
					onLoad = "(_this select 0) ctrlsettext (ctrltext (_this select 0) + '?');";
					shadow = 2;
					text = "Steam Workshop Agreement";
					tooltip = "View the SteamWorkshop license (opens the Steam overlay, press Shift+Tab to close).";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.4))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.6))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class LicenseBackground: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 0.25};
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					idc = 1001;
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (1))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class LicenseCheckbox: ctrlCheckboxesCheckbox
				{
					checked_strings[] = {"#(argb,8,8,3)color(0,0,0,0)"};
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					idc = 109;
					onCheckBoxesSelChanged = "						(ctrlparent (_this select 0) displayctrl 1002) cbsetchecked ([false,true] select (_this select 2));						(ctrlparent (_this select 0) displayctrl 1001) ctrlsetbackgroundcolor ([[0,0,0,0.25],[0.5,1,0,0.15]] select (_this select 2));					";
					strings[] = {"#(argb,8,8,3)color(0,0,0,0)"};
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.04))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.96))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class LicenseCheckboxImage: ctrlCheckbox
				{
					colorDisabled[] = {1, 1, 1, 1};
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					idc = 1002;
					onLoad = "(_this select 0) ctrlenable false;";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.04))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.96))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class LicenseLabel: ctrlStatic
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					shadow = 1;
					style = 1;
					text = "Do you agree with";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.6))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Name: ctrlEdit
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					maxChars = 45;
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (	0.75))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.25))";
					y = "((0) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class NameLabel: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					style = 1;
					text = "Name:";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.25))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((0) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Tags: ctrlEditMulti
				{
					canModify = 0;
					h = "5 * (7.5) * (pixelH * pixelGrid * 	0.50)";
					idc = 102;
					onLoad = "(_this select 0) ctrlenable false;";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((3.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class TagsButton: ctrlButton
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					idc = 115;
					text = "Edit Tags";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((11) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class TagsLabel: ctrlStaticOverlay
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					text = "Tags:";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((2.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Visibility: ctrlCombo
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					idc = 106;
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (	0.75))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.25))";
					y = "((1.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class VisibilityLabel: NameLabel
				{
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					text = "Visibility:";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.25))";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((1.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class ButtonCancel: ctrlShortcutButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			tooltip = "Returns to the Editor.";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		180 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonDelete: ctrlShortcutButton
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 114;
			text = "Delete";
			tooltip = "Delete the selected published scenario from the Steam Workshop.";
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (4 * 	5 + 4.5)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonDeleteDummy: ctrlShortcutButton
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			onLoad = "(_this select 0) ctrlenable false;";
			text = "Delete";
			tooltip = "Delete the selected published scenario from the Steam Workshop.";
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (4 * 	5 + 4.5)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonPublish: ctrlShortcutButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 112;
			text = "Publish";
			tooltip = "Publish the scenario on SteamWorkshop.";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		180 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonUpdate: ButtonPublish
		{
			idc = 113;
			text = "Update";
			tooltip = "Replace the selected published scenario with the current one.";
			y = "0.5 + (		(120) * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Scenarios: ctrlListbox
		{
			h = "(		(120) - 28 - 2 * 	5) * (pixelH * pixelGrid * 	0.50)";
			idc = 105;
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		(120) * 0.5 - 12) * (pixelH * pixelGrid * 	0.50)";
		};
		class Storage: ctrlProgress
		{
			colorBackground[] = {0.5, 0.5, 0.5, 0.5};
			colorBar[] = {1, 1, 1, 1};
			colorExtBar[] = {1, 1, 1, 1};
			colorFrame[] = {0.5, 0.5, 0.5, 0.5};
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 120;
			texture = "";
			textureExt = "";
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (3 * 	5 + 3)) * (pixelH * pixelGrid * 	0.50)";
		};
		class StorageQuota: ctrlStatic
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 111;
			onLoad = "(_this select 0) ctrlenable false;";
			style = 2;
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (3 * 	5 + 3)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "Workshop Scenario Management";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		(120) * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "(		(120) - (2 * 	5)) * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		(120) * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (2 * 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
	};
};
