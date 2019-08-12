class CfgMarkers
{
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
	class b_Ordnance: b_unknown
	{
		icon = "\a3\UI_F_Orange\Data\CfgMarkers\b_Ordnance_ca.paa";
		name = "Ordnance";
		texture = "\a3\UI_F_Orange\Data\CfgMarkers\b_Ordnance_ca.paa";
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
		icon = "\A3\ui_f\data\map\markers\military\mission_CA.paa";
		name = "Flag";
		scope = 0;
		shadow = 1;
		size = 32;
	};
	class flag_AAF: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\AAF_ca.paa";
		name = "Altis Armed Forces";
		texture = "\A3\ui_f\data\map\markers\flags\AAF_ca.paa";
	};
	class flag_Altis: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
		name = "Altis";
		texture = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
	};
	class flag_AltisColonial: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\AltisColonial_ca.paa";
		name = "Altis (Colonial)";
		texture = "\A3\ui_f\data\map\markers\flags\AltisColonial_ca.paa";
	};
	class flag_Astra: flag_NATO
	{
		icon = "\a3\UI_F_Enoch\Data\CfgMarkers\Astra_CA.paa";
		name = "Astra";
		texture = "\a3\UI_F_Enoch\Data\CfgMarkers\Astra_CA.paa";
	};
	class flag_Belgium: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Belgium_ca.paa";
		name = "Belgium";
		texture = "\A3\ui_f\data\map\markers\flags\Belgium_ca.paa";
	};
	class flag_Canada: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
		name = "Canada";
		texture = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
	};
	class flag_Catalonia: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Catalonia_ca.paa";
		name = "Catalonia";
		scope = 0;
		texture = "\A3\ui_f\data\map\markers\flags\Catalonia_ca.paa";
	};
	class flag_Croatia: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Croatia_ca.paa";
		name = "Croatia";
		texture = "\A3\ui_f\data\map\markers\flags\Croatia_ca.paa";
	};
	class flag_CSAT: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		name = "CSAT";
		texture = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
	};
	class flag_CTRG: flag_NATO
	{
		icon = "\A3\Ui_f\data\Map\Markers\Flags\ctrg_ca.paa";
		name = "CTRG";
	};
	class flag_CzechRepublic: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\CzechRepublic_ca.paa";
		name = "Czech Republic";
		texture = "\A3\ui_f\data\map\markers\flags\CzechRepublic_ca.paa";
	};
	class flag_Denmark: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Denmark_ca.paa";
		name = "Denmark";
		texture = "\A3\ui_f\data\map\markers\flags\Denmark_ca.paa";
	};
	class flag_EAF: flag_NATO
	{
		icon = "\a3\UI_F_Enoch\Data\CfgMarkers\LDF_CA.paa";
		name = "Livonian Defense Force";
		texture = "\a3\UI_F_Enoch\Data\CfgMarkers\LDF_CA.paa";
	};
	class flag_Enoch: flag_NATO
	{
		icon = "\a3\UI_F_Enoch\Data\CfgMarkers\Livonia_CA.paa";
		name = "Livonia";
		texture = "\a3\UI_F_Enoch\Data\CfgMarkers\Livonia_CA.paa";
	};
	class flag_EnochLooters: flag_NATO
	{
		icon = "\a3\UI_F_Enoch\Data\CfgMarkers\LivoniaLooters_CA.paa";
		name = "Livonian Looters";
		texture = "\a3\UI_F_Enoch\Data\CfgMarkers\LivoniaLooters_CA.paa";
	};
	class flag_EU: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\EU_ca.paa";
		name = "European Union";
		texture = "\A3\ui_f\data\map\markers\flags\EU_ca.paa";
	};
	class flag_FIA: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\FIA_ca.paa";
		name = "FIA";
		texture = "\A3\ui_f\data\map\markers\flags\FIA_ca.paa";
	};
	class flag_France: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\France_ca.paa";
		name = "France";
		texture = "\A3\ui_f\data\map\markers\flags\France_ca.paa";
	};
	class flag_Georgia: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Georgia_ca.paa";
		name = "Georgia";
		texture = "\A3\ui_f\data\map\markers\flags\Georgia_ca.paa";
	};
	class flag_Germany: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		name = "Germany";
		texture = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
	};
	class flag_Greece: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Greece_ca.paa";
		name = "Greece";
		texture = "\A3\ui_f\data\map\markers\flags\Greece_ca.paa";
	};
	class flag_Hungary: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Hungary_ca.paa";
		name = "Hungary";
		texture = "\A3\ui_f\data\map\markers\flags\Hungary_ca.paa";
	};
	class flag_Iceland: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Iceland_ca.paa";
		name = "Iceland";
		texture = "\A3\ui_f\data\map\markers\flags\Iceland_ca.paa";
	};
	class flag_IDAP: flag_NATO
	{
		icon = "\A3\ui_f_orange\data\cfgmarkers\IDAP_ca.paa";
		name = "International Development & Aid Project";
		shadow = 1;
		texture = "\A3\ui_f_orange\data\cfgmarkers\IDAP_ca.paa";
	};
	class flag_Italy: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Italy_ca.paa";
		name = "Italy";
		texture = "\A3\ui_f\data\map\markers\flags\Italy_ca.paa";
	};
	class flag_Luxembourg: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Luxembourg_ca.paa";
		name = "Luxembourg";
		texture = "\A3\ui_f\data\map\markers\flags\Luxembourg_ca.paa";
	};
	class flag_NATO: Flag
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\markers\flags\nato_ca.paa";
		markerClass = "Flags";
		name = "NATO";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\A3\ui_f\data\map\markers\flags\nato_ca.paa";
	};
	class flag_Netherlands: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Netherlands_ca.paa";
		name = "Netherlands";
		texture = "\A3\ui_f\data\map\markers\flags\Netherlands_ca.paa";
	};
	class flag_Norway: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
		name = "Norway";
		texture = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
	};
	class flag_Poland: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Poland_ca.paa";
		name = "Poland";
		texture = "\A3\ui_f\data\map\markers\flags\Poland_ca.paa";
	};
	class flag_Portugal: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Portugal_ca.paa";
		name = "Portugal";
		texture = "\A3\ui_f\data\map\markers\flags\Portugal_ca.paa";
	};
	class flag_Russia: flag_NATO
	{
		icon = "\a3\UI_F_Enoch\Data\CfgMarkers\Russia_CA.paa";
		name = "Russia";
		texture = "\a3\UI_F_Enoch\Data\CfgMarkers\Russia_CA.paa";
	};
	class flag_Slovakia: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Slovakia_ca.paa";
		name = "Slovakia";
		texture = "\A3\ui_f\data\map\markers\flags\Slovakia_ca.paa";
	};
	class flag_Slovenia: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Slovenia_ca.paa";
		name = "Slovenia";
		texture = "\A3\ui_f\data\map\markers\flags\Slovenia_ca.paa";
	};
	class flag_Spain: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\Spain_ca.paa";
		name = "Spain";
		texture = "\A3\ui_f\data\map\markers\flags\Spain_ca.paa";
	};
	class flag_Spetsnaz: flag_NATO
	{
		icon = "\a3\UI_F_Enoch\Data\CfgMarkers\Spetsnaz_CA.paa";
		name = "Spetsnaz";
		texture = "\a3\UI_F_Enoch\Data\CfgMarkers\Spetsnaz_CA.paa";
	};
	class flag_Syndicat: flag_NATO
	{
		icon = "\A3\Ui_f\data\Map\Markers\Flags\syndicat_ca.paa";
		name = "Syndikat";
	};
	class flag_Tanoa: flag_NATO
	{
		icon = "\A3\Ui_f\data\Map\Markers\Flags\tanoa_ca.paa";
		name = "Tanoa";
	};
	class flag_TanoaGendarmerie: flag_NATO
	{
		icon = "\A3\Ui_f\data\Map\Markers\Flags\tanoaGendarmerie_ca.paa";
		name = "Gendarmerie";
	};
	class flag_UK: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\UK_ca.paa";
		name = "UK";
		texture = "\A3\ui_f\data\map\markers\flags\UK_ca.paa";
	};
	class flag_UN: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\UN_ca.paa";
		name = "United Nations";
		texture = "\A3\ui_f\data\map\markers\flags\UN_ca.paa";
	};
	class flag_USA: flag_NATO
	{
		icon = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		name = "USA";
		texture = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
	};
	class flag_Viper: flag_NATO
	{
		icon = "\A3\Ui_f\data\Map\Markers\Flags\viper_ca.paa";
		name = "Viper";
	};
	class GroundSupport_ARTY_EAST: GroundSupport_ARTY_WEST
	{
		color[] = {0.5, 0, 0, 1};
		markerClass = "GroundSupport_ARTY_EAST";
		name = "GroundSupport_ARTY_EAST";
	};
	class GroundSupport_ARTY_RESISTANCE: GroundSupport_ARTY_WEST
	{
		color[] = {0, 0.5, 0, 1};
		markerClass = "GroundSupport_ARTY_RESISTANCE";
		name = "GroundSupport_ARTY_RESISTANCE";
	};
	class GroundSupport_ARTY_WEST: GroundSupport_CAS_WEST
	{
		icon = "\a3\Modules_F_Curator\Data\iconOrdnance_ca.paa";
		markerClass = "GroundSupport_ARTY_WEST";
		name = "GroundSupport_ARTY_WEST";
		texture = "\a3\Modules_F_Curator\Data\iconOrdnance_ca.paa";
	};
	class GroundSupport_CAS_EAST: GroundSupport_CAS_WEST
	{
		color[] = {0.5, 0, 0, 1};
		markerClass = "GroundSupport_CAS_EAST";
		name = "GroundSupport_CAS_EAST";
	};
	class GroundSupport_CAS_RESISTANCE: GroundSupport_CAS_WEST
	{
		color[] = {0, 0.5, 0, 1};
		markerClass = "GroundSupport_CAS_RESISTANCE";
		name = "GroundSupport_CAS_RESISTANCE";
	};
	class GroundSupport_CAS_WEST
	{
		color[] = {0, 0.3, 0.6, 1};
		icon = "\a3\Modules_F_Curator\Data\portraitCASGunMissile_ca.paa";
		markerClass = "GroundSupport_CAS_WEST";
		name = "GroundSupport_CAS_WEST";
		scope = 0;
		shadow = 0;
		side = 1;
		size = 29;
		texture = "\a3\Modules_F_Curator\Data\portraitCASGunMissile_ca.paa";
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
	class hd_ambush: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\ambush_CA.paa";
		name = "Ambush";
	};
	class hd_ambush_noShadow: hd_ambush
	{
		scope = 0;
		shadow = 0;
	};
	class hd_arrow: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\arrow_CA.paa";
		name = "Arrow";
	};
	class hd_arrow_noShadow: hd_arrow
	{
		scope = 0;
		shadow = 0;
	};
	class hd_destroy: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\destroy_CA.paa";
		name = "Destroy";
	};
	class hd_destroy_noShadow: hd_destroy
	{
		scope = 0;
		shadow = 0;
	};
	class hd_dot: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\handdrawn\dot_CA.paa";
		markerClass = "draw";
		name = "Dot";
		scope = 2;
		shadow = 1;
		size = 32;
	};
	class hd_dot_noShadow: hd_dot
	{
		scope = 0;
		shadow = 0;
	};
	class hd_end: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\end_CA.paa";
		name = "End";
	};
	class hd_end_noShadow: hd_end
	{
		scope = 0;
		shadow = 0;
	};
	class hd_flag: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\flag_CA.paa";
		name = "Flag";
	};
	class hd_flag_noShadow: hd_flag
	{
		scope = 0;
		shadow = 0;
	};
	class hd_join: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\join_CA.paa";
		name = "Join";
	};
	class hd_join_noShadow: hd_join
	{
		scope = 0;
		shadow = 0;
	};
	class hd_objective: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\objective_CA.paa";
		name = "Objective";
	};
	class hd_objective_noShadow: hd_objective
	{
		scope = 0;
		shadow = 0;
	};
	class hd_pickup: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\pickup_CA.paa";
		name = "Pick Up";
	};
	class hd_pickup_noShadow: hd_pickup
	{
		scope = 0;
		shadow = 0;
	};
	class hd_start: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\start_CA.paa";
		name = "Start";
	};
	class hd_start_noShadow: hd_start
	{
		scope = 0;
		shadow = 0;
	};
	class hd_unknown: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\unknown_CA.paa";
		name = "Unknown";
	};
	class hd_unknown_noShadow: hd_unknown
	{
		scope = 0;
		shadow = 0;
	};
	class hd_warning: hd_dot
	{
		icon = "\A3\ui_f\data\map\markers\handdrawn\warning_CA.paa";
		name = "Warning";
	};
	class hd_warning_noShadow: hd_warning
	{
		scope = 0;
		shadow = 0;
	};
	class KIA
	{
		color[] = {0, 0, 0, 1};
		icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
		name = "KIA";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class loc_Bunker: loc_Tree
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Bunker_CA.paa";
		name = "Bunker";
		showEditorMarkerColor = 0;
		size = 14;
	};
	class loc_Bush: loc_Tree
	{
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\Bush_CA.paa";
		name = "Bush";
		showEditorMarkerColor = 1;
		size = 7;
	};
	class loc_BusStop: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\BusStop_CA.paa";
		name = "Bus Stop";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_Chapel: loc_Tree
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		name = "Chapel";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_Church: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Church_CA.paa";
		name = "Church";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_CivilDefense: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f_orange\data\cfgmarkers\civildefense.paa";
		name = "Civil Defense";
		size = 24;
	};
	class loc_Cross: loc_Tree
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		name = "Cross";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_CulturalProperty: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f_orange\data\cfgmarkers\culturalproperty_ca.paa";
		name = "Cultural Property";
		size = 24;
	};
	class loc_DangerousForces: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f_orange\data\cfgmarkers\dangerousforces_ca.paa";
		name = "Dangerous Forces";
		size = 24;
	};
	class loc_Fortress: loc_Bunker
	{
		scope = 0;
	};
	class loc_Fountain: loc_Tree
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Fountain_CA.paa";
		name = "Fountain";
		showEditorMarkerColor = 0;
		size = 11;
	};
	class loc_Fuelstation: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Fuelstation_CA.paa";
		name = "Fuel Station";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_Hospital: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Hospital_CA.paa";
		name = "Hospital";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_Lighthouse: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Lighthouse_CA.paa";
		name = "Lighthouse";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_Power: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Power_CA.paa";
		name = "Power Plant";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_PowerSolar: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\PowerSolar_CA.paa";
		name = "Solar Power Plant";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_PowerWave: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\PowerWave_CA.paa";
		name = "Wave Power Plant";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_PowerWind: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\PowerWind_CA.paa";
		name = "Wind Power Plant";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_Quay: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Quay_CA.paa";
		name = "Pier";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_Rock: loc_Tree
	{
		color[] = {0.1, 0.1, 0.1, 0.8};
		icon = "\A3\ui_f\data\map\mapcontrol\Rock_CA.paa";
		name = "Rock";
		showEditorMarkerColor = 0;
		size = 12;
	};
	class loc_Ruin: loc_Tree
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Ruin_CA.paa";
		name = "Ruin";
		showEditorMarkerColor = 0;
		size = 16;
	};
	class loc_SafetyZone: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f_orange\data\cfgmarkers\safetyzone_ca.paa";
		name = "Safety Zone";
		size = 24;
	};
	class loc_SmallTree: loc_Tree
	{
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\SmallTree_CA.paa";
		name = "Small Tree";
		showEditorMarkerColor = 1;
		size = 12;
	};
	class loc_Stack: loc_Tree
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Stack_CA.paa";
		name = "Chimney Stack";
		showEditorMarkerColor = 0;
		size = 20;
	};
	class loc_Tourism: loc_Tree
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Tourism_CA.paa";
		name = "Hotel";
		showEditorMarkerColor = 0;
		size = 16;
	};
	class loc_Transmitter: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\Transmitter_CA.paa";
		name = "Radio Tower";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class loc_Tree: Flag
	{
		color[] = {0.45, 0.64, 0.33, 0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\tree_CA.paa";
		markerClass = "Locations";
		name = "Tree";
		scope = 1;
		shadow = 0;
		showEditorMarkerColor = 1;
		size = 12;
	};
	class loc_ViewTower: loc_Tree
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\ViewTower_CA.paa";
		name = "View Tower";
		showEditorMarkerColor = 0;
		size = 16;
	};
	class loc_WaterTower: loc_Tree
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f\data\map\mapcontrol\WaterTower_CA.paa";
		name = "Water Tower";
		showEditorMarkerColor = 0;
		size = 24;
	};
	class MemoryFragment: Flag
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f_orange\data\cfgmarkers\memoryFragment_ca.paa";
		markerClass = "System";
		scope = 0;
		shadow = 0;
	};
	class mil_ambush: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\ambush_CA.paa";
		name = "Ambush";
	};
	class mil_ambush_noShadow: mil_ambush
	{
		scope = 0;
		shadow = 0;
	};
	class mil_arrow: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\arrow_CA.paa";
		name = "Arrow";
	};
	class mil_arrow2: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\arrow2_CA.paa";
		name = "Arrow (filled)";
	};
	class mil_arrow2_noShadow: mil_arrow2
	{
		scope = 0;
		shadow = 0;
	};
	class mil_arrow_noShadow: mil_arrow
	{
		scope = 0;
		shadow = 0;
	};
	class mil_box: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\box_CA.paa";
		name = "Square";
	};
	class mil_box_noShadow: mil_box
	{
		scope = 0;
		shadow = 0;
	};
	class mil_circle: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\circle_CA.paa";
		name = "Circle";
	};
	class mil_circle_noShadow: mil_circle
	{
		scope = 0;
		shadow = 0;
	};
	class mil_destroy: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\destroy_CA.paa";
		name = "Destroy";
	};
	class mil_destroy_noShadow: mil_destroy
	{
		scope = 0;
		shadow = 0;
	};
	class mil_dot: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\dot_CA.paa";
		name = "Dot";
	};
	class mil_dot_noShadow: mil_dot
	{
		scope = 0;
		shadow = 0;
	};
	class mil_end: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\end_CA.paa";
		name = "End";
	};
	class mil_end_noShadow: mil_end
	{
		scope = 0;
		shadow = 0;
	};
	class mil_flag: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\flag_CA.paa";
		name = "Flag";
	};
	class mil_flag_noShadow: mil_flag
	{
		scope = 0;
		shadow = 0;
	};
	class mil_join: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\join_CA.paa";
		name = "Join";
	};
	class mil_join_noShadow: mil_join
	{
		scope = 0;
		shadow = 0;
	};
	class mil_marker: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\marker_CA.paa";
		name = "Marker";
	};
	class mil_marker_noShadow: mil_marker
	{
		scope = 0;
		shadow = 0;
	};
	class mil_objective: Flag
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\markers\military\objective_CA.paa";
		markerClass = "Military";
		name = "Objective";
		scope = 1;
		shadow = 1;
		size = 32;
	};
	class mil_objective_noShadow: mil_objective
	{
		scope = 0;
		shadow = 0;
	};
	class mil_pickup: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\pickup_CA.paa";
		name = "Pick Up";
	};
	class mil_pickup_noShadow: mil_pickup
	{
		scope = 0;
		shadow = 0;
	};
	class mil_start: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\start_CA.paa";
		name = "Start";
	};
	class mil_start_noShadow: mil_start
	{
		scope = 0;
		shadow = 0;
	};
	class mil_triangle: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\triangle_CA.paa";
		name = "Triangle";
	};
	class mil_triangle_noShadow: mil_triangle
	{
		scope = 0;
		shadow = 0;
	};
	class mil_unknown: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\unknown_CA.paa";
		name = "Unknown";
	};
	class mil_unknown_noShadow: mil_unknown
	{
		scope = 0;
		shadow = 0;
	};
	class mil_warning: mil_objective
	{
		icon = "\A3\ui_f\data\map\markers\military\warning_CA.paa";
		name = "Warning";
	};
	class mil_warning_noShadow: mil_warning
	{
		scope = 0;
		shadow = 0;
	};
	class Minefield
	{
		color[] = {0.9, 0, 0, 1};
		icon = "\a3\Ui_F_Curator\Data\CfgMarkers\minefield_ca.paa";
		name = "Minefield";
		scope = 1;
		shadow = 0;
		showEditorMarkerColor = 1;
		size = 29;
	};
	class MinefieldAP: Minefield
	{
		icon = "\a3\Ui_F_Curator\Data\CfgMarkers\minefieldAP_ca.paa";
		name = "Minefield (AP)";
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
	class n_Ordnance: n_unknown
	{
		icon = "\a3\UI_F_Orange\Data\CfgMarkers\n_Ordnance_ca.paa";
		name = "Ordnance";
		texture = "\a3\UI_F_Orange\Data\CfgMarkers\n_Ordnance_ca.paa";
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
	class o_Ordnance: o_unknown
	{
		icon = "\a3\UI_F_Orange\Data\CfgMarkers\o_Ordnance_ca.paa";
		name = "Ordnance";
		texture = "\a3\UI_F_Orange\Data\CfgMarkers\o_Ordnance_ca.paa";
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
	class RedCrystal: flag_NATO
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f_orange\data\cfgmarkers\redcrystal_ca.paa";
		name = "Red Crystal";
		scope = 2;
		shadow = 1;
		texture = "\A3\ui_f_orange\data\cfgmarkers\redcrystal_ca.paa";
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
	class waypoint
	{
		color[] = {0, 0, 0, 1};
		icon = "\A3\ui_f\data\map\groupicons\waypoint.paa";
		name = "Waypoint";
		scope = 1;
		shadow = 0;
		size = 29;
	};
	class White: flag_NATO
	{
		color[] = {1, 1, 1, 1};
		icon = "\A3\ui_f_orange\data\cfgmarkers\white_ca.paa";
		name = "White";
		scope = 2;
		shadow = 1;
		texture = "\A3\ui_f_orange\data\cfgmarkers\white_ca.paa";
	};
};
