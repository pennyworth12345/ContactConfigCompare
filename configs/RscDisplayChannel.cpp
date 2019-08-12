class RscDisplayChannel
{
	idd = 63;
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			colorText[] = {0, 0, 0, 1};
			h = 0.12;
			text = "";
			w = 0.311;
			x = "0.0255 + SafeZoneX";
			y = "(SafeZoneH + SafeZoneY) - 0.034";
		};
		class CA_Channel: RscText
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 101;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 0;
			w = 0.26;
			x = "0.0765 + SafeZoneX";
			y = "(SafeZoneH + SafeZoneY) - 0.034";
		};
		class MuteChat: RscActiveText
		{
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 0.7};
			h = 0.034;
			idc = 104;
			style = 48;
			text = "\A3\Ui_f\Data\IGUI\RscIngameUI\RscDisplayChannel\MuteChat_ca.paa";
			textMuted = "\A3\Ui_f\Data\IGUI\RscIngameUI\RscDisplayChannel\MuteChat_crossed_ca.paa";
			w = 0.0255;
			x = "SafeZoneX + 0.051";
			y = "(SafeZoneH + SafeZoneY) - 0.034";
		};
		class MuteVON: RscActiveText
		{
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 0.7};
			h = 0.034;
			idc = 103;
			style = 48;
			text = "\A3\Ui_f\Data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			textMuted = "\A3\Ui_f\Data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			w = 0.0255;
			x = "SafeZoneX + 0.0255";
			y = "(SafeZoneH + SafeZoneY) - 0.034";
		};
		class Picture: RscPicture
		{
			colorText[] = {1, 1, 1, 1};
			h = 0.05;
			idc = 102;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = 0.03;
			x = -10.01;
			y = 0.72;
		};
	};
};
