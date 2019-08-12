class RscMapCategories: RscControlsGroupNoScrollbars
{
	h = "((	1.5 * 	3 + 4) * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	idc = 2068;
	onLoad = "[""onLoad"",_this,""RscMapCategories"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscMapCategories"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscMapCategories";
	scriptPath = "ContactCommon";
	w = "(	2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
	x = "safezoneX + safezoneW - 	(	2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.99";
	y = "0.5 - 0.5 * ((	1.5 * 	3 + 4) * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	class Controls
	{
		class Categories: RscToolbox
		{
			colorBackground[] = {0.02, 0.02, 0, 0.65};
			colorSelectedBg[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.5};
			colorTextSelect[] = {1, 1, 1, 1};
			columns = 1;
			h = "1.5 * 	3 * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2078;
			onToolBoxSelChanged = "((_this # 0) lbvalue (_this # 1)) call bin_fnc_switchMap;";
			rows = 3;
			strings[] = {"\a3\UI_F_Contact\Data\Common\RscMapCategories\categories_map_ca.paa", "\a3\UI_F_Contact\Data\Common\RscMapCategories\categories_spectrum_ca.paa", "\a3\UI_F_Contact\Data\Common\RscMapCategories\categories_probe_ca.paa"};
			style = "0x02 + 0x30 + 0x800";
			tooltips[] = {"Topographic Map", "Electromagnetic Spectrum Map", "Underground Network Map"};
			values[] = {0, 1, 2};
			w = "1.00 * 	(	2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = 0;
			y = "2 * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class GradientBottom: GradientTop
		{
			angle = 0;
			y = "(	1.5 * 	3 + 2) * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class GradientTop: RscPicture
		{
			angle = 180;
			colorText[] = {0.02, 0.02, 0, 0.65};
			h = "2 * 	(	2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryCategories\gradient_gs.paa";
			w = "(	2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = 0;
			y = 0;
		};
	};
};
