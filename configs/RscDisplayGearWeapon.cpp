class RscDisplayGearWeapon: RscStandardDisplay
{
	idd = "IDD_GEAR_SELECT";
	class controls
	{
		class B_CANCEL: B_Drop
		{
			default = 1;
			idc = 2;
			text = "Cancel";
			x = 0.9;
		};
		class B_Drop: RscActiveText
		{
			default = 1;
			idc = "IDC_GEAR_SELECT_DROP";
			text = "Drop";
			w = 0.15;
			x = 0.25;
			y = 0.9;
		};
		class B_OK: B_Drop
		{
			default = 1;
			idc = 1;
			text = "OK";
			x = 0.85;
		};
		class Overview: RscHTML
		{
			align = "center";
			h = 0.68;
			idc = "IDC_GEAR_SELECT_OVERVIEW";
			w = 0.422;
			x = 0.523;
			y = 0.2;
		};
		class Title: RscTitle
		{
			idc = "IDC_GEAR_SELECT_TITLE";
		};
		class Weapon: RscListBox
		{
			h = 0.6;
			idc = "IDC_GEAR_SELECT_LIST";
			rowHeight = 0.065;
			style = 16;
			w = 0.44;
			x = 0.07;
			y = 0.2;
		};
	};
};
