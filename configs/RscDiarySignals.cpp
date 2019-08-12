class RscDiarySignals: RscDiaryBase
{
	idc = 20773;
	onLoad = "[""onLoad"",_this,""RscDiarySignals"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiarySignals"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDiarySignals";
	scriptPath = "ContactCommon";
	class Controls: Controls
	{
		class ButtonClose: ButtonClose {};
		class Debug: RscButton
		{
			colorBackground[] = {0.375, 0.25, 0.5, 1};
			colorBackgroundActive[] = {0.75, 0.5, 1, 1};
			colorFocused[] = {0.375, 0.25, 0.5, 1};
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onButtonClick = "				_show = !(uinamespace getvariable ['RscDiarySignals_showAll',false]);				uinamespace setvariable ['RscDiarySignals_showAll',_show];				with uinamespace do {['refresh',(ctrlparent (_this # 0)),''] call RscDiarySignals_script;};				if (_show) then {(_this # 0) ctrlsettext 'DEBUG ON';} else {(_this # 0) ctrlsettext 'DEBUG OFF';};			";
			onLoad = "				if !(cheatsenabled) then {(_this # 0) ctrlshow false;};				if (uinamespace getvariable ['RscDiarySignals_showAll',false]) then {(_this # 0) ctrlsettext 'DEBUG ON';} else {(_this # 0) ctrlsettext 'DEBUG OFF';};			";
			shadow = 0;
			text = "DEBUG ON";
			w = "4.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Signals: RscControlsTable
		{
			firstIDC = 307700;
			h = "(		((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))) - 3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 207732;
			lastIDC = 308700;
			lineSpacing = "0.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight = "((		20 - 2) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) / 	8)";
			selectedRowColorFrom[] = {0, 0, 0, 0};
			selectedRowColorTo[] = {0, 0, 0, 0};
			w = "(		20 - 2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class HeaderTemplate {};
			class RowTemplate
			{
				class Column1
				{
					columnW = 0;
					columnX = 0;
					controlBaseClassPath[] = {"RscDiarySignals", "SignalProgress"};
					controlH = 0;
					controlOffsetY = 0;
				};
				class Column2
				{
					columnW = "((		20 - 2.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					columnX = 0;
					controlBaseClassPath[] = {"RscDiarySignals", "SignalSound"};
					controlH = "((		20 - 2) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) / 	8)";
					controlOffsetY = 0;
				};
				class Column3
				{
					columnW = "((		20 - 2.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					columnX = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					controlBaseClassPath[] = {"RscDiarySignals", "SignalText"};
					controlH = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					controlOffsetY = "(	((		20 - 2) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) / 	8) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
				};
				class Column4
				{
					columnW = "((		20 - 2.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 	8";
					columnX = "((		20 - 2.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * (0.95 - 1 / 	8)";
					controlBaseClassPath[] = {"RscDiarySignals", "SignalPlay"};
					controlH = "((		20 - 2) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) / 	8)";
					controlOffsetY = 0;
				};
				class Column5
				{
					columnW = "((		20 - 2.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					columnX = 0;
					controlBaseClassPath[] = {"RscDiarySignals", "SignalDuration"};
					controlH = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					controlOffsetY = "((		20 - 2) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) / 	8) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class RowBackground
				{
					columnW = "((		20 - 2.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
					columnX = 0;
					controlBaseClassPath[] = {"RscDiarySignals", "SignalBackground"};
					controlH = "((		20 - 2) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) / 	8)";
					controlOffsetY = 0;
				};
			};
		};
		class Title: Title
		{
			text = "SIGNALS";
		};
		class TitleBackground: TitleBackground {};
	};
	class SignalBackground: RscText
	{
		colorBackground[] = {1, 1, 1, 0.1};
	};
	class SignalDuration: RscText
	{
		colorText[] = {1, 1, 1, 0.5};
		shadow = 0;
		sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		style = 1;
	};
	class SignalPlay: RscCheckBox
	{
		textureChecked = "\a3\Ui_f\data\Map\Markers\Military\box_CA.paa";
		textureDisabledChecked = "\a3\Ui_f\data\Map\Markers\Military\box_CA.paa";
		textureDisabledUnchecked = "\a3\3DEN\Data\Attributes\ComboPreview\play_ca.paa";
		textureFocusedChecked = "\a3\Ui_f\data\Map\Markers\Military\box_CA.paa";
		textureFocusedUnchecked = "\a3\3DEN\Data\Attributes\ComboPreview\play_ca.paa";
		textureHoverChecked = "\a3\Ui_f\data\Map\Markers\Military\box_CA.paa";
		textureHoverUnchecked = "\a3\3DEN\Data\Attributes\ComboPreview\play_ca.paa";
		texturePressedChecked = "\a3\Ui_f\data\Map\Markers\Military\box_CA.paa";
		texturePressedUnchecked = "\a3\3DEN\Data\Attributes\ComboPreview\play_ca.paa";
		textureUnchecked = "\a3\3DEN\Data\Attributes\ComboPreview\play_ca.paa";
	};
	class SignalProgress: RscText
	{
		colorBackground[] = {1, 1, 1, 0.1};
	};
	class SignalSound: RscPicture
	{
		colorText[] = {1, 1, 1, 0.2};
	};
	class SignalText: RscStructuredText
	{
		colorBackground[] = {0, 0, 0, 1};
		shadow = 0;
		sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
};
