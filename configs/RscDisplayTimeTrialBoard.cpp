class RscDisplayTimeTrialBoard: RscDisplayFiringRangeBoard
{
	idd = 50502;
	onLoad = "['uiOnLoad', [_this select 0]] call BIS_fnc_timeTrial;";
	class controls
	{
		class BackgroundTitle: IGUIBack
		{
			colorBackground[] = {1, 0.8, 0.4, 0.5};
			h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 30099;
			w = "36 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonOk: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Table: RscListNBox
		{
			colorSelect2[] = {0.95, 0.95, 0.95, 1};
			colorSelectBackground[] = {1, 1, 1, 0.25};
			colorSelectBackground2[] = {1, 1, 1, 0.25};
			colorText[] = {0, 0, 0, 1};
			columns[] = {0, 0.33, 0.66};
			h = "21 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 29399;
			w = "36 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
};
