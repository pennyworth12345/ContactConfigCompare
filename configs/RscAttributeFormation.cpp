class RscAttributeFormation: RscControlsGroupNoScrollbars
{
	h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 24616;
	onSetFocus = "[_this,""RscAttributeFormation"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23316;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Column: Wedge
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23516;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeFormation\column_ca.paa";
			tooltip = "Column";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Default: Wedge
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23525;
			text = "\a3\ui_f_curator\Data\default_ca.paa";
			tooltip = "No change";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "22.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Diamond: Wedge
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23524;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeFormation\diamond_ca.paa";
			tooltip = "Diamond";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Ech_Left: Wedge
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23519;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeFormation\ech_left_ca.paa";
			tooltip = "Echelon L.";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Ech_Right: Wedge
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23520;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeFormation\ech_right_ca.paa";
			tooltip = "Echelon R.";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class File: Wedge
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23523;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeFormation\file_ca.paa";
			tooltip = "File";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Line: Wedge
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23522;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeFormation\line_ca.paa";
			tooltip = "Line";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Stag_Column: Wedge
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23517;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeFormation\stag_column_ca.paa";
			tooltip = "Staggered Col.";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23318;
			text = "Formation:";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Vee: Wedge
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23521;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeFormation\vee_ca.paa";
			tooltip = "Vee";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Wedge: RscActivePicture
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 23518;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeFormation\wedge_ca.paa";
			tooltip = "Wedge";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
