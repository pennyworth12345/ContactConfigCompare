class RscDisplayRevert: RscStandardDisplay
{
	idd = 66;
	class controls
	{
		class Question: RscText
		{
			h = 0.5;
			idc = 103;
			style = 2;
			text = "You are attempting to revert to an earlier point in your campaign. Information about your progress and any saves after this point will be lost.";
			w = 0.4;
			x = 0.54;
			y = 0.35;
		};
		class Title: RscTitle
		{
			idc = 102;
			text = "Are you sure?";
		};
	};
};
