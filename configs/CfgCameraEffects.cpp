class CfgCameraEffects
{
	class Array
	{
		class External: Fixed
		{
			duration = 5;
			file = "";
			name = "External";
			type = 0;
		};
		class Fixed: Interpolated
		{
			duration = 10;
			name = "Fixed";
			type = 1;
		};
		class FixedWithZoom: Fixed
		{
			duration = 10;
			name = "Fixed (Zoom)";
			type = 2;
		};
		class Internal
		{
			name = "Internal";
			show = 2;
			type = 5;
		};
		class Terminate
		{
			name = "Terminate";
			show = 0;
			type = 4;
		};
	};
	class Chain
	{
		show = 2;
		type = 3;
	};
	class Exact: Interpolated
	{
		scale = -1;
	};
	class Interpolated
	{
		duration = 5;
		scale = 0.1;
		show = 2;
		spline = 1;
		type = 0;
	};
};
