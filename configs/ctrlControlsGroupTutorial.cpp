class ctrlControlsGroupTutorial: ctrlControlsGroupNoScrollbars
{
	h = 0;
	w = "(	80 + 1) * (pixelW * pixelGrid * 	0.50)";
	class Controls
	{
		class Background: ctrlStatic
		{
			colorBackground[] = {1, 0.9, 0.4, 1};
			h = "40 * (pixelH * pixelGrid * 	0.50)";
			idc = 323232;
			w = "80 * (pixelW * pixelGrid * 	0.50)";
		};
		class ButtonBack: ctrlActivePicture
		{
			color[] = {0, 0, 0, 0.1};
			h = "6 * (pixelH * pixelGrid * 	0.50)";
			idc = 323236;
			text = "\a3\3DEN\Data\ControlsGroups\Tutorial\back_ca.paa";
			w = "6 * (pixelW * pixelGrid * 	0.50)";
			x = "1 * (pixelW * pixelGrid * 	0.50)";
			y = "(40 - 	6 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonClose: ctrlActivePicture
		{
			color[] = {0, 0, 0, 1};
			h = "3 * (pixelH * pixelGrid * 	0.50)";
			idc = 323235;
			text = "\a3\3DEN\Data\ControlsGroups\Tutorial\close_ca.paa";
			w = "3 * (pixelW * pixelGrid * 	0.50)";
			x = "(	80 - 	3 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "(pixelH * pixelGrid * 	0.50)";
		};
		class ButtonExit: ButtonBack
		{
			color[] = {0, 0, 0, 1};
			h = "6 * (pixelH * pixelGrid * 	0.50)";
			idc = 323238;
			text = "\a3\3DEN\Data\ControlsGroups\Tutorial\exit_ca.paa";
			w = "6 * (pixelW * pixelGrid * 	0.50)";
			x = "(	80 - 	6 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "(40 - 	6 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonNext: ButtonBack
		{
			color[] = {0, 0, 0, 1};
			h = "6 * (pixelH * pixelGrid * 	0.50)";
			idc = 323237;
			text = "\a3\3DEN\Data\ControlsGroups\Tutorial\next_ca.paa";
			w = "6 * (pixelW * pixelGrid * 	0.50)";
			x = "(	80 - 	6 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "(40 - 	6 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Page: ctrlStatic
		{
			colorText[] = {0, 0, 0, 0.2};
			h = "6 * (pixelH * pixelGrid * 	0.50)";
			idc = 323234;
			shadow = 0;
			style = 2;
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			y = "(40 - 	6 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Shadow: ctrlStatic
		{
			colorBackground[] = {0, 0, 0, 0.75};
			h = "40 * (pixelH * pixelGrid * 	0.50)";
			idc = 323231;
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			x = "3 * pixelW";
			y = "3 * pixelH";
		};
		class Text: ctrlStructuredText
		{
			h = "20 * (pixelH * pixelGrid * 	0.50)";
			idc = 323233;
			shadow = 0;
			w = "(	80 - 2 * 	3) * (pixelW * pixelGrid * 	0.50)";
			x = "3 * (pixelW * pixelGrid * 	0.50)";
			y = "(	3 + 1) * (pixelH * pixelGrid * 	0.50)";
			class Attributes: Attributes
			{
				color = "#000000";
				colorLink = "#0000ff";
			};
		};
	};
};
