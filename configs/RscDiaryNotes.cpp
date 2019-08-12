class RscDiaryNotes: RscDiaryBase
{
	idc = 20772;
	onLoad = "[""onLoad"",_this,""RscDiaryNotes"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiaryNotes"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDiaryNotes";
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
			onButtonClick = "				_show = !(uinamespace getvariable ['RscDiaryNotes_showAll',false]);				uinamespace setvariable ['RscDiaryNotes_showAll',_show];				with uinamespace do {['refresh',ctrlparent (_this # 0),''] call RscDiaryNotes_script;};				if (_show) then {(_this # 0) ctrlsettext 'DEBUG ON';} else {(_this # 0) ctrlsettext 'DEBUG OFF';};			";
			onLoad = "				params ['_ctrl'];				if !(cheatsenabled) exitwith {_ctrl ctrlenable false; _ctrl ctrlsetpositionW 0; _ctrl ctrlcommit 0;};				if (uinamespace getvariable ['RscDiaryNotes_showAll',false]) then {_ctrl ctrlsettext 'DEBUG ON';} else {_ctrl ctrlsettext 'DEBUG OFF';};			";
			shadow = 0;
			text = "DEBUG ON";
			w = "4.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class DescriptionGroup: RscControlsGroupNoHScrollbars
		{
			h = "((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 207722;
			w = "(		20 - 1) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Controls
			{
				class Description: RscStructuredText
				{
					h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 207723;
					shadow = 0;
					size = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2";
					w = "(		20 - 2.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = 0;
					class Attributes
					{
						align = "left";
						color = "#D8000000";
						font = "Caveat";
						size = 1;
					};
				};
				class Picture: RscPictureKeepAspect
				{
					h = "(		20 - 2.5) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 207725;
					show = 0;
					w = "(		20 - 2.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = 0;
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
		class Leaflet: RscPictureKeepAspect
		{
			h = "((		20 - 2) * 1.275) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 207726;
			show = 0;
			style = "0x30 + 0x800";
			w = "((		20 - 2) * 1.275) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(		20 / 2 - 	((		20 - 2) * 1.275) / 2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class LeafletDescriptionGroup: RscControlsGroupNoHScrollbars
		{
			fade = 1;
			h = "((		20 - 2) * 1.275) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 207727;
			onLoad = "(_this # 0) ctrlenable false;";
			w = "(		20 - 3.4) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Controls
			{
				class Description: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0.75};
					h = "((		20 - 2) * 1.275) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 207728;
					onMouseExit = "(_this # 0) ctrlsetfade 1; (_this # 0) ctrlcommit 0.2;";
					onMouseHolding = "(_this # 0) ctrlsetfade 0; (_this # 0) ctrlcommit 0; (_this # 0) ctrlsetfade 1; (_this # 0) ctrlcommit 1;";
					onMouseMoving = "(_this # 0) ctrlsetfade 0; (_this # 0) ctrlcommit 0; (_this # 0) ctrlsetfade 1; (_this # 0) ctrlcommit 1;";
					shadow = 0;
					w = "(		20 - 3.4) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = 0;
				};
			};
		};
		class List: RscCombo
		{
			arrowEmpty = "\a3\UI_F_Contact\Data\Common\RscDiaryNotes\arrowEmpty_ca.paa";
			arrowFull = "\a3\UI_F_Contact\Data\Common\RscDiaryNotes\arrowFull_ca.paa";
			colorBackground[] = {0.84, 0.86, 0.35, 1};
			colorPicture[] = {0, 0, 0, 1};
			colorPictureSelected[] = {0.84, 0.86, 0.35, 1};
			colorSelect[] = {0.84, 0.86, 0.35, 1};
			colorSelectBackground[] = {0, 0, 0, 1};
			colorText[] = {0, 0, 0, 1};
			font = "Caveat";
			h = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 207721;
			onLBSelChanged = "with uinamespace do {['selChanged',_this,''] call RscDiaryNotes_script;}";
			sizeEx = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "(		20 - 4.2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class ComboScrollBar
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
		class ListBackground: RscPicture
		{
			colorText[] = {0.84, 0.86, 0.35, 1};
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryTasks\headerBackground_ca.paa";
			w = "(		20) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListBackground2: ListBackground {};
		class Title: Title
		{
			onLoad = "(_this # 0) ctrlsettext toupper ctrltext (_this # 0);";
			text = "Notes";
		};
		class TitleBackground: TitleBackground {};
		class Unseen: RscPicture
		{
			colorText[] = {0, 0, 0, 1};
			h = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 207724;
			show = 0;
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryNotes\unseen_ca.paa";
			w = "1.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
