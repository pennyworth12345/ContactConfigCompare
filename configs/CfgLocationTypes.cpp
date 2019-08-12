class CfgLocationTypes
{
	class Airport: Strategic
	{
		importance = 20;
		name = "Airport";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class Area
	{
		color[] = {0, 0, 0, 0.5};
		drawStyle = "area";
		font = "PuristaMedium";
		name = "Area";
		shadow = 0;
		textSize = 0.05;
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class b_air: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
		name = "Helicopter";
		texture = "\A3\ui_f\data\map\markers\nato\b_air.paa";
	};
	class b_antiair: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_antiair.paa";
		name = "Anti-Air";
		texture = "\A3\ui_f\data\map\markers\nato\b_antiair.paa";
	};
	class b_armor: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
		name = "Armor";
		texture = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
	};
	class b_art: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
		name = "Artillery";
		texture = "\A3\ui_f\data\map\markers\nato\b_art.paa";
	};
	class b_hq: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
		name = "HQ";
		texture = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
	};
	class b_inf: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
		name = "Infantry";
		texture = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
	};
	class b_installation: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_installation.paa";
		name = "Installation";
		texture = "\A3\ui_f\data\map\markers\nato\b_installation.paa";
	};
	class b_maint: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
		name = "Maintenance";
		texture = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
	};
	class b_mech_inf: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
		name = "Mechanized";
		texture = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
	};
	class b_med: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
		name = "Medical";
		texture = "\A3\ui_f\data\map\markers\nato\b_med.paa";
	};
	class b_mortar: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
		name = "Mortar";
		texture = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
	};
	class b_motor_inf: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
		name = "Motorized";
		texture = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
	};
	class b_naval: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
		name = "Naval";
		texture = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
	};
	class b_plane: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
		name = "Plane";
		texture = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
	};
	class b_recon: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
		name = "Recon";
		texture = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
	};
	class b_service: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_service.paa";
		name = "Service";
		texture = "\A3\ui_f\data\map\markers\nato\b_service.paa";
	};
	class b_support: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
		name = "Support";
		texture = "\A3\ui_f\data\map\markers\nato\b_support.paa";
	};
	class b_uav: b_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\b_uav.paa";
		name = "UAV";
		texture = "\A3\ui_f\data\map\markers\nato\b_uav.paa";
	};
	class b_unknown: Flag
	{
		color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
		icon = "\A3\ui_f\data\map\markers\nato\b_unknown.paa";
		markerClass = "NATO_BLUFOR";
		name = "Unknown";
		scope = 1;
		shadow = 0;
		showEditorMarkerColor = 1;
		side = 1;
		size = 29;
		texture = "\A3\ui_f\data\map\markers\nato\b_unknown.paa";
	};
	class BorderCrossing: Hill
	{
		color[] = {0.78, 0, 0.05, 1};
		importance = 1;
		name = "Border Crossing";
		shadow = 0;
		size = 16;
		texture = "\A3\ui_f\data\map\locationtypes\bordercrossing_ca.paa";
	};
	class c_air: c_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\c_air.paa";
		name = "Helicopter";
		texture = "\A3\ui_f\data\map\markers\nato\c_air.paa";
	};
	class c_car: c_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\c_car.paa";
		name = "Car";
		texture = "\A3\ui_f\data\map\markers\nato\c_car.paa";
	};
	class c_plane: c_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\c_plane.paa";
		name = "Plane";
		texture = "\A3\ui_f\data\map\markers\nato\c_plane.paa";
	};
	class c_ship: c_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\c_ship.paa";
		name = "Ship";
		texture = "\A3\ui_f\data\map\markers\nato\c_ship.paa";
	};
	class c_unknown: b_unknown
	{
		color[] = {"color_Civilian", 1};
		icon = "\A3\ui_f\data\map\markers\nato\c_unknown.paa";
		markerClass = "NATO_Civilian";
		side = 1;
		texture = "\A3\ui_f\data\map\markers\nato\c_unknown.paa";
	};
	class CityCenter: Strategic
	{
		color[] = {0.25, 0.4, 0.2, 0};
		name = "Center of the village/town/city";
	};
	class CivilDefense: Strategic
	{
		color[] = {1, 1, 1, 1};
		font = "RobotoCondensed";
		icon = "\A3\ui_f_orange\data\cfgmarkers\civildefense.paa";
	};
	class CulturalProperty: Strategic
	{
		color[] = {1, 1, 1, 1};
		font = "RobotoCondensed";
		icon = "\A3\ui_f_orange\data\cfgmarkers\culturalproperty_ca.paa";
	};
	class DangerousForces: Strategic
	{
		color[] = {1, 1, 1, 1};
		font = "RobotoCondensed";
		icon = "\A3\ui_f_orange\data\cfgmarkers\dangerousforces_ca.paa";
	};
	class fakeTown: Name
	{
		size = 0;
	};
	class Flag: Hill {};
	class FlatArea: Strategic
	{
		name = "Flat area";
	};
	class FlatAreaCity: FlatArea
	{
		name = "Flat area in a city";
	};
	class FlatAreaCitySmall: FlatAreaCity
	{
		name = "Flat area in a city - small";
	};
	class group_0: b_unknown
	{
		color[] = {0, 0, 0, 1};
		commander = "Corporal";
		icon = "\A3\ui_f\data\map\markers\nato\group_0.paa";
		markerClass = "NATO_Sizes";
		name = "Fire Team";
		texture = "\A3\ui_f\data\map\markers\nato\group_0.paa";
	};
	class group_1: group_0
	{
		commander = "Sergeant";
		icon = "\A3\ui_f\data\map\markers\nato\group_1.paa";
		name = "Squad";
		texture = "\A3\ui_f\data\map\markers\nato\group_1.paa";
	};
	class group_10: group_0
	{
		commander = "General";
		icon = "\A3\ui_f\data\map\markers\nato\group_10.paa";
		name = "Army";
		texture = "\A3\ui_f\data\map\markers\nato\group_10.paa";
	};
	class group_11: group_0
	{
		commander = "General";
		icon = "\A3\ui_f\data\map\markers\nato\group_11.paa";
		name = "Army Group";
		texture = "\A3\ui_f\data\map\markers\nato\group_11.paa";
	};
	class group_2: group_0
	{
		commander = "Sergeant";
		icon = "\A3\ui_f\data\map\markers\nato\group_2.paa";
		name = "Section";
		texture = "\A3\ui_f\data\map\markers\nato\group_2.paa";
	};
	class group_3: group_0
	{
		commander = "Lieutenant";
		icon = "\A3\ui_f\data\map\markers\nato\group_3.paa";
		name = "Platoon";
		texture = "\A3\ui_f\data\map\markers\nato\group_3.paa";
	};
	class group_4: group_0
	{
		commander = "Captain";
		icon = "\A3\ui_f\data\map\markers\nato\group_4.paa";
		name = "Company";
		texture = "\A3\ui_f\data\map\markers\nato\group_4.paa";
	};
	class group_5: group_0
	{
		commander = "Colonel";
		icon = "\A3\ui_f\data\map\markers\nato\group_5.paa";
		name = "Battalion";
		texture = "\A3\ui_f\data\map\markers\nato\group_5.paa";
	};
	class group_6: group_0
	{
		commander = "Colonel";
		icon = "\A3\ui_f\data\map\markers\nato\group_6.paa";
		name = "Regiment";
		texture = "\A3\ui_f\data\map\markers\nato\group_6.paa";
	};
	class group_7: group_0
	{
		commander = "General";
		icon = "\A3\ui_f\data\map\markers\nato\group_7.paa";
		name = "Brigade";
		texture = "\A3\ui_f\data\map\markers\nato\group_7.paa";
	};
	class group_8: group_0
	{
		commander = "General";
		icon = "\A3\ui_f\data\map\markers\nato\group_8.paa";
		name = "Division";
		texture = "\A3\ui_f\data\map\markers\nato\group_8.paa";
	};
	class group_9: group_0
	{
		commander = "General";
		icon = "\A3\ui_f\data\map\markers\nato\group_9.paa";
		name = "Corps";
		texture = "\A3\ui_f\data\map\markers\nato\group_9.paa";
	};
	class HandDrawnCamp
	{
		color[] = {0, 0, 0, 1};
		drawStyle = "icon";
		font = "Caveat";
		name = "Name";
		shadow = 0;
		size = 32;
		textSize = 0.08;
		texture = "\a3\UI_F_Contact\Data\CfgLocationTypes\handDrawnCamp_ca.paa";
	};
	class HandDrawnPoint
	{
		color[] = {0, 0, 0, 1};
		drawStyle = "icon";
		font = "Caveat";
		name = "Name";
		shadow = 0;
		size = 32;
		textSize = 0.08;
		texture = "\a3\UI_F_Contact\Data\CfgMarkers\dot4_ca.paa";
	};
	class Hill: Name
	{
		color[] = {0.44, 0.38, 0.3, 1};
		drawStyle = "icon";
		font = "RobotoCondensed";
		importance = 2;
		name = "Hill";
		shadow = 0;
		size = 14;
		textSize = 0.04;
		texture = "\A3\ui_f\data\map\locationtypes\hill_ca.paa";
	};
	class HistoricalSite
	{
		color[] = {0, 0, 0, 0};
		drawStyle = "area";
		font = "RobotoCondensed";
		shadow = 0;
		textSize = 0;
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class Invisible
	{
		color[] = {0, 0, 0, 0};
		drawStyle = "area";
		font = "RobotoCondensed";
		shadow = 0;
		textSize = 0;
		texture = "#(argb,8,8,3)color(0,0,0,0)";
	};
	class Mount
	{
		color[] = {0, 0, 0, 1};
		drawStyle = "mount";
		font = "RobotoCondensed";
		name = "Mount";
		shadow = 1;
		size = 0;
		textSize = 0.04;
		texture = "";
	};
	class n_air: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
		name = "Helicopter";
		texture = "\A3\ui_f\data\map\markers\nato\n_air.paa";
	};
	class n_antiair: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_antiair.paa";
		name = "Anti-Air";
		texture = "\A3\ui_f\data\map\markers\nato\n_antiair.paa";
	};
	class n_armor: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
		name = "Armor";
		texture = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
	};
	class n_art: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_art.paa";
		name = "Artillery";
		texture = "\A3\ui_f\data\map\markers\nato\n_art.paa";
	};
	class n_hq: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
		name = "HQ";
		texture = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
	};
	class n_inf: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
		name = "Infantry";
		texture = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
	};
	class n_installation: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_installation.paa";
		name = "Installation";
		texture = "\A3\ui_f\data\map\markers\nato\n_installation.paa";
	};
	class n_maint: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_maint.paa";
		name = "Maintenance";
		texture = "\A3\ui_f\data\map\markers\nato\n_maint.paa";
	};
	class n_mech_inf: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
		name = "Mechanized";
		texture = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
	};
	class n_med: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_med.paa";
		name = "Medical";
		texture = "\A3\ui_f\data\map\markers\nato\n_med.paa";
	};
	class n_mortar: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
		name = "Mortar";
		texture = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
	};
	class n_motor_inf: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
		name = "Motorized";
		texture = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
	};
	class n_naval: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_naval.paa";
		name = "Naval";
		texture = "\A3\ui_f\data\map\markers\nato\n_naval.paa";
	};
	class n_plane: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_plane.paa";
		name = "Plane";
		texture = "\A3\ui_f\data\map\markers\nato\n_plane.paa";
	};
	class n_recon: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
		name = "Recon";
		texture = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
	};
	class n_service: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_service.paa";
		name = "Service";
		texture = "\A3\ui_f\data\map\markers\nato\n_service.paa";
	};
	class n_support: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_support.paa";
		name = "Support";
		texture = "\A3\ui_f\data\map\markers\nato\n_support.paa";
	};
	class n_uav: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\n_uav.paa";
		name = "UAV";
		texture = "\A3\ui_f\data\map\markers\nato\n_uav.paa";
	};
	class n_unknown: b_unknown
	{
		color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", "(profilenamespace getvariable ['Map_Independent_A',0.8])"};
		icon = "\A3\ui_f\data\map\markers\nato\n_unknown.paa";
		markerClass = "NATO_Independent";
		side = 1;
		texture = "\A3\ui_f\data\map\markers\nato\n_unknown.paa";
	};
	class Name
	{
		color[] = {0, 0, 0, 1};
		drawStyle = "name";
		font = "RobotoCondensed";
		name = "Name";
		shadow = 1;
		size = 0;
		textSize = 0.04;
		texture = "";
	};
	class NameCity: Name
	{
		color[] = {0, 0, 0, 1};
		font = "RobotoCondensedBold";
		importance = 6;
		name = "Name City";
		textSize = 0.1;
	};
	class NameCityCapital: Name
	{
		color[] = {0, 0, 0, 1};
		font = "RobotoCondensedBold";
		importance = 7;
		name = "Name Capital";
		textSize = 0.12;
	};
	class NameCityCapitalFormer: NameCityCapital
	{
		color[] = {0.54353, 0.381176, 0.458824, 1};
	};
	class NameCityFormer: NameCity
	{
		color[] = {0.54353, 0.381176, 0.458824, 1};
	};
	class NameLocal: Name
	{
		color[] = {0.44, 0.38, 0.3, 1};
		importance = 4;
		name = "Name Local";
		textSize = 0.06;
	};
	class NameMarine: Name
	{
		color[] = {0.05, 0.4, 0.8, 0.8};
		font = "RobotoCondensed";
		importance = 3;
		name = "Name Marine";
		textSize = 0.06;
	};
	class NameVillage: Name
	{
		color[] = {0, 0, 0, 1};
		font = "RobotoCondensed";
		importance = 5;
		name = "Name Village";
		textSize = 0.08;
	};
	class NameVillageFormer: NameVillage
	{
		color[] = {0.54353, 0.381176, 0.458824, 1};
	};
	class o_air: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
		name = "Helicopter";
		texture = "\A3\ui_f\data\map\markers\nato\o_air.paa";
	};
	class o_antiair: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_antiair.paa";
		name = "Anti-Air";
		texture = "\A3\ui_f\data\map\markers\nato\o_antiair.paa";
	};
	class o_armor: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
		name = "Armor";
		texture = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
	};
	class o_art: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
		name = "Artillery";
		texture = "\A3\ui_f\data\map\markers\nato\o_art.paa";
	};
	class o_hq: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
		name = "HQ";
		texture = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
	};
	class o_inf: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		name = "Infantry";
		texture = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
	};
	class o_installation: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_installation.paa";
		name = "Installation";
		texture = "\A3\ui_f\data\map\markers\nato\o_installation.paa";
	};
	class o_maint: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_maint.paa";
		name = "Maintenance";
		texture = "\A3\ui_f\data\map\markers\nato\o_maint.paa";
	};
	class o_mech_inf: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
		name = "Mechanized";
		texture = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
	};
	class o_med: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_med.paa";
		name = "Medical";
		texture = "\A3\ui_f\data\map\markers\nato\o_med.paa";
	};
	class o_mortar: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
		name = "Mortar";
		texture = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
	};
	class o_motor_inf: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
		name = "Motorized";
		texture = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
	};
	class o_naval: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
		name = "Naval";
		texture = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
	};
	class o_plane: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_plane.paa";
		name = "Plane";
		texture = "\A3\ui_f\data\map\markers\nato\o_plane.paa";
	};
	class o_recon: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
		name = "Recon";
		texture = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
	};
	class o_service: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_service.paa";
		name = "Service";
		texture = "\A3\ui_f\data\map\markers\nato\o_service.paa";
	};
	class o_support: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
		name = "Support";
		texture = "\A3\ui_f\data\map\markers\nato\o_support.paa";
	};
	class o_uav: o_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\o_uav.paa";
		name = "UAV";
		texture = "\A3\ui_f\data\map\markers\nato\o_uav.paa";
	};
	class o_unknown: b_unknown
	{
		color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
		icon = "\A3\ui_f\data\map\markers\nato\o_unknown.paa";
		markerClass = "NATO_OPFOR";
		side = 0;
		texture = "\A3\ui_f\data\map\markers\nato\o_unknown.paa";
	};
	class respawn_air: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\nato\respawn_air_ca.paa";
		markerClass = "NATO_Respawn";
		name = "Helicopter Respawn";
		scope = 1;
		shadow = 0;
		texture = "\A3\ui_f\data\map\markers\nato\respawn_air_ca.paa";
	};
	class respawn_armor: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\nato\respawn_armor_ca.paa";
		markerClass = "NATO_Respawn";
		name = "Armor Respawn";
		scope = 1;
		shadow = 0;
		texture = "\A3\ui_f\data\map\markers\nato\respawn_armor_ca.paa";
	};
	class respawn_inf: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\nato\respawn_inf_ca.paa";
		markerClass = "NATO_Respawn";
		name = "Infantry Respawn";
		scope = 1;
		shadow = 0;
		texture = "\A3\ui_f\data\map\markers\nato\respawn_inf_ca.paa";
	};
	class respawn_motor: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\nato\respawn_motor_ca.paa";
		markerClass = "NATO_Respawn";
		name = "Car Respawn";
		scope = 1;
		shadow = 0;
		texture = "\A3\ui_f\data\map\markers\nato\respawn_motor_ca.paa";
	};
	class respawn_naval: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\nato\respawn_naval_ca.paa";
		markerClass = "NATO_Respawn";
		name = "Naval Respawn";
		scope = 1;
		shadow = 0;
		texture = "\A3\ui_f\data\map\markers\nato\respawn_naval_ca.paa";
	};
	class respawn_para: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\nato\respawn_para_ca.paa";
		markerClass = "NATO_Respawn";
		name = "Airborne Respawn";
		scope = 1;
		shadow = 0;
		texture = "\A3\ui_f\data\map\markers\nato\respawn_para_ca.paa";
	};
	class respawn_plane: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\nato\respawn_plane_ca.paa";
		markerClass = "NATO_Respawn";
		name = "Plane Respawn";
		scope = 1;
		shadow = 0;
		texture = "\A3\ui_f\data\map\markers\nato\respawn_plane_ca.paa";
	};
	class respawn_unknown: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa";
		markerClass = "NATO_Respawn";
		name = "Respawn";
		scope = 1;
		shadow = 0;
		texture = "\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa";
	};
	class RockArea: Hill
	{
		color[] = {0, 0, 0, 1};
		importance = 2;
		name = "Rock Area";
		shadow = 0;
		size = 12;
		texture = "\A3\ui_f\data\map\locationtypes\rockarea_ca.paa";
	};
	class SafetyZone: Strategic
	{
		color[] = {1, 1, 1, 1};
		font = "RobotoCondensed";
		icon = "\A3\ui_f_orange\data\cfgmarkers\safetyzone_ca.paa";
	};
	class Strategic: Name
	{
		color[] = {0.25, 0.4, 0.2, 0.7};
		font = "RobotoCondensed";
		name = "Strategic key point";
		size = 16;
		textSize = 0.05;
		texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
	};
	class StrongpointArea: Strategic
	{
		name = "Strongpoint area";
	};
	class u_installation: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\u_installation.paa";
		name = "Installation";
		texture = "\A3\ui_f\data\map\markers\nato\u_installation.paa";
	};
	class VegetationBroadleaf: Hill
	{
		color[] = {0.25, 0.4, 0.2, 1};
		font = "RobotoCondensed";
		importance = 2;
		name = "Vegetation Broadleaf";
		shadow = 0;
		size = 18;
		texture = "\A3\ui_f\data\map\locationtypes\vegetationbroadleaf_ca.paa";
	};
	class VegetationFir: Hill
	{
		color[] = {0.25, 0.4, 0.2, 1};
		font = "RobotoCondensed";
		importance = 2;
		name = "Vegetation Fir";
		shadow = 0;
		size = 18;
		texture = "\A3\ui_f\data\map\locationtypes\vegetationfir_ca.paa";
	};
	class VegetationPalm: Hill
	{
		color[] = {0.25, 0.4, 0.2, 1};
		font = "RobotoCondensed";
		importance = 2;
		name = "Vegetation Palm";
		shadow = 0;
		size = 18;
		texture = "\A3\ui_f\data\map\locationtypes\vegetationpalm_ca.paa";
	};
	class VegetationVineyard: Hill
	{
		color[] = {0.25, 0.4, 0.2, 1};
		font = "RobotoCondensed";
		importance = 2;
		name = "Vegetation Vineyard";
		shadow = 0;
		size = 16;
		texture = "\A3\ui_f\data\map\locationtypes\vegetationvineyard_ca.paa";
	};
	class ViewPoint: Hill
	{
		color[] = {0.78, 0, 0.05, 1};
		drawStyle = "icon";
		importance = 1;
		name = "View Point";
		shadow = 0;
		size = 16;
		textSize = 0.04;
		texture = "\A3\ui_f\data\map\locationtypes\viewpoint_ca.paa";
	};
};
