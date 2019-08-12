class Overlap: RscControlsGroup
{
	h = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 34265;
	w = "1.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Preview: RscPicture
		{
			h = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 33167;
			text = "a3\structures_f\training\data\Target_Zom_Acc1_CO";
			tooltip = "Silhouette";
			w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "-2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
