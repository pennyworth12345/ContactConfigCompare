class RscDiaryCategories: RscControlsGroupNoScrollbars
{
	h = "((	1.5 * 	2 + 4) * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	onLoad = "[""onLoad"",_this,""RscDiaryCategories"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiaryCategories"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDiaryCategories";
	scriptPath = "ContactCommon";
	w = "(	2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
	x = "safezoneX - pixelW";
	y = "0.5 - 0.5 * ((	1.5 * 	2 + 4) * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	class Controls
	{
		class Categories: RscToolbox
		{
			colorBackground[] = {0.02, 0.02, 0, 0.65};
			colorSelectedBg[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.5};
			colorTextSelect[] = {1, 1, 1, 1};
			columns = 1;
			h = "1.5 * 	2 * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2076;
			onToolBoxSelChanged = "with uinamespace do {['categoryChanged',_this + [true],''] call RscDiaryCategories_script;}";
			rows = 2;
			strings[] = {"\a3\UI_F_Contact\Data\Common\RscDiaryCategories\categories_quests_ca.paa", "\a3\UI_F_Contact\Data\Common\RscDiaryCategories\categories_notes_ca.paa"};
			style = "0x02 + 0x30 + 0x800";
			tooltips[] = {"Objectives", "Notes"};
			values[] = {20771, 20772};
			w = "1.05 * 	(	2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "pixelW -0.05 * 	(	2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "2 * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class GradientBottom: GradientTop
		{
			angle = 0;
			y = "(	1.5 * 	2 + 2) * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class GradientTop: RscPicture
		{
			angle = 180;
			colorText[] = {0.02, 0.02, 0, 0.65};
			h = "2 * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryCategories\gradient_gs.paa";
			w = "(	2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "pixelW";
			y = 0;
		};
	};
};
