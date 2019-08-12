class RscDisplayArcadeMap_Layout_2: RscMap
{
	defaultSide = 1;
	idd = 26;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayArcadeMap_Layout_2"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayArcadeMap_Layout_2"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayArcadeMap_Layout_2";
	scriptPath = "GUI";
	textureClear = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\clear_ca.paa";
	textureCloudly = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\cloudly_ca.paa";
	textureOvercast = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\overcast_ca.paa";
	textureRainy = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\rainy_ca.paa";
	textureStormy = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\stormy_ca.paa";
	class controls
	{
		class BackgroundBottom: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1007;
			w = "SafezoneW";
			x = "SafezoneX";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ButtonExit: RscActiveText
		{
			color[] = {1, 1, 1, 0.8};
			colorActive[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 0.8};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			style = 48;
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			tooltip = "Close";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY";
		};
		class ButtonHide: RscActiveText
		{
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 0.7};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2406;
			onbuttonclick = "ctrlSetFocus ((finddisplay 26) displayctrl 107);";
			shortcuts[] = {14};
			style = 48;
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_sidebar_hide_up.paa";
			tooltip = "Hide SideBar (BACKSPACE)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (3 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY";
		};
		class CA_MissionName: RscTitle
		{
			colorBackground[] = {0, 0, 0, 0.3};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 113;
			sizeEx = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 0;
			w = "SafezoneW - (23.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "SafezoneX + (20.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY";
		};
		class CA_Section: RscCombo
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 109;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			wholeHeight = 0.45;
			x = "SafezoneX + SafezoneW - (6.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_ToolboxMode: RscToolbox
		{
			color[] = {0, 0, 0, 0};
			colorDisable[] = {0, 0, 0, 0};
			colorSelect[] = {0, 0, 0, 0};
			colorSelectedBg[] = {0.95, 0.95, 0.95, 1};
			colorText[] = {1, 1, 1, 1};
			colorTextDisable[] = {0, 0, 0, 0};
			colorTextSelect[] = {0, 0, 0, 1};
			columns = 1;
			h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			rows = 7;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			strings[] = {"(F1) Units", "(F2) Groups", "(F3) Triggers", "(F4) Waypoints", "(F5) Synchronize", "(F6) Markers", "(F7) Modules"};
			style = 0;
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (6.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + 7.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Clear: RscActiveText
		{
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 0.7};
			h = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 103;
			onbuttonclick = "ctrlSetFocus ((finddisplay 26) displayctrl 107);";
			shortcuts[] = {"512 + 0x31"};
			style = 48;
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_clear_ca.paa";
			tooltip = "Clear [CTRL+N]";
			w = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + (0 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + (0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Config: Clear
		{
			action = "[finddisplay 26] call (uinamespace getvariable 'bis_fnc_configviewer');";
			idc = 1710;
			shortcuts[] = {"512 + 0x22"};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_config_ca.paa";
			tooltip = "Config Viewer [CTRL+G]";
			x = "SafezoneX + (15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class Continue: RscButtonMenu
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 108;
			shortcuts[] = {"512 + 0x12"};
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Continue";
			tooltip = "Continue";
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (6.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + 13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Attributes
			{
				align = "center";
				color = "#E5E5E5";
				font = "RobotoCondensedLight";
				shadow = "false";
			};
			class TextPos
			{
				bottom = 0;
				left = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				right = 0.005;
				top = "(0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)) / 2";
			};
		};
		class Debug: Clear
		{
			action = "(finddisplay 26) createdisplay 'RscDisplayDebugPublic';";
			idc = 1711;
			shortcuts[] = {"512 + 0x20"};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_debug_ca.paa";
			tooltip = "Debug Console [CTRL+D]";
			x = "SafezoneX + (12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class ExitButtonBackground: RscText
		{
			colorBackground[] = {0.5, 0, 0, 0.8};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1086;
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY";
		};
		class Functions: Clear
		{
			action = "[finddisplay 26] call (uinamespace getvariable 'bis_fnc_help');";
			idc = 1709;
			shortcuts[] = {"512 + 0x21"};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_functions_ca.paa";
			tooltip = "Functions Viewer [CTRL+F]";
			x = "SafezoneX + (14 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class GroupIntel: RscControlsGroup
		{
			h = "4.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (6.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + 3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class ButtonEditIntel: RscButtonMenu
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 105;
					shortcuts[] = {"512 + 0x11"};
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					text = "Advanced Intel";
					tooltip = "Intel [CTRL+W]";
					w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						align = "center";
						color = "#E5E5E5";
						font = "RobotoCondensedLight";
						shadow = "false";
					};
					class TextPos
					{
						bottom = 0;
						left = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						right = 0.005;
						top = "(0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)) / 2";
					};
				};
				class CA_ValueWeather: RscXSliderH
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 2601;
					w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Date: Time
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 55;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "7.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class IntelBack: CA_Back
				{
					colorText[] = {0.15, 0.15, 0.15, 0.7};
					h = "4.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Time: RscText
				{
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 54;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 0;
					w = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ToolboxClear: RscPicture
				{
					h = "1.24 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 2603;
					text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\clear_ca.paa";
					w = "1.24 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ToolboxCloudy: ToolboxClear
				{
					idc = 2605;
					text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\overcast_ca.paa";
					x = "2.68 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class ToolboxOvercast: RscToolbox
				{
					colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
					colorTextSelect[] = {0, 0, 0, 1};
					columns = 5;
					default = 0;
					h = "1.24 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 2602;
					rows = 1;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					strings[] = {"", "", "", "", ""};
					style = 0;
					w = "6.2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ToolboxPartlyCloudy: ToolboxClear
				{
					idc = 2604;
					text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\cloudly_ca.paa";
					x = "1.44 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class ToolboxRainy: ToolboxClear
				{
					idc = 2606;
					text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\rainy_ca.paa";
					x = "3.92 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class ToolboxStormy: ToolboxClear
				{
					idc = 2607;
					text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\stormy_ca.paa";
					x = "5.16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
		class Ids: Clear
		{
			idc = 111;
			shortcuts[] = {"512 + 0x17"};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_ID_ca.paa";
			tooltip = "IDs [CTRL+I]";
			x = "SafezoneX + (10 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class IDsButtonBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1088;
			w = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + (10 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + (0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Layout: Clear
		{
			idc = 116;
			shortcuts[] = {"512 + 0x26"};
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_layout_ca.paa";
			tooltip = "Choose editor's layout [CTRL+L]";
			x = "SafezoneX + (17 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class Load: Clear
		{
			idc = 101;
			shortcuts[] = {"512 + 0x18"};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_load_ca.paa";
			tooltip = "Load [CTRL+O]";
			x = "SafezoneX + (1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class Mainback: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "14.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1081;
			w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (7 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + (1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class MainbackTop: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1084;
			w = "SafezoneW";
			x = "SafezoneX";
			y = "SafezoneY";
		};
		class Merge: Clear
		{
			idc = 106;
			shortcuts[] = {"512 + 0x32"};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_merge_ca.paa";
			tooltip = "Merge [CTRL+M]";
			x = "SafezoneX + (6 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class Preview: RscButtonMenu
		{
			action = "if (profilenamespace getvariable ['BIS_fnc_init_recompileEditor',false]) then {[1] call (uinamespace getvariable 'bis_fnc_recompile')}";
			default = 1;
			h = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 107;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			text = "Preview";
			tooltip = "Preview";
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (6.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + 14.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Attributes
			{
				align = "center";
				color = "#E5E5E5";
				font = "RobotoCondensedLight";
				shadow = "false";
			};
			class ShortcutPos: ShortcutPos
			{
				left = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				top = "0.33 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class TextPos
			{
				bottom = 0;
				left = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				right = 0.005;
				top = "(1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
			};
		};
		class PublishMission: Clear
		{
			idc = 117;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_steam_ca.paa";
			tooltip = "Publish on Steam Workshop";
			x = "SafezoneX + (18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class Save: Clear
		{
			idc = 102;
			shortcuts[] = {"512 + 0x1F"};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_save_ca.paa";
			tooltip = "Save [CTRL+S]";
			x = "SafezoneX + (3 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class SaveAs: Clear
		{
			idc = 1712;
			shortcuts[] = {"512 + 	1024 + 0x1F"};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_saveas_2_ca.paa";
			tooltip = "Save As [CTRL+SHIFT+S]";
			x = "SafezoneX + (4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class Separator1: RscPicture
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1210;
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_separator_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + (7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY";
		};
		class Separator2: RscPicture
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1211;
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_separator_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + (11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY";
		};
		class TextGrid: TextMode
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1009;
			text = "Grid:";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextMode: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1017;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Textures: Clear
		{
			idc = 112;
			shortcuts[] = {"512 + 0x14"};
			text = "A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_textures_ca.paa";
			tooltip = "Textures [CTRL+T]";
			x = "SafezoneX + (8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
		};
		class TexturesButtonBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1087;
			w = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + (8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + (0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextX: TextMode
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1011;
			text = "X:";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 16.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextY: TextMode
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1013;
			text = "Y:";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 20.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class TextZ: TextMode
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1015;
			text = "Z:";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 24.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ToolboxBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.3};
			h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1083;
			w = "6.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (6.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + 7.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TraffLight: RscTrafficLight
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 121;
			show = 0;
			w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ValueGrid: TextMode
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1010;
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 12.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ValueX: TextMode
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1012;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ValueY: TextMode
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1014;
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 21.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class ValueZ: TextMode
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1016;
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2) + 25.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "SafezoneY + SafezoneH - (0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Watermark: ctrlStatic
		{
			colorText[] = {1, 0, 0, 0.5};
			font = "RobotoCondensedLight";
			h = "15 * (pixelH * pixelGrid * 	0.50)";
			onLoad = "(_this select 0) ctrlenable false;";
			shadow = 0;
			sizeEx = "4.86 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			style = "0x02 + 0x10";
			text = "WARNING: YOU ARE USING THE DEPRECIATED 2D EDITOR!";
			w = 1;
			x = 0;
			y = "safezoneY + 0.06";
		};
	};
	class controlsBackground
	{
		class Black: RscText
		{
			colorBackground[] = {0.5, 0.5, 0.5, 1};
			h = "safezoneH";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class CA_Map: RscMapControl
		{
			h = "safezoneH - 2.3 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			moveOnEdges = 1;
			shadow = 0;
			sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class Legend
			{
				color[] = {0, 0, 0, 1};
				colorBackground[] = {1, 1, 1, 0};
				font = "RobotoCondensed";
				h = 0.152;
				sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				w = 0.34;
				x = "SafeZoneX";
				y = "SafeZoneY";
			};
			class Waypoint: Waypoint
			{
				icon = "\A3\ui_f\data\map\mapcontrol\waypointeditor_ca.paa";
			};
		};
	};
};
