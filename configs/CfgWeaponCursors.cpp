class CfgWeaponCursors
{
	class arifle: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\arifle_gs.paa";
		class Sections
		{
			class SectionBottom
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = "1 - 0";
				vMin = "1 - 0.45";
				xOffset = 0;
				yOffset = 30;
			};
			class SectionLeft
			{
				uMax = 0.45;
				uMin = 0;
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = -30;
				yOffset = 0;
			};
			class SectionRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.45";
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = 30;
				yOffset = 0;
			};
			class SectionTop
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = 0.45;
				vMin = 0;
				xOffset = 0;
				yOffset = -30;
			};
		};
	};
	class bomb: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\bomb_gs.paa";
	};
	class cannon: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\cannon_gs.paa";
	};
	class coil: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\coil_gs.paa";
		class Sections
		{
			class SectionLeft
			{
				uMax = 0.5;
				uMin = 0;
				vMax = 1;
				vMin = 0.5;
				xOffset = "-0.66 * 30";
				yOffset = "+0.33 * 30";
			};
			class SectionRight
			{
				uMax = 1;
				uMin = 0.5;
				vMax = 1;
				vMin = 0.5;
				xOffset = "+0.66 * 30";
				yOffset = "+0.33 * 30";
			};
			class SectionTop
			{
				uMax = 1;
				uMin = 0;
				vMax = 0.5;
				vMin = 0;
				xOffset = 0;
				yOffset = "-0.75 * 30";
			};
		};
	};
	class cursorAim: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\cursorAim_gs.paa";
	};
	class cursorAimOn: default
	{
		color[] = {0.706, 0.0745, 0.0196, 1};
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\cursorAimOn_gs.paa";
	};
	class default
	{
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		fade = 0.42;
		fadeRatioDamage = 0.5;
		fadeRatioFatigue = 0.5;
		shadowEnabled = 0;
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		class Sections {};
	};
	class EmptyCursor
	{
		color[] = {0, 0, 0, 0};
		fade = 0;
		shadowEnabled = 0;
		texture = "#(argb,8,8,3)color(0,0,0,0)";
		class Sections {};
	};
	class gl: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\gl_gs.paa";
		class Sections
		{
			class SectionBottom
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = "1 - 0";
				vMin = "1 - 0.375";
				xOffset = 0;
				yOffset = 30;
			};
			class SectionLeft
			{
				uMax = 0.375;
				uMin = 0;
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = -30;
				yOffset = 0;
			};
			class SectionRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.375";
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = 30;
				yOffset = 0;
			};
			class SectionTop
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = 0.375;
				vMin = 0;
				xOffset = 0;
				yOffset = -30;
			};
		};
	};
	class hgun: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\hgun_gs.paa";
		class Sections
		{
			class SectionBottom
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = "1 - 0";
				vMin = "1 - 0.45";
				xOffset = 0;
				yOffset = 20;
			};
			class SectionLeft
			{
				uMax = 0.45;
				uMin = 0;
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = -20;
				yOffset = 0;
			};
			class SectionRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.45";
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = 20;
				yOffset = 0;
			};
			class SectionTop
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = 0.45;
				vMin = 0;
				xOffset = 0;
				yOffset = -20;
			};
		};
	};
	class laserdesignator: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\laserdesignator_gs.paa";
	};
	class LawCursorCore
	{
		fade = 0.19;
		fadeRatioDamage = 0.5;
		fadeRatioFatigue = 0.5;
		texture = "";
		class Sections
		{
			class Section1
			{
				uMax = 0.328125;
				uMin = 0;
				vMax = 0.65625;
				vMin = 0.328125;
				xOffset = -30;
				yOffset = 0;
			};
			class Section2
			{
				uMax = 1;
				uMin = 0.65625;
				vMax = 0.65625;
				vMin = 0.328125;
				xOffset = 30;
				yOffset = 0;
			};
			class Section3
			{
				uMax = 0.65625;
				uMin = 0.328125;
				vMax = 0.328125;
				vMin = 0;
				xOffset = 0;
				yOffset = -30;
			};
			class Section4
			{
				uMax = 0.65625;
				uMin = 0.328125;
				vMax = 1;
				vMin = 0.65625;
				xOffset = 0;
				yOffset = 30;
			};
		};
	};
	class mg: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\mg_gs.paa";
		class Sections
		{
			class SectionBottom
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = "1 - 0";
				vMin = "1 - 0.45";
				xOffset = 0;
				yOffset = 30;
			};
			class SectionLeft
			{
				uMax = 0.45;
				uMin = 0;
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = -30;
				yOffset = 0;
			};
			class SectionRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.45";
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = 30;
				yOffset = 0;
			};
			class SectionTop
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = 0.45;
				vMin = 0;
				xOffset = 0;
				yOffset = -30;
			};
		};
	};
	class MGCursorCore
	{
		fade = 0.19;
		fadeRatioDamage = 0.5;
		fadeRatioFatigue = 0.5;
		texture = "";
		class Sections
		{
			class Section1
			{
				uMax = 0.328125;
				uMin = 0;
				vMax = 0.65625;
				vMin = 0.328125;
				xOffset = -25;
				yOffset = 0;
			};
			class Section2
			{
				uMax = 1;
				uMin = 0.65625;
				vMax = 0.65625;
				vMin = 0.328125;
				xOffset = 25;
				yOffset = 0;
			};
			class Section3
			{
				uMax = 0.65625;
				uMin = 0.328125;
				vMax = 1;
				vMin = 0.65625;
				xOffset = 0;
				yOffset = 25;
			};
		};
	};
	class missile: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\missile_gs.paa";
		class Sections
		{
			class SectionBottom
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = "1 - 0";
				vMin = "1 - 0.3";
				xOffset = 0;
				yOffset = 50;
			};
			class SectionLeft
			{
				uMax = 0.3;
				uMin = 0;
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = -50;
				yOffset = 0;
			};
			class SectionRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.3";
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = 50;
				yOffset = 0;
			};
			class SectionTop
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = 0.3;
				vMin = 0;
				xOffset = 0;
				yOffset = -50;
			};
		};
	};
	class mortar: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\mortar_gs.paa";
	};
	class put: default {};
	class RifleCursorCore
	{
		fade = 0.19;
		fadeRatioDamage = 0.5;
		fadeRatioFatigue = 0.5;
		texture = "";
		class Sections
		{
			class Section1
			{
				uMax = 0.328125;
				uMin = 0;
				vMax = 1;
				vMin = 0;
				xOffset = -20;
				yOffset = 0;
			};
			class Section2
			{
				uMax = 1;
				uMin = 0.65625;
				vMax = 1;
				vMin = 0;
				xOffset = 20;
				yOffset = 0;
			};
		};
	};
	class rocket: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\rocket_gs.paa";
		class Sections
		{
			class SectionBottomLeft
			{
				uMax = 0.5;
				uMin = 0;
				vMax = "1 - 0";
				vMin = "1 - 0.5";
				xOffset = -50;
				yOffset = 50;
			};
			class SectionBottomRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.5";
				vMax = "1 - 0";
				vMin = "1 - 0.5";
				xOffset = 50;
				yOffset = 50;
			};
			class SectionTopLeft
			{
				uMax = 0.5;
				uMin = 0;
				vMax = 0.5;
				vMin = 0;
				xOffset = -50;
				yOffset = -50;
			};
			class SectionTopRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.5";
				vMax = 0.5;
				vMin = 0;
				xOffset = 50;
				yOffset = -50;
			};
		};
	};
	class sgun: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\sgun_gs.paa";
		class Sections
		{
			class SectionBottom
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = "1 - 0";
				vMin = "1 - 0.45";
				xOffset = 0;
				yOffset = 30;
			};
			class SectionLeft
			{
				uMax = 0.45;
				uMin = 0;
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = -30;
				yOffset = 0;
			};
			class SectionRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.45";
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = 30;
				yOffset = 0;
			};
			class SectionTop
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = 0.45;
				vMin = 0;
				xOffset = 0;
				yOffset = -30;
			};
		};
	};
	class smg: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\smg_gs.paa";
		class Sections
		{
			class SectionBottom
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = "1 - 0";
				vMin = "1 - 0.45";
				xOffset = 0;
				yOffset = 20;
			};
			class SectionLeft
			{
				uMax = 0.45;
				uMin = 0;
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = -20;
				yOffset = 0;
			};
			class SectionRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.45";
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = 20;
				yOffset = 0;
			};
			class SectionTop
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = 0.45;
				vMin = 0;
				xOffset = 0;
				yOffset = -20;
			};
		};
	};
	class srifle: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\srifle_gs.paa";
		class Sections
		{
			class SectionBottom
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = "1 - 0";
				vMin = "1 - 0.45";
				xOffset = 0;
				yOffset = 30;
			};
			class SectionLeft
			{
				uMax = 0.45;
				uMin = 0;
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = -30;
				yOffset = 0;
			};
			class SectionRight
			{
				uMax = "1 - 0";
				uMin = "1 - 0.45";
				vMax = "0.5 + (1 / 2)";
				vMin = "0.5 - (1 / 2)";
				xOffset = 30;
				yOffset = 0;
			};
			class SectionTop
			{
				uMax = "0.5 + (1 / 2)";
				uMin = "0.5 - (1 / 2)";
				vMax = 0.45;
				vMin = 0;
				xOffset = 0;
				yOffset = -30;
			};
		};
	};
	class throw: default
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\throw_gs.paa";
	};
};
