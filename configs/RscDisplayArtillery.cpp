class RscDisplayArtillery: RscStandardDisplay
{
	enableSimulation = 1;
	idd = -1;
	movingEnable = 0;
	class controls
	{
		class ArtilleryAlt: ArtilleryGrid
		{
			idc = 509;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*17";
		};
		class ArtilleryAltText: ArtilleryGridText
		{
			text = "ALT";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*17";
		};
		class ArtilleryAmmo: ArtilleryGrid
		{
			idc = 515;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*20";
		};
		class ArtilleryAmmoText: ArtilleryGridText
		{
			text = "AMMO";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*20";
		};
		class ArtilleryDir: ArtilleryGrid
		{
			idc = 508;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*16";
		};
		class ArtilleryDirText: ArtilleryGridText
		{
			text = "DIR";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*16";
		};
		class ArtilleryDist: ArtilleryGrid
		{
			idc = 505;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*13";
		};
		class ArtilleryDistText: ArtilleryGridText
		{
			text = "DIST";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*13";
		};
		class ArtilleryETA: ArtilleryGrid
		{
			idc = 514;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*22";
		};
		class ArtilleryETAText: ArtilleryGridText
		{
			text = "ETA";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*22";
		};
		class ArtilleryGrid: ArtilleryName
		{
			idc = 504;
			sizeex = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			style = 1;
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2 - (			0.2*1.5 * 0.9 * 0.12)";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*12";
		};
		class ArtilleryGridText: RscText
		{
			sizeex = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			style = 0;
			text = "GRID";
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2 + (			0.2*1.5 * 0.9 * 0.12)";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*12";
		};
		class ArtilleryMaxRange: ArtilleryGrid
		{
			idc = 507;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*15";
		};
		class ArtilleryMaxRangeText: ArtilleryGridText
		{
			text = "MAX";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*15";
		};
		class ArtilleryMinRange: ArtilleryGrid
		{
			idc = 506;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*14";
		};
		class ArtilleryMinRangeText: ArtilleryGridText
		{
			text = "MIN";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*14";
		};
		class ArtilleryMode: RscCombo
		{
			idc = 510;
			w = "0.2*1.5 * 0.9";
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*8";
		};
		class ArtilleryModeText: ArtilleryGridText
		{
			text = "MODE:";
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2 - (			0.2*1.5 * 0.9 * 0.032)";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*7";
		};
		class ArtilleryName: RscText
		{
			h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			idc = 502;
			style = 2;
			text = "--";
			w = "0.2*1.5 * 0.9";
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*1.3";
		};
		class ArtilleryShells: ArtilleryGrid
		{
			idc = 512;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*19";
		};
		class ArtilleryShellsText: ArtilleryGridText
		{
			text = "BURST";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*19";
		};
		class ArtillerySpread: ArtilleryGrid
		{
			idc = 513;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*21";
		};
		class ArtillerySpreadText: ArtilleryGridText
		{
			text = "SPREAD";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*21";
		};
		class ArtilleryType: ArtilleryMode
		{
			idc = 511;
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*10";
		};
		class ArtilleryTypeText: ArtilleryGridText
		{
			text = "TYPE:";
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2 - (			0.2*1.5 * 0.9 * 0.032)";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*9";
		};
		class CA_ButtonContinue: RscButtonMenu
		{
			default = 0;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Back";
			w = "0.2*1.5 * 0.9";
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2";
			y = "SafeZoneY + SafezoneH - 0.0522876*1";
			class ShortcutPos: ShortcutPos
			{
				left = "0.2*1.5 * 0.9 - (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			};
			class TextPos
			{
				bottom = 0;
				left = "(			0.2*1.5 * 0.9 - (2.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))) / 2";
				right = 0.005;
				top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
			};
		};
		class CA_ButtonFire: RscButtonMenu
		{
			default = 1;
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 501;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			size = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "FIRE";
			w = "0.2*1.5 * 0.9";
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*4";
			class Attributes: Attributes
			{
				font = "PuristaSemiBold";
			};
			class ShortcutPos: ShortcutPos
			{
				left = "0.2*1.5 * 0.9 - (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				top = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class TextPos
			{
				bottom = 0;
				left = "(			0.2*1.5 * 0.9 - (2.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))) / 2";
				right = 0.005;
				top = "(2*			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / 2";
			};
		};
		class CA_Warning: CA_Title
		{
			colorText[] = {0.706, 0.0745, 0.0196, 1};
			idc = 516;
			style = 2;
			text = "CANNOT FIRE";
			w = "0.2*1.5 * 0.9";
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*6";
		};
		class IntelBack: CA_Back
		{
			colorText[] = {0.15, 0.15, 0.15, 0.7};
			h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)*3";
			w = "0.2*1.5 * 0.9";
			x = "(SafeZoneW + SafeZoneX) - 			0.2*1.5 * 0.9 - (	0.2*1.5 - 			0.2*1.5 * 0.9)/2";
			y = "safezoneY + (				(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))*0.4";
		};
		class Mainback: CA_Mainback
		{
			colortext[] = {0.15, 0.15, 0.15, 1};
			h = "SafeZoneH";
			text = "#(argb,8,8,3)color(1,1,1,1)";
			w = "0.2*1.5";
			x = "SafeZoneX + SafezoneW - 	0.2*1.5";
			y = "SafeZoneY";
		};
	};
	class controlsBackground
	{
		class CA_TSMap: RscMapControl
		{
			colorbackground[] = {1, 1, 1, 1};
			h = "safeZoneH";
			idc = 500;
			scaleDefault = 0.1;
			ShowCountourInterval = 0;
			type = 101;
			w = "safeZoneW - 	0.2*1.5";
			x = "SafeZoneX";
			y = "SafeZoneY";
		};
	};
};
