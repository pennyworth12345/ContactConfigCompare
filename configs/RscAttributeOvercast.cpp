class RscAttributeOvercast: RscControlsGroupNoScrollbars
{
	h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 22492;
	onSetFocus = "[_this,""RscAttributeOvercast"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21192;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21194;
			text = "Weather";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value000: RscActivePicture
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21392;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\clear_ca.paa";
			tooltip = "Clear";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value025: Value000
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21393;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\cloudly_ca.paa";
			tooltip = "Cloudy";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value050: Value000
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21394;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\overcast_ca.paa";
			tooltip = "Overcast";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value075: Value000
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21395;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\rainy_ca.paa";
			tooltip = "Rainy";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Value100: Value000
		{
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 21396;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\stormy_ca.paa";
			tooltip = "Stormy";
			w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "22.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
