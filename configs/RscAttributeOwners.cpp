class RscAttributeOwners: RscControlsGroupNoScrollbars
{
	h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 18708;
	onSetFocus = "[_this,""RscAttributeOwners"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 17408;
			w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BLUFOR: RscActivePicture
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 17608;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_west_ca.paa";
			tooltip = "BLUFOR";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Civilian: BLUFOR
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 17611;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa";
			tooltip = "Civilian";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroupList: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18508;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Independent: BLUFOR
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 17610;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa";
			tooltip = "Independent";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class OPFOR: BLUFOR
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 17609;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_east_ca.paa";
			tooltip = "OPFOR";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TabGroup: TabSide
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18011;
			text = "GROUP";
			w = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TabSide: RscButton
		{
			colorBackground[] = {1, 1, 1, 0};
			colorBackgroundActive[] = {1, 1, 1, 0.3};
			colorBackgroundDisabled[] = {1, 1, 1, 0.1};
			colorDisabled[] = {1, 1, 1, 1};
			colorFocused[] = {1, 1, 1, 0.1};
			font = "RobotoCondensedLight";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18010;
			period = 0;
			periodFocus = 0;
			periodOver = 0;
			shadow = 0;
			text = "SIDES";
			w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TabUnit: TabSide
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18012;
			text = "PLAYER";
			w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 17410;
			text = "Owners";
			w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class UnitList: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18509;
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
