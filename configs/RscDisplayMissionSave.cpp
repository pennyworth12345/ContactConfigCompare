class RscDisplayMissionSave
{
	idd = 123;
	movingEnable = 1;
	class Controls
	{
		class B_Cancel: B_OK
		{
			default = 0;
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Cancel";
			w = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "12.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class B_OK: RscButton
		{
			default = 1;
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			text = "OK";
			w = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "16 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "12.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class C_Placement: RscCombo
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 104;
			sizeEx = 0.03;
			w = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			wholeHeight = 0.24;
			x = "12 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class E_Mission: RscEdit
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 101;
			sizeEx = 0.03;
			w = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "12 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class T_Mission: RscText
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1002;
			sizeEx = 0.03;
			text = "Mission:";
			w = "3.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "8.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class T_Placement: T_Mission
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1003;
			text = "Export:";
			w = "3.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "8.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class T_Title: RscTitle
		{
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1001;
			style = 0;
			text = "Save mission";
			w = "16 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground
	{
		class T_Background: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "7 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			w = "16 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
};
