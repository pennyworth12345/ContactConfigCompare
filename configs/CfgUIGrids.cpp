class CfgUIGrids
{
	class GUI
	{
		displayname = "Menu";
		scope = 1;
		class Presets
		{
			class Arma3
			{
				default = 1;
				displayName = "Arma 3";
				class Variables
				{
					grid[] = {{"(safezoneX)", "(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))", "((safezoneW / safezoneH) min 1.2)", "(			((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_center[] = {{"(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)", "(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)", "((safezoneW / safezoneH) min 1.2)", "(			((safezoneW / safezoneH) min 1.2) / 1.2)"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				};
			};
		};
		class Variables
		{
			class grid
			{
				displayName = "Standard";
				preview = "#(argb,8,8,3)color(1,0,0,0.5)";
				saveToProfile[] = {0, 1, 2, 3};
			};
			class grid_center
			{
				displayName = "Centered";
				preview = "#(argb,8,8,3)color(1,0,0,0.5)";
				saveToProfile[] = {0, 1, 2, 3};
			};
		};
	};
	class IGUI
	{
		displayname = "HUD";
		class Presets
		{
			class Arma3
			{
				default = 1;
				displayName = "Arma 3";
				class Variables
				{
					grid_bar[] = {{"(safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(36 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_chat[] = {{"(safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_comm[] = {{"(0 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)", "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)", "(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_CustomInfoLeft[] = {{"(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_CustomInfoRight[] = {{"((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))", "(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_gaugealt[] = {{"(safezoneX + (safezoneW / 2) - 11.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_gaugecompass[] = {{"(safezoneX + (safezoneW / 2) + 12.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_gaugehorizon[] = {{"(safezoneX + ((safezoneW - 7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_gaugespeed[] = {{"(safezoneX + (safezoneW / 2) - 19.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_gaugestability[] = {{"(safezoneX + (safezoneW / 2) + 4.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_hint[] = {{"((safezoneX + safezoneW) - 		(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_menu[] = {{"(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)", "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)", "(4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(13.5 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_mission[] = {{"(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_notification[] = {{"(0.5 - 6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 6.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_stamina[] = {{"((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 4.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_stance[] = {{"((safezoneX + safezoneW) - 		(3.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(3.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(3.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_vehicle[] = {{"(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
					grid_weapon[] = {{"((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))", "(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))", "(4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"}, "(			((safezoneW / safezoneH) min 1.2) / 40)", "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				};
			};
		};
		class Variables
		{
			class grid_bar
			{
				description = "List of your subordinates when you're a squad leader.";
				displayName = "Command Bar";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_bar_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_chat
			{
				canResize = 1;
				description = "Radio chat log, includes direct speech.";
				displayName = "Chat";
				preview = "#(argb,8,8,3)color(0.2,0.2,0.2,0.5)";
				saveToProfile[] = {0, 1, 2, 3};
			};
			class grid_comm
			{
				description = "List of available mission support.";
				displayName = "Support";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_comm_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_CustomInfoLeft
			{
				canResize = 0;
				description = "Shows Minimap, Radar, Slingload assistant, Camera feeds or other modules based on player's selection.";
				displayName = "Left Panel - Custom Info";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_customInfo_left_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_CustomInfoRight
			{
				canResize = 1;
				description = "Shows Minimap, Radar, Slingload assistant, Camera feeds or other modules based on player's selection.";
				displayName = "Right Panel - Custom Info";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_customInfo_ca.paa";
				saveToProfile[] = {0, 1, 2, 3};
			};
			class grid_gaugealt
			{
				description = "Absolute altitude (above ground level) in metres.";
				displayName = "Altimeter";
				preview = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_layout_altitude_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_gaugecompass
			{
				description = "Analogue compass, digital heading value and wind indicator.";
				displayName = "Compass";
				preview = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_layout_compass_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_gaugehorizon
			{
				description = "Artifical horizon and G-force indicator.";
				displayName = "Attitude";
				preview = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_layout_horizon_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_gaugespeed
			{
				description = "Ground speed in kilometres per hour.";
				displayName = "Ground speed";
				preview = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_layout_speed_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_gaugestability
			{
				description = "Vertical speed, collective and hover deviation indicators.";
				displayName = "Variometer";
				preview = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_layout_stability_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_hint
			{
				description = "Explanation of game mechanics and tactics. Resized vertically based on text length.";
				displayName = "Hint";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_hint_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_menu
			{
				description = "Squad control commands and replies.";
				displayName = "Commanding menu";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_menu_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_mission
			{
				description = "Scenario-specific texts (e.g. info about time and location)";
				displayName = "Scenario";
				preview = "#(argb,8,8,3)color(0.2,0.2,0.2,0.5)";
				saveToProfile[] = {0, 1};
			};
			class grid_notification
			{
				description = "Mission announcement, e.g., task updates or score bonuses.";
				displayName = "Notification";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_notification_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_stamina
			{
				description = "Indicates the amount of stamina and encumbrance.";
				displayName = "Stamina Bar";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_stamina_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_stance
			{
				description = "Stance of player's unit.";
				displayName = "Stance indicator";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_stance.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_vehicle
			{
				description = "Vehicle status displayed for vehicle crew members (i.e., driver, commander, gunners).";
				displayName = "Vehicle info";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_vehicle_ca.paa";
				saveToProfile[] = {0, 1};
			};
			class grid_weapon
			{
				description = "Weapon, magazines and ammo information. Show gunner's weapon for vehicle commanders.";
				displayName = "Weapon info";
				preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_weapon_ca.paa";
				saveToProfile[] = {0, 1};
			};
		};
	};
};
