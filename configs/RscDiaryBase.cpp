class RscDiaryBase: RscControlsGroupNoHScrollbars
{
	h = "((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	show = 0;
	w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = 0;
	y = 0;
	class Controls
	{
		class ButtonClose: RscActivePicture
		{
			color[] = {1, 1, 1, 0.5};
			colorActive[] = {1, 1, 1, 1};
			colorDisabled[] = {0, 0, 0, 0};
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onButtonClick = "-1 call bin_fnc_selectDiaryCategory;";
			onLoad = "_ctrl = _this # 0; if (ctrlidd ctrlparent _ctrl != 12) then {_ctrl ctrlenable false; _ctrl ctrlsetfade 1; _ctrl ctrlcommit 0;}";
			shadow = 0;
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryGroup\button_close_ca.paa";
			w = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(		20 - 1.75) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			font = "RobotoCondensedBold";
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			shadow = 0;
			sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = "0x02 + 0xC0";
			w = "(		20 - 2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TitleBackground: RscPicture
		{
			colorText[] = {0, 0, 0, 0.5};
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "\a3\UI_F_Contact\Data\Common\RscDiaryGroup\title_ca.paa";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = 0;
		};
		class WIP: RscText
		{
			colorText[] = {1, 1, 1, 0.25};
			h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			shadow = 0;
			sizeEx = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "WIP";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = "((safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (28 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / 2 - 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
