class RscDisplayMain: RscStandardDisplay
{
	idd = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayMain"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMain"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayMain";
	scriptPath = "GUI";
	class controls
	{
		class AllMissions: RscButtonMenuMain
		{
			colorBackground[] = {0, 0, 0, 0.25};
			fade = 0;
			h = "1.5 * 	(pixelH * pixelGrid * 2)";
			idc = 104;
			text = "All Missions";
			w = "10 * 	(pixelW * pixelGrid * 2)";
			x = "0.5 - 0.5 * 	10 * 	(pixelW * pixelGrid * 2)";
			y = "safezoneY + safezoneH - (	1 + 1 * 	1.5) * 	(pixelH * pixelGrid * 2) - pixelH";
			class Attributes
			{
				align = "center";
				color = "#ffffff";
				font = "PuristaLight";
			};
		};
		class Button3DEditor: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			h = 0;
			idc = 115;
			onButtonClick = "!cheatsenabled";
			shortcuts[] = {"512 + 0x20"};
			w = 0;
			x = -10;
			y = -10;
		};
		class Editor: Play
		{
			font = "RobotoCondensedLight";
			h = "1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 142;
			sizeEx = "1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			text = "Editor";
			tooltip = "Create your own scenarios.";
			y = "(0.5 - 3.5 * 	(safezoneH / 40)) + (1.5 * 		1.5 + 0.1) * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class Exit: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0.784314, 0.137255, 0.0627451, 1};
			colorFocused[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 1};
			h = "1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 106;
			onKillFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onMouseEnter = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onMouseExit = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onSetFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			style = 48;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\exit_ca.paa";
			tooltip = "Quit the game...";
			w = "1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = "safezoneX + safezoneW - 2 * 		1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
			y = "safezoneY + 		1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class Footer: RscText
		{
			colorBackground[] = {0, 0, 0, 0.75};
			colorText[] = {1, 1, 1, 0.5};
			font = "RobotoCondensedLight";
			h = "(	1) * 	(pixelH * pixelGrid * 2)";
			shadow = 0;
			sizeEx = "1 * 	(pixelH * pixelGrid * 2)";
			style = 2;
			text = "© 2013-2019 Bohemia Interactive a.s. All rights reserved.";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY + safezoneH - 1 * 	1 * 	(pixelH * pixelGrid * 2)";
		};
		class GroupMultiplayer: GroupSingleplayer
		{
			h = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2)";
			idc = 1002;
			show = 1;
			x = "0.5 - (	5 + 	10) * 	(pixelW * pixelGrid * 2)";
			class Controls: Controls {};
		};
		class GroupOptions: GroupSingleplayer
		{
			h = "(5 * 	1.5) * 	(pixelH * pixelGrid * 2)";
			idc = 1004;
			show = 1;
			x = "0.5 + (	5 + 	10) * 	(pixelW * pixelGrid * 2)";
			class Controls: Controls
			{
				class Audio: Campaigns
				{
					idc = 302;
					onbuttonclick = "";
					text = "Audio";
					tooltip = "Set volume for sounds, music, speech and voice.";
					y = "(1 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
				class Controls: Campaigns
				{
					idc = 303;
					onbuttonclick = "";
					text = "Controls";
					tooltip = "View or change game controls.";
					y = "(2 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
				class Expansions: Campaigns
				{
					idc = 140;
					onbuttonclick = "";
					text = "Expansions";
					tooltip = "Browse and configure available expansions and mods.";
					y = "(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
				class Game: Campaigns
				{
					idc = 307;
					onbuttonclick = "";
					text = "Game";
					tooltip = "Adjust game difficulty and customize game interface.";
					y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
				class Video: Campaigns
				{
					idc = 301;
					onbuttonclick = "";
					text = "Video";
					tooltip = "Adjust resolution, details and other viewing options.";
					y = "(0 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
			};
		};
		class GroupSession: GroupSingleplayer
		{
			h = "(4 * 	1.5) * 	(pixelH * pixelGrid * 2)";
			idc = 1005;
			show = 1;
			x = "safezoneX + safezoneW - (	10 + 		2) * 	(pixelW * pixelGrid * 2) - 	(pixelW)";
			class Controls: Controls
			{
				class Profile: Campaigns
				{
					idc = 109;
					onbuttonclick = "";
					style = 0;
					tooltip = "Here you can manage your player profile.";
					y = "(0 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
					class Attributes
					{
						align = "Center";
						color = "#ffffff";
						font = "PuristaLight";
					};
				};
				class Unit: RscButton
				{
					colorBackground[] = {0, 0, 0, 0.75};
					colorBackgroundActive[] = {0.376471, 0.537255, 0.219608, 1};
					h = "(2 * 	1.5) * 	(pixelH * pixelGrid * 2) - 	(pixelH)";
					idc = 155;
					onButtonClick = "";
					onKillFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
					onMouseEnter = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
					onMouseExit = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
					onSetFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
					style = "0x02 + 0x30 + 0x800";
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\profile_unit_ca.paa";
					tooltip = "Find a Unit";
					url = "https://units.arma3.com/";
					w = "10 * 	(pixelW * pixelGrid * 2)";
					x = 0;
					y = "(1 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
			};
		};
		class GroupSingleplayer: RscControlsGroupNoScrollbars
		{
			h = "(5 * 	1.5) * 	(pixelH * pixelGrid * 2)";
			idc = 1001;
			show = 0;
			w = "10 * 	(pixelW * pixelGrid * 2)";
			x = "0.5 - (	5 + 2 * 	10) * 	(pixelW * pixelGrid * 2)";
			y = "safezoneY + 2 * 		1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Controls
			{
				class Campaigns: RscButtonMenuMain
				{
					h = "1.5 * 	(pixelH * pixelGrid * 2) - 	(pixelH)";
					idc = -1;
					onbuttonclick = "uinamespace setvariable ['RscDisplayCampaignLoad_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONCAMPAIGN')];";
					text = "Campaigns";
					tooltip = "Play official and custom made campaigns.";
					w = "10 * 	(pixelW * pixelGrid * 2)";
					x = 0;
					y = "(0) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
			};
		};
		class GroupTutorials: GroupSingleplayer
		{
			h = "(5 * 	1.5) * 	(pixelH * pixelGrid * 2)";
			idc = 1003;
			show = 1;
			w = "(	10 + 3.5) * 	(pixelW * pixelGrid * 2)";
			x = "0.5 + (	5) * 	(pixelW * pixelGrid * 2)";
			class Controls: Controls
			{
				class Arsenal: Bootcamp
				{
					animTextureDefault = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenu_ca.paa";
					animTextureDisabled = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenu_ca.paa";
					animTextureFocused = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenuHover_ca.paa";
					animTextureNormal = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenu_ca.paa";
					animTextureOver = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenuHover_ca.paa";
					animTexturePressed = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenu_ca.paa";
					idc = 203;
					onbuttonclick = "playMission['','\A3\Missions_F_Bootcamp\Scenarios\Arsenal.VR']";
					show = 1;
					text = "Virtual Arsenal";
					tooltip = "View and try out different weapons, equipment and vehicles.";
					y = "(1 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
				class Bootcamp: Campaigns
				{
					idc = -1;
					onbuttonclick = "uinamespace setvariable ['RscDisplayCampaignLoad_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONBOOTCAMP')];";
					show = 0;
					text = "Bootcamp";
					tooltip = "Get started with the Bootcamp tutorial campaign.";
					w = "(	10 + 3.5) * 	(pixelW * pixelGrid * 2)";
					y = "(0 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
				class FieldManual: Bootcamp
				{
					idc = 143;
					onbuttonclick = "";
					show = 1;
					text = "Field Manual";
					tooltip = "Browse hints, tips and instructions about game mechanics and controls.";
					y = "(0 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
				};
			};
		};
		class InfoDLCs: InfoDLCsOwned
		{
			idc = 1031;
			y = "safezoneY + safezoneH - (3 * 		2 + 	1) * 	(pixelH * pixelGrid * 2) - 4 * 	(4 * pixelH)";
			class Controls: Controls
			{
				class Background: Background {};
				class BackgroundIcon: BackgroundIcon {};
				class Button: Button {};
				class Icon: Icon
				{
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\infoDLCs_ca.paa";
				};
				class Icons: Icons
				{
					idc = 144;
				};
			};
		};
		class InfoDLCsOwned: InfoMods
		{
			idc = 10311;
			y = "safezoneY + safezoneH - (2 * 		2 + 	1) * 	(pixelH * pixelGrid * 2) - 3 * 	(4 * pixelH)";
			class Controls: Controls
			{
				class Background: Background {};
				class BackgroundIcon: BackgroundIcon {};
				class Button: Button
				{
					onButtonClick = "(ctrlparent (_this select 0)) createdisplay 'RscDisplayDLCContentBrowser';";
					tooltip = "Browse and configure available expansions and mods.";
					url = "";
				};
				class Icon: Icon
				{
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\infoDLCsOwned_ca.paa";
				};
				class Icons: Icons
				{
					idc = 145;
				};
			};
		};
		class InfoMods: RscControlsGroupNoHScrollbars
		{
			h = "2 * 	(pixelH * pixelGrid * 2)";
			idc = 1030;
			w = "(safezoneW - 		10 * 	(pixelW * pixelGrid * 2) - 	(4 * pixelH)) - 	(4 * pixelH)";
			x = "safezoneX + 	(4 * pixelH)";
			y = "safezoneY + safezoneH - (1 * 		2 + 	1) * 	(pixelH * pixelGrid * 2) - 2 * 	(4 * pixelH)";
			class Controls
			{
				class Background: RscPicture
				{
					colorText[] = {0, 0, 0, 0.75};
					h = "2 * 	(pixelH * pixelGrid * 2)";
					idc = 1034;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradientMods_ca.paa";
					w = "4 * 		2 * 	(pixelW * pixelGrid * 2)";
					x = 0;
					y = 0;
				};
				class BackgroundIcon: RscPicture
				{
					colorText[] = {0, 0, 0, 0.75};
					h = "2 * 	(pixelH * pixelGrid * 2)";
					idc = 1035;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\backgroundModsIcon_ca.paa";
					w = "2 * 		2 * 	(pixelW * pixelGrid * 2)";
					x = 0;
					y = 0;
				};
				class Button: RscButtonMenu
				{
					colorBackground[] = {0, 0, 0, 0};
					colorBackground2[] = {0, 0, 0, 0};
					colorBackgroundFocused[] = {0, 0, 0, 0};
					h = "2 * 	(pixelH * pixelGrid * 2)";
					idc = 1037;
					tooltip = "Open Steam Workshop";
					url = "https://steamcommunity.com/workshop/browse?appid=107410";
					w = "2 * 	(pixelW * pixelGrid * 2)";
					x = 0;
					y = 0;
				};
				class Icon: RscPicture
				{
					colorText[] = {1, 1, 1, 0.5};
					h = "2 * 	(pixelH * pixelGrid * 2)";
					idc = 1036;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\infoMods_ca.paa";
					w = "2 * 	(pixelW * pixelGrid * 2)";
					x = 0;
					y = 0;
				};
				class Icons: RscControlsGroupNoHScrollbars
				{
					h = "2 * 	(pixelH * pixelGrid * 2)";
					idc = 141;
					w = "(safezoneW - (1.5 * 		2 + 		10) * 	(pixelW * pixelGrid * 2) - 	(4 * pixelH)) - 	(4 * pixelH)";
					x = "1.5 * 		2 * 	(pixelW * pixelGrid * 2)";
					y = 0;
					class Controls {};
				};
			};
		};
		class InfoNews: InfoMods
		{
			idc = 1032;
			w = "10 * 	(pixelW * pixelGrid * 2)";
			x = "safezoneX + safezoneW - 		10 * 	(pixelW * pixelGrid * 2) - 	(4 * pixelH)";
			y = "safezoneY + safezoneH - (2 * 		2 + 	1) * 	(pixelH * pixelGrid * 2) - 3 * 	(4 * pixelH)";
			class Controls: Controls
			{
				class Background: Background
				{
					angle = 180;
					x = "(		10 - 4 * 		2) * 	(pixelW * pixelGrid * 2)";
				};
				class BackgroundIcon: BackgroundIcon
				{
					angle = 180;
					x = "(		10 - 2 * 		2) * 	(pixelW * pixelGrid * 2)";
				};
				class Button: Button
				{
					tooltip = "Read the Latest News";
					url = "https://dev.arma3.com/latest/sitrep";
					w = "10 * 	(pixelW * pixelGrid * 2)";
				};
				class Icon: Icon
				{
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\infoNews_ca.paa";
					x = "(		10 - 		2) * 	(pixelW * pixelGrid * 2)";
				};
				class News: RscText
				{
					colorBackground[] = {0, 0, 0, 0};
					font = "RobotoCondensedLight";
					h = "2 * 	(pixelH * pixelGrid * 2)";
					onLoad = "(_this select 0) ctrlenable false;";
					shadow = 1;
					sizeEx = "(pixelH * pixelGrid * 2)";
					style = 1;
					text = "SITREP";
					w = "(		10 - 1.25 * 		2) * 	(pixelW * pixelGrid * 2)";
					x = 0;
					y = 0;
				};
				class Notification: RscPicture
				{
					h = "(0.375 * 		2) * 	(pixelH * pixelGrid * 2)";
					idc = 1039;
					show = 0;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\notification_ca.paa";
					w = "(0.375 * 		2) * 	(pixelW * pixelGrid * 2)";
					x = "(		10 - 0.375 * 		2) * 	(pixelW * pixelGrid * 2)";
					y = "(0.125 * 		2) * 	(pixelH * pixelGrid * 2)";
				};
			};
		};
		class InfoVersion: InfoNews
		{
			idc = 1033;
			y = "safezoneY + safezoneH - (1 * 		2 + 	1) * 	(pixelH * pixelGrid * 2) - 2 * 	(4 * pixelH)";
			class Controls: Controls
			{
				class Background: Background {};
				class BackgroundIcon: BackgroundIcon {};
				class ButtoDev: Button
				{
					idc = 1038;
					show = 0;
					url = "https://forums.bistudio.com/topic/140837-development-branch-changelog/?view=getlastpost";
				};
				class Button: Button
				{
					tooltip = "Open the Changelog";
					url = "https://dev.arma3.com/latest/spotrep";
				};
				class Icon: Icon
				{
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\infoVersion_ca.paa";
				};
				class Notification: Notification {};
				class Version: News
				{
					idc = 118;
					text = "0.00.000000";
				};
				class VersionDev: News
				{
					idc = 1050;
					show = 0;
					style = "0x01 + 0x10";
				};
			};
		};
		class LogoContact: RscActivePicture
		{
			color[] = {0.9, 0.9, 0.9, 1};
			colorActive[] = {1, 1, 1, 1};
			h = "15 * 0.4 * 	(pixelH * pixelGridNoUIScale * 2)";
			onButtonClick = "[findDisplay 0, true] call (uiNamespace getVariable 'BIS_fnc_showWelcomeScreen')";
			onKillFocus = "(_this select 0) ctrlsettextcolor [0.9,0.9,0.9,1];";
			onLoad = "";
			onSetFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			show = 1;
			text = "\a3\Data_F_Contact\Logos\logoTitle_ca.paa";
			tooltip = "View the Arma 3 Contact Welcome Screen again.";
			w = "15 * 0.8 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = "0.5 - 		15 * 0.8 * 	(pixelW * pixelGridNoUIScale * 2) / 2";
			y = "safezoneY + 0.2 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class Play: RscButton
		{
			colorBackground[] = {0.19, 0.39, 0.56, 0};
			colorBackgroundActive[] = {0.19, 0.39, 0.56, 0.5};
			colorFocused[] = {0.19, 0.39, 0.56, 0.5};
			font = "RobotoCondensed";
			h = "1.5 * 		1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 101;
			onLoad = "				_text = '';				{_text = _text + tostring [_x] + ' ';} foreach toarray ctrltext (_this # 0);				(_this # 0) ctrlsettext _text;			";
			shadow = 0;
			sizeEx = "1.5 * 		1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			style = "0x02 + 0xC0";
			text = "Play";
			tooltip = "Play the ""First Contact"" singleplayer campaign.";
			w = "15 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = "0.5 - 		15 * 	(pixelW * pixelGridNoUIScale * 2) / 2";
			y = "(0.5 - 3.5 * 	(safezoneH / 40))";
		};
		class ProofsOfConcept: AllMissions
		{
			animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
			animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
			colorBackground[] = {0.784314, 0.137255, 0.0627451, 0.5};
			idc = -1;
			onbuttonclick = "				uinamespace setvariable ['RscDisplaySingleMission_title','INTERNAL CONCEPTS'];				(ctrlparent (_this select 0)) createMissionDisplay ['','Concepts'];			";
			onLoad = "if (cheatsenabled && {count (configfile >> 'CfgMissions' >> 'Concepts') > 0}) then {(_this select 0) ctrlshow true;};";
			show = 0;
			text = "Concepts";
			y = "safezoneY + safezoneH - (	1 + 2 * 	1.5) * 	(pixelH * pixelGrid * 2) - 2 * pixelH";
		};
		class Scenarios: Editor
		{
			idc = 103;
			text = "Scenarios";
			tooltip = "Play user-made scenarios (note: scenarios that are not designed for Arma 3 Contact may not be compatible).";
			y = "(0.5 - 3.5 * 	(safezoneH / 40)) + (2.5 * 		1.5 + 0.2) * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class TitleIconMultiplayer: TitleIconSingleplayer
		{
			idc = 1112;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_multiplayer_ca.paa";
			tooltip = "Multiplayer";
			x = "0.5 - (	5 + 	4) * 	(pixelW * pixelGrid * 2)";
		};
		class TitleIconOptions: TitleIconSingleplayer
		{
			idc = 1114;
			onLoad = "";
			show = 1;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_options_ca.paa";
			tooltip = "Options";
			w = "1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = "safezoneX + safezoneW - 4 * 		1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
		};
		class TitleIconSingleplayer: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {1, 1, 1, 1};
			colorDisabled[] = {0, 0, 0, 0};
			colorFocused[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 1};
			h = "1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 1111;
			onKillFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onLoad = "(_this # 0) ctrlenable false;";
			onMouseEnter = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
			onMouseExit = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onSetFocus = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
			show = 0;
			style = "0x30 + 0x800";
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_singleplayer_ca.paa";
			tooltip = "Singleplayer";
			w = 0;
			x = "0.5 - (	5 + 2 * 	4) * 	(pixelW * pixelGrid * 2)";
			y = "safezoneY + 		1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class TitleIconTutorials: TitleIconSingleplayer
		{
			idc = 1113;
			onLoad = "";
			show = 1;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_tutorials_ca.paa";
			tooltip = "Tutorials";
			w = "1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = "safezoneX + safezoneW - 5 * 		1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
		};
		class TitleMultiplayer: TitleSingleplayer
		{
			idc = 1012;
			text = "Multiplayer";
			x = "0.5 - (	5 + 	10) * 	(pixelW * pixelGrid * 2)";
		};
		class TitleOptions: TitleIconSingleplayer
		{
			idc = 1014;
			onLoad = "";
			show = 1;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_options_ca.paa";
			tooltip = "Options";
			w = "1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = "safezoneX + safezoneW - 4 * 		1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
		};
		class TitleSession: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {1, 1, 1, 1};
			colorFocused[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			h = "1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 1015;
			onKillFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onMouseEnter = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
			onMouseExit = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onSetFocus = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
			style = 48;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\profile_player_ca.paa";
			w = "1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = "safezoneX + safezoneW - 3 * 		1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
			y = "safezoneY + 		1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class TitleSingleplayer: RscButtonMenu
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackground2[] = {1, 1, 1, 1};
			colorDisabled[] = {0, 0, 0, 0};
			h = "1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 1011;
			onLoad = "(_this # 0) ctrlenable false;";
			show = 0;
			size = "1.25 * 	(pixelH * pixelGrid * 2)";
			style = "0x02 + 0xC0";
			text = "Singleplayer";
			w = 0;
			x = "0.5 - (	5 + 2 * 	10) * 	(pixelW * pixelGrid * 2)";
			y = "safezoneY + 		1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Attributes
			{
				align = "center";
				color = "#ffffff";
				font = "PuristaLight";
				shadow = 0;
				size = 1;
			};
			class TextPos
			{
				bottom = "0.18 * 		2 * 	(pixelH * pixelGrid * 2)";
				left = "0.1 * 		2 * 	(pixelW * pixelGrid * 2)";
				right = "0.1 * 		2 * 	(pixelW * pixelGrid * 2)";
				top = "0.18 * 		2 * 	(pixelH * pixelGrid * 2)";
			};
		};
		class TitleTutorials: TitleIconSingleplayer
		{
			idc = 1013;
			onLoad = "";
			show = 1;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_tutorials_ca.paa";
			tooltip = "Tutorials";
			w = "1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = "safezoneX + safezoneW - 5 * 		1.5 * 	(pixelW * pixelGridNoUIScale * 2)";
		};
	};
	class ControlsBackground
	{
		class BackgroundLeft: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "2 * 	10";
			w = "safezoneX + 	10";
			x = "-	10";
			y = "-	10";
		};
		class BackgroundRight: BackgroundLeft
		{
			w = 10;
			x = "safezoneX + safezoneW";
		};
		class ContactBackground: Interlacing
		{
			angle = 0;
			colorText[] = {0.19, 0.39, 0.56, 0.7};
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryCategories\gradient_gs.paa";
		};
		class Interlacing: RscPicture
		{
			colorText[] = {1, 1, 1, 0.5};
			h = "safezoneH";
			text = "\a3\Ui_f\data\IGUI\RscTitles\Interlacing\interlacing_ca.paa";
			w = "15 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = "0.5 - 		15 * 	(pixelW * pixelGridNoUIScale * 2) / 2";
			y = "safezoneY";
		};
		class LogoBackground: RscPicture
		{
			colorText[] = {0.19, 0.39, 0.56, 1};
			h = "pixelH";
			text = "#(rgb,1,1,1)color(1,1,1,1)";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY + 		1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class LogoBackground2: LogoBackground
		{
			y = "safezoneY + 		1.5 * 	(pixelH * pixelGridNoUIScale * 2) + 		1.5 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 999;
			style = 16;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class Picture: RscPicture
		{
			h = "safezoneW * 4/3";
			idc = 998;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\backgroundGrey.jpg";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
	};
	class DlcIconPicture: RscPictureKeepAspect
	{
		colorText[] = {1, 1, 1, 0.25};
		h = "2 * 	(pixelH * pixelGrid * 2)";
		spacing = "(4 * pixelH)";
		w = "2 * 	(pixelW * pixelGrid * 2)";
		x = 0;
		y = 0;
	};
	class DlcOwnedIconPicture: RscPictureKeepAspect
	{
		colorText[] = {1, 1, 1, 0.25};
		h = "2 * 	(pixelH * pixelGrid * 2)";
		spacing = "(4 * pixelH)";
		w = "2 * 	(pixelW * pixelGrid * 2)";
		x = 0;
		y = 0;
	};
	class IconPicture: RscPictureKeepAspect
	{
		colorText[] = {1, 1, 1, 0.25};
		h = "2 * 	(pixelH * pixelGrid * 2)";
		spacing = "(4 * pixelH)";
		text = "";
		w = "2 * 	(pixelW * pixelGrid * 2)";
		x = 0;
		y = 0;
	};
};
