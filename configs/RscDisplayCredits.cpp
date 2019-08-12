class RscDisplayCredits: RscStandardDisplay
{
	idd = 34;
	class controls
	{
		class B_Cancel: RscActiveText
		{
			idc = 2;
			text = "Cancel";
			w = 0.2;
			x = 0.4;
			y = 0.9;
		};
		class Text1: RscText
		{
			idc = 50001;
			style = 2;
			text = "Engine";
			w = 1;
			x = 0;
			y = 0.4;
		};
		class Text2: Text1
		{
			idc = 50002;
			sizeEx = 0.027;
			text = "© 2007 Bohemia Interactive Studio";
			y = 0.45;
		};
		class Text3: Text1
		{
			idc = 50003;
			sizeEx = 0.027;
			text = "All rights reserved";
			y = 0.48;
		};
	};
};
