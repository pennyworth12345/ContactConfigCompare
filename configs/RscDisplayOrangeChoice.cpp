class RscDisplayOrangeChoice
{
	enableSimulation = 1;
	idd = -1;
	onLoad = "[""onLoad"",_this,""RscDisplayOrangeChoice"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayOrangeChoice"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayOrangeChoice";
	scriptPath = "OrangeDisplays";
	class Controls
	{
		class AAF: NATO
		{
			h = "5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			idc = 24537;
			text = "\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_aaf_ca.paa";
			w = "5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			x = "25 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y = "9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
		};
		class BlackOut: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			fade = 1;
			h = "safezoneH";
			idc = 998;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class CSAT: NATO
		{
			h = "5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			idc = 24536;
			text = "\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_csat_ca.paa";
			w = "5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			x = "20 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y = "9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
		};
		class Description: RscStructuredText
		{
			h = "1 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			idc = 24434;
			w = "23 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			x = "8.5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y = "18 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
		};
		class DescriptionBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.25};
			fade = 1;
			h = "5.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			idc = 24335;
			w = "24 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			x = "8 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y = "17.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
		};
		class FIA: NATO
		{
			h = "5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			idc = 24535;
			text = "\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_fia_ca.paa";
			w = "5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			x = "15 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y = "9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
		};
		class Hover: RscPicture
		{
			colorText[] = {0, 0, 0, 0.1};
			fade = 1;
			h = "5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			idc = 24539;
			text = "\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\background_ca.paa";
			w = "5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			x = "5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y = "9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
		};
		class NATO: RscActivePicture
		{
			color[] = {1, 1, 1, 1};
			fade = 1;
			h = "5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			idc = 24534;
			shadow = 0;
			text = "\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_nato_ca.paa";
			w = "5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			x = "10 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y = "9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
		};
		class None: NATO
		{
			h = "5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			idc = 24538;
			text = "\a3\UI_F_Orange\Data\Displays\RscDisplayOrangeChoice\faction_none_ca.paa";
			w = "5 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			x = "30 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y = "9.5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
		};
		class Title: RscText
		{
			fade = 1;
			h = "2 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			idc = 24334;
			shadow = 0;
			sizeEx = "1.2 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25)";
			style = 2;
			text = "In your opinion, who's most to blame for all the suffering in Oreokastro?";
			w = "40 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40)";
			x = "0 * 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 40) + 	(0.5 - 	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 2)";
			y = "5 * 	(	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 25) + 	(0.5 - 	(	(((safezoneW / safezoneH) min 1.2) * safezoneH) / 1.2) / 2)";
		};
	};
	class ControlsBackground
	{
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 999;
			style = 16;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
	};
};
