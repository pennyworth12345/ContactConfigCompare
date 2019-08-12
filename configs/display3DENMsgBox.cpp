class display3DENMsgBox
{
	idd = -1;
	movingEnable = 2;
	onKeyDown = "if ((_this select 1) == 0x2E && (_this select 3)) then {copytoclipboard ctrltext ((_this select 0) displayctrl 101);};";
	class Bottom
	{
		class BottomBackground: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 2/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 1/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		class Background: ctrlStaticBackground
		{
			h = "(3 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			idc = 103;
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + 	5 * (pixelH * pixelGrid * 	0.50)";
		};
		class BottomBackground: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			idc = 105;
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 2/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 1/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class Picture: ctrlStaticPictureKeepAspect
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 104;
			text = "\a3\3DEN\Data\Displays\Display3DENMsgBox\picture_ca.paa";
			w = "10 * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + (2) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Text: ctrlStructuredText
		{
			idc = 101;
			w = "(	75 - 2 * 	5 - 8) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + (	5 + 8) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (2 *  	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 102;
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50)))";
		};
	};
	class Middle
	{
		class Background: ctrlStaticBackground
		{
			h = "(3 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + 	5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Picture: ctrlStaticPictureKeepAspect
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "\a3\3DEN\Data\Displays\Display3DENMsgBox\picture_ca.paa";
			w = "10 * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + (2) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Text: ctrlStructuredText
		{
			idc = 101;
			w = "(	75 - 2 * 	5 - 8) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + (	5 + 8) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (2 *  	5) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Top
	{
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50)))";
		};
	};
};
