class Display3DENRename
{
	enableDisplay = 1;
	enableSimulation = 1;
	idd = 320;
	class Controls
	{
		class Background: ctrlStaticBackground
		{
			h = "(4 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + 	5 * (pixelH * pixelGrid * 	0.50)";
		};
		class BottomBackground: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + (4 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 2/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + (4 * 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 1/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + (4 * 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class Name: ctrlEdit
		{
			h = "(	5) * (pixelH * pixelGrid * 	0.50)";
			idc = 101;
			w = "(	75 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + 	5 * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + (2 *  	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "Set Name";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50)))";
		};
	};
};
