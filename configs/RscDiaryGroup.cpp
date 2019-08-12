class RscDiaryGroup: RscControlsGroupNoScrollbars
{
	h = "((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) + (	0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
	idc = 2077;
	onLoad = "[""onLoad"",_this,""RscDiaryGroup"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiaryGroup"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDiaryGroup";
	scriptPath = "ContactCommon";
	w = "(		20 + 	0.5) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "safezoneX + 	(	2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
	y = "0.5 - 		((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / 2";
	class Controls
	{
		class Antennas: RscDiaryAntennas {};
		class Background: RscPicture
		{
			colorBackground[] = {0.2, 0.2, 0.2, 1};
			h = "((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryGroup\background_ca.paa";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = 0;
		};
		class Manual: RscDiaryManual {};
		class Notes: RscDiaryNotes {};
		class Shadow_Bottom: Shadow_Right
		{
			h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryGroup\shadow_bottom_ca.paa";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = "((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
		};
		class Shadow_Bottom_Right: Shadow_Right
		{
			h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryGroup\shadow_bottom_right_ca.paa";
			w = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
		};
		class Shadow_Right: RscPicture
		{
			h = "((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryGroup\shadow_right_ca.paa";
			w = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = 0;
		};
		class Signals: RscDiarySignals {};
		class Tasks: RscDiaryTasks {};
		class Wait: RscDiaryWait {};
	};
};
