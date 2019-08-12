class RscDiaryTasks: RscDiaryBase
{
	idc = 20771;
	onLoad = "[""onLoad"",_this,""RscDiaryTasks"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiaryTasks"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDiaryTasks";
	scriptPath = "ContactCommon";
	class Controls: Controls
	{
		class ButtonClose: ButtonClose {};
		class Debug: RscButton
		{
			colorBackground[] = {0.375, 0.25, 0.5, 1};
			colorBackgroundActive[] = {0.75, 0.5, 1, 1};
			colorFocused[] = {0.375, 0.25, 0.5, 1};
			h = "1.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onButtonClick = "				_show = !(uinamespace getvariable ['RscDiaryTasks_showAll',false]);				uinamespace setvariable ['RscDiaryTasks_showAll',_show];				with uinamespace do {['refresh',ctrlparent (_this # 0),''] call RscDiaryTasks_script;};				if (_show) then {(_this # 0) ctrlsettext 'DEBUG ON';} else {(_this # 0) ctrlsettext 'DEBUG OFF';};			";
			onLoad = "				params ['_ctrl'];				if !(cheatsenabled) exitwith {_ctrl ctrlenable false; _ctrl ctrlsetpositionW 0; _ctrl ctrlcommit 0;};				if (uinamespace getvariable ['RscDiaryTasks_showAll',false]) then {_ctrl ctrlsettext 'DEBUG ON';} else {_ctrl ctrlsettext 'DEBUG OFF';};			";
			shadow = 0;
			text = "DEBUG ON";
			w = "4.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Tasks: RscControlsTable
		{
			firstIDC = 207799;
			h = "(		((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))) - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 207720;
			lastIDC = 208799;
			lineSpacing = "0.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLbSelChanged = "with uinamespace do {['taskChanged',_this,''] call RscDiaryTasks_script;};";
			rowHeight = "(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			selectedRowColorFrom[] = {1, 1, 1, 0.2};
			selectedRowColorTo[] = {1, 1, 1, 0.2};
			w = "(		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class HeaderTemplate {};
			class RowTemplate
			{
				class HeaderBackground
				{
					columnW = "((		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					columnX = 0;
					controlBaseClassPath[] = {"RscDiaryTasks", "HeaderBackground"};
					controlH = "(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					controlOffsetY = 0;
				};
				class HeaderText
				{
					columnW = "((		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					columnX = 0;
					controlBaseClassPath[] = {"RscDiaryTasks", "HeaderText"};
					controlH = "(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					controlOffsetY = 0;
				};
				class LocationText
				{
					columnW = "((		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 			(			((safezoneW / safezoneH) min 1.2) / 40) * 3.5";
					columnX = "(			((safezoneW / safezoneH) min 1.2) / 40) * 2.5";
					controlBaseClassPath[] = {"RscDiaryTasks", "LocationText"};
					controlH = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					controlOffsetY = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
				};
				class ParentBackground
				{
					columnW = "((		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					columnX = "(			((safezoneW / safezoneH) min 1.2) / 40) * 1.0";
					controlBaseClassPath[] = {"RscDiaryTasks", "ParentBackground"};
					controlH = "(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) * 0.2";
					controlOffsetY = "(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) * 0.8";
				};
				class ParentText
				{
					columnW = "((		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					columnX = "(			((safezoneW / safezoneH) min 1.2) / 40) * 1.0";
					controlBaseClassPath[] = {"RscDiaryTasks", "ParentText"};
					controlH = "(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					controlOffsetY = 0;
				};
				class TaskCompleted
				{
					columnW = "((		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 			(			((safezoneW / safezoneH) min 1.2) / 40) * 1.5";
					columnX = "(			((safezoneW / safezoneH) min 1.2) / 40) * 1.5";
					controlBaseClassPath[] = {"RscDiaryTasks", "TaskCompleted"};
					controlH = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.25";
					controlOffsetY = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / 2";
				};
				class TaskCurrent
				{
					columnW = "((		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 			(			((safezoneW / safezoneH) min 1.2) / 40) * 1.5";
					columnX = "(			((safezoneW / safezoneH) min 1.2) / 40) * 1.5";
					controlBaseClassPath[] = {"RscDiaryTasks", "TaskCurrent"};
					controlH = "(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					controlOffsetY = 0;
				};
				class TaskText
				{
					columnW = "((		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 			(			((safezoneW / safezoneH) min 1.2) / 40) * 1.5";
					columnX = "(			((safezoneW / safezoneH) min 1.2) / 40) * 1.5";
					controlBaseClassPath[] = {"RscDiaryTasks", "TaskText"};
					controlH = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					controlOffsetY = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
				};
				class TaskTextFake
				{
					columnW = "((		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 			(			((safezoneW / safezoneH) min 1.2) / 40) * 1.5";
					columnX = "(			((safezoneW / safezoneH) min 1.2) / 40) * 1.5";
					controlBaseClassPath[] = {"RscDiaryTasks", "TaskTextFake"};
					controlH = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					controlOffsetY = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
				};
			};
			class VScrollBar
			{
				arrowEmpty = "\a3\UI_F_Contact\Data\Common\RscDiaryTasks\Scrollbar\arrowEmpty_ca.paa";
				arrowFull = "\a3\UI_F_Contact\Data\Common\RscDiaryTasks\Scrollbar\arrowFull_ca.paa";
				autoScrollDelay = 5;
				autoScrollEnabled = 0;
				autoScrollRewind = 0;
				autoScrollSpeed = -1;
				border = "#(rgb,1,1,1)color(0,0,0,0)";
				color[] = {0, 0, 0, 0.8};
				colorActive[] = {0, 0, 0, 1};
				colorDisabled[] = {0, 0, 0, 0.3};
				height = 0;
				scrollSpeed = 0.06;
				shadow = 0;
				thumb = "\a3\UI_F_Contact\Data\Common\RscDiaryTasks\Scrollbar\thumb_ca.paa";
				width = "(			((safezoneW / safezoneH) min 1.2) / 40) * 0.75";
			};
		};
		class Title: Title
		{
			onLoad = "(_this # 0) ctrlsettext toupper ctrltext (_this # 0);";
			text = "Objectives";
		};
		class TitleBackground: TitleBackground {};
	};
	class HeaderBackground: RscPicture
	{
		colorText[] = {1, 0.5, 0, 0.4};
		show = 0;
		text = "\a3\UI_F_Contact\Data\Common\RscDiaryTasks\headerBackground_ca.paa";
	};
	class HeaderText: RscText
	{
		colorBackground[] = {1, 1, 1, 0};
		colorText[] = {0, 0, 0, 0.9};
		font = "Caveat";
		shadow = 0;
		show = 0;
		sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4";
		style = 2;
	};
	class LocationText: RscActiveText
	{
		color[] = {0, 0, 0, 0.9};
		colorActive[] = {0.25, 0.25, 0.25, 0.9};
		font = "Caveat";
		shadow = 0;
		show = 0;
		sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.0";
		style = 1;
	};
	class MouseOver: RscText
	{
		show = 0;
		style = "0x10 + 0x200";
	};
	class ParentBackground: RscPicture
	{
		colorText[] = {1, 0.5, 0, 0.9};
		show = 0;
		text = "\a3\UI_F_Contact\Data\Common\RscDiaryTasks\parentBackground_ca.paa";
	};
	class ParentText: RscText
	{
		colorText[] = {0, 0, 0, 0.9};
		font = "Caveat";
		shadow = 0;
		show = 0;
		sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2";
		style = 0;
	};
	class Separator: RscPicture
	{
		colorText[] = {1, 1, 1, 0.2};
		show = 0;
		text = "#(rgb,1,1,1)color(1,1,1,1)";
	};
	class TaskCompleted: RscPicture
	{
		colorText[] = {0, 0, 0, 0.9};
		show = 0;
		text = "\a3\UI_F_Contact\Data\Common\RscDiaryTasks\parentBackground_ca.paa";
	};
	class TaskCurrent: RscPicture
	{
		colorText[] = {1, 0.5, 0, 1};
		show = 0;
		text = "\a3\UI_F_Contact\Data\Common\RscDiaryTasks\headerBackground_ca.paa";
	};
	class TaskShow: TaskTrack
	{
		show = 0;
		text = "\a3\UI_F_Contact\Data\Common\RscDiaryTasks\taskShow_ca.paa";
		tooltip = "Locate on map";
	};
	class TaskText: RscActiveText
	{
		color[] = {0, 0, 0, 0.9};
		colorActive[] = {0.25, 0.25, 0.25, 0.9};
		colorDisabled[] = {0, 0, 0, 0.9};
		font = "Caveat";
		shadow = 0;
		show = 0;
		sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2";
		style = 0;
	};
	class TaskTextFake: RscText
	{
		font = "Caveat";
		shadow = 0;
		show = 0;
		sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2";
		style = 0;
	};
	class TaskTrack: RscButton
	{
		colorBackground[] = {0, 0, 0, 0};
		colorText[] = {1, 1, 1, 0.5};
		show = 0;
		style = 48;
		text = "\a3\UI_F_Contact\Data\Common\RscMapTooltip\buttonTrack_track_ca.paa";
		tooltip = "Track";
	};
	class TaskUntrack: TaskTrack
	{
		text = "\a3\UI_F_Contact\Data\Common\RscMapTooltip\buttonTrack_untrack_ca.paa";
		tooltip = "Untrack";
	};
};
