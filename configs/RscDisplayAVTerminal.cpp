class RscDisplayAVTerminal
{
	IDD = 160;
	onLoad = "[""onLoad"",_this,""RscDisplayAVTerminal"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAVTerminal"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	saveParams = 1;
	scriptName = "RscDisplayAVTerminal";
	scriptPath = "IGUI";
	showPremiumLock = "A3\Ui_f\data\GUI\Rsc\RscDisplaySingleMission\mission_notowned_ca.paa";
	class controls
	{
		class AmmoPrimary: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 111;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "ammoNr";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "13.55 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AmmoSecondary: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 113;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "15.55 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_CheckBox_Autonomous: RscCheckBox
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 116;
			w = "1 * 	(safezoneW / 64)";
			x = "12.9 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "5.25 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_CheckBox_Lights: RscCheckBox
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 118;
			w = "1 * 	(safezoneW / 64)";
			x = "12.9 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "6.25 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Combo_SelectAV: RscCombo
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 117;
			sizeEx = "0.028*SafezoneH";
			w = "13.5 * 	(safezoneW / 64)";
			x = "0.3 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "3.1 * 	(safezoneH / 40) + 	(safezoneY)";
			class ExtendedTooltip: RscStructuredText
			{
				colorPremium[] = {1, 0.502, 0, 1};
				size = "0.028 * SafezoneH";
			};
		};
		class AVT_Info_Back: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "19.9 * 	(safezoneH / 40)";
			idc = 1021;
			w = "14 * 	(safezoneW / 64)";
			x = "0 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "2 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_PIP1: RscPicture
		{
			h = "8.5 * 	(safezoneH / 40)";
			idc = 105;
			text = "#(argb,512,512,1)r2t(avterminalpip0,1.0)";
			w = "13.6 * 	(safezoneW / 64)";
			x = "50.2 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "3.2 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_PIP1_Back: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			colorText[] = {1, 1, 1, 0.2};
			h = "8.5 * 	(safezoneH / 40)";
			idc = 1024;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			style = 2;
			text = "No connection";
			w = "13.6 * 	(safezoneW / 64)";
			x = "50.2 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "3.2 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_PIP2: RscPicture
		{
			h = "8.5 * 	(safezoneH / 40)";
			idc = 106;
			text = "#(argb,512,512,1)r2t(avterminalpip1,1.0)";
			w = "13.6 * 	(safezoneW / 64)";
			x = "50.2 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "13.1 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_PIP2_Back: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			colorText[] = {1, 1, 1, 0.2};
			h = "8.5 * 	(safezoneH / 40)";
			idc = 1025;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			style = 2;
			text = "No connection";
			w = "13.6 * 	(safezoneW / 64)";
			x = "50.2 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "13.1 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_PIP_Back: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "19.9 * 	(safezoneH / 40)";
			idc = 1023;
			w = "14 * 	(safezoneW / 64)";
			x = "50 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "2 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_ALT: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "ALT:";
			w = "2.6 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "20.7 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_Autonomous: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "Autonomous:";
			w = "12.9 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "5.25 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_AZT: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "AZT:";
			w = "2.6 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "18.7 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_FUEL: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "FUEL:";
			w = "2.6 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "9.4 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_Lights: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "Allow Lights:";
			w = "12.9 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "6.25 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_POS: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "POS:";
			w = "2.6 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "17.7 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_SelectAV: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "Select AV:";
			w = "13.3 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "2.1 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_SPD: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "SPD:";
			w = "2.6 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "19.7 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_STAT: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "STAT:";
			w = "2.8 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "8.4 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_TGT: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "TGT:";
			w = "2.6 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "10.4 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Text_WPN: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "WPN:";
			w = "2.6 * 	(safezoneW / 64)";
			x = "-0.1 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "12.55 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Title: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "2 * 	(safezoneH / 40)";
			idc = -1;
			shadow = 0;
			sizeEx = "0.038*SafezoneH";
			style = 2;
			text = "AV Terminal";
			w = "64 * 	(safezoneW / 64)";
			x = "0 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "0 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Value_Fuel: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 109;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "9.4 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Value_Position: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 104;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "posGrid";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "17.7 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Value_Status: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 102;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "AVStatus";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "8.4 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class AVT_Value_Target: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 103;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "tgtName";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "10.4 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class Button_ControlDriver: RscButtonMenu
		{
			colorBackground[] = {0, 0, 0, 0.8};
			h = "1 * 	(safezoneH / 40)";
			idc = 114;
			size = "1 * 	(safezoneH / 40)";
			text = "Control Driver";
			w = "13.6 * 	(safezoneW / 64)";
			x = "50.2 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "2.2 * 	(safezoneH / 40) + 	(safezoneY)";
			class Attributes
			{
				align = "center";
				color = "#E5E5E5";
				font = "RobotoCondensedLight";
				shadow = "false";
			};
			class TextPos
			{
				bottom = 0;
				left = 0;
				right = 0.005;
				top = "(1*	(safezoneH / 40) - (0.028*SafezoneH)) / 2";
			};
		};
		class Button_ControlGunner: RscButtonMenu
		{
			colorBackground[] = {0, 0, 0, 0.8};
			h = "1 * 	(safezoneH / 40)";
			idc = 115;
			size = "1 * 	(safezoneH / 40)";
			text = "Control Gunner";
			w = "13.6 * 	(safezoneW / 64)";
			x = "50.2 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "12.1 * 	(safezoneH / 40) + 	(safezoneY)";
			class Attributes
			{
				align = "center";
				color = "#E5E5E5";
				font = "RobotoCondensedLight";
				shadow = "false";
			};
			class TextPos
			{
				bottom = 0;
				left = 0;
				right = 0.005;
				top = "(1*	(safezoneH / 40) - (0.028*SafezoneH)) / 2";
			};
		};
		class CA_Alt: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 122;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "altNr";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "20.7 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class CA_Heading: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 148;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "aztNr";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "18.7 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class CA_Speed: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 121;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "spdNr";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "19.7 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class HintGroup: RscHintGroup
		{
			x = "50 * 	(safezoneW / 64) + 	(safezoneX) - 		(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "3.2 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class WeaponPrimary: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 110;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			text = "wpnName";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "12.55 * 	(safezoneH / 40) + 	(safezoneY)";
		};
		class WeaponSecondary: RscText
		{
			h = "1 * 	(safezoneH / 40)";
			idc = 112;
			shadow = 0;
			sizeEx = "0.028*SafezoneH";
			w = "11 * 	(safezoneW / 64)";
			x = "2.7 * 	(safezoneW / 64) + 	(safezoneX)";
			y = "14.55 * 	(safezoneH / 40) + 	(safezoneY)";
		};
	};
	class controlsBackground
	{
		class CA_Black: CA_Black_Back {};
		class CA_Map: RscMapControl
		{
			h = "SafeZoneH - (2 * 	(safezoneH / 40))";
			w = "SafeZoneWAbs";
			x = "SafeZoneXAbs";
			y = "SafeZoneY + (2 * 	(safezoneH / 40))";
		};
	};
};
