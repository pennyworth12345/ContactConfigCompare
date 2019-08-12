class RscDisplayMovieInterrupt: RscStandardDisplay
{
	enableSimulation = 0;
	idd = 49;
	onLoad = "[""onLoad"",_this,""RscDisplayMovieInterrupt"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMovieInterrupt"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayMovieInterrupt";
	scriptPath = "GUI";
	class controls
	{
		class ButtonAudio: RscButtonMenuLeft
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 302;
			text = "Audio";
			tooltip = "Set volume for sounds, music, speech and voice.";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "16.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonControls: RscButtonMenuLeft
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 303;
			text = "Controls";
			tooltip = "View or change game controls.";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonGame: RscButtonMenuLeft
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 307;
			text = "Game";
			tooltip = "Adjust game difficulty and customize game interface.";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "18.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonTutorialHints: RscButtonMenuLeft
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 122;
			text = "Field Manual";
			tooltip = "Browse hints, tips and instructions about game mechanics and controls.";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "19.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonVideo: RscButtonMenuLeft
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 301;
			text = "Video";
			tooltip = "Adjust resolution, details and other viewing options.";
			w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "15.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Feedback: RscFeedback {};
		class MI_Abort: MI_Skip
		{
			default = 0;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 4;
			text = "Abort";
			tooltip = "Abort current mission, return to menu.";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "20.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class KeyHints
			{
				class A
				{
					hint = "";
					key = "0x00050000 + 0";
				};
			};
		};
		class MI_Again: MI_Skip
		{
			default = 0;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 105;
			text = "Again";
			tooltip = "Replay video.";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "17.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class KeyHints
			{
				class A
				{
					hint = "";
					key = "0x00050000 + 0";
				};
			};
		};
		class MI_Options: MI_Skip
		{
			default = 0;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			text = "Configure";
			tooltip = "Configure all areas of the game to your liking.";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "18.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class KeyHints
			{
				class A
				{
					hint = "";
					key = "0x00050000 + 0";
				};
			};
		};
		class MI_Resume: RscButtonMenuLeft
		{
			default = 1;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1", "0x00050000 + 8"};
			text = "Continue";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "15.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class ShortcutPos: ShortcutPos
			{
				left = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			};
		};
		class MI_Skip: RscButtonMenuLeft
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1;
			text = "Skip";
			tooltip = "Skip video message.";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "16.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class KeyHints
			{
				class A
				{
					hint = "";
					key = "0x00050000 + 0";
				};
			};
		};
		class MissionTitle: RscText
		{
			font = "RobotoCondensedLight";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 120;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "SafezoneW - (15 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class PlayersName: Title
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 109;
			style = 1;
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Title: RscTitle
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1004;
			style = 0;
			text = "Paused";
			w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TraffLight: RscTrafficLight
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 121;
			show = 0;
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Version: RscText
		{
			font = "RobotoCondensedLight";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 1;
			w = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (13 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
	class controlsBackground
	{
		class MissionNameBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = -1;
			w = "SafezoneW - (2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Pause1: RscText
		{
			colorBackground[] = {1, 1, 1, 1};
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			shadow = 2;
			w = "0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Pause2: Pause1
		{
			idc = 1001;
			x = "safezoneX + safezoneW - 3.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			disableCustomColors = 1;
			h = "safezoneH";
			idc = 115099;
			onLoad = "[ctrlParent (_this select 0), ""RscDisplayMovieInterrupt""] call (uiNamespace getVariable 'BIS_fnc_guiEffectTiles')";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
			class Controls
			{
				class Tile_0_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115000;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_0_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115001;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_0_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115002;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_0_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115003;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_0_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115004;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_0_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115005;
					w = "1/6 * safezoneW";
					x = "(0 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_1_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115010;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_1_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115011;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_1_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115012;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_1_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115013;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_1_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115014;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_1_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115015;
					w = "1/6 * safezoneW";
					x = "(1 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_2_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115020;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_2_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115021;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_2_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115022;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_2_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115023;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_2_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115024;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_2_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115025;
					w = "1/6 * safezoneW";
					x = "(2 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_3_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115030;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_3_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115031;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_3_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115032;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_3_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115033;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_3_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115034;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_3_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115035;
					w = "1/6 * safezoneW";
					x = "(3 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_4_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115040;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_4_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115041;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_4_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115042;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_4_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115043;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_4_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115044;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_4_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115045;
					w = "1/6 * safezoneW";
					x = "(4 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class Tile_5_0: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115050;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
				};
				class Tile_5_1: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115051;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
				};
				class Tile_5_2: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115052;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
				};
				class Tile_5_3: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115053;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
				};
				class Tile_5_4: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115054;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
				};
				class Tile_5_5: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1/6 * safezoneH";
					idc = 115055;
					w = "1/6 * safezoneW";
					x = "(5 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
				};
				class TileFrame: RscFrame
				{
					colortext[] = {0, 0, 0, 1};
					h = "safezoneH";
					idc = 114999;
					w = "safezoneW";
					x = 0;
					y = 0;
				};
			};
		};
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1050;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "14.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
