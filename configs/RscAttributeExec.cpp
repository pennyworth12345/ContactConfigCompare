class RscAttributeExec: RscControlsGroupNoScrollbars
{
	adminOnly = 1;
	h = "4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 14666;
	onSetFocus = "[_this,""RscAttributeExec"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13366;
			text = "Execute";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value: RscEdit
		{
			autocomplete = "scripting";
			font = "EtelkaMonospacePro";
			h = "3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13766;
			shadow = 0;
			sizeEx = "0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 16;
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ValueTemplate: RscCombo
		{
			font = "EtelkaMonospacePro";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 14466;
			sizeEx = "0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "16 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			wholeHeight = "4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
