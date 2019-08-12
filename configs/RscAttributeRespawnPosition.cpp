class RscAttributeRespawnPosition: RscControlsGroupNoScrollbars
{
	h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 39809;
	onSetFocus = "[_this,""RscAttributeRespawnPosition"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			colorText[] = {1, 1, 1, 0.5};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 38509;
			style = 2;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Civ: West
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 38713;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeRespawnPosition\civ_ca.paa";
			tooltip = "Civilian";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Disabled: West
		{
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 38714;
			text = "\a3\Ui_F_Curator\Data\default_ca.paa";
			tooltip = "None";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class East: West
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 38711;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeRespawnPosition\east_ca.paa";
			tooltip = "OPFOR";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Guer: West
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 38712;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeRespawnPosition\guer_ca.paa";
			tooltip = "Independent";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "15.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 38511;
			text = "Respawn on object for";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class West: RscActivePicture
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 38710;
			text = "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeRespawnPosition\west_ca.paa";
			tooltip = "BLUFOR";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
