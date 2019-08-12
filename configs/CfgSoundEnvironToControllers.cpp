class CfgSoundEnvironToControllers
{
	class asphalt_exp: road {};
	class concrete: road {};
	class debris: gravel {};
	class default
	{
		asphalt = 0;
		grass = 0;
		gravel = 0;
		mud = 0;
		rock = 0;
		sand = 0;
	};
	class dirt: mud {};
	class dirt_exp: dirt {};
	class drygrass: grass {};
	class forest: default
	{
		grass = 0.75;
		mud = 0.25;
	};
	class forest_exp: forest {};
	class grass: default
	{
		grass = 1;
	};
	class grass_exp: grass {};
	class grasstall_exp: grass {};
	class gravel: default
	{
		gravel = 1;
	};
	class mud: default
	{
		mud = 1;
	};
	class normal: gravel {};
	class road: default
	{
		asphalt = 1;
	};
	class rock: default
	{
		rock = 1;
	};
	class sand: default
	{
		sand = 1;
	};
	class sand_exp: sand {};
	class stones_exp: rock {};
	class stony: default
	{
		grass = 0.5;
		gravel = 0.5;
		mud = 0.25;
	};
	class tarmac: road {};
};
