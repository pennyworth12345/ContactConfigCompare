class RscMainMenuSpotlight: RscControlsGroupNoScrollbars
{
	fade = 1;
	h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
	w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
	x = "0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 	(2 * pixelW)";
	y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
	class Controls
	{
		class Button: RscButton
		{
			colorBackground[] = {0, 0, 0, 0};
			colorBackgroundActive[] = {0, 0, 0, 0};
			colorBackgroundDisabled[] = {0, 0, 0, 0};
			colorDisabled[] = {0, 0, 0, 0};
			colorFocused[] = {0, 0, 0, 0};
			h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 1026;
			w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = 0;
			y = 0;
		};
		class GroupHover: RscControlsGroupNoScrollbars
		{
			fade = 1;
			h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 1025;
			w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = 0;
			y = 0;
			class Controls
			{
				class LineBottom: LineTop
				{
					h = "pixelH";
					y = "10 * 	(pixelH * pixelGridNoUIScale * 2) - pixelH";
				};
				class LineLeft: RscText
				{
					colorBackground[] = {1, 1, 1, 1};
					h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
					w = "pixelW";
					x = 0;
					y = 0;
				};
				class LineRight: LineLeft
				{
					x = "10 * 	(pixelW * pixelGridNoUIScale * 2) - pixelW";
				};
				class LineTop: LineLeft
				{
					colorText[] = {0, 0, 0, 1};
					font = "PuristaLight";
					h = "(pixelH * pixelGrid * 2)";
					idc = 1027;
					onLoad = "(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
					shadow = 0;
					sizeEx = "(pixelH * pixelGrid * 2)";
					style = 0;
					w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
					x = 0;
					y = 0;
				};
				class Overlay: RscPicture
				{
					colorText[] = {0, 0, 0, 0.5};
					h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\hover_ca.paa";
					w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
					x = 0;
					y = 0;
				};
			};
		};
		class GroupPicture: RscControlsGroupNoScrollbars
		{
			h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
			w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = 0;
			y = 0;
			class Controls
			{
				class Picture: RscPictureKeepAspect
				{
					h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
					idc = 1023;
					text = "#(argb,8,8,3)color(1,0,1,1)";
					w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
					x = 0;
					y = 0;
				};
				class Video: RscVideo
				{
					h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
					idc = 1024;
					show = 0;
					w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
					x = 0;
					y = 0;
				};
			};
		};
		class Text: RscStructuredText
		{
			h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 1028;
			shadow = 2;
			size = "1.00 * 	(pixelH * pixelGridNoUIScale * 2)";
			w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = 0;
			y = 0;
			class Attributes
			{
				align = "center";
				color = "#ffffff";
				font = "PuristaBold";
			};
		};
		class TextBackground: RscPicture
		{
			colorText[] = {0, 0, 0, 0.5};
			h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
			idc = 1029;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_backgroundText_ca.paa";
			w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
			x = 0;
			y = 0;
		};
	};
};
