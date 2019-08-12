class RscDisplayMissionLoad
{
	idd = 122;
	movingEnable = 1;
	class Controls
	{
		class B_Cancel: B_OK
		{
			default = 0;
			idc = 2;
			text = "Cancel";
			x = 0.39;
		};
		class B_OK: RscButton
		{
			default = 1;
			h = 0.104575;
			idc = 1;
			text = "OK";
			w = 0.18;
			x = 0.2;
			y = 0.52;
		};
		class C_Island: RscCombo
		{
			h = 0.03;
			idc = 101;
			sizeEx = 0.03;
			w = 0.24;
			wholeHeight = 0.24;
			x = 0.325;
			y = 0.4;
		};
		class C_Mission: C_Island
		{
			idc = 102;
			y = 0.45;
		};
		class T_Background: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = 0.3;
			w = 0.4;
			x = 0.175;
			y = 0.32;
		};
		class T_Island: RscText
		{
			h = 0.03;
			sizeEx = 0.03;
			text = "Map:";
			w = 0.14;
			x = 0.18;
			y = 0.4;
		};
		class T_Mission: T_Island
		{
			text = "Mission:";
			y = 0.45;
		};
		class T_Title: RscTitle
		{
			style = 0;
			text = "Load mission";
			w = 0.4;
			x = 0.175;
			y = 0.33;
		};
	};
};
