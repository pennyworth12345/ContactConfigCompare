class RscDisplayArcadeMap_Layout_6: RscMap
{
	defaultSide = 1;
	idd = 26;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayArcadeMap_Layout_6"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayArcadeMap_Layout_6"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayArcadeMap_Layout_6";
	scriptPath = "GUI";
	textureClear = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\clear_ca.paa";
	textureCloudly = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\cloudly_ca.paa";
	textureOvercast = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\overcast_ca.paa";
	textureRainy = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\rainy_ca.paa";
	textureStormy = "\A3\ui_f\data\gui\rsc\rscdisplayarcademap\stormy_ca.paa";
	class controls
	{
		class A3_Section: RscCombo
		{
			h = 0;
			idc = 109;
			w = 0;
			x = -1;
			y = -1;
		};
		class BottomBackground: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY + safezoneH - 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BottomGroup: RscControlsGroupNoScrollbars
		{
			h = "0.8 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "safezoneW";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "safezoneY + safezoneH - 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class TextGrid: RscText
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1002;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					text = "Grid:";
					w = "2.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "11 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextX: TextGrid
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1004;
					text = "X:";
					w = "1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextY: TextGrid
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1006;
					text = "Y:";
					w = "1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "20.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextZ: TextGrid
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1008;
					text = "Z:";
					w = "1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "24.75 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueGrid: TextGrid
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1003;
					w = "4 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.75 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueX: ValueGrid
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1005;
					w = "4 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueY: ValueGrid
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1007;
					w = "4 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "21.25 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueZ: ValueGrid
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1009;
					w = "4 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class ButtonsBackground: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1012;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ButtonsBackgroundGradient: RscPicture
		{
			colorText[] = {1, 1, 1, 0.25};
			h = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1224;
			text = "\a3\Ui_f\data\GUI\RscCommon\RscShortcutButton\background_ca.paa";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ButtonsGroup: RscControlsGroupNoScrollbars
		{
			h = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2302;
			w = "24.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class Clear: RscActiveText
				{
					color[] = {1, 1, 1, 1};
					colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					colorText[] = {1, 1, 1, 1};
					h = "1.3 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 103;
					onbuttonclick = "ctrlSetFocus ((ctrlparent (_this select 0)) displayctrl 107);";
					shortcuts[] = {"512 + 0x31"};
					style = 48;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_clear_ca.paa";
					tooltip = "Clear [CTRL+N]";
					w = "1.3 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Config: Clear
				{
					action = "[finddisplay 26] call (uinamespace getvariable 'bis_fnc_configviewer');";
					idc = 1213;
					shortcuts[] = {"512 + 0x22"};
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_config_ca.paa";
					tooltip = "Config Viewer [CTRL+G]";
					x = "13.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Debug: Clear
				{
					action = "(finddisplay 26) createdisplay 'RscDisplayDebugPublic';";
					idc = 1211;
					shortcuts[] = {"512 + 0x20"};
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_debug_ca.paa";
					tooltip = "Debug Console [CTRL+D]";
					x = "10.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Functions: Clear
				{
					action = "[finddisplay 26] call (uinamespace getvariable 'bis_fnc_help');";
					idc = 1212;
					shortcuts[] = {"512 + 0x21"};
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_functions_ca.paa";
					tooltip = "Functions Viewer [CTRL+F]";
					x = "12 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class IDs: Clear
				{
					idc = 111;
					shortcuts[] = {"512 + 0x17"};
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_ID_ca.paa";
					tooltip = "IDs [CTRL+I]";
					x = "18 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Intel: Clear
				{
					idc = 105;
					shortcuts[] = {"512 + 0x11"};
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_intel_ca.paa";
					tooltip = "Intel [CTRL+W]";
					x = "9 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Layout: Clear
				{
					idc = 116;
					shortcuts[] = {"512 + 0x26"};
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_layout_ca.paa";
					tooltip = "Choose editor's layout [CTRL+L]";
					x = "21 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Load: Clear
				{
					idc = 101;
					shortcuts[] = {"512 + 0x18"};
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_load_ca.paa";
					tooltip = "Load [CTRL+O]";
					x = "1.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Merge: Clear
				{
					idc = 106;
					shortcuts[] = {"512 + 0x32"};
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_merge_ca.paa";
					tooltip = "Merge [CTRL+M]";
					x = "6 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class PublishMission: Clear
				{
					idc = 117;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_steam_ca.paa";
					tooltip = "Publish on Steam Workshop";
					x = "22.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Save: Clear
				{
					idc = 102;
					shortcuts[] = {"512 + 0x1F"};
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_save_ca.paa";
					tooltip = "Save [CTRL+S]";
					x = "3 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class SaveAs: Clear
				{
					idc = 1712;
					shortcuts[] = {"512 + 	1024 + 0x1F"};
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_saveas_2_ca.paa";
					tooltip = "Save As [CTRL+SHIFT+S]";
					x = "4.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
				class Separator1: RscPicture
				{
					h = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1207;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_separator_ca.paa";
					w = "0.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Separator2: RscPicture
				{
					h = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1210;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_separator_ca.paa";
					w = "0.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "15.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Separator3: RscPicture
				{
					h = "1.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1215;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_separator_ca.paa";
					w = "0.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "20 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Textures: Clear
				{
					idc = 112;
					shortcuts[] = {"512 + 0x14"};
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_textures_ca.paa";
					tooltip = "Textures [CTRL+T]";
					x = "16.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
			};
		};
		class Continue: RscButtonMenu
		{
			h = "1.1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 108;
			shortcuts[] = {"512 + 0x12"};
			text = "Continue";
			tooltip = "Continue";
			w = "7 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1.2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class Attributes
			{
				align = "center";
				color = "#E5E5E5";
				font = "RobotoCondensedLight";
				shadow = "false";
			};
		};
		class Preview: RscButtonMenuOK
		{
			action = "if (profilenamespace getvariable ['BIS_fnc_init_recompileEditor',false]) then {[1] call (uinamespace getvariable 'bis_fnc_recompile')}";
			h = "1.1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 107;
			text = "Preview";
			tooltip = "Preview";
			w = "7 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "25 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "1.2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class Attributes
			{
				align = "center";
				color = "#E5E5E5";
				font = "RobotoCondensedLight";
				shadow = "false";
			};
			class ShortcutPos: ShortcutPos
			{
				left = "6 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
				top = "0.05 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
		};
		class TextMode: RscText
		{
			h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1015;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "6 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX";
			y = "safezoneY + safezoneH - 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ToolboxGroup: RscControlsGroupNoScrollbars
		{
			h = "19 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2303;
			w = "1.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class Groups: Units
				{
					idc = 1218;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_groups_ca.paa";
					y = "2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Intro: Units
				{
					idc = 1216;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\section_intro_ca.paa";
					y = "13.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Markers: Units
				{
					idc = 1222;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_markers_ca.paa";
					y = "8 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Mission: Units
				{
					idc = 1225;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\section_mission_ca.paa";
					y = "12 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Modules: Units
				{
					idc = 1223;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_modules_ca.paa";
					y = "9.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OutroLoose: Units
				{
					idc = 1227;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\section_outroloose_ca.paa";
					y = "16.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class OutroWin: Units
				{
					idc = 1226;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\section_outrowin_ca.paa";
					y = "15 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Sync: Units
				{
					idc = 1221;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_synchro_ca.paa";
					y = "6.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ToolboxBackground: RscText
				{
					colorBackground[] = {0.1, 0.1, 0.1, 1};
					h = "18.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1013;
					w = "1.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ToolboxBackgroundStripe1: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1017;
					w = "safezoneWAbs";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ToolboxBackgroundStripe2: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1018;
					w = "safezoneWAbs";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ToolboxMode: RscToolbox
				{
					columns = 1;
					h = "10.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 104;
					rows = 7;
					strings[] = {"", "", "", "", "", "", ""};
					style = 0;
					tooltip = "Set editing mode";
					w = "1.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ToolboxSection: RscToolbox
				{
					columns = 1;
					h = "6 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1019;
					rows = 4;
					strings[] = {"", "", "", ""};
					tooltip = "Set scenario section: Mission / Intro / Outro Win / Outro Lose";
					w = "1.5 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "12 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Triggers: Units
				{
					idc = 1219;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_triggers_ca.paa";
					y = "3.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Units: RscPicture
				{
					color[] = {1, 1, 1, 1};
					colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "1.3 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1217;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_units_ca.paa";
					w = "1.3 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Waypoints: Units
				{
					idc = 1220;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_waypoints_ca.paa";
					y = "5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class TopGroup: RscControlsGroupNoScrollbars
		{
			h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			w = "safezoneW";
			x = "safezoneX";
			y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class controls
			{
				class BackgroundTop: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1010;
					w = "safezoneWAbs";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Collapse: RscActiveText
				{
					color[] = {1, 1, 1, 1};
					colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
					colorText[] = {1, 1, 1, 1};
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1201;
					shortcuts[] = {14};
					style = 48;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\top_collapse_gs.paa";
					w = "1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "safezoneW - 2 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Exit: Collapse
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 2;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\top_close_gs.paa";
					tooltip = "Exit";
					w = "1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "safezoneW - 1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MissionName: RscText
				{
					h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 113;
					w = "12 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class TraffLight: RscTrafficLight
		{
			h = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 121;
			show = 0;
			w = "1 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafezoneX + SafezoneW - (1 * 							(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "safezoneY + safezoneH - 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
			y = "safezoneY + 0.1";
		};
		class Weather: RscPicture
		{
			h = 0;
			idc = 52;
			w = 0;
			x = 0;
			y = 0;
		};
	};
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			h = "safezoneH - 3.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			hCollapsed = "safezoneH - 2 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			moveOnEdges = 1;
			shadow = 0;
			sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "2.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			yCollapsed = "1 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class Waypoint: Waypoint
			{
				icon = "\A3\ui_f\data\map\mapcontrol\waypointeditor_ca.paa";
			};
		};
	};
};
