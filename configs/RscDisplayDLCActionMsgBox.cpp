class RscDisplayDLCActionMsgBox
{
	enableDisplay = 1;
	idd = 169;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayDLCActionMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDLCActionMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayDLCActionMsgBox";
	scriptPath = "GUI";
	class controls
	{
		class DLCActionMessageBox: RscControlsGroup
		{
			h = "9.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "16.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class BackgroundImage: RscPicture
				{
					colorText[] = {1, 1, 1, 1};
					h = "8.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 100;
					text = "#(argb,8,8,3)color(0,0,0,0.6)";
					w = "16.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonClose: RscButtonMenuCancel
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "Close";
					w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonPurchase: RscButtonMenuSteam
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 103;
					shortcuts[] = {"1024+0x19"};
					text = "Purchase";
					w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "10.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Logo: RscPicture
				{
					h = "2.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 101;
					w = "2.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class LogoTextBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.6};
					colorText[] = {0, 0, 0, 0};
					h = "2.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1000;
					w = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Text: RscText
				{
					colorText[] = {1, 1, 1, 1};
					h = "2.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 102;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = "0x10+0x200";
					w = "13.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
	};
	class controlsBackground {};
};
