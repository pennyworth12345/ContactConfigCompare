class RscDisplayInterruptEditor3D: RscStandardDisplay
{
	idd = 49;
	class controls
	{
		class B_Cancel: B_Edit2D
		{
			default = 1;
			idc = 2;
			text = "Continue";
			y = 0.76;
		};
		class B_Edit2D: RscButton
		{
			default = 0;
			h = 0.04;
			idc = 113;
			text = "Edit in 2D map";
			x = 0.35;
			y = 0.2;
		};
		class B_Options: B_Edit2D
		{
			idc = 101;
			text = "Options";
			y = 0.52;
		};
		class B_Preview: B_Edit2D
		{
			idc = 115;
			text = "Preview";
			y = 0.28;
		};
		class B_Quit: B_Edit2D
		{
			idc = 104;
			text = "Quit";
			y = 0.68;
		};
		class B_Restart: B_Edit2D
		{
			idc = 105;
			text = "Restart";
			y = 0.36;
		};
		class Title: RscTitle
		{
			text = "3D editing mode";
		};
	};
};
