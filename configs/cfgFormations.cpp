class cfgFormations
{
	class Civ: West
	{
		class Diamond: Diamond {};
		class EchelonLeft: EchelonLeft {};
		class EcholonRight: EcholonRight {};
		class File: File {};
		class formColumnFixed: formColumnFixed {};
		class Line: Line {};
		class Staggered: Staggered {};
		class Vee: Vee {};
		class Wedge: Wedge {};
	};
	class East: West
	{
		class Diamond: Diamond {};
		class EchelonLeft: EchelonLeft {};
		class EcholonRight: EcholonRight {};
		class File: File {};
		class formColumnFixed: formColumnFixed {};
		class Line: Line {};
		class Staggered: Staggered {};
		class Vee: Vee {};
		class Wedge: Wedge {};
	};
	class Guer: West
	{
		class Diamond: Diamond {};
		class EchelonLeft: EchelonLeft {};
		class EcholonRight: EcholonRight {};
		class File: File {};
		class formColumnFixed: formColumnFixed {};
		class Line: Line {};
		class Staggered: Staggered {};
		class Vee: Vee {};
		class Wedge: Wedge {};
	};
	class West
	{
		class Diamond
		{
			class Fixed
			{
				FormationPositionInfo1[] = {-1, 0, 0, 0};
			};
			class Pattern
			{
				FormationPositionInfo1[] = {-1, 0.5, -0.5, 0.785398, 0};
				FormationPositionInfo2[] = {0, -1, 0, -0.785398, 0};
				FormationPositionInfo3[] = {1, 0.5, -0.5, 0, 0};
			};
		};
		class EchelonLeft
		{
			class Fixed
			{
				FormationPositionInfo1[] = {-1, 0, 0, 0};
				FormationPositionInfo2[] = {0, -1, -1, -0.785398};
				FormationPositionInfo3[] = {1, -1, -1, -0.785398};
				FormationPositionInfo4[] = {2, -1, -1, -1.5708};
			};
			class Pattern
			{
				FormationPositionInfo1[] = {-1, -1, -1, 0};
				FormationPositionInfo2[] = {0, -1, -1, -0.785398};
				FormationPositionInfo3[] = {1, -1, -1, -0.785398};
				FormationPositionInfo4[] = {2, -1, -1, -1.5708};
			};
		};
		class EcholonRight
		{
			class Fixed
			{
				FormationPositionInfo1[] = {-1, 0, 0, 0};
				FormationPositionInfo2[] = {0, 1, -1, 0.785398};
				FormationPositionInfo3[] = {1, 1, -1, 0.785398};
				FormationPositionInfo4[] = {2, 1, -1, 1.5708};
			};
			class Pattern
			{
				FormationPositionInfo1[] = {-1, 1, -1, 0};
				FormationPositionInfo2[] = {0, 1, -1, 0.785398};
				FormationPositionInfo3[] = {1, 1, -1, 0.785398};
				FormationPositionInfo4[] = {2, 1, -1, 1.5708};
			};
		};
		class File
		{
			class Fixed
			{
				FormationPositionInfo1[] = {-1, 0, 0, 0};
			};
			class Pattern
			{
				FormationPositionInfo1[] = {-1, 0, -0.5, -0.785398, 0};
				FormationPositionInfo2[] = {0, 0, -0.5, 0.785398, 0};
			};
		};
		class formColumnFixed
		{
			class Fixed
			{
				FormationPositionInfo1[] = {-1, 0, 0, 0};
				FormationPositionInfo2[] = {0, 0, -1, 0.785398};
				FormationPositionInfo3[] = {1, 0, -1, -0.785398};
				FormationPositionInfo4[] = {2, 0, -1, 3.14159};
			};
			class Pattern
			{
				FormationPositionInfo1[] = {-1, 0, -1, 0};
				FormationPositionInfo2[] = {0, 0, -1, 0.785398};
				FormationPositionInfo3[] = {1, 0, -1, -0.785398};
				FormationPositionInfo4[] = {2, 0, -1, 3.14159};
			};
		};
		class Line
		{
			class Fixed
			{
				FormationPositionInfo1[] = {-1, 0, 0, 0};
				FormationPositionInfo2[] = {0, 1, 0, 0};
			};
			class Pattern
			{
				FormationPositionInfo1[] = {-2, -1, 0, 0};
				FormationPositionInfo2[] = {-1, 1, 0, 0};
			};
		};
		class Staggered
		{
			class Fixed
			{
				FormationPositionInfo1[] = {-1, 0, 0, 0};
				FormationPositionInfo2[] = {0, 1, -1, 0.785398};
				FormationPositionInfo3[] = {1, -1, -1, -0.785398};
				FormationPositionInfo4[] = {2, 1, -1, 3.14159};
			};
			class Pattern
			{
				FormationPositionInfo1[] = {-1, -1, -1, 0};
				FormationPositionInfo2[] = {0, 1, -1, 0.785398};
				FormationPositionInfo3[] = {1, -1, -1, -0.785398};
				FormationPositionInfo4[] = {2, 1, -1, 3.14159};
			};
		};
		class Vee
		{
			class Fixed
			{
				FormationPositionInfo1[] = {-1, 0, 0, -0.785398};
				FormationPositionInfo2[] = {0, 1, 0, 0.785398};
			};
			class Pattern
			{
				FormationPositionInfo1[] = {-2, -1, 1, -0.785398};
				FormationPositionInfo2[] = {-1, 1, 1, 0.785398};
			};
		};
		class Wedge
		{
			class Fixed
			{
				FormationPositionInfo1[] = {-1, 0, 0, 0};
				FormationPositionInfo2[] = {0, 1, -1, 0.785398};
			};
			class Pattern
			{
				FormationPositionInfo1[] = {-2, -1, -1, -0.785398};
				FormationPositionInfo2[] = {-1, 1, -1, 0.785398};
			};
		};
	};
};
