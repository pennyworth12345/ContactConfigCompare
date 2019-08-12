class RscDisplayPublishMission
{
	idd = 165;
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayPublishMission"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayPublishMission"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayPublishMission";
	scriptPath = "GUI";
	class controls
	{
		class ButtonCancel: RscButtonMenuCancel
		{
			default = 0;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			sizeEx = 0.027;
			text = "Cancel";
			tooltip = "Returns to the Editor.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonDefaultImage: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 119;
			text = "Predefined";
			tooltip = "Clears any custom image and restores the default A3 Workshop image.";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (18.65 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (0.5 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
		};
		class ButtonDelete: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 114;
			text = "Delete";
			tooltip = "Delete the selected published scenario from the Steam Workshop.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "26.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonDoPublish: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 112;
			text = "Publish";
			tooltip = "Publish the scenario on SteamWorkshop.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonDoUpdate: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 113;
			text = "Update";
			tooltip = "Replace the selected published scenario with the current one.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonEditTags: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 115;
			text = "Edit Tags";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ButtonLicence: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 117;
			style = 0;
			text = "Steam Workshop Agreement";
			tooltip = "View the SteamWorkshop license (opens the Steam overlay, press Shift+Tab to close).";
			w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class Attributes
			{
				font = "RobotoCondensed";
			};
		};
		class ButtonSelectImage: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 118;
			text = "Browse...";
			tooltip = "Browse for the preview image on your disk including Steam screenshots.";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (18.65 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (0.5 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
		};
		class ChangeNoteControlsGroup: RscControlsGroupNoScrollbars
		{
			h = "2.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 121;
			w = "18.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (9.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (0.5 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
			class controls
			{
				class TextChangeNotes: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1005;
					shadow = 0;
					style = 1;
					text = "Change note:";
					w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueChangeNotes: RscEdit
				{
					h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 107;
					maxChars = 5000;
					style = 16;
					tooltip = "Describe the changes in the update.";
					w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CheckBoxLicence: RscTextCheckBox
		{
			checked_strings[] = {"Agree"};
			colorSelectedBg[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 109;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			strings[] = {"Disagree"};
			tooltip = "Click to agree with the SteamWorks licence.";
			w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "33.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ComboBoxVisibility: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 106;
			tooltip = "Set visibility of your scenario in the Workshop.";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class EditBoxName: RscEdit
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			maxChars = 45;
			tooltip = "Insert a unique name of the scenario.";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class OverviewPicture: RscPictureKeepAspect
		{
			h = "6.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 108;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayPublishMission\SteamWorksDefaultImage_co.paa";
			tooltip = "Preview image for your scenario. If no custom image is provided, default is used.";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (12.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (0.5 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
		};
		class PlayersName: Title
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1010;
			style = 1;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class SliderStorageSpace: RscProgress
		{
			colorBackground[] = {0.5, 0.5, 0.5, 0.5};
			colorBar[] = {1, 1, 1, 1};
			colorExtBar[] = {1, 1, 1, 1};
			colorFrame[] = {0.5, 0.5, 0.5, 0.5};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 120;
			texture = "";
			textureExt = "";
			tooltip = "Shows the amount of free SteamCloud space.";
			w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class SteamScenarios: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "SafezoneH - (5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 105;
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextDescription: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1004;
			shadow = 0;
			style = 1;
			text = "Description:";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextLicence: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1007;
			shadow = 0;
			style = 1;
			text = "Do you agree with";
			w = "9.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TextName: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			shadow = 0;
			SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			style = 1;
			text = "Name:";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextQuestionMark: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1008;
			shadow = 0;
			text = "?";
			w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TextSteamQuota: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1012;
			shadow = 0;
			style = 1;
			text = "Steam Cloud storage:";
			w = "9.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TextSteamQuotaValue: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 111;
			shadow = 0;
			w = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 					(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TextTags: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			shadow = 0;
			style = 1;
			text = "Tags:";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextVisibility: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1003;
			shadow = 0;
			style = 1;
			text = "Visibility:";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			style = 0;
			text = "Workshop Scenario Management";
			w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ValueDescription: RscEdit
		{
			colorBackground[] = {0, 0, 0, 0.3};
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (0.5 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
			idc = 104;
			maxChars = 8000;
			style = 16;
			tooltip = "Provide a description of your scenario visible on Steam Workshop.";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ValueTags: RscEdit
		{
			canModify = 0;
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			tooltip = "Add relevant tags for your scenario. Scenario tag is added automatically. Dependency tag is added, when the game detects user content.";
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
	};
	class controlsBackground
	{
		class FullscreenBackground: RscText
		{
			colorBackground[] = {0.7, 0.7, 0.7, 0.8};
			h = "SafezoneH";
			idc = -1;
			w = "SafezoneW";
			x = "SafezoneX";
			y = "SafezoneY";
		};
		class ListBoxBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "20.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (1 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
			idc = 1081;
			w = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class RightBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "17.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (1 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
			idc = 1082;
			w = "25.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class RightBottomBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1083;
			w = "25.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (20 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (1 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
		};
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "SafezoneY + (1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
	};
	class Title: RscTitle
	{
		idc = -1;
		style = "0x20 + 0x02";
		text = "STR_MISSION_PUBLISH_TEXT";
		w = 0.46;
		x = 0.28;
		y = 0.22;
	};
};
