class RscDisplayChat
{
	idd = 24;
	class controls
	{
		class CA_Background: RscText
		{
			colorBackground[] = {0.6275, 0.6275, 0.6275, 0.33};
			colorText[] = {0, 0, 0, 1};
			h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "SafeZoneW - 0.26 - 0.015";
			x = "SafeZoneX + 0.3365";
			y = "(SafeZoneH + SafeZoneY) - 0.034";
		};
		class CA_Line: RscEdit
		{
			autocomplete = "general";
			colorBackground[] = {0.6275, 0.6275, 0.6275, 0.33};
			colorText[] = {1, 1, 1, 1};
			h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			idc = 101;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "";
			w = "SafeZoneW - 0.3365 - 0.015";
			x = "SafeZoneX + 0.3365";
			y = "(SafeZoneH + SafeZoneY) - 0.034";
		};
	};
};
