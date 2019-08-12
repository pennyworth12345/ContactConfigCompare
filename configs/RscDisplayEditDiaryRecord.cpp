class RscDisplayEditDiaryRecord
{
	access = 0;
	idd = 125;
	movingEnable = 1;
	class Controls
	{
		class CA_B_Cancel: RscShortcutButton
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 2;
			text = "Cancel";
			w = "7 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "13 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_B_OK: RscShortcutButton
		{
			default = 1;
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1;
			text = "OK";
			w = "7 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "16 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "13 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_EditTitle: RscEdit
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 102;
			w = "13 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "7.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_Record: RscEdit
		{
			h = "3.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 101;
			w = "13 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_RecordTitle: RscTitle
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1000;
			text = "Add record";
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground
	{
		class BcgCommon: RscBackgroundGUI
		{
			backgroundType = 0;
			h = "8 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11000;
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class BcgCommonBottom: RscBackgroundGUIBottom
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11001;
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2) +  			8 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) 		 - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonLeft: RscBackgroundGUILeft
		{
			backgroundType = 0;
			h = "8 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11200;
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class BcgCommonRight: RscBackgroundGUIRight
		{
			backgroundType = 0;
			h = "8 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11201;
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class BcgCommonTop: RscBackgroundGUITop
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11002;
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "9 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			h = "safezoneH";
			idc = 115099;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
			class Controls
			{
				class Background: RscText
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "safezoneH";
					idc = 114999;
					w = "safezoneWAbs";
					x = 0;
					y = 0;
				};
			};
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
