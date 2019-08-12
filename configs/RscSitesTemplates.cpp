class RscSitesTemplates
{
	spacing = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class CA_Combo: RscCombo
	{
		h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = -1;
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		w = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		wholeHeight = "7 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class CA_Edit: RscEdit
	{
		h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = -1;
		size = 0.2;
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		w = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class CA_Label: RscText
	{
		colorBackground[] = {0, 0, 0, 0.2};
		h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = -1;
		onKillFocus = "with uinamespace do {['argument_focus',_this + [false],''] call RscDisplayArcadeModules_script;};";
		onMouseButtonClick = "with uinamespace do {['argument_mouseButtonClick',_this,''] spawn RscDisplayArcadeModules_script;};";
		onMouseEnter = "with uinamespace do {['argument_focus',_this + [true],''] call RscDisplayArcadeModules_script;};";
		onMouseExit = "with uinamespace do {['argument_focus',_this + [false],''] call RscDisplayArcadeModules_script;};";
		onSetFocus = "with uinamespace do {['argument_focus',_this + [true],''] call RscDisplayArcadeModules_script;};";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		style = "0x01 + 0x10";
		text = "TEST TEST TEST";
		w = "8.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
};
