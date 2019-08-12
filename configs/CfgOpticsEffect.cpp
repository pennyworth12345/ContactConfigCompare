class CfgOpticsEffect
{
	class BWTV
	{
		params[] = {1, 2, -0.03, 0, 0, 0, 0, 1, 1, 1, 0, 0.199, 0.587, 0.114, 0};
		priority = 1550;
		type = "ColorCorrections";
	};
	class Default
	{
		params[] = {0, 0, 0};
		priority = 2550;
		type = "colorInversion";
	};
	class OpticsBlur1
	{
		params[] = {0.0025};
		priority = 450;
		type = "dynamicblur";
	};
	class OpticsBlur2
	{
		params[] = {0.005};
		priority = 450;
		type = "dynamicblur";
	};
	class OpticsBlur3
	{
		params[] = {0.01};
		priority = 450;
		type = "dynamicblur";
	};
	class OpticsCHAbera1
	{
		params[] = {0.004, 0.004, 1};
		priority = 250;
		type = "chromaberration";
	};
	class OpticsCHAbera2
	{
		params[] = {0.006, 0.006, 1};
		priority = 250;
		type = "chromaberration";
	};
	class OpticsCHAbera3
	{
		params[] = {0.008, 0.008, 1};
		priority = 250;
		type = "chromaberration";
	};
	class OpticsInverted
	{
		params[] = {1, 1, 1};
		priority = 2550;
		type = "colorInversion";
	};
	class TankCommanderOptics1
	{
		params[] = {0.05, 1, 1, 0.35, 1, 0};
		priority = 2050;
		type = "FilmGrain";
	};
	class TankGunnerOptics1
	{
		params[] = {1, 1, 0, 0, 0, 0, 0, 1, 1, 0.2, 0.6, 0.199, 0.587, 0.114, 0};
		priority = 1550;
		type = "ColorCorrections";
	};
	class TankGunnerOptics2
	{
		params[] = {1, 1, 0, 0, 0, 0, 0, 1, 1, 0.2, 0.8, 0.199, 0.25, 0.114, 0};
		priority = 1550;
		type = "ColorCorrections";
	};
	class WeaponsOptics
	{
		params[] = {0.05};
		priority = 450;
		type = "dynamicblur";
	};
};
