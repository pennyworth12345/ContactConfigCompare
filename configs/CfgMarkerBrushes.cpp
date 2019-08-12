class CfgMarkerBrushes
{
	class BDiagonal: Solid
	{
		name = "Backward diagonal";
		texture = "\A3\ui_f\data\map\markerbrushes\bdiagonal_ca.paa";
	};
	class Border: Solid
	{
		drawBorder = 1;
		name = "Border";
		texture = "#(argb,8,8,3)color(0,0,0,0)";
	};
	class Cross: Solid
	{
		name = "Cross";
		texture = "\A3\ui_f\data\map\markerbrushes\cross_ca.paa";
	};
	class DiagGrid: Solid
	{
		name = "Grid diagonal";
		texture = "\A3\ui_f\data\map\markerbrushes\diaggrid_ca.paa";
	};
	class FDiagonal: Solid
	{
		name = "Forward diagonal";
		texture = "\A3\ui_f\data\map\markerbrushes\fdiagonal_ca.paa";
	};
	class Grid: Solid
	{
		name = "Grid";
		texture = "\A3\ui_f\data\map\markerbrushes\grid_ca.paa";
	};
	class Horizontal: Solid
	{
		name = "Horizontal";
		texture = "\A3\ui_f\data\map\markerbrushes\horizontal_ca.paa";
	};
	class Solid
	{
		drawBorder = 0;
		name = "Solid";
		scope = 1;
		texture = "";
	};
	class SolidBorder: Solid
	{
		drawBorder = 1;
		name = "Solid border";
	};
	class SolidFull: Solid
	{
		name = "Solid non-transparent";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class Vertical: Solid
	{
		name = "Vertical";
		texture = "\A3\ui_f\data\map\markerbrushes\vertical_ca.paa";
	};
};
