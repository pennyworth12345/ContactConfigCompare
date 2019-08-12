class RscAttributeInventory: RscControlsGroupNoScrollbars
{
	h = "17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 25168;
	onSetFocus = "[_this,""RscAttributeInventory"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
	y = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
	class controls
	{
		class ArrowLeft: RscButtonMenu
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24468;
			text = "-";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "-1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Attributes
			{
				align = "center";
				color = "#ffffff";
				font = "RobotoCondensed";
				shadow = "false";
			};
			class TextPos
			{
				bottom = 0;
				left = 0;
				right = 0;
				top = 0;
			};
		};
		class ArrowRight: ArrowLeft
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24469;
			text = "+";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "-1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter0: RscActivePicture
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24068;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_0_ca.paa";
			tooltip = "Current";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter1: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24069;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_1_ca.paa";
			tooltip = "Rifles";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter10: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24078;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_10_ca.paa";
			tooltip = "Backpacks";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter11: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24079;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_11_ca.paa";
			tooltip = "Headgear";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter12: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24080;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_12_ca.paa";
			tooltip = "Items";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "24 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter2: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24070;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_2_ca.paa";
			tooltip = "Machineguns";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter3: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24071;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_3_ca.paa";
			tooltip = "Sniper Rifles";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter4: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24072;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_4_ca.paa";
			tooltip = "Launchers";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter5: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24073;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_5_ca.paa";
			tooltip = "Handguns";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter6: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24074;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_6_ca.paa";
			tooltip = "Misc Weapons";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter7: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24075;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_7_ca.paa";
			tooltip = "Weapon Accessories";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter8: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24076;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_8_ca.paa";
			tooltip = "Uniforms";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Filter9: Filter0
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24077;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_9_ca.paa";
			tooltip = "Vests";
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "18 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class FilterBackground: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23870;
			w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "-2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class List: RscListNBox
		{
			colorSelect2[] = {0.95, 0.95, 0.95, 1};
			colorSelectBackground[] = {1, 1, 1, 0.25};
			colorSelectBackground2[] = {1, 1, 1, 0.25};
			columns[] = {0.05, 0.15, 0.85, 0.85};
			drawSideArrows = 1;
			h = "13.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 24368;
			idcLeft = 24468;
			idcRight = 24469;
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListBackground: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "13.498 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23869;
			w = "26.0092 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Load: RscProgress
		{
			colorBackground[] = {1, 1, 1, 0.75};
			colorBar[] = {0.9, 0.9, 0.9, 0.9};
			colorExtBar[] = {1, 1, 1, 1};
			colorFrame[] = {1, 1, 1, 1};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23868;
			texture = "";
			textureExt = "";
			w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "16 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
