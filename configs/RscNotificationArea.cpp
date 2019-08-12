class RscNotificationArea: RscControlsGroupNoScrollbars
{
	h = "6 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 312;
	w = "12 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "0 * 				(			((safezoneW / safezoneH) min 1.2) / 40) + 	(profilenamespace getvariable [""IGUI_GRID_NOTIFICATION_X"",	(0.5 - 6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "0 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 	(profilenamespace getvariable [""IGUI_GRID_NOTIFICATION_Y"",	(safezoneY + 6.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	class controls
	{
		class Notification: RscControlsGroupNoScrollbars
		{
			h = "3 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 13435;
			w = "12 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = 0;
			class controls
			{
				class Description: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "2 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 12235;
					sizeEx = "1 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "9.9 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.1 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.9 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						align = "center";
						size = 0.8;
					};
				};
				class DescriptionBackground: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.7};
					h = "2 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 12138;
					w = "9.9 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.1 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.9 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Picture: RscPictureKeepAspect
				{
					h = "1.8 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 12335;
					w = "1.8 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.1 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureBackground: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.7};
					h = "2 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 12136;
					w = "2 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.9 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Score: RscText
				{
					h = "2 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 12137;
					shadow = 0;
					sizeEx = "1.2 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					w = "2 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.9 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Title: RscText
				{
					colorBackground[] = {0, 0, 0, 0.7};
					h = "0.8 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 12135;
					sizeEx = "0.8 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 				(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 				(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
};
