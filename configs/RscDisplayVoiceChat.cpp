class RscDisplayVoiceChat
{
	idd = 55;
	class controls
	{
		class Background: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			colorText[] = {0, 0, 0, 1};
			h = 0.034;
			text = "";
			w = 0.0255;
			x = "SafeZoneX";
			y = "(SafeZoneH + SafeZoneY) - 0.034";
		};
		class Picture: RscPicture
		{
			colorText[] = {1, 1, 1, 1};
			h = 0.025;
			idc = 101;
			text = "\A3\ui_f\data\igui\rscingameui\rscdisplayvoicechat\microphone_ca.paa";
			w = 0.01875;
			x = "SafeZoneX + 0.00525";
			y = "(SafeZoneH + SafeZoneY) - 0.025 - 0.0045";
		};
	};
};
