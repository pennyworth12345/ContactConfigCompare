class CfgUIColors
{
	class GUI
	{
		displayName = "Menu";
		scope = 1;
		class Grids
		{
			class grid
			{
				position[] = {{"(safezoneX)", "(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))", "((safezoneW / safezoneH) min 1.2)", "(			((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
			};
			class grid_center
			{
				position[] = {{"(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)", "(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)", "((safezoneW / safezoneH) min 1.2)", "(			((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
			};
			class grid_old
			{
				position[] = {{"(safezoneX)", "(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))", "((safezoneW / safezoneH) min 1.2)", "(		((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(		((safezoneW / safezoneH) min 1.2) / 32)", "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)"};
			};
			class grid_old_center
			{
				position[] = {{"(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)", "(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)", "((safezoneW / safezoneH) min 1.2)", "(		((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(		((safezoneW / safezoneH) min 1.2) / 32)", "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)"};
			};
			class grid_old_editor
			{
				position[] = {{"(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)", "(safezoneY)", "((safezoneW / safezoneH) min 1.2)", "(		((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(		((safezoneW / safezoneH) min 1.2) / 32)", "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)"};
			};
		};
		class Presets
		{
			class PresetAlpha
			{
				displayName = "Arma 3 Alpha";
				class Variables
				{
					BCG_RGB[] = {0.678431, 0.74902, 0.513726, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetApex
			{
				default = 0;
				displayName = "Arma 3 Apex";
				class Variables
				{
					BCG_RGB[] = {0.13, 0.54, 0.21, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetBeta
			{
				displayName = "Arma 3 Beta";
				class Variables
				{
					BCG_RGB[] = {0.403922, 0.545098, 0.607843, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetBootcampOchre
			{
				displayName = "Bootcamp Ochre";
				class Variables
				{
					BCG_RGB[] = {0.764706, 0.592157, 0.113725, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetContact
			{
				default = 1;
				displayName = "Contact Blue";
				class Variables
				{
					BCG_RGB[] = {0.188235, 0.388235, 0.556863, 1};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetJets
			{
				displayName = "Dark Blue";
				class Variables
				{
					BCG_RGB[] = {0, 0.0941176, 0.25098, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetMaldenSand
			{
				displayName = "Malden Sand";
				class Variables
				{
					BCG_RGB[] = {0.760784, 0.698039, 0.501961, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetOrange
			{
				displayName = "IDAP Orange";
				class Variables
				{
					BCG_RGB[] = {0.898039, 0.403922, 0.133333, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetRCbronze
			{
				displayName = "Karting Bronze";
				class Variables
				{
					BCG_RGB[] = {0.69, 0.25, 0.12, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetRCgold
			{
				displayName = "Arma 3";
				class Variables
				{
					BCG_RGB[] = {0.77, 0.51, 0.08, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetRCmarine
			{
				displayName = "SDV Marine";
				class Variables
				{
					BCG_RGB[] = {0.12, 0.5, 0.42, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetRColive
			{
				displayName = "Drab Olive";
				class Variables
				{
					BCG_RGB[] = {0.35, 0.35, 0.1, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetRCturquoise
			{
				displayName = "2035 Turquoise";
				class Variables
				{
					BCG_RGB[] = {0.1, 0.83, 1, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetRCwhite
			{
				displayName = "Platform White";
				class Variables
				{
					BCG_RGB[] = {1, 1, 0.97, 0.9};
					TITLETEXT_RGB[] = {0, 0, 0, 1};
				};
			};
			class PresetTacOps
			{
				displayName = "Tac-Ops";
				class Variables
				{
					BCG_RGB[] = {0.392157, 0.501961, 0.25098, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetTanks
			{
				displayName = "Tanks";
				class Variables
				{
					BCG_RGB[] = {0.215686, 0.368627, 0.368627, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
			class PresetZeus
			{
				displayName = "Zeus";
				class Variables
				{
					BCG_RGB[] = {0.31, 0.78, 0.78, 0.8};
					TITLETEXT_RGB[] = {1, 1, 1, 1};
				};
			};
		};
		class Variables
		{
			class BCG_RGB
			{
				displayName = "Background";
				preview = 1;
			};
			class TITLETEXT_RGB
			{
				displayName = "Title Text";
				preview = 1;
			};
		};
	};
	class IGUI
	{
		displayName = "Ingame";
		class Grids
		{
			class grid
			{
				position[] = {{"(safezoneX)", "(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))", "((safezoneW / safezoneH) min 1.2)", "(			((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
			};
			class grid_avcamera
			{
				position[] = {{"(safezoneX + safezoneW - 11.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 17.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(6.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1, 2, 3};
			};
			class grid_bar
			{
				position[] = {{"(safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(36 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_bottom
			{
				position[] = {{"(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2)) / 2)", "(safezoneY + safezoneH - 					(		((safezoneW / safezoneH) min 1.2) / 1.2))", "((safezoneW / safezoneH) min 1.2)", "(		((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(		((safezoneW / safezoneH) min 1.2) / 32)", "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)"};
			};
			class grid_center
			{
				position[] = {{"(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)", "(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)", "((safezoneW / safezoneH) min 1.2)", "(			((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
			};
			class grid_chat
			{
				position[] = {{"(safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1, 2, 3};
			};
			class grid_comm
			{
				position[] = {{"(0 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)", "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)", "(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_gaugealt
			{
				position[] = {{"(safezoneX + (safezoneW / 2) - 11.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_gaugecompass
			{
				position[] = {{"(safezoneX + (safezoneW / 2) + 12.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_gaugehorizon
			{
				position[] = {{"(safezoneX + ((safezoneW - 7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_gaugespeed
			{
				position[] = {{"(safezoneX + (safezoneW / 2) - 19.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_gaugestability
			{
				position[] = {{"(safezoneX + (safezoneW / 2) + 4.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_gps
			{
				position[] = {{"(safezoneX + safezoneW - 11 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 20.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1, 2, 3};
			};
			class grid_hint
			{
				position[] = {{"((safezoneX + safezoneW) - 		(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_menu
			{
				position[] = {{"(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)", "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)", "(4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(13.5 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_notification
			{
				position[] = {{"(0.5 - 6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 6.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_pip
			{
				position[] = {{"(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32))", "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2)))", "(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))", "(		(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)))"}, "(		((safezoneW / safezoneH) min 1.2) / 32)", "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)"};
				saveToProfile[] = {0, 1, 2};
			};
			class grid_radar
			{
				position[] = {{"(safezoneX + safezoneW / 2 - 2.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(5.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(5.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_slingloadassistant
			{
				position[] = {{"(safezoneX + safezoneW - 8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 19.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(9.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1, 2, 3};
			};
			class grid_stamina
			{
				position[] = {{"((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 4.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_stance
			{
				position[] = {{"((safezoneX + safezoneW) - 		(3.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(3.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(3.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_vehicle
			{
				position[] = {{"(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
			class grid_weapon
			{
				position[] = {{"((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				saveToProfile[] = {0, 1};
			};
		};
		class Presets
		{
			class PresetA0
			{
				displayName = "Everon Grey";
				class Variables
				{
					BCG_RGB[] = {0, 0, 0, 0.35};
					ERROR_RGB[] = {0.7, 0.1, 0, 1};
					TACTPING_RGB[] = {1, 0.8, 0.2, 1};
					TEXT_RGB[] = {0, 0.6, 0, 1};
					WARNING_RGB[] = {0.8, 0.6, 0, 1};
				};
			};
			class PresetA1
			{
				displayName = "Sahrani Green";
				class Variables
				{
					BCG_RGB[] = {0.388, 0.545, 0.247, 0.5};
					ERROR_RGB[] = {0.9, 0.2, 0.2, 1};
					TACTPING_RGB[] = {1, 0.8, 0.2, 1};
					TEXT_RGB[] = {1, 1, 1, 1};
					WARNING_RGB[] = {0.9, 0.45, 0.1, 1};
				};
			};
			class PresetA2
			{
				displayName = "Chernarus Olive";
				class Variables
				{
					BCG_RGB[] = {0.1882, 0.2588, 0.149, 0.75};
					ERROR_RGB[] = {0.706, 0.0745, 0.0196, 1};
					TACTPING_RGB[] = {1, 0.8, 0.2, 1};
					TEXT_RGB[] = {0.6, 0.84, 0.47, 1};
					WARNING_RGB[] = {0.863, 0.584, 0, 1};
				};
			};
			class PresetA2OA
			{
				displayName = "Takistan Brown";
				class Variables
				{
					BCG_RGB[] = {0.1961, 0.1451, 0.0941, 0.4};
					ERROR_RGB[] = {0.706, 0.0745, 0.0196, 1};
					TACTPING_RGB[] = {1, 0.8, 0.2, 1};
					TEXT_RGB[] = {0.8784, 0.8471, 0.651, 1};
					WARNING_RGB[] = {0.863, 0.584, 0, 1};
				};
			};
			class PresetA3
			{
				default = 1;
				displayName = "Stratis Black";
				class Variables
				{
					BCG_RGB[] = {0.2, 0.2, 0.2, 0.4};
					ERROR_RGB[] = {0.8, 0, 0, 1};
					TACTPING_RGB[] = {1, 0.8, 0.2, 1};
					TEXT_RGB[] = {0.95, 0.95, 0.95, 1};
					WARNING_RGB[] = {0.8, 0.5, 0, 1};
				};
			};
			class PresetTakeOn
			{
				displayName = "Seattle Blue";
				class Variables
				{
					BCG_RGB[] = {0.26901, 0.49133, 0.62034, 0.4};
					ERROR_RGB[] = {0.706, 0.0745, 0.0196, 1};
					TACTPING_RGB[] = {1, 0.8, 0.2, 1};
					TEXT_RGB[] = {1, 1, 1, 1};
					WARNING_RGB[] = {0.863, 0.584, 0, 1};
				};
			};
		};
		class Variables
		{
			saveToProfile = 1;
			class BCG_RGB
			{
				displayName = "Backgrounds";
				preview = "#(argb,8,8,3)color(1,1,1,1)";
				previewBackground = "\A3\ui_f\data\GUI\Cfg\UIDefault\preview_co.paa";
				previewH = "4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				previewW = "4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			};
			class ERROR_RGB
			{
				displayName = "Errors";
				preview = "\A3\ui_f\data\IGUI\Cfg\WeaponCursors\arifle_gs.paa";
				previewBackground = "\A3\ui_f\data\GUI\Cfg\UIDefault\preview_co.paa";
				previewH = "4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				previewW = "4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			};
			class TACTPING_RGB
			{
				displayName = "Tactical Ping";
				preview = "\A3\ui_f\data\IGUI\Cfg\WeaponCursors\arifle_gs.paa";
				previewBackground = "\A3\ui_f\data\GUI\Cfg\UIDefault\preview_co.paa";
				previewH = "4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				previewW = "4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			};
			class TEXT_RGB
			{
				displayName = "Active Elements";
				preview = "\A3\ui_f\data\IGUI\Cfg\WeaponCursors\arifle_gs.paa";
				previewBackground = "\A3\ui_f\data\GUI\Cfg\UIDefault\preview_co.paa";
				previewH = "4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				previewW = "4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			};
			class WARNING_RGB
			{
				displayName = "Warnings";
				preview = "\A3\ui_f\data\IGUI\Cfg\WeaponCursors\arifle_gs.paa";
				previewBackground = "\A3\ui_f\data\GUI\Cfg\UIDefault\preview_co.paa";
				previewH = "4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				previewW = "4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			};
		};
	};
	class Map
	{
		displayName = "Map";
		class Presets
		{
			class PresetA2
			{
				displayName = "2012";
				class Variables
				{
					BLUFOR[] = {0, 0, 1, 1};
					Civilian[] = {1, 0.5, 0, 1};
					Independent[] = {0, 0.5, 0, 1};
					OPFOR[] = {0.5, 0, 0, 1};
					Unknown[] = {1, 0.5, 0, 0.8};
				};
			};
			class PresetA3
			{
				default = 1;
				displayName = "2035";
				class Variables
				{
					BLUFOR[] = {0, 0.3, 0.6, 1};
					Civilian[] = {0.4, 0, 0.5, 1};
					Independent[] = {0, 0.5, 0, 1};
					OPFOR[] = {0.5, 0, 0, 1};
					Unknown[] = {0.7, 0.6, 0, 1};
				};
			};
		};
		class Variables
		{
			saveToProfile = 1;
			class BLUFOR
			{
				displayName = "BLUFOR";
				preview = "\a3\Ui_f\data\Map\VehicleIcons\iconMan_ca.paa";
				previewBackground = "#(argb,8,8,3)color(1,1,1,1)";
				previewH = "4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				previewW = "4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			};
			class Civilian: BLUFOR
			{
				displayName = "Civilian";
			};
			class Independent: BLUFOR
			{
				displayName = "Independent";
			};
			class OPFOR: BLUFOR
			{
				displayName = "OPFOR";
			};
			class Unknown: BLUFOR
			{
				displayName = "Empty";
			};
		};
	};
	class Subtitles
	{
		displayName = "Subtitles";
		class Presets
		{
			class White
			{
				default = 1;
				displayName = "White";
				class Variables
				{
					Background[] = {0, 0, 0, 0};
					Text[] = {1, 1, 1, 1};
				};
			};
			class WhiteBackground
			{
				displayName = "White with Background";
				class Variables
				{
					Background[] = {0, 0, 0, 0.25};
					Text[] = {1, 1, 1, 1};
				};
			};
			class Yellow
			{
				displayName = "Yellow";
				class Variables
				{
					Background[] = {0, 0, 0, 0};
					Text[] = {0.866667, 0.878431, 0.262745, 1};
				};
			};
			class YellowBackground
			{
				displayName = "Yellow with Background";
				class Variables
				{
					Background[] = {0, 0, 0, 0.25};
					Text[] = {0.866667, 0.878431, 0.262745, 1};
				};
			};
		};
		class Variables
		{
			class Background
			{
				displayName = "Backgrounds";
				preview = "#(argb,8,8,3)color(1,1,1,1)";
				previewBackground = "\A3\ui_f\data\GUI\Cfg\UIDefault\preview_co.paa";
				previewH = "4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				previewW = "4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			};
			class Text
			{
				displayName = "Active Elements";
				preview = "\A3\ui_f\data\IGUI\Cfg\WeaponCursors\arifle_gs.paa";
				previewBackground = "\A3\ui_f\data\GUI\Cfg\UIDefault\preview_co.paa";
				previewH = "4 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				previewW = "4 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			};
		};
	};
};
