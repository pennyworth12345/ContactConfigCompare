class RscDisplayLocWeaponInfo
{
	enableSimulation = 0;
	idd = 2727;
	onLoad = "[""onLoad"",_this,""RscDisplayLocWeaponInfo"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLocWeaponInfo"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayLocWeaponInfo";
	scriptPath = "GUI";
	class controls
	{
		class Close: RscShortcutButton
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			text = "Close";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Header: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "WeaponInfo Localization";
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Magazines: RscListBox
		{
			h = "17.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1501;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class MagazinesClass: RscEdit
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1401;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class MagazinesEtalon: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "18.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1101;
			w = "17.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class MagazinesTitle: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "CfgMagazines";
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Weapons: RscListBox
		{
			h = "17.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1500;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class WeaponsClass: RscEdit
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1400;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "21.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class WeaponsEtalon: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "18.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1100;
			w = "17.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class WeaponsTitle: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "CfgWeapons";
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground
	{
		class BcgCommon: RscBackgroundGUI
		{
			backgroundType = 0;
			h = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11000;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class BcgCommonBottom: RscBackgroundGUIBottom
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11001;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2) +  			23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) 		 - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonDark: RscBackgroundGUIDark
		{
			backgroundType = 0;
			h = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11100;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class BcgCommonLeft: RscBackgroundGUILeft
		{
			backgroundType = 0;
			h = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11200;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class BcgCommonRight: RscBackgroundGUIRight
		{
			backgroundType = 0;
			h = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 11201;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class BcgCommonTop: RscBackgroundGUITop
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11002;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
};
