class RscDisplayDebug
{
	idd = 56;
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayDebug"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDebug"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptIsInternal = 1;
	scriptName = "RscDisplayDebug";
	scriptPath = "GUI";
	class Controls
	{
		class B_Apply: RscButtonMenu
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 102;
			shortcuts[] = {"0x00050000 + 2", "512 + 0x1C", "512 + 0x9C"};
			text = "Apply";
			tooltip = "Ctrl + Enter";
			w = "4.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "21 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class B_Camera: RscButtonMenu
		{
			action = "cameraOn spawn bis_fnc_cameraOld;";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13155;
			onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
			shortcuts[] = {"512 + 0x12"};
			text = "<img image='\A3\ui_f\data\igui\cfg\islandmap\iconcamera_ca.paa' size='0.7' /> Camera";
			tooltip = "Ctrl + E";
			w = "4.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class B_CameraNew: RscButtonMenu
		{
			action = "[] call bis_fnc_camera;";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13142;
			onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
			shortcuts[] = {"512 + 0x12"};
			text = "Splendid Cam";
			tooltip = "Ctrl + E";
			w = "4.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "16 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class B_Cancel: RscButtonMenu
		{
			default = 0;
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Cancel";
			tooltip = "Escape";
			w = "9.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class B_OK: RscButtonMenu
		{
			default = 1;
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			text = "OK";
			tooltip = "Enter";
			w = "5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "26 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonAddAntennas: ButtonResetVars
		{
			onButtonClick = "[] call bin_fnc_diag_addAllSpectrumAnalyzers;";
			onLoad = "if (isnull (finddisplay 46)) then {(_this # 0) ctrlenable false;};";
			text = "Add Analyzers";
			tooltip = "Add all spectrum analyzers and antennas";
			y = "14 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonDebugVars: ButtonResetVars
		{
			onButtonClick = "'debug' call bin_fnc_persistentVariables;";
			onLoad = "if (isnull (finddisplay 46)) then {(_this # 0) ctrlenable false;};";
			text = "Copy Vars";
			tooltip = "Copy the current state of persistent variables to clipboard";
			y = "13 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonResetVars: RscButtonMenu
		{
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			onButtonClick = "'reset' call bin_fnc_persistentVariables;";
			onLoad = "";
			text = "Reset Vars";
			tooltip = "Reset campaign variables";
			w = "7 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "18.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "12 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonRevealAntennas: ButtonResetVars
		{
			onButtonClick = "[] call bin_fnc_diag_revealAllAntennas;";
			onLoad = "if (isnull (finddisplay 46)) then {(_this # 0) ctrlenable false;};";
			text = "Reveal Antennas";
			tooltip = "Reveal all antennas in the world";
			y = "15 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonScript1: RscButtonMenu
		{
			action = "_nil = [] execvm '\A3\@debug\debug1.sqf';";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13157;
			shortcuts[] = {"512 + 0x02"};
			text = "1";
			tooltip = "Ctrl + 1 (\A3\@debug\debug1.sqf)";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			class Attributes
			{
				align = "center";
				color = "#E5E5E5";
				font = "RobotoCondensedLight";
				shadow = "false";
			};
		};
		class ButtonScript2: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug2.sqf';";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13158;
			shortcuts[] = {"512 + 0x03"};
			text = "2";
			tooltip = "Ctrl + 2 (\A3\@debug\debug2.sqf)";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "12.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonScript3: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug3.sqf';";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13159;
			shortcuts[] = {"512 + 0x04"};
			text = "3";
			tooltip = "Ctrl + 3 (\A3\@debug\debug3.sqf)";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "13.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonScript4: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug4.sqf';";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13160;
			shortcuts[] = {"512 + 0x05"};
			text = "4";
			tooltip = "Ctrl + 4 (\A3\@debug\debug4.sqf)";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonScript5: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug5.sqf';";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13161;
			shortcuts[] = {"512 + 0x06"};
			text = "5";
			tooltip = "Ctrl + 5 (\A3\@debug\debug5.sqf)";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class ButtonScript6: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug6.sqf';";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13163;
			shortcuts[] = {"512 + 0x07"};
			text = "6";
			tooltip = "Ctrl + 6 (\A3\@debug\debug6.sqf)";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "16.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Player: RscEdit
		{
			font = "RobotoCondensedBold";
			h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 12145;
			sizeEx = "0.55 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			style = 512;
			w = "7 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "18.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.25 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
		};
		class CA_Title: RscStructuredText
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11838;
			text = "Debug console";
			w = "9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
		};
		class CA_Version: RscEdit
		{
			font = "EtelkaMonospacePro";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 12146;
			sizeEx = "0.55 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			style = "0x01 + 0x200";
			w = "5.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "25.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
		};
		class ContactDebug: RscListBox
		{
			h = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = -1;
			onLbDblClick = "				params ['_ctrl','_cursel'];				_data = _ctrl lbdata _cursel;				_value = !(uinamespace getvariable [_data,false]);				uinamespace setvariable [_data,_value];				_ctrl lbsetpicture [_cursel,['\a3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa','\a3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa'] select _value];			";
			onLoad = "				params ['_ctrl','_cursel'];				for '_cursel' from 0 to (lbsize _ctrl - 1) do {					_value = uinamespace getvariable [_ctrl lbdata _cursel,false];					_ctrl lbsetpicture [_cursel,['\a3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa','\a3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa'] select _value];				};			";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "7 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "12 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			class Items
			{
				class DiagMap
				{
					data = "bin_diagMap";
					text = "Simple Map";
					tooltip = "Disables paper map effects, revealing the whole terrain.";
				};
				class DiagProbeMap
				{
					data = "bin_diagProbeMap";
					text = "Probe Map";
					tooltip = "Show probe network.";
				};
			};
		};
		class ContactTitle: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			text = "CONTACT";
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "11 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class EventHandler: RscText
		{
			onLoad = "[missionnamespace,'debugConsoleOpened',[ctrlparent (_this # 0)]] call bis_fnc_callScriptedEventHandler;";
			show = 0;
		};
		class G_Design: RscControlsGroup
		{
			h = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13037;
			w = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			class controls
			{
				class CreateJIRAIssue: RscButtonMenu
				{
					colorBackground[] = {0.12549, 0.313726, 0.505882, 1};
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 13143;
					shortcuts[] = {"512 + 0x24"};
					text = "REPORT ISSUE";
					tooltip = "Ctrl + J";
					w = "7.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DebugAnim: DebugFlow
				{
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 13141;
					onButtonClick = "[] call (uinamespace getvariable 'bis_fnc_animVIewer'); (ctrlParent (_this select 0)) closeDisplay 2";
					shortcuts[] = {"512 + 0x1E"};
					text = "Anim";
					tooltip = "Ctrl + A";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "4 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DebugCapture: DebugFlow
				{
					action = "diag_captureFrame 30";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 13164;
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
					shortcuts[] = {"512 + 0x19"};
					text = "Capture";
					tooltip = "Ctrl + P";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "4 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "3 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DebugConfig: DebugFlow
				{
					action = "[] call (uinamespace getvariable 'bis_fnc_configviewer');";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 13154;
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
					shortcuts[] = {"512 + 0x22"};
					text = "<img image='\A3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_config_ca.paa' size='0.7' /> Config";
					tooltip = "Ctrl + G";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DebugFlow: RscButtonMenu
				{
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 13140;
					onButtonClick = "diag_debugfsm bis_fnc_missionFlow_fsm";
					shortcuts[] = {"512 + 0x32"};
					style = 0;
					text = "FSM";
					tooltip = "Ctrl + M";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "3 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DebugFunctions: DebugFlow
				{
					action = "[] call (uinamespace getvariable 'bis_fnc_help');";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 13145;
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
					shortcuts[] = {"512 + 0x21"};
					text = "<img image='\A3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_functions_ca.paa' size='0.7' /> Fnc";
					tooltip = "Ctrl + F";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "4 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DebugGUI: DebugFlow
				{
					action = "[] spawn (uinamespace getvariable 'BIS_fnc_GUIeditor');";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 13144;
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
					shortcuts[] = {"512 + 0x16"};
					text = "GUI";
					tooltip = "Ctrl + U";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DesignHTML: RscHTML
				{
					h = "1.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 11735;
					w = "7.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
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
		class G_Diag: RscControlsGroup
		{
			h = "9.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			idc = 13036;
			w = "5.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "25.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
			class controls
			{
				class DiagButton: RscButtonMenu
				{
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 13138;
					shortcuts[] = {"512 + 0x14"};
					text = "Toggle";
					tooltip = "Ctrl + T";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "8 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				};
				class DiagFrame: RscFrame
				{
					h = "8.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
					idc = 12535;
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DiagList: RscTree
				{
					colorLines[] = {0, 0, 0, 0};
					disableSearchHighlight = 1;
					h = "7.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
					idc = 12236;
					idcSearch = 12238;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DiagListSearch: RscEdit
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 12238;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
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
		class G_Draw: RscControlsGroup
		{
			h = "7 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13039;
			w = "5.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "25.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "11 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			class controls
			{
				class DrawButton: RscButtonMenu
				{
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 13139;
					shortcuts[] = {"512 + 0x20"};
					text = "Draw";
					tooltip = "Ctrl + D";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DrawFrame: RscFrame
				{
					h = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 12536;
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DrawList: RscTree
				{
					colorLines[] = {0, 0, 0, 0};
					h = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 12237;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DrawText: RscText
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 11748;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					text = "diag_drawmode";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
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
		class G_Expression: RscControlsGroup
		{
			h = "3 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			idc = 13035;
			w = "25 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
			class Controls
			{
				class HistoryExpression: RscCombo
				{
					font = "EtelkaMonospacePro";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 163;
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "12 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class SearchButtonExpression: RscButtonSearch
				{
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 162;
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class SearchExpression: RscEdit
				{
					font = "EtelkaMonospacePro";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 161;
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "11 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "12.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextExpression: RscText
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 11736;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					text = "Expression:";
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueExpression: RscEdit
				{
					autocomplete = "scripting";
					colorBackground[] = {0, 0, 0, 0};
					colorSelection[] = {0, 0.4, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
					idc = 101;
					shadow = 0;
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					style = 16;
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
			class HScrollbar
			{
				color[] = {0, 0, 0, 0};
				height = 0.001;
			};
			class ScrollBar: ScrollBar {};
			class VScrollbar
			{
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				autoScrollSpeed = -1;
				color[] = {0, 0, 0, 0};
				width = 0.001;
			};
		};
		class G_Watch: G_Expression
		{
			h = "6.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 13038;
			w = "25 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "4.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			class Controls
			{
				class TextVar1: RscText
				{
					h = "0.500001 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 11737;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					text = "1:";
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextVar2: TextVar1
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 11738;
					text = "2:";
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextVar3: TextVar1
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 11739;
					text = "3:";
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "3.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextVar4: TextVar1
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 11740;
					text = "4:";
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextWatch: RscText
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 11741;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					text = "Watch:";
					w = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueExp1: RscEdit
				{
					autocomplete = "scripting";
					colorSelection[] = {0, 0.4, 0, 1};
					font = "EtelkaMonospacePro";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 121;
					shadow = 0;
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueExp2: ValueExp1
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 122;
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueExp3: ValueExp1
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 123;
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "3.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueExp4: ValueExp1
				{
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 124;
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueRes1: RscEdit
				{
					autocomplete = "scripting";
					colorBackground[] = {0, 0, 0, 0.75};
					font = "EtelkaMonospacePro";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 141;
					lineSpacing = 1;
					shadow = 0;
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					style = 16;
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueRes2: ValueRes1
				{
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 142;
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueRes3: ValueRes1
				{
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 143;
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueRes4: ValueRes1
				{
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					idc = 144;
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
	};
	class controlsBackground
	{
		class Background: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "safezoneH - 4.2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			w = "30 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			moving = 1;
			w = "30 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
		};
	};
};
