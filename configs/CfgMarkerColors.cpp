class CfgMarkerColors
{
	class Color1_FD_F: Default
	{
		color[] = {0.694118, 0.2, 0.223529, 1};
		name = "Red (Firing Drills)";
		scope = 0;
	};
	class Color2_FD_F: Default
	{
		color[] = {0.678431, 0.74902, 0.513726, 1};
		name = "Green (Firing Drills)";
		scope = 0;
	};
	class Color3_FD_F: Default
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		name = "Orange (Firing Drills)";
		scope = 0;
	};
	class Color4_FD_F: Default
	{
		color[] = {0.403922, 0.545098, 0.607843, 1};
		name = "Blue (Firing Drills)";
		scope = 0;
	};
	class Color5_FD_F: Default
	{
		color[] = {0.690196, 0.25098, 0.654902, 1};
		name = "Purple (Firing Drills)";
		scope = 0;
	};
	class ColorBlack: Default
	{
		color[] = {0, 0, 0, 1};
		name = "Black";
		scope = 2;
	};
	class ColorBlue: Default
	{
		color[] = {0, 0, 1, 1};
		name = "Blue";
		scope = 2;
	};
	class colorBLUFOR: ColorWEST
	{
		scope = 0;
	};
	class ColorBrown: Default
	{
		color[] = {0.5, 0.25, 0, 1};
		name = "Brown";
	};
	class ColorCIV: Default
	{
		color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", "(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
		name = "Civilian";
		scope = 2;
	};
	class colorCivilian: ColorCIV
	{
		scope = 0;
	};
	class ColorEAST: Default
	{
		color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
		name = "OPFOR";
		scope = 2;
	};
	class ColorGreen: Default
	{
		color[] = {0, 0.8, 0, 1};
		name = "Green";
		scope = 2;
	};
	class ColorGrey: Default
	{
		color[] = {0.5, 0.5, 0.5, 1};
		name = "Grey";
	};
	class ColorGUER: Default
	{
		color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", "(profilenamespace getvariable ['Map_Independent_A',0.8])"};
		name = "Independent";
		scope = 2;
	};
	class colorIndependent: ColorGUER
	{
		scope = 0;
	};
	class ColorKhaki: Default
	{
		color[] = {0.5, 0.6, 0.4, 1};
		name = "Khaki";
	};
	class colorOPFOR: ColorEAST
	{
		scope = 0;
	};
	class ColorOrange: Default
	{
		color[] = {0.85, 0.4, 0, 1};
		name = "Orange";
	};
	class ColorPink: Default
	{
		color[] = {1, 0.3, 0.4, 1};
		name = "Pink";
	};
	class ColorRed: Default
	{
		color[] = {0.9, 0, 0, 1};
		name = "Red";
		scope = 2;
	};
	class ColorUNKNOWN: Default
	{
		color[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])", "(profilenamespace getvariable ['Map_Unknown_G',1])", "(profilenamespace getvariable ['Map_Unknown_B',1])", "(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
		name = "Unknown side";
		scope = 2;
	};
	class ColorWEST: Default
	{
		color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
		name = "BLUFOR";
		scope = 2;
	};
	class ColorWhite: Default
	{
		color[] = {1, 1, 1, 1};
		name = "White";
		scope = 2;
	};
	class ColorYellow: Default
	{
		color[] = {0.85, 0.85, 0, 1};
		name = "Yellow";
		scope = 2;
	};
	class Default
	{
		color[] = {0, 0, 0, 1};
		name = "Default";
		scope = 1;
	};
};
