class RscDisplayDebriefing_ItemTemplate
{
	idc = 21902;
	class ButtonPurchase: RscButtonMenuSteam
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 21999;
		text = "Purchase";
		w = "7.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "28.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "4.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemBackground: RscText
	{
		colorBackground[] = {0, 0, 0, 0.6};
		h = "4.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20623;
		shadow = 0;
		w = "36.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemBackgroundBlack: RscText
	{
		colorBackground[] = {0, 0, 0, 1};
		h = "5.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20624;
		shadow = 0;
		w = "27.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "8.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemDescription: RscDisplayDebriefing_RscTextMultiline
	{
		colorBackground[] = {0, 0, 0, 1};
		h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20630;
		shadow = 0;
		w = "19.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "8.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemDLCLogo: RscPictureKeepAspect
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20797;
		w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemName: RscText
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20625;
		shadow = 0;
		w = "19.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "8.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemPicture: RscPictureKeepAspect
	{
		h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20796;
		text = "\A3\Data_F_Kart\Images\watermarkInfo_page02_ca.paa";
		w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemSessionTime: RscText
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20627;
		shadow = 0;
		w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "28 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemTextSessionTime: RscText
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20626;
		shadow = 0;
		w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "28 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemTextTotalTime: RscText
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20628;
		shadow = 0;
		w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "28 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "2.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class ItemTotalTime: RscText
	{
		h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		idc = 20629;
		shadow = 0;
		w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		x = "28 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
};
