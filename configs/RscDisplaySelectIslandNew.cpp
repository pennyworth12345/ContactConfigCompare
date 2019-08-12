class RscDisplaySelectIslandNew: RscStandardDisplay
{
	idd = 351;
	class controls
	{
		class B_Cancel: RscActiveText
		{
			idc = 2;
			text = "Cancel";
			w = 0.25;
			x = 0.59;
			y = 0.9;
		};
		class B_Editor: RscActiveText
		{
			idc = 105;
			text = "Old-style editor";
			w = 0.3;
			x = 0.01;
			y = 0.9;
		};
		class B_OK: B_Cancel
		{
			default = 1;
			idc = 104;
			text = "OK";
			w = 0.15;
			x = 0.84;
		};
		class Islands: RscListBox
		{
			h = 0.6;
			idc = 101;
			rows = 8;
			w = 0.95;
			x = 0.025;
			y = 0.2;
		};
		class Title: RscTitle
		{
			text = "Select map";
		};
	};
};
