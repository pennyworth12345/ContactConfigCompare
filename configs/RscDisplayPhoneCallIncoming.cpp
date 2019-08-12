class RscDisplayPhoneCallIncoming
{
	enableSimulation = 1;
	idd = -1;
	onLoad = "[""onLoad"",_this,""RscDisplayPhoneCallIncoming"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayPhoneCallIncoming"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayPhoneCallIncoming";
	scriptPath = "OrangeDisplays";
	class Controls
	{
		class Call: RscControlsGroup
		{
			h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 38125;
			w = "18 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 - 9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 - 2.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Controls
			{
				class Avatar: RscPicture
				{
					h = "3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 37026;
					text = "#(argb,8,8,3)color(1,1,1,1)";
					w = "3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Background: RscText
				{
					colorBackground[] = {0.3, 0.3, 0.3, 1};
					h = "5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 36825;
					w = "18 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class BackgroundCancel: RscPicture
				{
					colorText[] = {0.9, 0, 0, 1};
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 37028;
					text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\buttonBackground_ca.paa";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "15.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class BackgroundOK: RscPicture
				{
					colorText[] = {0.18, 0.72, 0.18, 1};
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 37027;
					text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\buttonBackground_ca.paa";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "13 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class IconCancel: IconOK
				{
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 37030;
					text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\cancel_ca.paa";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "15.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class IconOK: RscActivePicture
				{
					color[] = {1, 1, 1, 1};
					default = 1;
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 37029;
					shadow = 0;
					text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\ok_ca.paa";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "13 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Logo: RscPicture
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 37025;
					text = "\a3\UI_F_Orange\Data\RscTitles\RscPhoneCall\logo_ca.paa";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Name: RscText
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 36827;
					shadow = 0;
					sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "%1 calling";
					w = "13 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Title: RscText
				{
					colorBackground[] = {0.2, 0.2, 0.2, 1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 36826;
					w = "18 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
};
