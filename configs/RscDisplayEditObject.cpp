class RscDisplayEditObject
{
	idd = 121;
	class Button: RscButton
	{
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		w = 0.47;
		x = 0.21;
	};
	class Combo: RscCombo
	{
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		sizeEx = 0.025;
		w = 0.47;
		wholeHeight = 0.45;
		x = 0.21;
		y = 0;
	};
	class Controls
	{
		class B_Cancel: B_OK
		{
			default = 0;
			idc = 2;
			text = "Cancel";
			x = "SafeZoneX + 0.25 + 0.39";
		};
		class B_OK: RscButton
		{
			default = 1;
			h = 0.104575;
			idc = 1;
			text = "OK";
			w = 0.18;
			x = "SafeZoneX + 0.25 + 0.2";
			y = "0.915-0.05";
		};
		class G_ControlsGroup: RscControlsGroup
		{
			h = 0.73;
			idc = 101;
			w = 0.71;
			x = "SafeZoneX + 0.25 + 0.02";
			y = 0.15;
			class Controls {};
		};
		class T_Background: RscText
		{
			colorBackground[] = {0.2, 0.2, 0.2, 1};
			h = 0.9;
			w = 0.71;
			x = "SafeZoneX + 0.25 + 0.02";
			y = 0.08;
		};
		class T_Title: RscTitle
		{
			style = "0x20 + 0x02";
			text = "Object properties";
			w = 0.71;
			x = "SafeZoneX + 0.25 + 0.02";
			y = 0.09;
		};
		class Title: RscText
		{
			h = 0.025;
			idc = -1;
			sizeEx = 0.025;
			style = "0x20 + 0x02 + 0x00";
			text = "";
			w = 0.19;
			x = "SafeZoneX + 0.25 + 0.02";
			y = 0;
		};
	};
	class Edit: RscEdit
	{
		colorSelection[] = {1, 1, 1, 0.25};
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		sizeEx = 0.025;
		text = "";
		w = 0.47;
		x = 0.21;
		y = 0;
	};
	class Picture: RscPicture
	{
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Preview: RscPicture
	{
		h = 0.24;
		sizeEx = 0.025;
		style = 48;
		text = "";
		w = 0.18;
		x = 0.02;
		y = 0.03;
	};
	class Slider: RscXSliderH
	{
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		w = 0.47;
		x = 0.21;
		y = 0;
	};
	class Title: RscText
	{
		colorBackground[] = {0, 0, 0, 0};
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		sizeEx = 0.025;
		style = 1;
		text = "";
		w = 0.18;
		x = 0.02;
		y = 0;
	};
	class Tree: RscTree
	{
		h = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		sizeEx = 0.025;
		w = 0.47;
		x = 0.21;
		y = 0;
	};
};
