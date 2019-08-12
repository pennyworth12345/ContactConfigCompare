class RscAttributeOwners2: RscControlsGroupNoScrollbars
{
	h = "5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 19608;
	onSetFocus = "[_this,""RscAttributeOwners2"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Background1: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18308;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Background2: Background1
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18311;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BLUFOR1: RscActivePicture
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18508;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_west_ca.paa";
			tooltip = "BLUFOR";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BLUFOR2: BLUFOR1
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18512;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_west_ca.paa";
			tooltip = "BLUFOR";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.85 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Civilian1: BLUFOR1
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18511;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa";
			tooltip = "Civilian";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Civilian2: Civilian1
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18515;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa";
			tooltip = "Civilian";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.85 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Independent1: BLUFOR1
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18510;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa";
			tooltip = "Independent";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Independent2: Independent1
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18514;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa";
			tooltip = "Independent";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.85 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class OPFOR1: BLUFOR1
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18509;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_east_ca.paa";
			tooltip = "OPFOR";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class OPFOR2: OPFOR1
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18513;
			text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_east_ca.paa";
			tooltip = "OPFOR";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.85 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title1: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18310;
			text = "Owners";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title2: Title1
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 18309;
			text = "Owners";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
