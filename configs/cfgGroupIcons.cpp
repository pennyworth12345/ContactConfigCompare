class cfgGroupIcons
{
	HC3DGroupAlpha = 0.4;
	maxHCDistanceAlphaEnd = 1500;
	maxHCDistanceAlphaStart = 1000;
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
	class badge
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\groupicons\badge_gs.paa";
		name = "Badge";
		scope = 2;
		shadow = 0;
		size = 48;
	};
	class badge_simple: badge
	{
		icon = "\A3\ui_f\data\map\groupicons\badge_simple.paa";
		name = "Badge - Simple";
	};
	class Base_EAST: Base_WEST
	{
		icon = "\A3\Ui_f\data\Map\Markers\NATO\o_hq.paa";
	};
	class Base_GUER: Base_WEST
	{
		icon = "\A3\Ui_f\data\Map\Markers\NATO\n_hq.paa";
	};
	class Base_WEST
	{
		icon = "\A3\Ui_f\data\Map\Markers\NATO\b_hq.paa";
		scope = 1;
		shadow = 0;
		size = 29;
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
	class Dummy: Flag
	{
		name = "Unknown";
	};
	class Empty
	{
		color[] = {0.2, 0.1, 0.4, 1};
		icon = "\A3\ui_f\data\map\markers\system\empty_ca.paa";
		markerClass = "System";
		name = "Empty";
		scope = 1;
		shadow = 0;
		showEditorMarkerColor = 1;
		size = 0;
	};
	class EmptyIcon: Flag
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		scope = 0;
		shadow = 0;
	};
	class Flag
	{
		color[] = {1, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\system\dummy_ca.paa";
		name = "Flag";
		scope = 1;
		shadow = 1;
		size = 32;
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
	class GrpIcon_Default
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\groupicons\icon_default.paa";
		name = "";
		scope = 2;
		shadow = 2;
		size = 48;
	};
	class GrpIcon_Selected
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\groupicons\icon_selected.paa";
		name = "";
		scope = 2;
		shadow = 2;
		size = 48;
	};
	class hc_selectable
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\groupicons\selector_selectable_ca.paa";
		name = "HC - Selectable";
		scope = 2;
		shadow = 0;
		side = 1;
		size = 48;
	};
	class hc_selected
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\groupicons\selector_selected_ca.paa";
		name = "HC - Selected";
		scope = 2;
		shadow = 0;
		side = 1;
		size = 48;
	};
	class hc_selectedEnemy
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\groupicons\selector_selectedEnemy_ca.paa";
		name = "HC - Selected Enemy";
		scope = 2;
		shadow = 0;
		side = 1;
		size = 48;
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
	class Quit: badge
	{
		icon = "\A3\Modules_F_Kart\data\TimeTrials\quit_igui_ca.paa";
		name = "Quit";
	};
	class Request
	{
		icon = "\A3\ui_f\data\map\markers\system\dummy_ca.paa";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class Request_CloseAirSupport: Request
	{
		icon = "\a3\Missions_F_Heli\data\icons\GS_cas.paa";
	};
	class Request_Medevac: Request
	{
		icon = "\a3\Missions_F_Heli\data\icons\GS_medevac.paa";
	};
	class Request_Owner: Request
	{
		icon = "\a3\Missions_F_Heli\data\icons\GS_owner.paa";
	};
	class Request_Slingload: Request
	{
		icon = "\a3\Missions_F_Heli\data\icons\GS_slingload.paa";
	};
	class Request_Transport: Request
	{
		icon = "\a3\Missions_F_Heli\data\icons\GS_transport.paa";
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
	class Restart: badge
	{
		icon = "\A3\Modules_F_Beta\data\FiringDrills\restart_ca.paa";
		name = "Restart";
	};
	class Select: Flag
	{
		color[] = {1, 0, 0, 1};
		icon = "\A3\ui_f\data\igui\cfg\islandmap\iconplayer_ca.paa";
		markerClass = "System";
		name = "Select";
		scope = 1;
		shadow = 0;
	};
	class selector_selectable: waypoint
	{
		icon = "\A3\ui_f\data\map\groupicons\selector_selectable_ca.paa";
		name = "Selector - Selectable";
	};
	class selector_selectedEnemy: waypoint
	{
		icon = "\A3\ui_f\data\map\groupicons\selector_selectedEnemy_ca.paa";
		name = "Selector - Selected Enemy";
	};
	class selector_selectedFriendly: waypoint
	{
		icon = "\A3\ui_f\data\map\groupicons\selector_selectedFriendly_ca.paa";
		name = "Selector - Selected Friendly";
	};
	class selector_selectedMission: waypoint
	{
		icon = "\A3\ui_f\data\map\groupicons\selector_selectedMission_ca.paa";
		name = "Selector - Selected Mission";
	};
	class u_installation: n_unknown
	{
		icon = "\A3\ui_f\data\map\markers\nato\u_installation.paa";
		name = "Installation";
		texture = "\A3\ui_f\data\map\markers\nato\u_installation.paa";
	};
	class VRCourseBallistics
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_balistics_CA.paa";
		name = "Material Penetration";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseCommandingActions
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_commanding_actions_CA.paa";
		name = "Commanding - Actions";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseCommandingBehaviour
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_commanding_behavior_CA.paa";
		name = "Commanding - Behavior";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseCommandingMovement
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_commanding_movement_CA.paa";
		name = "Commanding - Movement";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseCommandingVehicles
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_commanding_vehicles_CA.paa";
		name = "Commanding - Vehicles";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseHeliAdvanced
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Heli\VR\Helpers\Data\VR_Symbol_Heli_Advanced_CA.paa";
		name = "Helicopter - Basics";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseHeliBasics
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Heli\VR\Helpers\Data\VR_Symbol_Heli_Basic_CA.paa";
		name = "Helicopter - Basics";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseHeliSlingload
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Heli\VR\Helpers\Data\VR_Symbol_Heli_Slingloading_CA.paa";
		name = "Helicopter - Basics";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseHeliWeapons
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Heli\VR\Helpers\Data\VR_Symbol_Heli_Weapons_CA.paa";
		name = "Helicopter - Basics";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseLaunchers
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_launchers_CA.paa";
		name = "Launchers";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseLock
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_locked_CA.paa";
		name = "";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCoursePlaceables
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_placeables_CA.paa";
		name = "Placeables";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseStamina
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Exp_A\VR\Helpers\Data\VR_Symbol_EXP_A_Stamina_CA.paa";
		name = "Stamina";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseTargetDesignation
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_target_designation_CA.paa";
		name = "Target Designation";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseWeaponHandlingA
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Mark\VR\Helpers\Data\VR_Symbol_MARK_WeaponHandling1_CA.paa";
		name = "Weapon Handling I";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseWeaponHandlingB
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Mark\VR\Helpers\Data\VR_Symbol_MARK_WeaponHandling2_CA.paa";
		name = "Weapon Handling II";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class VRCourseWeaponHandlingC
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\Structures_F_Mark\VR\Helpers\Data\VR_Symbol_MARK_WeaponHandling3_CA.paa";
		name = "Weapon Handling III";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class waypoint
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\groupicons\waypoint.paa";
		name = "Waypoint";
		scope = 1;
		shadow = 0;
		side = 1;
		size = 29;
	};
};
