class RscDisplayDLCPreview
{
	enableDisplay = 1;
	enableSimulation = 0;
	idd = -1;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayDLCPreview"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDLCPreview"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	pictureAchievement = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCPreview\Ach.jpg";
	scriptName = "RscDisplayDLCPreview";
	scriptPath = "GUI";
	class Controls
	{
		class ButtonClose: RscButtonMenuCancel
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Back";
			w = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonContinue: RscButtonMenuOK
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			show = 0;
			text = "Continue";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Screen: RscControlsGroup
		{
			h = "safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
			class Controls
			{
				class Author: RscText
				{
					colorText[] = {1, 1, 1, 0.5};
					font = "RobotoCondensedLight";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1008;
					show = 0;
					style = 2;
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "(safezoneW / 2) - 4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
				};
				class ButtonPurchase: RscButtonMenuSteam
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1007;
					text = "Purchase";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "(safezoneW / 2) - 4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
					class Attributes
					{
						align = "center";
						color = "#E5E5E5";
						font = "RobotoCondensed";
					};
				};
				class List: RscControlsGroupNoScrollbars
				{
					h = 0;
					idc = 1009;
					w = "38 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "(safezoneW / 2) - 0.5 * 		38 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
					class Controls {};
				};
				class Logo: RscPicture
				{
					h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1002;
					text = "\a3\Ui_f\data\Logos\arma3_white_ca.paa";
					w = "2 * 			6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "(safezoneW / 2) - 			6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Overview: RscStructuredText
				{
					h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1003;
					w = "30 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "(safezoneW / 2) - 0.5 * 		30 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2 + 			6) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					class Attributes
					{
						align = "center";
						color = "#ffffff";
						colorLink = "#ffffff";
						font = "RobotoCondensed";
						size = 1;
					};
				};
			};
		};
	};
	class ControlsBackground
	{
		class Background: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "safezoneH";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class BohemiaInteractive: RscPicture
		{
			h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1010;
			text = "\a3\Ui_f\data\Logos\bi_white_ca.paa";
			w = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1006;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY + safezoneH - 3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Interlacing: RscInterlacingScreen {};
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 999;
			style = 16;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class Picture: RscPicture
		{
			colorText[] = {1, 1, 1, 0.15};
			h = "safezoneW * 1024/724 * 4/3";
			idc = 1001;
			text = "\a3\Ui_f\data\Logos\arma3_bundle_artwork.jpg";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY - safezoneW * 0.1";
		};
		class Vinette: RscVignette
		{
			colorText[] = {0, 0, 0, 1};
		};
	};
};
