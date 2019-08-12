class RscMapControlTooltip: RscControlsGroupNoScrollbars
{
	h = 0;
	idc = 2350;
	w = 0;
	x = -1;
	y = -1;
	class Controls
	{
		class Assets: RscStructuredText
		{
			h = 1;
			idc = 235004;
			w = 1;
			x = 1;
			y = 1;
		};
		class AssetsBackground: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = 1;
			idc = 235003;
			w = 1;
			x = 1;
			y = 1;
		};
		class Background: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = 1;
			idc = 235000;
			w = 1;
			x = 1;
			y = 1;
		};
		class Info: RscStructuredText
		{
			h = 1;
			idc = 235002;
			w = 1;
			x = 1;
			y = 1;
		};
		class InfoBackground: RscStructuredText
		{
			colorBackground[] = {1, 1, 1, 0.15};
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 235001;
			w = 1;
			x = 0;
			y = 0;
		};
		class PictureBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = 1;
			idc = 235005;
			w = 1;
			x = 1;
			y = 1;
		};
		class PictureX: RscPictureKeepAspect
		{
			autoplay = 1;
			h = 0;
			idc = 235006;
			loops = 1;
			w = 0;
			x = -1;
			y = -1;
		};
	};
};
