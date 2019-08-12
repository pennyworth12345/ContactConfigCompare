class CfgPatches
{
	class 3DEN
	{
		requiredAddons[] = {"A3_3DEN"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_3DEN
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Eden Update - Eden Editor";
		requiredAddons[] = {"A3_Data_F_Exp_B"};
		requiredVersion = 0.1;
		units[] = {"Sphere_3DEN", "SphereNoGround_3DEN"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_3DEN_Language
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Eden Update - Eden Editor Texts and Translations";
		requiredAddons[] = {"A3_3DEN"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Aircraft";
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Aircraft";
		requiredAddons[] = {"A3_Air_F"};
		requiredVersion = 0.1;
		units[] = {"NonSteerable_Parachute_F", "Steerable_Parachute_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_Beta_Heli_Attack_01
	{
		addonRootClass = "A3_Air_F_Beta";
		requiredAddons[] = {"A3_Air_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"B_Heli_Attack_01_dynamicLoadout_F", "B_Heli_Attack_01_F"};
		weapons[] = {};
	};
	class A3_Air_F_Beta_Heli_Attack_02
	{
		addonRootClass = "A3_Air_F_Beta";
		requiredAddons[] = {"A3_Air_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"O_Heli_Attack_02_black_F", "O_Heli_Attack_02_dynamicLoadout_black_F", "O_Heli_Attack_02_dynamicLoadout_F", "O_Heli_Attack_02_F"};
		weapons[] = {};
	};
	class A3_Air_F_Beta_Heli_Transport_01
	{
		addonRootClass = "A3_Air_F_Beta";
		requiredAddons[] = {"A3_Air_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"B_Heli_Transport_01_camo_F", "B_Heli_Transport_01_F"};
		weapons[] = {};
	};
	class A3_Air_F_Beta_Heli_Transport_02
	{
		addonRootClass = "A3_Air_F_Beta";
		requiredAddons[] = {"A3_Air_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"I_Heli_Transport_02_F"};
		weapons[] = {};
	};
	class A3_Air_F_Beta_Parachute_01
	{
		addonRootClass = "A3_Air_F_Beta";
		requiredAddons[] = {"A3_Air_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Beta_Parachute_02
	{
		addonRootClass = "A3_Air_F_Beta";
		requiredAddons[] = {"A3_Air_F_Beta", "A3_Weapons_F_Ammoboxes"};
		requiredVersion = 0.1;
		units[] = {"B_B_Parachute_02_F", "B_I_Parachute_02_F", "B_O_Parachute_02_F", "B_Parachute_02_F", "I_Parachute_02_F", "O_Parachute_02_F"};
		weapons[] = {};
	};
	class A3_Air_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Aircraft";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_Enoch_Heli_Light_03
	{
		addonRootClass = "A3_Air_F_Enoch";
		requiredAddons[] = {"A3_Air_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_Heli_light_03_dynamicLoadout_F", "I_E_Heli_light_03_unarmed_F"};
		weapons[] = {};
	};
	class A3_Air_F_Enoch_UAV_01
	{
		addonRootClass = "A3_Air_F_Enoch";
		requiredAddons[] = {"A3_Air_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_UAV_01_F"};
		weapons[] = {};
	};
	class A3_Air_F_Enoch_UAV_06
	{
		addonRootClass = "A3_Air_F_Enoch";
		requiredAddons[] = {"A3_Air_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Box_I_E_UAV_06_F", "Box_I_E_UAV_06_medical_F", "I_E_UAV_06_F", "I_E_UAV_06_medical_F"};
		weapons[] = {};
	};
	class A3_Air_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Aircraft";
		requiredAddons[] = {"A3_Air_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_EPB_Heli_Light_03
	{
		addonRootClass = "A3_Air_F_EPB";
		requiredAddons[] = {"A3_Air_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"I_Heli_light_03_dynamicLoadout_F", "I_Heli_light_03_F", "I_Heli_light_03_unarmed_F"};
		weapons[] = {};
	};
	class A3_Air_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Aircraft";
		requiredAddons[] = {"A3_Air_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_EPC_Plane_CAS_01
	{
		addonRootClass = "A3_Air_F_EPC";
		requiredAddons[] = {"A3_Air_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"B_Ejection_Seat_Plane_CAS_01_F", "B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_CAS_01_F", "Plane_CAS_01_Canopy_F"};
		weapons[] = {};
	};
	class A3_Air_F_EPC_Plane_CAS_02
	{
		addonRootClass = "A3_Air_F_EPC";
		requiredAddons[] = {"A3_Air_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"O_Ejection_Seat_Plane_CAS_02_F", "O_Plane_CAS_02_dynamicLoadout_F", "O_Plane_CAS_02_F", "Plane_CAS_02_Canopy_F"};
		weapons[] = {};
	};
	class A3_Air_F_EPC_Plane_Fighter_03
	{
		addonRootClass = "A3_Air_F_EPC";
		requiredAddons[] = {"A3_Air_F_EPC", "A3_Air_F_Gamma_Plane_Fighter_03"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Aircraft";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_Exp_Heli_Light_01
	{
		addonRootClass = "A3_Air_F_Exp";
		requiredAddons[] = {"A3_Air_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"I_C_Heli_Light_01_civil_F"};
		weapons[] = {};
	};
	class A3_Air_F_Exp_Heli_Transport_01
	{
		addonRootClass = "A3_Air_F_Exp";
		requiredAddons[] = {"A3_Air_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_CTRG_Heli_Transport_01_sand_F", "B_CTRG_Heli_Transport_01_tropic_F"};
		weapons[] = {};
	};
	class A3_Air_F_Exp_Plane_Civil_01
	{
		addonRootClass = "A3_Air_F_Exp";
		requiredAddons[] = {"A3_Air_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"C_Plane_Civil_01_F", "C_Plane_Civil_01_racing_F", "I_C_Plane_Civil_01_F"};
		weapons[] = {};
	};
	class A3_Air_F_Exp_UAV_03
	{
		addonRootClass = "A3_Air_F_Exp";
		requiredAddons[] = {"A3_Air_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_UAV_03_dynamicLoadout_F", "B_T_UAV_03_F"};
		weapons[] = {};
	};
	class A3_Air_F_Exp_UAV_04
	{
		addonRootClass = "A3_Air_F_Exp";
		requiredAddons[] = {"A3_Air_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"O_T_UAV_04_CAS_F"};
		weapons[] = {};
	};
	class A3_Air_F_Exp_VTOL_01
	{
		addonRootClass = "A3_Air_F_Exp";
		requiredAddons[] = {"A3_Air_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_VTOL_01_armed_blue_F", "B_T_VTOL_01_armed_F", "B_T_VTOL_01_armed_olive_F", "B_T_VTOL_01_infantry_blue_F", "B_T_VTOL_01_infantry_F", "B_T_VTOL_01_infantry_olive_F", "B_T_VTOL_01_vehicle_blue_F", "B_T_VTOL_01_vehicle_F", "B_T_VTOL_01_vehicle_olive_F"};
		weapons[] = {};
	};
	class A3_Air_F_Exp_VTOL_02
	{
		addonRootClass = "A3_Air_F_Exp";
		requiredAddons[] = {"A3_Air_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"O_T_VTOL_02_infantry_dynamicLoadout_F", "O_T_VTOL_02_infantry_F", "O_T_VTOL_02_infantry_ghex_F", "O_T_VTOL_02_infantry_grey_F", "O_T_VTOL_02_infantry_hex_F", "O_T_VTOL_02_vehicle_dynamicLoadout_F", "O_T_VTOL_02_vehicle_F", "O_T_VTOL_02_vehicle_ghex_F", "O_T_VTOL_02_vehicle_grey_F", "O_T_VTOL_02_vehicle_hex_F"};
		weapons[] = {};
	};
	class A3_Air_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Aircraft";
		requiredAddons[] = {"A3_Air_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_Gamma_Plane_Fighter_03
	{
		addonRootClass = "A3_Air_F_Gamma";
		requiredAddons[] = {"A3_Air_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"I_Ejection_Seat_Plane_Fighter_03_F", "I_Plane_Fighter_03_AA_F", "I_Plane_Fighter_03_CAS_F", "I_Plane_Fighter_03_dynamicLoadout_F", "Plane_Fighter_03_Canopy_F", "Plane_Fighter_03_wreck_F"};
		weapons[] = {};
	};
	class A3_Air_F_Gamma_UAV_01
	{
		requiredAddons[] = {"A3_Drones_F_Air_F_Gamma_UAV_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Gamma_UAV_02
	{
		requiredAddons[] = {"A3_Drones_F_Air_F_Gamma_UAV_02"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Aircraft";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_Heli_Heli_Attack_01
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Heli_Attack_02
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Heli_Light_01
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Heli_Light_02
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Heli_Light_03
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Heli_Transport_01
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Heli_Transport_02
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Heli_Transport_03
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"B_Heli_Transport_03_black_F", "B_Heli_Transport_03_F", "B_Heli_Transport_03_unarmed_F", "B_Heli_Transport_03_unarmed_green_F"};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Heli_Transport_04
	{
		addonRootClass = "A3_Air_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli", "A3_Supplies_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_Pod_Heli_Transport_04_ammo_black_F", "Land_Pod_Heli_Transport_04_ammo_F", "Land_Pod_Heli_Transport_04_bench_black_F", "Land_Pod_Heli_Transport_04_bench_F", "Land_Pod_Heli_Transport_04_box_black_F", "Land_Pod_Heli_Transport_04_box_F", "Land_Pod_Heli_Transport_04_covered_black_F", "Land_Pod_Heli_Transport_04_covered_F", "Land_Pod_Heli_Transport_04_fuel_black_F", "Land_Pod_Heli_Transport_04_fuel_F", "Land_Pod_Heli_Transport_04_medevac_black_F", "Land_Pod_Heli_Transport_04_medevac_F", "Land_Pod_Heli_Transport_04_repair_black_F", "Land_Pod_Heli_Transport_04_repair_F", "O_Heli_Transport_04_ammo_black_F", "O_Heli_Transport_04_ammo_F", "O_Heli_Transport_04_bench_black_F", "O_Heli_Transport_04_bench_F", "O_Heli_Transport_04_black_F", "O_Heli_Transport_04_box_black_F", "O_Heli_Transport_04_box_F", "O_Heli_Transport_04_covered_black_F", "O_Heli_Transport_04_covered_F", "O_Heli_Transport_04_F", "O_Heli_Transport_04_fuel_black_F", "O_Heli_Transport_04_fuel_F", "O_Heli_Transport_04_medevac_black_F", "O_Heli_Transport_04_medevac_F", "O_Heli_Transport_04_repair_black_F", "O_Heli_Transport_04_repair_F"};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Light_01
	{
		addonRootClass = "A3_Air_F";
		requiredAddons[] = {"A3_Air_F"};
		requiredVersion = 0.1;
		units[] = {"B_Heli_Light_01_armed_F", "B_Heli_Light_01_dynamicLoadout_F", "B_Heli_Light_01_F", "B_Heli_Light_01_stripped_F", "C_Heli_light_01_blue_F", "C_Heli_light_01_blueLine_F", "C_Heli_Light_01_civil_F", "C_Heli_light_01_digital_F", "C_Heli_light_01_elliptical_F", "C_Heli_light_01_furious_F", "C_Heli_light_01_graywatcher_F", "C_Heli_light_01_ion_F", "C_Heli_light_01_jeans_F", "C_Heli_light_01_light_F", "C_Heli_light_01_luxe_F", "C_Heli_light_01_red_F", "C_Heli_light_01_shadow_F", "C_Heli_light_01_sheriff_F", "C_Heli_light_01_speedy_F", "C_Heli_light_01_stripped_F", "C_Heli_light_01_sunset_F", "C_Heli_light_01_vrana_F", "C_Heli_light_01_wasp_F", "C_Heli_light_01_wave_F"};
		weapons[] = {};
	};
	class A3_Air_F_Heli_Light_02
	{
		addonRootClass = "A3_Air_F";
		requiredAddons[] = {"A3_Air_F"};
		requiredVersion = 0.1;
		units[] = {"O_Heli_Light_02_dynamicLoadout_F", "O_Heli_Light_02_F", "O_Heli_Light_02_unarmed_F", "O_Heli_Light_02_v2_F"};
		weapons[] = {};
	};
	class A3_Air_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Aircraft";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_Jets_Plane_Fighter_01
	{
		addonRootClass = "A3_Air_F_Jets";
		requiredAddons[] = {"A3_Air_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"B_Ejection_Seat_Plane_Fighter_01_F", "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_Stealth_F", "Plane_Fighter_01_Canopy_F", "Plane_Fighter_01_wreck_F"};
		weapons[] = {};
	};
	class A3_Air_F_Jets_Plane_Fighter_02
	{
		addonRootClass = "A3_Air_F_Jets";
		requiredAddons[] = {"A3_Air_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"O_Ejection_Seat_Plane_Fighter_02_F", "O_Plane_Fighter_02_F", "O_Plane_Fighter_02_Stealth_F", "Plane_Fighter_02_Canopy_F", "Plane_Fighter_02_wreck_F"};
		weapons[] = {};
	};
	class A3_Air_F_Jets_Plane_Fighter_04
	{
		addonRootClass = "A3_Air_F_Jets";
		requiredAddons[] = {"A3_Air_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"I_Ejection_Seat_Plane_Fighter_04_F", "I_Plane_Fighter_04_F", "Plane_Fighter_04_Canopy_F", "Plane_Fighter_04_wreck_F"};
		weapons[] = {};
	};
	class A3_Air_F_Jets_UAV_05
	{
		addonRootClass = "A3_Air_F_Jets";
		requiredAddons[] = {"A3_Air_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"B_UAV_05_F"};
		weapons[] = {};
	};
	class A3_Air_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Aircraft";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"B_Plane_CAS_01_Cluster_F", "B_Plane_Fighter_01_Cluster_F", "I_Plane_Fighter_03_Cluster_F", "I_Plane_Fighter_04_Cluster_F", "O_Plane_CAS_02_Cluster_F", "O_Plane_Fighter_02_Cluster_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Air_F_Orange_Heli_Transport_02
	{
		addonRootClass = "A3_Air_F_Orange";
		requiredAddons[] = {"A3_Air_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"C_IDAP_Heli_Transport_02_F"};
		weapons[] = {};
	};
	class A3_Air_F_Orange_UAV_01
	{
		addonRootClass = "A3_Air_F_Orange";
		requiredAddons[] = {"A3_Air_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"C_IDAP_UAV_01_F"};
		weapons[] = {};
	};
	class A3_Air_F_Orange_UAV_06
	{
		addonRootClass = "A3_Air_F_Orange";
		requiredAddons[] = {"A3_Air_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"B_UAV_06_F", "B_UAV_06_medical_F", "Box_B_UAV_06_F", "Box_B_UAV_06_medical_F", "Box_C_IDAP_UAV_06_F", "Box_C_IDAP_UAV_06_medical_F", "Box_C_UAV_06_F", "Box_C_UAV_06_medical_F", "Box_C_UAV_06_Swifd_F", "Box_I_UAV_06_F", "Box_I_UAV_06_medical_F", "Box_O_UAV_06_F", "Box_O_UAV_06_medical_F", "C_IDAP_UAV_06_antimine_F", "C_IDAP_UAV_06_F", "C_IDAP_UAV_06_medical_F", "C_UAV_06_F", "C_UAV_06_medical_F", "I_UAV_06_F", "I_UAV_06_medical_F", "O_UAV_06_F", "O_UAV_06_medical_F"};
		weapons[] = {};
	};
	class A3_Animals_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Fauna";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Animals_F_Animconfig
	{
		addonRootClass = "A3_Animals_F";
		requiredAddons[] = {"A3_Animals_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Animals_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Fauna";
		requiredAddons[] = {"A3_Animals_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Animals_F_Beta_Chicken
	{
		addonRootClass = "A3_Animals_F_Beta";
		requiredAddons[] = {"A3_Animals_F_Animconfig", "A3_Animals_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"Cock_random_F", "Cock_white_F", "Hen_random_F"};
		weapons[] = {};
	};
	class A3_Animals_F_Beta_Dog
	{
		addonRootClass = "A3_Animals_F_Beta";
		requiredAddons[] = {"A3_Animals_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"Alsatian_Black_F", "Alsatian_Random_F", "Alsatian_Sand_F", "Alsatian_Sandblack_F", "Fin_blackwhite_F", "Fin_ocherwhite_F", "Fin_random_F", "Fin_sand_F", "Fin_tricolour_F"};
		weapons[] = {};
	};
	class A3_Animals_F_Beta_Goat
	{
		addonRootClass = "A3_Animals_F_Beta";
		requiredAddons[] = {"A3_Animals_F_Animconfig", "A3_Animals_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"Goat_random_F"};
		weapons[] = {};
	};
	class A3_Animals_F_Beta_Sheep
	{
		addonRootClass = "A3_Animals_F_Beta";
		requiredAddons[] = {"A3_Animals_F_Animconfig", "A3_Animals_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"Sheep_random_F"};
		weapons[] = {};
	};
	class A3_Animals_F_Chicken
	{
		requiredAddons[] = {"A3_Animals_F_Beta_Chicken"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Animals_F_Dog
	{
		requiredAddons[] = {"A3_Animals_F_Beta_Dog"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Animals_F_Fishes
	{
		addonRootClass = "A3_Animals_F";
		requiredAddons[] = {"A3_Animals_F"};
		requiredVersion = 0.1;
		units[] = {"CatShark_F", "Mackerel_F", "Mullet_F", "Ornate_random_F", "Salema_F", "Tuna_F"};
		weapons[] = {};
	};
	class A3_Animals_F_Goat
	{
		requiredAddons[] = {"A3_Animals_F_Beta_Goat"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Animals_F_Kestrel
	{
		addonRootClass = "A3_Animals_F";
		requiredAddons[] = {"A3_Animals_F", "A3_Animals_F_Animconfig"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Animals_F_Rabbit
	{
		addonRootClass = "A3_Animals_F";
		requiredAddons[] = {"A3_Animals_F", "A3_Animals_F_Animconfig"};
		requiredVersion = 0.1;
		units[] = {"Rabbit_F"};
		weapons[] = {};
	};
	class A3_Animals_F_Seagull
	{
		addonRootClass = "A3_Animals_F";
		requiredAddons[] = {"A3_Animals_F", "A3_Animals_F_Animconfig"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Animals_F_Sheep
	{
		requiredAddons[] = {"A3_Animals_F_Beta_Sheep"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Animals_F_Snakes
	{
		addonRootClass = "A3_Animals_F";
		requiredAddons[] = {"A3_Animals_F", "A3_Animals_F_Animconfig"};
		requiredVersion = 0.1;
		units[] = {"Snake_random_F", "Snake_vipera_random_F"};
		weapons[] = {};
	};
	class A3_Animals_F_Turtle
	{
		addonRootClass = "A3_Animals_F";
		requiredAddons[] = {"A3_Animals_F"};
		requiredVersion = 0.1;
		units[] = {"Turtle_F"};
		weapons[] = {};
	};
	class A3_Anims_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Human Animations";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Human Animations";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Config_Sdr
	{
		addonRootClass = "A3_Anims_F";
		requiredAddons[] = {"A3_Anims_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Anims_F_Config_Sdr_WeaponSwitching
	{
		addonRootClass = "A3_Anims_F";
		requiredAddons[] = {"A3_Anims_F_Config_Sdr"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Anims_F_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Human Animations Data";
		requiredAddons[] = {"A3_Anims_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Human Animations";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Human Animations";
		requiredAddons[] = {"A3_Anims_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Human Animations";
		requiredAddons[] = {"A3_Anims_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Human Animations";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Human Animations";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Exp_Revive
	{
		addonRootClass = "A3_Anims_F_Exp";
		requiredAddons[] = {"A3_Anims_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Anims_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Human Animations";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Human Animations";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Human Animations";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Human Animations";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Anims_F_Mark_Deployment
	{
		addonRootClass = "A3_Anims_F_Mark";
		requiredAddons[] = {"A3_Anims_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Anims_F_Mod
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Official Mod - Human Animations";
		requiredAddons[] = {"A3_Data_F_Mod"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Armored Land Vehicles";
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F_AMV
	{
		requiredAddons[] = {"A3_Armor_F_Beta_APC_Wheeled_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Armor_F_APC_Wheeled_03
	{
		requiredAddons[] = {"A3_Armor_F_Gamma_APC_Wheeled_03"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Armor_F_Argo
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Armored Land Vehicles";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F_Argo_APC_Tracked_01
	{
		addonRootClass = "A3_Armor_F_Argo";
		requiredAddons[] = {"A3_Armor_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Armor_F_Argo_APC_Wheeled_02
	{
		addonRootClass = "A3_Armor_F_Argo";
		requiredAddons[] = {"A3_Armor_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Armor_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Armored Land Vehicles";
		requiredAddons[] = {"A3_Armor_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F_Beta_APC_Tracked_01
	{
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"A3_Armor_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"B_APC_Tracked_01_AA_F", "B_APC_Tracked_01_CRV_F", "B_APC_Tracked_01_rcws_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Beta_APC_Tracked_02
	{
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"A3_Armor_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"O_APC_Tracked_02_AA_F", "O_APC_Tracked_02_cannon_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Beta_APC_Wheeled_01
	{
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"A3_Armor_F_Beta", "A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"B_APC_Wheeled_01_cannon_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Beta_APC_Wheeled_02
	{
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"A3_Armor_F_Beta", "A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"O_APC_Wheeled_02_rcws_F", "O_APC_Wheeled_02_rcws_v2_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "CFGPATCHES_A3_Armor_F_Enoch";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F_Enoch_APC_Tracked_03
	{
		addonRootClass = "A3_Armor_F_Enoch";
		requiredAddons[] = {"A3_Armor_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_APC_tracked_03_cannon_F"};
		weapons[] = {};
	};
	class A3_Armor_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Armored Land Vehicles";
		requiredAddons[] = {"A3_Armor_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F_EPB_APC_Tracked_03
	{
		addonRootClass = "A3_Armor_F_EPB";
		requiredAddons[] = {"A3_Armor_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"I_APC_tracked_03_cannon_F"};
		weapons[] = {};
	};
	class A3_Armor_F_EPB_MBT_03
	{
		addonRootClass = "A3_Armor_F_EPB";
		requiredAddons[] = {"A3_Armor_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"I_MBT_03_cannon_F"};
		weapons[] = {};
	};
	class A3_Armor_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Armored Land Vehicles";
		requiredAddons[] = {"A3_Armor_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F_EPC_MBT_01
	{
		addonRootClass = "A3_Armor_F_EPC";
		requiredAddons[] = {"A3_Armor_F_EPC", "A3_Armor_F_Gamma_MBT_01"};
		requiredVersion = 0.1;
		units[] = {"B_MBT_01_TUSK_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Armored Land Vehicles";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F_Exp_APC_Tracked_01
	{
		addonRootClass = "A3_Armor_F_Exp";
		requiredAddons[] = {"A3_Armor_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_APC_Tracked_01_AA_F", "B_T_APC_Tracked_01_CRV_F", "B_T_APC_Tracked_01_rcws_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Exp_APC_Tracked_02
	{
		addonRootClass = "A3_Armor_F_Exp";
		requiredAddons[] = {"A3_Armor_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"O_T_APC_Tracked_02_AA_ghex_F", "O_T_APC_Tracked_02_cannon_ghex_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Exp_APC_Wheeled_01
	{
		addonRootClass = "A3_Armor_F_Exp";
		requiredAddons[] = {"A3_Armor_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_APC_Wheeled_01_cannon_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Exp_APC_Wheeled_02
	{
		addonRootClass = "A3_Armor_F_Exp";
		requiredAddons[] = {"A3_Armor_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"O_T_APC_Wheeled_02_rcws_ghex_F", "O_T_APC_Wheeled_02_rcws_v2_ghex_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Exp_MBT_01
	{
		addonRootClass = "A3_Armor_F_Exp";
		requiredAddons[] = {"A3_Armor_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_MBT_01_arty_F", "B_T_MBT_01_cannon_F", "B_T_MBT_01_mlrs_F", "B_T_MBT_01_TUSK_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Exp_MBT_02
	{
		addonRootClass = "A3_Armor_F_Exp";
		requiredAddons[] = {"A3_Armor_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"O_T_MBT_02_arty_ghex_F", "O_T_MBT_02_cannon_ghex_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Armored Land Vehicles";
		requiredAddons[] = {"A3_Armor_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F_Gamma_APC_Wheeled_03
	{
		addonRootClass = "A3_Armor_F_Gamma";
		requiredAddons[] = {"A3_Armor_F_Gamma", "A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"B_APC_Wheeled_03_cannon_F", "I_APC_Wheeled_03_cannon_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Gamma_MBT_01
	{
		addonRootClass = "A3_Armor_F_Gamma";
		requiredAddons[] = {"A3_Armor_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"B_MBT_01_arty_F", "B_MBT_01_cannon_F", "B_MBT_01_mlrs_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Gamma_MBT_02
	{
		addonRootClass = "A3_Armor_F_Gamma";
		requiredAddons[] = {"A3_Armor_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"O_MBT_02_arty_F", "O_MBT_02_cannon_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Marid
	{
		requiredAddons[] = {"A3_Armor_F_Beta_APC_Wheeled_02"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Armor_F_Panther
	{
		requiredAddons[] = {"A3_Armor_F_Beta_APC_Tracked_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Armor_F_Slammer
	{
		requiredAddons[] = {"A3_Armor_F_Gamma_MBT_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Armor_F_T100K
	{
		requiredAddons[] = {"A3_Armor_F_Gamma_MBT_02"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Armor_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Armored Land Vehicles";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Armor_F_Tank_AFV_Wheeled_01
	{
		addonRootClass = "A3_Armor_F_Tank";
		requiredAddons[] = {"A3_Armor_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"B_AFV_Wheeled_01_cannon_F", "B_AFV_Wheeled_01_up_cannon_F", "B_T_AFV_Wheeled_01_cannon_F", "B_T_AFV_Wheeled_01_up_cannon_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Tank_LT_01
	{
		addonRootClass = "A3_Armor_F_Tank";
		requiredAddons[] = {"A3_Armor_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"I_LT_01_AA_F", "I_LT_01_AT_F", "I_LT_01_cannon_F", "I_LT_01_scout_F"};
		weapons[] = {};
	};
	class A3_Armor_F_Tank_MBT_04
	{
		addonRootClass = "A3_Armor_F_Tank";
		requiredAddons[] = {"A3_Armor_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"O_MBT_04_cannon_F", "O_MBT_04_command_F", "O_T_MBT_04_cannon_F", "O_T_MBT_04_command_F"};
		weapons[] = {};
	};
	class A3_BaseConfig_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Legacy Definitions";
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Boat_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Boats and Submersibles";
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Boat_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Boats and Submersibles";
		requiredAddons[] = {"A3_Boat_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Boat_F_Beta_Boat_Armed_01
	{
		addonRootClass = "A3_Boat_F_Beta";
		requiredAddons[] = {"A3_Boat_F_Beta", "A3_Boat_F_Boat_Armed_01"};
		requiredVersion = 0.1;
		units[] = {"I_Boat_Armed_01_minigun_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Beta_Boat_Transport_01
	{
		addonRootClass = "A3_Boat_F_Beta";
		requiredAddons[] = {"A3_Boat_F_Beta", "A3_Boat_F_Boat_Transport_01"};
		requiredVersion = 0.1;
		units[] = {"I_Boat_Transport_01_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Beta_SDV_01
	{
		addonRootClass = "A3_Boat_F_Beta";
		requiredAddons[] = {"A3_Boat_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"B_SDV_01_F", "I_SDV_01_F", "O_SDV_01_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Boat_Armed_01
	{
		addonRootClass = "A3_Boat_F";
		requiredAddons[] = {"A3_Boat_F"};
		requiredVersion = 0.1;
		units[] = {"B_Boat_Armed_01_minigun_F", "O_Boat_Armed_01_hmg_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Boat_Transport_01
	{
		addonRootClass = "A3_Boat_F";
		requiredAddons[] = {"A3_Boat_F"};
		requiredVersion = 0.1;
		units[] = {"B_Boat_Transport_01_F", "B_Lifeboat", "C_Rubberboat", "O_Boat_Transport_01_F", "O_Lifeboat"};
		weapons[] = {};
	};
	class A3_Boat_F_Civilian_Boat
	{
		requiredAddons[] = {"A3_Boat_F_Gamma_Boat_Civil_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Boat_F_Destroyer
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Boats and Submersibles";
		requiredAddons[] = {"A3_Boat_F_Jets", "A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Boat_F_Destroyer_Destroyer_01
	{
		addonRootClass = "A3_Boat_F_Destroyer";
		requiredAddons[] = {"A3_Boat_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {"Land_Destroyer_01_base_F", "Land_Destroyer_01_hull_01_F", "Land_Destroyer_01_hull_02_F", "Land_Destroyer_01_hull_03_F", "Land_Destroyer_01_hull_04_F", "Land_Destroyer_01_hull_05_F", "Land_Destroyer_01_hull_base_F", "Land_Destroyer_01_interior_02_F", "Land_Destroyer_01_interior_03_F", "Land_Destroyer_01_interior_04_F", "ShipFlag_US_F"};
		weapons[] = {};
	};
	class A3_Boat_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Boats and Submersibles";
		requiredAddons[] = {"A3_Boat_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Boat_F_EPC_Submarine_01
	{
		addonRootClass = "A3_Boat_F_EPC";
		requiredAddons[] = {"A3_Boat_F_EPC", "A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"Submarine_01_F"};
		weapons[] = {};
	};
	class A3_Boat_F_EPC_Submarine_01_F
	{
		requiredAddons[] = {"A3_Boat_F_EPC_Submarine_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Boat_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Boats and Submersibles";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Boat_F_Exp_Boat_Armed_01
	{
		addonRootClass = "A3_Boat_F_Exp";
		requiredAddons[] = {"A3_Boat_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_Boat_Armed_01_minigun_F", "O_T_Boat_Armed_01_hmg_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Exp_Boat_Transport_01
	{
		addonRootClass = "A3_Boat_F_Exp";
		requiredAddons[] = {"A3_Boat_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_Boat_Transport_01_F", "B_T_Lifeboat", "I_C_Boat_Transport_01_F", "O_T_Boat_Transport_01_F", "O_T_Lifeboat"};
		weapons[] = {};
	};
	class A3_Boat_F_Exp_Boat_Transport_02
	{
		addonRootClass = "A3_Boat_F_Exp";
		requiredAddons[] = {"A3_Boat_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_G_Boat_Transport_02_F", "C_Boat_Transport_02_F", "I_C_Boat_Transport_02_F", "I_G_Boat_Transport_02_F", "O_G_Boat_Transport_02_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Exp_Scooter_Transport_01
	{
		addonRootClass = "A3_Boat_F_Exp";
		requiredAddons[] = {"A3_Boat_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"C_Scooter_Transport_01_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Boats and Submersibles";
		requiredAddons[] = {"A3_Boat_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Boat_F_Gamma_Boat_Civil_01
	{
		addonRootClass = "A3_Boat_F_Gamma";
		requiredAddons[] = {"A3_Boat_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"C_Boat_Civil_01_F", "C_Boat_Civil_01_police_F", "C_Boat_Civil_01_rescue_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Gamma_Boat_Civil_04
	{
		addonRootClass = "A3_Boat_F_Gamma";
		requiredAddons[] = {"A3_Boat_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"C_Boat_Civil_04_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Gamma_Boat_Transport_01
	{
		addonRootClass = "A3_Boat_F_Gamma";
		requiredAddons[] = {"A3_Boat_F_Beta_Boat_Transport_01", "A3_Boat_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"B_G_Boat_Transport_01_F", "I_G_Boat_Transport_01_F", "O_G_Boat_Transport_01_F"};
		weapons[] = {};
	};
	class A3_Boat_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Boats and Submersibles";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Boat_F_Heli_Boat_Armed_01
	{
		addonRootClass = "A3_Boat_F_Heli";
		requiredAddons[] = {"A3_Boat_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Boat_F_Heli_SDV_01
	{
		addonRootClass = "A3_Boat_F_Heli";
		requiredAddons[] = {"A3_Boat_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Boat_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Boats and Submersibles";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Boat_F_Jets_Carrier_01
	{
		addonRootClass = "A3_Boat_F_Jets";
		requiredAddons[] = {"A3_Boat_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"DynamicAirport_01_F", "Land_Carrier_01_base_F", "Land_Carrier_01_hull_01_F", "Land_Carrier_01_hull_02_F", "Land_Carrier_01_hull_03_1_F", "Land_Carrier_01_hull_03_2_F", "Land_Carrier_01_hull_04_1_F", "Land_Carrier_01_hull_04_2_F", "Land_Carrier_01_hull_05_1_F", "Land_Carrier_01_hull_05_2_F", "Land_Carrier_01_hull_06_1_F", "Land_Carrier_01_hull_06_2_F", "Land_Carrier_01_hull_07_1_F", "Land_Carrier_01_hull_07_2_F", "Land_Carrier_01_hull_08_1_F", "Land_Carrier_01_hull_08_2_F", "Land_Carrier_01_hull_09_1_F", "Land_Carrier_01_hull_09_2_F", "Land_Carrier_01_hull_base_F", "Land_Carrier_01_island_01_F", "Land_Carrier_01_island_02_F", "Land_Carrier_01_island_03_F"};
		weapons[] = {};
	};
	class A3_Boat_F_SDV_01
	{
		requiredAddons[] = {"A3_Boat_F_Beta_SDV_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Boat_F_Trawler
	{
		requiredAddons[] = {"A3_Boat_F_Gamma_Boat_Civil_04"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Cargoposes_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Crew Animations";
		requiredAddons[] = {"A3_Data_F", "A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Cargoposes_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "CFGPATCHES_A3_Cargoposes_F_Enoch";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Cargoposes_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Crew Animations";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Cargoposes_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Crew Animations";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Cargoposes_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Crew Animations";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Cargoposes_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Crew Animations";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Cargoposes_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Crew Animations";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {"B_Captain_Jay_F", "B_Captain_Pettka_F", "B_Competitor_F", "B_crew_F", "B_CTRG_Sharphooter_F", "B_CTRG_soldier_AR_A_F", "B_CTRG_soldier_engineer_exp_F", "B_CTRG_soldier_GL_LAT_F", "B_CTRG_soldier_M_medic_F", "B_diver_exp_F", "B_diver_F", "B_diver_TL_F", "B_engineer_F", "B_G_engineer_F", "B_G_medic_F", "B_G_officer_F", "B_G_Sharpshooter_F", "B_G_Soldier_A_F", "B_G_Soldier_AR_F", "B_G_Soldier_exp_F", "B_G_Soldier_F", "B_G_Soldier_GL_F", "B_G_Soldier_LAT_F", "B_G_Soldier_lite_F", "B_G_Soldier_M_F", "B_G_Soldier_SL_F", "B_G_Soldier_TL_F", "B_G_Soldier_unarmed_F", "B_G_Soldier_universal_F", "B_G_Survivor_F", "B_ghillie_ard_F", "B_ghillie_lsh_F", "B_ghillie_sard_F", "B_HeavyGunner_F", "B_helicrew_F", "B_Helipilot_F", "B_medic_F", "B_officer_F", "B_Pilot_F", "B_Protagonist_VR_F", "B_RangeMaster_F", "B_recon_exp_F", "B_recon_F", "B_recon_JTAC_F", "B_recon_LAT_F", "B_recon_M_F", "B_recon_medic_F", "B_Recon_Sharpshooter_F", "B_recon_TL_F", "B_Sharpshooter_F", "B_sniper_F", "B_Soldier_A_F", "B_soldier_AA_F", "B_soldier_AAA_F", "B_soldier_AAR_F", "B_soldier_AAT_F", "B_soldier_AR_F", "B_soldier_AT_F", "B_soldier_exp_F", "B_Soldier_F", "B_Soldier_GL_F", "B_soldier_LAT_F", "B_Soldier_lite_F", "B_soldier_M_F", "B_soldier_PG_F", "B_soldier_repair_F", "B_Soldier_SL_F", "b_soldier_survival_F", "B_Soldier_TL_F", "B_soldier_UAV_F", "B_Soldier_unarmed_F", "B_Soldier_universal_F", "B_Soldier_VR_F", "B_spotter_F", "B_Story_Colonel_F", "B_Story_Engineer_F", "B_Story_Pilot_F", "B_Story_Protagonist_F", "B_Story_SF_Captain_F", "B_Story_Tank_Commander_F", "B_support_AMG_F", "B_support_AMort_F", "B_support_GMG_F", "B_support_MG_F", "B_support_Mort_F", "B_Survivor_F", "C_Driver_1_black_F", "C_Driver_1_blue_F", "C_Driver_1_F", "C_Driver_1_green_F", "C_Driver_1_orange_F", "C_Driver_1_random_base_F", "C_Driver_1_red_F", "C_Driver_1_white_F", "C_Driver_1_yellow_F", "C_Driver_2_F", "C_Driver_3_F", "C_Driver_4_F", "C_journalist_F", "C_man_1", "C_man_1_1_F", "C_man_1_2_F", "C_man_1_3_F", "C_man_hunter_1_F", "C_man_p_beggar_F", "C_man_p_beggar_F_afro", "C_man_p_beggar_F_asia", "C_man_p_beggar_F_euro", "C_man_p_fugitive_F", "C_man_p_fugitive_F_afro", "C_man_p_fugitive_F_asia", "C_man_p_fugitive_F_euro", "C_man_p_shorts_1_F", "C_man_p_shorts_1_F_afro", "C_man_p_shorts_1_F_asia", "C_man_p_shorts_1_F_euro", "C_man_pilot_F", "C_man_polo_1_F", "C_man_polo_1_F_afro", "C_man_polo_1_F_asia", "C_man_polo_1_F_euro", "C_man_polo_2_F", "C_man_polo_2_F_afro", "C_man_polo_2_F_asia", "C_man_polo_2_F_euro", "C_man_polo_3_F", "C_man_polo_3_F_afro", "C_man_polo_3_F_asia", "C_man_polo_3_F_euro", "C_man_polo_4_F", "C_man_polo_4_F_afro", "C_man_polo_4_F_asia", "C_man_polo_4_F_euro", "C_man_polo_5_F", "C_man_polo_5_F_afro", "C_man_polo_5_F_asia", "C_man_polo_5_F_euro", "C_man_polo_6_F", "C_man_polo_6_F_afro", "C_man_polo_6_F_asia", "C_man_polo_6_F_euro", "C_man_shorts_1_F", "C_man_shorts_1_F_afro", "C_man_shorts_1_F_asia", "C_man_shorts_1_F_euro", "C_man_shorts_2_F", "C_man_shorts_2_F_afro", "C_man_shorts_2_F_asia", "C_man_shorts_2_F_euro", "C_man_shorts_3_F", "C_man_shorts_3_F_afro", "C_man_shorts_3_F_asia", "C_man_shorts_3_F_euro", "C_man_shorts_4_F", "C_man_shorts_4_F_afro", "C_man_shorts_4_F_asia", "C_man_shorts_4_F_euro", "C_man_w_worker_F", "C_Marshal_F", "C_Nikos", "C_Nikos_aged", "C_Orestes", "C_Protagonist_VR_F", "C_scientist_F", "C_Soldier_VR_F", "HeadlessClient_F", "I_Captain_Hladas_F", "I_crew_F", "I_diver_exp_F", "I_diver_F", "I_diver_TL_F", "I_engineer_F", "I_G_engineer_F", "I_G_medic_F", "I_G_officer_F", "I_G_resistanceCommander_F", "I_G_resistanceLeader_F", "I_G_Sharpshooter_F", "I_G_Soldier_A_F", "I_G_Soldier_AR_F", "I_G_Soldier_exp_F", "I_G_Soldier_F", "I_G_Soldier_GL_F", "I_G_Soldier_LAT_F", "I_G_Soldier_lite_F", "I_G_Soldier_M_F", "I_G_Soldier_SL_F", "I_G_Soldier_TL_F", "I_G_Soldier_unarmed_F", "I_G_Soldier_universal_F", "I_G_Story_Protagonist_F", "I_G_Story_SF_Captain_F", "I_G_Survivor_F", "I_ghillie_ard_F", "I_ghillie_lsh_F", "I_ghillie_sard_F", "I_helicrew_F", "I_helipilot_F", "I_medic_F", "I_officer_F", "I_pilot_F", "I_Protagonist_VR_F", "I_Sniper_F", "I_Soldier_A_F", "I_Soldier_AA_F", "I_Soldier_AAA_F", "I_Soldier_AAR_F", "I_Soldier_AAT_F", "I_Soldier_AR_F", "I_Soldier_AT_F", "I_Soldier_exp_F", "I_soldier_F", "I_Soldier_GL_F", "I_Soldier_LAT_F", "I_Soldier_lite_F", "I_Soldier_M_F", "I_Soldier_repair_F", "I_Soldier_SL_F", "I_Soldier_TL_F", "I_soldier_UAV_F", "I_Soldier_unarmed_F", "I_Soldier_universal_F", "I_Soldier_VR_F", "I_Spotter_F", "I_Story_Colonel_F", "I_support_AMG_F", "I_support_AMort_F", "I_support_GMG_F", "I_support_MG_F", "I_support_Mort_F", "I_Survivor_F", "Item_U_BG_Guerrilla_6_1", "Item_U_C_Journalist", "Item_U_C_Scientist", "Item_U_IG_Guerrilla_6_1", "Item_U_OG_Guerrilla_6_1", "O_crew_F", "O_diver_exp_F", "O_diver_F", "O_diver_TL_F", "O_engineer_F", "O_engineer_U_F", "O_G_engineer_F", "O_G_medic_F", "O_G_officer_F", "O_G_Sharpshooter_F", "O_G_Soldier_A_F", "O_G_Soldier_AR_F", "O_G_Soldier_exp_F", "O_G_Soldier_F", "O_G_Soldier_GL_F", "O_G_Soldier_LAT_F", "O_G_Soldier_lite_F", "O_G_Soldier_M_F", "O_G_Soldier_SL_F", "O_G_Soldier_TL_F", "O_G_Soldier_unarmed_F", "O_G_Soldier_universal_F", "O_G_Survivor_F", "O_ghillie_ard_F", "O_ghillie_lsh_F", "O_ghillie_sard_F", "O_HeavyGunner_F", "O_helicrew_F", "O_helipilot_F", "O_medic_F", "O_officer_F", "O_Pathfinder_F", "O_Pilot_F", "O_Protagonist_VR_F", "O_recon_exp_F", "O_recon_F", "O_recon_JTAC_F", "O_recon_LAT_F", "O_recon_M_F", "O_recon_medic_F", "O_recon_TL_F", "O_Sharpshooter_F", "O_sniper_F", "O_Soldier_A_F", "O_Soldier_AA_F", "O_Soldier_AAA_F", "O_Soldier_AAR_F", "O_Soldier_AAT_F", "O_Soldier_AR_F", "O_Soldier_AT_F", "O_soldier_exp_F", "O_Soldier_F", "O_Soldier_GL_F", "O_Soldier_LAT_F", "O_Soldier_lite_F", "O_soldier_M_F", "O_soldier_PG_F", "O_soldier_repair_F", "O_Soldier_SL_F", "O_Soldier_TL_F", "O_soldier_UAV_F", "O_Soldier_unarmed_F", "O_Soldier_universal_F", "O_Soldier_VR_F", "O_soldierU_A_F", "O_soldierU_AA_F", "O_soldierU_AAA_F", "O_soldierU_AAR_F", "O_soldierU_AAT_F", "O_soldierU_AR_F", "O_soldierU_AT_F", "O_soldierU_exp_F", "O_soldierU_F", "O_SoldierU_GL_F", "O_soldierU_LAT_F", "O_soldierU_M_F", "O_soldierU_medic_F", "O_soldierU_repair_F", "O_SoldierU_SL_F", "O_soldierU_TL_F", "O_SoldierU_unarmed_F", "O_spotter_F", "O_Story_CEO_F", "O_Story_Colonel_F", "O_support_AMG_F", "O_support_AMort_F", "O_support_GMG_F", "O_support_MG_F", "O_support_Mort_F", "O_Survivor_F", "O_Urban_HeavyGunner_F", "O_Urban_Sharpshooter_F", "Supply0", "Supply1", "Supply10", "Supply100", "Supply110", "Supply120", "Supply130", "Supply140", "Supply150", "Supply160", "Supply170", "Supply180", "Supply190", "Supply2", "Supply20", "Supply200", "Supply210", "Supply220", "Supply230", "Supply240", "Supply250", "Supply3", "Supply30", "Supply300", "Supply350", "Supply380", "Supply4", "Supply40", "Supply400", "Supply420", "Supply440", "Supply450", "Supply480", "Supply5", "Supply50", "Supply500", "Supply6", "Supply60", "Supply7", "Supply70", "Supply8", "Supply80", "Supply9", "Supply90", "Vest_V_Press_F", "VirtualMan_F"};
		url = "https://www.arma3.com";
		weapons[] = {"H_Bandanna_blu", "H_Bandanna_camo", "H_Bandanna_cbr", "H_Bandanna_gry", "H_Bandanna_khk", "H_Bandanna_khk_hs", "H_Bandanna_mcamo", "H_Bandanna_sand", "H_Bandanna_sgg", "H_Bandanna_surfer", "H_Bandanna_surfer_blk", "H_Bandanna_surfer_grn", "H_BandMask_blk", "H_BandMask_demon", "H_BandMask_khk", "H_BandMask_reaper", "H_Beret_02", "H_Beret_blk", "H_Beret_blk_POLICE", "H_Beret_brn_SF", "H_Beret_Colonel", "H_Beret_grn", "H_Beret_grn_SF", "H_Beret_ocamo", "H_Beret_red", "H_Booniehat_dgtl", "H_Booniehat_dirty", "H_Booniehat_grn", "H_Booniehat_indp", "H_Booniehat_khk", "H_Booniehat_khk_hs", "H_Booniehat_mcamo", "H_Booniehat_oli", "H_Booniehat_tan", "H_Cap_blk", "H_Cap_blk_CMMG", "H_Cap_blk_ION", "H_Cap_blk_Raven", "H_Cap_blu", "H_Cap_brn_SPECOPS", "H_Cap_grn", "H_Cap_grn_BI", "H_Cap_headphones", "H_Cap_khaki_specops_UK", "H_Cap_marshal", "H_Cap_oli", "H_Cap_oli_hs", "H_Cap_police", "H_Cap_press", "H_Cap_red", "H_Cap_surfer", "H_Cap_tan", "H_Cap_tan_specops_US", "H_Cap_usblack", "H_CrewHelmetHeli_B", "H_CrewHelmetHeli_I", "H_CrewHelmetHeli_O", "H_Hat_blue", "H_Hat_brown", "H_Hat_camo", "H_Hat_checker", "H_Hat_grey", "H_Hat_tan", "H_Helmet_Kerry", "H_HelmetB", "H_HelmetB_black", "H_HelmetB_camo", "H_HelmetB_desert", "H_HelmetB_grass", "H_HelmetB_light", "H_HelmetB_light_black", "H_HelmetB_light_desert", "H_HelmetB_light_grass", "H_HelmetB_light_sand", "H_HelmetB_light_snakeskin", "H_HelmetB_paint", "H_HelmetB_plain_blk", "H_HelmetB_plain_mcamo", "H_HelmetB_sand", "H_HelmetB_snakeskin", "H_HelmetCrew_B", "H_HelmetCrew_I", "H_HelmetCrew_O", "H_HelmetIA", "H_HelmetIA_camo", "H_HelmetIA_net", "H_HelmetLeaderO_ocamo", "H_HelmetLeaderO_oucamo", "H_HelmetO_ocamo", "H_HelmetO_oucamo", "H_HelmetSpecB", "H_HelmetSpecB_blk", "H_HelmetSpecB_paint1", "H_HelmetSpecB_paint2", "H_HelmetSpecB_sand", "H_HelmetSpecB_snakeskin", "H_HelmetSpecO_blk", "H_HelmetSpecO_ocamo", "H_MilCap_blue", "H_MilCap_dgtl", "H_MilCap_gry", "H_MilCap_mcamo", "H_MilCap_ocamo", "H_MilCap_oucamo", "H_MilCap_rucamo", "H_PilotHelmetFighter_B", "H_PilotHelmetFighter_I", "H_PilotHelmetFighter_O", "H_PilotHelmetHeli_B", "H_PilotHelmetHeli_I", "H_PilotHelmetHeli_O", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_orange_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_white_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F", "H_Shemag_khk", "H_Shemag_olive", "H_Shemag_olive_hs", "H_Shemag_tan", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "H_StrawHat", "H_StrawHat_dark", "H_TurbanO_blk", "H_Watchcap_blk", "H_Watchcap_camo", "H_Watchcap_cbr", "H_Watchcap_khk", "H_Watchcap_sgg", "U_AntigonaBody", "U_AttisBody", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_tshirt", "U_B_CombatUniform_mcam_vest", "U_B_CombatUniform_mcam_worn", "U_B_CombatUniform_sgg", "U_B_CombatUniform_sgg_tshirt", "U_B_CombatUniform_sgg_vest", "U_B_CombatUniform_wdl", "U_B_CombatUniform_wdl_tshirt", "U_B_CombatUniform_wdl_vest", "U_B_CTRG_1", "U_B_CTRG_2", "U_B_CTRG_3", "U_B_FullGhillie_ard", "U_B_FullGhillie_lsh", "U_B_FullGhillie_sard", "U_B_GhillieSuit", "U_B_HeliPilotCoveralls", "U_B_PilotCoveralls", "U_B_Protagonist_VR", "U_B_Soldier_VR", "U_B_SpecopsUniform_sgg", "U_B_survival_uniform", "U_B_Wetsuit", "U_BasicBody", "U_BG_Guerilla1_1", "U_BG_Guerilla2_1", "U_BG_Guerilla2_2", "U_BG_Guerilla2_3", "U_BG_Guerilla3_1", "U_BG_Guerilla3_2", "U_BG_Guerrilla_6_1", "U_BG_leader", "U_C_Commoner1_1", "U_C_Commoner1_2", "U_C_Commoner1_3", "U_C_Commoner2_1", "U_C_Commoner2_2", "U_C_Commoner2_3", "U_C_Commoner_shorts", "U_C_Driver_1", "U_C_Driver_1_black", "U_C_Driver_1_blue", "U_C_Driver_1_green", "U_C_Driver_1_orange", "U_C_Driver_1_red", "U_C_Driver_1_white", "U_C_Driver_1_yellow", "U_C_Driver_2", "U_C_Driver_3", "U_C_Driver_4", "U_C_Farmer", "U_C_Fisherman", "U_C_FishermanOveralls", "U_C_HunterBody_brn", "U_C_HunterBody_grn", "U_C_Journalist", "U_C_Novak", "U_C_Poloshirt_blue", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_redwhite", "U_C_Poloshirt_salmon", "U_C_Poloshirt_stripped", "U_C_Poloshirt_tricolour", "U_C_Poor_1", "U_C_Poor_2", "U_C_Poor_shorts_1", "U_C_Poor_shorts_2", "U_C_PriestBody", "U_C_Protagonist_VR", "U_C_Scavenger_1", "U_C_Scavenger_2", "U_C_Scientist", "U_C_ShirtSurfer_shorts", "U_C_Soldier_VR", "U_C_TeeSurfer_shorts_1", "U_C_TeeSurfer_shorts_2", "U_C_WorkerCoveralls", "U_C_WorkerOveralls", "U_Competitor", "U_I_CombatUniform", "U_I_CombatUniform_shortsleeve", "U_I_CombatUniform_tshirt", "U_I_FullGhillie_ard", "U_I_FullGhillie_lsh", "U_I_FullGhillie_sard", "U_I_G_resistanceLeader_F", "U_I_G_Story_Protagonist_F", "U_I_GhillieSuit", "U_I_HeliPilotCoveralls", "U_I_OfficerUniform", "U_I_pilotCoveralls", "U_I_Protagonist_VR", "U_I_Soldier_VR", "U_I_Wetsuit", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_IG_Guerilla3_2", "U_IG_Guerrilla_6_1", "U_IG_leader", "U_IG_Menelaos", "U_KerryBody", "U_Marshal", "U_MillerBody", "U_NikosAgedBody", "U_NikosBody", "U_O_CombatUniform_ocamo", "U_O_CombatUniform_oucamo", "U_O_FullGhillie_ard", "U_O_FullGhillie_lsh", "U_O_FullGhillie_sard", "U_O_GhillieSuit", "U_O_OfficerUniform_ocamo", "U_O_PilotCoveralls", "U_O_Protagonist_VR", "U_O_Soldier_VR", "U_O_SpecopsUniform_blk", "U_O_SpecopsUniform_ocamo", "U_O_Wetsuit", "U_OG_Guerilla1_1", "U_OG_Guerilla2_1", "U_OG_Guerilla2_2", "U_OG_Guerilla2_3", "U_OG_Guerilla3_1", "U_OG_Guerilla3_2", "U_OG_Guerrilla_6_1", "U_OG_leader", "U_OI_Scientist", "U_OrestesBody", "U_Rangemaster", "V_BandollierB_blk", "V_BandollierB_cbr", "V_BandollierB_khk", "V_BandollierB_oli", "V_BandollierB_rgr", "V_Chestrig_blk", "V_Chestrig_khk", "V_Chestrig_oli", "V_Chestrig_rgr", "V_HarnessO_brn", "V_HarnessO_gry", "V_HarnessOGL_brn", "V_HarnessOGL_gry", "V_HarnessOSpec_brn", "V_HarnessOSpec_gry", "V_I_G_resistanceLeader_F", "V_PlateCarrier1_blk", "V_PlateCarrier1_rgr", "V_PlateCarrier2_blk", "V_PlateCarrier2_rgr", "V_PlateCarrier3_rgr", "V_PlateCarrier_Kerry", "V_PlateCarrierGL_blk", "V_PlateCarrierGL_mtp", "V_PlateCarrierGL_rgr", "V_PlateCarrierH_CTRG", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierIAGL_oli", "V_PlateCarrierL_CTRG", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_mtp", "V_PlateCarrierSpec_rgr", "V_Press_F", "V_Rangemaster_belt", "V_RebreatherB", "V_RebreatherIA", "V_RebreatherIR", "V_TacVest_blk", "V_TacVest_blk_POLICE", "V_TacVest_brn", "V_TacVest_camo", "V_TacVest_khk", "V_TacVest_oli", "V_TacVestCamo_khk", "V_TacVestIR_blk"};
	};
	class A3_Characters_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Characters and Clothing";
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_Beta_INDEP
	{
		addonRootClass = "A3_Characters_F_Beta";
		requiredAddons[] = {"A3_Characters_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_BLUFOR
	{
		addonRootClass = "A3_Characters_F";
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_Bootcamp_Common
	{
		addonRootClass = "A3_Characters_F_Bootcamp";
		requiredAddons[] = {"A3_Characters_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_Civil
	{
		addonRootClass = "A3_Characters_F";
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_Common
	{
		addonRootClass = "A3_Characters_F";
		requiredAddons[] = {"A3_Characters_F", "A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR"};
		requiredVersion = 0.1;
		units[] = {"B_UAV_AI", "B_UAV_AI_F", "I_UAV_AI", "I_UAV_AI_F", "O_UAV_AI", "O_UAV_AI_F", "Underwear_F"};
		weapons[] = {};
	};
	class A3_Characters_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"B_CBRN_Man_Oversuit_01_MTP_F", "B_CBRN_Man_Oversuit_01_Tropic_F", "B_CBRN_Man_Oversuit_01_Wdl_F", "B_CombatFatigues_01_Tshirt_wdl_F", "B_CombatFatigues_01_wdl_F", "B_Patrol_Carryall_green_Ammo_F", "B_Patrol_Carryall_taiga_medic_F", "B_Patrol_FieldPack_green_eng_F", "B_ReconFatigues_01_wdl_F", "B_soldier_UGV_02_Demining_F", "B_soldier_UGV_02_Science_F", "B_W_Crew_F", "B_W_Engineer_F", "B_W_Helicrew_F", "B_W_Helipilot_F", "B_W_Medic_F", "B_W_Officer_F", "B_W_RadioOperator_F", "B_W_Soldier_A_F", "B_W_Soldier_AA_F", "B_W_Soldier_AAA_F", "B_W_Soldier_AAR_F", "B_W_Soldier_AAT_F", "B_W_Soldier_AR_F", "B_W_Soldier_AT_F", "B_W_Soldier_CBRN_F", "B_W_Soldier_Exp_F", "B_W_Soldier_F", "B_W_Soldier_GL_F", "B_W_Soldier_LAT2_F", "B_W_Soldier_LAT_F", "B_W_soldier_M_F", "B_W_soldier_mine_F", "B_W_Soldier_Repair_F", "B_W_Soldier_SL_F", "B_W_Soldier_TL_F", "B_W_Soldier_UAV_F", "B_W_soldier_UGV_02_Demining_F", "B_W_soldier_UGV_02_Science_F", "B_W_Soldier_unarmed_F", "B_W_Soldier_universal_F", "B_W_Support_AMG_F", "B_W_Support_AMort_F", "B_W_Support_GMG_F", "B_W_Support_MG_F", "B_W_Support_Mort_F", "B_W_Survivor_F", "C_CBRN_Man_Oversuit_01_Blue_F", "C_CBRN_Man_Oversuit_01_White_F", "C_E_LooterJacket_01_F", "C_Farmer_01_enoch_F", "C_Man_1_enoch_F", "C_Man_2_enoch_F", "C_Man_3_enoch_F", "C_Man_4_enoch_F", "C_Man_5_enoch_F", "C_Man_6_enoch_F", "C_scientist_01_formal_F", "C_scientist_01_informal_F", "C_scientist_02_formal_F", "C_scientist_02_informal_F", "C_Uniform_Farmer_01_F", "C_Uniform_Scientist_01_F", "C_Uniform_Scientist_01_formal_F", "C_Uniform_Scientist_02_F", "C_Uniform_Scientist_02_formal_F", "CivilianPresence_C_Farmer_01_enoch_F", "CivilianPresence_C_Man_1_enoch_F", "CivilianPresence_C_Man_2_enoch_F", "CivilianPresence_C_Man_3_enoch_F", "CivilianPresence_C_Man_4_enoch_F", "CivilianPresence_C_Man_5_enoch_F", "CivilianPresence_C_Man_6_enoch_F", "I_CBRN_Man_Oversuit_01_AAF_F", "I_E_CBRN_Man_Oversuit_01_EAF_F", "I_E_Crew_F", "I_E_Engineer_F", "I_E_Helicrew_F", "I_E_Helipilot_F", "I_E_Medic_F", "I_E_Officer_F", "I_E_RadioOperator_F", "I_E_Scientist_F", "I_E_Scientist_Unarmed_F", "I_E_Soldier_A_F", "I_E_Soldier_AA_F", "I_E_Soldier_AAA_F", "I_E_Soldier_AAR_F", "I_E_Soldier_AAT_F", "I_E_Soldier_AR_F", "I_E_Soldier_AT_F", "I_E_Soldier_CBRN_F", "I_E_Soldier_Exp_F", "I_E_Soldier_F", "I_E_Soldier_GL_F", "I_E_Soldier_LAT2_F", "I_E_Soldier_LAT_F", "I_E_Soldier_lite_F", "I_E_soldier_M_F", "I_E_soldier_Mine_F", "I_E_soldier_MP_F", "I_E_Soldier_Pathfinder_F", "I_E_Soldier_Repair_F", "I_E_Soldier_SL_F", "I_E_Soldier_TL_F", "I_E_soldier_UAV_06_F", "I_E_soldier_UAV_06_medical_F", "I_E_Soldier_UAV_F", "I_E_soldier_UGV_02_Demining_F", "I_E_soldier_UGV_02_Science_F", "I_E_Soldier_unarmed_F", "I_E_Soldier_universal_F", "I_E_Support_AMG_F", "I_E_Support_AMort_F", "I_E_Support_GMG_F", "I_E_Support_MG_F", "I_E_Support_Mort_F", "I_E_Survivor_F", "I_E_Uniform_01_coveralls_F", "I_E_Uniform_01_F", "I_E_Uniform_01_officer_F", "I_E_Uniform_01_shortsleeve_F", "I_E_Uniform_01_sweater_F", "I_E_Uniform_01_tanktop_F", "I_L_Criminal_SG_F", "I_L_Criminal_SMG_F", "I_L_Hunter_F", "I_L_Looter_Pistol_F", "I_L_Looter_Rifle_F", "I_L_Looter_SG_F", "I_L_Looter_SMG_F", "I_L_Uniform_01_camo_F", "I_L_Uniform_01_deserter_F", "I_L_Uniform_01_tshirt_black_F", "I_L_Uniform_01_tshirt_olive_F", "I_L_Uniform_01_tshirt_skull_F", "I_L_Uniform_01_tshirt_sport_F", "Item_U_B_CBRN_Suit_01_MTP_F", "Item_U_B_CBRN_Suit_01_Tropic_F", "Item_U_B_CBRN_Suit_01_Wdl_F", "Item_U_B_CombatUniform_mcam_wdl_f", "Item_U_B_CombatUniform_tshirt_mcam_wdL_f", "Item_U_B_CombatUniform_vest_mcam_wdl_f", "Item_U_C_CBRN_Suit_01_Blue_F", "Item_U_C_CBRN_Suit_01_White_F", "Item_U_C_E_LooterJacket_01_F", "Item_U_C_Uniform_Farmer_01_F", "Item_U_C_Uniform_Scientist_01_F", "Item_U_C_Uniform_Scientist_01_formal_F", "Item_U_C_Uniform_Scientist_02_F", "Item_U_C_Uniform_Scientist_02_formal_F", "Item_U_I_CBRN_Suit_01_AAF_F", "Item_U_I_E_CBRN_Suit_01_EAF_F", "Item_U_I_E_Uniform_01_coveralls_F", "Item_U_I_E_Uniform_01_F", "Item_U_I_E_Uniform_01_officer_F", "Item_U_I_E_Uniform_01_shortsleeve_F", "Item_U_I_E_Uniform_01_sweater_F", "Item_U_I_E_Uniform_01_tanktop_F", "Item_U_I_L_Uniform_01_camo_F", "Item_U_I_L_Uniform_01_deserter_F", "Item_U_I_L_Uniform_01_tshirt_black_F", "Item_U_I_L_Uniform_01_tshirt_olive_F", "Item_U_I_L_Uniform_01_tshirt_skull_F", "Item_U_I_L_Uniform_01_tshirt_sport_F", "Item_U_O_R_Gorka_01_black_F", "Item_U_O_R_Gorka_01_brown_F", "Item_U_O_R_Gorka_01_camo_F", "Item_U_O_R_Gorka_01_F", "O_R_Gorka_base_F", "O_R_Gorka_black_F", "O_R_Gorka_brown_F", "O_R_Gorka_camo_F", "O_R_Gorka_F", "O_R_JTAC_F", "O_R_medic_F", "O_R_Patrol_Soldier_A_F", "O_R_Patrol_Soldier_AR2_F", "O_R_Patrol_Soldier_AR_F", "O_R_Patrol_Soldier_Engineer_F", "O_R_Patrol_Soldier_GL_F", "O_R_Patrol_Soldier_LAT_F", "O_R_Patrol_Soldier_M2_F", "O_R_Patrol_Soldier_M_F", "O_R_Patrol_Soldier_Medic", "O_R_Patrol_Soldier_TL_F", "O_R_recon_AR_F", "O_R_recon_exp_F", "O_R_recon_GL_F", "O_R_recon_JTAC_F", "O_R_recon_LAT_F", "O_R_recon_M_F", "O_R_recon_medic_F", "O_R_recon_TL_F", "O_R_Soldier_AR_F", "O_R_soldier_exp_F", "O_R_Soldier_GL_F", "O_R_Soldier_LAT_F", "O_R_soldier_M_F", "O_R_Soldier_TL_F"};
		url = "https://www.arma3.com";
		weapons[] = {"U_B_CBRN_Suit_01_MTP_F", "U_B_CBRN_Suit_01_Tropic_F", "U_B_CBRN_Suit_01_Wdl_F", "U_B_CombatUniform_mcam_wdl_f", "U_B_CombatUniform_tshirt_mcam_wdL_f", "U_B_CombatUniform_vest_mcam_wdl_f", "U_C_CBRN_Suit_01_Blue_F", "U_C_CBRN_Suit_01_White_F", "U_C_E_LooterJacket_01_F", "U_C_Uniform_Farmer_01_F", "U_C_Uniform_Scientist_01_F", "U_C_Uniform_Scientist_01_formal_F", "U_C_Uniform_Scientist_02_F", "U_C_Uniform_Scientist_02_formal_F", "U_I_CBRN_Suit_01_AAF_F", "U_I_E_CBRN_Suit_01_EAF_F", "U_I_E_Uniform_01_coveralls_F", "U_I_E_Uniform_01_F", "U_I_E_Uniform_01_officer_F", "U_I_E_Uniform_01_shortsleeve_F", "U_I_E_Uniform_01_sweater_F", "U_I_E_Uniform_01_tanktop_F", "U_I_L_Uniform_01_camo_F", "U_I_L_Uniform_01_deserter_F", "U_I_L_Uniform_01_tshirt_black_F", "U_I_L_Uniform_01_tshirt_olive_F", "U_I_L_Uniform_01_tshirt_skull_F", "U_I_L_Uniform_01_tshirt_sport_F", "U_O_R_Gorka_01_black_F", "U_O_R_Gorka_01_brown_F", "U_O_R_Gorka_01_camo_F", "U_O_R_Gorka_01_F"};
	};
	class A3_Characters_F_Enoch_Facewear
	{
		addonRootClass = "A3_Characters_F_Enoch";
		requiredAddons[] = {"A3_Characters_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_Enoch_Headgear
	{
		addonRootClass = "A3_Characters_F_Enoch";
		requiredAddons[] = {"A3_Characters_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Headgear_H_Beret_EAF_01_F", "Headgear_H_Booniehat_eaf", "Headgear_H_Booniehat_mgrn", "Headgear_H_Booniehat_taiga", "Headgear_H_Booniehat_wdl", "Headgear_H_CrewHelmetHeli_I_E", "Headgear_H_Hat_Tinfoil_F", "Headgear_H_HelmetAggressor_cover_F", "Headgear_H_HelmetAggressor_cover_taiga_F", "Headgear_H_HelmetAggressor_F", "Headgear_H_HelmetB_light_wdl", "Headgear_H_HelmetB_plain_wdl", "Headgear_H_HelmetCrew_I_E", "Headgear_H_HelmetHBK_chops_F", "Headgear_H_HelmetHBK_ear_F", "Headgear_H_HelmetHBK_F", "Headgear_H_HelmetHBK_headset_F", "Headgear_H_HelmetSpecB_wdl", "Headgear_H_MilCap_eaf", "Headgear_H_MilCap_grn", "Headgear_H_MilCap_taiga", "Headgear_H_MilCap_wdl", "Headgear_H_PilotHelmetFighter_I_E", "Headgear_H_PilotHelmetHeli_I_E", "Headgear_H_Tank_eaf_F"};
		weapons[] = {"H_Beret_EAF_01_F", "H_Booniehat_eaf", "H_Booniehat_mgrn", "H_Booniehat_taiga", "H_Booniehat_wdl", "H_CrewHelmetHeli_I_E", "H_Hat_Tinfoil_F", "H_HelmetAggressor_cover_F", "H_HelmetAggressor_cover_taiga_F", "H_HelmetAggressor_F", "H_HelmetB_light_wdl", "H_HelmetB_plain_wdl", "H_HelmetCrew_I_E", "H_HelmetHBK_chops_F", "H_HelmetHBK_ear_F", "H_HelmetHBK_F", "H_HelmetHBK_headset_F", "H_HelmetSpecB_wdl", "H_MilCap_eaf", "H_MilCap_grn", "H_MilCap_taiga", "H_MilCap_wdl", "H_PilotHelmetFighter_I_E", "H_PilotHelmetHeli_I_E", "H_Tank_eaf_F"};
	};
	class A3_Characters_F_Enoch_Vests
	{
		addonRootClass = "A3_Characters_F_Enoch";
		requiredAddons[] = {"A3_Characters_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Vest_V_CarrierRigKBT_01_EAF_F", "Vest_V_CarrierRigKBT_01_heavy_EAF_F", "Vest_V_CarrierRigKBT_01_heavy_olive_F", "Vest_V_CarrierRigKBT_01_light_EAF_F", "Vest_V_CarrierRigKBT_01_light_olive_F", "Vest_V_CarrierRigKBT_01_olive_F", "Vest_V_PlateCarrier1_wdl", "Vest_V_PlateCarrier2_wdl", "Vest_V_PlateCarrierGL_wdl", "Vest_V_PlateCarrierSpec_wdl", "Vest_V_SmershVest_01_F", "Vest_V_SmershVest_01_radio_F"};
		weapons[] = {"V_CarrierRigKBT_01_EAF_F", "V_CarrierRigKBT_01_heavy_EAF_F", "V_CarrierRigKBT_01_heavy_Olive_F", "V_CarrierRigKBT_01_light_EAF_F", "V_CarrierRigKBT_01_light_Olive_F", "V_CarrierRigKBT_01_Olive_F", "V_PlateCarrier1_wdl", "V_PlateCarrier2_wdl", "V_PlateCarrierGL_wdl", "V_PlateCarrierSpec_wdl", "V_SmershVest_01_F", "V_SmershVest_01_radio_F"};
	};
	class A3_Characters_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Characters and Clothing";
		requiredAddons[] = {"A3_Characters_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Characters and Clothing";
		requiredAddons[] = {"A3_Characters_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_EPB_Heads
	{
		addonRootClass = "A3_Characters_F_EPB";
		requiredAddons[] = {"A3_Characters_F_EPB", "A3_Characters_F_Heads"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Characters and Clothing";
		requiredAddons[] = {"A3_Characters_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_Captain_Dwarden_F", "B_CTRG_Miller_F", "B_CTRG_Soldier_2_F", "B_CTRG_Soldier_3_F", "B_CTRG_Soldier_AR_tna_F", "B_CTRG_Soldier_Exp_tna_F", "B_CTRG_Soldier_F", "B_CTRG_Soldier_JTAC_tna_F", "B_CTRG_Soldier_LAT_tna_F", "B_CTRG_Soldier_M_tna_F", "B_CTRG_Soldier_Medic_tna_F", "B_CTRG_Soldier_TL_tna_F", "B_CTRG_Soldier_tna_F", "B_CTRG_Soldier_universal_F", "B_CTRG_Soldier_urb_1_F", "B_CTRG_Soldier_urb_2_F", "B_CTRG_Soldier_urb_3_F", "B_G_Captain_Ivan_F", "B_GEN_Commander_F", "B_GEN_Soldier_F", "B_GEN_Soldier_universal_F", "B_T_Crew_F", "B_T_Diver_Exp_F", "B_T_Diver_F", "B_T_Diver_TL_F", "B_T_Engineer_F", "B_T_ghillie_tna_F", "B_T_Helicrew_F", "B_T_Helipilot_F", "B_T_Medic_F", "B_T_Officer_F", "B_T_Pilot_F", "B_T_Recon_Exp_F", "B_T_Recon_F", "B_T_Recon_JTAC_F", "B_T_Recon_LAT_F", "B_T_Recon_M_F", "B_T_Recon_Medic_F", "B_T_Recon_TL_F", "B_T_Sniper_F", "B_T_Soldier_A_F", "B_T_Soldier_AA_F", "B_T_Soldier_AAA_F", "B_T_Soldier_AAR_F", "B_T_Soldier_AAT_F", "B_T_Soldier_AR_F", "B_T_Soldier_AT_F", "B_T_Soldier_Exp_F", "B_T_Soldier_F", "B_T_Soldier_GL_F", "B_T_Soldier_LAT_F", "B_T_soldier_M_F", "B_T_Soldier_PG_F", "B_T_Soldier_Repair_F", "B_T_Soldier_SL_F", "B_T_Soldier_TL_F", "B_T_Soldier_UAV_F", "B_T_Soldier_unarmed_F", "B_T_Soldier_universal_F", "B_T_Spotter_F", "B_T_Support_AMG_F", "B_T_Support_AMort_F", "B_T_Support_GMG_F", "B_T_Support_MG_F", "B_T_Support_Mort_F", "I_C_Helipilot_F", "I_C_Pilot_F", "I_C_Soldier_Bandit_1_F", "I_C_Soldier_Bandit_2_F", "I_C_Soldier_Bandit_3_F", "I_C_Soldier_Bandit_4_F", "I_C_Soldier_Bandit_5_F", "I_C_Soldier_Bandit_6_F", "I_C_Soldier_Bandit_7_F", "I_C_Soldier_Bandit_8_F", "I_C_Soldier_base_unarmed_F", "I_C_Soldier_Camo_F", "I_C_Soldier_Para_1_F", "I_C_Soldier_Para_2_F", "I_C_Soldier_Para_3_F", "I_C_Soldier_Para_4_F", "I_C_Soldier_Para_5_F", "I_C_Soldier_Para_6_F", "I_C_Soldier_Para_7_F", "I_C_Soldier_Para_8_F", "I_C_Soldier_universal_F", "Item_U_B_CTRG_Soldier_2_F", "Item_U_B_CTRG_Soldier_3_F", "Item_U_B_CTRG_Soldier_F", "Item_U_B_CTRG_Soldier_urb_1_F", "Item_U_B_CTRG_Soldier_urb_2_F", "Item_U_B_CTRG_Soldier_urb_3_F", "Item_U_B_GEN_Commander_F", "Item_U_B_GEN_Soldier_F", "Item_U_B_T_FullGhillie_tna_F", "Item_U_B_T_Sniper_F", "Item_U_B_T_Soldier_AR_F", "Item_U_B_T_Soldier_F", "Item_U_B_T_Soldier_SL_F", "Item_U_C_Man_casual_1_F", "Item_U_C_Man_casual_2_F", "Item_U_C_Man_casual_3_F", "Item_U_C_Man_casual_4_F", "Item_U_C_Man_casual_5_F", "Item_U_C_Man_casual_6_F", "Item_U_C_man_sport_1_F", "Item_U_C_man_sport_2_F", "Item_U_C_man_sport_3_F", "Item_U_I_C_Soldier_Bandit_1_F", "Item_U_I_C_Soldier_Bandit_2_F", "Item_U_I_C_Soldier_Bandit_3_F", "Item_U_I_C_Soldier_Bandit_4_F", "Item_U_I_C_Soldier_Bandit_5_F", "Item_U_I_C_Soldier_Camo_F", "Item_U_I_C_Soldier_Para_1_F", "Item_U_I_C_Soldier_Para_2_F", "Item_U_I_C_Soldier_Para_3_F", "Item_U_I_C_Soldier_Para_4_F", "Item_U_I_C_Soldier_Para_5_F", "Item_U_O_T_FullGhillie_tna_F", "Item_U_O_T_Officer_F", "Item_U_O_T_Sniper_F", "Item_U_O_T_Soldier_F", "Item_U_O_V_Soldier_Viper_F", "Item_U_O_V_Soldier_Viper_hex_F", "O_T_Crew_F", "O_T_Diver_Exp_F", "O_T_Diver_F", "O_T_Diver_TL_F", "O_T_Engineer_F", "O_T_ghillie_tna_F", "O_T_Helicrew_F", "O_T_Helipilot_F", "O_T_Medic_F", "O_T_Officer_F", "O_T_Pilot_F", "O_T_Recon_Exp_F", "O_T_Recon_F", "O_T_Recon_JTAC_F", "O_T_Recon_LAT_F", "O_T_Recon_M_F", "O_T_Recon_Medic_F", "O_T_Recon_TL_F", "O_T_Sniper_F", "O_T_Soldier_A_F", "O_T_Soldier_AA_F", "O_T_Soldier_AAA_F", "O_T_Soldier_AAR_F", "O_T_Soldier_AAT_F", "O_T_Soldier_AR_F", "O_T_Soldier_AT_F", "O_T_Soldier_Exp_F", "O_T_Soldier_F", "O_T_Soldier_GL_F", "O_T_Soldier_LAT_F", "O_T_Soldier_M_F", "O_T_Soldier_PG_F", "O_T_Soldier_Repair_F", "O_T_Soldier_SL_F", "O_T_Soldier_TL_F", "O_T_Soldier_UAV_F", "O_T_Soldier_unarmed_F", "O_T_Soldier_universal_F", "O_T_Spotter_F", "O_T_Support_AMG_F", "O_T_Support_AMort_F", "O_T_Support_GMG_F", "O_T_Support_MG_F", "O_T_Support_Mort_F", "O_V_Soldier_Exp_ghex_F", "O_V_Soldier_Exp_hex_F", "O_V_Soldier_ghex_F", "O_V_Soldier_hex_F", "O_V_Soldier_JTAC_ghex_F", "O_V_Soldier_JTAC_hex_F", "O_V_Soldier_LAT_ghex_F", "O_V_Soldier_LAT_hex_F", "O_V_Soldier_M_ghex_F", "O_V_Soldier_M_hex_F", "O_V_Soldier_Medic_ghex_F", "O_V_Soldier_Medic_hex_F", "O_V_Soldier_TL_ghex_F", "O_V_Soldier_TL_hex_F", "O_V_Soldier_Viper_F", "O_V_Soldier_Viper_hex_F"};
		url = "https://www.arma3.com";
		weapons[] = {"U_B_CTRG_Soldier_2_F", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_G_Captain_Ivan_F", "U_B_GEN_Commander_F", "U_B_GEN_Soldier_F", "U_B_T_FullGhillie_tna_F", "U_B_T_Sniper_F", "U_B_T_Soldier_AR_F", "U_B_T_Soldier_F", "U_B_T_Soldier_SL_F", "U_C_Man_casual_1_F", "U_C_Man_casual_2_F", "U_C_Man_casual_3_F", "U_C_Man_casual_4_F", "U_C_Man_casual_5_F", "U_C_Man_casual_6_F", "U_C_man_sport_1_F", "U_C_man_sport_2_F", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_3_F", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_5_F", "U_O_T_FullGhillie_tna_F", "U_O_T_Officer_F", "U_O_T_Sniper_F", "U_O_T_Soldier_F", "U_O_V_Soldier_Viper_F", "U_O_V_Soldier_Viper_hex_F"};
	};
	class A3_Characters_F_Exp_Civil
	{
		addonRootClass = "A3_Characters_F_Exp";
		requiredAddons[] = {"A3_Characters_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"C_Man_casual_1_F", "C_Man_casual_1_F_afro", "C_Man_casual_1_F_asia", "C_Man_casual_1_F_euro", "C_Man_casual_1_F_tanoan", "C_Man_casual_2_F", "C_Man_casual_2_F_afro", "C_Man_casual_2_F_asia", "C_Man_casual_2_F_euro", "C_Man_casual_2_F_tanoan", "C_Man_casual_3_F", "C_Man_casual_3_F_afro", "C_Man_casual_3_F_asia", "C_Man_casual_3_F_euro", "C_Man_casual_3_F_tanoan", "C_Man_casual_4_F", "C_Man_casual_4_F_afro", "C_Man_casual_4_F_asia", "C_Man_casual_4_F_euro", "C_Man_casual_4_F_tanoan", "C_Man_casual_5_F", "C_Man_casual_5_F_afro", "C_Man_casual_5_F_asia", "C_Man_casual_5_F_euro", "C_Man_casual_5_F_tanoan", "C_Man_casual_6_F", "C_Man_casual_6_F_afro", "C_Man_casual_6_F_asia", "C_Man_casual_6_F_euro", "C_Man_casual_6_F_tanoan", "C_Man_French_universal_F", "C_man_sport_1_F", "C_man_sport_1_F_afro", "C_man_sport_1_F_asia", "C_man_sport_1_F_euro", "C_man_sport_1_F_tanoan", "C_man_sport_2_F", "C_man_sport_2_F_afro", "C_man_sport_2_F_asia", "C_man_sport_2_F_euro", "C_man_sport_2_F_tanoan", "C_man_sport_3_F", "C_man_sport_3_F_afro", "C_man_sport_3_F_asia", "C_man_sport_3_F_euro", "C_man_sport_3_F_tanoan"};
		weapons[] = {};
	};
	class A3_Characters_F_Exp_Headgear
	{
		addonRootClass = "A3_Characters_F_Exp";
		requiredAddons[] = {"A3_Characters_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"Headgear_H_Beret_gen_F", "Headgear_H_Booniehat_tna_F", "Headgear_H_Helmet_Skate", "Headgear_H_HelmetB_Enh_tna_F", "Headgear_H_HelmetB_Light_tna_F", "Headgear_H_HelmetB_TI_tna_F", "Headgear_H_HelmetB_tna_F", "Headgear_H_HelmetCrew_O_ghex_F", "Headgear_H_HelmetLeaderO_ghex_F", "Headgear_H_HelmetO_ghex_F", "Headgear_H_HelmetO_ViperSP_ghex_F", "Headgear_H_HelmetO_ViperSP_hex_F", "Headgear_H_HelmetSpecO_ghex_F", "Headgear_H_MilCap_gen_F", "Headgear_H_MilCap_ghex_F", "Headgear_H_MilCap_tna_F"};
		weapons[] = {"H_Beret_gen_F", "H_Booniehat_tna_F", "H_Cap_blk_Syndikat_F", "H_Cap_grn_Syndikat_F", "H_Cap_oli_Syndikat_F", "H_Cap_tan_Syndikat_F", "H_Helmet_Skate", "H_HelmetB_Enh_tna_F", "H_HelmetB_Light_tna_F", "H_HelmetB_TI_tna_F", "H_HelmetB_tna_F", "H_HelmetCrew_O_ghex_F", "H_HelmetLeaderO_ghex_F", "H_HelmetO_ghex_F", "H_HelmetO_ViperSP_ghex_F", "H_HelmetO_ViperSP_hex_F", "H_HelmetSpecO_ghex_F", "H_MilCap_gen_F", "H_MilCap_ghex_F", "H_MilCap_tna_F"};
	};
	class A3_Characters_F_Exp_Vests
	{
		addonRootClass = "A3_Characters_F_Exp";
		requiredAddons[] = {"A3_Characters_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"Vest_V_BandollierB_ghex_F", "Vest_V_HarnessO_ghex_F", "Vest_V_HarnessOGL_ghex_F", "Vest_V_PlateCarrier1_rgr_noflag_F", "Vest_V_PlateCarrier1_tna_F", "Vest_V_PlateCarrier2_rgr_noflag_F", "Vest_V_PlateCarrierGL_tna_F", "Vest_V_PlateCarrierSpec_tna_F", "Vest_V_TacChestrig_cbr_F", "Vest_V_TacChestrig_grn_F", "Vest_V_TacChestrig_oli_F", "Vest_V_TacVest_gen_F"};
		weapons[] = {"V_BandollierB_ghex_F", "V_HarnessO_ghex_F", "V_HarnessOGL_ghex_F", "V_PlateCarrier1_rgr_noflag_F", "V_PlateCarrier1_tna_F", "V_PlateCarrier2_rgr_noflag_F", "V_PlateCarrier2_tna_F", "V_PlateCarrierGL_tna_F", "V_PlateCarrierSpec_tna_F", "V_TacChestrig_cbr_F", "V_TacChestrig_grn_F", "V_TacChestrig_oli_F", "V_TacVest_gen_F"};
	};
	class A3_Characters_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Characters and Clothing";
		requiredAddons[] = {"A3_Characters_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_Heads
	{
		addonRootClass = "A3_Characters_F";
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_INDEP
	{
		requiredAddons[] = {"A3_Characters_F_Beta_INDEP"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"B_Deck_Crew_F", "B_Fighter_Pilot_F", "I_Fighter_Pilot_F", "O_Fighter_Pilot_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_Jets_Vests
	{
		addonRootClass = "A3_Characters_F_Jets";
		requiredAddons[] = {"A3_Characters_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"Vest_V_DeckCrew_blue_F", "Vest_V_DeckCrew_brown_F", "Vest_V_DeckCrew_green_F", "Vest_V_DeckCrew_red_F", "Vest_V_DeckCrew_violet_F", "Vest_V_DeckCrew_white_F", "Vest_V_DeckCrew_yellow_F"};
		weapons[] = {"V_DeckCrew_blue_F", "V_DeckCrew_brown_F", "V_DeckCrew_green_F", "V_DeckCrew_red_F", "V_DeckCrew_violet_F", "V_DeckCrew_white_F", "V_DeckCrew_yellow_F"};
	};
	class A3_Characters_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {"Headgear_H_Cap_marshal", "Headgear_H_RacingHelmet_1_black_F", "Headgear_H_RacingHelmet_1_blue_F", "Headgear_H_RacingHelmet_1_F", "Headgear_H_RacingHelmet_1_green_F", "Headgear_H_RacingHelmet_1_orange_F", "Headgear_H_RacingHelmet_1_red_F", "Headgear_H_RacingHelmet_1_white_F", "Headgear_H_RacingHelmet_1_yellow_F", "Headgear_H_RacingHelmet_2_F", "Headgear_H_RacingHelmet_3_F", "Headgear_H_RacingHelmet_4_F", "Item_U_C_Driver_1", "Item_U_C_Driver_1_black", "Item_U_C_Driver_1_blue", "Item_U_C_Driver_1_green", "Item_U_C_Driver_1_orange", "Item_U_C_Driver_1_red", "Item_U_C_Driver_1_white", "Item_U_C_Driver_1_yellow", "Item_U_C_Driver_2", "Item_U_C_Driver_3", "Item_U_C_Driver_4", "Item_U_Marshal"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"Item_U_B_FullGhillie_ard", "Item_U_B_FullGhillie_lsh", "Item_U_B_FullGhillie_sard", "Item_U_I_FullGhillie_ard", "Item_U_I_FullGhillie_lsh", "Item_U_I_FullGhillie_sard", "Item_U_O_FullGhillie_ard", "Item_U_O_FullGhillie_lsh", "Item_U_O_FullGhillie_sard", "Vest_V_PlateCarrierGL_blk", "Vest_V_PlateCarrierGL_mtp", "Vest_V_PlateCarrierGL_rgr", "Vest_V_PlateCarrierIAGL_dgtl", "Vest_V_PlateCarrierIAGL_oli", "Vest_V_PlateCarrierSpec_blk", "Vest_V_PlateCarrierSpec_mtp", "Vest_V_PlateCarrierSpec_rgr"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_OPFOR
	{
		addonRootClass = "A3_Characters_F";
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"B_G_Story_Guerilla_01_F", "B_soldier_mine_F", "B_soldier_UAV_06_F", "B_soldier_UAV_06_medical_F", "B_T_soldier_mine_F", "B_T_soldier_UAV_06_F", "B_T_soldier_UAV_06_medical_F", "C_IDAP_Man_AidWorker_01_F", "C_IDAP_Man_AidWorker_02_F", "C_IDAP_Man_AidWorker_03_F", "C_IDAP_Man_AidWorker_04_F", "C_IDAP_Man_AidWorker_05_F", "C_IDAP_Man_AidWorker_06_F", "C_IDAP_Man_AidWorker_07_F", "C_IDAP_Man_AidWorker_08_F", "C_IDAP_Man_AidWorker_09_F", "C_IDAP_Man_EOD_01_F", "C_IDAP_Man_EOD_01_TrainingMines_F", "C_IDAP_Man_Paramedic_01_F", "C_IDAP_Man_UAV_01_F", "C_IDAP_Man_UAV_06_antimine_F", "C_IDAP_Man_UAV_06_F", "C_IDAP_Man_UAV_06_medical_F", "C_IDAP_Pilot_01_F", "C_IDAP_UAV_AI_antimine_F", "C_IDAP_UAV_AI_F", "C_Journalist_01_War_F", "C_Man_ConstructionWorker_01_Black_F", "C_Man_ConstructionWorker_01_Blue_F", "C_Man_ConstructionWorker_01_Red_F", "C_Man_ConstructionWorker_01_Vrana_F", "C_Man_Fisherman_01_F", "C_Man_Messenger_01_F", "C_Man_Paramedic_01_F", "C_Man_UAV_06_F", "C_Man_UAV_06_medical_F", "C_Man_UtilityWorker_01_F", "C_Paramedic_01_base_F", "C_Story_EOD_01_F", "C_Story_Mechanic_01_F", "C_UAV_AI_F", "I_soldier_mine_F", "I_soldier_UAV_06_F", "I_soldier_UAV_06_medical_F", "I_Story_Officer_01_F", "Item_U_BG_Guerilla1_2_F", "Item_U_C_ConstructionCoverall_Black_F", "Item_U_C_ConstructionCoverall_Blue_F", "Item_U_C_ConstructionCoverall_Red_F", "Item_U_C_ConstructionCoverall_Vrana_F", "Item_U_C_IDAP_Man_cargo_F", "Item_U_C_IDAP_Man_Casual_F", "Item_U_C_IDAP_Man_jeans_F", "Item_U_C_IDAP_Man_shorts_F", "Item_U_C_IDAP_Man_tee_F", "Item_U_C_IDAP_Man_teeshorts_F", "Item_U_C_Mechanic_01_F", "Item_U_C_Paramedic_01_F", "O_soldier_mine_F", "O_soldier_UAV_06_F", "O_soldier_UAV_06_medical_F", "O_T_soldier_mine_F", "O_T_soldier_UAV_06_F", "O_T_soldier_UAV_06_medical_F"};
		url = "https://www.arma3.com";
		weapons[] = {"U_BG_Guerilla1_2_F", "U_C_ConstructionCoverall_Black_F", "U_C_ConstructionCoverall_Blue_F", "U_C_ConstructionCoverall_Red_F", "U_C_ConstructionCoverall_Vrana_F", "U_C_IDAP_Man_cargo_F", "U_C_IDAP_Man_casual_F", "U_C_IDAP_Man_Jeans_F", "U_C_IDAP_Man_shorts_F", "U_C_IDAP_Man_Tee_F", "U_C_IDAP_Man_TeeShorts_F", "U_C_Mechanic_01_F", "U_C_Paramedic_01_F"};
	};
	class A3_Characters_F_Orange_Facewear
	{
		addonRootClass = "A3_Characters_F_Orange";
		requiredAddons[] = {"A3_Characters_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_Orange_Headgear
	{
		addonRootClass = "A3_Characters_F_Orange";
		requiredAddons[] = {"A3_Characters_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"Headgear_H_Cap_Black_IDAP_F", "Headgear_H_Cap_Orange_IDAP_F", "Headgear_H_Cap_White_IDAP_F", "Headgear_H_Construction_basic_black_F", "Headgear_H_Construction_basic_orange_F", "Headgear_H_Construction_basic_red_F", "Headgear_H_Construction_basic_vrana_F", "Headgear_H_Construction_basic_white_F", "Headgear_H_Construction_basic_yellow_F", "Headgear_H_Construction_earprot_black_F", "Headgear_H_Construction_earprot_orange_F", "Headgear_H_Construction_earprot_red_F", "Headgear_H_Construction_earprot_vrana_F", "Headgear_H_Construction_earprot_white_F", "Headgear_H_Construction_earprot_yellow_F", "Headgear_H_Construction_headset_black_F", "Headgear_H_Construction_headset_orange_F", "Headgear_H_Construction_headset_red_F", "Headgear_H_Construction_headset_vrana_F", "Headgear_H_Construction_headset_white_F", "Headgear_H_Construction_headset_yellow_F", "Headgear_H_EarProtectors_black_F", "Headgear_H_EarProtectors_orange_F", "Headgear_H_EarProtectors_red_F", "Headgear_H_EarProtectors_white_F", "Headgear_H_EarProtectors_yellow_F", "Headgear_H_Hat_Safari_olive_F", "Headgear_H_Hat_Safari_sand_F", "Headgear_H_HeadBandage_bloody_F", "Headgear_H_HeadBandage_clean_F", "Headgear_H_HeadBandage_stained_F", "Headgear_H_HeadSet_black_F", "Headgear_H_HeadSet_orange_F", "Headgear_H_HeadSet_red_F", "Headgear_H_HeadSet_white_F", "Headgear_H_HeadSet_yellow_F", "Headgear_H_PASGT_basic_black_F", "Headgear_H_PASGT_basic_blue_F", "Headgear_H_PASGT_basic_blue_press_F", "Headgear_H_PASGT_basic_olive_F", "Headgear_H_PASGT_basic_white_F", "Headgear_H_PASGT_neckprot_blue_press_F", "Headgear_H_WirelessEarpiece_F"};
		weapons[] = {"H_Cap_Black_IDAP_F", "H_Cap_Orange_IDAP_F", "H_Cap_White_IDAP_F", "H_Construction_basic_black_F", "H_Construction_basic_orange_F", "H_Construction_basic_red_F", "H_Construction_basic_vrana_F", "H_Construction_basic_white_F", "H_Construction_basic_yellow_F", "H_Construction_earprot_black_F", "H_Construction_earprot_orange_F", "H_Construction_earprot_red_F", "H_Construction_earprot_vrana_F", "H_Construction_earprot_white_F", "H_Construction_earprot_yellow_F", "H_Construction_headset_black_F", "H_Construction_headset_orange_F", "H_Construction_headset_red_F", "H_Construction_headset_vrana_F", "H_Construction_headset_white_F", "H_Construction_headset_yellow_F", "H_EarProtectors_black_F", "H_EarProtectors_orange_F", "H_EarProtectors_red_F", "H_EarProtectors_white_F", "H_EarProtectors_yellow_F", "H_Hat_Safari_olive_F", "H_Hat_Safari_sand_F", "H_HeadBandage_bloody_F", "H_HeadBandage_clean_F", "H_HeadBandage_stained_F", "H_HeadSet_black_F", "H_HeadSet_orange_F", "H_HeadSet_red_F", "H_HeadSet_white_F", "H_HeadSet_yellow_F", "H_PASGT_basic_black_F", "H_PASGT_basic_blue_F", "H_PASGT_basic_blue_press_F", "H_PASGT_basic_olive_F", "H_PASGT_basic_white_F", "H_PASGT_neckprot_blue_press_F", "H_WirelessEarpiece_F"};
	};
	class A3_Characters_F_Orange_Uniforms
	{
		addonRootClass = "A3_Characters_F_Orange";
		requiredAddons[] = {"A3_Characters_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_Orange_Vests
	{
		addonRootClass = "A3_Characters_F_Orange";
		requiredAddons[] = {"A3_Characters_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"Vest_V_EOD_blue_F", "Vest_V_EOD_coyote_F", "Vest_V_EOD_IDAP_blue_F", "Vest_V_EOD_olive_F", "Vest_V_LegStrapBag_black_F", "Vest_V_LegStrapBag_coyote_F", "Vest_V_LegStrapBag_olive_F", "Vest_V_Plain_crystal_F", "Vest_V_Plain_medical_F", "Vest_V_Pocketed_black_F", "Vest_V_Pocketed_coyote_F", "Vest_V_Pocketed_olive_F", "Vest_V_Safety_blue_F", "Vest_V_Safety_orange_F", "Vest_V_Safety_yellow_F"};
		weapons[] = {"V_EOD_blue_F", "V_EOD_coyote_F", "V_EOD_IDAP_blue_F", "V_EOD_olive_F", "V_LegStrapBag_black_F", "V_LegStrapBag_coyote_F", "V_LegStrapBag_olive_F", "V_Plain_crystal_F", "V_Plain_medical_F", "V_Pocketed_black_F", "V_Pocketed_coyote_F", "V_Pocketed_olive_F", "V_Safety_blue_F", "V_Safety_orange_F", "V_Safety_yellow_F"};
	};
	class A3_Characters_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {"B_Patrol_Engineer_F", "B_Patrol_HeavyGunner_F", "B_Patrol_Launcher_bag_F", "B_Patrol_Leader_bag_F", "B_Patrol_Medic_bag_F", "B_Patrol_Medic_F", "B_Patrol_Respawn_bag_F", "B_Patrol_Respawn_tent_F", "B_Patrol_Soldier_A_F", "B_Patrol_Soldier_AR_F", "B_Patrol_Soldier_AT_F", "B_Patrol_Soldier_M_F", "B_Patrol_Soldier_MG_F", "B_Patrol_Soldier_TL_F", "B_Patrol_Soldier_UAV_F", "B_Patrol_Supply_bag_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_Proxies
	{
		addonRootClass = "A3_Characters_F";
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Characters_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {"B_AssaultPack_ocamo_Medic_F", "B_FieldPack_cbr_Ammo_F", "B_FieldPack_ocamo_LAT_F", "B_TacticalPack_ocamo_AA_F", "B_TacticalPack_ocamo_AT_F", "Item_U_O_officer_noInsignia_hex_F", "O_A_medic_F", "O_A_officer_F", "O_A_soldier_A_F", "O_A_soldier_AA_F", "O_A_soldier_AR_F", "O_A_soldier_AT_F", "O_A_soldier_F", "O_A_soldier_GL_F", "O_A_soldier_LAT_F", "O_A_soldier_M_F", "O_A_soldier_SL_F", "O_A_soldier_TL_F"};
		url = "https://www.arma3.com";
		weapons[] = {"arifle_CTAR_blk_aco_flash_F", "arifle_CTAR_blk_arco_flash_F", "arifle_CTAR_blk_flash_F", "arifle_CTAR_GL_blk_aco_flash_F", "arifle_CTAR_GL_blk_arco_flash_F", "arifle_CTARS_blk_flash_F", "SMG_02_flash_F", "srifle_DMR_07_blk_F_arco_flash_F", "U_O_officer_noInsignia_hex_F"};
	};
	class A3_Characters_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Characters and Clothing";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"B_CTRG_Soldier_LAT2_tna_F", "B_G_Soldier_LAT2_F", "B_soldier_LAT2_F", "B_T_Soldier_LAT2_F", "I_G_Soldier_LAT2_F", "I_Soldier_LAT2_F", "O_G_Soldier_LAT2_F", "O_Soldier_AHAT_F", "O_Soldier_HAT_F", "O_T_Soldier_AHAT_F", "O_T_Soldier_HAT_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Characters_F_Tank_Headgear
	{
		addonRootClass = "A3_Characters_F_Tank";
		requiredAddons[] = {"A3_Characters_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"Headgear_H_Tank_black_F"};
		weapons[] = {"H_Tank_black_F"};
	};
	class A3_Characters_F_Tank_Uniforms
	{
		addonRootClass = "A3_Characters_F_Tank";
		requiredAddons[] = {"A3_Characters_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"I_Story_Crew_F", "Item_U_Tank_green_F"};
		weapons[] = {"U_Tank_green_F"};
	};
	class A3_Data_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Main Configuration";
		requiredAddons[] = {"A3_Functions_F"};
		requiredVersion = 0.1;
		units[] = {"Building", "Church", "FlagCarrierCore", "FxWindGrass1", "FxWindGrass2", "FxWindGrass3", "FxWindGrass4", "FxWindHay1", "FxWindWheat1", "FxWindSeed1", "FxWindLeaf1", "FxWindLeaf2", "FxWindLeaf3", "FxWindLeaf4", "FxWindLeaf5", "FxWindLeaf6", "FxWindPaper1", "FxWindPlastic1", "FxWindPollen1", "FxWindRock1", "House", "House_Small", "HouseBase", "Library_WeaponHolder", "NonStrategic", "Ruins", "StaticShip", "Strategic", "Structure", "ThingEffect", "Wreck_Base"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Argo
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Jets_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Argo_Loadorder
	{
		addonRootClass = "A3_Data_F_Argo";
		requiredAddons[] = {"A3_Armor_F_Argo", "A3_Armor_F_Argo_APC_Tracked_01", "A3_Armor_F_Argo_APC_Wheeled_02", "A3_Data_F_Argo", "A3_EditorPreviews_F_Argo", "A3_Language_F_Argo", "A3_Map_Malden", "A3_Map_Malden_Data", "A3_Map_Malden_Data_Layers", "A3_Map_Malden_Scenes_F", "A3_Props_F_Argo", "A3_Props_F_Argo_Civilian", "A3_Props_F_Argo_Civilian_InfoBoards", "A3_Props_F_Argo_Items", "A3_Props_F_Argo_Items_Documents", "A3_Props_F_Argo_Items_Electronics", "A3_Rocks_F_Argo", "A3_Rocks_F_Argo_Limestone", "A3_Structures_F_Argo", "A3_Structures_F_Argo_Civilian", "A3_Structures_F_Argo_Civilian_Accessories", "A3_Structures_F_Argo_Civilian_Addons", "A3_Structures_F_Argo_Civilian_Garbage", "A3_Structures_F_Argo_Civilian_House_Big01", "A3_Structures_F_Argo_Civilian_House_Big02", "A3_Structures_F_Argo_Civilian_House_Small01", "A3_Structures_F_Argo_Civilian_House_Small02", "A3_Structures_F_Argo_Civilian_Stone_House_Big_01", "A3_Structures_F_Argo_Civilian_Stone_Shed_01", "A3_Structures_F_Argo_Civilian_Unfinished_Building_01", "A3_Structures_F_Argo_Commercial", "A3_Structures_F_Argo_Commercial_Accessories", "A3_Structures_F_Argo_Commercial_Billboards", "A3_Structures_F_Argo_Commercial_FuelStation_01", "A3_Structures_F_Argo_Commercial_Shop_02", "A3_Structures_F_Argo_Commercial_Supermarket_01", "A3_Structures_F_Argo_Cultural", "A3_Structures_F_Argo_Cultural_Church", "A3_Structures_F_Argo_Cultural_Statues", "A3_Structures_F_Argo_Decals", "A3_Structures_F_Argo_Decals_Horizontal", "A3_Structures_F_Argo_Industrial", "A3_Structures_F_Argo_Industrial_Agriculture", "A3_Structures_F_Argo_Industrial_Materials", "A3_Structures_F_Argo_Infrastructure", "A3_Structures_F_Argo_Infrastructure_Runways", "A3_Structures_F_Argo_Infrastructure_Seaports", "A3_Structures_F_Argo_Infrastructure_WaterSupply", "A3_Structures_F_Argo_Military", "A3_Structures_F_Argo_Military_Bunkers", "A3_Structures_F_Argo_Military_ContainerBases", "A3_Structures_F_Argo_Military_Domes", "A3_Structures_F_Argo_Military_Fortifications", "A3_Structures_F_Argo_Military_Turrets", "A3_Structures_F_Argo_Signs", "A3_Structures_F_Argo_Signs_City", "A3_Structures_F_Argo_Signs_Directions", "A3_Structures_F_Argo_Signs_Warnings", "A3_Structures_F_Argo_Walls", "A3_Structures_F_Argo_Walls_City", "A3_Structures_F_Argo_Walls_Concrete", "A3_Structures_F_Argo_Walls_Military", "A3_Structures_F_Argo_Walls_Net", "A3_Structures_F_Argo_Walls_Pipe", "A3_Structures_F_Argo_Walls_Tin", "A3_Structures_F_Argo_Walls_Wooden", "A3_Structures_F_Argo_Wrecks", "A3_Vegetation_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Kart_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Bootcamp_Loadorder
	{
		addonRootClass = "A3_Data_F_Bootcamp";
		requiredAddons[] = {"A3_Anims_F_Bootcamp", "A3_Characters_F_Bootcamp", "A3_Characters_F_Bootcamp_Common", "A3_Data_F_Bootcamp", "A3_Dubbing_F_Bootcamp", "A3_Functions_F_Bootcamp", "A3_Language_F_Bootcamp", "A3_LanguageMissions_F_Bootcamp", "A3_Map_VR", "A3_Map_VR_Scenes_F", "A3_Missions_F_Bootcamp", "A3_Missions_F_Bootcamp_Data", "A3_Missions_F_Bootcamp_Video", "A3_Modules_F_Bootcamp", "A3_Modules_F_Bootcamp_Misc", "A3_Music_F_Bootcamp", "A3_Music_F_Bootcamp_Music", "A3_Soft_F_Bootcamp", "A3_Soft_F_Bootcamp_Offroad_01", "A3_Soft_F_Bootcamp_Quadbike_01", "A3_Soft_F_Bootcamp_Van_01", "A3_Sounds_F_Bootcamp", "A3_Structures_F_Bootcamp", "A3_Structures_F_Bootcamp_Civ_Camping", "A3_Structures_F_Bootcamp_Civ_SportsGrounds", "A3_Structures_F_Bootcamp_Ind_Cargo", "A3_Structures_F_Bootcamp_Items_Electronics", "A3_Structures_F_Bootcamp_Items_Food", "A3_Structures_F_Bootcamp_Items_Sport", "A3_Structures_F_Bootcamp_System", "A3_Structures_F_Bootcamp_Training", "A3_Structures_F_Bootcamp_VR_Blocks", "A3_Structures_F_Bootcamp_VR_CoverObjects", "A3_Structures_F_Bootcamp_VR_Helpers", "A3_Ui_F_Bootcamp", "A3_Weapons_F_Bootcamp", "A3_Weapons_F_Bootcamp_Ammoboxes", "A3_Weapons_F_Bootcamp_LongRangeRifles_GM6_Camo", "A3_Weapons_F_Bootcamp_LongRangeRifles_M320_Camo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Curator
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Zeus Update - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Loadorder", "A3_Ui_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"SoundFlareLoop_F"};
		url = "https://www.arma3.com";
		weapons[] = {"FakeWeapon_moduleTracers_F"};
	};
	class A3_Data_F_Curator_Characters
	{
		addonRootClass = "A3_Data_F_Curator";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Curator_Eagle
	{
		addonRootClass = "A3_Data_F_Curator";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Curator_Intel
	{
		addonRootClass = "A3_Data_F_Curator";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"Intel_File1_F", "Intel_File2_F", "Intel_Photos_F"};
		weapons[] = {};
	};
	class A3_Data_F_Curator_Loadorder
	{
		addonRootClass = "A3_Data_F_Curator";
		requiredAddons[] = {"A3_Data_F_Curator", "A3_Data_F_Curator_Characters", "A3_Data_F_Curator_Eagle", "A3_Data_F_Curator_Intel", "A3_Data_F_Curator_Misc", "A3_Data_F_Curator_Music", "A3_Data_F_Curator_Respawn", "A3_Data_F_Curator_Virtual", "A3_Functions_F_Curator", "A3_Language_F_Curator", "A3_Missions_F_Curator", "A3_Modules_F_Curator", "A3_Modules_F_Curator_Animals", "A3_Modules_F_Curator_CAS", "A3_Modules_F_Curator_Chemlights", "A3_Modules_F_Curator_Curator", "A3_Modules_F_Curator_Effects", "A3_Modules_F_Curator_Environment", "A3_Modules_F_Curator_Flares", "A3_Modules_F_Curator_Intel", "A3_Modules_F_Curator_Lightning", "A3_Modules_F_Curator_Mines", "A3_Modules_F_Curator_Misc", "A3_Modules_F_Curator_Multiplayer", "A3_Modules_F_Curator_Objectives", "A3_Modules_F_Curator_Ordnance", "A3_Modules_F_Curator_Respawn", "A3_Modules_F_Curator_SmokeShells", "A3_Ui_F_Curator"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Curator_Misc
	{
		addonRootClass = "A3_Data_F_Curator";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"Lightning1_F", "Lightning2_F"};
		weapons[] = {};
	};
	class A3_Data_F_Curator_Music
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Zeus Update - Soundtrack Files";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Curator_Respawn
	{
		addonRootClass = "A3_Data_F_Curator";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"B_Respawn_Sleeping_bag_blue_F", "B_Respawn_Sleeping_bag_brown_F", "B_Respawn_Sleeping_bag_F", "B_Respawn_TentA_F", "B_Respawn_TentDome_F", "Respawn_Sleeping_bag_blue_F", "Respawn_Sleeping_bag_brown_F", "Respawn_Sleeping_bag_F", "Respawn_TentA_F", "Respawn_TentDome_F"};
		weapons[] = {};
	};
	class A3_Data_F_Curator_Virtual
	{
		addonRootClass = "A3_Data_F_Curator";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"B_VirtualCurator_F", "C_VirtualCurator_F", "I_VirtualCurator_F", "O_VirtualCurator_F", "VirtualCurator_F"};
		weapons[] = {"U_VirtualMan_F"};
	};
	class A3_Data_F_Destroyer
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Destroyer - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Tank_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Destroyer_Loadorder
	{
		addonRootClass = "A3_Data_F_Destroyer";
		requiredAddons[] = {"A3_Boat_F_Destroyer", "A3_Boat_F_Destroyer_Destroyer_01", "A3_Data_F_Destroyer", "A3_EditorPreviews_F_Destroyer", "A3_Functions_F_Destroyer", "A3_Language_F_Destroyer", "A3_Props_F_Destroyer", "A3_Props_F_Destroyer_Military_BriefingRoomDesk", "A3_Props_F_Destroyer_Military_BriefingRoomScreen", "A3_Static_F_Destroyer", "A3_Static_F_Destroyer_Boat_Rack_01", "A3_Static_F_Destroyer_Ship_Gun_01", "A3_Static_F_Destroyer_Ship_MRLS_01", "A3_Weapons_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Warlords_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Enoch_Loadorder
	{
		addonRootClass = "A3_Data_F_Enoch";
		requiredAddons[] = {"A3_Air_F_Enoch", "A3_Air_F_Enoch_Heli_Light_03", "A3_Air_F_Enoch_UAV_01", "A3_Anims_F_Enoch", "A3_Armor_F_Enoch", "A3_Armor_F_Enoch_APC_Tracked_03", "A3_Characters_F_Enoch", "A3_Characters_F_Enoch_Facewear", "A3_Characters_F_Enoch_Headgear", "A3_Characters_F_Enoch_Vests", "A3_Data_F_Enoch", "A3_Dubbing_Radio_F_Enoch", "A3_EditorPreviews_F_Enoch", "A3_Functions_F_Enoch", "A3_Language_F_Enoch", "A3_Map_Enoch", "A3_Map_Enoch_Data", "A3_Map_Enoch_Data_Layers", "A3_Map_Enoch_Scenes_F", "A3_Missions_F_Enoch", "A3_Props_F_Enoch", "A3_Props_F_Enoch_Civilian", "A3_Props_F_Enoch_Civilian_Camping", "A3_Props_F_Enoch_Civilian_Forest", "A3_Props_F_Enoch_Civilian_Garbage", "A3_Props_F_Enoch_Civilian_InfoBoards", "A3_Props_F_Enoch_Industrial", "A3_Props_F_Enoch_Industrial_Electric", "A3_Props_F_Enoch_Industrial_Supplies", "A3_Props_F_Enoch_Infrastructure", "A3_Props_F_Enoch_Infrastructure_Traffic", "A3_Props_F_Enoch_Items", "A3_Props_F_Enoch_Items_AluminiumFoil", "A3_Props_F_Enoch_Items_Documents", "A3_Props_F_Enoch_Military", "A3_Props_F_Enoch_Military_Camps", "A3_Props_F_Enoch_Military_Decontamination", "A3_Props_F_Enoch_Military_Equipment", "A3_Props_F_Enoch_Military_Supplies", "A3_Props_F_Enoch_Military_Wrecks", "A3_Rocks_F_Enoch", "A3_Rocks_F_Enoch_Sinkhole", "A3_Soft_F_Enoch", "A3_Soft_F_Enoch_Offroad_01", "A3_Soft_F_Enoch_Quadbike_01", "A3_Soft_F_Enoch_Tractor_01", "A3_Soft_F_Enoch_Truck_01", "A3_Soft_F_Enoch_Truck_02", "A3_Soft_F_Enoch_UGV_01", "A3_Soft_F_Enoch_UGV_02", "A3_Soft_F_Enoch_Van_02", "A3_Sounds_F_Enoch", "A3_Static_F_Enoch", "A3_Static_F_Enoch_AA_01", "A3_Static_F_Enoch_AT_01", "A3_Static_F_Enoch_Designator_01", "A3_Static_F_Enoch_GMG_01", "A3_Static_F_Enoch_HMG_01", "A3_Static_F_Enoch_Mortar_01", "A3_Static_F_Enoch_Radar_System_01", "A3_Static_F_Enoch_SAM_System_03", "A3_Structures_F_Enoch", "A3_Structures_F_Enoch_Civilian", "A3_Structures_F_Enoch_Civilian_Accessories", "A3_Structures_F_Enoch_Civilian_Camps", "A3_Structures_F_Enoch_Civilian_Constructions", "A3_Structures_F_Enoch_Civilian_Houses", "A3_Structures_F_Enoch_Civilian_Medical", "A3_Structures_F_Enoch_Civilian_Police", "A3_Structures_F_Enoch_Civilian_Sheds", "A3_Structures_F_Enoch_Commercial", "A3_Structures_F_Enoch_Commercial_FuelStation_03", "A3_Structures_F_Enoch_Commercial_VillageStore_01", "A3_Structures_F_Enoch_Cultural", "A3_Structures_F_Enoch_Cultural_Calvary_03", "A3_Structures_F_Enoch_Cultural_Calvary_04", "A3_Structures_F_Enoch_Cultural_CastleRuins", "A3_Structures_F_Enoch_Cultural_Cemeteries", "A3_Structures_F_Enoch_Cultural_Chapel_01", "A3_Structures_F_Enoch_Cultural_Chapel_02", "A3_Structures_F_Enoch_Cultural_Church_04", "A3_Structures_F_Enoch_Cultural_Church_05", "A3_Structures_F_Enoch_Cultural_OrthodoxChurches", "A3_Structures_F_Enoch_Cultural_Statues", "A3_Structures_F_Enoch_Data", "A3_Structures_F_Enoch_Decals", "A3_Structures_F_Enoch_Decals_Horizontal", "A3_Structures_F_Enoch_Furniture", "A3_Structures_F_Enoch_Industrial", "A3_Structures_F_Enoch_Industrial_Agriculture", "A3_Structures_F_Enoch_Industrial_Cargo", "A3_Structures_F_Enoch_Industrial_CementWorks", "A3_Structures_F_Enoch_Industrial_CoalPlant_01", "A3_Structures_F_Enoch_Industrial_DieselPowerPlant_01", "A3_Structures_F_Enoch_Industrial_Farms", "A3_Structures_F_Enoch_Industrial_Garages", "A3_Structures_F_Enoch_Industrial_Houses", "A3_Structures_F_Enoch_Industrial_Materials", "A3_Structures_F_Enoch_Industrial_Mines", "A3_Structures_F_Enoch_Industrial_Pipes", "A3_Structures_F_Enoch_Industrial_Power", "A3_Structures_F_Enoch_Industrial_Sawmills", "A3_Structures_F_Enoch_Industrial_Sheds", "A3_Structures_F_Enoch_Industrial_Smokestacks", "A3_Structures_F_Enoch_Industrial_Transmitter_Tower", "A3_Structures_F_Enoch_Infrastructure", "A3_Structures_F_Enoch_Infrastructure_Benchmarks", "A3_Structures_F_Enoch_Infrastructure_Bridges", "A3_Structures_F_Enoch_Infrastructure_Highway", "A3_Structures_F_Enoch_Infrastructure_Lamps", "A3_Structures_F_Enoch_Infrastructure_Pavements", "A3_Structures_F_Enoch_Infrastructure_Powerlines", "A3_Structures_F_Enoch_Infrastructure_Railways", "A3_Structures_F_Enoch_Infrastructure_Roads", "A3_Structures_F_Enoch_Military", "A3_Structures_F_Enoch_Military_Airfield", "A3_Structures_F_Enoch_Military_Barracks", "A3_Structures_F_Enoch_Military_Bunkers", "A3_Structures_F_Enoch_Military_Camonets", "A3_Structures_F_Enoch_Military_Camps", "A3_Structures_F_Enoch_Military_Domes", "A3_Structures_F_Enoch_Military_Flags", "A3_Structures_F_Enoch_Military_Radar", "A3_Structures_F_Enoch_Military_Training", "A3_Structures_F_Enoch_Ruins", "A3_Structures_F_Enoch_Signs", "A3_Structures_F_Enoch_Signs_City", "A3_Structures_F_Enoch_Signs_Companies", "A3_Structures_F_Enoch_Signs_Directions", "A3_Structures_F_Enoch_Signs_Traffic", "A3_Structures_F_Enoch_Signs_Warnings", "A3_Structures_F_Enoch_VR_Helpers", "A3_Structures_F_Enoch_Walls", "A3_Structures_F_Enoch_Walls_Brick", "A3_Structures_F_Enoch_Walls_Concrete", "A3_Structures_F_Enoch_Walls_Net", "A3_Structures_F_Enoch_Walls_Pipe", "A3_Structures_F_Enoch_Walls_Polewalls", "A3_Structures_F_Enoch_Walls_Stone", "A3_Structures_F_Enoch_Walls_Wooden", "A3_Structures_F_Enoch_Wrecks", "A3_Supplies_F_Enoch", "A3_Supplies_F_Enoch_Ammoboxes", "A3_Supplies_F_Enoch_Bags", "A3_Ui_F_Enoch", "A3_Vegetation_F_Enoch", "A3_Weapons_F_Enoch", "A3_Weapons_F_Enoch_Acc", "A3_Weapons_F_Enoch_Items", "A3_Weapons_F_Enoch_Launchers_RPG32", "A3_Weapons_F_Enoch_Launchers_Titan", "A3_Weapons_F_Enoch_LongRangeRifles_DMR_06", "A3_Weapons_F_Enoch_Machineguns_M200", "A3_Weapons_F_Enoch_Pistols_Pistol_Heavy_01", "A3_Weapons_F_Enoch_Rifles_AK12", "A3_Weapons_F_Enoch_Rifles_HunterShotgun_01", "A3_Weapons_F_Enoch_Rifles_MSBS", "A3_Weapons_F_Enoch_Rifles_MX"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Exp_B_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Mark_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Exp_A_Loadorder
	{
		addonRootClass = "A3_Data_F_Exp_A";
		requiredAddons[] = {"A3_Anims_F_Exp_A", "A3_Data_F_Exp_A", "A3_Data_F_Exp_A_Virtual", "A3_Functions_F_Exp_A", "A3_Language_F_Exp_A", "A3_LanguageMissions_F_Exp_A", "A3_Missions_F_Exp_A", "A3_Missions_F_Exp_A_Data", "A3_Modules_F_Exp_A", "A3_Props_F_Exp_A", "A3_Props_F_Exp_A_Military", "A3_Props_F_Exp_A_Military_Equipment", "A3_Sounds_F_Exp_A", "A3_Structures_F_Exp_A", "A3_Structures_F_Exp_A_VR_Blocks", "A3_Structures_F_Exp_A_VR_Helpers", "A3_Ui_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Exp_A_Virtual
	{
		addonRootClass = "A3_Data_F_Exp_A";
		requiredAddons[] = {"A3_Data_F_Exp_A", "A3_Functions_F_Exp_A", "A3_Modules_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {"VirtualSpectator_F"};
		weapons[] = {};
	};
	class A3_Data_F_Exp_B
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Eden Update - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Exp_A_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Exp_B_Loadorder
	{
		addonRootClass = "A3_Data_F_Exp_B";
		requiredAddons[] = {"A3_3DEN", "A3_3DEN_Language", "A3_Data_F_Exp_B", "A3_Language_F_Exp_B"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Exp_Loadorder
	{
		addonRootClass = "A3_Data_F_Exp";
		requiredAddons[] = {"A3_Air_F_Exp", "A3_Air_F_Exp_Heli_Light_01", "A3_Air_F_Exp_Heli_Transport_01", "A3_Air_F_Exp_Plane_Civil_01", "A3_Air_F_Exp_UAV_03", "A3_Air_F_Exp_UAV_04", "A3_Air_F_Exp_VTOL_01", "A3_Air_F_Exp_VTOL_02", "A3_Anims_F_Exp", "A3_Anims_F_Exp_Revive", "A3_Armor_F_Exp", "A3_Armor_F_Exp_APC_Tracked_01", "A3_Armor_F_Exp_APC_Tracked_02", "A3_Armor_F_Exp_APC_Wheeled_01", "A3_Armor_F_Exp_APC_Wheeled_02", "A3_Armor_F_Exp_MBT_01", "A3_Armor_F_Exp_MBT_02", "A3_Boat_F_Exp", "A3_Boat_F_Exp_Boat_Armed_01", "A3_Boat_F_Exp_Boat_Transport_01", "A3_Boat_F_Exp_Boat_Transport_02", "A3_Boat_F_Exp_Scooter_Transport_01", "A3_Cargoposes_F_Exp", "A3_Characters_F_Exp", "A3_Characters_F_Exp_Civil", "A3_Characters_F_Exp_Headgear", "A3_Characters_F_Exp_Vests", "A3_Data_F_Exp", "A3_Data_F_Exp_ParticleEffects", "A3_Dubbing_F_Exp", "A3_Dubbing_Radio_F_EXP", "A3_Dubbing_Radio_F_EXP_Data_CHI", "A3_Dubbing_Radio_F_EXP_Data_ENGFRE", "A3_Dubbing_Radio_F_EXP_Data_FRE", "A3_EditorPreviews_F_Exp", "A3_Functions_F_Exp", "A3_Language_F_Exp", "A3_LanguageMissions_F_Exp", "A3_Missions_F_Exp", "A3_Missions_F_Exp_Data", "A3_Missions_F_Exp_Video", "A3_Modules_F_Exp", "A3_Music_F_Exp", "A3_Music_F_Exp_Music", "A3_Props_F_Exp", "A3_Props_F_Exp_Civilian", "A3_Props_F_Exp_Civilian_Garbage", "A3_Props_F_Exp_Commercial", "A3_Props_F_Exp_Commercial_Market", "A3_Props_F_Exp_Industrial", "A3_Props_F_Exp_Industrial_HeavyEquipment", "A3_Props_F_Exp_Infrastructure", "A3_Props_F_Exp_Infrastructure_Railways", "A3_Props_F_Exp_Infrastructure_Traffic", "A3_Props_F_Exp_Military", "A3_Props_F_Exp_Military_Camps", "A3_Props_F_Exp_Military_OldPlaneWrecks", "A3_Props_F_Exp_Naval", "A3_Props_F_Exp_Naval_Boats", "A3_Soft_F_Exp", "A3_Soft_F_Exp_LSV_01", "A3_Soft_F_Exp_LSV_02", "A3_Soft_F_Exp_MRAP_01", "A3_Soft_F_Exp_MRAP_02", "A3_Soft_F_Exp_Offroad_01", "A3_Soft_F_Exp_Offroad_02", "A3_Soft_F_Exp_Quadbike_01", "A3_Soft_F_Exp_Truck_01", "A3_Soft_F_Exp_Truck_03", "A3_Soft_F_Exp_UGV_01", "A3_Soft_F_Exp_Van_01", "A3_Sounds_F_Exp", "A3_Static_F_Exp", "A3_Static_F_Exp_AA_01", "A3_Static_F_Exp_AT_01", "A3_Static_F_Exp_GMG_01", "A3_Static_F_Exp_HMG_01", "A3_Static_F_Exp_Mortar_01", "A3_Supplies_F_Exp", "A3_Supplies_F_Exp_Ammoboxes", "A3_Ui_F_Exp", "A3_Weapons_F_Exp", "A3_Weapons_F_Exp_Launchers_RPG32", "A3_Weapons_F_Exp_Launchers_RPG7", "A3_Weapons_F_Exp_Launchers_Titan", "A3_Weapons_F_Exp_LongRangeRifles_DMR_07", "A3_Weapons_F_Exp_Machineguns_LMG_03", "A3_Weapons_F_Exp_Pistols_Pistol_01", "A3_Weapons_F_Exp_Rifles_AK12", "A3_Weapons_F_Exp_Rifles_AKM", "A3_Weapons_F_Exp_Rifles_AKS", "A3_Weapons_F_Exp_Rifles_ARX", "A3_Weapons_F_Exp_Rifles_CTAR", "A3_Weapons_F_Exp_Rifles_CTARS", "A3_Weapons_F_Exp_Rifles_SPAR_01", "A3_Weapons_F_Exp_Rifles_SPAR_02", "A3_Weapons_F_Exp_Rifles_SPAR_03", "A3_Weapons_F_Exp_SMGs_SMG_05"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Exp_ParticleEffects
	{
		addonRootClass = "A3_Data_F_Exp";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Bootcamp_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Heli_Loadorder
	{
		addonRootClass = "A3_Data_F_Heli";
		requiredAddons[] = {"A3_Air_F_Heli", "A3_Air_F_Heli_Heli_Attack_01", "A3_Air_F_Heli_Heli_Attack_02", "A3_Air_F_Heli_Heli_Light_01", "A3_Air_F_Heli_Heli_Light_02", "A3_Air_F_Heli_Heli_Light_03", "A3_Air_F_Heli_Heli_Transport_01", "A3_Air_F_Heli_Heli_Transport_02", "A3_Air_F_Heli_Heli_Transport_03", "A3_Air_F_Heli_Heli_Transport_04", "A3_Anims_F_Heli", "A3_Boat_F_Heli", "A3_Boat_F_Heli_Boat_Armed_01", "A3_Boat_F_Heli_SDV_01", "A3_Cargoposes_F_Heli", "A3_Data_F_Heli", "A3_Dubbing_F_Heli", "A3_Functions_F_Heli", "A3_Language_F_Heli", "A3_LanguageMissions_F_Heli", "A3_Missions_F_Heli", "A3_Missions_F_Heli_Data", "A3_Missions_F_Heli_Video", "A3_Modules_F_Heli", "A3_Modules_F_Heli_Misc", "A3_Music_F_Heli", "A3_Music_F_Heli_Music", "A3_Soft_F_Heli", "A3_Soft_F_Heli_Hatchback_01", "A3_Soft_F_Heli_MRAP_01", "A3_Soft_F_Heli_MRAP_02", "A3_Soft_F_Heli_MRAP_03", "A3_Soft_F_Heli_Quadbike_01", "A3_Soft_F_Heli_SUV_01", "A3_Soft_F_Heli_UGV_01", "A3_Soft_F_Heli_Van_01", "A3_Sounds_F_Heli", "A3_Structures_F_Heli", "A3_Structures_F_Heli_Civ_Accessories", "A3_Structures_F_Heli_Civ_Constructions", "A3_Structures_F_Heli_Civ_Garbage", "A3_Structures_F_Heli_Civ_Market", "A3_Structures_F_Heli_Furniture", "A3_Structures_F_Heli_Ind_Airport", "A3_Structures_F_Heli_Ind_Cargo", "A3_Structures_F_Heli_Ind_Machines", "A3_Structures_F_Heli_Items_Airport", "A3_Structures_F_Heli_Items_Electronics", "A3_Structures_F_Heli_Items_Food", "A3_Structures_F_Heli_Items_Luggage", "A3_Structures_F_Heli_Items_Sport", "A3_Structures_F_Heli_Items_Tools", "A3_Structures_F_Heli_VR_Helpers", "A3_Supplies_F_Heli", "A3_Supplies_F_Heli_Bladders", "A3_Supplies_F_Heli_CargoNets", "A3_Supplies_F_Heli_Fuel", "A3_Supplies_F_Heli_Slingload", "A3_Ui_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Hook
	{
		addonRootClass = "A3_Data_F";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {"Rope"};
		weapons[] = {};
	};
	class A3_Data_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Exp_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Jets_Loadorder
	{
		addonRootClass = "A3_Data_F_Jets";
		requiredAddons[] = {"A3_Air_F_Jets", "A3_Air_F_Jets_Plane_Fighter_01", "A3_Air_F_Jets_Plane_Fighter_02", "A3_Air_F_Jets_Plane_Fighter_04", "A3_Air_F_Jets_UAV_05", "A3_Anims_F_Jets", "A3_Boat_F_Jets", "A3_Boat_F_Jets_Carrier_01", "A3_Cargoposes_F_Jets", "A3_Characters_F_Jets", "A3_Data_F_Jets", "A3_Dubbing_F_Jets", "A3_EditorPreviews_F_Jets", "A3_Functions_F_Jets", "A3_Language_F_Jets", "A3_LanguageMissions_F_Jets", "A3_Missions_F_Jets", "A3_Modules_F_Jets", "A3_Music_F_Jets", "A3_Props_F_Jets", "A3_Props_F_Jets_Military_Tractor", "A3_Props_F_Jets_Military_Trolley", "A3_Sounds_F_Jets", "A3_Static_F_Jets", "A3_Static_F_Jets_AAA_System_01", "A3_Static_F_Jets_SAM_System_01", "A3_Static_F_Jets_SAM_System_02", "A3_Ui_F_Jets", "A3_Weapons_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Curator_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Kart_Loadorder
	{
		addonRootClass = "A3_Data_F_Kart";
		requiredAddons[] = {"A3_Anims_F_Kart", "A3_Characters_F_Kart", "A3_Data_F_Kart", "A3_Data_F_Kart_ParticleEffects", "A3_Language_F_Kart", "A3_LanguageMissions_F_Kart", "A3_Missions_F_Kart", "A3_Missions_F_Kart_Data", "A3_Modules_F_Kart", "A3_Modules_F_Kart_Data", "A3_Modules_F_Kart_TimeTrials", "A3_Soft_F_Kart", "A3_Soft_F_Kart_Kart_01", "A3_Sounds_F_Kart", "A3_Structures_F_Kart", "A3_Structures_F_Kart_Civ_SportsGrounds", "A3_Structures_F_Kart_Mil_Flags", "A3_Structures_F_Kart_Signs_Companies", "A3_Ui_F_Kart", "A3_Weapons_F_Kart", "A3_Weapons_F_Kart_Pistols_Pistol_Signal_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Kart_ParticleEffects
	{
		addonRootClass = "A3_Data_F_Kart";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Loadorder
	{
		addonRootClass = "A3_Data_F";
		requiredAddons[] = {"A3_Air_F", "A3_Air_F_Beta", "A3_Air_F_Beta_Heli_Attack_01", "A3_Air_F_Beta_Heli_Attack_02", "A3_Air_F_Beta_Heli_Transport_01", "A3_Air_F_Beta_Heli_Transport_02", "A3_Air_F_Beta_Parachute_01", "A3_Air_F_Beta_Parachute_02", "A3_Air_F_EPB", "A3_Air_F_EPB_Heli_Light_03", "A3_Air_F_EPC", "A3_Air_F_EPC_Plane_CAS_01", "A3_Air_F_EPC_Plane_CAS_02", "A3_Air_F_EPC_Plane_Fighter_03", "A3_Air_F_Gamma", "A3_Air_F_Gamma_Plane_Fighter_03", "A3_Air_F_Heli_Light_01", "A3_Air_F_Heli_Light_02", "A3_Animals_F", "A3_Animals_F_Animconfig", "A3_Animals_F_Beta", "A3_Animals_F_Beta_Chicken", "A3_Animals_F_Beta_Dog", "A3_Animals_F_Beta_Goat", "A3_Animals_F_Beta_Sheep", "A3_Animals_F_Fishes", "A3_Animals_F_Kestrel", "A3_Animals_F_Rabbit", "A3_Animals_F_Seagull", "A3_Animals_F_Snakes", "A3_Animals_F_Turtle", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Anims_F_Config_Sdr_WeaponSwitching", "A3_Anims_F_Data", "A3_Anims_F_EPA", "A3_Anims_F_EPC", "A3_Armor_F", "A3_Armor_F_Beta", "A3_Armor_F_Beta_APC_Tracked_01", "A3_Armor_F_Beta_APC_Tracked_02", "A3_Armor_F_Beta_APC_Wheeled_01", "A3_Armor_F_Beta_APC_Wheeled_02", "A3_Armor_F_EPB", "A3_Armor_F_EPB_APC_Tracked_03", "A3_Armor_F_EPB_MBT_03", "A3_Armor_F_EPC", "A3_Armor_F_EPC_MBT_01", "A3_Armor_F_Gamma", "A3_Armor_F_Gamma_APC_Wheeled_03", "A3_Armor_F_Gamma_MBT_01", "A3_Armor_F_Gamma_MBT_02", "A3_Boat_F", "A3_Boat_F_Beta", "A3_Boat_F_Beta_Boat_Armed_01", "A3_Boat_F_Beta_Boat_Transport_01", "A3_Boat_F_Beta_SDV_01", "A3_Boat_F_Boat_Armed_01", "A3_Boat_F_Boat_Transport_01", "A3_Boat_F_EPC", "A3_Boat_F_EPC_Submarine_01", "A3_Boat_F_Gamma", "A3_Boat_F_Gamma_Boat_Civil_01", "A3_Boat_F_Gamma_Boat_Civil_04", "A3_Boat_F_Gamma_Boat_Transport_01", "A3_Cargoposes_F", "A3_Characters_F", "A3_Characters_F_Beta", "A3_Characters_F_Beta_INDEP", "A3_Characters_F_BLUFOR", "A3_Characters_F_Civil", "A3_Characters_F_Common", "A3_Characters_F_EPA", "A3_Characters_F_EPB", "A3_Characters_F_EPB_Heads", "A3_Characters_F_EPC", "A3_Characters_F_Gamma", "A3_Characters_F_Heads", "A3_Characters_F_OPFOR", "A3_Characters_F_Proxies", "A3_Data_F", "A3_Data_F_Hook", "A3_Data_F_ParticleEffects", "A3_Drones_F", "A3_Drones_F_Air_F_Gamma_UAV_01", "A3_Drones_F_Air_F_Gamma_UAV_02", "A3_Drones_F_Characters_F_Gamma", "A3_Drones_F_Soft_F_Gamma_UGV_01", "A3_Drones_F_Weapons_F_Gamma_Ammoboxes", "A3_Drones_F_Weapons_F_Gamma_Items", "A3_Dubbing_F", "A3_Dubbing_F_Beta", "A3_Dubbing_F_EPA", "A3_Dubbing_F_EPB", "A3_Dubbing_F_EPC", "A3_Dubbing_F_Gamma", "A3_Dubbing_Radio_F", "A3_Dubbing_Radio_F_Data_ENG", "A3_Dubbing_Radio_F_Data_ENGB", "A3_Dubbing_Radio_F_Data_GRE", "A3_Dubbing_Radio_F_Data_PER", "A3_Dubbing_Radio_F_Data_VR", "A3_Editor_F", "A3_EditorPreviews_F", "A3_Functions_F", "A3_Functions_F_EPA", "A3_Functions_F_EPC", "A3_Language_F", "A3_Language_F_Beta", "A3_Language_F_EPA", "A3_Language_F_EPB", "A3_Language_F_EPC", "A3_Language_F_Gamma", "A3_LanguageMissions_F", "A3_LanguageMissions_F_Beta", "A3_LanguageMissions_F_EPA", "A3_LanguageMissions_F_EPB", "A3_LanguageMissions_F_EPC", "A3_LanguageMissions_F_Gamma", "A3_Map_Altis", "A3_Map_Altis_Data", "A3_Map_Altis_Data_Layers", "A3_Map_Altis_Scenes_F", "A3_Map_Data", "A3_Map_Stratis", "A3_Map_Stratis_Data", "A3_Map_Stratis_Data_Layers", "A3_Map_Stratis_Scenes_F", "A3_Misc_F", "A3_Misc_F_Helpers", "A3_Missions_F", "A3_Missions_F_Beta", "A3_Missions_F_Beta_Data", "A3_Missions_F_Beta_Video", "A3_Missions_F_Data", "A3_Missions_F_EPA", "A3_Missions_F_EPA_Data", "A3_Missions_F_EPA_Video", "A3_Missions_F_EPB", "A3_Missions_F_EPC", "A3_Missions_F_Gamma", "A3_Missions_F_Gamma_Data", "A3_Missions_F_Gamma_Video", "A3_Missions_F_Video", "A3_Modules_F", "A3_Modules_F_Beta", "A3_Modules_F_Beta_Data", "A3_Modules_F_Beta_FiringDrills", "A3_Modules_F_Data", "A3_Modules_F_DynO", "A3_Modules_F_Effects", "A3_Modules_F_EPB", "A3_Modules_F_EPB_Misc", "A3_Modules_F_Events", "A3_Modules_F_GroupModifiers", "A3_Modules_F_Hc", "A3_Modules_F_Intel", "A3_Modules_F_LiveFeed", "A3_Modules_F_Marta", "A3_Modules_F_Misc", "A3_Modules_F_Multiplayer", "A3_Modules_F_ObjectModifiers", "A3_Modules_F_Sites", "A3_Modules_F_Skirmish", "A3_Modules_F_StrategicMap", "A3_Modules_F_Supports", "A3_Modules_F_Uav", "A3_Music_F", "A3_Music_F_EPA", "A3_Music_F_EPA_Music", "A3_Music_F_EPB", "A3_Music_F_EPB_Music", "A3_Music_F_EPC", "A3_Music_F_EPC_Music", "A3_Music_F_Music", "A3_Plants_F", "A3_Plants_F_Bush", "A3_Roads_F", "A3_Rocks_F", "A3_Rocks_F_Blunt", "A3_Rocks_F_Sharp", "A3_Rocks_F_Water", "A3_Signs_F", "A3_Signs_F_Signs_Ad", "A3_Soft_F", "A3_Soft_F_Beta", "A3_Soft_F_Beta_MRAP_03", "A3_Soft_F_Beta_Quadbike_01", "A3_Soft_F_Beta_Truck_01", "A3_Soft_F_Beta_Truck_02", "A3_Soft_F_EPC", "A3_Soft_F_EPC_Truck_03", "A3_Soft_F_Gamma", "A3_Soft_F_Gamma_Hatchback_01", "A3_Soft_F_Gamma_Offroad_01", "A3_Soft_F_Gamma_Quadbike_01", "A3_Soft_F_Gamma_SUV_01", "A3_Soft_F_Gamma_Truck_01", "A3_Soft_F_Gamma_Truck_02", "A3_Soft_F_Gamma_Van_01", "A3_Soft_F_MRAP_01", "A3_Soft_F_MRAP_02", "A3_Soft_F_Offroad_01", "A3_Soft_F_Quadbike_01", "A3_Sounds_F", "A3_Sounds_F_Arsenal", "A3_Sounds_F_Characters", "A3_Sounds_F_Environment", "A3_Sounds_F_EPB", "A3_Sounds_F_EPC", "A3_Sounds_F_Sfx", "A3_Sounds_F_Vehicles", "A3_Static_F", "A3_Static_F_AA_01", "A3_Static_F_AT_01", "A3_Static_F_Beta", "A3_Static_F_Beta_Mortar_01", "A3_Static_F_Gamma", "A3_Static_F_Gamma_Mortar_01", "A3_Static_F_Mortar_01", "A3_Structures_F", "A3_Structures_F_Bridges", "A3_Structures_F_Civ", "A3_Structures_F_Civ_Accessories", "A3_Structures_F_Civ_Ancient", "A3_Structures_F_Civ_BellTowers", "A3_Structures_F_Civ_Calvaries", "A3_Structures_F_Civ_Camping", "A3_Structures_F_Civ_Chapels", "A3_Structures_F_Civ_Constructions", "A3_Structures_F_Civ_Dead", "A3_Structures_F_Civ_Garbage", "A3_Structures_F_Civ_Graffiti", "A3_Structures_F_Civ_InfoBoards", "A3_Structures_F_Civ_Kiosks", "A3_Structures_F_Civ_Lamps", "A3_Structures_F_Civ_Market", "A3_Structures_F_Civ_Offices", "A3_Structures_F_Civ_Pavements", "A3_Structures_F_Civ_PlayGround", "A3_Structures_F_Civ_SportsGrounds", "A3_Structures_F_Civ_Statues", "A3_Structures_F_Civ_Tourism", "A3_Structures_F_Data", "A3_Structures_F_Dominants", "A3_Structures_F_Dominants_Amphitheater", "A3_Structures_F_Dominants_Castle", "A3_Structures_F_Dominants_Church", "A3_Structures_F_Dominants_Hospital", "A3_Structures_F_Dominants_Lighthouse", "A3_Structures_F_Dominants_WIP", "A3_Structures_F_EPA", "A3_Structures_F_EPA_Civ_Camping", "A3_Structures_F_EPA_Civ_Constructions", "A3_Structures_F_EPA_Items_Electronics", "A3_Structures_F_EPA_Items_Food", "A3_Structures_F_EPA_Items_Medical", "A3_Structures_F_EPA_Items_Tools", "A3_Structures_F_EPA_Items_Vessels", "A3_Structures_F_EPA_Mil_Scrapyard", "A3_Structures_F_EPA_Walls", "A3_Structures_F_EPB", "A3_Structures_F_EPB_Civ_Accessories", "A3_Structures_F_EPB_Civ_Camping", "A3_Structures_F_EPB_Civ_Dead", "A3_Structures_F_EPB_Civ_Garbage", "A3_Structures_F_EPB_Civ_Graffiti", "A3_Structures_F_EPB_Civ_PlayGround", "A3_Structures_F_EPB_Furniture", "A3_Structures_F_EPB_Items_Documents", "A3_Structures_F_EPB_Items_Luggage", "A3_Structures_F_EPB_Items_Military", "A3_Structures_F_EPB_Items_Vessels", "A3_Structures_F_EPB_Naval_Fishing", "A3_Structures_F_EPC", "A3_Structures_F_EPC_Civ_Accessories", "A3_Structures_F_EPC_Civ_Camping", "A3_Structures_F_EPC_Civ_Garbage", "A3_Structures_F_EPC_Civ_InfoBoards", "A3_Structures_F_EPC_Civ_Kiosks", "A3_Structures_F_EPC_Civ_Playground", "A3_Structures_F_EPC_Civ_Tourism", "A3_Structures_F_EPC_Dominants_GhostHotel", "A3_Structures_F_EPC_Dominants_Stadium", "A3_Structures_F_EPC_Furniture", "A3_Structures_F_EPC_Items_Documents", "A3_Structures_F_EPC_Items_Electronics", "A3_Structures_F_EPC_Walls", "A3_Structures_F_Furniture", "A3_Structures_F_Households", "A3_Structures_F_Households_Addons", "A3_Structures_F_Households_House_Big01", "A3_Structures_F_Households_House_Big02", "A3_Structures_F_Households_House_Shop01", "A3_Structures_F_Households_House_Shop02", "A3_Structures_F_Households_House_Small01", "A3_Structures_F_Households_House_Small02", "A3_Structures_F_Households_House_Small03", "A3_Structures_F_Households_Slum", "A3_Structures_F_Households_Stone_Big", "A3_Structures_F_Households_Stone_Shed", "A3_Structures_F_Households_Stone_Small", "A3_Structures_F_Households_WIP", "A3_Structures_F_Ind", "A3_Structures_F_Ind_AirPort", "A3_Structures_F_Ind_Cargo", "A3_Structures_F_Ind_CarService", "A3_Structures_F_Ind_ConcreteMixingPlant", "A3_Structures_F_Ind_Crane", "A3_Structures_F_Ind_DieselPowerPlant", "A3_Structures_F_Ind_Factory", "A3_Structures_F_Ind_FuelStation", "A3_Structures_F_Ind_FuelStation_Small", "A3_Structures_F_Ind_Pipes", "A3_Structures_F_Ind_PowerLines", "A3_Structures_F_Ind_ReservoirTank", "A3_Structures_F_Ind_Shed", "A3_Structures_F_Ind_SolarPowerPlant", "A3_Structures_F_Ind_Tank", "A3_Structures_F_Ind_Transmitter_Tower", "A3_Structures_F_Ind_WavePowerPlant", "A3_Structures_F_Ind_Windmill", "A3_Structures_F_Ind_WindPowerPlant", "A3_Structures_F_Items", "A3_Structures_F_Items_Documents", "A3_Structures_F_Items_Electronics", "A3_Structures_F_Items_Food", "A3_Structures_F_Items_Gadgets", "A3_Structures_F_Items_Luggage", "A3_Structures_F_Items_Medical", "A3_Structures_F_Items_Military", "A3_Structures_F_Items_Stationery", "A3_Structures_F_Items_Tools", "A3_Structures_F_Items_Valuables", "A3_Structures_F_Items_Vessels", "A3_Structures_F_Mil", "A3_Structures_F_Mil_BagBunker", "A3_Structures_F_Mil_BagFence", "A3_Structures_F_Mil_Barracks", "A3_Structures_F_Mil_Bunker", "A3_Structures_F_Mil_Cargo", "A3_Structures_F_Mil_Flags", "A3_Structures_F_Mil_Fortification", "A3_Structures_F_Mil_Helipads", "A3_Structures_F_Mil_Offices", "A3_Structures_F_Mil_Radar", "A3_Structures_F_Mil_Scrapyard", "A3_Structures_F_Mil_Shelters", "A3_Structures_F_Mil_TentHangar", "A3_Structures_F_Naval", "A3_Structures_F_Naval_Buoys", "A3_Structures_F_Naval_Fishing", "A3_Structures_F_Naval_Piers", "A3_Structures_F_Naval_RowBoats", "A3_Structures_F_Research", "A3_Structures_F_Signs_Companies", "A3_Structures_F_System", "A3_Structures_F_Training", "A3_Structures_F_Training_InvisibleTarget", "A3_Structures_F_Walls", "A3_Structures_F_Wrecks", "A3_Ui_F", "A3_Ui_F_Data", "A3_UiFonts_F", "A3_Weapons_F", "A3_Weapons_F_Acc", "A3_Weapons_F_Ammoboxes", "A3_Weapons_F_Beta", "A3_Weapons_F_Beta_Acc", "A3_Weapons_F_Beta_Ammoboxes", "A3_Weapons_F_Beta_LongRangeRifles_EBR", "A3_Weapons_F_Beta_LongRangeRifles_GM6", "A3_Weapons_F_Beta_LongRangeRifles_M320", "A3_Weapons_F_Beta_Rifles_Khaybar", "A3_Weapons_F_Beta_Rifles_MX", "A3_Weapons_F_Beta_Rifles_TRG20", "A3_Weapons_F_DummyWeapons", "A3_Weapons_F_EPA", "A3_Weapons_F_EPA_Acc", "A3_Weapons_F_EPA_Ammoboxes", "A3_Weapons_F_EPB", "A3_Weapons_F_EPB_Acc", "A3_Weapons_F_EPB_Ammoboxes", "A3_Weapons_F_EPB_LongRangeRifles_GM6", "A3_Weapons_F_EPC", "A3_Weapons_F_Explosives", "A3_Weapons_F_Gamma", "A3_Weapons_F_Gamma_Acc", "A3_Weapons_F_Gamma_Ammoboxes", "A3_Weapons_F_Gamma_LongRangeRifles_EBR", "A3_Weapons_F_Gamma_Rifles_MX", "A3_Weapons_F_Items", "A3_Weapons_F_Launchers_NLAW", "A3_Weapons_F_Launchers_RPG32", "A3_Weapons_F_Launchers_Titan", "A3_Weapons_F_LongRangeRifles_DMR_01", "A3_Weapons_F_LongRangeRifles_EBR", "A3_Weapons_F_LongRangeRifles_GM6", "A3_Weapons_F_LongRangeRifles_M320", "A3_Weapons_F_Machineguns_M200", "A3_Weapons_F_Machineguns_Zafir", "A3_Weapons_F_Pistols_ACPC2", "A3_Weapons_F_Pistols_P07", "A3_Weapons_F_Pistols_Pistol_Heavy_01", "A3_Weapons_F_Pistols_Pistol_Heavy_02", "A3_Weapons_F_Pistols_Rook40", "A3_Weapons_F_Rifles_Khaybar", "A3_Weapons_F_Rifles_MK20", "A3_Weapons_F_Rifles_MX", "A3_Weapons_F_Rifles_MX_Black", "A3_Weapons_F_Rifles_SDAR", "A3_Weapons_F_Rifles_TRG20", "A3_Weapons_F_SMGs_Pdw2000", "A3_Weapons_F_SMGs_SMG_01", "A3_Weapons_F_SMGs_SMG_02"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Heli_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Mark_Loadorder
	{
		addonRootClass = "A3_Data_F_Mark";
		requiredAddons[] = {"A3_Anims_F_Mark", "A3_Anims_F_Mark_Deployment", "A3_Characters_F_Mark", "A3_Data_F_Mark", "A3_Dubbing_F_Mark", "A3_Dubbing_F_MP_Mark", "A3_Functions_F_Mark", "A3_Functions_F_MP_Mark", "A3_Language_F_Mark", "A3_Language_F_MP_Mark", "A3_LanguageMissions_F_Mark", "A3_LanguageMissions_F_MP_Mark", "A3_Missions_F_Mark", "A3_Missions_F_Mark_Data", "A3_Missions_F_Mark_Video", "A3_Missions_F_MP_Mark", "A3_Missions_F_MP_Mark_Data", "A3_Modules_F_Mark", "A3_Modules_F_Mark_FiringDrills", "A3_Modules_F_MP_Mark", "A3_Modules_F_MP_Mark_Objectives", "A3_Music_F_Mark", "A3_Music_F_Mark_Music", "A3_Sounds_F_Mark", "A3_Static_F_Mark", "A3_Static_F_Mark_Designator_01", "A3_Static_F_Mark_Designator_02", "A3_Structures_F_Mark", "A3_Structures_F_Mark_Items_Military", "A3_Structures_F_Mark_Items_Sport", "A3_Structures_F_Mark_Mil_Flags", "A3_Structures_F_Mark_Training", "A3_Structures_F_Mark_VR_Helpers", "A3_Structures_F_Mark_VR_Shapes", "A3_Structures_F_Mark_VR_Targets", "A3_Supplies_F_Mark", "A3_Ui_F_Mark", "A3_Ui_F_MP_Mark", "A3_Weapons_F_Mark", "A3_Weapons_F_Mark_Acc", "A3_Weapons_F_Mark_LongRangeRifles_DMR_01", "A3_Weapons_F_Mark_LongRangeRifles_DMR_02", "A3_Weapons_F_Mark_LongRangeRifles_DMR_03", "A3_Weapons_F_Mark_LongRangeRifles_DMR_04", "A3_Weapons_F_Mark_LongRangeRifles_DMR_05", "A3_Weapons_F_Mark_LongRangeRifles_DMR_06", "A3_Weapons_F_Mark_LongRangeRifles_EBR", "A3_Weapons_F_Mark_LongRangeRifles_GM6", "A3_Weapons_F_Mark_LongRangeRifles_GM6_Camo", "A3_Weapons_F_Mark_LongRangeRifles_M320", "A3_Weapons_F_Mark_LongRangeRifles_M320_Camo", "A3_Weapons_F_Mark_Machineguns_M200", "A3_Weapons_F_Mark_Machineguns_MMG_01", "A3_Weapons_F_Mark_Machineguns_MMG_02", "A3_Weapons_F_Mark_Machineguns_Zafir", "A3_Weapons_F_Mark_Rifles_Khaybar", "A3_Weapons_F_Mark_Rifles_MK20", "A3_Weapons_F_Mark_Rifles_MX", "A3_Weapons_F_Mark_Rifles_SDAR", "A3_Weapons_F_Mark_Rifles_TRG20"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Mod
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Official Mod - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Exp_B_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Mod_Loadorder
	{
		addonRootClass = "A3_Data_F_Mod";
		requiredAddons[] = {"A3_Anims_F_Mod", "A3_Data_F_Mod", "A3_Language_F_Mod", "A3_Sounds_F_Mod", "A3_Weapons_F_Mod", "A3_Weapons_F_Mod_SMGs_SMG_03"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Patrol_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Orange_Loadorder
	{
		addonRootClass = "A3_Data_F_Orange";
		requiredAddons[] = {"A3_Air_F_Orange", "A3_Air_F_Orange_Heli_Transport_02", "A3_Air_F_Orange_UAV_01", "A3_Air_F_Orange_UAV_06", "A3_Cargoposes_F_Orange", "A3_Characters_F_Orange", "A3_Characters_F_Orange_Facewear", "A3_Characters_F_Orange_Headgear", "A3_Characters_F_Orange_Uniforms", "A3_Characters_F_Orange_Vests", "A3_Data_F_Orange", "A3_Dubbing_F_Orange", "A3_EditorPreviews_F_Orange", "A3_Functions_F_Orange", "A3_Language_F_Orange", "A3_LanguageMissions_F_Orange", "A3_Missions_F_Orange", "A3_Modules_F_Orange", "A3_Music_F_Orange", "A3_Props_F_Orange", "A3_Props_F_Orange_Civilian", "A3_Props_F_Orange_Civilian_Constructions", "A3_Props_F_Orange_Civilian_InfoBoards", "A3_Props_F_Orange_Furniture", "A3_Props_F_Orange_Humanitarian", "A3_Props_F_Orange_Humanitarian_Camps", "A3_Props_F_Orange_Humanitarian_Garbage", "A3_Props_F_Orange_Humanitarian_Supplies", "A3_Props_F_Orange_Items", "A3_Props_F_Orange_Items_Decorative", "A3_Props_F_Orange_Items_Documents", "A3_Props_F_Orange_Items_Electronics", "A3_Props_F_Orange_Items_Tools", "A3_Soft_F_Orange", "A3_Soft_F_Orange_Offroad_01", "A3_Soft_F_Orange_Offroad_02", "A3_Soft_F_Orange_Truck_02", "A3_Soft_F_Orange_UGV_01", "A3_Soft_F_Orange_Van_02", "A3_Sounds_F_Orange", "A3_Structures_F_Orange", "A3_Structures_F_Orange_Humanitarian", "A3_Structures_F_Orange_Humanitarian_Camps", "A3_Structures_F_Orange_Humanitarian_Flags", "A3_Structures_F_Orange_Industrial", "A3_Structures_F_Orange_Industrial_Cargo", "A3_Structures_F_Orange_Signs", "A3_Structures_F_Orange_Signs_Mines", "A3_Structures_F_Orange_Signs_Special", "A3_Structures_F_Orange_VR_Helpers", "A3_Structures_F_Orange_Walls", "A3_Structures_F_Orange_Walls_Plastic", "A3_Supplies_F_Orange", "A3_Supplies_F_Orange_Ammoboxes", "A3_Supplies_F_Orange_Bags", "A3_Supplies_F_Orange_CargoNets", "A3_Ui_F_Orange", "A3_Weapons_F_Orange", "A3_Weapons_F_Orange_Explosives", "A3_Weapons_F_Orange_Items"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_ParticleEffects
	{
		addonRootClass = "A3_Data_F";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {"Crater", "CraterLong", "CraterLong_small"};
		weapons[] = {};
	};
	class A3_Data_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Argo_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Patrol_Loadorder
	{
		addonRootClass = "A3_Data_F_Patrol";
		requiredAddons[] = {"A3_Characters_F_Patrol", "A3_Data_F_Patrol", "A3_Functions_F_Patrol", "A3_Language_F_Patrol", "A3_LanguageMissions_F_Patrol", "A3_Missions_F_Patrol", "A3_Modules_F_Patrol", "A3_Sounds_F_Patrol", "A3_Ui_F_Patrol", "A3_Weapons_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Sams
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Sams - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Tank_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Sams_Loadorder
	{
		addonRootClass = "A3_Data_F_Sams";
		requiredAddons[] = {"A3_Data_F_Sams", "A3_EditorPreviews_F_Sams", "A3_Language_F_Sams", "A3_Static_F_Sams", "A3_Static_F_Sams_Radar_System_01", "A3_Static_F_Sams_Radar_System_02", "A3_Static_F_Sams_SAM_System_03", "A3_Static_F_Sams_SAM_System_04", "A3_Weapons_F_Sams"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Orange_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Tacops_Loadorder
	{
		addonRootClass = "A3_Data_F_Tacops";
		requiredAddons[] = {"A3_Characters_F_Tacops", "A3_Data_F_Tacops", "A3_Dubbing_F_Tacops", "A3_Functions_F_Tacops", "A3_Language_F_Tacops", "A3_LanguageMissions_F_Tacops", "A3_Missions_F_Tacops", "A3_Modules_F_Tacops", "A3_Music_F_Tacops", "A3_Sounds_F_Tacops", "A3_Ui_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Tacops_Loadorder"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Tank_Loadorder
	{
		addonRootClass = "A3_Data_F_Tank";
		requiredAddons[] = {"A3_Armor_F_Tank", "A3_Armor_F_Tank_AFV_Wheeled_01", "A3_Armor_F_Tank_LT_01", "A3_Armor_F_Tank_MBT_04", "A3_Cargoposes_F_Tank", "A3_Characters_F_Tank", "A3_Characters_F_Tank_Headgear", "A3_Characters_F_Tank_Uniforms", "A3_Data_F_Tank", "A3_EditorPreviews_F_Tank", "A3_Language_F_Tank", "A3_Modules_F_Tank", "A3_Music_F_Tank", "A3_Props_F_Tank", "A3_Props_F_Tank_Military", "A3_Props_F_Tank_Military_TankAcc", "A3_Sounds_F_Tank", "A3_Structures_F_Tank", "A3_Structures_F_Tank_Military", "A3_Structures_F_Tank_Military_Fortifications", "A3_Structures_F_Tank_Military_RepairDepot", "A3_Ui_F_Tank", "A3_Weapons_F_Tank", "A3_Weapons_F_Tank_Bags", "A3_Weapons_F_Tank_Launchers_MRAWS", "A3_Weapons_F_Tank_Launchers_Vorona"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Data_F_Warlords
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Warlords - Main Configuration";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Data_F_Warlords_Loadorder
	{
		addonRootClass = "A3_Data_F_Warlords";
		requiredAddons[] = {"A3_Data_F_Warlords", "A3_Dubbing_F_Warlords", "A3_Functions_F_Warlords", "A3_Language_F_Warlords", "A3_Missions_F_Warlords", "A3_Modules_F_Warlords"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Drones_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Drones";
		requiredAddons[] = {"A3_Air_F_Beta", "A3_Characters_F_Beta", "A3_Soft_F_Beta", "A3_Weapons_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Drones_F_Air_F_Gamma_UAV_01
	{
		addonRootClass = "A3_Drones_F";
		requiredAddons[] = {"A3_Drones_F"};
		requiredVersion = 0.1;
		units[] = {"B_UAV_01_F", "I_UAV_01_F", "O_UAV_01_F"};
		weapons[] = {};
	};
	class A3_Drones_F_Air_F_Gamma_UAV_02
	{
		addonRootClass = "A3_Drones_F";
		requiredAddons[] = {"A3_Drones_F"};
		requiredVersion = 0.1;
		units[] = {"B_UAV_02_CAS_F", "B_UAV_02_dynamicLoadout_F", "B_UAV_02_F", "I_UAV_02_CAS_F", "I_UAV_02_dynamicLoadout_F", "I_UAV_02_F", "O_UAV_02_CAS_F", "O_UAV_02_dynamicLoadout_F", "O_UAV_02_F"};
		weapons[] = {};
	};
	class A3_Drones_F_Characters_F_Gamma
	{
		addonRootClass = "A3_Drones_F";
		requiredAddons[] = {"A3_Drones_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Drones_F_Soft_F_Gamma_UGV_01
	{
		addonRootClass = "A3_Drones_F";
		requiredAddons[] = {"A3_Drones_F"};
		requiredVersion = 0.1;
		units[] = {"B_UGV_01_F", "B_UGV_01_rcws_F", "I_UGV_01_F", "I_UGV_01_rcws_F", "O_UGV_01_F", "O_UGV_01_rcws_F"};
		weapons[] = {};
	};
	class A3_Drones_F_Weapons_F_Gamma_Ammoboxes
	{
		addonRootClass = "A3_Drones_F";
		requiredAddons[] = {"A3_Drones_F", "A3_Weapons_F_Beta_Ammoboxes"};
		requiredVersion = 0.1;
		units[] = {"B_UAV_01_backpack_F", "I_UAV_01_backpack_F", "O_UAV_01_backpack_F"};
		weapons[] = {};
	};
	class A3_Drones_F_Weapons_F_Gamma_Items
	{
		addonRootClass = "A3_Drones_F";
		requiredAddons[] = {"A3_Drones_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"B_UavTerminal", "I_UavTerminal", "O_UavTerminal"};
	};
	class A3_Dubbing_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Voiceover";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Voiceover";
		requiredAddons[] = {"A3_Dubbing_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Voiceover";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Voiceover";
		requiredAddons[] = {"A3_Dubbing_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Voiceover";
		requiredAddons[] = {"A3_Dubbing_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Voiceover";
		requiredAddons[] = {"A3_Dubbing_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Voiceover";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Voiceover";
		requiredAddons[] = {"A3_Dubbing_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Voiceover";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Voiceover";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Voiceover";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_MP_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen (Multiplayer) - Voiceover";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Voiceover";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - Voiceover";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Voiceover";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_F_Warlords
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Warlords - Voiceover";
		requiredAddons[] = {"A3_Data_F_Warlords"};
		requiredVersion = 0.1;
		units[] = {};
		url = "http://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Radio Protocol";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_Data_ENG
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - English Radio Protocol";
		requiredAddons[] = {"A3_Dubbing_Radio_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_Data_ENGB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - British Radio Protocol";
		requiredAddons[] = {"A3_Dubbing_Radio_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_Data_GRE
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Greek Radio Protocol";
		requiredAddons[] = {"A3_Dubbing_Radio_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_Data_PER
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Persian Radio Protocol";
		requiredAddons[] = {"A3_Dubbing_Radio_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_Data_VR
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Virtual Reality Radio Protocol";
		requiredAddons[] = {"A3_Dubbing_Radio_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "CFGPATCHES_A3_Dubbing_Radio_F_Enoch";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_EXP
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Radio Protocol";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_EXP_Data_CHI
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Chinese Radio Protocol";
		requiredAddons[] = {"A3_Dubbing_Radio_F_EXP"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_EXP_Data_ENGFRE
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - French English Radio Protocol";
		requiredAddons[] = {"A3_Dubbing_Radio_F_EXP"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Dubbing_Radio_F_EXP_Data_FRE
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - French Radio Protocol";
		requiredAddons[] = {"A3_Dubbing_Radio_F_EXP"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Editor_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Legacy 3D Editor";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_EditorPreviews_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Editor preview pictures";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_EditorPreviews_F_Argo
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Editor preview pictures";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_EditorPreviews_F_Destroyer
	{
		author = "Bohemia Interactive";
		name = "CFGPATCHES_A3_EditorPreviews_F_Destroyer";
		requiredAddons[] = {"A3_Data_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_EditorPreviews_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Editor preview pictures";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_EditorPreviews_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Editor preview pictures";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_EditorPreviews_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Editor preview pictures";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_EditorPreviews_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Editor preview pictures";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_EditorPreviews_F_Sams
	{
		author = "Bohemia Interactive";
		name = "CFGPATCHES_A3_EditorPreviews_F_Sams";
		requiredAddons[] = {"A3_Data_F_Sams"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_EditorPreviews_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Editor preview pictures";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Script Functions";
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Script Functions";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Curator
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Zeus Update - Script Functions";
		requiredAddons[] = {"A3_Functions_F_EPC"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Destroyer
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Script Functions";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Script Functions";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Script Functions";
		requiredAddons[] = {"A3_Functions_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Script Functions";
		requiredAddons[] = {"A3_Functions_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Script Functions";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Script Functions";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Script Functions";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Script Functions";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Script Functions";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_MP_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen (Multiplayer) - Script Functions";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Script Functions";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - Script Functions";
		requiredAddons[] = {"A3_Data_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - Script Functions";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Script Functions";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Functions_F_Warlords
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Warlords - Script Functions";
		requiredAddons[] = {"A3_Data_F_Warlords"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Texts and Translations";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Argo
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Texts and Translations";
		requiredAddons[] = {"A3_Language_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Curator
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Zeus Update - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Destroyer
	{
		author = "Bohemia Interactive";
		name = "CFGPATCHES_A3_Language_F_Destroyer";
		requiredAddons[] = {"A3_Data_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Texts and Translations";
		requiredAddons[] = {"A3_Language_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Texts and Translations";
		requiredAddons[] = {"A3_Language_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Texts and Translations";
		requiredAddons[] = {"A3_Language_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Exp_B
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Eden Update - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Exp_B"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Texts and Translations";
		requiredAddons[] = {"A3_Language_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Mod
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Official Mod - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Mod"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_MP_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen (Multiplayer) - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Sams
	{
		author = "Bohemia Interactive";
		name = "CFGPATCHES_A3_Language_F_Sams";
		requiredAddons[] = {"A3_Data_F_Sams"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Language_F_Warlords
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Warlords - Texts and Translations";
		requiredAddons[] = {"A3_Language_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Mission Texts and Translations";
		requiredAddons[] = {"A3_LanguageMissions_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Mission Texts and Translations";
		requiredAddons[] = {"A3_LanguageMissions_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Mission Texts and Translations";
		requiredAddons[] = {"A3_LanguageMissions_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Mission Texts and Translations";
		requiredAddons[] = {"A3_LanguageMissions_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Mission Texts and Translations";
		requiredAddons[] = {"A3_LanguageMissions_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_MP_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen (Multiplayer) - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_LanguageMissions_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Mission Texts and Translations";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Altis
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Altis Map Terrain";
		requiredAddons[] = {"A3_Data_F", "A3_Map_Data"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Altis_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Altis Map Skybox";
		requiredAddons[] = {"A3_Map_Altis"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Altis_Data_Layers
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Altis Map Textures";
		requiredAddons[] = {"A3_Map_Altis_Data"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Altis_Scenes
	{
		requiredAddons[] = {"A3_Map_Altis_Scenes_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Map_Altis_Scenes_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Altis Map Scenes";
		requiredAddons[] = {"A3_Map_Altis"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Shared Map Definitions";
		requiredAddons[] = {"A3_Data_F", "A3_Roads_F", "A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Data_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Shared Map Definitions";
		requiredAddons[] = {"A3_Map_Data"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Enoch Map Terrain";
		requiredAddons[] = {"A3_Data_F_Enoch", "A3_Map_Data_Exp", "A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Enoch_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Enoch Map Skybox";
		requiredAddons[] = {"A3_Map_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Enoch_Data_Layers
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Enoch Map Textures";
		requiredAddons[] = {"A3_Map_Enoch_Data"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Enoch_Scenes_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Enoch Map Scenes";
		requiredAddons[] = {"A3_Map_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Malden
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Malden Map Terrain";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Malden_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Malden Map Skybox";
		requiredAddons[] = {"A3_Map_Malden"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Malden_Data_Layers
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Malden Map Textures";
		requiredAddons[] = {"A3_Map_Malden_Data"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Malden_Scenes_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Malden Map Scenes";
		requiredAddons[] = {"A3_Map_Malden"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Stratis
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Stratis Map Terrain";
		requiredAddons[] = {"A3_Data_F", "A3_Map_Data"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Stratis_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Stratis Map Skybox";
		requiredAddons[] = {"A3_Map_Stratis"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Stratis_Data_Layers
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Stratis Map Textures";
		requiredAddons[] = {"A3_Map_Stratis_Data"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Stratis_Scenes
	{
		requiredAddons[] = {"A3_Map_Stratis_Scenes_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Map_Stratis_Scenes_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Stratis Map Scenes";
		requiredAddons[] = {"A3_Map_Stratis"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Tanoa_Scenes_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Tanoa Map Scenes";
		requiredAddons[] = {"A3_Map_Tanoabuka"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Tanoabuka
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Tanoa Map Terrain";
		requiredAddons[] = {"A3_Data_F_Argo_Loadorder", "A3_Map_Data_Exp", "A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Tanoabuka_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Tanoa Map Skybox";
		requiredAddons[] = {"A3_Map_Tanoabuka"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_Tanoabuka_Data_Layers
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Tanoa Map Textures";
		requiredAddons[] = {"A3_Map_Tanoabuka_Data"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_VR
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Virtual Reality Map Terrain";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Map_VR_Scenes
	{
		requiredAddons[] = {"A3_Map_VR_Scenes_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Map_VR_Scenes_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Virtual Reality Map Scenes";
		requiredAddons[] = {"A3_Map_VR"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Misc_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - 3D Aids and Helpers";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Misc_F_Helpers
	{
		addonRootClass = "A3_Misc_F";
		requiredAddons[] = {"A3_Misc_F"};
		requiredVersion = 0.1;
		units[] = {"Helper_Base_F", "Sign_Arrow_Blue_F", "Sign_Arrow_Cyan_F", "Sign_Arrow_Direction_Blue_F", "Sign_Arrow_Direction_Cyan_F", "Sign_Arrow_Direction_F", "Sign_Arrow_Direction_Green_F", "Sign_Arrow_Direction_Pink_F", "Sign_Arrow_Direction_Yellow_F", "Sign_Arrow_F", "Sign_Arrow_Green_F", "Sign_Arrow_Large_Blue_F", "Sign_Arrow_Large_Cyan_F", "Sign_Arrow_Large_F", "Sign_Arrow_Large_Green_F", "Sign_Arrow_Large_Pink_F", "Sign_Arrow_Large_Yellow_F", "Sign_Arrow_Pink_F", "Sign_Arrow_Yellow_F", "Sign_Circle_F", "Sign_Pointer_Blue_F", "Sign_Pointer_Cyan_F", "Sign_Pointer_F", "Sign_Pointer_Green_F", "Sign_Pointer_Pink_F", "Sign_Pointer_Yellow_F", "Sign_Sphere100cm_F", "Sign_Sphere10cm_F", "Sign_Sphere25cm_F", "UserTexture10m_F", "UserTexture1m_F"};
		weapons[] = {};
	};
	class A3_Missions_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Playable Content";
		requiredAddons[] = {"A3_Data_F", "A3_Ui_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Playable Content";
		requiredAddons[] = {"A3_Missions_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleMPType_F", "ModuleMPTypeDefense_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Beta_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Beta_Video
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Playable Content Videos";
		requiredAddons[] = {"A3_Missions_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Playable Content";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Bootcamp_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Bootcamp_Video
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Playable Content Videos";
		requiredAddons[] = {"A3_Missions_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Curator
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Zeus Update - Playable Content";
		requiredAddons[] = {"A3_Data_F_Curator", "A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleMPTypeGameMaster_F", "ModuleMPTypeSectorControl_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Playable Content";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Playable Content";
		requiredAddons[] = {"A3_Missions_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"Lightning_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_EPA_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_EPA_Video
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Playable Content Videos";
		requiredAddons[] = {"A3_Missions_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Playable Content";
		requiredAddons[] = {"A3_Missions_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Playable Content";
		requiredAddons[] = {"A3_Missions_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Playable Content";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Playable Content";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Exp_A_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Exp_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Exp_Video
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Playable Content Videos";
		requiredAddons[] = {"A3_Missions_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Playable Content";
		requiredAddons[] = {"A3_Missions_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"ModuleMPTypeSeize_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Gamma_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Gamma_Video
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Playable Content Videos";
		requiredAddons[] = {"A3_Missions_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Playable Content";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"ModuleMPTypeGroundSupport_F", "ModuleMPTypeGroundSupportBase_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Heli_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Heli_Video
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Playable Content Videos";
		requiredAddons[] = {"A3_Missions_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Playable Content";
		requiredAddons[] = {"A3_Boat_F_Jets", "A3_Data_F_Jets", "A3_LanguageMissions_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Playable Content";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Kart_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Playable Content";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Mark_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Mark_Video
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Playable Content Videos";
		requiredAddons[] = {"A3_Missions_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_MP_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen (Multiplayer) - Playable Content";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_MP_Mark_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen (Multiplayer) - Playable Content Images";
		requiredAddons[] = {"A3_Missions_F_MP_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Playable Content";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - Playable Content";
		requiredAddons[] = {"A3_Characters_F_Patrol", "A3_Data_F_Patrol", "A3_Weapons_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Tacops
	{
		author = "CFGPATCHES_AUTHOR";
		name = "CFGPATCHES_A3_Missions_F_Tacops";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Playable Content";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Video
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Playable Content Videos";
		requiredAddons[] = {"A3_Missions_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Warlords
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Warlords - Playable Content";
		requiredAddons[] = {"A3_Data_F_Warlords"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Missions_F_Warlords_Data
	{
		addonRootClass = "A3_Missions_F_Warlords";
		requiredAddons[] = {"A3_Missions_F_Warlords"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Modules_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Scripted Modules";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {"Camera_F", "ControlPoint_F", "Curator_F", "Curve_F", "Key_F", "LocationArea_F", "LocationBase_F", "LocationCamp_F", "LocationCity_F", "LocationCityCapital_F", "LocationEvacPoint_F", "LocationFOB_F", "LocationOutpost_F", "LocationRespawnPoint_F", "LocationResupplyPoint_F", "LocationVillage_F", "Logic", "MiscAND_F", "MiscLock_F", "MiscOR_F", "MiscUnlock_F", "Module_F", "ModuleEditTerrainObject_F", "ModuleHideTerrainObjects_F", "SideBLUFOR_F", "SideOPFOR_F", "SideResistance_F", "Timeline_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Scripted Modules";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Beta_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Scripted Modules Images";
		requiredAddons[] = {"A3_Modules_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Beta_FiringDrills
	{
		addonRootClass = "A3_Modules_F_Beta";
		requiredAddons[] = {"A3_Modules_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"ModuleFiringDrill_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Bootcamp_Misc
	{
		addonRootClass = "A3_Modules_F_Bootcamp";
		requiredAddons[] = {"A3_Modules_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"ModuleArsenal_F", "ModuleBootcampStage_F", "ModuleHint_F", "ModulePunishment_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Zeus Update - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleEmpty_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Animals
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleAnimals_F", "ModuleAnimalsButterflies_F", "ModuleAnimalsGoats_F", "ModuleAnimalsPoultry_F", "ModuleAnimalsSeagulls_F", "ModuleAnimalsSheep_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_CAS
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleCAS_F", "ModuleCASBomb_F", "ModuleCASGun_F", "ModuleCASGunMissile_F", "ModuleCASMissile_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Chemlights
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator", "A3_Modules_F_Curator_Effects"};
		requiredVersion = 0.1;
		units[] = {"ModuleChemlightBlue_F", "ModuleChemlightGreen_F", "ModuleChemlightRed_F", "ModuleChemlightYellow_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Curator
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleCurator_F", "ModuleCuratorAddAddons_F", "ModuleCuratorAddCameraArea_F", "ModuleCuratorAddEditableObjects", "ModuleCuratorAddEditingArea_F", "ModuleCuratorAddEditingAreaPlayers_F", "ModuleCuratorAddIcon_F", "ModuleCuratorAddPoints_F", "ModuleCuratorSetAttributesGroup_F", "ModuleCuratorSetAttributesMarker_F", "ModuleCuratorSetAttributesObject_F", "ModuleCuratorSetAttributesPlayer_F", "ModuleCuratorSetAttributesWaypoint_F", "ModuleCuratorSetCamera_F", "ModuleCuratorSetCoefs_F", "ModuleCuratorSetCosts_F", "ModuleCuratorSetDefaultCosts_F", "ModuleCuratorSetEditingAreaType_F", "ModuleCuratorSetModuleCosts_F", "ModuleCuratorSetObjectCosts_F", "ModuleCuratorSetSideCosts_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Effects
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleIRGrenade_F", "ModuleMusic_F", "ModulePostprocess_F", "ModuleRadio_F", "ModuleSound_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Environment
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleTimeMultiplier_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Flares
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator", "A3_Modules_F_Curator_Effects"};
		requiredVersion = 0.1;
		units[] = {"ModuleFlare_F", "ModuleFlareGreen_F", "ModuleFlareRed_F", "ModuleFlareWhite_F", "ModuleFlareYellow_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Intel
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleDiary_F", "ModuleEndMission_F", "ModuleMissionName_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Lightning
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleLightning_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Mines
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleExplosive_Claymore_F", "ModuleExplosive_DemoCharge_F", "ModuleExplosive_F", "ModuleExplosive_IEDLandBig_F", "ModuleExplosive_IEDLandSmall_F", "ModuleExplosive_IEDUrbanBig_F", "ModuleExplosive_IEDUrbanSmall_F", "ModuleExplosive_SatchelCharge_F", "ModuleMine_APERSBoundingMine_F", "ModuleMine_APERSMine_F", "ModuleMine_APERSTripMine_F", "ModuleMine_ATMine_F", "ModuleMine_F", "ModuleMine_SLAMDirectionalMine_F", "ModuleMine_UnderwaterMine_F", "ModuleMine_UnderwaterMineAB_F", "ModuleMine_UnderwaterMinePDM_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Misc
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleCoverMap_F", "ModuleRadioChannelCreate_F", "ModuleRemoteControl_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Multiplayer
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"LogicSectorBase_F", "LogicSectorCiv100m_F", "LogicSectorCiv200m_F", "LogicSectorCiv500m_F", "LogicSectorEast100m_F", "LogicSectorEast200m_F", "LogicSectorEast500m_F", "LogicSectorGuer100m_F", "LogicSectorGuer200m_F", "LogicSectorGuer500m_F", "LogicSectorPreview100m_F", "LogicSectorPreview200m_F", "LogicSectorPreview500m_F", "LogicSectorUnknown100m_F", "LogicSectorUnknown200m_F", "LogicSectorUnknown500m_F", "LogicSectorWest100m_F", "LogicSectorWest200m_F", "LogicSectorWest500m_F", "ModuleBleedTickets_F", "ModuleCountdown_F", "ModuleRespawnTickets_F", "ModuleZoneProtection_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Objectives
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleObjective_F", "ModuleObjectiveAttackDefend_F", "ModuleObjectiveGetIn_F", "ModuleObjectiveMove_F", "ModuleObjectiveNeutralize_F", "ModuleObjectiveProtect_F", "ModuleObjectiveSector_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Ordnance
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleOrdnance_F", "ModuleOrdnanceHowitzer_F", "ModuleOrdnanceMortar_F", "ModuleOrdnanceRocket_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_Respawn
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator"};
		requiredVersion = 0.1;
		units[] = {"ModuleRespawnInventory_F", "ModuleRespawnPositionCiv_F", "ModuleRespawnPositionEast_F", "ModuleRespawnPositionGuer_F", "ModuleRespawnPositionWest_F", "ModuleVehicleRespawnPositionCiv_F", "ModuleVehicleRespawnPositionEast_F", "ModuleVehicleRespawnPositionGuer_F", "ModuleVehicleRespawnPositionWest_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Curator_SmokeShells
	{
		addonRootClass = "A3_Modules_F_Curator";
		requiredAddons[] = {"A3_Modules_F_Curator", "A3_Modules_F_Curator_Effects"};
		requiredVersion = 0.1;
		units[] = {"ModuleSmokeBlue_F", "ModuleSmokeGreen_F", "ModuleSmokeOrange_F", "ModuleSmokePurple_F", "ModuleSmokeRed_F", "ModuleSmokeWhite_F", "ModuleSmokeYellow_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Scripted Modules Images";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_DynO
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Modules_F_Effects
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"BIS_Effect_Day", "BIS_Effect_FilmGrain", "BIS_Effect_MovieNight", "BIS_Effect_Sepia", "ModuleChemlight_F", "ModuleEffectsBubbles_F", "ModuleEffectsFire_F", "ModuleEffectsPlankton_F", "ModuleEffectsShells_F", "ModuleEffectsSmoke_F", "ModuleSmoke_F", "ModuleTracers_F"};
		weapons[] = {};
	};
	class A3_Modules_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Scripted Modules";
		requiredAddons[] = {"A3_Modules_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_EPB_Misc
	{
		addonRootClass = "A3_Modules_F_EPB";
		requiredAddons[] = {"A3_Modules_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"ModulePoster_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Events
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleChat_F", "ModuleDate_F", "ModuleGenericRadio_F", "ModuleSaveGame_F", "ModuleVolume_F", "ModuleWeather_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_GroupModifiers
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleCombatGetIn", "ModuleGroupID"};
		weapons[] = {};
	};
	class A3_Modules_F_Hc
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"HighCommand", "HighCommandSubordinate"};
		weapons[] = {};
	};
	class A3_Modules_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Heli_Misc
	{
		addonRootClass = "A3_Modules_F_Heli";
		requiredAddons[] = {"A3_Modules_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"ModuleSlingload_F", "ModuleSpawnAI_F", "ModuleSpawnAIOptions_F", "ModuleSpawnAIPoint_F", "ModuleSpawnAISectorTactic_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Heli_SpawnAi
	{
		requiredAddons[] = {"A3_Modules_F_Heli_Misc"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Modules_F_Intel
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleCreateDiaryRecord_F", "ModuleHQ_F", "ModuleSkiptime_F", "ModuleTaskCreate_F", "ModuleTaskSetDescription_F", "ModuleTaskSetDestination_F", "ModuleTaskSetState_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {"ModuleObjectiveRaceCP_F", "ModuleObjectiveRaceFinish_F", "ModuleObjectiveRaceStart_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Kart_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Scripted Modules Images";
		requiredAddons[] = {"A3_Modules_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Kart_TimeTrials
	{
		addonRootClass = "A3_Modules_F_Kart";
		requiredAddons[] = {"A3_Modules_F_Kart"};
		requiredVersion = 0.1;
		units[] = {"ModuleTimeTrial_F"};
		weapons[] = {};
	};
	class A3_Modules_F_LiveFeed
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleLiveFeedBase_F", "ModuleLiveFeedEffects_F", "ModuleLiveFeedInit_F", "ModuleLiveFeedSetSource_F", "ModuleLiveFeedSetTarget_F", "ModuleLiveFeedTerminate_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Mark_FiringDrills
	{
		addonRootClass = "A3_Modules_F_Mark";
		requiredAddons[] = {"A3_Modules_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Modules_F_Mark_Objectives
	{
		requiredAddons[] = {"A3_Modules_F_MP_Mark_Objectives"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Modules_F_Marta
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"MartaManager"};
		weapons[] = {};
	};
	class A3_Modules_F_Misc
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleCuratorUnlockArea_F", "ModuleCuratorUnlockObject_F", "ModuleFriendlyFire_F", "ModuleTrident_F", "ModuleZoneRestriction_F"};
		weapons[] = {};
	};
	class A3_Modules_F_MP_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen (Multiplayer) - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"ModuleHvtEndGameObjective_F", "ModuleHvtObjectiveRandomiser_F", "ModuleHvtObjectivesInstance_F", "ModuleHvtSimpleObjective_F", "ModuleHvtStartGameObjective_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_MP_Mark_Objectives
	{
		addonRootClass = "A3_Modules_F_MP_Mark";
		requiredAddons[] = {"A3_Modules_F_MP_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Modules_F_Multiplayer
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleRespawnPosition_F", "ModuleRespawnVehicle_F", "ModuleSector_F", "ModuleSectorDummy_F"};
		weapons[] = {};
	};
	class A3_Modules_F_ObjectModifiers
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleAI_F", "ModuleAmmo_F", "ModuleDamage_F", "ModuleDoorOpen_F", "ModuleFuel_F", "ModuleHealth_F", "ModuleMode_F", "ModulePositioning_F", "ModuleRank_F", "ModuleRating_F", "ModuleShowHide_F", "ModuleSimulationManager_F", "ModuleSkill_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {"ModuleCombatPatrol_Init_F", "ModuleCombatPatrol_LocationAdd_F", "ModuleCombatPatrol_LocationAzimuthBlacklist_F", "ModuleCombatPatrol_LocationMove_F", "ModuleCombatPatrol_LocationRemove_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Sites
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"Site_Ambient", "Site_BLUFOR", "Site_Empty", "Site_F", "Site_FT_Base", "Site_Independent", "Site_Military_Base", "Site_Minefield", "Site_OPFOR", "Site_Patrol"};
		weapons[] = {};
	};
	class A3_Modules_F_Skirmish
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleSkirmishBase_F", "ModuleSkirmishTrigger_F"};
		weapons[] = {};
	};
	class A3_Modules_F_StrategicMap
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"ModuleStrategicMapImage_F", "ModuleStrategicMapInit_F", "ModuleStrategicMapMission_F", "ModuleStrategicMapModuleOpen_F", "ModuleStrategicMapORBAT_F"};
		weapons[] = {};
	};
	class A3_Modules_F_Supports
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {"SupportProvider_Artillery", "SupportProvider_CAS_Bombing", "SupportProvider_CAS_Heli", "SupportProvider_Drop", "SupportProvider_Transport", "SupportProvider_Virtual_Artillery", "SupportProvider_Virtual_CAS_Bombing", "SupportProvider_Virtual_CAS_Heli", "SupportProvider_Virtual_Drop", "SupportProvider_Virtual_Transport", "SupportRequester"};
		weapons[] = {};
	};
	class A3_Modules_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {"CivilianPresence_C_Man_casual_1_F_euro", "CivilianPresence_C_Man_casual_1_F_tanoan", "CivilianPresence_C_Man_casual_2_F_euro", "CivilianPresence_C_Man_casual_2_F_tanoan", "CivilianPresence_C_Man_casual_3_F_euro", "CivilianPresence_C_Man_casual_3_F_tanoan", "CivilianPresence_C_Man_casual_4_F_euro", "CivilianPresence_C_Man_casual_4_F_tanoan", "CivilianPresence_C_Man_casual_5_F_euro", "CivilianPresence_C_Man_casual_5_F_tanoan", "CivilianPresence_C_Man_casual_6_F_euro", "CivilianPresence_C_Man_casual_6_F_tanoan", "CivilianPresence_C_man_polo_1_F_euro", "CivilianPresence_C_man_polo_2_F_euro", "CivilianPresence_C_man_polo_3_F_euro", "CivilianPresence_C_man_polo_4_F_euro", "CivilianPresence_C_man_polo_5_F_euro", "CivilianPresence_C_man_polo_6_F_euro", "ModuleCivilianPresence_F", "ModuleCivilianPresenceSafeSpot_F", "ModuleCivilianPresenceUnit_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"ModuleVanguardFob_F", "ModuleVanguardObjective_F", "ModuleVanguardScorePersistence_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Modules_F_Uav
	{
		addonRootClass = "A3_Modules_F";
		requiredAddons[] = {"A3_Modules_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Modules_F_Warlords
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Warlords - Scripted Modules";
		requiredAddons[] = {"A3_Data_F_Warlords"};
		requiredVersion = 0.1;
		units[] = {"ModuleWLBase_F", "ModuleWLInit_F", "ModuleWLResponse_F", "ModuleWLSector_F", "ModuleWLSpawnPoint_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Soundtrack";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Argo
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Soundtrack";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Soundtrack";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Bootcamp_Music
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Soundtrack Files";
		requiredAddons[] = {"A3_Music_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Soundtrack";
		requiredAddons[] = {"A3_Music_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_EPA_Music
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Soundtrack Files";
		requiredAddons[] = {"A3_Music_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Soundtrack";
		requiredAddons[] = {"A3_Music_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_EPB_Music
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Soundtrack Files";
		requiredAddons[] = {"A3_Music_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Soundtrack";
		requiredAddons[] = {"A3_Music_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_EPC_Music
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Soundtrack Files";
		requiredAddons[] = {"A3_Music_F_EPC"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Soundtrack";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Exp_Music
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Soundtrack Files";
		requiredAddons[] = {"A3_Music_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Soundtrack";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Heli_Music
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Soundtrack Files";
		requiredAddons[] = {"A3_Music_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Soundtrack";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Soundtrack";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Mark_Music
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Soundtrack Files";
		requiredAddons[] = {"A3_Music_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Music
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Soundtrack Files";
		requiredAddons[] = {"A3_Music_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Soundtrack";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - Soundtrack";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Music_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Soundtrack";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Plants_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Flora";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Plants_F_Bush
	{
		addonRootClass = "A3_Plants_F";
		requiredAddons[] = {"A3_Plants_F", "A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Argo
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Decorative and Mission Objects";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Props_F_Argo_Civilian
	{
		addonRootClass = "A3_Props_F_Argo";
		requiredAddons[] = {"A3_Props_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Argo_Civilian_InfoBoards
	{
		addonRootClass = "A3_Props_F_Argo";
		requiredAddons[] = {"A3_Props_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"MapBoard_Malden_F", "MapBoard_Tanoa_F"};
		weapons[] = {};
	};
	class A3_Props_F_Argo_Items
	{
		addonRootClass = "A3_Props_F_Argo";
		requiredAddons[] = {"A3_Props_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Argo_Items_Documents
	{
		addonRootClass = "A3_Props_F_Argo";
		requiredAddons[] = {"A3_Props_F_Argo_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_Map_Malden_F", "Land_Map_Tanoa_F", "Land_Map_unfolded_Altis_F", "Land_Map_unfolded_Malden_F", "Land_Map_unfolded_Tanoa_F"};
		weapons[] = {};
	};
	class A3_Props_F_Argo_Items_Electronics
	{
		addonRootClass = "A3_Props_F_Argo";
		requiredAddons[] = {"A3_Props_F_Argo_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_Laptop_02_F", "Land_Laptop_02_unfolded_F"};
		weapons[] = {};
	};
	class A3_Props_F_Destroyer
	{
		author = "Bohemia Interactive";
		name = "CFGPATCHES_A3_Props_F_Destroyer";
		requiredAddons[] = {"A3_Data_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Props_F_Destroyer_Military_BriefingRoomDesk
	{
		addonRootClass = "A3_Props_F_Destroyer";
		requiredAddons[] = {"A3_Props_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {"Land_BriefingRoomDesk_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Destroyer_Military_BriefingRoomScreen
	{
		addonRootClass = "A3_Props_F_Destroyer";
		requiredAddons[] = {"A3_Props_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {"Land_BriefingRoomScreen_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Decorative and Mission Objects";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Civilian
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Civilian_Camping
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_WoodenTable_02_large_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Civilian_Forest
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Anthill_01_F", "Land_Bark_Beetle_Trap_01_F", "Land_Bark_Beetle_Trap_02_F", "Land_Bark_Beetle_Trap_03_F", "Land_DeerSkeleton_damaged_01_F", "Land_DeerSkeleton_full_01_F", "Land_DeerSkeleton_pile_01_F", "Land_DeerSkeleton_skull_01_F", "Land_DeerStand_01_F", "Land_DeerStand_02_F", "Land_FeedRack_01_F", "Land_FeedShack_01_F", "Land_WoodenLog_02_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Civilian_Garbage
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_GarbageBin_03_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Civilian_InfoBoards
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_MapBoard_01_Wall_Enoch_F", "Land_MapBoard_Enoch_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Industrial
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Industrial_Electric
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_TransferSwitch_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Industrial_Supplies
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_WoodenBox_02_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Infrastructure
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Infrastructure_Traffic
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_RoadBarrier_01_F", "Land_WoodenWindBreak_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Items
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Items_AluminiumFoil
	{
		author = "Bohemia Interactive";
		name = "Contact Anomalies";
		requiredAddons[] = {"A3_Props_F_Enoch_Items"};
		requiredVersion = 0.1;
		units[] = {"AluminiumFoil_01_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Items_Documents
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Items"};
		requiredVersion = 0.1;
		units[] = {"Book_01_F", "Book_02_F", "Land_Map_Enoch_F", "Land_Map_unfolded_Enoch_F", "Newspaper_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Military
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Military_Camps
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_DeskChair_01_black_F", "Land_DeskChair_01_olive_F", "Land_DeskChair_01_sand_F", "Land_PortableCabinet_01_4drawers_black_F", "Land_PortableCabinet_01_4drawers_olive_F", "Land_PortableCabinet_01_4drawers_sand_F", "Land_PortableCabinet_01_7drawers_black_F", "Land_PortableCabinet_01_7drawers_olive_F", "Land_PortableCabinet_01_7drawers_sand_F", "Land_PortableCabinet_01_bookcase_black_F", "Land_PortableCabinet_01_bookcase_olive_F", "Land_PortableCabinet_01_bookcase_sand_F", "Land_PortableCabinet_01_closed_black_F", "Land_PortableCabinet_01_closed_olive_F", "Land_PortableCabinet_01_closed_sand_F", "Land_PortableCabinet_01_lid_black_F", "Land_PortableCabinet_01_lid_olive_F", "Land_PortableCabinet_01_lid_sand_F", "Land_PortableCabinet_01_medical_F", "Land_PortableDesk_01_black_F", "Land_PortableDesk_01_olive_F", "Land_PortableDesk_01_panel_black_F", "Land_PortableDesk_01_panel_olive_F", "Land_PortableDesk_01_panel_sand_F", "Land_PortableDesk_01_sand_F", "Land_PortableGenerator_01_black_F", "Land_PortableGenerator_01_sand_F", "Land_PortableLight_02_double_black_F", "Land_PortableLight_02_double_olive_F", "Land_PortableLight_02_double_sand_F", "Land_PortableLight_02_double_yellow_F", "Land_PortableLight_02_folded_black_F", "Land_PortableLight_02_folded_olive_F", "Land_PortableLight_02_folded_sand_F", "Land_PortableLight_02_folded_yellow_F", "Land_PortableLight_02_quad_black_F", "Land_PortableLight_02_quad_olive_F", "Land_PortableLight_02_quad_sand_F", "Land_PortableLight_02_quad_yellow_F", "Land_PortableLight_02_single_black_F", "Land_PortableLight_02_single_folded_black_F", "Land_PortableLight_02_single_folded_olive_F", "Land_PortableLight_02_single_folded_sand_F", "Land_PortableLight_02_single_folded_yellow_F", "Land_PortableLight_02_single_olive_F", "Land_PortableLight_02_single_sand_F", "Land_PortableLight_02_single_yellow_F", "Land_SatelliteAntenna_01_mounted_base_F", "Land_SatelliteAntenna_01_small_mounted_base_F", "Land_Tablet_02_black_F", "Land_Tablet_02_sand_F", "Land_TentLamp_01_standing_F", "Land_TentLamp_01_standing_red_F", "Land_TentLamp_01_suspended_F", "Land_TentLamp_01_suspended_red_F", "Land_TentSolar_01_bluewhite_F", "Land_TentSolar_01_folded_bluewhite_F", "Land_TentSolar_01_folded_olive_F", "Land_TentSolar_01_folded_redwhite_F", "Land_TentSolar_01_folded_sand_F", "Land_TentSolar_01_olive_F", "Land_TentSolar_01_redwhite_F", "Land_TentSolar_01_sand_F", "Land_TripodScreen_01_dual_v1_black_F", "Land_TripodScreen_01_dual_v1_sand_F", "Land_TripodScreen_01_dual_v2_black_F", "Land_TripodScreen_01_dual_v2_sand_F", "Land_TripodScreen_01_large_black_F", "Land_TripodScreen_01_large_sand_F", "SatelliteAntenna_01_Black_F", "SatelliteAntenna_01_Mounted_Black_F", "SatelliteAntenna_01_Mounted_Olive_F", "SatelliteAntenna_01_Mounted_Sand_F", "SatelliteAntenna_01_Olive_F", "SatelliteAntenna_01_Sand_F", "SatelliteAntenna_01_Small_Black_F", "SatelliteAntenna_01_Small_Mounted_Black_F", "SatelliteAntenna_01_Small_Mounted_Olive_F", "SatelliteAntenna_01_Small_Mounted_Sand_F", "SatelliteAntenna_01_Small_Olive_F", "SatelliteAntenna_01_Small_Sand_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Military_Decontamination
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"AntidoteKit_01_F", "Broom_01_grey_F", "Broom_01_yellow_F", "Brush_01_green_F", "Brush_01_yellow_F", "CBRNCase_01_F", "CBRNContainer_01_closed_olive_F", "CBRNContainer_01_closed_yellow_F", "CBRNContainer_01_olive_F", "CBRNContainer_01_yellow_F", "CBRNLid_01_olive_F", "CBRNLid_01_yellow_F", "ContainmentArea_01_black_F", "ContainmentArea_02_black_F", "ContainmentArea_03_black_F", "ContainmentArea_03_yellow_F", "DeconKit_01_F", "DeconShower_01_F", "DeconShower_01_sound_F", "DeconShower_02_F", "Decontamination_base_F", "DrainageDeck_01_base_F", "DrainageDeck_01_F", "GenericCables_01_base_F", "HazmatBag_01_empty_F", "HazmatBag_01_F", "HazmatBag_01_roll_F", "Land_ContainmentArea_03_F", "LayFlatHose_01_base_F", "LayFlatHose_01_Corner_F", "LayFlatHose_01_CurveLong_F", "LayFlatHose_01_CurveShort_F", "LayFlatHose_01_Roll_F", "LayFlatHose_01_SBend_F", "LayFlatHose_01_Step_F", "LayFlatHose_01_StraightLong_F", "LayFlatHose_01_StraightShort_F", "LiquidSpraySystem_01_base_F", "LiquidSpraySystem_01_extended_base_F", "LiquidSpraySystem_01_Extended_F", "LiquidSpraySystem_01_F", "PowerCable_01_base_F", "PowerCable_01_Corner_F", "PowerCable_01_CurveLong_F", "PowerCable_01_CurveShort_F", "PowerCable_01_Roll_F", "PowerCable_01_SBend_F", "PowerCable_01_Step_F", "PowerCable_01_StraightLong_F", "PowerCable_01_StraightShort_F", "PressureHose_01_base_F", "PressureHose_01_Corner_F", "PressureHose_01_CurveLong_F", "PressureHose_01_CurveShort_F", "PressureHose_01_Roll_F", "PressureHose_01_SBend_F", "PressureHose_01_Step_F", "PressureHose_01_StraightLong_F", "PressureHose_01_StraightShort_F", "SCBACylinder_01_CUR_F", "SCBACylinder_01_F", "SpinalBoard_01_black_F", "SpinalBoard_01_orange_F", "SpinalBoard_01_white_F", "Sponge_01_dry_F", "Sponge_01_Wet_F", "StretcherRollerSystem_01_F", "Tarp_01_Large_Black_F", "Tarp_01_Large_Green_F", "Tarp_01_Large_Red_F", "Tarp_01_Large_Yellow_F", "Tarp_01_Small_Black_F", "Tarp_01_Small_Green_F", "Tarp_01_Small_Red_F", "Tarp_01_Small_Yellow_F", "TrashBagHolder_01_F", "WalkingFrame_01_F", "WaterSpill_01_Large_Foam_F", "WaterSpill_01_Large_New_F", "WaterSpill_01_Large_Old_F", "WaterSpill_01_Medium_Foam_F", "WaterSpill_01_Medium_New_F", "WaterSpill_01_Medium_Old_F", "WaterSpill_01_Small_Foam_F", "WaterSpill_01_Small_New_F", "WaterSpill_01_Small_Old_F", "WaterTrail_01_Foam_F", "WaterTrail_01_New_F", "WaterTrail_01_Old_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Military_Equipment
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_BatteryPack_01_battery_black_F", "Land_BatteryPack_01_battery_olive_F", "Land_BatteryPack_01_battery_sand_F", "Land_BatteryPack_01_closed_black_F", "Land_BatteryPack_01_closed_olive_F", "Land_BatteryPack_01_closed_sand_F", "Land_BatteryPack_01_open_black_F", "Land_BatteryPack_01_open_olive_F", "Land_BatteryPack_01_open_sand_F", "Land_Computer_01_black_F", "Land_Computer_01_olive_F", "Land_Computer_01_sand_F", "Land_IPPhone_01_black_F", "Land_IPPhone_01_olive_F", "Land_IPPhone_01_sand_F", "Land_Laptop_03_black_F", "Land_laptop_03_closed_black_F", "Land_laptop_03_closed_olive_F", "Land_laptop_03_closed_sand_F", "Land_Laptop_03_olive_F", "Land_Laptop_03_sand_F", "Land_MultiScreenComputer_01_black_F", "Land_MultiScreenComputer_01_closed_black_F", "Land_MultiScreenComputer_01_closed_olive_F", "Land_MultiScreenComputer_01_closed_sand_F", "Land_MultiScreenComputer_01_olive_F", "Land_MultiScreenComputer_01_sand_F", "Land_PortableServer_01_black_F", "Land_PortableServer_01_cover_black_F", "Land_PortableServer_01_cover_olive_F", "Land_PortableServer_01_cover_sand_F", "Land_PortableServer_01_olive_F", "Land_PortableServer_01_sand_F", "Land_PortableSolarPanel_01_folded_olive_F", "Land_PortableSolarPanel_01_folded_sand_F", "Land_PortableSolarPanel_01_olive_F", "Land_PortableSolarPanel_01_sand_F", "Land_PortableWeatherStation_01_olive_F", "Land_PortableWeatherStation_01_sand_F", "Land_PortableWeatherStation_01_white_F", "Land_Router_01_black_F", "Land_Router_01_olive_F", "Land_Router_01_sand_F", "Land_SolarPanel_04_black_F", "Land_SolarPanel_04_olive_F", "Land_SolarPanel_04_sand_F", "OmniDirectionalAntenna_01_black_F", "OmniDirectionalAntenna_01_olive_F", "OmniDirectionalAntenna_01_sand_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Military_Garbage
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_BurntGarbage_01_F", "Land_GarbageBarrel_02_buried_F", "Land_GarbageBarrel_02_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Military_Supplies
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_PlasticCase_01_large_black_CBRN_F", "Land_PlasticCase_01_large_black_F", "Land_PlasticCase_01_large_CBRN_F", "Land_PlasticCase_01_large_olive_CBRN_F", "Land_PlasticCase_01_large_olive_F", "Land_PlasticCase_01_medium_black_CBRN_F", "Land_PlasticCase_01_medium_black_F", "Land_PlasticCase_01_medium_CBRN_F", "Land_PlasticCase_01_medium_olive_CBRN_F", "Land_PlasticCase_01_medium_olive_F", "Land_PlasticCase_01_small_black_CBRN_F", "Land_PlasticCase_01_small_black_F", "Land_PlasticCase_01_small_CBRN_F", "Land_PlasticCase_01_small_olive_CBRN_F", "Land_PlasticCase_01_small_olive_F"};
		weapons[] = {};
	};
	class A3_Props_F_Enoch_Military_Wrecks
	{
		addonRootClass = "A3_Props_F_Enoch";
		requiredAddons[] = {"A3_Props_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Wreck_Heli_02_Wreck_01_F", "Land_Wreck_Heli_02_Wreck_02_F", "Land_Wreck_Heli_02_Wreck_03_F", "Land_Wreck_Heli_02_Wreck_04_F"};
		weapons[] = {};
	};
	class A3_Props_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Decorative and Mission Objects";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Props_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Decorative and Mission Objects";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Props_F_Exp_A_Military
	{
		addonRootClass = "A3_Props_F_Exp_A";
		requiredAddons[] = {"A3_Props_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Exp_A_Military_Equipment
	{
		addonRootClass = "A3_Props_F_Exp_A";
		requiredAddons[] = {"A3_Props_F_Exp_A_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_DataTerminal_01_F", "Land_Tablet_02_F"};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Civilian
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Civilian_Garbage
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_GarbageHeap_01_F", "Land_GarbageHeap_02_F", "Land_GarbageHeap_03_F", "Land_GarbageHeap_04_F", "Land_Tyre_01_F", "Land_Tyre_01_horizontal_F", "Land_Tyre_01_line_x5_F"};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Commercial
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Commercial_Market
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_WoodenCounter_01_F", "Land_WoodenCrate_01_F", "Land_WoodenCrate_01_stack_x3_F", "Land_WoodenCrate_01_stack_x5_F"};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Industrial
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Industrial_HeavyEquipment
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Bulldozer_01_abandoned_F", "Land_Bulldozer_01_wreck_F", "Land_CombineHarvester_01_wreck_F", "Land_Excavator_01_abandoned_F", "Land_Excavator_01_wreck_F", "Land_HaulTruck_01_abandoned_F", "Land_MiningShovel_01_abandoned_F"};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Infrastructure
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Infrastructure_Railways
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_Locomotive_01_v1_F", "Land_Locomotive_01_v2_F", "Land_Locomotive_01_v3_F", "Land_RailwayCar_01_passenger_F", "Land_RailwayCar_01_sugarcane_empty_F", "Land_RailwayCar_01_sugarcane_F", "Land_RailwayCar_01_tank_F"};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Infrastructure_Traffic
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_RoadCone_01_F", "Land_VergeRock_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Military
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Military_Camps
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Device_slingloadable_F", "Land_IRMaskingCover_01_F", "Land_IRMaskingCover_02_F", "Land_PortableGenerator_01_F", "Land_SatelliteAntenna_01_F", "Land_TripodScreen_01_dual_v1_F", "Land_TripodScreen_01_dual_v2_F", "Land_TripodScreen_01_large_F"};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Military_OldPlaneWrecks
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_HistoricalPlaneDebris_01_F", "Land_HistoricalPlaneDebris_02_F", "Land_HistoricalPlaneDebris_03_F", "Land_HistoricalPlaneDebris_04_F", "Land_HistoricalPlaneWreck_01_F", "Land_HistoricalPlaneWreck_02_front_F", "Land_HistoricalPlaneWreck_02_front_water_F", "Land_HistoricalPlaneWreck_02_rear_F", "Land_HistoricalPlaneWreck_02_rear_water_F", "Land_HistoricalPlaneWreck_02_wing_left_F", "Land_HistoricalPlaneWreck_02_wing_right_F", "Land_HistoricalPlaneWreck_03_F"};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Naval
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Exp_Naval_Boats
	{
		addonRootClass = "A3_Props_F_Exp";
		requiredAddons[] = {"A3_Props_F_Exp_Naval"};
		requiredVersion = 0.1;
		units[] = {"Land_Boat_01_abandoned_blue_F", "Land_Boat_01_abandoned_red_F", "Land_Boat_02_abandoned_F", "Land_Boat_03_abandoned_cover_F", "Land_Boat_03_abandoned_F", "Land_Boat_04_wreck_F", "Land_Boat_05_wreck_F", "Land_Boat_06_wreck_F"};
		weapons[] = {};
	};
	class A3_Props_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Decorative and Mission Objects";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Props_F_Jets_Military_Tractor
	{
		addonRootClass = "A3_Props_F_Jets";
		requiredAddons[] = {"A3_Props_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"Land_DeckTractor_01_F", "Land_TowBar_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Jets_Military_Trolley
	{
		addonRootClass = "A3_Props_F_Jets";
		requiredAddons[] = {"A3_Props_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"Land_Bomb_Trolley_01_F", "Land_Missle_Trolley_02_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Decorative and Mission Objects";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Props_F_Orange_Civilian
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Civilian_Constructions
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Brick_01_F", "Land_CinderBlock_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Civilian_InfoBoards
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_MapBoard_01_Wall_Altis_F", "Land_MapBoard_01_Wall_F", "Land_MapBoard_01_Wall_Malden_F", "Land_MapBoard_01_Wall_Stratis_F", "Land_MapBoard_01_Wall_Tanoa_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Furniture
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"Land_ArmChair_01_F", "Land_OfficeCabinet_02_F", "Land_Rug_01_base_F", "Land_Rug_01_F", "Land_Rug_01_Traditional_F", "Land_Sofa_01_F", "Land_TableBig_01_F", "Land_TableSmall_01_F", "Land_WoodenBed_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Humanitarian
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Humanitarian_Camps
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange_Humanitarian"};
		requiredVersion = 0.1;
		units[] = {"Land_AirConditioner_01_F", "Land_AirConditioner_02_F", "Land_AirConditioner_03_F", "Land_AirConditioner_04_F", "Land_Bodybag_01_black_F", "Land_Bodybag_01_blue_F", "Land_Bodybag_01_empty_black_F", "Land_Bodybag_01_empty_blue_F", "Land_Bodybag_01_empty_white_F", "Land_Bodybag_01_folded_black_F", "Land_Bodybag_01_folded_blue_F", "Land_Bodybag_01_folded_white_F", "Land_Bodybag_01_white_F", "Land_CampingChair_V2_white_F", "Land_CampingTable_small_white_F", "Land_CampingTable_white_F", "Land_CanvasCover_01_F", "Land_CanvasCover_02_F", "Land_EmergencyBlanket_01_discarded_F", "Land_EmergencyBlanket_01_F", "Land_EmergencyBlanket_01_stack_F", "Land_EmergencyBlanket_02_discarded_F", "Land_EmergencyBlanket_02_F", "Land_EmergencyBlanket_02_stack_F", "Land_FirstAidKit_01_closed_F", "Land_FirstAidKit_01_open_F", "Land_IntravenBag_01_empty_F", "Land_IntravenBag_01_full_F", "Land_IntravenStand_01_1bag_F", "Land_IntravenStand_01_2bags_F", "Land_IntravenStand_01_empty_F", "Land_Stethoscope_01_F", "Land_Stretcher_01_F", "Land_Stretcher_01_folded_F", "Land_Stretcher_01_folded_olive_F", "Land_Stretcher_01_folded_sand_F", "Land_Stretcher_01_olive_F", "Land_Stretcher_01_sand_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Humanitarian_Garbage
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange_Humanitarian"};
		requiredVersion = 0.1;
		units[] = {"BloodPool_01_Large_New_F", "BloodPool_01_Large_Old_F", "BloodPool_01_Medium_New_F", "BloodPool_01_Medium_Old_F", "BloodSplatter_01_Large_New_F", "BloodSplatter_01_Large_Old_F", "BloodSplatter_01_Medium_New_F", "BloodSplatter_01_Medium_Old_F", "BloodSplatter_01_Small_New_F", "BloodSplatter_01_Small_Old_F", "BloodSpray_01_New_F", "BloodSpray_01_Old_F", "BloodTrail_01_New_F", "BloodTrail_01_Old_F", "MedicalGarbage_01_1x1_v1_F", "MedicalGarbage_01_1x1_v2_F", "MedicalGarbage_01_1x1_v3_F", "MedicalGarbage_01_3x3_v1_F", "MedicalGarbage_01_3x3_v2_F", "MedicalGarbage_01_5x5_v1_F", "MedicalGarbage_01_Bandage_F", "MedicalGarbage_01_FirstAidKit_F", "MedicalGarbage_01_Gloves_F", "MedicalGarbage_01_Injector_F", "MedicalGarbage_01_Packaging_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Humanitarian_Supplies
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange_Humanitarian"};
		requiredVersion = 0.1;
		units[] = {"Land_CanisterFuel_Blue_F", "Land_CanisterFuel_Red_F", "Land_CanisterFuel_White_F", "Land_FoodContainer_01_White_F", "Land_FoodSack_01_dmg_brown_F", "Land_FoodSack_01_dmg_brown_idap_F", "Land_FoodSack_01_dmg_white_idap_F", "Land_FoodSack_01_empty_brown_F", "Land_FoodSack_01_empty_brown_idap_F", "Land_FoodSack_01_empty_white_idap_F", "Land_FoodSack_01_full_brown_F", "Land_FoodSack_01_full_brown_idap_F", "Land_FoodSack_01_full_white_idap_F", "Land_FoodSacks_01_cargo_brown_F", "Land_FoodSacks_01_cargo_brown_idap_F", "Land_FoodSacks_01_cargo_white_idap_F", "Land_FoodSacks_01_large_brown_F", "Land_FoodSacks_01_large_brown_idap_F", "Land_FoodSacks_01_large_white_idap_F", "Land_FoodSacks_01_small_brown_F", "Land_FoodSacks_01_small_brown_idap_F", "Land_FoodSacks_01_small_white_idap_F", "Land_LiquidDispenser_01_F", "Land_Orange_01_F", "Land_Orange_01_NoPop_F", "Land_PaperBox_01_open_boxes_F", "Land_PaperBox_01_open_empty_F", "Land_PaperBox_01_open_water_F", "Land_PaperBox_01_small_closed_brown_F", "Land_PaperBox_01_small_closed_brown_food_F", "Land_PaperBox_01_small_closed_brown_IDAP_F", "Land_PaperBox_01_small_closed_white_IDAP_F", "Land_PaperBox_01_small_closed_white_med_F", "Land_PaperBox_01_small_destroyed_brown_F", "Land_PaperBox_01_small_destroyed_brown_IDAP_F", "Land_PaperBox_01_small_destroyed_white_IDAP_F", "Land_PaperBox_01_small_open_brown_F", "Land_PaperBox_01_small_open_brown_IDAP_F", "Land_PaperBox_01_small_open_white_IDAP_F", "Land_PaperBox_01_small_ransacked_brown_F", "Land_PaperBox_01_small_ransacked_brown_IDAP_F", "Land_PaperBox_01_small_ransacked_white_IDAP_F", "Land_PaperBox_01_small_stacked_F", "Land_PlasticBucket_01_closed_F", "Land_PlasticBucket_01_open_F", "Land_PlasticCase_01_large_gray_F", "Land_PlasticCase_01_large_idap_F", "Land_PlasticCase_01_medium_gray_F", "Land_PlasticCase_01_medium_idap_F", "Land_PlasticCase_01_small_gray_F", "Land_PlasticCase_01_small_idap_F", "Land_Pumpkin_01_F", "Land_Pumpkin_01_NoPop_F", "Land_WaterBottle_01_cap_F", "Land_WaterBottle_01_compressed_F", "Land_WaterBottle_01_empty_F", "Land_WaterBottle_01_full_F", "Land_WaterBottle_01_pack_F", "Land_WaterBottle_01_stack_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Items
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Items_Decorative
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_FlowerPot_01_F", "Land_FlowerPot_01_Flower_F", "Land_Photoframe_01_broken_F", "Land_Photoframe_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Items_Documents
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_Wallet_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Items_Electronics
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_PCSet_01_mousepad_F", "Land_PCSet_01_mousepad_IDAP_F"};
		weapons[] = {};
	};
	class A3_Props_F_Orange_Items_Tools
	{
		addonRootClass = "A3_Props_F_Orange";
		requiredAddons[] = {"A3_Props_F_Orange_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_Crowbar_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Decorative and Mission Objects";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Props_F_Tank_Military
	{
		addonRootClass = "A3_Props_F_Tank";
		requiredAddons[] = {"A3_Props_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"Land_MRL_Magazine_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Tank_Military_TankAcc
	{
		addonRootClass = "A3_Props_F_Tank";
		requiredAddons[] = {"A3_Props_F_Tank_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_BoreSighter_01_F", "Land_RefuelingHose_01_F", "Land_TankEngine_01_F", "Land_TankEngine_01_used_F", "Land_TankRoadWheels_01_single_F", "Land_TankSprocketWheels_01_single_F", "Land_TankTracks_01_long_F", "Land_TankTracks_01_short_F", "Land_TorqueWrench_01_F"};
		weapons[] = {};
	};
	class A3_Props_F_Tank_Military_Wrecks
	{
		addonRootClass = "A3_Props_F_Tank";
		requiredAddons[] = {"A3_Props_F_Tank_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Wreck_AFV_Wheeled_01_F", "Land_Wreck_LT_01_F", "Land_Wreck_MBT_04_F"};
		weapons[] = {};
	};
	class A3_Roads_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Roads";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {"Land_Flush_Light_green_F", "Land_Flush_Light_red_F", "Land_Flush_Light_yellow_F", "Land_NavigLight", "Land_NavigLight_3_F", "Land_runway_edgelight", "Land_runway_edgelight_blue_F", "Land_Runway_PAPI", "Land_Runway_PAPI_2", "Land_Runway_PAPI_3", "Land_Runway_PAPI_4"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Rocks_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Rocks and Stones";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {"Land_Small_Stone_01_F", "Land_Small_Stone_02_F", "Land_Stone_big_F", "Land_Stone_medium_F", "Land_Stone_small_F", "Land_StoneSharp_big", "Land_StoneSharp_medium", "Land_StoneSharp_small", "Land_StoneSharp_wall"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Rocks_F_Argo
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Rocks and Stones";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Rocks_F_Argo_Limestone
	{
		addonRootClass = "A3_Rocks_F_Argo";
		requiredAddons[] = {"A3_Rocks_F_Argo"};
		requiredVersion = 0.1;
		units[] = {"Land_Limestone_01_01_F", "Land_Limestone_01_02_F", "Land_Limestone_01_03_F", "Land_Limestone_01_apart_F", "Land_Limestone_01_erosion_F", "Land_Limestone_01_monolith_F", "Land_Limestone_01_spike_F", "Land_Limestone_01_wallH_F", "Land_Limestone_01_wallV_F"};
		weapons[] = {};
	};
	class A3_Rocks_F_Blunt
	{
		addonRootClass = "A3_Rocks_F";
		requiredAddons[] = {"A3_Rocks_F"};
		requiredVersion = 0.1;
		units[] = {"Land_BluntRock_apart", "Land_BluntRock_monolith", "Land_BluntRock_spike", "Land_BluntRock_wallH", "Land_BluntRock_wallV", "Land_BluntStone_01", "Land_BluntStone_02", "Land_BluntStone_03", "Land_BluntStones_erosion"};
		weapons[] = {};
	};
	class A3_Rocks_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Rocks and Stones";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Land_Bare_boulder_01_F", "Land_Bare_boulder_02_F", "Land_Bare_boulder_03_F", "Land_Bare_boulder_04_F", "Land_Bare_boulder_05_F", "Land_R_rock_general1", "Land_R_rock_general2", "Land_R_rock_general3", "Land_RM_boulder1", "Land_RM_boulder2", "Land_RM_boulder3", "Land_RM_boulder4", "Land_RM_boulder5"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Rocks_F_Enoch_Sinkhole
	{
		addonRootClass = "A3_Rocks_F_Enoch";
		requiredAddons[] = {"A3_Rocks_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Land_Sinkhole_01_F"};
		weapons[] = {};
	};
	class A3_Rocks_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Rocks and Stones";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Rocks_F_Exp_Cliff
	{
		addonRootClass = "A3_Rocks_F_Exp";
		requiredAddons[] = {"A3_Rocks_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"Land_Cliff_boulder_F", "Land_Cliff_peak_F", "Land_Cliff_stone_big_F", "Land_Cliff_stone_medium_F", "Land_Cliff_stone_small_F", "Land_Cliff_stoneCluster_F", "Land_Cliff_surfaceMine_F", "Land_Cliff_wall_long_F", "Land_Cliff_wall_round_F", "Land_Cliff_wall_tall_F"};
		weapons[] = {};
	};
	class A3_Rocks_F_Exp_LavaStones
	{
		addonRootClass = "A3_Rocks_F_Exp";
		requiredAddons[] = {"A3_Rocks_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"Land_Lavaboulder_01_F", "Land_Lavaboulder_02_F", "Land_Lavaboulder_03_F", "Land_Lavaboulder_04_F", "Land_LavaStone_big_F", "Land_LavaStone_small_F", "Land_LavaStoneCluster_large_F", "Land_LavaStoneCluster_small_F"};
		weapons[] = {};
	};
	class A3_Rocks_F_Sharp
	{
		addonRootClass = "A3_Rocks_F";
		requiredAddons[] = {"A3_Rocks_F"};
		requiredVersion = 0.1;
		units[] = {"Land_SharpRock_apart", "Land_SharpRock_monolith", "Land_SharpRock_spike", "Land_SharpRock_wallH", "Land_SharpRock_wallV", "Land_SharpStone_01", "Land_SharpStone_02", "Land_SharpStone_03", "Land_SharpStones_erosion"};
		weapons[] = {};
	};
	class A3_Rocks_F_Water
	{
		addonRootClass = "A3_Rocks_F";
		requiredAddons[] = {"A3_Rocks_F"};
		requiredVersion = 0.1;
		units[] = {"Land_Stone_big_W", "Land_Stone_medium_W", "Land_Stone_small_W", "Land_StoneSharp_big_W", "Land_StoneSharp_medium_W", "Land_StoneSharp_small_W", "Land_StoneSharp_Wall_W", "Land_W_sharpRock_apart", "Land_W_sharpRock_monolith", "Land_W_sharpRock_spike", "Land_W_sharpRock_wallH", "Land_W_sharpRock_wallV", "Land_W_sharpStone_01", "Land_W_sharpStone_02", "Land_W_sharpStone_03", "Land_W_sharpStones_erosion"};
		weapons[] = {};
	};
	class A3_Signs_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Signs";
		requiredAddons[] = {"A3_Data_F", "A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"ArrowDesk_L_F", "ArrowDesk_R_F", "ArrowMarker_L_F", "ArrowMarker_R_F", "FlagChecked_F", "FlagSmall_F", "Land_Sign_Mines_F", "Land_Sign_WarningMilAreaSmall_F", "Land_Sign_WarningMilitaryArea_F", "Land_Sign_WarningMilitaryVehicles_F", "Land_Sign_WarningUnexplodedAmmo_F", "Pole_F", "RoadBarrier_F", "RoadBarrier_small_F", "RoadCone_F", "RoadCone_L_F", "Sign_Direction_F", "Sign_F", "TapeSign_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Signs_F_AD
	{
		requiredAddons[] = {"A3_Signs_F_Signs_Ad"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Signs_F_Signs_Ad
	{
		addonRootClass = "A3_Signs_F";
		requiredAddons[] = {"A3_Signs_F"};
		requiredVersion = 0.1;
		units[] = {"SignAd_Sponsor_ARMEX_F", "SignAd_Sponsor_F", "SignAd_Sponsor_ION_F", "SignAd_Sponsor_Larkin_F", "SignAd_Sponsor_Quontrol_F", "SignAd_Sponsor_Vrana_F", "SignAd_SponsorS_ARMEX_F", "SignAd_SponsorS_F", "SignAd_SponsorS_ION_F", "SignAd_SponsorS_Larkin_F", "SignAd_SponsorS_Quontrol_F", "SignAd_SponsorS_Vrana_F"};
		weapons[] = {};
	};
	class A3_Soft_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F", "A3_Weapons_F_Acc"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_Beta_MRAP_03
	{
		addonRootClass = "A3_Soft_F_Beta";
		requiredAddons[] = {"A3_Soft_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"I_MRAP_03_F", "I_MRAP_03_gmg_F", "I_MRAP_03_hmg_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Beta_Quadbike
	{
		requiredAddons[] = {"A3_Soft_F_Beta_Quadbike_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Beta_Quadbike_01
	{
		addonRootClass = "A3_Soft_F_Beta";
		requiredAddons[] = {"A3_Soft_F_Beta", "A3_Soft_F_Quadbike_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Beta_Truck_01
	{
		addonRootClass = "A3_Soft_F_Beta";
		requiredAddons[] = {"A3_Soft_F_Beta", "A3_Soft_F_Beta_MRAP_03"};
		requiredVersion = 0.1;
		units[] = {"B_Truck_01_covered_F", "B_Truck_01_transport_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Beta_Truck_02
	{
		addonRootClass = "A3_Soft_F_Beta";
		requiredAddons[] = {"A3_Soft_F_Beta"};
		requiredVersion = 0.1;
		units[] = {"C_Truck_02_covered_F", "C_Truck_02_transport_F", "I_Truck_02_covered_F", "I_Truck_02_transport_F", "O_Truck_02_covered_F", "O_Truck_02_transport_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_Bootcamp_Offroad_01
	{
		addonRootClass = "A3_Soft_F_Bootcamp";
		requiredAddons[] = {"A3_Soft_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Bootcamp_Quadbike
	{
		requiredAddons[] = {"A3_Soft_F_Bootcamp_Quadbike_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Bootcamp_Quadbike_01
	{
		addonRootClass = "A3_Soft_F_Bootcamp";
		requiredAddons[] = {"A3_Soft_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Bootcamp_Truck
	{
		requiredAddons[] = {"A3_Soft_F_Bootcamp_Van_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Bootcamp_Van_01
	{
		addonRootClass = "A3_Soft_F_Bootcamp";
		requiredAddons[] = {"A3_Soft_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Car
	{
		requiredAddons[] = {"A3_Soft_F_Gamma_Hatchback_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Crusher_UGV
	{
		requiredAddons[] = {"A3_Drones_F_Soft_F_Gamma_UGV_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_Enoch_Offroad_01
	{
		addonRootClass = "A3_Soft_F_Enoch";
		requiredAddons[] = {"A3_Soft_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"B_GEN_Offroad_01_comms_F", "B_GEN_Offroad_01_covered_F", "C_Offroad_01_comms_F", "C_Offroad_01_covered_F", "I_E_Offroad_01_comms_F", "I_E_Offroad_01_covered_F", "I_E_Offroad_01_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Enoch_Quadbike_01
	{
		addonRootClass = "A3_Soft_F_Enoch";
		requiredAddons[] = {"A3_Soft_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_Quadbike_01_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Enoch_Tractor_01
	{
		addonRootClass = "A3_Soft_F_Enoch";
		requiredAddons[] = {"A3_Soft_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"C_Tractor_01_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Enoch_Truck_01
	{
		addonRootClass = "A3_Soft_F_Enoch";
		requiredAddons[] = {"A3_Soft_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"B_T_Truck_01_cargo_F", "B_T_Truck_01_flatbed_F", "B_Truck_01_cargo_F", "B_Truck_01_flatbed_F", "Truck_01_Rack_F", "Truck_01_Rack_tropic_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Enoch_Truck_02
	{
		addonRootClass = "A3_Soft_F_Enoch";
		requiredAddons[] = {"A3_Soft_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_Truck_02_Ammo_F", "I_E_Truck_02_Box_F", "I_E_Truck_02_F", "I_E_Truck_02_fuel_F", "I_E_Truck_02_Medical_F", "I_E_Truck_02_MRL_F", "I_E_Truck_02_transport_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Enoch_UGV_01
	{
		addonRootClass = "A3_Soft_F_Enoch";
		requiredAddons[] = {"A3_Soft_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_UGV_01_F", "I_E_UGV_01_rcws_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Enoch_UGV_02
	{
		addonRootClass = "A3_Soft_F_Enoch";
		requiredAddons[] = {"A3_Soft_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"B_UGV_02_Demining_F", "B_UGV_02_Science_F", "C_IDAP_UGV_02_Demining_F", "I_E_UGV_02_Demining_F", "I_E_UGV_02_Science_F", "I_UGV_02_Demining_F", "I_UGV_02_Science_F", "O_UGV_02_Demining_F", "O_UGV_02_Science_F", "UGV_02_ExternalDetector_F", "UGV_02_Tracks_F", "UGV_02_Wheel_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Enoch_Van_02
	{
		addonRootClass = "A3_Soft_F_Enoch";
		requiredAddons[] = {"A3_Soft_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_Van_02_medevac_F", "I_E_Van_02_transport_F", "I_E_Van_02_transport_MP_F", "I_E_Van_02_vehicle_F"};
		weapons[] = {};
	};
	class A3_Soft_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Soft_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_EPC_Truck_03
	{
		addonRootClass = "A3_Soft_F_EPC";
		requiredAddons[] = {"A3_Soft_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"O_Truck_03_ammo_F", "O_Truck_03_covered_F", "O_Truck_03_device_F", "O_Truck_03_fuel_F", "O_Truck_03_medical_F", "O_Truck_03_repair_F", "O_Truck_03_transport_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_Exp_LSV_01
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_CTRG_LSV_01_light_F", "B_LSV_01_armed_black_F", "B_LSV_01_armed_F", "B_LSV_01_armed_olive_F", "B_LSV_01_armed_sand_F", "B_LSV_01_AT_F", "B_LSV_01_unarmed_black_F", "B_LSV_01_unarmed_F", "B_LSV_01_unarmed_olive_F", "B_LSV_01_unarmed_sand_F", "B_T_LSV_01_armed_black_F", "B_T_LSV_01_armed_CTRG_F", "B_T_LSV_01_armed_F", "B_T_LSV_01_armed_olive_F", "B_T_LSV_01_armed_sand_F", "B_T_LSV_01_AT_F", "B_T_LSV_01_unarmed_black_F", "B_T_LSV_01_unarmed_CTRG_F", "B_T_LSV_01_unarmed_F", "B_T_LSV_01_unarmed_olive_F", "B_T_LSV_01_unarmed_sand_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_LSV_02
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"O_LSV_02_armed_arid_F", "O_LSV_02_armed_black_F", "O_LSV_02_armed_F", "O_LSV_02_armed_ghex_F", "O_LSV_02_armed_viper_F", "O_LSV_02_AT_F", "O_LSV_02_unarmed_arid_F", "O_LSV_02_unarmed_black_F", "O_LSV_02_unarmed_F", "O_LSV_02_unarmed_ghex_F", "O_LSV_02_unarmed_viper_F", "O_T_LSV_02_armed_arid_F", "O_T_LSV_02_armed_black_F", "O_T_LSV_02_armed_F", "O_T_LSV_02_armed_ghex_F", "O_T_LSV_02_armed_viper_F", "O_T_LSV_02_AT_F", "O_T_LSV_02_unarmed_arid_F", "O_T_LSV_02_unarmed_black_F", "O_T_LSV_02_unarmed_F", "O_T_LSV_02_unarmed_ghex_F", "O_T_LSV_02_unarmed_viper_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_MRAP_01
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_MRAP_01_F", "B_T_MRAP_01_gmg_F", "B_T_MRAP_01_hmg_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_MRAP_02
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"O_T_MRAP_02_ghex_F", "O_T_MRAP_02_gmg_ghex_F", "O_T_MRAP_02_hmg_ghex_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_Offroad_01
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_GEN_Offroad_01_gen_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_Offroad_02
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"C_Offroad_02_unarmed_black_F", "C_Offroad_02_unarmed_blue_F", "C_Offroad_02_unarmed_F", "C_Offroad_02_unarmed_green_F", "C_Offroad_02_unarmed_orange_F", "C_Offroad_02_unarmed_red_F", "C_Offroad_02_unarmed_white_F", "I_C_Offroad_02_AT_F", "I_C_Offroad_02_LMG_F", "I_C_Offroad_02_unarmed_brown_F", "I_C_Offroad_02_unarmed_F", "I_C_Offroad_02_unarmed_olive_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_Quadbike_01
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_Quadbike_01_F", "O_T_Quadbike_01_ghex_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_Truck_01
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_Truck_01_ammo_F", "B_T_Truck_01_box_F", "B_T_Truck_01_covered_F", "B_T_Truck_01_fuel_F", "B_T_Truck_01_medical_F", "B_T_Truck_01_mover_F", "B_T_Truck_01_Repair_F", "B_T_Truck_01_transport_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_Truck_02
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"O_T_Truck_02_Ammo_F", "O_T_Truck_02_Box_F", "O_T_Truck_02_F", "O_T_Truck_02_fuel_F", "O_T_Truck_02_Medical_F", "O_T_Truck_02_MRL_F", "O_T_Truck_02_transport_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_Truck_03
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"O_T_Truck_03_ammo_ghex_F", "O_T_Truck_03_covered_ghex_F", "O_T_Truck_03_device_ghex_F", "O_T_Truck_03_fuel_ghex_F", "O_T_Truck_03_medical_ghex_F", "O_T_Truck_03_repair_ghex_F", "O_T_Truck_03_transport_ghex_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_UGV_01
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_UGV_01_olive_F", "B_T_UGV_01_rcws_olive_F", "O_T_UGV_01_ghex_F", "O_T_UGV_01_rcws_ghex_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Exp_Van_01
	{
		addonRootClass = "A3_Soft_F_Exp";
		requiredAddons[] = {"A3_Soft_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"I_C_Van_01_transport_brown_F", "I_C_Van_01_transport_F", "I_C_Van_01_transport_olive_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Soft_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_Hatchback_01
	{
		addonRootClass = "A3_Soft_F_Gamma";
		requiredAddons[] = {"A3_Soft_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"C_Hatchback_01_beigecustom_F", "C_Hatchback_01_black_F", "C_Hatchback_01_blue_F", "C_Hatchback_01_bluecustom_F", "C_Hatchback_01_dark_F", "C_Hatchback_01_F", "C_Hatchback_01_green_F", "C_Hatchback_01_grey_F", "C_Hatchback_01_sport_blue_F", "C_Hatchback_01_sport_F", "C_Hatchback_01_sport_green_F", "C_Hatchback_01_sport_grey_F", "C_Hatchback_01_sport_orange_F", "C_Hatchback_01_sport_red_F", "C_Hatchback_01_sport_white_F", "C_Hatchback_01_white_F", "C_Hatchback_01_yellow_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_HEMTT
	{
		requiredAddons[] = {"A3_Soft_F_Gamma_Truck_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_Offroad
	{
		requiredAddons[] = {"A3_Soft_F_Gamma_Offroad_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_Offroad_01
	{
		addonRootClass = "A3_Soft_F_Gamma";
		requiredAddons[] = {"A3_Soft_F_Gamma", "A3_Soft_F_Offroad_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_Quadbike
	{
		requiredAddons[] = {"A3_Soft_F_Gamma_Quadbike_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_Quadbike_01
	{
		addonRootClass = "A3_Soft_F_Gamma";
		requiredAddons[] = {"A3_Soft_F_Beta_Quadbike_01", "A3_Soft_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_SUV_01
	{
		addonRootClass = "A3_Soft_F_Gamma";
		requiredAddons[] = {"A3_Soft_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"C_SUV_01_F", "SUV_01_base_black_F", "SUV_01_base_grey_F", "SUV_01_base_orange_F", "SUV_01_base_red_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_Truck_01
	{
		addonRootClass = "A3_Soft_F_Gamma";
		requiredAddons[] = {"A3_Soft_F_Beta_Truck_01", "A3_Soft_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"B_Truck_01_ammo_F", "B_Truck_01_box_F", "B_Truck_01_fuel_F", "B_Truck_01_medical_F", "B_Truck_01_mover_F", "B_Truck_01_Repair_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_Truck_02
	{
		addonRootClass = "A3_Soft_F_Gamma";
		requiredAddons[] = {"A3_Soft_F_Beta_Truck_02", "A3_Soft_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"C_Truck_02_box_F", "C_Truck_02_fuel_F", "I_Truck_02_ammo_F", "I_Truck_02_box_F", "I_Truck_02_fuel_F", "I_Truck_02_medical_F", "I_Truck_02_MRL_F", "Land_MRL_Magazine_01_F", "O_Truck_02_Ammo_F", "O_Truck_02_box_F", "O_Truck_02_fuel_F", "O_Truck_02_medical_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_TruckHeavy
	{
		requiredAddons[] = {"A3_Soft_F_Gamma_Truck_02"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Gamma_Van_01
	{
		addonRootClass = "A3_Soft_F_Gamma";
		requiredAddons[] = {"A3_Soft_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"B_G_Van_01_fuel_F", "B_G_Van_01_transport_F", "C_Van_01_box_F", "C_Van_01_box_red_F", "C_Van_01_box_white_F", "C_Van_01_fuel_F", "C_Van_01_fuel_red_F", "C_Van_01_fuel_red_v2_F", "C_Van_01_fuel_white_F", "C_Van_01_fuel_white_v2_F", "C_Van_01_transport_F", "C_Van_01_transport_red_F", "C_Van_01_transport_white_F", "I_G_Van_01_fuel_F", "I_G_Van_01_transport_F", "O_G_Van_01_fuel_F", "O_G_Van_01_transport_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_Heli_Car
	{
		requiredAddons[] = {"A3_Soft_F_Heli_Hatchback_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_Crusher_UGV
	{
		requiredAddons[] = {"A3_Soft_F_Heli_UGV_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_Hatchback_01
	{
		addonRootClass = "A3_Soft_F_Heli";
		requiredAddons[] = {"A3_Soft_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_MRAP_01
	{
		addonRootClass = "A3_Soft_F_Heli";
		requiredAddons[] = {"A3_Soft_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_MRAP_02
	{
		addonRootClass = "A3_Soft_F_Heli";
		requiredAddons[] = {"A3_Soft_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_MRAP_03
	{
		addonRootClass = "A3_Soft_F_Heli";
		requiredAddons[] = {"A3_Soft_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_Quadbike
	{
		requiredAddons[] = {"A3_Soft_F_Heli_Quadbike_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_Quadbike_01
	{
		addonRootClass = "A3_Soft_F_Heli";
		requiredAddons[] = {"A3_Soft_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_SUV
	{
		requiredAddons[] = {"A3_Soft_F_Heli_SUV_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_SUV_01
	{
		addonRootClass = "A3_Soft_F_Heli";
		requiredAddons[] = {"A3_Soft_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_Truck
	{
		requiredAddons[] = {"A3_Soft_F_Heli_Van_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_UGV_01
	{
		addonRootClass = "A3_Soft_F_Heli";
		requiredAddons[] = {"A3_Soft_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Heli_Van_01
	{
		addonRootClass = "A3_Soft_F_Heli";
		requiredAddons[] = {"A3_Soft_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_HEMTT
	{
		requiredAddons[] = {"A3_Soft_F_Beta_Truck_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_Kart_Kart_01
	{
		addonRootClass = "A3_Soft_F_Kart";
		requiredAddons[] = {"A3_Soft_F_Kart"};
		requiredVersion = 0.1;
		units[] = {"C_Kart_01_black_F", "C_Kart_01_Blu_F", "C_Kart_01_F", "C_Kart_01_Fuel_F", "C_Kart_01_green_F", "C_Kart_01_orange_F", "C_Kart_01_Red_F", "C_Kart_01_Vrana_F", "C_Kart_01_white_F", "C_Kart_01_yellow_F"};
		weapons[] = {};
	};
	class A3_Soft_F_MRAP_01
	{
		addonRootClass = "A3_Soft_F";
		requiredAddons[] = {"A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"B_MRAP_01_F", "B_MRAP_01_gmg_F", "B_MRAP_01_hmg_F"};
		weapons[] = {};
	};
	class A3_Soft_F_MRAP_02
	{
		addonRootClass = "A3_Soft_F";
		requiredAddons[] = {"A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"O_MRAP_02_F", "O_MRAP_02_gmg_F", "O_MRAP_02_hmg_F"};
		weapons[] = {};
	};
	class A3_Soft_F_MRAP_03
	{
		requiredAddons[] = {"A3_Soft_F_Beta_MRAP_03"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Offroad_01
	{
		addonRootClass = "A3_Soft_F";
		requiredAddons[] = {"A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"B_G_Offroad_01_armed_F", "B_G_Offroad_01_AT_F", "B_G_Offroad_01_F", "B_G_Offroad_01_repair_F", "C_Offroad_01_blue_F", "C_Offroad_01_bluecustom_F", "C_Offroad_01_darkred_F", "C_Offroad_01_F", "C_Offroad_01_red_F", "C_Offroad_01_repair_F", "C_Offroad_01_sand_F", "C_Offroad_01_white_F", "C_Offroad_default_F", "C_Offroad_luxe_F", "C_Offroad_stripped_F", "I_G_Offroad_01_armed_F", "I_G_Offroad_01_AT_F", "I_G_Offroad_01_F", "I_G_Offroad_01_repair_F", "O_G_Offroad_01_armed_F", "O_G_Offroad_01_AT_F", "O_G_Offroad_01_F", "O_G_Offroad_01_repair_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Unarmored Land Vehicles";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Soft_F_Orange_Offroad_01
	{
		addonRootClass = "A3_Soft_F_Orange";
		requiredAddons[] = {"A3_Soft_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"C_IDAP_Offroad_01_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Orange_Offroad_02
	{
		addonRootClass = "A3_Soft_F_Orange";
		requiredAddons[] = {"A3_Soft_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"C_IDAP_Offroad_02_unarmed_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Orange_Truck_02
	{
		addonRootClass = "A3_Soft_F_Orange";
		requiredAddons[] = {"A3_Soft_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"C_IDAP_Truck_02_F", "C_IDAP_Truck_02_transport_F", "C_IDAP_Truck_02_water_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Orange_UGV_01
	{
		addonRootClass = "A3_Soft_F_Orange";
		requiredAddons[] = {"A3_Soft_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"C_IDAP_UGV_01_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Orange_Van_02
	{
		addonRootClass = "A3_Soft_F_Orange";
		requiredAddons[] = {"A3_Soft_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"B_G_Van_02_transport_F", "B_G_Van_02_vehicle_F", "B_GEN_Van_02_transport_F", "B_GEN_Van_02_vehicle_F", "C_IDAP_Van_02_medevac_F", "C_IDAP_Van_02_transport_F", "C_IDAP_Van_02_vehicle_F", "C_Van_02_medevac_F", "C_Van_02_service_F", "C_Van_02_transport_F", "C_Van_02_vehicle_F", "I_C_Van_02_transport_F", "I_C_Van_02_vehicle_F", "I_G_Van_02_transport_F", "I_G_Van_02_vehicle_F", "O_G_Van_02_transport_F", "O_G_Van_02_vehicle_F", "Tire_Van_02_Cargo_F", "Tire_Van_02_F", "Tire_Van_02_Spare_F", "Tire_Van_02_Transport_F"};
		weapons[] = {};
	};
	class A3_Soft_F_Quadbike
	{
		requiredAddons[] = {"A3_Soft_F_Quadbike_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Quadbike_01
	{
		addonRootClass = "A3_Soft_F";
		requiredAddons[] = {"A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"B_G_Quadbike_01_F", "B_Quadbike_01_F", "C_Quadbike_01_black_F", "C_Quadbike_01_blue_F", "C_Quadbike_01_F", "C_Quadbike_01_red_F", "C_Quadbike_01_white_F", "I_G_Quadbike_01_F", "I_Quadbike_01_F", "O_G_Quadbike_01_F", "O_Quadbike_01_F"};
		weapons[] = {};
	};
	class A3_Soft_F_SUV
	{
		requiredAddons[] = {"A3_Soft_F_Gamma_SUV_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_Truck
	{
		requiredAddons[] = {"A3_Soft_F_Gamma_Van_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Soft_F_TruckHeavy
	{
		requiredAddons[] = {"A3_Soft_F_Beta_Truck_02"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Sounds_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Sound Effects";
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {"Sound_Alarm", "Sound_Alarm2", "Sound_BattlefieldExplosions", "Sound_BattlefieldFirefight", "Sound_Fire", "Sound_SmokeWreck1", "Sound_SparklesWreck1", "Sound_SparklesWreck2", "Sound_Stream"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Arsenal
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Weapon Sound Effects Files";
		requiredAddons[] = {"A3_Sounds_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Simulation_Fatal", "Simulation_Restart", "Topic_Deselection", "Topic_Done", "Topic_Selection", "Topic_Trigger"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Characters
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Characters Sound Effects Files";
		requiredAddons[] = {"A3_Sounds_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Sound_DeconShower_01_loop", "Sound_SCBACylinder_01_loop", "SoundSetSource_01_base_F", "SoundSetSource_Sfx_DeconShower_Center_01", "SoundSetSource_Sfx_DeconShower_Nozzle_01", "SoundSetSource_Sfx_DeconShower_Nozzle_02"};
		url = "https://www.arma3.com";
		weapons[] = {"ProbingWeapon_01_F", "ProbingWeapon_02_F"};
	};
	class A3_Sounds_F_Environment
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Environment Sound Effects Files";
		requiredAddons[] = {"A3_Sounds_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Sound Effects";
		requiredAddons[] = {"A3_Sounds_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Sound Effects";
		requiredAddons[] = {"A3_Sounds_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Sound Effects";
		requiredAddons[] = {"A3_Air_F_Exp_Plane_Civil_01", "A3_Air_F_Exp_UAV_03", "A3_Air_F_Exp_UAV_04", "A3_Air_F_Exp_VTOL_01", "A3_Air_F_Exp_VTOL_02", "A3_Data_F_Exp", "A3_Soft_F_Exp_LSV_01", "A3_Soft_F_Exp_LSV_02", "A3_Soft_F_Exp_Offroad_02", "A3_Weapons_F_Exp_LongRangeRifles_DMR_07", "A3_Weapons_F_Exp_Machineguns_LMG_03", "A3_Weapons_F_Exp_Pistols_Pistol_01", "A3_Weapons_F_Exp_Rifles_AK12", "A3_Weapons_F_Exp_Rifles_AKM", "A3_Weapons_F_Exp_Rifles_AKS", "A3_Weapons_F_Exp_Rifles_ARX", "A3_Weapons_F_Exp_Rifles_CTAR", "A3_Weapons_F_Exp_Rifles_SPAR_01", "A3_Weapons_F_Exp_Rifles_SPAR_02", "A3_Weapons_F_Exp_Rifles_SPAR_03", "A3_Weapons_F_Exp_SMGs_SMG_05"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Mod
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Official Mod - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Mod"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Sound Effects";
		requiredAddons[] = {"A3_Air_F_Orange_UAV_01", "A3_Air_F_Orange_UAV_06", "A3_Data_F_Orange", "A3_Soft_F_Orange_Van_02"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Sfx
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Sound Effects Files";
		requiredAddons[] = {"A3_Sounds_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Sound Effects";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Sounds_F_Vehicles
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Vehicle Sound Effects Files";
		requiredAddons[] = {"A3_Sounds_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Turrets";
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {"B_GMG_01_A_F", "B_GMG_01_A_weapon_F", "B_GMG_01_F", "B_GMG_01_high_F", "B_GMG_01_high_weapon_F", "B_GMG_01_weapon_F", "B_HMG_01_A_F", "B_HMG_01_A_weapon_F", "B_HMG_01_F", "B_HMG_01_high_F", "B_HMG_01_high_weapon_F", "B_HMG_01_support_F", "B_HMG_01_support_high_F", "B_HMG_01_weapon_F", "I_GMG_01_A_F", "I_GMG_01_A_weapon_F", "I_GMG_01_F", "I_GMG_01_high_F", "I_GMG_01_high_weapon_F", "I_GMG_01_weapon_F", "I_HMG_01_A_F", "I_HMG_01_A_weapon_F", "I_HMG_01_F", "I_HMG_01_high_F", "I_HMG_01_high_weapon_F", "I_HMG_01_support_F", "I_HMG_01_support_high_F", "I_HMG_01_weapon_F", "O_GMG_01_A_F", "O_GMG_01_A_weapon_F", "O_GMG_01_F", "O_GMG_01_high_F", "O_GMG_01_high_weapon_F", "O_GMG_01_weapon_F", "O_HMG_01_A_F", "O_HMG_01_A_weapon_F", "O_HMG_01_F", "O_HMG_01_high_F", "O_HMG_01_high_weapon_F", "O_HMG_01_support_F", "O_HMG_01_support_high_F", "O_HMG_01_weapon_F", "Weapon_Bag_Base"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F_AA_01
	{
		addonRootClass = "A3_Static_F";
		requiredAddons[] = {"A3_Static_F", "A3_Static_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"B_AA_01_weapon_F", "B_static_AA_F", "I_AA_01_weapon_F", "I_static_AA_F", "O_AA_01_weapon_F", "O_static_AA_F"};
		weapons[] = {};
	};
	class A3_Static_F_AT_01
	{
		addonRootClass = "A3_Static_F";
		requiredAddons[] = {"A3_Static_F", "A3_Static_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {"B_AT_01_weapon_F", "B_static_AT_F", "I_AT_01_weapon_F", "I_static_AT_F", "O_AT_01_weapon_F", "O_static_AT_F"};
		weapons[] = {};
	};
	class A3_Static_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Turrets";
		requiredAddons[] = {"A3_Static_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F_Beta_Mortar_01
	{
		addonRootClass = "A3_Static_F_Beta";
		requiredAddons[] = {"A3_Static_F_Beta", "A3_Static_F_Mortar_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Static_F_Destroyer
	{
		author = "Bohemia Interactive";
		name = "CFGPATCHES_A3_Static_F_Destroyer";
		requiredAddons[] = {"A3_Data_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F_Destroyer_Boat_Rack_01
	{
		addonRootClass = "A3_Static_F_Destroyer";
		requiredAddons[] = {"A3_Static_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {"Land_Destroyer_01_Boat_Rack_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Destroyer_Ship_Gun_01
	{
		addonRootClass = "A3_Static_F_Destroyer";
		requiredAddons[] = {"A3_Static_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {"B_Ship_Gun_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Destroyer_Ship_MRLS_01
	{
		addonRootClass = "A3_Static_F_Destroyer";
		requiredAddons[] = {"A3_Static_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {"B_Ship_MRLS_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Turrets";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F_Enoch_AA_01
	{
		addonRootClass = "A3_Static_F_Enoch";
		requiredAddons[] = {"A3_Static_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_Static_AA_F"};
		weapons[] = {};
	};
	class A3_Static_F_Enoch_AT_01
	{
		addonRootClass = "A3_Static_F_Enoch";
		requiredAddons[] = {"A3_Static_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_Static_AT_F"};
		weapons[] = {};
	};
	class A3_Static_F_Enoch_Designator_01
	{
		addonRootClass = "A3_Static_F_Enoch";
		requiredAddons[] = {"A3_Static_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"B_W_Static_Designator_01_F", "B_W_Static_Designator_01_weapon_F"};
		weapons[] = {};
	};
	class A3_Static_F_Enoch_GMG_01
	{
		addonRootClass = "A3_Static_F_Enoch";
		requiredAddons[] = {"A3_Static_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_GMG_01_A_F", "I_E_GMG_01_F", "I_E_GMG_01_high_F"};
		weapons[] = {};
	};
	class A3_Static_F_Enoch_HMG_01
	{
		addonRootClass = "A3_Static_F_Enoch";
		requiredAddons[] = {"A3_Static_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_HMG_01_A_F", "I_E_HMG_01_F", "I_E_HMG_01_high_F"};
		weapons[] = {};
	};
	class A3_Static_F_Enoch_Mortar_01
	{
		addonRootClass = "A3_Static_F_Enoch";
		requiredAddons[] = {"A3_Static_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_Mortar_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Enoch_Radar_System_01
	{
		addonRootClass = "A3_Static_F_Enoch";
		requiredAddons[] = {"A3_Static_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_Radar_System_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Enoch_SAM_System_03
	{
		addonRootClass = "A3_Static_F_Enoch";
		requiredAddons[] = {"A3_Static_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"I_E_SAM_System_03_F"};
		weapons[] = {};
	};
	class A3_Static_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Turrets";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F_Exp_AA_01
	{
		addonRootClass = "A3_Static_F_Exp";
		requiredAddons[] = {"A3_Static_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_Static_AA_F"};
		weapons[] = {};
	};
	class A3_Static_F_Exp_AT_01
	{
		addonRootClass = "A3_Static_F_Exp";
		requiredAddons[] = {"A3_Static_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_Static_AT_F"};
		weapons[] = {};
	};
	class A3_Static_F_Exp_GMG_01
	{
		addonRootClass = "A3_Static_F_Exp";
		requiredAddons[] = {"A3_Static_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_GMG_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Exp_HMG_01
	{
		addonRootClass = "A3_Static_F_Exp";
		requiredAddons[] = {"A3_Static_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_HMG_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Exp_Mortar_01
	{
		addonRootClass = "A3_Static_F_Exp";
		requiredAddons[] = {"A3_Static_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_Mortar_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Turrets";
		requiredAddons[] = {"A3_Static_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F_Gamma_AA
	{
		requiredAddons[] = {"A3_Static_F_AA_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Static_F_Gamma_AT
	{
		requiredAddons[] = {"A3_Static_F_AT_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Static_F_Gamma_Mortar_01
	{
		addonRootClass = "A3_Static_F_Gamma";
		requiredAddons[] = {"A3_Static_F_Beta_Mortar_01", "A3_Static_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Static_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Turrets";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F_Jets_AAA_System_01
	{
		addonRootClass = "A3_Static_F_Jets";
		requiredAddons[] = {"A3_Static_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"B_AAA_System_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Jets_SAM_System_01
	{
		addonRootClass = "A3_Static_F_Jets";
		requiredAddons[] = {"A3_Static_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"B_SAM_System_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Jets_SAM_System_02
	{
		addonRootClass = "A3_Static_F_Jets";
		requiredAddons[] = {"A3_Static_F_Jets"};
		requiredVersion = 0.1;
		units[] = {"B_SAM_System_02_F"};
		weapons[] = {};
	};
	class A3_Static_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Turrets";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F_Mark_Designator_01
	{
		addonRootClass = "A3_Static_F_Mark";
		requiredAddons[] = {"A3_Static_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"B_Static_Designator_01_F", "B_Static_Designator_01_weapon_F"};
		weapons[] = {};
	};
	class A3_Static_F_Mark_Designator_02
	{
		addonRootClass = "A3_Static_F_Mark";
		requiredAddons[] = {"A3_Static_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"O_Static_Designator_02_F", "O_Static_Designator_02_weapon_F"};
		weapons[] = {};
	};
	class A3_Static_F_Mortar_01
	{
		addonRootClass = "A3_Static_F";
		requiredAddons[] = {"A3_Static_F"};
		requiredVersion = 0.1;
		units[] = {"B_G_Mortar_01_F", "B_Mortar_01_F", "B_Mortar_01_support_F", "B_Mortar_01_weapon_F", "I_G_Mortar_01_F", "I_Mortar_01_F", "I_Mortar_01_support_F", "I_Mortar_01_weapon_F", "O_G_Mortar_01_F", "O_Mortar_01_F", "O_Mortar_01_support_F", "O_Mortar_01_weapon_F"};
		weapons[] = {};
	};
	class A3_Static_F_Sams
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Sams - Turrets";
		requiredAddons[] = {"A3_Data_F_Sams"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Static_F_Sams_Radar_System_01
	{
		addonRootClass = "A3_Static_F_Sams";
		requiredAddons[] = {"A3_Static_F_Sams"};
		requiredVersion = 0.1;
		units[] = {"B_Radar_System_01_F"};
		weapons[] = {};
	};
	class A3_Static_F_Sams_Radar_System_02
	{
		addonRootClass = "A3_Static_F_Sams";
		requiredAddons[] = {"A3_Static_F_Sams"};
		requiredVersion = 0.1;
		units[] = {"O_Radar_System_02_F"};
		weapons[] = {};
	};
	class A3_Static_F_Sams_SAM_System_03
	{
		addonRootClass = "A3_Static_F_Sams";
		requiredAddons[] = {"A3_Static_F_Sams"};
		requiredVersion = 0.1;
		units[] = {"B_SAM_System_03_F"};
		weapons[] = {};
	};
	class A3_Static_F_Sams_SAM_System_04
	{
		addonRootClass = "A3_Static_F_Sams";
		requiredAddons[] = {"A3_Static_F_Sams"};
		requiredVersion = 0.1;
		units[] = {"O_SAM_System_04_F"};
		weapons[] = {};
	};
	class A3_Structures_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Argo
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_Accessories
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_BusStop_01_shelter_F", "Land_BusStop_01_sign_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_Addons
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Addon_02_b_white_ruins_F", "Land_i_Addon_02_b_white_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_Garbage
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_GarbageBarrel_01_english_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_House_Big01
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Big_01_b_blue_ruins_F", "Land_House_Big_01_b_brown_ruins_F", "Land_House_Big_01_b_pink_ruins_F", "Land_House_Big_01_b_yellow_ruins_F", "Land_i_House_Big_01_b_blue_F", "Land_i_House_Big_01_b_brown_F", "Land_i_House_Big_01_b_pink_F", "Land_i_House_Big_01_b_white_F", "Land_i_House_Big_01_b_whiteblue_F", "Land_i_House_Big_01_b_yellow_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_House_Big02
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Big_02_b_blue_ruins_F", "Land_House_Big_02_b_brown_ruins_F", "Land_House_Big_02_b_pink_ruins_F", "Land_House_Big_02_b_yellow_ruins_F", "Land_i_House_Big_02_b_blue_F", "Land_i_House_Big_02_b_brown_F", "Land_i_House_Big_02_b_pink_F", "Land_i_House_Big_02_b_white_F", "Land_i_House_Big_02_b_whiteblue_F", "Land_i_House_Big_02_b_yellow_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_House_Small01
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Small_01_b_blue_ruins_F", "Land_House_Small_01_b_brown_ruins_F", "Land_House_Small_01_b_pink_ruins_F", "Land_House_Small_01_b_yellow_ruins_F", "Land_i_House_Small_01_b_blue_F", "Land_i_House_Small_01_b_brown_F", "Land_i_House_Small_01_b_pink_F", "Land_i_House_Small_01_b_white_F", "Land_i_House_Small_01_b_whiteblue_F", "Land_i_House_Small_01_b_yellow_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_House_Small02
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Small_02_b_blue_ruins_F", "Land_House_Small_02_b_brown_ruins_F", "Land_House_Small_02_b_pink_ruins_F", "Land_House_Small_02_b_V1_ruins_F", "Land_House_Small_02_b_yellow_ruins_F", "Land_i_House_Small_02_b_blue_F", "Land_i_House_Small_02_b_brown_F", "Land_i_House_Small_02_b_pink_F", "Land_i_House_Small_02_b_white_F", "Land_i_House_Small_02_b_whiteblue_F", "Land_i_House_Small_02_b_yellow_F", "Land_i_House_Small_02_c_blue_F", "Land_i_House_Small_02_c_brown_F", "Land_i_House_Small_02_c_pink_F", "Land_i_House_Small_02_c_white_F", "Land_i_House_Small_02_c_whiteblue_F", "Land_i_House_Small_02_c_yellow_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_Stone_House_Big_01
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_i_Stone_House_Big_01_b_clay_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_Stone_Shed_01
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_i_Stone_Shed_01_b_clay_F", "Land_i_Stone_Shed_01_b_raw_F", "Land_i_Stone_Shed_01_b_white_F", "Land_i_Stone_Shed_01_c_clay_F", "Land_i_Stone_Shed_01_c_raw_F", "Land_i_Stone_Shed_01_c_white_F", "Land_Stone_Shed_01_b_clay_ruins_F", "Land_Stone_Shed_01_b_raw_ruins_F", "Land_Stone_Shed_01_b_white_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Civilian_Unfinished_Building_01
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Unfinished_Building_01_noLadder_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Commercial
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Commercial_Accessories
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_ATM_01_malden_F", "Land_ATM_02_malden_F", "Land_PhoneBooth_01_malden_F", "Land_PhoneBooth_02_malden_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Commercial_Billboards
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Billboard_02_blank_F", "Land_Billboard_02_carrental_F", "Land_Billboard_02_chernarus_F", "Land_Billboard_02_chevre2_F", "Land_Billboard_02_ion_F", "Land_Billboard_02_leader_F", "Land_Billboard_02_mars2_F", "Land_Billboard_02_monte_F", "Land_Billboard_02_redstone_F", "Land_Billboard_02_surreal_F", "Land_Billboard_02_wine_F", "Land_Billboard_03_aan_F", "Land_Billboard_03_action_F", "Land_Billboard_03_argois_F", "Land_Billboard_03_blank_F", "Land_Billboard_03_bluking_F", "Land_Billboard_03_cheese_F", "Land_Billboard_03_chevre_F", "Land_Billboard_03_duckit_F", "Land_Billboard_03_getlost_F", "Land_Billboard_03_ionbase_F", "Land_Billboard_03_koke_F", "Land_Billboard_03_lyfe_F", "Land_Billboard_03_mars_F", "Land_Billboard_03_maskrtnik_F", "Land_Billboard_03_olives_F", "Land_Billboard_03_pate_F", "Land_Billboard_03_pills_F", "Land_Billboard_03_plane_F", "Land_Billboard_03_supermarket_F", "Land_Billboard_03_winery_F", "Land_Billboard_03_ygont_F", "Land_Billboard_04_blank_F", "Land_Billboard_04_koke_redstone_F", "Land_Billboard_04_mars_lyfe_F", "Land_Billboard_04_supermarket_maskrtnik_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Commercial_FuelStation_01
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_FuelStation_01_prices_malevil_F", "Land_FuelStation_01_pump_malevil_F", "Land_FuelStation_01_roof_malevil_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Commercial_Shop_02
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_i_Shop_02_b_blue_F", "Land_i_Shop_02_b_brown_F", "Land_i_Shop_02_b_pink_F", "Land_i_Shop_02_b_white_F", "Land_i_Shop_02_b_whiteblue_F", "Land_i_Shop_02_b_yellow_F", "Land_Shop_02_b_blue_ruins_F", "Land_Shop_02_b_brown_ruins_F", "Land_Shop_02_b_pink_ruins_F", "Land_Shop_02_b_yellow_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Commercial_Supermarket_01
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Supermarket_01_malden_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Cultural
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Cultural_Church
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Church_01_V2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Cultural_Statues
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Monument_01_F", "Land_Pedestal_01_F", "Land_Pedestal_02_F", "Land_Statue_01_F", "Land_Statue_02_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Decals
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Decals_Horizontal
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Decals"};
		requiredVersion = 0.1;
		units[] = {"Land_DirtPatch_01_4x4_F", "Land_DirtPatch_01_6x8_F", "Land_PedestrianCrossing_01_6m_4str_F", "Land_PedestrianCrossing_01_6m_6str_F", "Land_PedestrianCrossing_01_8m_10str_F", "Land_Puddle_01_F", "Land_Puddle_02_F", "Land_RoadCrack_01_2x2_F", "Land_RoadCrack_01_4x4_F", "Land_RoadCrack_01_6x2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Industrial
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Industrial_Agriculture
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Barn_01_brown_F", "Land_Barn_01_brown_ruins_F", "Land_Barn_01_grey_F", "Land_Barn_01_grey_ruins_F", "Land_Shed_08_brown_F", "Land_Shed_08_brown_ruins_F", "Land_Shed_08_grey_F", "Land_Shed_08_grey_ruins_F", "Land_VineyardFence_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Industrial_Materials
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_WoodenPlanks_01_messy_pine_F", "Land_WoodenPlanks_01_pine_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Infrastructure
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Infrastructure_Runways
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_Runway_end00_F", "Land_Runway_end18_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Infrastructure_Seaports
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_Lighthouse_01_noLight_F", "Land_Lighthouse_03_green_F", "Land_Lighthouse_03_red_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Infrastructure_WaterSupply
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_ReservoirTank_01_military_F", "Land_ReservoirTank_01_military_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Military
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Military_Bunkers
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Bunker_01_big_F", "Land_Bunker_01_blocks_1_F", "Land_Bunker_01_blocks_3_F", "Land_Bunker_01_HQ_F", "Land_Bunker_01_small_F", "Land_Bunker_01_tall_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Military_ContainerBases
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo_House_V3_derelict_F", "Land_Cargo_HQ_V3_derelict_F", "Land_Cargo_Patrol_V3_derelict_F", "Land_Cargo_Tower_V3_derelict_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Military_Domes
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Dome_01_big_green_ruins_v1_F", "Land_Dome_01_big_green_ruins_v2_F", "Land_Dome_01_small_green_ruins_F", "Land_DomeDebris_01_hex_damaged_green_F", "Land_DomeDebris_01_hex_green_F", "Land_DomeDebris_01_struts_large_green_F", "Land_DomeDebris_01_struts_small_green_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Military_Fortifications
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Barricade_01_10m_F", "Land_Barricade_01_4m_F", "Land_CzechHedgehog_01_F", "Land_SandbagBarricade_01_F", "Land_SandbagBarricade_01_half_F", "Land_SandbagBarricade_01_hole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Military_Turrets
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Turret_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Signs
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Signs_City
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Signs"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Signs_Directions
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Signs"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Signs_Warnings
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Signs"};
		requiredVersion = 0.1;
		units[] = {"Land_SignM_forRent_F", "Land_SignM_forSale_F", "Land_SignM_taxi_F", "Land_SignM_WarningMilAreaSmall_english_F", "Land_SignM_WarningMilitaryArea_english_F", "Land_SignM_WarningMilitaryVehicles_english_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Walls
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Walls_City
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_WallCity_01_4m_blue_F", "Land_WallCity_01_4m_grey_F", "Land_WallCity_01_4m_pink_F", "Land_WallCity_01_4m_plain_blue_F", "Land_WallCity_01_4m_plain_dmg_blue_F", "Land_WallCity_01_4m_plain_dmg_grey_F", "Land_WallCity_01_4m_plain_dmg_pink_F", "Land_WallCity_01_4m_plain_dmg_whiteblue_F", "Land_WallCity_01_4m_plain_dmg_yellow_F", "Land_WallCity_01_4m_plain_grey_F", "Land_WallCity_01_4m_plain_pink_F", "Land_WallCity_01_4m_plain_whiteblue_F", "Land_WallCity_01_4m_plain_yellow_F", "Land_WallCity_01_4m_whiteblue_F", "Land_WallCity_01_4m_yellow_F", "Land_WallCity_01_8m_blue_F", "Land_WallCity_01_8m_dmg_blue_F", "Land_WallCity_01_8m_dmg_grey_F", "Land_WallCity_01_8m_dmg_pink_F", "Land_WallCity_01_8m_dmg_whiteblue_F", "Land_WallCity_01_8m_dmg_yellow_F", "Land_WallCity_01_8m_grey_F", "Land_WallCity_01_8m_pink_F", "Land_WallCity_01_8m_plain_blue_F", "Land_WallCity_01_8m_plain_grey_F", "Land_WallCity_01_8m_plain_pink_F", "Land_WallCity_01_8m_plain_whiteblue_F", "Land_WallCity_01_8m_plain_yellow_F", "Land_WallCity_01_8m_whiteblue_F", "Land_WallCity_01_8m_yellow_F", "Land_WallCity_01_gate_blue_F", "Land_WallCity_01_gate_grey_F", "Land_WallCity_01_gate_pink_F", "Land_WallCity_01_gate_whiteblue_F", "Land_WallCity_01_gate_yellow_F", "Land_WallCity_01_pillar_blue_F", "Land_WallCity_01_pillar_grey_F", "Land_WallCity_01_pillar_pink_F", "Land_WallCity_01_pillar_plain_dmg_blue_F", "Land_WallCity_01_pillar_plain_dmg_grey_F", "Land_WallCity_01_pillar_plain_dmg_pink_F", "Land_WallCity_01_pillar_plain_dmg_whiteblue_F", "Land_WallCity_01_pillar_plain_dmg_yellow_F", "Land_WallCity_01_pillar_whiteblue_F", "Land_WallCity_01_pillar_yellow_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Walls_Concrete
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_ConcreteWall_01_l_gate_closed_F", "Land_ConcreteWall_01_m_gate_closed_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Walls_Military
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_Mil_WallBig_4m_battered_F", "Land_Mil_WallBig_4m_damaged_center_F", "Land_Mil_WallBig_4m_damaged_left_F", "Land_Mil_WallBig_4m_damaged_right_F", "Land_Mil_WallBig_corner_battered_F", "Land_Mil_WallBig_debris_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Walls_Net
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_NetFence_02_m_gate_v1_closed_F", "Land_NetFence_02_m_gate_v2_closed_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Walls_Pipe
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_PipeFence_01_m_gate_v1_closed_F", "Land_PipeFence_01_m_gate_v2_closed_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Walls_Tin
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_TinWall_01_m_gate_v1_closed_F", "Land_TinWall_01_m_gate_v2_closed_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Walls_Wooden
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_WoodenWall_02_s_gate_closed_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Argo_Wrecks
	{
		addonRootClass = "A3_Structures_F_Argo";
		requiredAddons[] = {"A3_Structures_F_Argo"};
		requiredVersion = 0.1;
		units[] = {"Land_TankWreck_01_turret_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_Civ_Camping
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Land_PartyTent_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_Civ_SportsGrounds
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Land_GymBench_01_F", "Land_GymRack_01_F", "Land_GymRack_02_F", "Land_GymRack_03_F", "Land_TyreBarrier_01_F", "Land_TyreBarrier_01_line_x4_F", "Land_TyreBarrier_01_line_x6_F", "Land_WinnersPodium_01_F", "TyreBarrier_01_black_F", "TyreBarrier_01_white_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_Ind_Cargo
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo20_vr_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_Items_Electronics
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Land_CarBattery_01_F", "Land_CarBattery_02_F", "Land_VRGoggles_01_F", "Land_WaterCooler_01_new_F", "Land_WaterCooler_01_old_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_Items_Food
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Land_FoodContainer_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_Items_Sport
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"KartSteertingWheel_01_black_F", "KartSteertingWheel_01_blue_F", "KartSteertingWheel_01_green_F", "KartSteertingWheel_01_orange_F", "KartSteertingWheel_01_red_F", "KartSteertingWheel_01_white_F", "KartSteertingWheel_01_yellow_F", "Land_KartStand_01_F", "Land_KartSteertingWheel_01_F", "Land_KartTrolly_01_F", "Land_KartTyre_01_F", "Land_KartTyre_01_x4_F", "Land_Trophy_01_bronze_F", "Land_Trophy_01_gold_F", "Land_Trophy_01_silver_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_System
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"UserTexture_1x2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_Training
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Functions_F_Bootcamp", "A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Land_Target_PopUp_01_figure_F", "Land_Target_PopUp_01_mechanism_F", "TargetBootcampHuman_F", "TargetBootcampHumanSimple_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_VR_Blocks
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Land_VR_Block_01_F", "Land_VR_Block_02_F", "Land_VR_Block_03_F", "Land_VR_Block_04_F", "Land_VR_Block_05_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_VR_CoverObjects
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Land_VR_CoverObject_01_kneel_F", "Land_VR_CoverObject_01_kneelHigh_F", "Land_VR_CoverObject_01_kneelLow_F", "Land_VR_CoverObject_01_stand_F", "Land_VR_CoverObject_01_standHigh_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bootcamp_VR_Helpers
	{
		addonRootClass = "A3_Structures_F_Bootcamp";
		requiredAddons[] = {"A3_Structures_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"VR_3DSelector_01_complete_F", "VR_3DSelector_01_default_F", "VR_3DSelector_01_exit_F", "VR_3DSelector_01_incomplete_F", "VR_Area_01_circle_4_grey_F", "VR_Area_01_circle_4_yellow_F", "VR_Area_01_square_1x1_grey_F", "VR_Area_01_square_1x1_yellow_F", "VR_Area_01_square_2x2_grey_F", "VR_Area_01_square_2x2_yellow_F", "VR_Area_01_square_4x4_grey_F", "VR_Area_01_square_4x4_yellow_F", "VR_Billboard_01_F", "VR_GroundIcon_01_F", "VR_Sector_01_60deg_50_grey_F", "VR_Sector_01_60deg_50_red_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Bridges
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"Land_Bridge_01_PathLod_F", "Land_Bridge_Asphalt_PathLod_F", "Land_Bridge_Concrete_PathLod_F", "Land_Bridge_HighWay_PathLod_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Accessories
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Loudspeakers_F", "Land_Sink_F", "Land_Timbers_F", "Land_TreeBin_F", "Land_Water_source_F", "Land_WoodPile_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Ancient
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_AncientPillar_damaged_F", "Land_AncientPillar_F", "Land_AncientPillar_fallen_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_BellTowers
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_BellTower_01_V1_F", "Land_BellTower_01_V2_F", "Land_BellTower_02_V1_F", "Land_BellTower_02_V1_ruins_F", "Land_BellTower_02_V2_F", "Land_BellTower_02_V2_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Calvaries
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Calvary_01_V1_F", "Land_Calvary_02_V1_F", "Land_Calvary_02_V2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Camping
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Campfire_burning_F", "FirePlace_burning_F", "Land_Campfire_F", "Land_Camping_Light_off_F", "Land_CampingChair_V1_F", "Land_CampingChair_V1_folded_F", "Land_CampingChair_V2_F", "Land_CampingTable_F", "Land_CampingTable_small_F", "Land_FieldToilet_F", "Land_FirePlace_F", "Land_Ground_sheet_blue_F", "Land_Ground_sheet_F", "Land_Ground_sheet_folded_blue_F", "Land_Ground_sheet_folded_F", "Land_Ground_sheet_folded_khaki_F", "Land_Ground_sheet_folded_OPFOR_F", "Land_Ground_sheet_folded_yellow_F", "Land_Ground_sheet_khaki_F", "Land_Ground_sheet_OPFOR_F", "Land_Ground_sheet_yellow_F", "Land_Pillow_camouflage_F", "Land_Pillow_F", "Land_Pillow_grey_F", "Land_Pillow_old_F", "Land_Sleeping_bag_blue_F", "Land_Sleeping_bag_blue_folded_F", "Land_Sleeping_bag_brown_F", "Land_Sleeping_bag_brown_folded_F", "Land_Sleeping_bag_F", "Land_Sleeping_bag_folded_F", "Land_Sun_chair_F", "Land_Sun_chair_green_F", "Land_Sunshade_F", "Land_TentA_F", "Land_TentDome_F", "Land_ToiletBox_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Chapels
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Chapel_Small_V1_F", "Land_Chapel_Small_V1_ruins_F", "Land_Chapel_Small_V2_F", "Land_Chapel_Small_V2_ruins_F", "Land_Chapel_V1_F", "Land_Chapel_V1_ruins_F", "Land_Chapel_V2_F", "Land_Chapel_V2_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Constructions
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Bricks_V1_F", "Land_Bricks_V2_F", "Land_Bricks_V3_F", "Land_Bricks_V4_F", "Land_CinderBlocks_F", "Land_Coil_F", "Land_ConcretePipe_F", "Land_IronPipes_F", "Land_Pallet_F", "Land_Pallet_vertical_F", "Land_Pallets_F", "Land_Pipes_large_F", "Land_Pipes_small_F", "Land_Scaffolding_F", "Land_WheelCart_F", "Land_WoodenBox_F", "Land_WorkStand_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Dead
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Grave_memorial_F", "Land_Grave_monument_F", "Land_Grave_obelisk_F", "Land_Grave_soldier_F", "Land_Grave_V1_F", "Land_Grave_V2_F", "Land_Grave_V3_F", "Land_HumanSkeleton_F", "Land_HumanSkull_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Garbage
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Garbage_line_F", "Land_Garbage_square3_F", "Land_Garbage_square5_F", "Land_GarbageBags_F", "Land_GarbagePallet_F", "Land_GarbageWashingMachine_F", "Land_JunkPile_F", "Land_Tyre_F", "Land_Tyres_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Graffiti
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_InfoBoards
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Billboard_F", "Land_InfoStand_V1_F", "Land_InfoStand_V2_F", "Land_MapBoard_F", "Land_Noticeboard_F", "MapBoard_altis_F", "MapBoard_stratis_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Kiosks
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Lamps
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_LampAirport_F", "Land_LampAirport_off_F", "Land_LampDecor_F", "Land_LampDecor_off_F", "Land_LampHalogen_F", "Land_LampHalogen_off_F", "Land_LampHarbour_F", "Land_LampHarbour_off_F", "Land_LampShabby_F", "Land_LampShabby_off_F", "Land_LampSolar_F", "Land_LampSolar_off_F", "Land_LampStadium_F", "Land_LampStreet_F", "Land_LampStreet_off_F", "Land_LampStreet_small_F", "Land_LampStreet_small_off_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Market
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Basket_F", "Land_Cages_F", "Land_CratesPlastic_F", "Land_CratesShabby_F", "Land_CratesWooden_F", "Land_MarketShelter_F", "Land_Sack_F", "Land_Sacks_goods_F", "Land_Sacks_heap_F", "Land_StallWater_F", "Land_WoodenCart_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Offices
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Offices_01_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Pavements
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Pavement_narrow_corner_F", "Land_Pavement_narrow_F", "Land_Pavement_wide_corner_F", "Land_Pavement_wide_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_PlayGround
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Slide_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_SportsGrounds
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_BC_Basket_F", "Land_BC_Court_F", "Land_Goal_F", "Land_Tribune_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Statues
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {"Land_Maroula_base_F", "Land_Maroula_F", "Land_MolonLabe_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Civ_Tourism
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Civ"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Buildings and Structures Shared Files";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Dominants
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Dominants_Amphitheater
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Dominants"};
		requiredVersion = 0.1;
		units[] = {"Land_Amphitheater_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Dominants_Castle
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Dominants"};
		requiredVersion = 0.1;
		units[] = {"Land_Castle_01_church_a_ruin_F", "Land_Castle_01_church_b_ruin_F", "Land_Castle_01_church_ruin_F", "Land_Castle_01_house_ruin_F", "Land_Castle_01_step_F", "Land_Castle_01_tower_F", "Land_Castle_01_tower_ruins_F", "Land_Castle_01_wall_01_F", "Land_Castle_01_wall_02_F", "Land_Castle_01_wall_03_F", "Land_Castle_01_wall_04_F", "Land_Castle_01_wall_05_F", "Land_Castle_01_wall_06_F", "Land_Castle_01_wall_07_F", "Land_Castle_01_wall_08_F", "Land_Castle_01_wall_09_F", "Land_Castle_01_wall_10_F", "Land_Castle_01_wall_11_F", "Land_Castle_01_wall_12_F", "Land_Castle_01_wall_13_F", "Land_Castle_01_wall_14_F", "Land_Castle_01_wall_15_F", "Land_Castle_01_wall_16_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Dominants_Church
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Dominants"};
		requiredVersion = 0.1;
		units[] = {"Land_Church_01_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Dominants_Hospital
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Dominants"};
		requiredVersion = 0.1;
		units[] = {"Land_Hospital_main_F", "Land_Hospital_side1_F", "Land_Hospital_side2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Dominants_Lighthouse
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Dominants"};
		requiredVersion = 0.1;
		units[] = {"Land_LightHouse_F", "Land_LightHouse_ruins_F", "Land_Lighthouse_small_F", "Land_Lighthouse_small_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Dominants_WIP
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Dominants"};
		requiredVersion = 0.1;
		units[] = {"Land_WIP_F", "Land_WIP_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Civilian
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Civilian Buildings";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Civilian_Accessories
	{
		addonRootClass = "A3_Structures_F_Enoch_Civilian";
		requiredAddons[] = {"A3_Structures_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_BusStop_02_shelter_F", "Land_BusStop_02_shelter_ruins_F", "Land_BusStop_02_sign_F", "Land_ChickenCoop_01_F", "Land_ConcreteTreePlanter_01_F", "Land_ConcreteTreePlanter_02_F", "Land_ConcreteWell_02_F", "Land_DryToilet_01_F", "Land_FirewoodPile_01_F", "Land_GasMeterCabinet_01_F", "Land_Hutch_01_F", "Land_MysteriousBell_01_F", "Land_StoneWell_01_F", "Land_TreeGrate_01_F", "Land_TreeGuard_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Civilian_Camps
	{
		addonRootClass = "A3_Structures_F_Enoch_Civilian";
		requiredAddons[] = {"A3_Structures_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Camp_House_01_brown_F", "Land_Camp_House_01_brown_ruins_F", "Land_Caravan_01_green_F", "Land_Caravan_01_rust_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Civilian_Constructions
	{
		addonRootClass = "A3_Structures_F_Enoch_Civilian";
		requiredAddons[] = {"A3_Structures_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Scaffolding_New_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Civilian_Houses
	{
		addonRootClass = "A3_Structures_F_Enoch_Civilian";
		requiredAddons[] = {"A3_Structures_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_1B01_F", "Land_House_1B01_ruins_F", "Land_House_1W01_F", "Land_House_1W01_ruins_F", "Land_House_1W02_F", "Land_House_1W02_ruins_F", "Land_House_1W03_F", "Land_House_1W03_ruins_F", "Land_House_1W04_F", "Land_House_1W04_ruins_F", "Land_House_1W05_F", "Land_House_1W05_ruins_F", "Land_House_1W06_F", "Land_House_1W06_ruins_F", "Land_House_1W07_F", "Land_House_1W07_ruins_F", "Land_House_1W08_F", "Land_House_1W08_ruins_F", "Land_House_1W09_F", "Land_House_1W09_ruins_F", "Land_House_1W10_F", "Land_House_1W10_ruins_F", "Land_House_1W11_F", "Land_House_1W11_ruins_F", "Land_House_1W12_F", "Land_House_1W12_ruins_F", "Land_House_1W13_F", "Land_House_1W13_ruins_F", "Land_House_2B01_F", "Land_House_2B01_ruins_F", "Land_House_2B02_F", "Land_House_2B02_ruins_F", "Land_House_2B03_F", "Land_House_2B03_ruins_F", "Land_House_2B04_F", "Land_House_2B04_ruins_F", "Land_House_2W01_F", "Land_House_2W01_ruins_F", "Land_House_2W02_F", "Land_House_2W02_ruins_F", "Land_House_2W03_F", "Land_House_2W03_ruins_F", "Land_House_2W04_F", "Land_House_2W04_ruins_F", "Land_House_2W05_F", "Land_House_2W05_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Civilian_Medical
	{
		addonRootClass = "A3_Structures_F_Enoch_Civilian";
		requiredAddons[] = {"A3_Structures_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_HealthCenter_01_F", "Land_HealthCenter_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Civilian_Police
	{
		addonRootClass = "A3_Structures_F_Enoch_Civilian";
		requiredAddons[] = {"A3_Structures_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_PoliceStation_01_F", "Land_PoliceStation_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Civilian_Sheds
	{
		addonRootClass = "A3_Structures_F_Enoch_Civilian";
		requiredAddons[] = {"A3_Structures_F_Enoch_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Shed_09_F", "Land_Shed_09_ruins_F", "Land_Shed_10_F", "Land_Shed_10_ruins_F", "Land_Shed_11_F", "Land_Shed_11_ruins_F", "Land_Shed_12_F", "Land_Shed_12_ruins_F", "Land_Shed_13_F", "Land_Shed_13_ruins_F", "Land_Shed_14_F", "Land_Shed_14_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Commercial
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Commercial Buildings";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Commercial_FuelStation_03
	{
		addonRootClass = "A3_Structures_F_Enoch_Commercial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_FuelStation_03_prices_F", "Land_FuelStation_03_pump_F", "Land_FuelStation_03_roof_F", "Land_FuelStation_03_roof_ruins_F", "Land_FuelStation_03_shop_F", "Land_FuelStation_03_shop_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Commercial_VillageStore_01
	{
		addonRootClass = "A3_Structures_F_Enoch_Commercial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_VillageStore_01_F", "Land_VillageStore_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Cultural Buildings";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_Calvary_03
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Calvary_03_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_Calvary_04
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Calvary_04_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_CastleRuins
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_CastleRuins_01_bastion_F", "Land_CastleRuins_01_wall_10m_F", "Land_CastleRuins_01_wall_d_L_F", "Land_CastleRuins_01_wall_d_R_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_Cemeteries
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Cross_01_small_F", "Land_Grave_08_F", "Land_Grave_09_F", "Land_Grave_10_F", "Land_Grave_11_F", "Land_GraveFence_01_F", "Land_GraveFence_02_F", "Land_GraveFence_03_F", "Land_GraveFence_04_F", "Land_Tombstone_04_F", "Land_Tombstone_05_F", "Land_Tombstone_06_F", "Land_Tombstone_07_F", "Land_Tombstone_08_damaged_F", "Land_Tombstone_08_F", "Land_Tombstone_09_F", "Land_Tombstone_10_F", "Land_Tombstone_11_damaged_F", "Land_Tombstone_11_F", "Land_Tombstone_12_F", "Land_Tombstone_13_F", "Land_Tombstone_14_F", "Land_Tombstone_15_F", "Land_Tombstone_16_F", "Land_Tombstone_17_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_Chapel_01
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Chapel_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_Chapel_02
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Chapel_02_white_damaged_F", "Land_Chapel_02_white_F", "Land_Chapel_02_white_ruins_F", "Land_Chapel_02_yellow_damaged_F", "Land_Chapel_02_yellow_F", "Land_Chapel_02_yellow_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_Church_04
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Church_04_damaged_F", "Land_Church_04_F", "Land_Church_04_lightblue_damaged_F", "Land_Church_04_lightblue_F", "Land_Church_04_lightyellow_damaged_F", "Land_Church_04_lightyellow_F", "Land_Church_04_red_damaged_F", "Land_Church_04_red_F", "Land_Church_04_small_damaged_F", "Land_Church_04_small_F", "Land_Church_04_small_lightblue_damaged_F", "Land_Church_04_small_lightblue_F", "Land_Church_04_small_lightyellow_damaged_F", "Land_Church_04_small_lightyellow_F", "Land_Church_04_small_red_damaged_F", "Land_Church_04_small_red_F", "Land_Church_04_small_white_damaged_F", "Land_Church_04_small_white_F", "Land_Church_04_small_white_red_damaged_F", "Land_Church_04_small_white_red_F", "Land_Church_04_small_yellow_damaged_F", "Land_Church_04_small_yellow_F", "Land_Church_04_white_damaged_F", "Land_Church_04_white_F", "Land_Church_04_white_red_damaged_F", "Land_Church_04_white_red_F", "Land_Church_04_yellow_damaged_F", "Land_Church_04_yellow_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_Church_05
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Church_05_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_OrthodoxChurches
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_OrthodoxChurch_02_F", "Land_OrthodoxChurch_03_F", "Land_OrthodoxChurch_03_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Cultural_Statues
	{
		addonRootClass = "A3_Structures_F_Enoch_Cultural";
		requiredAddons[] = {"A3_Structures_F_Enoch_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Monument_02_F", "Land_OldSculpture_01_F", "Land_Statue_03_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Buildings and Structures Shared Files";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Decals
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Decals_Horizontal
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Decals"};
		requiredVersion = 0.1;
		units[] = {"Land_ConcretePanels_01_end1_F", "Land_ConcretePanels_01_end2_F", "Land_ConcretePanels_01_F", "Land_ConcretePanels_01_single_F", "Land_Decal_damage_long1_F", "Land_Decal_damage_long2_F", "Land_Decal_damage_long3_F", "Land_Decal_damage_long4_F", "Land_Decal_damage_long5_F", "Land_Decal_damage_medium1_F", "Land_Decal_damage_medium2_F", "Land_Decal_roads_ars_01_F", "Land_Decal_roads_ars_02_F", "Land_Decal_roads_ars_03_F", "Land_Decal_roads_ars_04_F", "Land_Decal_roads_ars_05_F", "Land_Decal_roads_ars_06_F", "Land_Decal_roads_oil_stain_01_F", "Land_Decal_roads_oil_stain_02_F", "Land_Decal_roads_oil_stain_03_F", "Land_Decal_roads_oil_stain_04_F", "Land_dirt_road_damage_long_01_F", "Land_dirt_road_damage_long_02_F", "Land_dirt_road_damage_long_03_F", "Land_dirt_road_damage_long_04_F", "Land_dirt_road_damage_long_05_F", "Land_dirt_road_rocks_01_F", "Land_dirt_road_rocks_02_F", "Land_dirt_road_rocks_03_F", "Land_dirt_road_rocks_04_F", "Land_DirtPatch_05_F", "Land_roads_cracks_01_F", "Land_roads_cracks_02_F", "Land_roads_cracks_03_F", "Land_roads_cracks_04_F", "Land_roads_cracks_05_F", "Land_roads_patch_01_F", "Land_roads_patch_02_F", "Land_roads_patch_03_F", "Land_roads_patch_04_F", "Land_roads_patch_05_F", "Land_roads_patch_06_F", "Land_roads_patch_07_F", "Land_roads_patch_08_F", "Land_roads_patch_09_F", "Land_roads_patch_10_F", "Land_roads_patch_11_F", "Land_roads_patch_12_F", "Land_VehicleTrack_01_left_crossing_F", "Land_VehicleTrack_01_left_v1_F", "Land_VehicleTrack_01_left_v2_F", "Land_VehicleTrack_01_right_crossing_F", "Land_VehicleTrack_01_right_v1_F", "Land_VehicleTrack_01_right_v2_F", "Land_VehicleTrack_01_straight_end_F", "Land_VehicleTrack_01_straight_start_F", "Land_VehicleTrack_01_straight_v1_F", "Land_VehicleTrack_01_straight_v2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Furniture
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Furniture";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Industrial Structures";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Agriculture
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Drainage_01_F", "Land_FeedStorage_01_F", "Land_FeedStorage_01_ruins_F", "Land_HayBale_01_decayed_F", "Land_HayBale_01_F", "Land_HayBale_01_packed_F", "Land_HayBale_01_stack_F", "Land_ManurePile_01_F", "Land_SilageStorage_01_F", "Land_Trough_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Cargo
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo20_EMP_F", "Land_Cargo20_EMP_Training_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_CementWorks
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_CementWorks_01_brick_F", "Land_CementWorks_01_grey_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_CoalPlant_01
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_CoalPlant_01_Conveyor_F", "Land_CoalPlant_01_LoadingHouse_F", "Land_CoalPlant_01_MainBuilding_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_DieselPowerPlant_01
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_dp_bigTank_old_F", "Land_dp_bigTank_old_ruins_F", "Land_dp_smallTank_old_F", "Land_dp_smallTank_old_ruins_F", "Land_DPP_01_mainFactory_old_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Farms
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Barn_02_F", "Land_Barn_02_ruins_F", "Land_Barn_03_large_F", "Land_Barn_03_large_ruins_F", "Land_Barn_03_small_F", "Land_Barn_03_small_ruins_F", "Land_Barn_04_F", "Land_Barn_04_ruins_F", "Land_Cowshed_01_A_F", "Land_Cowshed_01_A_ruins_F", "Land_Cowshed_01_B_F", "Land_Cowshed_01_B_ruins_F", "Land_Cowshed_01_C_F", "Land_Cowshed_01_C_ruins_F", "Land_Greenhouse_01_damaged_F", "Land_Greenhouse_01_F", "Land_Greenhouse_01_ruins_F", "Land_StrawStack_01_F", "Land_WaterTower_02_F", "Land_WaterTower_02_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Garages
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_GarageOffice_01_F", "Land_GarageOffice_01_ruins_F", "Land_GarageRow_01_large_F", "Land_GarageRow_01_large_ruins_F", "Land_GarageRow_01_small_F", "Land_GarageRow_01_small_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Houses
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Factory_02_F", "Land_WaterStation_01_F", "Land_WaterStation_01_ruins_F", "Land_Workshop_01_F", "Land_Workshop_01_grey_F", "Land_Workshop_01_ruins_F", "Land_Workshop_02_F", "Land_Workshop_02_grey_F", "Land_Workshop_02_ruins_F", "Land_Workshop_03_F", "Land_Workshop_03_grey_F", "Land_Workshop_03_ruins_F", "Land_Workshop_04_F", "Land_Workshop_04_grey_F", "Land_Workshop_04_ruins_F", "Land_Workshop_05_F", "Land_Workshop_05_grey_F", "Land_Workshop_05_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Materials
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_TimberLog_01_F", "Land_TimberLog_02_F", "Land_TimberLog_03_F", "Land_TimberLog_04_F", "Land_TimberLog_05_F", "Land_TimberPile_02_F", "Land_TimberPile_03_F", "Land_TimberPile_04_F", "Land_TimberPile_05_F", "Land_WoodPile_02_F", "Land_WoodPile_03_F", "Land_WoodPile_04_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Mines
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Mine_01_conveyor_10m_F", "Land_Mine_01_conveyor_begin_F", "Land_Mine_01_conveyor_end_F", "Land_Mine_01_heap_F", "Land_Mine_01_hopper_silo_F", "Land_Mine_01_minecart_F", "Land_Mine_01_rail_track_end_F", "Land_Mine_01_rail_track_F", "Land_Mine_01_rail_track_switch_F", "Land_Mine_01_warehouse_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Pipes
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_IndPipe3_big_18_F", "Land_IndPipe3_big_18ladder_F", "Land_IndPipe3_big_9_F", "Land_IndPipe3_big_ground1_F", "Land_IndPipe3_big_ground2_F", "Land_IndPipe3_big_support_F", "Land_IndPipe3_bigL_L_F", "Land_IndPipe3_bigL_R_F", "Land_IndPipe3_Small_9_F", "Land_IndPipe3_Small_ground1_F", "Land_IndPipe3_Small_ground2_F", "Land_IndPipe3_SmallL_L_F", "Land_IndPipe3_SmallL_R_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Power
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_PowerStation_01_F", "Land_PowerStation_01_ruins_F", "Land_Substation_01_F", "Land_Substation_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Sawmills
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Sawmill_01_F", "Land_Sawmill_01_illuminati_tower_F", "Land_Sawmill_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Sheds
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_i_Shed_Ind_old_F", "Land_IndustrialShed_01_F", "Land_IndustrialShed_01_ruins_F", "Land_Shed_Ind_old_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Smokestacks
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Smokestack_01_F", "Land_Smokestack_01_factory_base_F", "Land_Smokestack_01_factory_F", "Land_Smokestack_01_factory_lower_F", "Land_Smokestack_01_factory_middle_F", "Land_Smokestack_01_factory_off_F", "Land_Smokestack_01_factory_ruins_F", "Land_Smokestack_01_factory_upper_F", "Land_Smokestack_01_off_F", "Land_Smokestack_01_ruins_F", "Land_Smokestack_02_F", "Land_Smokestack_02_ruins_F", "Land_Smokestack_03_F", "Land_Smokestack_03_off_F", "Land_Smokestack_03_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Industrial_Transmitter_Tower
	{
		addonRootClass = "A3_Structures_F_Enoch_Industrial";
		requiredAddons[] = {"A3_Structures_F_Enoch_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_TTowerBig_1_off_F", "Land_TTowerBig_2_off_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Infrastructure
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Infrastructure Objects";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Infrastructure_Benchmarks
	{
		addonRootClass = "A3_Structures_F_Enoch_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Enoch_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_SurveyMarker_01_cover_F", "Land_SurveyMarker_01_post_F", "Land_SurveyMarker_01_rod_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Infrastructure_Bridges
	{
		addonRootClass = "A3_Structures_F_Enoch_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Enoch_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Infrastructure_Highway
	{
		addonRootClass = "A3_Structures_F_Enoch_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Enoch_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_Highway_Pillar_01_F", "Land_Highway_Pillar_01_garage_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Infrastructure_Lamps
	{
		addonRootClass = "A3_Structures_F_Enoch_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Enoch_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_LampIndustrial_01_F", "Land_LampIndustrial_01_off_F", "Land_LampIndustrial_02_F", "Land_LampIndustrial_02_off_F", "Land_LampStreet_02_amplion_F", "Land_LampStreet_02_amplion_off_F", "Land_LampStreet_02_double_F", "Land_LampStreet_02_double_off_F", "Land_LampStreet_02_F", "Land_LampStreet_02_off_F", "Land_LampStreet_02_triple_F", "Land_LampStreet_02_triple_off_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Infrastructure_Pavements
	{
		addonRootClass = "A3_Structures_F_Enoch_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Enoch_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_ConcreteKerb_01_2m_v2_F", "Land_ConcreteKerb_01_4m_v2_F", "Land_ConcreteKerb_01_8m_v2_F", "Land_ConcretePavement_01_narrow_corner_F", "Land_ConcretePavement_01_narrow_F", "Land_ConcretePavement_01_wide_corner_F", "Land_ConcretePavement_01_wide_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Infrastructure_Powerlines
	{
		addonRootClass = "A3_Structures_F_Enoch_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Enoch_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_Power_Pole_Wood1", "Land_Power_Pole_Wood1_Amp", "Land_Power_Pole_Wood1_Lamp", "Land_Power_Pole_Wood1_Lamp_Amp", "Land_Power_Pole_Wood2", "Land_Power_Pole_Wood3", "Land_PowerLine_02_pole_junction_A_F", "Land_powerline_02_pole_junction_nest_a_f", "Land_PowerLine_02_pole_small_A_F", "Land_PowerLine_02_pole_small_end_A_F", "Land_PowerLine_02_pole_small_end_F", "Land_PowerLine_02_pole_small_F", "Land_powerline_02_pole_small_hook_end_f", "Land_PowerLine_02_pole_small_hook_F", "Land_powerline_02_pole_small_hook_junction_f", "Land_powerline_02_pole_small_junction_f", "Land_PowerLine_02_pole_small_lamp_F", "Land_PowerLine_02_pole_small_lamp_off_F", "Land_PowerLine_03_pole_end_F", "Land_PowerLine_03_pole_F", "Land_PowerLine_03_pole_junction_F", "Land_TelephoneLine_01_wire_50m_main_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Infrastructure_Railways
	{
		addonRootClass = "A3_Structures_F_Enoch_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Enoch_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_Rail_Bridge_40_F", "Land_Rail_ConcreteRamp_F", "Land_Rail_Crossing_Barrier_F", "Land_Rail_LineBreak_Iron_F", "Land_Rail_Platform_Cross_F", "Land_Rail_Platform_Segment_F", "Land_Rail_Platform_Start_F", "Land_Rail_Signals_F", "Land_Rail_Station_Big_F", "Land_Rail_Station_Big_ruins_F", "Land_Rail_Station_Small_F", "Land_Rail_Station_Small_ruins_F", "Land_Rail_Track_25_F", "Land_Rail_Track_Down_25_F", "Land_Rail_Track_Down_40_F", "Land_Rail_Track_L25_10_F", "Land_Rail_Track_LB1_RE_F", "Land_Rail_Track_LB_RE_F", "Land_Rail_Track_LE1_RB_F", "Land_Rail_Track_LE_RB_F", "Land_Rail_Track_Passing_10_F", "Land_Rail_Track_Passing_25_F", "Land_Rail_Track_Passing_25NOLC_F", "Land_Rail_Track_R25_10_F", "Land_Rail_Track_SP_F", "Land_Rail_Track_TurnOutL_F", "Land_Rail_Track_TurnOutR_F", "Land_Rail_Track_Up_25_F", "Land_Rail_Track_Up_40_F", "Land_Rail_TrackE_25_F", "Land_Rail_TrackE_25NOLC_F", "Land_Rail_TrackE_2_F", "Land_Rail_TrackE_40_F", "Land_Rail_TrackE_40NOLC_F", "Land_Rail_TrackE_4_F", "Land_Rail_TrackE_8_F", "Land_Rail_TrackE_8NOLC_F", "Land_Rail_TrackE_L25_10_F", "Land_Rail_TrackE_L25_5_F", "Land_Rail_TrackE_L30_20_F", "Land_Rail_TrackE_R25_10_F", "Land_Rail_TrackE_R25_5_F", "Land_Rail_TrackE_R30_20_F", "Land_Rail_TrackE_TurnOutL_F", "Land_Rail_TrackE_TurnOutR_F", "Land_Rail_Warehouse_Small_F", "Land_Rail_Warehouse_Small_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Infrastructure_Roads
	{
		addonRootClass = "A3_Structures_F_Enoch_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Enoch_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_CobblestoneSquare_01_2m_F", "Land_CobblestoneSquare_01_32m_F", "Land_CobblestoneSquare_01_4m_F", "Land_CobblestoneSquare_01_8m_F", "Land_CobblestoneSquare_01_edge_2m_v1_F", "Land_CobblestoneSquare_01_edge_2m_v2_F", "Land_CobblestoneSquare_01_edge_32m_v1_F", "Land_CobblestoneSquare_01_edge_32m_v2_F", "Land_CobblestoneSquare_01_edge_4m_v1_F", "Land_CobblestoneSquare_01_edge_4m_v2_F", "Land_CobblestoneSquare_01_edge_8m_v1_F", "Land_CobblestoneSquare_01_edge_8m_v2_F", "Land_ConcretePanels_02_four_F", "Land_ConcretePanels_02_single_dmg_F", "Land_ConcretePanels_02_single_v1_F", "Land_ConcretePanels_02_single_v2_F", "Land_SewerCover_04_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Military Buildings and Structures";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military_Airfield
	{
		addonRootClass = "A3_Structures_F_Enoch_Military";
		requiredAddons[] = {"A3_Structures_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_ControlTower_02_F", "Land_ControlTower_02_ruins_F", "Land_ServiceHangar_01_L_F", "Land_ServiceHangar_01_R_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military_Barracks
	{
		addonRootClass = "A3_Structures_F_Enoch_Military";
		requiredAddons[] = {"A3_Structures_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Barracks_02_F", "Land_Barracks_02_ruins_F", "Land_Barracks_03_F", "Land_Barracks_03_ruins_F", "Land_Barracks_04_F", "Land_Barracks_04_ruins_F", "Land_Barracks_05_F", "Land_Barracks_05_ruins_F", "Land_Barracks_06_F", "Land_Barracks_06_ruins_F", "Land_ControlTower_01_F", "Land_ControlTower_01_ruins_F", "Land_GuardBox_01_brown_F", "Land_GuardBox_01_brown_ruins_F", "Land_GuardBox_01_green_F", "Land_GuardBox_01_green_ruins_F", "Land_GuardBox_01_smooth_F", "Land_GuardBox_01_smooth_ruins_F", "Land_GuardHouse_02_F", "Land_GuardHouse_02_grey_F", "Land_GuardHouse_02_ruins_F", "Land_GuardHouse_03_F", "Land_GuardHouse_03_ruins_F", "Land_GuardTower_01_F", "Land_GuardTower_02_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military_Bunkers
	{
		addonRootClass = "A3_Structures_F_Enoch_Military";
		requiredAddons[] = {"A3_Structures_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Bunker_02_double_F", "Land_Bunker_02_left_F", "Land_Bunker_02_light_double_F", "Land_Bunker_02_light_left_F", "Land_Bunker_02_light_right_F", "Land_Bunker_02_right_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military_Camonets
	{
		addonRootClass = "A3_Structures_F_Enoch_Military";
		requiredAddons[] = {"A3_Structures_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"CamoNet_wdl_big_Curator_F", "CamoNet_wdl_big_F", "CamoNet_wdl_Curator_F", "CamoNet_wdl_F", "CamoNet_wdl_open_Curator_F", "CamoNet_wdl_open_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military_Camps
	{
		addonRootClass = "A3_Structures_F_Enoch_Military";
		requiredAddons[] = {"A3_Structures_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"CargoPlaftorm_01_brown_F", "CargoPlaftorm_01_brown_ruins_F", "CargoPlaftorm_01_green_F", "CargoPlaftorm_01_green_ruins_F", "CargoPlaftorm_01_jungle_F", "CargoPlaftorm_01_jungle_ruins_F", "CargoPlaftorm_01_rusty_F", "CargoPlaftorm_01_rusty_ruins_F", "Land_CargoPlaftorm_01_ruins_F", "Land_ConnectorTent_01_AAF_closed_F", "Land_ConnectorTent_01_AAF_cross_F", "Land_ConnectorTent_01_AAF_open_F", "Land_ConnectorTent_01_CSAT_brownhex_closed_F", "Land_ConnectorTent_01_CSAT_brownhex_cross_F", "Land_ConnectorTent_01_CSAT_brownhex_open_F", "Land_ConnectorTent_01_CSAT_greenhex_closed_F", "Land_ConnectorTent_01_CSAT_greenhex_cross_F", "Land_ConnectorTent_01_CSAT_greenhex_open_F", "Land_ConnectorTent_01_floor_dark_F", "Land_ConnectorTent_01_floor_light_F", "Land_ConnectorTent_01_NATO_closed_F", "Land_ConnectorTent_01_NATO_cross_F", "Land_ConnectorTent_01_NATO_open_F", "Land_ConnectorTent_01_NATO_tropic_closed_F", "Land_ConnectorTent_01_NATO_tropic_cross_F", "Land_ConnectorTent_01_NATO_tropic_open_F", "Land_ConnectorTent_01_wdl_closed_F", "Land_ConnectorTent_01_wdl_cross_F", "Land_ConnectorTent_01_wdl_open_F", "Land_ConnectorTent_01_white_closed_F", "Land_ConnectorTent_01_white_cross_F", "Land_ConnectorTent_01_white_open_F", "Land_DeconTent_01_AAF_F", "Land_DeconTent_01_CSAT_brownhex_F", "Land_DeconTent_01_CSAT_greenhex_F", "Land_DeconTent_01_IDAP_F", "Land_DeconTent_01_NATO_F", "Land_DeconTent_01_NATO_tropic_F", "Land_DeconTent_01_wdl_F", "Land_DeconTent_01_white_F", "Land_DeconTent_01_yellow_F", "Land_MedicalTent_01_aaf_generic_closed_F", "Land_MedicalTent_01_aaf_generic_inner_F", "Land_MedicalTent_01_aaf_generic_open_F", "Land_MedicalTent_01_aaf_generic_outer_F", "Land_MedicalTent_01_CSAT_brownhex_generic_closed_F", "Land_MedicalTent_01_CSAT_brownhex_generic_inner_F", "Land_MedicalTent_01_CSAT_brownhex_generic_open_F", "Land_MedicalTent_01_CSAT_brownhex_generic_outer_F", "Land_MedicalTent_01_CSAT_greenhex_generic_closed_F", "Land_MedicalTent_01_CSAT_greenhex_generic_inner_F", "Land_MedicalTent_01_CSAT_greenhex_generic_open_F", "Land_MedicalTent_01_CSAT_greenhex_generic_outer_F", "Land_MedicalTent_01_NATO_generic_closed_F", "Land_MedicalTent_01_NATO_generic_inner_F", "Land_MedicalTent_01_NATO_generic_open_F", "Land_MedicalTent_01_NATO_generic_outer_F", "Land_MedicalTent_01_NATO_tropic_generic_closed_F", "Land_MedicalTent_01_NATO_tropic_generic_inner_F", "Land_MedicalTent_01_NATO_tropic_generic_open_F", "Land_MedicalTent_01_NATO_tropic_generic_outer_F", "Land_MedicalTent_01_wdl_closed_F", "Land_MedicalTent_01_wdl_generic_closed_F", "Land_MedicalTent_01_wdl_generic_inner_F", "Land_MedicalTent_01_wdl_generic_open_F", "Land_MedicalTent_01_wdl_generic_outer_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military_Domes
	{
		addonRootClass = "A3_Structures_F_Enoch_Military";
		requiredAddons[] = {"A3_Structures_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Dome_Small_WIP2_F", "Land_Dome_Small_WIP_F", "Land_DomeParts_01_panel_white_F", "Land_DomeParts_01_panel_white_stack_F", "Land_DomeParts_01_struts_stack_F", "Land_DomeParts_01_white_openstack_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military_Flags
	{
		addonRootClass = "A3_Structures_F_Enoch_Military";
		requiredAddons[] = {"A3_Structures_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Banner_01_EAF_F", "Flag_EAF_F", "Flag_Enoch_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military_Radar
	{
		addonRootClass = "A3_Structures_F_Enoch_Military";
		requiredAddons[] = {"A3_Structures_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_MobileRadar_01_generator_F", "Land_MobileRadar_01_radar_F", "Land_MobileRadar_01_radar_ruins_F", "Land_Radar_01_airshaft_F", "Land_Radar_01_antenna_base_F", "Land_Radar_01_antenna_F", "Land_Radar_01_cooler_F", "Land_Radar_01_HQ_F", "Land_Radar_01_HQ_ruins_F", "Land_Radar_01_kitchen_F", "Land_Radar_01_kitchen_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Military_Training
	{
		addonRootClass = "A3_Structures_F_Enoch_Military";
		requiredAddons[] = {"A3_Structures_F_Enoch_Military"};
		requiredVersion = 0.1;
		units[] = {"CraterLong_02_F", "CraterLong_02_small_F", "Land_DisturbedSoil_01_decal_F", "Land_DisturbedSoil_02_decal_F", "Land_DisturbedSoil_base_F", "Land_ShellCrater_01_decal_F", "Land_ShellCrater_01_F", "Land_ShellCrater_02_debris_F", "Land_ShellCrater_02_decal_F", "Land_ShellCrater_02_extralarge_F", "Land_ShellCrater_02_large_F", "Land_ShellCrater_02_small_F", "Land_ShootingPos_Roof_01_F", "Land_Target_Concrete_01_v1_F", "Land_Target_Concrete_01_v2_F", "Land_Target_Concrete_Support_01_F", "Land_Target_Line_01_F", "Land_Target_Line_PaperTargets_01_F", "Land_Target_Pistol_01_F", "Land_Target_Single_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Ruins
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Land_ChurchRuin_01_F", "Land_HouseChimney_Ruin_01_F", "Land_HouseRuin_Big_01_F", "Land_HouseRuin_Big_01_half_F", "Land_HouseRuin_Big_02_F", "Land_HouseRuin_Big_02_half_F", "Land_HouseRuin_Big_03_F", "Land_HouseRuin_Big_03_half_F", "Land_HouseRuin_Big_04_F", "Land_HouseRuin_Big_05_F", "Land_HouseRuin_Small_01_F", "Land_HouseRuin_Small_01_half_F", "Land_HouseRuin_Small_02_F", "Land_HouseRuin_Small_03_F", "Land_HouseRuin_Small_04_F", "Land_HouseWallRuin_Corner_01_F", "Land_HouseWallRuin_Corner_02_F", "Land_HouseWallRuin_Door_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Signs
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Signs_City
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Signs"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Signs_Companies
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Signs"};
		requiredVersion = 0.1;
		units[] = {"Land_OldFactorySign_01_F", "Land_OldFactorySign_01_graffiti_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Signs_Directions
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Signs"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Signs_Traffic
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Signs"};
		requiredVersion = 0.1;
		units[] = {"Land_VergePost_02_v1_F", "Land_VergePost_02_v2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Signs_Warnings
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Signs"};
		requiredVersion = 0.1;
		units[] = {"Land_sign_entry_en_pl_F", "Land_sign_leave_en_pl_F", "Land_Sign_noentry_big_en_pl_F", "Land_sign_noentry_small_en_pl_F", "Land_sign_uwaga_pl_1_F", "Land_sign_uwaga_pl_2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_VR_Helpers
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Reflector_Cone_01_blue_F", "Reflector_Cone_01_green_F", "Reflector_Cone_01_Long_blue_F", "Reflector_Cone_01_Long_green_F", "Reflector_Cone_01_Long_orange_F", "Reflector_Cone_01_Long_red_F", "Reflector_Cone_01_Long_white_F", "Reflector_Cone_01_narrow_blue_F", "Reflector_Cone_01_narrow_green_F", "Reflector_Cone_01_narrow_orange_F", "Reflector_Cone_01_narrow_red_F", "Reflector_Cone_01_narrow_white_F", "Reflector_Cone_01_orange_F", "Reflector_Cone_01_red_F", "Reflector_Cone_01_white_F", "Reflector_Cone_01_wide_blue_F", "Reflector_Cone_01_wide_green_F", "Reflector_Cone_01_wide_orange_F", "Reflector_Cone_01_wide_red_F", "Reflector_Cone_01_wide_white_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Walls
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Walls_Brick
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_BrickWall_01_l_5m_d_F", "Land_BrickWall_01_l_5m_F", "Land_BrickWall_01_l_corner_F", "Land_BrickWall_01_l_end_F", "Land_BrickWall_01_l_pole_F", "Land_BrickWall_02_l_5m_d_F", "Land_BrickWall_02_l_5m_F", "Land_BrickWall_02_l_corner_v1_F", "Land_BrickWall_02_l_corner_v2_F", "Land_BrickWall_02_l_end_F", "Land_BrickWall_03_l_5m_v1_d_F", "Land_BrickWall_03_l_5m_v1_F", "Land_BrickWall_03_l_5m_v2_d_F", "Land_BrickWall_03_l_5m_v2_F", "Land_BrickWall_03_l_gate_F", "Land_BrickWall_03_l_pole_F", "Land_BrickWall_04_l_5m_d_F", "Land_BrickWall_04_l_5m_F", "Land_BrickWall_04_l_5m_old_d_F", "Land_BrickWall_04_l_5m_old_F", "Land_BrickWall_04_l_pole_F", "Land_BrickWall_04_l_pole_old_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Walls_Concrete
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_CamoConcreteWall_01_l_4m_d_v1_F", "Land_CamoConcreteWall_01_l_4m_d_v2_F", "Land_CamoConcreteWall_01_l_4m_v1_F", "Land_CamoConcreteWall_01_l_4m_v2_F", "Land_CamoConcreteWall_01_l_end_v1_F", "Land_CamoConcreteWall_01_pole_v1_F", "Land_ConcreteWall_03_m_2m_F", "Land_ConcreteWall_03_m_6m_F", "Land_ConcreteWall_03_m_pole_F", "Land_SilageWall_01_l_5m_F", "Land_SilageWall_01_l_d_F", "Land_SilageWall_01_l_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Walls_Net
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_GameProofFence_01_l_5m_F", "Land_GameProofFence_01_l_d_F", "Land_GameProofFence_01_l_gate_F", "Land_GameProofFence_01_l_pole_F", "Land_NetFence_03_m_3m_corner_F", "Land_NetFence_03_m_3m_d_F", "Land_NetFence_03_m_3m_F", "Land_NetFence_03_m_3m_hole_F", "Land_NetFence_03_m_9m_F", "Land_NetFence_03_m_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Walls_Pipe
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_PipeFence_03_m_gate_l_F", "Land_PipeFence_03_m_gate_r_F", "Land_PipeFence_04_m_gate_l_F", "Land_PipeFence_04_m_gate_r_F", "Land_PipeFence_05_m_gate_l_F", "Land_PipeFence_05_m_gate_r_F", "Land_PipeFence_06_m_gate_l_F", "Land_PipeFence_06_m_gate_r_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Walls_Polewalls
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_PoleWall_02_3m_v1_F", "Land_PoleWall_02_3m_v2_F", "Land_PoleWall_02_end_F", "Land_PoleWall_03_5m_v1_F", "Land_PoleWall_03_5m_v2_F", "Land_PoleWall_03_end_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Walls_Stone
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_Mound03_8m_F", "Land_Mound04_8m_F", "Land_StoneWall_02_s_10m_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Walls_Wooden
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_WoodenWall_03_s_5m_v1_F", "Land_WoodenWall_03_s_5m_v2_F", "Land_WoodenWall_03_s_d_5m_v1_F", "Land_WoodenWall_03_s_d_5m_v2_F", "Land_WoodenWall_03_s_d_pole_F", "Land_WoodenWall_03_s_gate_F", "Land_WoodenWall_03_s_pole_F", "Land_WoodenWall_04_s_5m_F", "Land_WoodenWall_04_s_d_5m_F", "Land_WoodenWall_04_s_end_v1_F", "Land_WoodenWall_04_s_end_v2_F", "Land_WoodenWall_04_s_gate_F", "Land_WoodenWall_04_s_pole_F", "Land_WoodenWall_05_m_4m_v1_F", "Land_WoodenWall_05_m_4m_v2_F", "Land_WoodenWall_05_m_d_4m_F", "Land_WoodenWall_05_m_end_F", "Land_WoodenWall_05_m_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Enoch_Wrecks
	{
		addonRootClass = "A3_Structures_F_Enoch";
		requiredAddons[] = {"A3_Structures_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Land_Mi8_wreck_F", "Land_PowerGenerator_wreck_F", "Land_TrailerCistern_wreck_F", "Land_V3S_wreck_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Buildings and Structures";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_EPA_Civ_Camping
	{
		addonRootClass = "A3_Structures_F_EPA";
		requiredAddons[] = {"A3_Structures_F_Civ_Camping", "A3_Structures_F_EPA"};
		requiredVersion = 0.1;
		units[] = {"Land_WoodenLog_F", "Land_WoodenTable_large_F", "Land_WoodenTable_small_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPA_Civ_Constructions
	{
		addonRootClass = "A3_Structures_F_EPA";
		requiredAddons[] = {"A3_Structures_F_Civ_Constructions", "A3_Structures_F_Civ_Lamps", "A3_Structures_F_EPA"};
		requiredVersion = 0.1;
		units[] = {"Land_Pallets_stack_F", "Land_PortableLight_double_F", "Land_PortableLight_single_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPA_Items_Electronics
	{
		addonRootClass = "A3_Structures_F_EPA";
		requiredAddons[] = {"A3_Structures_F_EPA", "A3_Structures_F_Items_Electronics"};
		requiredVersion = 0.1;
		units[] = {"Land_Battery_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPA_Items_Food
	{
		addonRootClass = "A3_Structures_F_EPA";
		requiredAddons[] = {"A3_Structures_F_EPA", "A3_Structures_F_Items_Food"};
		requiredVersion = 0.1;
		units[] = {"Land_BakedBeans_F", "Land_BottlePlastic_V2_F", "Land_Canteen_F", "Land_CerealsBox_F", "Land_PowderedMilk_F", "Land_RiceBox_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPA_Items_Medical
	{
		addonRootClass = "A3_Structures_F_EPA";
		requiredAddons[] = {"A3_Structures_F_EPA", "A3_Structures_F_Items_Medical"};
		requiredVersion = 0.1;
		units[] = {"Land_Antibiotic_F", "Land_Bandage_F", "Land_BloodBag_F", "Land_Defibrillator_F", "Land_DisinfectantSpray_F", "Land_HeatPack_F", "Land_PainKillers_F", "Land_VitaminBottle_F", "Land_WaterPurificationTablets_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPA_Items_Tools
	{
		addonRootClass = "A3_Structures_F_EPA";
		requiredAddons[] = {"A3_Structures_F_EPA", "A3_Structures_F_Items_Tools"};
		requiredVersion = 0.1;
		units[] = {"Land_ButaneCanister_F", "Land_ButaneTorch_F", "Land_CanOpener_F", "Land_DuctTape_F", "Land_FireExtinguisher_F", "Land_GasCanister_F", "Land_GasCooker_F", "Land_Matches_F", "Land_MetalWire_F", "Land_Shovel_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPA_Items_Vessels
	{
		addonRootClass = "A3_Structures_F_EPA";
		requiredAddons[] = {"A3_Structures_F_EPA", "A3_Structures_F_Items_Vessels"};
		requiredVersion = 0.1;
		units[] = {"Land_TinContainer_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPA_Mil_Scrapyard
	{
		addonRootClass = "A3_Structures_F_EPA";
		requiredAddons[] = {"A3_Structures_F_EPA", "A3_Structures_F_Mil_Scrapyard"};
		requiredVersion = 0.1;
		units[] = {"Land_Pallet_MilBoxes_F", "Land_PaperBox_closed_F", "Land_PaperBox_closed_scripted_F", "Land_PaperBox_open_empty_F", "Land_PaperBox_open_empty_scripted_F", "Land_PaperBox_open_full_F", "Land_PaperBox_open_full_scripted_F", "Land_Scrap_MRAP_01_F", "Land_ScrapHeap_1_F", "Land_ScrapHeap_2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPA_Walls
	{
		addonRootClass = "A3_Structures_F_EPA";
		requiredAddons[] = {"A3_Structures_F_EPA", "A3_Structures_F_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_InvisibleBarrier_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Buildings and Structures";
		requiredAddons[] = {"A3_Structures_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Civ_Accessories
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_Civ_Accessories", "A3_Structures_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"Land_PhoneBooth_01_F", "Land_PhoneBooth_02_F", "Land_WoodPile_large_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Civ_Camping
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_EPA_Civ_Camping", "A3_Structures_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"Land_Camping_Light_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Civ_Dead
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_Civ_Dead", "A3_Structures_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"Land_Grave_dirt_F", "Land_Grave_forest_F", "Land_Grave_rocks_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Civ_Garbage
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_Civ_Garbage", "A3_Structures_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"Land_GarbageContainer_closed_F", "Land_GarbageContainer_open_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Civ_Graffiti
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_Civ_Graffiti", "A3_Structures_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"Land_Graffiti_01_F", "Land_Graffiti_02_F", "Land_Graffiti_03_F", "Land_Graffiti_04_F", "Land_Graffiti_05_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Civ_PlayGround
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_Civ_PlayGround", "A3_Structures_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"Land_SlideCastle_F", "Land_SlideCastle_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Furniture
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_EPB", "A3_Structures_F_Furniture"};
		requiredVersion = 0.1;
		units[] = {"Land_ShelvesWooden_F", "Land_ShelvesWooden_khaki_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Items_Documents
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_EPB", "A3_Structures_F_Items_Documents"};
		requiredVersion = 0.1;
		units[] = {"Land_Leaflet_01_F", "Land_Leaflet_02_F", "Land_Leaflet_03_F", "Land_Leaflet_04_F", "Land_Map_altis_F", "Land_Map_blank_F", "Land_Map_stratis_F", "Land_Poster_01_F", "Land_Poster_02_F", "Land_Poster_03_F", "Land_Poster_04_F", "Land_Poster_05_F", "Land_Poster_06_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Items_Luggage
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_EPB", "A3_Structures_F_Items_Luggage"};
		requiredVersion = 0.1;
		units[] = {"Land_LuggageHeap_01_F", "Land_LuggageHeap_02_F", "Land_LuggageHeap_03_F", "Land_LuggageHeap_04_F", "Land_LuggageHeap_05_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Items_Military
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_EPB", "A3_Structures_F_Items_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Ammobox_rounds_F", "Land_Magazine_rifle_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Items_Vessels
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_EPA_Items_Vessels", "A3_Structures_F_EPB"};
		requiredVersion = 0.1;
		units[] = {"Land_BarrelEmpty_grey_F", "Land_BarrelSand_grey_F", "Land_BarrelTrash_grey_F", "Land_BarrelWater_grey_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPB_Naval_Fishing
	{
		addonRootClass = "A3_Structures_F_EPB";
		requiredAddons[] = {"A3_Structures_F_EPB", "A3_Structures_F_Naval_Fishing"};
		requiredVersion = 0.1;
		units[] = {"Land_CrabCages_F", "Land_FishingGear_01_F", "Land_FishingGear_02_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Buildings and Structures";
		requiredAddons[] = {"A3_Structures_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Civ_Accessories
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_EPB_Civ_Accessories", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_Atm_01_F", "Land_Atm_02_F", "Land_BeachBooth_01_F", "Land_Bench_01_F", "Land_Bench_02_F", "Land_LifeguardTower_01_F", "Land_TablePlastic_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Civ_Camping
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_EPB_Civ_Camping", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_Sunshade_01_F", "Land_Sunshade_02_F", "Land_Sunshade_03_F", "Land_Sunshade_04_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Civ_Garbage
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_EPB_Civ_Garbage", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_GarbageBarrel_01_F", "Land_GarbageBin_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Civ_InfoBoards
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_Civ_InfoBoards", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"MapBoard_seismic_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Civ_Kiosks
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_Civ_Kiosks", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_Kiosk_blueking_F", "Land_Kiosk_blueking_ruins_F", "Land_Kiosk_gyros_F", "Land_Kiosk_papers_F", "Land_Kiosk_redburger_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Civ_Playground
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_EPB_Civ_PlayGround", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_Carousel_01_F", "Land_Swing_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Civ_Tourism
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_Civ_Tourism", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_TouristShelter_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Dominants_GhostHotel
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_Dominants", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_GH_Gazebo_F", "Land_GH_Gazebo_ruins_F", "Land_GH_House_1_F", "Land_GH_House_2_F", "Land_GH_House_ruins_F", "Land_GH_MainBuilding_entry_F", "Land_GH_MainBuilding_left_F", "Land_GH_MainBuilding_middle_F", "Land_GH_MainBuilding_right_F", "Land_GH_Platform_F", "Land_GH_Pool_F", "Land_GH_Stairs_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Dominants_Stadium
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_Dominants", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_Stadium_p1_F", "Land_Stadium_p2_F", "Land_Stadium_p3_F", "Land_Stadium_p4_F", "Land_Stadium_p5_F", "Land_Stadium_p6_F", "Land_Stadium_p7_F", "Land_Stadium_p8_F", "Land_Stadium_p9_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Furniture
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_EPB_Furniture", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Items_Documents
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_EPB_Items_Documents", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_Document_01_F", "Land_File_research_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Items_Electronics
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_EPA_Items_Electronics", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_Device_assembled_F", "Land_Device_disassembled_F", "Land_Laptop_device_F"};
		weapons[] = {};
	};
	class A3_Structures_F_EPC_Walls
	{
		addonRootClass = "A3_Structures_F_EPC";
		requiredAddons[] = {"A3_Structures_F_EPA_Walls", "A3_Structures_F_EPC"};
		requiredVersion = 0.1;
		units[] = {"Land_SportGround_fence_noLC_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Exp_A_VR_Blocks
	{
		addonRootClass = "A3_Structures_F_Exp_A";
		requiredAddons[] = {"A3_Structures_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {"Land_VR_Slope_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_A_VR_Helpers
	{
		addonRootClass = "A3_Structures_F_Exp_A";
		requiredAddons[] = {"A3_Structures_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Civilian Buildings";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_Accessories
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Bench_03_F", "Land_Bench_04_F", "Land_Bench_05_F", "Land_ClothesLine_01_F", "Land_ClothesLine_01_full_F", "Land_ClothesLine_01_short_F", "Land_ConcreteBlock_01_F", "Land_FireEscape_01_short_F", "Land_FireEscape_01_tall_F", "Land_GarbageBin_02_F", "Land_PicnicTable_01_F", "Land_Plank_01_4m_F", "Land_Plank_01_8m_F", "Land_Pot_01_F", "Land_Pot_02_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_Garages
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_GarageShelter_01_F", "Land_GarageShelter_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Big_01
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Big_01_F", "Land_House_Big_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Big_02
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Big_02_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Big_03
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Big_03_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Big_04
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Big_04_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Big_05
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Big_05_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Native_01
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Native_01_F", "Land_House_Native_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Native_02
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Native_02_F", "Land_House_Native_02_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Small_01
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Small_01_F", "Land_House_Small_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Small_02
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Small_02_F", "Land_House_Small_02_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Small_03
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Small_03_F", "Land_House_Small_03_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Small_04
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Small_04_F", "Land_House_Small_04_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Small_05
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Small_05_F", "Land_House_Small_05_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_House_Small_06
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Small_06_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_School_01
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_School_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_Sheds
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Shed_01_F", "Land_Shed_01_ruins_F", "Land_Shed_02_F", "Land_Shed_02_ruins_F", "Land_Shed_03_F", "Land_Shed_03_ruins_F", "Land_Shed_04_F", "Land_Shed_04_ruins_F", "Land_Shed_05_F", "Land_Shed_05_ruins_F", "Land_Shed_06_F", "Land_Shed_06_ruins_F", "Land_Shed_07_F", "Land_Shed_07_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_Slum_01
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Slum_01_F", "Land_Slum_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_Slum_02
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Slum_02_F", "Land_Slum_02_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_Slum_03
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Slum_03_F", "Land_Slum_03_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_Slum_04
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Slum_04_F", "Land_Slum_04_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_Slum_05
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_Slum_05_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Civilian_SportsGrounds
	{
		addonRootClass = "A3_Structures_F_Exp_Civilian";
		requiredAddons[] = {"A3_Structures_F_Exp_Civilian"};
		requiredVersion = 0.1;
		units[] = {"Land_RugbyGoal_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Commercial Buildings";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Addons
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Addon_01_F", "Land_Addon_01_ruins_F", "Land_Addon_02_F", "Land_Addon_02_ruins_F", "Land_Addon_03_F", "Land_Addon_03_ruins_F", "Land_Addon_04_F", "Land_Addon_04_ruins_F", "Land_Addon_05_F", "Land_Addon_05_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Advertisements
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_SignMonolith_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_FuelStation_01
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_FuelStation_01_arrow_F", "Land_FuelStation_01_prices_F", "Land_FuelStation_01_pump_F", "Land_FuelStation_01_roof_F", "Land_FuelStation_01_shop_F", "Land_FuelStation_01_workshop_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_FuelStation_02
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_FuelStation_02_prices_F", "Land_FuelStation_02_pump_F", "Land_FuelStation_02_roof_F", "Land_FuelStation_02_sign_F", "Land_FuelStation_02_workshop_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Hotel_01
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Hotel_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Hotel_02
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Hotel_02_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Market
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_ClothShelter_01_F", "Land_ClothShelter_02_F", "Land_MetalShelter_01_F", "Land_MetalShelter_01_ruins_F", "Land_MetalShelter_02_F", "Land_MetalShelter_02_ruins_F", "Land_WoodenShelter_01_F", "Land_WoodenShelter_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_MultistoryBuilding_01
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_MultistoryBuilding_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_MultistoryBuilding_03
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_MultistoryBuilding_03_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_MultistoryBuilding_04
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_MultistoryBuilding_04_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_City_01
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_City_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_City_02
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_City_02_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_City_03
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_City_03_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_City_04
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_City_04_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_City_05
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_City_05_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_City_06
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_City_06_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_City_07
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_City_07_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_Town_01
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_Town_01_F", "Land_Shop_Town_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_Town_02
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_Town_02_F", "Land_Shop_Town_02_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_Town_03
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_Town_03_F", "Land_Shop_Town_03_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_Town_04
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_Town_04_F", "Land_Shop_Town_04_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Shop_Town_05
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Shop_Town_05_addon_F", "Land_Shop_Town_05_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Supermarket_01
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Supermarket_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Commercial_Warehouses
	{
		addonRootClass = "A3_Structures_F_Exp_Commercial";
		requiredAddons[] = {"A3_Structures_F_Exp_Commercial"};
		requiredVersion = 0.1;
		units[] = {"Land_Warehouse_03_F", "Land_Warehouse_03_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Cultural Buildings";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_AncientRelics
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_AncientHead_01_F", "Land_AncientStatue_01_F", "Land_AncientStatue_02_F", "Land_PetroglyphWall_01_F", "Land_PetroglyphWall_02_F", "Land_RaiStone_01_F", "Land_StoneTanoa_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_BasaltRuins
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_BasaltKerb_01_2m_d_F", "Land_BasaltKerb_01_2m_F", "Land_BasaltKerb_01_4m_F", "Land_BasaltKerb_01_pile_F", "Land_BasaltKerb_01_platform_F", "Land_BasaltWall_01_4m_F", "Land_BasaltWall_01_8m_F", "Land_BasaltWall_01_d_left_F", "Land_BasaltWall_01_d_right_F", "Land_BasaltWall_01_gate_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_Cathedral_01
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Cathedral_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_Cemeteries
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Grave_01_F", "Land_Grave_02_F", "Land_Grave_03_F", "Land_Grave_04_F", "Land_Grave_05_F", "Land_Grave_06_F", "Land_Grave_07_F", "Land_Mausoleum_01_F", "Land_Mausoleum_01_ruins_F", "Land_Tomb_01_F", "Land_Tombstone_01_F", "Land_Tombstone_02_F", "Land_Tombstone_03_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_Church_01
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Church_01_F", "Land_Church_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_Church_02
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Church_02_F", "Land_Church_02_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_Church_03
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Church_03_F", "Land_Church_03_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_Fortress_01
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Fortress_01_10m_F", "Land_Fortress_01_5m_F", "Land_Fortress_01_bricks_v1_F", "Land_Fortress_01_bricks_v2_F", "Land_Fortress_01_cannon_F", "Land_Fortress_01_d_L_F", "Land_Fortress_01_d_R_F", "Land_Fortress_01_innerCorner_110_F", "Land_Fortress_01_innerCorner_70_F", "Land_Fortress_01_innerCorner_90_F", "Land_Fortress_01_outterCorner_50_F", "Land_Fortress_01_outterCorner_80_F", "Land_Fortress_01_outterCorner_90_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_Temple_Native_01
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_Temple_Native_01_F", "Land_Temple_Native_01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Cultural_Totems
	{
		addonRootClass = "A3_Structures_F_Exp_Cultural";
		requiredAddons[] = {"A3_Structures_F_Exp_Cultural"};
		requiredVersion = 0.1;
		units[] = {"Land_PalmTotem_01_F", "Land_PalmTotem_02_F", "Land_PalmTotem_03_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Buildings and Structures Shared Files";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Industrial
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Industrial Structures";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Industrial_DieselPowerPlant_01
	{
		addonRootClass = "A3_Structures_F_Exp_Industrial";
		requiredAddons[] = {"A3_Structures_F_Exp_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_DPP_01_mainFactory_F", "Land_DPP_01_smallFactory_F", "Land_DPP_01_transformer_F", "Land_DPP_01_waterCooler_F", "Land_DPP_01_waterCooler_ladder_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Industrial_Fields
	{
		addonRootClass = "A3_Structures_F_Exp_Industrial";
		requiredAddons[] = {"A3_Structures_F_Exp_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_ConcreteWell_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Industrial_Materials
	{
		addonRootClass = "A3_Structures_F_Exp_Industrial";
		requiredAddons[] = {"A3_Structures_F_Exp_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_CinderBlocks_01_F", "Land_TimberPile_01_F", "Land_WoodenPlanks_01_F", "Land_WoodenPlanks_01_messy_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Industrial_Port
	{
		addonRootClass = "A3_Structures_F_Exp_Industrial";
		requiredAddons[] = {"A3_Structures_F_Exp_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_ContainerCrane_01_arm_F", "Land_ContainerCrane_01_arm_lowered_F", "Land_ContainerCrane_01_F", "Land_ContainerLine_01_F", "Land_ContainerLine_02_F", "Land_ContainerLine_03_F", "Land_CraneRail_01_F", "Land_DryDock_01_end_F", "Land_DryDock_01_middle_F", "Land_GantryCrane_01_F", "Land_GuardHouse_01_F", "Land_MobileCrane_01_F", "Land_MobileCrane_01_hook_F", "Land_StorageTank_01_large_F", "Land_StorageTank_01_small_F", "Land_Walkover_01_F", "Land_Warehouse_01_F", "Land_Warehouse_01_ladder_F", "Land_Warehouse_02_F", "Land_Warehouse_02_ladder_F", "Land_WarehouseShelter_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Industrial_Stockyard_01
	{
		addonRootClass = "A3_Structures_F_Exp_Industrial";
		requiredAddons[] = {"A3_Structures_F_Exp_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_SY_01_block_F", "Land_SY_01_conveyor_chute_F", "Land_SY_01_conveyor_end_F", "Land_SY_01_conveyor_junction_F", "Land_SY_01_conveyor_long_F", "Land_SY_01_conveyor_reclaimer_F", "Land_SY_01_conveyor_short_F", "Land_SY_01_conveyor_slope_F", "Land_SY_01_crusher_F", "Land_SY_01_reclaimer_F", "Land_SY_01_shiploader_arm_F", "Land_SY_01_shiploader_F", "Land_SY_01_stockpile_01_F", "Land_SY_01_stockpile_02_F", "Land_SY_01_tripper_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Industrial_SugarCaneFactory_01
	{
		addonRootClass = "A3_Structures_F_Exp_Industrial";
		requiredAddons[] = {"A3_Structures_F_Exp_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_SCF_01_boilerBuilding_F", "Land_SCF_01_chimney_F", "Land_SCF_01_clarifier_F", "Land_SCF_01_condenser_F", "Land_SCF_01_conveyor_16m_high_F", "Land_SCF_01_conveyor_16m_slope_F", "Land_SCF_01_conveyor_8m_high_F", "Land_SCF_01_conveyor_columnBase_F", "Land_SCF_01_conveyor_end_high_F", "Land_SCF_01_conveyor_hole_F", "Land_SCF_01_crystallizer_F", "Land_SCF_01_crystallizerTowers_F", "Land_SCF_01_diffuser_F", "Land_SCF_01_feeder_F", "Land_SCF_01_generalBuilding_F", "Land_SCF_01_heap_bagasse_F", "Land_SCF_01_heap_sugarcane_F", "Land_SCF_01_pipe_24m_F", "Land_SCF_01_pipe_24m_high_F", "Land_SCF_01_pipe_8m_F", "Land_SCF_01_pipe_8m_high_F", "Land_SCF_01_pipe_curve_F", "Land_SCF_01_pipe_curve_high_F", "Land_SCF_01_pipe_end_F", "Land_SCF_01_pipe_up_F", "Land_SCF_01_shed_F", "Land_SCF_01_shredder_F", "Land_SCF_01_storageBin_big_F", "Land_SCF_01_storageBin_medium_F", "Land_SCF_01_storageBin_small_F", "Land_SCF_01_warehouse_F", "Land_SCF_01_washer_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Industrial_SurfaceMine_01
	{
		addonRootClass = "A3_Structures_F_Exp_Industrial";
		requiredAddons[] = {"A3_Structures_F_Exp_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_SM_01_reservoirTower_F", "Land_SM_01_shed_F", "Land_SM_01_shed_unfinished_F", "Land_SM_01_shelter_narrow_F", "Land_SM_01_shelter_wide_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Infrastructure
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Infrastructure Objects";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Infrastructure_Airports
	{
		addonRootClass = "A3_Structures_F_Exp_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_Airport_01_controlTower_F", "Land_Airport_01_hangar_F", "Land_Airport_01_terminal_F", "Land_Airport_02_controlTower_F", "Land_Airport_02_hangar_left_F", "Land_Airport_02_hangar_right_F", "Land_Airport_02_sign_aeroport_F", "Land_Airport_02_sign_arrivees_F", "Land_Airport_02_sign_de_F", "Land_Airport_02_sign_departs_F", "Land_Airport_02_sign_tanoa_F", "Land_Airport_02_terminal_F", "Land_AirstripPlatform_01_F", "Land_AirstripPlatform_01_footer_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Infrastructure_Bridges
	{
		addonRootClass = "A3_Structures_F_Exp_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_BridgeSea_01_pillar_F", "Land_BridgeWooden_01_pillar_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Infrastructure_Pavements
	{
		addonRootClass = "A3_Structures_F_Exp_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_ConcreteKerb_01_2m_F", "Land_ConcreteKerb_01_4m_F", "Land_ConcreteKerb_01_8m_F", "Land_ConcreteKerb_02_1m_F", "Land_ConcreteKerb_02_2m_F", "Land_ConcreteKerb_02_4m_F", "Land_ConcreteKerb_02_8m_F", "Land_ConcreteKerb_03_BW_long_F", "Land_ConcreteKerb_03_BW_short_F", "Land_ConcreteKerb_03_BY_long_F", "Land_ConcreteKerb_03_BY_short_F", "Land_GardenPavement_01_F", "Land_GardenPavement_02_F", "Land_KerbIsland_01_end_F", "Land_KerbIsland_01_start_F", "Land_Sidewalk_01_4m_F", "Land_Sidewalk_01_8m_F", "Land_Sidewalk_01_corner_F", "Land_Sidewalk_01_narrow_2m_F", "Land_Sidewalk_01_narrow_4m_F", "Land_Sidewalk_01_narrow_8m_F", "Land_Sidewalk_02_4m_F", "Land_Sidewalk_02_8m_F", "Land_Sidewalk_02_corner_F", "Land_Sidewalk_02_narrow_2m_F", "Land_Sidewalk_02_narrow_4m_F", "Land_Sidewalk_02_narrow_8m_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Infrastructure_Powerlines
	{
		addonRootClass = "A3_Structures_F_Exp_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_PowerLine_01_pole_end_v1_F", "Land_PowerLine_01_pole_end_v2_F", "Land_PowerLine_01_pole_junction_F", "Land_PowerLine_01_pole_lamp_F", "Land_PowerLine_01_pole_lamp_off_F", "Land_PowerLine_01_pole_small_F", "Land_PowerLine_01_pole_tall_F", "Land_PowerLine_01_pole_transformer_F", "Land_PowerLine_01_wire_50m_F", "Land_PowerLine_01_wire_50m_main_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Infrastructure_Railways
	{
		addonRootClass = "A3_Structures_F_Exp_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_Track_01_10m_F", "Land_Track_01_15deg_F", "Land_Track_01_20m_F", "Land_Track_01_30deg_F", "Land_Track_01_3m_F", "Land_Track_01_7deg_F", "Land_Track_01_bridge_F", "Land_Track_01_bumper_F", "Land_Track_01_crossing_F", "Land_Track_01_switch_F", "Land_Track_01_turnout_left_F", "Land_Track_01_turnout_right_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Infrastructure_Roads
	{
		addonRootClass = "A3_Structures_F_Exp_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_SewerCover_01_F", "Land_SewerCover_02_F", "Land_SewerCover_03_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Infrastructure_Runways
	{
		addonRootClass = "A3_Structures_F_Exp_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_NavigLight_3_short_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Infrastructure_WaterSupply
	{
		addonRootClass = "A3_Structures_F_Exp_Infrastructure";
		requiredAddons[] = {"A3_Structures_F_Exp_Infrastructure"};
		requiredVersion = 0.1;
		units[] = {"Land_WaterTank_01_F", "Land_WaterTank_02_F", "Land_WaterTank_03_F", "Land_WaterTank_04_F", "Land_WaterTower_01_F", "Land_WaterTower_01_ruins_F", "Land_WindmillPump_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Military
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Military_Barracks_01
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Barracks_01_camo_F", "Land_Barracks_01_dilapidated_F", "Land_Barracks_01_grey_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Military_Camonets
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"CamoNet_ghex_big_Curator_F", "CamoNet_ghex_big_F", "CamoNet_ghex_Curator_F", "CamoNet_ghex_F", "CamoNet_ghex_open_Curator_F", "CamoNet_ghex_open_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Military_ContainerBases
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo_House_V4_F", "Land_Cargo_House_V4_ruins_F", "Land_Cargo_HQ_V4_F", "Land_Cargo_HQ_V4_ruins_F", "Land_Cargo_Patrol_V4_F", "Land_Cargo_Patrol_V4_ruins_F", "Land_Cargo_Tower_V4_F", "Land_Cargo_Tower_V4_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Military_Emplacements
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_EmplacementGun_01_d_mossy_F", "Land_EmplacementGun_01_d_rusty_F", "Land_EmplacementGun_01_mossy_F", "Land_EmplacementGun_01_rusty_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Military_Flags
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"Flag_CTRG_F", "Flag_Gendarmerie_F", "Flag_HorizonIslands_F", "Flag_Syndikat_F", "Flag_Viper_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Military_Fortifications
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_BagBunker_01_large_green_F", "Land_BagBunker_01_small_green_F", "Land_BagFence_01_corner_green_F", "Land_BagFence_01_end_green_F", "Land_BagFence_01_long_green_F", "Land_BagFence_01_round_green_F", "Land_BagFence_01_short_green_F", "Land_HBarrier_01_big_4_green_F", "Land_HBarrier_01_big_tower_green_F", "Land_HBarrier_01_line_1_green_F", "Land_HBarrier_01_line_3_green_F", "Land_HBarrier_01_line_5_green_F", "Land_HBarrier_01_tower_green_F", "Land_HBarrier_01_wall_4_green_F", "Land_HBarrier_01_wall_6_green_F", "Land_HBarrier_01_wall_corner_green_F", "Land_HBarrier_01_wall_corridor_green_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Military_Pillboxes
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_PillboxBunker_01_big_F", "Land_PillboxBunker_01_hex_F", "Land_PillboxBunker_01_rectangle_F", "Land_PillboxWall_01_3m_F", "Land_PillboxWall_01_3m_round_F", "Land_PillboxWall_01_6m_F", "Land_PillboxWall_01_6m_round_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Military_Trenches
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_Trench_01_forest_F", "Land_Trench_01_grass_F", "Land_TrenchFrame_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Naval
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Naval_Canals
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Naval"};
		requiredVersion = 0.1;
		units[] = {"Land_Canal_Dutch_01_15m_F", "Land_Canal_Dutch_01_bridge_F", "Land_Canal_Dutch_01_corner_F", "Land_Canal_Dutch_01_plate_F", "Land_Canal_Dutch_01_stairs_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Naval_Piers
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Naval"};
		requiredVersion = 0.1;
		units[] = {"Land_Breakwater_01_F", "Land_Breakwater_02_F", "Land_PierConcrete_01_16m_F", "Land_PierConcrete_01_30deg_F", "Land_PierConcrete_01_4m_ladders_F", "Land_PierConcrete_01_end_F", "Land_PierConcrete_01_steps_F", "Land_PierWooden_01_10m_noRails_F", "Land_PierWooden_01_16m_F", "Land_PierWooden_01_dock_F", "Land_PierWooden_01_hut_F", "Land_PierWooden_01_ladder_F", "Land_PierWooden_01_platform_F", "Land_PierWooden_02_16m_F", "Land_PierWooden_02_30deg_F", "Land_PierWooden_02_barrel_F", "Land_PierWooden_02_hut_F", "Land_PierWooden_02_ladder_F", "Land_PierWooden_03_F", "Land_QuayConcrete_01_20m_F", "Land_QuayConcrete_01_20m_wall_F", "Land_QuayConcrete_01_5m_ladder_F", "Land_QuayConcrete_01_innerCorner_F", "Land_QuayConcrete_01_outterCorner_F", "Land_QuayConcrete_01_pier_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Signs
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Signs_Companies
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Signs"};
		requiredVersion = 0.1;
		units[] = {"Land_AttachedSign_01_v1_F", "Land_AttachedSign_01_v2_F", "Land_AttachedSign_01_v3_F", "Land_AttachedSign_01_v4_F", "Land_AttachedSign_02_v1_F", "Land_AttachedSign_02_v2_F", "Land_AttachedSign_02_v3_F", "Land_AttachedSign_02_v4_F", "Land_AttachedSign_03_v1_F", "Land_AttachedSign_03_v2_F", "Land_Billboard_01_v1_F", "Land_Billboard_01_v2_F", "Land_Billboard_02_v1_F", "Land_Billboard_02_v2_F", "Land_CornerAds_01_v1_F", "Land_CornerAds_01_v2_F", "Land_CornerAds_01_v3_F", "Land_CornerAds_01_v4_F", "Land_CornerAds_02_v1_F", "Land_CornerAds_02_v2_F", "Land_CorporateSign_01_mine_F", "Land_CorporateSign_01_scf_F", "Land_CorporateSign_02_airport_F", "Land_CorporateSign_02_harbor_F", "Land_CorporateSign_03_ranch_F", "Land_SignWarning_02_crocodiles_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Signs_Traffic
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Signs"};
		requiredVersion = 0.1;
		units[] = {"Land_Bollard_01_F", "Land_ParkingMeter_01_F", "Land_Sign_01_sharpBend_left_F", "Land_Sign_01_sharpBend_right_F", "Land_SignCommand_01_giveWay_F", "Land_SignCommand_01_goStraight_F", "Land_SignCommand_01_priority_F", "Land_SignCommand_01_stop_F", "Land_SignCommand_01_turnLeft_F", "Land_SignCommand_01_turnLeftAhead_F", "Land_SignCommand_01_turnRight_F", "Land_SignCommand_01_turnRightAhead_F", "Land_SignInfo_01_deadEnd_F", "Land_SignInfo_01_firstAid_F", "Land_SignInfo_01_fuelStation_F", "Land_SignInfo_01_hotel_F", "Land_SignInfo_01_pedestrianCrossing_F", "Land_SignInfo_01_pedestrianZone_F", "Land_SignInfo_01_picnicSite_F", "Land_SignInfo_01_reduceSpeed_F", "Land_SignInfo_01_refreshments_F", "Land_SignInfo_01_restaurant_F", "Land_SignInfo_01_taxi_F", "Land_SignInfo_01_toilet_F", "Land_SignRestrict_01_noDriving_F", "Land_SignRestrict_01_noEntry_F", "Land_SignRestrict_01_noOvertaking_F", "Land_SignRestrict_01_noOvertakingTruck_F", "Land_SignRestrict_01_noParking_F", "Land_SignRestrict_01_noParkingAltEven_F", "Land_SignRestrict_01_noParkingAltOdd_F", "Land_SignRestrict_01_noPassage_F", "Land_SignRestrict_01_noPollutingVehicles_F", "Land_SignRestrict_01_noPoweredVehicles_F", "Land_SignRestrict_01_noStopping_F", "Land_SignRestrict_01_speedLimit_30_F", "Land_SignRestrict_01_speedLimit_50_F", "Land_SignRestrict_01_speedLimit_70_F", "Land_SignRestrict_01_speedLimit_80_d_F", "Land_SignRestrict_01_speedLimit_80_F", "Land_SignRestrict_01_speedLimit_end_F", "Land_SignRestrict_01_speedLimit_national_F", "Land_SignWarning_01_aircrafts_F", "Land_SignWarning_01_animals_F", "Land_SignWarning_01_bend_left_F", "Land_SignWarning_01_bend_right_F", "Land_SignWarning_01_chippings_F", "Land_SignWarning_01_crossRoad_F", "Land_SignWarning_01_doubleBend_left_F", "Land_SignWarning_01_doubleBend_right_F", "Land_SignWarning_01_herds_F", "Land_SignWarning_01_junction_F", "Land_SignWarning_01_junctionRoW_F", "Land_SignWarning_01_other_F", "Land_SignWarning_01_pedestrianCrossing_F", "Land_SignWarning_01_ramp_F", "Land_SignWarning_01_roadworks_F", "Land_SignWarning_01_rocks_F", "Land_SignWarning_01_steepDown_F", "Land_SignWarning_01_steepUp_F", "Land_SignWarning_01_stopOnRequest_F", "Land_SignWarning_01_unevenRoad_F", "Land_TownColumn_01_F", "Land_VergePost_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_BackAlleys
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_BackAlley_01_l_1m_F", "Land_BackAlley_01_l_gap_F", "Land_BackAlley_01_l_gate_F", "Land_BackAlley_02_l_1m_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Bamboo
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_BambooFence_01_s_4m_F", "Land_BambooFence_01_s_8m_F", "Land_BambooFence_01_s_d_F", "Land_BambooFence_01_s_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Concrete
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_ConcreteWall_01_l_4m_F", "Land_ConcreteWall_01_l_8m_F", "Land_ConcreteWall_01_l_d_F", "Land_ConcreteWall_01_l_gate_F", "Land_ConcreteWall_01_l_pole_F", "Land_ConcreteWall_01_m_4m_F", "Land_ConcreteWall_01_m_8m_F", "Land_ConcreteWall_01_m_d_F", "Land_ConcreteWall_01_m_gate_F", "Land_ConcreteWall_01_m_pole_F", "Land_ConcreteWall_02_m_2m_F", "Land_ConcreteWall_02_m_4m_F", "Land_ConcreteWall_02_m_8m_F", "Land_ConcreteWall_02_m_d_F", "Land_ConcreteWall_02_m_gate_F", "Land_ConcreteWall_02_m_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Crashbarriers
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_CrashBarrier_01_4m_F", "Land_CrashBarrier_01_8m_F", "Land_CrashBarrier_01_end_L_F", "Land_CrashBarrier_01_end_R_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Hedges
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_Hedge_01_s_2m_F", "Land_Hedge_01_s_4m_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Net
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_NetFence_01_m_4m_F", "Land_NetFence_01_m_4m_noLC_F", "Land_NetFence_01_m_8m_F", "Land_NetFence_01_m_8m_noLC_F", "Land_NetFence_01_m_d_F", "Land_NetFence_01_m_d_noLC_F", "Land_NetFence_01_m_gate_F", "Land_NetFence_01_m_pole_F", "Land_NetFence_02_m_2m_F", "Land_NetFence_02_m_4m_F", "Land_NetFence_02_m_8m_F", "Land_NetFence_02_m_d_F", "Land_NetFence_02_m_gate_v1_F", "Land_NetFence_02_m_gate_v2_F", "Land_NetFence_02_m_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Pipe
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_PipeFence_01_m_2m_F", "Land_PipeFence_01_m_4m_F", "Land_PipeFence_01_m_8m_F", "Land_PipeFence_01_m_d_F", "Land_PipeFence_01_m_gate_v1_F", "Land_PipeFence_01_m_gate_v2_F", "Land_PipeFence_01_m_pole_F", "Land_PipeFence_02_s_4m_F", "Land_PipeFence_02_s_4m_noLC_F", "Land_PipeFence_02_s_8m_F", "Land_PipeFence_02_s_8m_noLC_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Polewalls
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_PoleWall_01_3m_F", "Land_PoleWall_01_6m_F", "Land_PoleWall_01_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Railings
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_GuardRailing_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Slum
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_SlumWall_01_s_2m_F", "Land_SlumWall_01_s_4m_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Stone
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_StoneWall_01_s_10m_F", "Land_StoneWall_01_s_d_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Tin
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_TinWall_01_m_4m_v1_F", "Land_TinWall_01_m_4m_v2_F", "Land_TinWall_01_m_gate_v1_F", "Land_TinWall_01_m_gate_v2_F", "Land_TinWall_01_m_pole_F", "Land_TinWall_02_l_4m_F", "Land_TinWall_02_l_8m_F", "Land_TinWall_02_l_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Wired
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_WiredFence_01_16m_F", "Land_WiredFence_01_4m_F", "Land_WiredFence_01_8m_d_F", "Land_WiredFence_01_8m_F", "Land_WiredFence_01_gate_F", "Land_WiredFence_01_pole_45_F", "Land_WiredFence_01_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Exp_Walls_Wooden
	{
		addonRootClass = "A3_Structures_F_Exp";
		requiredAddons[] = {"A3_Structures_F_Exp_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_WoodenWall_01_m_4m_F", "Land_WoodenWall_01_m_8m_F", "Land_WoodenWall_01_m_d_F", "Land_WoodenWall_01_m_pole_F", "Land_WoodenWall_02_s_2m_F", "Land_WoodenWall_02_s_4m_F", "Land_WoodenWall_02_s_8m_F", "Land_WoodenWall_02_s_d_F", "Land_WoodenWall_02_s_gate_F", "Land_WoodenWall_02_s_pole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Furniture
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"Land_Bench_F", "Land_CashDesk_F", "Land_ChairPlastic_F", "Land_ChairWood_F", "Land_HeatPump_F", "Land_Icebox_F", "Land_Metal_rack_F", "Land_Metal_rack_Tall_F", "Land_Metal_wooden_rack_F", "Land_Rack_F", "Land_ShelvesMetal_F", "Land_ShelvesWooden_blue_F", "Land_TableDesk_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Civ_Accessories
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_AirconCondenser_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Civ_Constructions
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_GasTank_01_blue_F", "Land_GasTank_01_khaki_F", "Land_GasTank_01_yellow_F", "Land_GasTank_02_F", "Land_MobileScafolding_01_F", "Land_ToolTrolley_01_F", "Land_ToolTrolley_02_F", "Land_WeldingTrolley_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Civ_Garbage
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_WheelieBin_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Civ_Market
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_PalletTrolley_01_khaki_F", "Land_PalletTrolley_01_yellow_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Furniture
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_OfficeCabinet_01_F", "Land_OfficeChair_01_F", "Land_RattanChair_01_F", "Land_RattanTable_01_F", "Land_Workbench_01_F", "OfficeTable_01_new_F", "OfficeTable_01_old_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Ind_Airport
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_MobileLandingPlatform_01_F", "Windsock_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Ind_Cargo
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo10_blue_F", "Land_Cargo10_brick_red_F", "Land_Cargo10_cyan_F", "Land_Cargo10_grey_F", "Land_Cargo10_light_blue_F", "Land_Cargo10_light_green_F", "Land_Cargo10_military_green_F", "Land_Cargo10_orange_F", "Land_Cargo10_red_F", "Land_Cargo10_sand_F", "Land_Cargo10_white_F", "Land_Cargo10_yellow_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Ind_Machines
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_DieselGroundPowerUnit_01_F", "Land_EngineCrane_01_F", "Land_JetEngineStarter_01_F", "Land_PressureWasher_01_F", "WaterPump_01_forest_F", "WaterPump_01_sand_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Items_Airport
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_AirIntakePlug_01_F", "Land_AirIntakePlug_02_F", "Land_AirIntakePlug_03_F", "Land_AirIntakePlug_04_F", "Land_AirIntakePlug_05_F", "Land_DischargeStick_01_F", "Land_HelicopterWheels_01_assembled_F", "Land_HelicopterWheels_01_disassembled_F", "Land_PitotTubeCover_01_F", "Land_PortableHelipadLight_01_F", "Land_RotorCoversBag_01_F", "PortableHelipadLight_01_blue_F", "PortableHelipadLight_01_green_F", "PortableHelipadLight_01_red_F", "PortableHelipadLight_01_white_F", "PortableHelipadLight_01_yellow_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Items_Electronics
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Fridge_01_closed_F", "Fridge_01_open_F", "Land_Camera_01_F", "Land_FlatTV_01_F", "Land_GamingSet_01_camera_F", "Land_GamingSet_01_console_F", "Land_GamingSet_01_controller_F", "Land_GamingSet_01_powerSupply_F", "Land_HDMICable_01_F", "Land_Microwave_01_F", "Land_PCSet_01_case_F", "Land_PCSet_01_keyboard_F", "Land_PCSet_01_mouse_F", "Land_PCSet_01_screen_F", "Land_PortableSpeakers_01_F", "Land_Printer_01_F", "Land_Projector_01_F", "Land_Tablet_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Items_Food
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_Ketchup_01_F", "Land_Mustard_01_F", "Land_Tableware_01_cup_F", "Land_Tableware_01_fork_F", "Land_Tableware_01_knife_F", "Land_Tableware_01_napkin_F", "Land_Tableware_01_spoon_F", "Land_Tableware_01_stackOfNapkins_F", "Land_Tableware_01_tray_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Items_Luggage
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_MetalCase_01_large_F", "Land_MetalCase_01_medium_F", "Land_MetalCase_01_small_F", "Land_PlasticCase_01_large_F", "Land_PlasticCase_01_medium_F", "Land_PlasticCase_01_small_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Items_Sport
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_Baseball_01_F", "Land_BaseballMitt_01_F", "Land_Basketball_01_F", "Land_Football_01_F", "Land_Rugbyball_01_F", "Land_Volleyball_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_Items_Tools
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Land_Rope_01_F", "Land_WheelChock_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Heli_VR_Helpers
	{
		addonRootClass = "A3_Structures_F_Heli";
		requiredAddons[] = {"A3_Structures_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"Sign_Sphere200cm_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Houses";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Households_Addons
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_Addon_01_V1_ruins_F", "Land_Addon_02_V1_ruins_F", "Land_Addon_03_V1_ruins_F", "Land_Addon_03mid_V1_ruins_F", "Land_Addon_04_V1_ruins_F", "Land_d_Addon_02_V1_F", "Land_Garage_V1_ruins_F", "Land_i_Addon_02_V1_F", "Land_i_Addon_03_V1_F", "Land_i_Addon_03mid_V1_F", "Land_i_Addon_04_V1_F", "Land_i_Garage_V1_dam_F", "Land_i_Garage_V1_F", "Land_i_Garage_V2_dam_F", "Land_i_Garage_V2_F", "Land_Metal_Shed_F", "Land_Metal_Shed_ruins_F", "Land_u_Addon_01_V1_dam_F", "Land_u_Addon_01_V1_F", "Land_u_Addon_02_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_House_Big01
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_d_House_Big_01_V1_F", "Land_House_Big_01_V1_ruins_F", "Land_i_House_Big_01_V1_dam_F", "Land_i_House_Big_01_V1_F", "Land_i_House_Big_01_V2_dam_F", "Land_i_House_Big_01_V2_F", "Land_i_House_Big_01_V3_dam_F", "Land_i_House_Big_01_V3_F", "Land_u_House_Big_01_V1_dam_F", "Land_u_House_Big_01_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_House_Big02
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_d_House_Big_02_V1_F", "Land_House_Big_02_V1_ruins_F", "Land_i_House_Big_02_V1_dam_F", "Land_i_House_Big_02_V1_F", "Land_i_House_Big_02_V2_dam_F", "Land_i_House_Big_02_V2_F", "Land_i_House_Big_02_V3_dam_F", "Land_i_House_Big_02_V3_F", "Land_u_House_Big_02_V1_dam_F", "Land_u_House_Big_02_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_House_Shop01
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_d_Shop_01_V1_F", "Land_i_Shop_01_V1_dam_F", "Land_i_Shop_01_V1_F", "Land_i_Shop_01_V2_dam_F", "Land_i_Shop_01_V2_F", "Land_i_Shop_01_V3_dam_F", "Land_i_Shop_01_V3_F", "Land_Shop_01_V1_ruins_F", "Land_u_Shop_01_V1_dam_F", "Land_u_Shop_01_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_House_Shop02
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_d_Shop_02_V1_F", "Land_i_Shop_02_V1_dam_F", "Land_i_Shop_02_V1_F", "Land_i_Shop_02_V2_dam_F", "Land_i_Shop_02_V2_F", "Land_i_Shop_02_V3_dam_F", "Land_i_Shop_02_V3_F", "Land_Shop_02_V1_ruins_F", "Land_u_Shop_02_V1_dam_F", "Land_u_Shop_02_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_House_Small01
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_d_House_Small_01_V1_F", "Land_House_Small_01_V1_ruins_F", "Land_i_House_Small_01_V1_dam_F", "Land_i_House_Small_01_V1_F", "Land_i_House_Small_01_V2_dam_F", "Land_i_House_Small_01_V2_F", "Land_i_House_Small_01_V3_dam_F", "Land_i_House_Small_01_V3_F", "Land_u_House_Small_01_V1_dam_F", "Land_u_House_Small_01_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_House_Small02
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_d_House_Small_02_V1_F", "Land_House_Small_02_V1_ruins_F", "Land_i_House_Small_02_V1_dam_F", "Land_i_House_Small_02_V1_F", "Land_i_House_Small_02_V2_dam_F", "Land_i_House_Small_02_V2_F", "Land_i_House_Small_02_V3_dam_F", "Land_i_House_Small_02_V3_F", "Land_u_House_Small_02_V1_dam_F", "Land_u_House_Small_02_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_House_Small03
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_House_Small_03_V1_ruins_F", "Land_i_House_Small_03_V1_dam_F", "Land_i_House_Small_03_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_Slum
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_cargo_addon01_V1_F", "Land_cargo_addon01_V2_F", "Land_cargo_addon02_V1_F", "Land_cargo_addon02_V2_F", "Land_cargo_house_slum_F", "Land_cargo_house_slum_ruins_F", "Land_Slum_House01_F", "Land_Slum_House01_ruins_F", "Land_Slum_House02_F", "Land_Slum_House02_ruins_F", "Land_Slum_House03_F", "Land_Slum_House03_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_Stone_Big
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_d_Stone_HouseBig_V1_F", "Land_i_Stone_HouseBig_V1_dam_F", "Land_i_Stone_HouseBig_V1_F", "Land_i_Stone_HouseBig_V2_dam_F", "Land_i_Stone_HouseBig_V2_F", "Land_i_Stone_HouseBig_V3_dam_F", "Land_i_Stone_HouseBig_V3_F", "Land_Stone_HouseBig_V1_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_Stone_Shed
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_d_Stone_Shed_V1_F", "Land_i_Stone_Shed_V1_dam_F", "Land_i_Stone_Shed_V1_F", "Land_i_Stone_Shed_V2_dam_F", "Land_i_Stone_Shed_V2_F", "Land_i_Stone_Shed_V3_dam_F", "Land_i_Stone_Shed_V3_F", "Land_Stone_Shed_V1_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_Stone_Small
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_d_Stone_HouseSmall_V1_F", "Land_i_Stone_HouseSmall_V1_dam_F", "Land_i_Stone_HouseSmall_V1_F", "Land_i_Stone_HouseSmall_V2_dam_F", "Land_i_Stone_HouseSmall_V2_F", "Land_i_Stone_HouseSmall_V3_dam_F", "Land_i_Stone_HouseSmall_V3_F", "Land_Stone_HouseSmall_V1_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Households_WIP
	{
		addonRootClass = "A3_Structures_F_Households";
		requiredAddons[] = {"A3_Structures_F_Households"};
		requiredVersion = 0.1;
		units[] = {"Land_Unfinished_Building_01_F", "Land_Unfinished_Building_01_ruins_F", "Land_Unfinished_Building_02_F", "Land_Unfinished_Building_02_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Industrial Structures";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Ind_AirPort
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_Airport_center_F", "Land_Airport_left_F", "Land_Airport_right_F", "Land_Airport_Tower_dam_F", "Land_Airport_Tower_F", "Land_Airport_Tower_ruins_F", "Land_Hangar_F", "Land_LandMark_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_Cargo
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo20_blue_F", "Land_Cargo20_brick_red_F", "Land_Cargo20_china_color_V1_ruins_F", "Land_Cargo20_china_color_V2_ruins_F", "Land_Cargo20_color_V1_ruins_F", "Land_Cargo20_color_V2_ruins_F", "Land_Cargo20_color_V3_ruins_F", "Land_Cargo20_cyan_F", "Land_Cargo20_grey_F", "Land_Cargo20_light_blue_F", "Land_Cargo20_light_green_F", "Land_Cargo20_military_green_F", "Land_Cargo20_military_ruins_F", "Land_Cargo20_orange_F", "Land_Cargo20_red_F", "Land_Cargo20_sand_F", "Land_Cargo20_white_F", "Land_Cargo20_yellow_F", "Land_Cargo40_blue_F", "Land_Cargo40_brick_red_F", "Land_Cargo40_china_color_V1_ruins_F", "Land_Cargo40_china_color_V2_ruins_F", "Land_Cargo40_color_V1_ruins_F", "Land_Cargo40_color_V2_ruins_F", "Land_Cargo40_color_V3_ruins_F", "Land_Cargo40_cyan_F", "Land_Cargo40_grey_F", "Land_Cargo40_light_blue_F", "Land_Cargo40_light_green_F", "Land_Cargo40_military_green_F", "Land_Cargo40_military_ruins_F", "Land_Cargo40_orange_F", "Land_Cargo40_red_F", "Land_Cargo40_sand_F", "Land_Cargo40_white_F", "Land_Cargo40_yellow_F", "Land_CargoBox_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_CarService
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_CarService_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_ConcreteMixingPlant
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_cmp_Hopper_F", "Land_cmp_Hopper_ruins_F", "Land_cmp_Shed_dam_F", "Land_cmp_Shed_F", "Land_cmp_Shed_ruins_F", "Land_cmp_Tower_F", "Land_cmp_Tower_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_Crane
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_Crane_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_DieselPowerPlant
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_dp_bigTank_F", "Land_dp_bigTank_ruins_F", "Land_dp_mainFactory_F", "Land_dp_smallFactory_F", "Land_dp_smallTank_F", "Land_dp_smallTank_ruins_F", "Land_dp_transformer_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_Factory
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_Factory_Conv1_10_F", "Land_Factory_Conv1_10_ruins_F", "Land_Factory_Conv1_End_F", "Land_Factory_Conv1_Main_F", "Land_Factory_Conv1_Main_ruins_F", "Land_Factory_Conv2_F", "Land_Factory_Conv2_ruins_F", "Land_Factory_Hopper_F", "Land_Factory_Hopper_ruins_F", "Land_Factory_Main_F", "Land_Factory_Main_ruins_F", "Land_Factory_Tunnel_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_FuelStation
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_FuelStation_Build_F", "Land_FuelStation_Build_ruins_F", "Land_FuelStation_Feed_F", "Land_FuelStation_Shed_F", "Land_FuelStation_Shed_ruins_F", "Land_FuelStation_Sign_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_FuelStation_Small
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_fs_feed_F", "Land_fs_price_F", "Land_fs_roof_F", "Land_fs_sign_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_Pipes
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_IndPipe1_20m_F", "Land_IndPipe1_90degL_F", "Land_IndPipe1_90degR_F", "Land_IndPipe1_ground_F", "Land_IndPipe1_Uup_F", "Land_IndPipe1_valve_F", "Land_IndPipe2_big_18_F", "Land_IndPipe2_big_18ladder_F", "Land_IndPipe2_big_9_F", "Land_IndPipe2_big_ground1_F", "Land_IndPipe2_big_ground2_F", "Land_IndPipe2_big_support_F", "Land_IndPipe2_bigL_L_F", "Land_IndPipe2_bigL_R_F", "Land_IndPipe2_Small_9_F", "Land_IndPipe2_Small_ground1_F", "Land_IndPipe2_Small_ground2_F", "Land_IndPipe2_SmallL_L_F", "Land_IndPipe2_SmallL_R_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_PowerLines
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_HighVoltageColumn_F", "Land_HighVoltageColumnWire_F", "Land_HighVoltageEnd_F", "Land_HighVoltageTower_dam_F", "Land_HighVoltageTower_F", "Land_HighVoltageTower_large_F", "Land_HighVoltageTower_largeCorner_F", "Land_PowerCable_submarine_F", "Land_PowerLine_distributor_F", "Land_PowerLine_part_F", "Land_PowerPoleConcrete_F", "Land_PowerPoleWooden_F", "Land_PowerPoleWooden_L_F", "Land_PowerPoleWooden_L_off_F", "Land_PowerPoleWooden_small_F", "Land_PowerWireBig_direct_F", "Land_PowerWireBig_direct_short_F", "Land_PowerWireBig_end_F", "Land_PowerWireBig_left_F", "Land_PowerWireBig_right_F", "Land_PowerWireSmall_damaged_F", "Land_PowerWireSmall_direct_F", "Land_PowerWireSmall_Left_F", "Land_PowerWireSmall_Right_F", "Land_PowLines_Transformer_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_ReservoirTank
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_ReservoirTank_Airport_F", "Land_ReservoirTank_Airport_ruins_F", "Land_ReservoirTank_Rust_F", "Land_ReservoirTank_Rust_ruins_F", "Land_ReservoirTank_V1_F", "Land_ReservoirTank_V1_ruins_F", "Land_ReservoirTower_F", "Land_ReservoirTower_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_Shed
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_i_Shed_Ind_F", "Land_Shed_Big_F", "Land_Shed_Big_ruins_F", "Land_Shed_Ind_ruins_F", "Land_Shed_Small_F", "Land_Shed_Small_ruins_F", "Land_u_Shed_Ind_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_SolarPowerPlant
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_SolarPanel_1_F", "Land_SolarPanel_2_F", "Land_SolarPanel_3_F", "Land_spp_Mirror_Broken_F", "Land_spp_Mirror_F", "Land_spp_Mirror_ruins_F", "Land_spp_Panel_Broken_F", "Land_spp_Panel_F", "Land_spp_Tower_dam_F", "Land_spp_Tower_F", "Land_spp_Tower_ruins_F", "Land_spp_Transformer_F", "Land_spp_Transformer_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_Tank
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_Tank_rust_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_Transmitter_Tower
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_Communication_anchor_F", "Land_Communication_F", "Land_TBox_F", "Land_TBox_ruins_F", "Land_TTowerBig_1_F", "Land_TTowerBig_1_ruins_F", "Land_TTowerBig_2_F", "Land_TTowerBig_2_ruins_F", "Land_TTowerSmall_1_F", "Land_TTowerSmall_2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_WavePowerPlant
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_Rope_F", "Land_WavePowerPlant_F", "Land_WavePowerPlantBroken_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_Windmill
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_d_Windmill01_F", "Land_i_Windmill01_F", "Land_Windmill01_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Ind_WindPowerPlant
	{
		addonRootClass = "A3_Structures_F_Ind";
		requiredAddons[] = {"A3_Structures_F_Ind"};
		requiredVersion = 0.1;
		units[] = {"Land_PowerGenerator_F", "Land_wpp_Turbine_V1_F", "Land_wpp_Turbine_V1_off_F", "Land_wpp_Turbine_V2_F", "Land_wpp_Turbine_V2_off_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Items
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Cans
	{
		requiredAddons[] = {"A3_Structures_F_Items_Food"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Documents
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_File1_F", "Land_File2_F", "Land_FilePhotos_F", "Land_Map_F", "Land_Map_unfolded_F", "Land_Notepad_F", "Land_Photos_V1_F", "Land_Photos_V2_F", "Land_Photos_V3_F", "Land_Photos_V4_F", "Land_Photos_V5_F", "Land_Photos_V6_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Electronics
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_ExtensionCord_F", "Land_FloodLight_F", "Land_FMradio_F", "Land_HandyCam_F", "Land_Laptop_F", "Land_Laptop_unfolded_F", "Land_Laptop_unfolded_scripted_F", "Land_MobilePhone_old_F", "Land_MobilePhone_smart_F", "Land_Portable_generator_F", "Land_PortableLongRangeRadio_F", "Land_SatellitePhone_F", "Land_SurvivalRadio_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Food
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_BottlePlastic_V1_F", "Land_Can_Dented_F", "Land_Can_Rusty_F", "Land_Can_V1_F", "Land_Can_V2_F", "Land_Can_V3_F", "Land_TacticalBacon_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Gadgets
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_Compass_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Luggage
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_Suitcase_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Medical
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Military
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Stationery
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_PenBlack_F", "Land_PencilBlue_F", "Land_PencilGreen_F", "Land_PencilRed_F", "Land_PencilYellow_F", "Land_PenRed_F", "Land_PensAndPencils_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Tools
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_Axe_F", "Land_Axe_fire_F", "Land_DrillAku_F", "Land_DustMask_F", "Land_File_F", "Land_Gloves_F", "Land_Grinder_F", "Land_Hammer_F", "Land_Meter3m_F", "Land_MultiMeter_F", "Land_Pliers_F", "Land_Saw_F", "Land_Screwdriver_V1_F", "Land_Screwdriver_V2_F", "Land_Wrench_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Valuables
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_Money_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Items_Vessels
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Items"};
		requiredVersion = 0.1;
		units[] = {"Land_BarrelEmpty_F", "Land_BarrelSand_F", "Land_BarrelTrash_F", "Land_BarrelWater_F", "Land_Bucket_clean_F", "Land_Bucket_F", "Land_Bucket_painted_F", "Land_BucketNavy_F", "Land_CanisterFuel_F", "Land_CanisterOil_F", "Land_CanisterPlastic_F", "Land_MetalBarrel_empty_F", "Land_MetalBarrel_F", "Land_WaterBarrel_F", "Land_WaterTank_F", "MetalBarrel_burning_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Kart_Civ_SportsGrounds
	{
		addonRootClass = "A3_Structures_F_Kart";
		requiredAddons[] = {"A3_Structures_F_Kart"};
		requiredVersion = 0.1;
		units[] = {"Land_FinishGate_01_narrow_F", "Land_FinishGate_01_wide_F", "Land_PlasticBarrier_01_F", "Land_PlasticBarrier_01_line_x2_F", "Land_PlasticBarrier_01_line_x4_F", "Land_PlasticBarrier_01_line_x6_F", "Land_PlasticBarrier_01_round135L_x4_F", "Land_PlasticBarrier_01_round135L_x6_F", "Land_PlasticBarrier_01_round135R_x4_F", "Land_PlasticBarrier_01_round135R_x6_F", "Land_PlasticBarrier_01_round15L_x4_F", "Land_PlasticBarrier_01_round15L_x6_F", "Land_PlasticBarrier_01_round15R_x4_F", "Land_PlasticBarrier_01_round15R_x6_F", "Land_PlasticBarrier_01_round180L_x4_F", "Land_PlasticBarrier_01_round180L_x6_F", "Land_PlasticBarrier_01_round180R_x4_F", "Land_PlasticBarrier_01_round180R_x6_F", "Land_PlasticBarrier_01_round22L_x4_F", "Land_PlasticBarrier_01_round22L_x6_F", "Land_PlasticBarrier_01_round22R_x4_F", "Land_PlasticBarrier_01_round22R_x6_F", "Land_PlasticBarrier_01_round270L_x6_F", "Land_PlasticBarrier_01_round270R_x6_F", "Land_PlasticBarrier_01_round30L_x4_F", "Land_PlasticBarrier_01_round30L_x6_F", "Land_PlasticBarrier_01_round30R_x4_F", "Land_PlasticBarrier_01_round30R_x6_F", "Land_PlasticBarrier_01_round45L_x4_F", "Land_PlasticBarrier_01_round45L_x6_F", "Land_PlasticBarrier_01_round45R_x4_F", "Land_PlasticBarrier_01_round45R_x6_F", "Land_PlasticBarrier_01_round60L_x4_F", "Land_PlasticBarrier_01_round60L_x6_F", "Land_PlasticBarrier_01_round60R_x4_F", "Land_PlasticBarrier_01_round60R_x6_F", "Land_PlasticBarrier_01_round90L_x4_F", "Land_PlasticBarrier_01_round90L_x6_F", "Land_PlasticBarrier_01_round90R_x4_F", "Land_PlasticBarrier_01_round90R_x6_F", "Land_PlasticBarrier_01_sharp15L_x2_F", "Land_PlasticBarrier_01_sharp15L_x4_F", "Land_PlasticBarrier_01_sharp15L_x6_F", "Land_PlasticBarrier_01_sharp15R_x2_F", "Land_PlasticBarrier_01_sharp15R_x4_F", "Land_PlasticBarrier_01_sharp15R_x6_F", "Land_PlasticBarrier_01_sharp22L_x2_F", "Land_PlasticBarrier_01_sharp22L_x4_F", "Land_PlasticBarrier_01_sharp22L_x6_F", "Land_PlasticBarrier_01_sharp22R_x2_F", "Land_PlasticBarrier_01_sharp22R_x4_F", "Land_PlasticBarrier_01_sharp22R_x6_F", "Land_PlasticBarrier_01_sharp30L_x2_F", "Land_PlasticBarrier_01_sharp30L_x4_F", "Land_PlasticBarrier_01_sharp30L_x6_F", "Land_PlasticBarrier_01_sharp30R_x2_F", "Land_PlasticBarrier_01_sharp30R_x4_F", "Land_PlasticBarrier_01_sharp30R_x6_F", "Land_PlasticBarrier_01_sharp45L_x2_F", "Land_PlasticBarrier_01_sharp45L_x4_F", "Land_PlasticBarrier_01_sharp45L_x6_F", "Land_PlasticBarrier_01_sharp45R_x2_F", "Land_PlasticBarrier_01_sharp45R_x4_F", "Land_PlasticBarrier_01_sharp45R_x6_F", "Land_PlasticBarrier_01_sharp60L_x2_F", "Land_PlasticBarrier_01_sharp60L_x4_F", "Land_PlasticBarrier_01_sharp60L_x6_F", "Land_PlasticBarrier_01_sharp60R_x2_F", "Land_PlasticBarrier_01_sharp60R_x4_F", "Land_PlasticBarrier_01_sharp60R_x6_F", "Land_PlasticBarrier_01_snake15L_x4_F", "Land_PlasticBarrier_01_snake15L_x6_F", "Land_PlasticBarrier_01_snake15R_x4_F", "Land_PlasticBarrier_01_snake15R_x6_F", "Land_PlasticBarrier_01_snake22L_x4_F", "Land_PlasticBarrier_01_snake22L_x6_F", "Land_PlasticBarrier_01_snake22R_x4_F", "Land_PlasticBarrier_01_snake22R_x6_F", "Land_PlasticBarrier_01_snake30L_x4_F", "Land_PlasticBarrier_01_snake30L_x6_F", "Land_PlasticBarrier_01_snake30R_x4_F", "Land_PlasticBarrier_01_snake30R_x6_F", "Land_PlasticBarrier_01_snake45L_x4_F", "Land_PlasticBarrier_01_snake45L_x6_F", "Land_PlasticBarrier_01_snake45R_x4_F", "Land_PlasticBarrier_01_snake45R_x6_F", "Land_PlasticBarrier_01_snake60L_x4_F", "Land_PlasticBarrier_01_snake60L_x6_F", "Land_PlasticBarrier_01_snake60R_x4_F", "Land_PlasticBarrier_01_snake60R_x6_F", "Land_PlasticBarrier_01_snake90L_x6_F", "Land_PlasticBarrier_01_snake90R_x6_F", "Land_PlasticBarrier_02_F", "Land_PlasticBarrier_03_F", "Oil_Spill_F", "PlasticBarrier_01_red_F", "PlasticBarrier_01_white_F", "PlasticBarrier_02_grey_F", "PlasticBarrier_02_yellow_F", "PlasticBarrier_03_blue_F", "PlasticBarrier_03_orange_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Kart_Mil_Flags
	{
		addonRootClass = "A3_Structures_F_Kart";
		requiredAddons[] = {"A3_Structures_F_Kart"};
		requiredVersion = 0.1;
		units[] = {"Flag_Blueking_F", "Flag_Blueking_inverted_F", "Flag_Burstkoke_F", "Flag_Burstkoke_inverted_F", "Flag_Fuel_F", "Flag_Fuel_inverted_F", "Flag_Redburger_F", "Flag_Redstone_F", "Flag_Suatmm_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Kart_Signs_Companies
	{
		addonRootClass = "A3_Structures_F_Kart";
		requiredAddons[] = {"A3_Structures_F_Kart"};
		requiredVersion = 0.1;
		units[] = {"SignAd_Sponsor_Blueking_F", "SignAd_Sponsor_Burstkoke_F", "SignAd_Sponsor_Fuel_green_F", "SignAd_Sponsor_Fuel_white_F", "SignAd_Sponsor_Redburger_F", "SignAd_Sponsor_Redstone_F", "SignAd_Sponsor_Suatmm_F", "SignAd_SponsorS_Blueking_F", "SignAd_SponsorS_Burstkoke_F", "SignAd_SponsorS_Fuel_green_F", "SignAd_SponsorS_Fuel_white_F", "SignAd_SponsorS_Redburger_F", "SignAd_SponsorS_Redstone_F", "SignAd_SponsorS_Suatmm_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Mark_Items_Military
	{
		addonRootClass = "A3_Structures_F_Mark";
		requiredAddons[] = {"A3_Structures_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"Land_ShotTimer_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mark_Items_Sport
	{
		addonRootClass = "A3_Structures_F_Mark";
		requiredAddons[] = {"A3_Structures_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"Balloon_01_air_NoPop_F", "Balloon_01_water_NoPop_F", "Land_AirHorn_01_F", "Land_Balloon_01_air_F", "Land_Balloon_01_water_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mark_Mil_Flags
	{
		addonRootClass = "A3_Structures_F_Mark";
		requiredAddons[] = {"A3_Structures_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"Flag_FD_Purple_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mark_Training
	{
		addonRootClass = "A3_Structures_F_Mark";
		requiredAddons[] = {"A3_Structures_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"Land_BulletTrap_01_F", "Land_Target_Dueling_01_F", "Land_Target_Swivel_01_F", "ShootingMat_01_folded_Khaki_F", "ShootingMat_01_folded_Olive_F", "ShootingMat_01_folded_OPFOR_F", "ShootingMat_01_Khaki_F", "ShootingMat_01_Olive_F", "ShootingMat_01_OPFOR_F", "Target_PopUp4_Moving_90deg_Acc1_F", "Target_PopUp4_Moving_90deg_Acc1_NoPop_F", "Target_PopUp4_Moving_90deg_Acc2_F", "Target_PopUp4_Moving_90deg_Acc2_NoPop_F", "Target_PopUp4_Moving_90deg_F", "Target_PopUp4_Moving_90deg_NoPop_F", "Target_PopUp4_Moving_Acc1_F", "Target_PopUp4_Moving_Acc1_NoPop_F", "Target_PopUp4_Moving_Acc2_F", "Target_PopUp4_Moving_Acc2_NoPop_F", "Target_PopUp4_Moving_F", "Target_PopUp4_Moving_NoPop_F", "Target_PopUp_HVT1_Moving_90deg_F", "Target_PopUp_HVT1_Moving_90deg_NoPop_F", "Target_PopUp_HVT1_Moving_F", "Target_PopUp_HVT1_Moving_NoPop_F", "Target_PopUp_HVT2_Moving_90deg_F", "Target_PopUp_HVT2_Moving_90deg_NoPop_F", "Target_PopUp_HVT2_Moving_F", "Target_PopUp_HVT2_Moving_NoPop_F", "Target_Swivel_01_ground_F", "Target_Swivel_01_ground_NoPop_F", "Target_Swivel_01_left_F", "Target_Swivel_01_left_NoPop_F", "Target_Swivel_01_NoPop_F", "Target_Swivel_01_right_F", "Target_Swivel_01_right_NoPop_F", "TargetP_HVT1_F", "TargetP_HVT1_NoPop_F", "TargetP_HVT2_F", "TargetP_HVT2_NoPop_F", "TargetP_Inf4_Acc1_F", "TargetP_Inf4_Acc1_NoPop_F", "TargetP_Inf4_Acc2_F", "TargetP_Inf4_Acc2_NoPop_F", "TargetP_Inf4_F", "TargetP_Inf4_NoPop_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mark_VR_Helpers
	{
		addonRootClass = "A3_Structures_F_Mark";
		requiredAddons[] = {"A3_Structures_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Mark_VR_Shapes
	{
		addonRootClass = "A3_Structures_F_Mark";
		requiredAddons[] = {"A3_Structures_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"Land_VR_Shape_01_cube_1m_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mark_VR_Targets
	{
		addonRootClass = "A3_Structures_F_Mark";
		requiredAddons[] = {"A3_Structures_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"Land_VR_Target_APC_Wheeled_01_F", "Land_VR_Target_Dart_01_F", "Land_VR_Target_MBT_01_cannon_F", "Land_VR_Target_MRAP_01_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Military Buildings and Structures";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Mil_BagBunker
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_BagBunker_Large_F", "Land_BagBunker_Small_F", "Land_BagBunker_Tower_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_BagFence
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_BagFence_Corner_F", "Land_BagFence_End_F", "Land_BagFence_Long_F", "Land_BagFence_Round_F", "Land_BagFence_Short_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Barracks
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_Barracks_ruins_F", "Land_i_Barracks_V1_dam_F", "Land_i_Barracks_V1_F", "Land_i_Barracks_V2_dam_F", "Land_i_Barracks_V2_F", "Land_u_Barracks_V2_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Bunker
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_Bunker_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Cargo
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo_House_V1_F", "Land_Cargo_House_V1_ruins_F", "Land_Cargo_House_V2_F", "Land_Cargo_House_V2_ruins_F", "Land_Cargo_House_V3_F", "Land_Cargo_House_V3_ruins_F", "Land_Cargo_HQ_V1_F", "Land_Cargo_HQ_V1_ruins_F", "Land_Cargo_HQ_V2_F", "Land_Cargo_HQ_V2_ruins_F", "Land_Cargo_HQ_V3_F", "Land_Cargo_HQ_V3_ruins_F", "Land_Cargo_Patrol_V1_F", "Land_Cargo_Patrol_V1_ruins_F", "Land_Cargo_Patrol_V2_F", "Land_Cargo_Patrol_V2_ruins_F", "Land_Cargo_Patrol_V3_F", "Land_Cargo_Patrol_V3_ruins_F", "Land_Cargo_Tower_V1_F", "Land_Cargo_Tower_V1_No1_F", "Land_Cargo_Tower_V1_No2_F", "Land_Cargo_Tower_V1_No3_F", "Land_Cargo_Tower_V1_No4_F", "Land_Cargo_Tower_V1_No5_F", "Land_Cargo_Tower_V1_No6_F", "Land_Cargo_Tower_V1_No7_F", "Land_Cargo_Tower_V1_ruins_F", "Land_Cargo_Tower_V2_F", "Land_Cargo_Tower_V2_ruins_F", "Land_Cargo_Tower_V3_F", "Land_Cargo_Tower_V3_ruins_F", "Land_Medevac_house_V1_F", "Land_Medevac_house_V1_ruins_F", "Land_Medevac_HQ_V1_F", "Land_Medevac_HQ_V1_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Flags
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Flag_AAF_F", "Flag_Altis_F", "Flag_AltisColonial_F", "Flag_ARMEX_F", "Flag_BI_F", "Flag_Blue_F", "Flag_CSAT_F", "Flag_FD_Blue_F", "Flag_FD_Green_F", "Flag_FD_Orange_F", "Flag_FD_Red_F", "Flag_FIA_F", "Flag_Green_F", "Flag_ION_F", "Flag_Larkin_F", "Flag_NATO_F", "Flag_POWMIA_F", "Flag_Quontrol_F", "Flag_Red_F", "Flag_RedCrystal_F", "Flag_UK_F", "Flag_UNO_F", "Flag_US_F", "Flag_Vrana_F", "Flag_White_F", "FlagPole_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Fortification
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_HBarrier_1_F", "Land_HBarrier_3_F", "Land_HBarrier_5_F", "Land_HBarrier_Big_F", "Land_HBarrierBig_F", "Land_HBarrierTower_F", "Land_HBarrierWall4_F", "Land_HBarrierWall6_F", "Land_HBarrierWall_corner_F", "Land_HBarrierWall_corridor_F", "Land_Razorwire_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Helipads
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_HelipadCircle_F", "Land_HelipadCivil_F", "Land_HelipadEmpty_F", "Land_HelipadRescue_F", "Land_HelipadSquare_F", "Land_JumpTarget_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Offices
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_MilOffices_V1_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Radar
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_Radar_F", "Land_Radar_ruins_F", "Land_Radar_Small_F", "Land_Radar_Small_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Scrapyard
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Soft_F_MRAP_01", "A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_Shelters
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"CamoNet_BLUFOR_big_Curator_F", "CamoNet_BLUFOR_big_F", "CamoNet_BLUFOR_Curator_F", "CamoNet_BLUFOR_F", "CamoNet_BLUFOR_open_Curator_F", "CamoNet_BLUFOR_open_F", "CamoNet_INDP_big_Curator_F", "CamoNet_INDP_big_F", "CamoNet_INDP_Curator_F", "CamoNet_INDP_F", "CamoNet_INDP_open_Curator_F", "CamoNet_INDP_open_F", "CamoNet_OPFOR_big_Curator_F", "CamoNet_OPFOR_big_F", "CamoNet_OPFOR_Curator_F", "CamoNet_OPFOR_F", "CamoNet_OPFOR_open_Curator_F", "CamoNet_OPFOR_open_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Mil_TentHangar
	{
		addonRootClass = "A3_Structures_F_Mil";
		requiredAddons[] = {"A3_Structures_F_Mil"};
		requiredVersion = 0.1;
		units[] = {"Land_TentHangar_V1_dam_F", "Land_TentHangar_V1_F", "Land_TentHangar_V1_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Naval
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Naval_Buoys
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Naval"};
		requiredVersion = 0.1;
		units[] = {"Land_BuoyBig_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Naval_Fishing
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Naval"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Naval_Piers
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Bridges", "A3_Structures_F_Naval"};
		requiredVersion = 0.1;
		units[] = {"Land_nav_pier_m_F", "Land_Pier_addon", "Land_Pier_Box_F", "Land_Pier_F", "Land_Pier_small_F", "Land_Pier_wall_F", "Land_PierLadder_F", "Land_Pillar_Pier_F", "Land_Sea_Wall_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Naval_RowBoats
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Naval"};
		requiredVersion = 0.1;
		units[] = {"Land_RowBoat_V1_F", "Land_RowBoat_V2_F", "Land_RowBoat_V3_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Humanitarian
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Humanitarian_Camps
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange_Humanitarian"};
		requiredVersion = 0.1;
		units[] = {"Land_MedicalTent_01_brownhex_closed_F", "Land_MedicalTent_01_digital_closed_F", "Land_MedicalTent_01_floor_dark_F", "Land_MedicalTent_01_floor_light_F", "Land_MedicalTent_01_greenhex_closed_F", "Land_MedicalTent_01_MTP_closed_F", "Land_MedicalTent_01_tropic_closed_F", "Land_MedicalTent_01_white_generic_closed_F", "Land_MedicalTent_01_white_generic_inner_F", "Land_MedicalTent_01_white_generic_open_F", "Land_MedicalTent_01_white_generic_outer_F", "Land_MedicalTent_01_white_IDAP_closed_F", "Land_MedicalTent_01_white_IDAP_med_closed_F", "Land_MedicalTent_01_white_IDAP_open_F", "Land_MedicalTent_01_white_IDAP_outer_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Humanitarian_Flags
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange_Humanitarian"};
		requiredVersion = 0.1;
		units[] = {"Banner_01_AAF_F", "Banner_01_CSAT_F", "Banner_01_F", "Banner_01_FIA_F", "Banner_01_IDAP_F", "Banner_01_NATO_F", "Flag_IDAP_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Industrial
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Industrial_Cargo
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange_Industrial"};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo10_IDAP_F", "Land_Cargo20_IDAP_F", "Land_Cargo20_idap_ruins_F", "Land_Cargo40_IDAP_F", "Land_Cargo40_idap_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Signs
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Signs_Mines
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange_Signs"};
		requiredVersion = 0.1;
		units[] = {"Land_Sign_MinesDanger_English_F", "Land_Sign_MinesDanger_Greek_F", "Land_Sign_MinesTall_English_F", "Land_Sign_MinesTall_F", "Land_Sign_MinesTall_Greek_F", "Land_Sign_WarningNoWeapon_F", "Land_Sign_WarningNoWeaponAltis_F", "Land_Sign_WarningNoWeaponTanoa_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Signs_Special
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange_Signs"};
		requiredVersion = 0.1;
		units[] = {"FlagMarker_01_F", "Land_EntranceGate_01_narrow_F", "Land_WallSign_01_chalkboard_F", "Land_WallSign_01_F", "SignAd_Sponsor_01_IDAP_F", "SignAd_Sponsor_IDAP_F", "SignAd_SponsorS_01_IDAP_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_VR_Helpers
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"MemoryFragment_F", "Sign_Sphere100cm_Geometry_F", "Sign_Sphere10cm_Geometry_F", "Sign_Sphere200cm_Geometry_F", "Sign_Sphere25cm_Geometry_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Walls
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Orange_Walls_Plastic
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange_Walls"};
		requiredVersion = 0.1;
		units[] = {"Land_PlasticNetFence_01_long_d_F", "Land_PlasticNetFence_01_long_F", "Land_PlasticNetFence_01_pole_F", "Land_PlasticNetFence_01_roll_F", "Land_PlasticNetFence_01_short_d_F", "Land_PlasticNetFence_01_short_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Research
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"Land_Dome_Big_F", "Land_Dome_Small_F", "Land_Research_house_V1_F", "Land_Research_house_V1_ruins_F", "Land_Research_HQ_F", "Land_Research_HQ_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Signs_Companies
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Signs_F_Signs_Ad", "A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_System
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"Land_ClutterCutter_large_F", "Land_ClutterCutter_medium_F", "Land_ClutterCutter_small_F", "ProtectionZone_F", "ProtectionZone_Invisible_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Buildings and Structures";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Structures_F_Tank_Decals
	{
		addonRootClass = "A3_Structures_F_Tank";
		requiredAddons[] = {"A3_Structures_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Tank_Decals_Horizontal
	{
		addonRootClass = "A3_Structures_F_Tank";
		requiredAddons[] = {"A3_Structures_F_Tank_Decals"};
		requiredVersion = 0.1;
		units[] = {"Land_DirtPatch_02_F", "Land_DirtPatch_03_F", "Land_DirtPatch_04_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Tank_Military
	{
		addonRootClass = "A3_Structures_F_Tank";
		requiredAddons[] = {"A3_Structures_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Structures_F_Tank_Military_Fortifications
	{
		addonRootClass = "A3_Structures_F_Tank";
		requiredAddons[] = {"A3_Structures_F_Tank_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_ConcreteHedgehog_01_F", "Land_ConcreteHedgehog_01_half_F", "Land_ConcreteHedgehog_01_palette_F", "Land_CzechHedgehog_01_new_F", "Land_DragonsTeeth_01_1x1_new_F", "Land_DragonsTeeth_01_1x1_old_F", "Land_DragonsTeeth_01_4x2_new_F", "Land_DragonsTeeth_01_4x2_old_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Tank_Military_RepairDepot
	{
		addonRootClass = "A3_Structures_F_Tank";
		requiredAddons[] = {"A3_Structures_F_Tank_Military"};
		requiredVersion = 0.1;
		units[] = {"Land_RepairDepot_01_base_ruins_F", "Land_RepairDepot_01_civ_F", "Land_RepairDepot_01_civ_ruins_F", "Land_RepairDepot_01_green_F", "Land_RepairDepot_01_green_ruins_F", "Land_RepairDepot_01_tan_F", "Land_RepairDepot_01_tan_ruins_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Training
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"B_TargetSoldier", "BlockConcrete_F", "Dirthump_1_F", "Dirthump_2_F", "Dirthump_3_F", "Dirthump_4_F", "Hostage_PopUp2_Moving_90deg_F", "Hostage_PopUp2_Moving_90deg_NoPop_F", "Hostage_PopUp2_Moving_F", "Hostage_PopUp2_Moving_NoPop_F", "Hostage_PopUp3_Moving_90deg_F", "Hostage_PopUp3_Moving_90deg_NoPop_F", "Hostage_PopUp3_Moving_F", "Hostage_PopUp3_Moving_NoPop_F", "Hostage_PopUp_Moving_90deg_F", "Hostage_PopUp_Moving_90deg_NoPop_F", "Hostage_PopUp_Moving_F", "Hostage_PopUp_Moving_NoPop_F", "I_TargetSoldier", "Land_Obstacle_Bridge_F", "Land_Obstacle_Climb_F", "Land_Obstacle_Crawl_F", "Land_Obstacle_Cross_F", "Land_Obstacle_Pass_F", "Land_Obstacle_Ramp_F", "Land_Obstacle_RunAround_F", "Land_Obstacle_Saddle_F", "Land_RampConcrete_F", "Land_RampConcreteHigh_F", "Land_Shoot_House_Corner_Crouch_F", "Land_Shoot_House_Corner_F", "Land_Shoot_House_Corner_Prone_F", "Land_Shoot_House_Corner_Stand_F", "Land_Shoot_House_Panels_Crouch_F", "Land_Shoot_House_Panels_F", "Land_Shoot_House_Panels_Prone_F", "Land_Shoot_House_Panels_Vault_F", "Land_Shoot_House_Panels_Window_F", "Land_Shoot_House_Panels_Windows_F", "Land_Shoot_House_Tunnel_Crouch_F", "Land_Shoot_House_Tunnel_F", "Land_Shoot_House_Tunnel_Prone_F", "Land_Shoot_House_Tunnel_Stand_F", "Land_Shoot_House_Wall_Crouch_F", "Land_Shoot_House_Wall_F", "Land_Shoot_House_Wall_Long_Crouch_F", "Land_Shoot_House_Wall_Long_F", "Land_Shoot_House_Wall_Long_Prone_F", "Land_Shoot_House_Wall_Long_Stand_F", "Land_Shoot_House_Wall_Prone_F", "Land_Shoot_House_Wall_Stand_F", "Land_ShootingPos_F", "Land_Target_Oval_F", "Land_Target_Oval_NoPop_F", "Land_Target_Oval_Wall_Bottom_F", "Land_Target_Oval_Wall_Bottom_NoPop_F", "Land_Target_Oval_Wall_Left_F", "Land_Target_Oval_Wall_Left_NoPop_F", "Land_Target_Oval_Wall_Right_F", "Land_Target_Oval_Wall_Right_NoPop_F", "Land_Target_Oval_Wall_Top_F", "Land_Target_Oval_Wall_Top_NoPop_F", "Metal_Pole_F", "Metal_Pole_Platform_F", "Metal_Pole_Skeet_F", "Metal_Pole_Skeet_NoPop_F", "O_TargetSoldier", "ShootingPos_F", "Skeet_Clay_F", "Skeet_Clay_NoPop_F", "Steel_Plate_F", "Steel_Plate_L_F", "Steel_Plate_L_Stand_F", "Steel_Plate_S_F", "Steel_Plate_S_Stand_F", "Steel_Plate_Stand_F", "Target_F", "Target_PopUp2_Moving_90deg_Acc1_F", "Target_PopUp2_Moving_90deg_Acc1_NoPop_F", "Target_PopUp2_Moving_90deg_Acc2_F", "Target_PopUp2_Moving_90deg_Acc2_NoPop_F", "Target_PopUp2_Moving_90deg_F", "Target_PopUp2_Moving_90deg_NoPop_F", "Target_PopUp2_Moving_Acc1_F", "Target_PopUp2_Moving_Acc1_NoPop_F", "Target_PopUp2_Moving_Acc2_F", "Target_PopUp2_Moving_Acc2_NoPop_F", "Target_PopUp2_Moving_F", "Target_PopUp2_Moving_NoPop_F", "Target_PopUp3_Moving_90deg_Acc1_F", "Target_PopUp3_Moving_90deg_Acc1_NoPop_F", "Target_PopUp3_Moving_90deg_Acc2_F", "Target_PopUp3_Moving_90deg_Acc2_NoPop_F", "Target_PopUp3_Moving_90deg_F", "Target_PopUp3_Moving_90deg_NoPop_F", "Target_PopUp3_Moving_Acc1_F", "Target_PopUp3_Moving_Acc1_NoPop_F", "Target_PopUp3_Moving_Acc2_F", "Target_PopUp3_Moving_Acc2_NoPop_F", "Target_PopUp3_Moving_F", "Target_PopUp3_Moving_NoPop_F", "Target_PopUp_Moving_90deg_Acc1_F", "Target_PopUp_Moving_90deg_Acc1_NoPop_F", "Target_PopUp_Moving_90deg_Acc2_F", "Target_PopUp_Moving_90deg_Acc2_NoPop_F", "Target_PopUp_Moving_90deg_F", "Target_PopUp_Moving_90deg_NoPop_F", "Target_PopUp_Moving_Acc1_F", "Target_PopUp_Moving_Acc1_NoPop_F", "Target_PopUp_Moving_Acc2_F", "Target_PopUp_Moving_Acc2_NoPop_F", "Target_PopUp_Moving_F", "Target_PopUp_Moving_NoPop_F", "Target_Rail_End_F", "Target_Rail_F", "TargetP_Civ2_F", "TargetP_Civ2_NoPop_F", "TargetP_Civ3_F", "TargetP_Civ3_NoPop_F", "TargetP_Civ_F", "TargetP_Civ_NoPop_F", "TargetP_Inf2_Acc1_F", "TargetP_Inf2_Acc1_NoPop_F", "TargetP_Inf2_Acc2_F", "TargetP_Inf2_Acc2_NoPop_F", "TargetP_Inf2_F", "TargetP_Inf2_NoPop_F", "TargetP_Inf3_Acc1_F", "TargetP_Inf3_Acc1_NoPop_F", "TargetP_Inf3_Acc2_F", "TargetP_Inf3_Acc2_NoPop_F", "TargetP_Inf3_F", "TargetP_Inf3_NoPop_F", "TargetP_Inf_Acc1_F", "TargetP_Inf_Acc1_NoPop_F", "TargetP_Inf_Acc2_F", "TargetP_Inf_Acc2_NoPop_F", "TargetP_Inf_F", "TargetP_Inf_NoPop_F", "TargetP_Zom_Acc1_F", "TargetP_Zom_Acc1_NoPop_F", "TargetP_Zom_F", "TargetP_Zom_NoPop_F", "Zombie_PopUp_Moving_90deg_Acc1_F", "Zombie_PopUp_Moving_90deg_Acc1_NoPop_F", "Zombie_PopUp_Moving_90deg_F", "Zombie_PopUp_Moving_90deg_NoPop_F", "Zombie_PopUp_Moving_Acc1_F", "Zombie_PopUp_Moving_Acc1_NoPop_F", "Zombie_PopUp_Moving_F", "Zombie_PopUp_Moving_NoPop_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Training_InvisibleTarget
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F_Training"};
		requiredVersion = 0.1;
		units[] = {"TargetCenter", "TargetSector02", "TargetSector03", "TargetSector04", "TargetSector05"};
		weapons[] = {};
	};
	class A3_Structures_F_Walls
	{
		addonRootClass = "A3_Structures_F";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"Land_Ancient_Wall_4m_F", "Land_Ancient_Wall_8m_F", "Land_BarGate_01_open_F", "Land_BarGate_F", "Land_Canal_Wall_10m_F", "Land_Canal_Wall_D_center_F", "Land_Canal_Wall_D_left_F", "Land_Canal_Wall_D_right_F", "Land_Canal_Wall_Stairs_F", "Land_Canal_WallSmall_10m_F", "Land_City2_4m_F", "Land_City2_8m_F", "Land_City2_8mD_F", "Land_City2_PillarD_F", "Land_City_4m_F", "Land_City_8m_F", "Land_City_8mD_F", "Land_City_Gate_F", "Land_City_Pillar_F", "Land_CncBarrier_F", "Land_CncBarrier_stripes_F", "Land_CncBarrierMedium4_F", "Land_CncBarrierMedium_F", "Land_CncShelter_F", "Land_CncWall1_F", "Land_CncWall4_F", "Land_Concrete_SmallWall_4m_F", "Land_Concrete_SmallWall_8m_F", "Land_Crash_barrier_F", "Land_IndFnc_3_D_F", "Land_IndFnc_3_F", "Land_IndFnc_3_Hole_F", "Land_IndFnc_9_F", "Land_IndFnc_Corner_F", "Land_IndFnc_Pole_F", "Land_Mil_ConcreteWall_F", "Land_Mil_WallBig_4m_F", "Land_Mil_WallBig_Corner_F", "Land_Mil_WallBig_Gate_F", "Land_Mil_WiredFence_F", "Land_Mil_WiredFence_Gate_F", "Land_Mil_WiredFenceD_F", "Land_Mound01_8m_F", "Land_Mound02_8m_F", "Land_Net_Fence_4m_F", "Land_Net_Fence_8m_F", "Land_Net_Fence_Gate_F", "Land_Net_Fence_pole_F", "Land_Net_FenceD_8m_F", "Land_New_WiredFence_10m_Dam_F", "Land_New_WiredFence_10m_F", "Land_New_WiredFence_5m_F", "Land_New_WiredFence_pole_F", "Land_Pipe_fence_4m_F", "Land_Pipe_fence_4mNoLC_F", "Land_PipeWall_concretel_8m_F", "Land_Rampart_F", "Land_RedWhitePole_F", "Land_Slums01_8m", "Land_Slums01_pole", "Land_Slums02_4m", "Land_Slums02_pole", "Land_SportGround_fence_F", "Land_Stone_4m_F", "Land_Stone_8m_F", "Land_Stone_8mD_F", "Land_Stone_Gate_F", "Land_Stone_pillar_F", "Land_Wall_IndCnc_2deco_F", "Land_Wall_IndCnc_4_D_F", "Land_Wall_IndCnc_4_F", "Land_Wall_IndCnc_End_2_F", "Land_Wall_IndCnc_Pole_F", "Land_Wall_Tin_4", "Land_Wall_Tin_4_2", "Land_Wall_Tin_Pole", "Land_Wired_Fence_4m_F", "Land_Wired_Fence_4mD_F", "Land_Wired_Fence_8m_F", "Land_Wired_Fence_8mD_F"};
		weapons[] = {};
	};
	class A3_Structures_F_Wrecks
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Vehicle Wrecks";
		requiredAddons[] = {"A3_Soft_F", "A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = {"Land_UWreck_FishingBoat_F", "Land_UWreck_Heli_Attack_02_F", "Land_UWreck_MV22_F", "Land_Wreck_BMP2_F", "Land_Wreck_BRDM2_F", "Land_Wreck_Car2_F", "Land_Wreck_Car3_F", "Land_Wreck_Car_F", "Land_Wreck_CarDismantled_F", "Land_Wreck_Heli_Attack_01_F", "Land_Wreck_Heli_Attack_02_F", "Land_Wreck_HMMWV_F", "Land_Wreck_Hunter_F", "Land_Wreck_Offroad2_F", "Land_Wreck_Offroad_F", "Land_Wreck_Plane_Transport_01_F", "Land_Wreck_Skodovka_F", "Land_Wreck_Slammer_F", "Land_Wreck_Slammer_hull_F", "Land_Wreck_Slammer_turret_F", "Land_Wreck_T72_hull_F", "Land_Wreck_T72_turret_F", "Land_Wreck_Traw2_F", "Land_Wreck_Traw_F", "Land_Wreck_Truck_dropside_F", "Land_Wreck_Truck_F", "Land_Wreck_UAZ_F", "Land_Wreck_Ural_F", "Land_Wreck_Van_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Supplies_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Ammoboxes and Supplies";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Supplies_F_Enoch_Ammoboxes
	{
		addonRootClass = "A3_Supplies_F_Enoch";
		requiredAddons[] = {"A3_Supplies_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"Box_EAF_Ammo_F", "Box_EAF_AmmoOrd_F", "Box_EAF_AmmoVeh_F", "Box_EAF_Equip_F", "Box_EAF_Grenades_F", "Box_EAF_Support_F", "Box_EAF_Uniforms_F", "Box_EAF_Wps_F", "Box_EAF_WpsLaunch_F", "Box_EAF_WpsSpecial_F", "I_E_CargoNet_01_ammo_F", "I_EAF_supplyCrate_F"};
		weapons[] = {};
	};
	class A3_Supplies_F_Enoch_Bags
	{
		addonRootClass = "A3_Supplies_F_Enoch";
		requiredAddons[] = {"A3_Supplies_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"B_AssaultPack_eaf_F", "B_AssaultPack_eaf_IELAT2_F", "B_AssaultPack_eaf_IEPathfinder_F", "B_AssaultPack_eaf_Repair_F", "B_AssaultPack_wdl_BWLAT2_F", "B_AssaultPack_wdl_BWLAT_F", "B_AssaultPack_wdl_BWMedic_F", "B_AssaultPack_wdl_BWReconMedic", "B_AssaultPack_wdl_BWRepair_F", "B_AssaultPack_wdl_F", "B_Carryall_eaf_exp_F", "B_Carryall_eaf_F", "B_Carryall_eaf_IEAAA_F", "B_Carryall_eaf_IEAAR_F", "B_Carryall_eaf_IEAAT_F", "B_Carryall_eaf_IEAmmo_F", "B_Carryall_eaf_Mine_F", "B_Carryall_green_exp_F", "B_Carryall_green_F", "B_Carryall_oli_IEAAR_F", "B_Carryall_oli_IEAmmo_F", "B_Carryall_taiga_Exp_F", "B_Carryall_taiga_F", "B_Carryall_wdl_BWAAA_F", "B_Carryall_wdl_BWAAT_F", "B_Carryall_wdl_BWAmmo_F", "B_Carryall_wdl_F", "B_Carryall_wdl_Mine", "B_CombinationUnitRespirator_01_F", "B_FieldPack_green_Exp_F", "B_FieldPack_green_F", "B_Fieldpack_green_IEAA_F", "B_Fieldpack_green_IEAT_F", "B_Fieldpack_green_IELAT2_F", "B_Fieldpack_green_IELAT_F", "B_Fieldpack_green_IEMedic_F", "B_FieldPack_green_Medic_F", "B_FieldPack_green_RPG_AT_F", "B_Fieldpack_oli_IEAA_F", "B_Fieldpack_oli_IEAT_F", "B_Fieldpack_oli_IELAT2_F", "B_Fieldpack_oli_IELAT_F", "B_FieldPack_taiga_F", "B_FieldPack_taiga_Medic_F", "B_FieldPack_taiga_RPG_AT_F", "B_Kitbag_rgr_BWAAR", "B_RadioBag_01_black_F", "B_RadioBag_01_digi_F", "B_RadioBag_01_eaf_F", "B_RadioBag_01_eaf_FAK_F", "B_RadioBag_01_ghex_F", "B_RadioBag_01_hex_F", "B_RadioBag_01_mtp_F", "B_RadioBag_01_oucamo_F", "B_RadioBag_01_tropic_F", "B_RadioBag_01_wdl_F", "B_RadioBag_01_wdl_FAK_F", "B_SCBA_01_F", "B_UGV_02_Demining_backpack_F", "B_UGV_02_Science_backpack_F", "C_IDAP_UGV_02_Demining_backpack_F", "I_E_AA_01_weapon_F", "I_E_AT_01_weapon_F", "I_E_GMG_01_A_Weapon_F", "I_E_GMG_01_high_Weapon_F", "I_E_GMG_01_Weapon_F", "I_E_HMG_01_A_Weapon_F", "I_E_HMG_01_high_Weapon_F", "I_E_HMG_01_support_F", "I_E_HMG_01_support_high_F", "I_E_HMG_01_Weapon_F", "I_E_Mortar_01_support_F", "I_E_Mortar_01_Weapon_F", "I_E_UAV_01_backpack_F", "I_E_UAV_06_backpack_F", "I_E_UAV_06_medical_backpack_F", "I_E_UGV_02_Demining_backpack_F", "I_E_UGV_02_Science_backpack_F", "I_UGV_02_Demining_backpack_F", "I_UGV_02_Science_backpack_F", "O_UGV_02_Demining_backpack_F", "O_UGV_02_Science_backpack_F", "UGV_02_backpack_base_F", "UGV_02_Demining_backpack_base_F", "UGV_02_Science_backpack_base_F"};
		weapons[] = {};
	};
	class A3_Supplies_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Ammoboxes and Supplies";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_AssaultPack_rgr_BTLAT_F", "B_AssaultPack_rgr_BTReconMedic", "B_AssaultPack_rgr_CTRGLAT_F", "B_AssaultPack_rgr_CTRGMedic_F", "B_AssaultPack_tna_BTMedic_F", "B_AssaultPack_tna_BTRepair_F", "B_AssaultPack_tna_F", "B_Bergen_dgtl_F", "B_Bergen_hex_F", "B_Bergen_mcamo_F", "B_Bergen_tna_F", "B_Carryall_ghex_F", "B_Carryall_ghex_OTAAA_F", "B_Carryall_ghex_OTAAR_AAR_F", "B_Carryall_ghex_OTAAT_F", "B_Carryall_ghex_OTAmmo_F", "B_Carryall_ghex_OTEng_F", "B_Carryall_ghex_OTExp_F", "B_Carryall_ghex_OTReconExp_F", "B_Carryall_oli_BTAAA_F", "B_Carryall_oli_BTAAT_F", "B_Carryall_oli_BTAmmo_F", "B_FieldPack_blk_Bandit_8_F", "B_FieldPack_cb_Bandit_3_F", "B_FieldPack_ghex_F", "B_FieldPack_ghex_OTAA_F", "B_FieldPack_ghex_OTAT_F", "B_FieldPack_ghex_OTLAT_F", "B_FieldPack_ghex_OTMedic_F", "B_FieldPack_ghex_OTReconMedic_F", "B_FieldPack_ghex_OTRepair_F", "B_FieldPack_ghex_OTRPG_AT_F", "B_FieldPack_khk_Bandit_1_F", "B_GMG_01_Weapon_grn_F", "B_HMG_01_support_grn_F", "B_HMG_01_Weapon_grn_F", "B_Kitbag_cbr_Bandit_2_F", "B_Kitbag_cbr_Para_5_F", "B_Kitbag_rgr_BTAA_F", "B_Kitbag_rgr_BTAT_F", "B_Kitbag_rgr_BTEng_F", "B_Kitbag_rgr_BTExp_F", "B_Kitbag_rgr_BTReconExp_F", "B_Kitbag_rgr_CTRGExp_F", "B_Kitbag_rgr_Para_3_F", "B_Kitbag_rgr_Para_8_F", "B_Mortar_01_support_grn_F", "B_Mortar_01_Weapon_grn_F", "B_ViperHarness_blk_F", "B_ViperHarness_ghex_Exp_F", "B_ViperHarness_ghex_F", "B_ViperHarness_ghex_JTAC_F", "B_ViperHarness_ghex_LAT_F", "B_ViperHarness_ghex_M_F", "B_ViperHarness_ghex_Medic_F", "B_ViperHarness_ghex_TL_F", "B_ViperHarness_hex_Exp_F", "B_ViperHarness_hex_F", "B_ViperHarness_hex_JTAC_F", "B_ViperHarness_hex_LAT_F", "B_ViperHarness_hex_M_F", "B_ViperHarness_hex_Medic_F", "B_ViperHarness_hex_TL_F", "B_ViperHarness_khk_F", "B_ViperHarness_oli_F", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_oli_F"};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Supplies_F_Exp_Ammoboxes
	{
		addonRootClass = "A3_Supplies_F_Exp";
		requiredAddons[] = {"A3_Supplies_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"Box_AAF_Equip_F", "Box_AAF_Uniforms_F", "Box_CSAT_Equip_F", "Box_CSAT_Uniforms_F", "Box_GEN_Equip_F", "Box_IED_Exp_F", "Box_NATO_Equip_F", "Box_NATO_Uniforms_F", "Box_Syndicate_Ammo_F", "Box_Syndicate_Wps_F", "Box_Syndicate_WpsLaunch_F", "Box_T_East_Ammo_F", "Box_T_East_Wps_F", "Box_T_East_WpsSpecial_F", "Box_T_NATO_Wps_F", "Box_T_NATO_WpsSpecial_F", "C_T_supplyCrate_F"};
		weapons[] = {};
	};
	class A3_Supplies_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - Ammoboxes and Supplies";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Supplies_F_Heli_Bladders
	{
		addonRootClass = "A3_Supplies_F_Heli";
		requiredAddons[] = {"A3_Supplies_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"ContainmentArea_01_forest_F", "ContainmentArea_01_sand_F", "ContainmentArea_02_forest_F", "ContainmentArea_02_sand_F", "Land_ContainmentArea_01_F", "Land_ContainmentArea_02_F", "Land_StorageBladder_01_F", "Land_StorageBladder_02_F", "StorageBladder_01_fuel_forest_F", "StorageBladder_01_fuel_sand_F", "StorageBladder_02_water_forest_F", "StorageBladder_02_water_sand_F"};
		weapons[] = {};
	};
	class A3_Supplies_F_Heli_CargoNets
	{
		addonRootClass = "A3_Supplies_F_Heli";
		requiredAddons[] = {"A3_Supplies_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"B_CargoNet_01_ammo_F", "CargoNet_01_barrels_F", "CargoNet_01_box_F", "I_CargoNet_01_ammo_F", "O_CargoNet_01_ammo_F"};
		weapons[] = {};
	};
	class A3_Supplies_F_Heli_Fuel
	{
		addonRootClass = "A3_Supplies_F_Heli";
		requiredAddons[] = {"A3_Supplies_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"FlexibleTank_01_forest_F", "FlexibleTank_01_sand_F", "Land_FlexibleTank_01_F"};
		weapons[] = {};
	};
	class A3_Supplies_F_Heli_Slingload
	{
		addonRootClass = "A3_Supplies_F_Heli";
		requiredAddons[] = {"A3_Supplies_F_Heli"};
		requiredVersion = 0.1;
		units[] = {"B_Slingload_01_Ammo_F", "B_Slingload_01_Cargo_F", "B_Slingload_01_Fuel_F", "B_Slingload_01_Medevac_F", "B_Slingload_01_Repair_F"};
		weapons[] = {};
	};
	class A3_Supplies_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Ammoboxes and Supplies";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Supplies_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Ammoboxes and Supplies";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Supplies_F_Orange_Ammoboxes
	{
		addonRootClass = "A3_Supplies_F_Orange";
		requiredAddons[] = {"A3_Supplies_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"Box_IDAP_AmmoOrd_F", "Box_IDAP_Equip_F", "Box_IDAP_Uniforms_F", "C_IDAP_supplyCrate_F"};
		weapons[] = {};
	};
	class A3_Supplies_F_Orange_Bags
	{
		addonRootClass = "A3_Supplies_F_Orange";
		requiredAddons[] = {"A3_Supplies_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"B_Carryall_ghex_Mine", "B_Carryall_khk_Mine", "B_Carryall_ocamo_Mine", "B_Carryall_oli_Mine", "B_Carryall_oucamo_Repair", "B_Kitbag_rgr_Mine", "B_LegStrapBag_black_F", "B_LegStrapBag_black_repair_F", "B_LegStrapBag_coyote_F", "B_LegStrapBag_coyote_repair_F", "B_LegStrapBag_olive_F", "B_LegStrapBag_olive_repair_F", "B_Messenger_Black_F", "B_Messenger_Coyote_F", "B_Messenger_Gray_F", "B_Messenger_Gray_Medical_F", "B_Messenger_IDAP_F", "B_Messenger_IDAP_Medical_F", "B_Messenger_IDAP_TrainingMines_F", "B_Messenger_Olive_F", "B_UAV_06_backpack_F", "B_UAV_06_medical_backpack_F", "C_IDAP_UAV_01_backpack_F", "C_IDAP_UAV_06_antimine_backpack_F", "C_IDAP_UAV_06_backpack_F", "C_IDAP_UAV_06_medical_backpack_F", "C_UAV_06_backpack_F", "C_UAV_06_medical_backpack_F", "I_UAV_06_backpack_F", "I_UAV_06_medical_backpack_F", "O_UAV_06_backpack_F", "O_UAV_06_medical_backpack_F", "UAV_06_backpack_base_F", "UAV_06_medical_backpack_base_F"};
		weapons[] = {};
	};
	class A3_Supplies_F_Orange_CargoNets
	{
		addonRootClass = "A3_Supplies_F_Orange";
		requiredAddons[] = {"A3_Supplies_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"C_IDAP_CargoNet_01_supplies_F"};
		weapons[] = {};
	};
	class A3_UAV_F_Characters_F_Gamma
	{
		requiredAddons[] = {"A3_Drones_F_Characters_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_UAV_F_Weapons_F_Gamma_Ammoboxes
	{
		requiredAddons[] = {"A3_Drones_F_Weapons_F_Gamma_Ammoboxes"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Ui_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - User Interface";
		requiredAddons[] = {"A3_Data_F", "A3_Functions_F", "A3_UiFonts_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - User Interface";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Curator
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Zeus Update - User Interface";
		requiredAddons[] = {"A3_Functions_F_Curator", "A3_Ui_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Data
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - User Interface Images";
		requiredAddons[] = {"A3_Ui_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - User Interface";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - User Interface";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Exp_A
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Nexus Update - User Interface";
		requiredAddons[] = {"A3_Data_F_Exp_A"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Heli
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Helicopters - User Interface";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - User Interface";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - User Interface";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - User Interface";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_MP_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen (Multiplayer) - User Interface";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - User Interface";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - User Interface";
		requiredAddons[] = {"A3_Data_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Tacops
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tac-Ops - User Interface";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Ui_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - User Interface";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_UiFonts_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Fonts";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Vegetation_F_Argo
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Malden - Flora";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Vegetation_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Flora";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Vegetation_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Flora";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Weapons_F
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Alpha - Weapons and Accessories";
		requiredAddons[] = {"A3_Anims_F_Config_Sdr", "A3_Data_F", "A3_Ui_F"};
		requiredVersion = 0.1;
		units[] = {"Bomb", "ContainerSupply", "FxCartridge", "FxCartridge_127", "FxCartridge_556", "FxCartridge_65", "FxCartridge_65_caseless", "FxCartridge_762", "FxCartridge_9mm", "FxCartridge_slug", "FxCartridge_Small", "FxExploArmor1", "FxExploArmor2", "FxExploArmor3", "FxExploArmor4", "FxExploGround1", "FxExploGround2", "Headgear_H_Bandanna_blu", "Headgear_H_Bandanna_camo", "Headgear_H_Bandanna_cbr", "Headgear_H_Bandanna_gry", "Headgear_H_Bandanna_khk", "Headgear_H_Bandanna_khk_hs", "Headgear_H_Bandanna_mcamo", "Headgear_H_Bandanna_sand", "Headgear_H_Bandanna_sgg", "Headgear_H_Bandanna_surfer", "Headgear_H_Bandanna_surfer_blk", "Headgear_H_Bandanna_surfer_grn", "Headgear_H_Beret_02", "Headgear_H_Beret_blk", "Headgear_H_Beret_Colonel", "Headgear_H_Booniehat_dgtl", "Headgear_H_Booniehat_khk", "Headgear_H_Booniehat_khk_hs", "Headgear_H_Booniehat_mcamo", "Headgear_H_Booniehat_oli", "Headgear_H_Booniehat_tan", "Headgear_H_Cap_blk", "Headgear_H_Cap_blk_CMMG", "Headgear_H_Cap_blk_ION", "Headgear_H_Cap_blk_Raven", "Headgear_H_Cap_blu", "Headgear_H_Cap_brn_SPECOPS", "Headgear_H_Cap_grn", "Headgear_H_Cap_grn_BI", "Headgear_H_Cap_headphones", "Headgear_H_Cap_khaki_specops_UK", "Headgear_H_Cap_oli", "Headgear_H_Cap_oli_hs", "Headgear_H_Cap_police", "Headgear_H_Cap_press", "Headgear_H_Cap_red", "Headgear_H_Cap_surfer", "Headgear_H_Cap_tan", "Headgear_H_Cap_tan_specops_US", "Headgear_H_Cap_usblack", "Headgear_H_CrewHelmetHeli_B", "Headgear_H_CrewHelmetHeli_I", "Headgear_H_CrewHelmetHeli_O", "Headgear_H_Hat_blue", "Headgear_H_Hat_brown", "Headgear_H_Hat_camo", "Headgear_H_Hat_checker", "Headgear_H_Hat_grey", "Headgear_H_Hat_tan", "Headgear_H_HelmetB", "Headgear_H_HelmetB_black", "Headgear_H_HelmetB_camo", "Headgear_H_HelmetB_desert", "Headgear_H_HelmetB_grass", "Headgear_H_HelmetB_light", "Headgear_H_HelmetB_light_black", "Headgear_H_HelmetB_light_desert", "Headgear_H_HelmetB_light_grass", "Headgear_H_HelmetB_light_sand", "Headgear_H_HelmetB_light_snakeskin", "Headgear_H_HelmetB_sand", "Headgear_H_HelmetB_snakeskin", "Headgear_H_HelmetCrew_B", "Headgear_H_HelmetCrew_I", "Headgear_H_HelmetCrew_O", "Headgear_H_HelmetIA", "Headgear_H_HelmetLeaderO_ocamo", "Headgear_H_HelmetLeaderO_oucamo", "Headgear_H_HelmetO_ocamo", "Headgear_H_HelmetO_oucamo", "Headgear_H_HelmetSpecB", "Headgear_H_HelmetSpecB_blk", "Headgear_H_HelmetSpecB_paint1", "Headgear_H_HelmetSpecB_paint2", "Headgear_H_HelmetSpecB_sand", "Headgear_H_HelmetSpecB_snakeskin", "Headgear_H_HelmetSpecO_blk", "Headgear_H_HelmetSpecO_ocamo", "Headgear_H_MilCap_blue", "Headgear_H_MilCap_dgtl", "Headgear_H_MilCap_gry", "Headgear_H_MilCap_mcamo", "Headgear_H_MilCap_ocamo", "Headgear_H_PilotHelmetFighter_B", "Headgear_H_PilotHelmetFighter_I", "Headgear_H_PilotHelmetFighter_O", "Headgear_H_PilotHelmetHeli_B", "Headgear_H_PilotHelmetHeli_I", "Headgear_H_PilotHelmetHeli_O", "Headgear_H_Shemag_olive", "Headgear_H_Shemag_olive_hs", "Headgear_H_ShemagOpen_khk", "Headgear_H_ShemagOpen_tan", "Headgear_H_StrawHat", "Headgear_H_StrawHat_dark", "Headgear_H_Watchcap_blk", "Headgear_H_Watchcap_camo", "Headgear_H_Watchcap_cbr", "Headgear_H_Watchcap_khk", "Item_acc_flashlight", "Item_acc_flashlight_pistol", "Item_acc_pointer_IR", "Item_B_UavTerminal", "Item_Binocular", "Item_FirstAidKit", "Item_I_UavTerminal", "Item_ItemCompass", "Item_ItemGPS", "Item_ItemMap", "Item_ItemRadio", "Item_ItemWatch", "Item_Laserdesignator", "Item_Medikit", "Item_MineDetector", "Item_muzzle_snds_acp", "Item_muzzle_snds_B", "Item_muzzle_snds_H", "Item_muzzle_snds_H_MG", "Item_muzzle_snds_L", "Item_muzzle_snds_M", "Item_NVGoggles", "Item_NVGoggles_INDEP", "Item_NVGoggles_OPFOR", "Item_O_UavTerminal", "Item_optic_Aco", "Item_optic_ACO_grn", "Item_optic_ACO_grn_smg", "Item_optic_Aco_smg", "Item_optic_Arco", "Item_optic_DMS", "Item_optic_Hamr", "Item_optic_Holosight", "Item_optic_Holosight_smg", "Item_optic_LRPS", "Item_optic_MRCO", "Item_optic_MRD", "Item_optic_Nightstalker", "Item_optic_NVS", "Item_optic_SOS", "Item_optic_tws", "Item_optic_tws_mg", "Item_optic_Yorris", "Item_Rangefinder", "Item_ToolKit", "Item_U_AntigonaBody", "Item_U_AttisBody", "Item_U_B_CombatUniform_mcam", "Item_U_B_CombatUniform_mcam_tshirt", "Item_U_B_CombatUniform_mcam_vest", "Item_U_B_CombatUniform_mcam_worn", "Item_U_B_CombatUniform_sgg", "Item_U_B_CombatUniform_sgg_tshirt", "Item_U_B_CombatUniform_sgg_vest", "Item_U_B_CombatUniform_wdl", "Item_U_B_CombatUniform_wdl_tshirt", "Item_U_B_CombatUniform_wdl_vest", "Item_U_B_CTRG_1", "Item_U_B_CTRG_2", "Item_U_B_CTRG_3", "Item_U_B_GhillieSuit", "Item_U_B_HeliPilotCoveralls", "Item_U_B_PilotCoveralls", "Item_U_B_Protagonist_VR", "Item_U_B_SpecopsUniform_sgg", "Item_U_B_survival_uniform", "Item_U_B_Wetsuit", "Item_U_BasicBody", "Item_U_BG_Guerilla1_1", "Item_U_BG_Guerilla2_1", "Item_U_BG_Guerilla2_2", "Item_U_BG_Guerilla2_3", "Item_U_BG_Guerilla3_1", "Item_U_BG_Guerilla3_2", "Item_U_BG_leader", "Item_U_C_Commoner1_1", "Item_U_C_Commoner1_2", "Item_U_C_Commoner1_3", "Item_U_C_Commoner2_1", "Item_U_C_Commoner2_2", "Item_U_C_Commoner2_3", "Item_U_C_Commoner_shorts", "Item_U_C_Farmer", "Item_U_C_Fisherman", "Item_U_C_FishermanOveralls", "Item_U_C_HunterBody_brn", "Item_U_C_HunterBody_grn", "Item_U_C_Poloshirt_blue", "Item_U_C_Poloshirt_burgundy", "Item_U_C_Poloshirt_redwhite", "Item_U_C_Poloshirt_salmon", "Item_U_C_Poloshirt_stripped", "Item_U_C_Poloshirt_tricolour", "Item_U_C_Poor_1", "Item_U_C_Poor_2", "Item_U_C_Poor_shorts_1", "Item_U_C_Poor_shorts_2", "Item_U_C_PriestBody", "Item_U_C_Scavenger_1", "Item_U_C_Scavenger_2", "Item_U_C_ShirtSurfer_shorts", "Item_U_C_TeeSurfer_shorts_1", "Item_U_C_TeeSurfer_shorts_2", "Item_U_C_WorkerCoveralls", "Item_U_C_WorkerOveralls", "Item_U_Competitor", "Item_U_I_CombatUniform", "Item_U_I_CombatUniform_shortsleeve", "Item_U_I_CombatUniform_tshirt", "Item_U_I_G_resistanceLeader_F", "Item_U_I_G_Story_Protagonist_F", "Item_U_I_GhillieSuit", "Item_U_I_HeliPilotCoveralls", "Item_U_I_OfficerUniform", "Item_U_I_pilotCoveralls", "Item_U_I_Protagonist_VR", "Item_U_I_Wetsuit", "Item_U_IG_Guerilla1_1", "Item_U_IG_Guerilla2_1", "Item_U_IG_Guerilla2_2", "Item_U_IG_Guerilla2_3", "Item_U_IG_Guerilla3_1", "Item_U_IG_Guerilla3_2", "Item_U_IG_leader", "Item_U_KerryBody", "Item_U_MillerBody", "Item_U_NikosBody", "Item_U_O_CombatUniform_ocamo", "Item_U_O_CombatUniform_oucamo", "Item_U_O_GhillieSuit", "Item_U_O_OfficerUniform_ocamo", "Item_U_O_PilotCoveralls", "Item_U_O_Protagonist_VR", "Item_U_O_SpecopsUniform_blk", "Item_U_O_SpecopsUniform_ocamo", "Item_U_O_Wetsuit", "Item_U_OG_Guerilla1_1", "Item_U_OG_Guerilla2_1", "Item_U_OG_Guerilla2_2", "Item_U_OG_Guerilla2_3", "Item_U_OG_Guerilla3_1", "Item_U_OG_Guerilla3_2", "Item_U_OG_leader", "Item_U_OI_Scientist", "Item_U_OrestesBody", "Item_U_Rangemaster", "LaserTargetC", "LaserTargetCBase", "LaserTargetE", "LaserTargetEBase", "LaserTargetW", "LaserTargetWBase", "NVG_TargetC", "NVG_TargetE", "NVG_TargetG", "NVG_TargetW", "placed_B_IR_grenade", "placed_chemlight_blue", "placed_chemlight_green", "placed_chemlight_red", "placed_chemlight_yellow", "placed_I_IR_grenade", "placed_O_IR_grenade", "test_EmptyObjectForBubbles", "test_EmptyObjectForFireBig", "test_EmptyObjectForSmoke", "Vest_V_BandollierB_blk", "Vest_V_BandollierB_cbr", "Vest_V_BandollierB_khk", "Vest_V_BandollierB_oli", "Vest_V_BandollierB_rgr", "Vest_V_Chestrig_blk", "Vest_V_Chestrig_khk", "Vest_V_Chestrig_oli", "Vest_V_Chestrig_rgr", "Vest_V_HarnessO_brn", "Vest_V_HarnessO_gry", "Vest_V_HarnessOGL_brn", "Vest_V_HarnessOGL_gry", "Vest_V_I_G_resistanceLeader_F", "Vest_V_PlateCarrier1_blk", "Vest_V_PlateCarrier1_rgr", "Vest_V_PlateCarrier2_blk", "Vest_V_PlateCarrier2_rgr", "Vest_V_PlateCarrier_Kerry", "Vest_V_PlateCarrierH_CTRG", "Vest_V_PlateCarrierIA1_dgtl", "Vest_V_PlateCarrierIA2_dgtl", "Vest_V_PlateCarrierL_CTRG", "Vest_V_Rangemaster_belt", "Vest_V_RebreatherB", "Vest_V_RebreatherIA", "Vest_V_RebreatherIR", "Vest_V_TacVest_blk", "Vest_V_TacVest_blk_POLICE", "Vest_V_TacVest_brn", "Vest_V_TacVest_camo", "Vest_V_TacVest_khk", "Vest_V_TacVest_oli", "Vest_V_TacVestIR_blk", "Weapon_arifle_Katiba_C_F", "Weapon_arifle_Katiba_F", "Weapon_arifle_Katiba_GL_F", "Weapon_arifle_Mk20_F", "Weapon_arifle_Mk20_GL_F", "Weapon_arifle_Mk20_GL_plain_F", "Weapon_arifle_Mk20_plain_F", "Weapon_arifle_Mk20C_F", "Weapon_arifle_Mk20C_plain_F", "Weapon_arifle_MX_Black_F", "Weapon_arifle_MX_F", "Weapon_arifle_MX_GL_Black_F", "Weapon_arifle_MX_GL_F", "Weapon_arifle_MX_SW_Black_F", "Weapon_arifle_MX_SW_F", "Weapon_arifle_MXC_Black_F", "Weapon_arifle_MXC_F", "Weapon_arifle_MXM_Black_F", "Weapon_arifle_MXM_F", "Weapon_arifle_SDAR_F", "Weapon_arifle_TRG20_F", "Weapon_arifle_TRG21_F", "Weapon_arifle_TRG21_GL_F", "Weapon_Empty", "Weapon_hgun_ACPC2_F", "Weapon_hgun_P07_F", "Weapon_hgun_PDW2000_F", "Weapon_hgun_Pistol_heavy_01_F", "Weapon_hgun_Pistol_heavy_02_F", "Weapon_hgun_Rook40_F", "Weapon_launch_B_Titan_F", "Weapon_launch_I_Titan_F", "Weapon_launch_I_Titan_short_F", "Weapon_launch_launch_B_Titan_short_F", "Weapon_launch_NLAW_F", "Weapon_launch_O_Titan_F", "Weapon_launch_O_Titan_short_F", "Weapon_launch_RPG32_F", "Weapon_LMG_Mk200_F", "Weapon_LMG_Zafir_F", "Weapon_SMG_01_F", "Weapon_SMG_02_F", "Weapon_srifle_DMR_01_F", "Weapon_srifle_EBR_F", "Weapon_srifle_GM6_F", "Weapon_srifle_LRR_F", "WeaponHolder_Single_F", "WeaponHolder_Single_limited_item_F", "WeaponHolder_Single_limited_magazine_F", "WeaponHolder_Single_limited_weapon_F"};
		url = "https://www.arma3.com";
		weapons[] = {"autocannon_30mm", "autocannon_30mm_CTWS", "autocannon_35mm", "autocannon_40mm_CTWS", "autocannon_Base_F", "BikeHorn", "Binocular", "Bomb_03_Plane_CAS_02_F", "Bomb_04_Plane_CAS_01_F", "cannon_105mm", "cannon_120mm", "cannon_120mm_long", "cannon_125mm", "Cannon_30mm_Plane_CAS_02_F", "CarHorn", "CMFlareLauncher", "CMFlareLauncher_Singles", "CMFlareLauncher_Triples", "FakeHorn", "FlareLauncher", "gatling_20mm", "gatling_25mm", "gatling_30mm", "Gatling_30mm_Plane_CAS_01_F", "GBU12BombLauncher", "GMG_20mm", "GMG_40mm", "HandGunBase", "HMG_01", "HMG_127", "HMG_127_APC", "HMG_127_MBT", "HMG_127_UGV", "HMG_M2", "HMG_NSVT", "HMG_static", "Integrated_NVG_F", "Integrated_NVG_TI_0_F", "Integrated_NVG_TI_1_F", "ItemCompass", "ItemGPS", "ItemMap", "ItemRadio", "ItemWatch", "Laserdesignator", "Laserdesignator_mounted", "Laserdesignator_pilotCamera", "Laserdesignator_vehicle", "LMG_65mm_body", "LMG_coax", "LMG_coax_ext", "LMG_M200", "LMG_M200_body", "LMG_Minigun", "LMG_Minigun2", "LMG_Minigun_heli", "LMG_Minigun_Transport", "LMG_Minigun_Transport2", "LMG_RCWS", "M134_minigun", "M2", "MineDetector", "MiniCarHorn", "Missile_AA_03_Plane_CAS_02_F", "Missile_AA_04_Plane_CAS_01_F", "Missile_AGM_01_Plane_CAS_02_F", "Missile_AGM_02_Plane_CAS_01_F", "MissileLauncher", "missiles_ASRAAM", "missiles_DAGR", "missiles_DAR", "missiles_SCALPEL", "missiles_titan", "missiles_titan_AA", "missiles_titan_static", "missiles_Zephyr", "Mk82BombLauncher", "mortar_155mm_AMOS", "mortar_82mm", "NVGoggles", "NVGoggles_INDEP", "NVGoggles_OPFOR", "Put", "Rangefinder", "Rifle", "Rocket_03_AP_Plane_CAS_02_F", "Rocket_03_HE_Plane_CAS_02_F", "Rocket_04_AP_Plane_CAS_01_F", "Rocket_04_HE_Plane_CAS_01_F", "RocketPods", "rockets_230mm_GAT", "rockets_Skyfire", "SEARCHLIGHT", "SmokeLauncher", "SportCarHorn", "Throw", "TruckHorn", "TruckHorn2", "TruckHorn3", "Twin_Cannon_20mm", "weapon_LGBLauncherBase", "weapon_VLSBase"};
	};
	class A3_Weapons_F_AAF
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Acc
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Items"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"acc_flashlight", "acc_flashlight_pistol", "acc_flashlight_smg_01", "acc_pointer_IR", "muzzle_snds_acp", "muzzle_snds_B", "muzzle_snds_H", "muzzle_snds_H_MG", "muzzle_snds_H_SW", "muzzle_snds_L", "muzzle_snds_M", "optic_Aco", "optic_ACO_grn", "optic_ACO_grn_smg", "optic_Aco_smg", "optic_Arco", "optic_DMS", "optic_Hamr", "optic_Holosight", "optic_Holosight_smg", "optic_LRPS", "optic_MRCO", "optic_MRD", "optic_Nightstalker", "optic_NVS", "optic_SOS", "optic_tws", "optic_tws_mg", "optic_Yorris", "Zasleh2"};
	};
	class A3_Weapons_F_Ammoboxes
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {"B_Assault_Diver", "B_AssaultPack_Base", "B_AssaultPack_blk", "B_AssaultPack_blk_DiverExp", "B_AssaultPack_cbr", "B_AssaultPack_dgtl", "B_AssaultPack_Kerry", "B_AssaultPack_khk", "B_AssaultPack_mcamo", "B_AssaultPack_mcamo_AA", "B_AssaultPack_mcamo_AAR", "B_AssaultPack_mcamo_Ammo", "B_AssaultPack_mcamo_AT", "B_AssaultPack_ocamo", "B_AssaultPack_rgr", "B_AssaultPack_rgr_LAT", "B_AssaultPack_rgr_Medic", "B_AssaultPack_rgr_ReconExp", "B_AssaultPack_rgr_ReconLAT", "B_AssaultPack_rgr_ReconMedic", "B_AssaultPack_rgr_Repair", "B_AssaultPack_sgg", "B_AssaultPackG", "B_Bergen_Base", "B_Bergen_blk", "B_Bergen_mcamo", "B_Bergen_rgr", "B_Bergen_sgg", "B_BergenC_Base", "B_BergenC_blu", "B_BergenC_grn", "B_BergenC_red", "B_BergenG", "B_BergenG_TEST_B_Soldier_overloaded", "B_Carryall_Base", "B_Carryall_cbr", "B_Carryall_cbr_AAT", "B_Carryall_khk", "B_Carryall_mcamo", "B_Carryall_mcamo_AAA", "B_Carryall_mcamo_AAT", "B_Carryall_ocamo", "B_Carryall_ocamo_AAA", "B_Carryall_ocamo_AAR", "B_Carryall_ocamo_Eng", "B_Carryall_ocamo_Exp", "B_Carryall_oli", "B_Carryall_oucamo", "B_Carryall_oucamo_AAA", "B_Carryall_oucamo_AAR", "B_Carryall_oucamo_AAT", "B_Carryall_oucamo_Eng", "B_Carryall_oucamo_Exp", "B_FieldPack_Base", "B_FieldPack_blk", "B_FieldPack_blk_DiverExp", "B_FieldPack_cbr", "B_FieldPack_cbr_AA", "B_FieldPack_cbr_AAA", "B_FieldPack_cbr_AAT", "B_FieldPack_cbr_Ammo", "B_FieldPack_cbr_AT", "B_FieldPack_cbr_LAT", "B_FieldPack_cbr_Medic", "B_FieldPack_cbr_Repair", "B_FieldPack_cbr_RPG_AT", "B_FieldPack_khk", "B_FieldPack_ocamo", "B_FieldPack_ocamo_AA", "B_FieldPack_ocamo_AAR", "B_FieldPack_ocamo_Medic", "B_FieldPack_ocamo_ReconExp", "B_FieldPack_ocamo_ReconMedic", "B_FieldPack_oli", "B_FieldPack_oucamo", "B_FieldPack_oucamo_AA", "B_FieldPack_oucamo_AAR", "B_FieldPack_oucamo_Ammo", "B_FieldPack_oucamo_AT", "B_FieldPack_oucamo_LAT", "B_FieldPack_oucamo_Medic", "B_FieldPack_oucamo_Repair", "B_HuntingBackpack", "B_Kitbag_Base", "B_Kitbag_cbr", "B_Kitbag_mcamo", "B_Kitbag_mcamo_Eng", "B_Kitbag_rgr", "B_Kitbag_rgr_AAR", "B_Kitbag_rgr_Exp", "B_Kitbag_sgg", "B_Kitbag_tan", "B_OutdoorPack_Base", "B_OutdoorPack_blk", "B_OutdoorPack_blu", "B_OutdoorPack_tan", "B_Parachute", "B_supplyCrate_F", "B_TacticalPack_Base", "B_TacticalPack_blk", "B_TacticalPack_mcamo", "B_TacticalPack_ocamo", "B_TacticalPack_oli", "B_TacticalPack_oli_AAR", "B_TacticalPack_rgr", "Bag_Base", "Box_Ammo_F", "Box_East_Ammo_F", "Box_East_AmmoOrd_F", "Box_East_AmmoVeh_F", "Box_East_Grenades_F", "Box_East_Support_F", "Box_East_Wps_F", "Box_East_WpsLaunch_F", "Box_East_WpsSpecial_F", "Box_IND_Ammo_F", "Box_IND_AmmoOrd_F", "Box_IND_AmmoVeh_F", "Box_IND_Grenades_F", "Box_IND_Support_F", "Box_IND_Wps_F", "Box_IND_WpsLaunch_F", "Box_IND_WpsSpecial_F", "Box_NATO_Ammo_F", "Box_NATO_AmmoOrd_F", "Box_NATO_AmmoVeh_F", "Box_NATO_Grenades_F", "Box_NATO_Support_F", "Box_NATO_Wps_F", "Box_NATO_WpsLaunch_F", "Box_NATO_WpsSpecial_F", "Box_Wps_F", "C_Bergen_Base", "C_Bergen_blu", "C_Bergen_grn", "C_Bergen_red", "C_supplyCrate_F", "G_AssaultPack", "G_Bergen", "G_Carryall_Ammo", "G_Carryall_Exp", "G_FieldPack_LAT", "G_FieldPack_Medic", "G_TacticalPack_Eng", "GroundWeaponHolder", "GroundWeaponHolder_Scripted", "I_Assault_Diver", "I_Carryall_oli_AAA", "I_Carryall_oli_AAT", "I_Carryall_oli_Eng", "I_Carryall_oli_Exp", "I_Fieldpack_oli_AA", "I_Fieldpack_oli_AAR", "I_Fieldpack_oli_Ammo", "I_Fieldpack_oli_AT", "I_Fieldpack_oli_LAT", "I_Fieldpack_oli_Medic", "I_Fieldpack_oli_Repair", "I_supplyCrate_F", "IG_supplyCrate_F", "Land_Box_AmmoOld_F", "O_Assault_Diver", "O_supplyCrate_F", "ReammoBox_F", "WeaponHolderSimulated", "WeaponHolderSimulated_Scripted"};
		weapons[] = {};
	};
	class A3_Weapons_F_Beta
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Beta - Weapons and Accessories";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Weapons_F_Beta_Acc
	{
		addonRootClass = "A3_Weapons_F_Beta";
		requiredAddons[] = {"A3_Weapons_F_Acc", "A3_Weapons_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Beta_Ammoboxes
	{
		addonRootClass = "A3_Weapons_F_Beta";
		requiredAddons[] = {"A3_Weapons_F_Ammoboxes", "A3_Weapons_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_beta_EBR
	{
		requiredAddons[] = {"A3_Weapons_F_Beta_LongRangeRifles_EBR"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Beta_LongRangeRifles_EBR
	{
		addonRootClass = "A3_Weapons_F_Beta";
		requiredAddons[] = {"A3_Weapons_F_Beta", "A3_Weapons_F_LongRangeRifles_EBR"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Beta_LongRangeRifles_GM6
	{
		addonRootClass = "A3_Weapons_F_Beta";
		requiredAddons[] = {"A3_Weapons_F_Beta", "A3_Weapons_F_LongRangeRifles_GM6"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Beta_LongRangeRifles_M320
	{
		addonRootClass = "A3_Weapons_F_Beta";
		requiredAddons[] = {"A3_Weapons_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Beta_Rifles_Khaybar
	{
		addonRootClass = "A3_Weapons_F_Beta";
		requiredAddons[] = {"A3_Weapons_F_Beta", "A3_Weapons_F_Rifles_Khaybar"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Beta_Rifles_MX
	{
		addonRootClass = "A3_Weapons_F_Beta";
		requiredAddons[] = {"A3_Weapons_F_Beta", "A3_Weapons_F_Rifles_MX"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Beta_Rifles_TRG20
	{
		addonRootClass = "A3_Weapons_F_Beta";
		requiredAddons[] = {"A3_Weapons_F_Beta", "A3_Weapons_F_Rifles_TRG20"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Bootcamp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Bootcamp Update - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Weapons_F_Bootcamp_Ammoboxes
	{
		addonRootClass = "A3_Weapons_F_Bootcamp";
		requiredAddons[] = {"A3_Weapons_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {"Box_FIA_Ammo_F", "Box_FIA_Support_F", "Box_FIA_Wps_F"};
		weapons[] = {};
	};
	class A3_Weapons_F_Bootcamp_LongRangeRifles_GM6
	{
		requiredAddons[] = {"A3_Weapons_F_Bootcamp_LongRangeRifles_GM6_Camo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Bootcamp_LongRangeRifles_GM6_Camo
	{
		addonRootClass = "A3_Weapons_F_Bootcamp";
		requiredAddons[] = {"A3_Weapons_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Bootcamp_LongRangeRifles_M320
	{
		requiredAddons[] = {"A3_Weapons_F_Bootcamp_LongRangeRifles_M320_Camo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Bootcamp_LongRangeRifles_M320_Camo
	{
		addonRootClass = "A3_Weapons_F_Bootcamp";
		requiredAddons[] = {"A3_Weapons_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_CSAT
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Destroyer
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Destroyer - Weapons and Accessories";
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {"weapon_Artillery_rockets_230mm_GAT", "weapon_ShipCannon_120mm"};
	};
	class A3_Weapons_F_DummyWeapons
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EBR
	{
		requiredAddons[] = {"A3_Weapons_F_LongRangeRifles_EBR"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Enoch
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Enoch - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {"FxCartridge_762x39", "Item_bipod_02_F_arid", "Item_bipod_02_F_lush", "Item_I_E_UavTerminal", "Item_muzzle_snds_B_arid_F", "Item_muzzle_snds_B_lush_F", "Item_O_NVGoggles_grn_F", "Item_optic_Arco_AK_arid_F", "Item_optic_Arco_AK_blk_F", "Item_optic_Arco_AK_lush_F", "Item_optic_Arco_arid_F", "Item_optic_Arco_lush_F", "Item_optic_DMS_weathered_F", "Item_optic_DMS_weathered_Kir_F", "Item_optic_Holosight_arid_F", "Item_optic_Holosight_lush_F", "Item_optic_ico_01_black_f", "Item_optic_ico_01_camo_f", "Item_optic_ico_01_f", "Item_optic_ico_01_sand_f", "Item_optic_MRD_black", "placed_I_E_IR_grenade", "placed_O_R_IR_grenade", "Weapon_arifle_AK12_arid_f", "Weapon_arifle_AK12_GL_arid_F", "Weapon_arifle_AK12_GL_lush_F", "Weapon_arifle_AK12_lush_f", "Weapon_arifle_AK12U_arid_f", "Weapon_arifle_AK12U_F", "Weapon_arifle_AK12U_lush_f", "Weapon_arifle_MSBS65_black_F", "Weapon_arifle_MSBS65_camo_F", "Weapon_arifle_MSBS65_F", "Weapon_arifle_MSBS65_GL_black_F", "Weapon_arifle_MSBS65_GL_camo_F", "Weapon_arifle_MSBS65_GL_F", "Weapon_arifle_MSBS65_GL_sand_F", "Weapon_arifle_MSBS65_Mark_black_F", "Weapon_arifle_MSBS65_Mark_camo_F", "Weapon_arifle_MSBS65_Mark_F", "Weapon_arifle_MSBS65_Mark_sand_F", "Weapon_arifle_MSBS65_sand_F", "Weapon_arifle_MSBS65_UBS_black_F", "Weapon_arifle_MSBS65_UBS_camo_F", "Weapon_arifle_MSBS65_UBS_F", "Weapon_arifle_MSBS65_UBS_sand_F", "Weapon_arifle_RPK12_arid_f", "Weapon_arifle_RPK12_F", "Weapon_arifle_RPK12_lush_f", "Weapon_hgun_Pistol_heavy_01_green_F", "Weapon_launch_B_Titan_olive_F", "Weapon_launch_I_Titan_eaf_F", "Weapon_launch_RPG32_green_F", "Weapon_LMG_Mk200_black_F", "Weapon_sgun_HunterShotgun_01_F", "Weapon_sgun_HunterShotgun_01_sawedoff_F", "Weapon_srifle_DMR_06_hunter_F"};
		url = "https://www.arma3.com";
		weapons[] = {"arifle_MX_Black_ACO_FL_F", "arifle_MX_Black_ACO_Pointer_F", "arifle_MX_Black_ACO_Pointer_Snds_F", "arifle_MX_Black_Hamr_Pointer_Snds_F", "arifle_MX_Black_Holo_Pointer_F", "arifle_MX_Black_Pointer_F", "arifle_MX_GL_Black_ACO_F", "arifle_MX_GL_Black_Holo_Pointer_Snds_F", "arifle_MX_SW_Black_Pointer_F", "arifle_MXC_Black_ACO_F", "arifle_MXC_Black_ACO_Pointer_Snds_F", "arifle_MXC_Black_Holo_FL_F", "arifle_MXC_Black_Holo_Pointer_F", "arifle_MXM_Black_MOS_Pointer_Bipod_F", "arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F", "DeminingDisruptor_01_F", "Item_AntidoteKit_01_F", "Item_DeconKit_01_F", "O_NVGoggles_grn_F", "ProbingLaser_01_F", "srifle_DMR_04_DMS_weathered_Kir_F_F"};
	};
	class A3_Weapons_F_Enoch_Acc
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"bipod_02_F_arid", "bipod_02_F_lush", "muzzle_snds_B_arid_F", "muzzle_snds_B_lush_F", "muzzle_tma_65", "optic_Arco_AK_arid_F", "optic_Arco_AK_blk_F", "optic_Arco_AK_lush_F", "optic_Arco_arid_F", "optic_Arco_lush_F", "optic_DMS_weathered_F", "optic_DMS_weathered_Kir_F", "optic_Holosight_arid_F", "optic_Holosight_lush_F", "optic_ico_01_black_f", "optic_ico_01_camo_f", "optic_ico_01_f", "optic_ico_01_sand_f", "optic_MRD_black"};
	};
	class A3_Weapons_F_Enoch_Items
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"I_E_UavTerminal"};
	};
	class A3_Weapons_F_Enoch_Launchers_RPG32
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_RPG32_camo_F", "launch_RPG32_green_F"};
	};
	class A3_Weapons_F_Enoch_Launchers_Titan
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_B_Titan_olive_F", "launch_I_Titan_eaf_F"};
	};
	class A3_Weapons_F_Enoch_LongRangeRifles_DMR_06
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_DMR_06_hunter_F", "srifle_DMR_06_hunter_khs_F"};
	};
	class A3_Weapons_F_Enoch_Machineguns_M200
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"LMG_Mk200_black_ACO_pointer_F", "LMG_Mk200_black_F", "LMG_Mk200_black_LP_BI_F"};
	};
	class A3_Weapons_F_Enoch_Pistols_Pistol_Heavy_01
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"hgun_Pistol_heavy_01_green_F", "hgun_Pistol_heavy_01_green_snds_F"};
	};
	class A3_Weapons_F_Enoch_Rifles_AK12
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_AK12_arid_F", "arifle_AK12_GL_arid_F", "arifle_AK12_GL_lush_arco_pointer_F", "arifle_AK12_GL_lush_arco_snds_pointer_F", "arifle_AK12_GL_lush_F", "arifle_AK12_GL_lush_holo_pointer_F", "arifle_AK12_GL_lush_holo_snds_pointer_F", "arifle_AK12_lush_arco_pointer_F", "arifle_AK12_lush_arco_snds_pointer_bipod_F", "arifle_AK12_lush_arco_snds_pointer_F", "arifle_AK12_lush_F", "arifle_AK12_lush_snds_pointer_F", "arifle_AK12U_arid_F", "arifle_AK12U_F", "arifle_AK12U_lush_F", "arifle_AK12U_lush_holo_F", "arifle_AK12U_lush_holo_pointer_F", "arifle_AK12U_lush_holo_snds_pointer_F", "arifle_AK12U_lush_snds_pointer_F", "arifle_RPK12_arid_F", "arifle_RPK12_F", "arifle_RPK12_lush_arco_pointer_F", "arifle_RPK12_lush_arco_snds_pointer_F", "arifle_RPK12_lush_F", "arifle_RPK12_lush_holo_snds_pointer_F"};
	};
	class A3_Weapons_F_Enoch_Rifles_HunterShotgun_01
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"sgun_HunterShotgun_01_F", "sgun_HunterShotgun_01_sawedoff_F"};
	};
	class A3_Weapons_F_Enoch_Rifles_MSBS
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_MSBS65_black_F", "arifle_MSBS65_black_ico_F", "arifle_MSBS65_black_ico_pointer_f", "arifle_MSBS65_camo_F", "arifle_MSBS65_F", "arifle_MSBS65_GL_black_F", "arifle_MSBS65_GL_black_ico_F", "arifle_MSBS65_GL_black_ico_pointer_f", "arifle_MSBS65_GL_camo_F", "arifle_MSBS65_GL_F", "arifle_MSBS65_GL_ico_F", "arifle_MSBS65_GL_ico_pointer_f", "arifle_MSBS65_GL_sand_F", "arifle_MSBS65_ico_F", "arifle_MSBS65_ico_pointer_f", "arifle_MSBS65_Mark_black_F", "arifle_MSBS65_Mark_camo_F", "arifle_MSBS65_Mark_F", "arifle_MSBS65_Mark_sand_F", "arifle_MSBS65_Mark_SOS_LP_BI_F", "arifle_MSBS65_sand_F", "arifle_MSBS65_UBS_black_F", "arifle_MSBS65_UBS_black_ico_F", "arifle_MSBS65_UBS_black_ico_pointer_f", "arifle_MSBS65_UBS_camo_F", "arifle_MSBS65_UBS_F", "arifle_MSBS65_UBS_ico_F", "arifle_MSBS65_UBS_ico_pointer_f", "arifle_MSBS65_UBS_sand_F", "arifle_MSBS65_UBS_snds_ico_pointer_F"};
	};
	class A3_Weapons_F_Enoch_Rifles_MX
	{
		addonRootClass = "A3_Weapons_F_Enoch";
		requiredAddons[] = {"A3_Weapons_F_Enoch"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPA
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Survive Episode - Weapons and Accessories";
		requiredAddons[] = {"A3_Weapons_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Weapons_F_EPA_Acc
	{
		addonRootClass = "A3_Weapons_F_EPA";
		requiredAddons[] = {"A3_Weapons_F_Acc", "A3_Weapons_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPA_Ammoboxes
	{
		addonRootClass = "A3_Weapons_F_EPA";
		requiredAddons[] = {"A3_Weapons_F_EPA", "A3_Weapons_F_Gamma_Ammoboxes"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPA_EBR
	{
		requiredAddons[] = {"A3_Weapons_F_Gamma_LongRangeRifles_EBR"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPA_LongRangeRifles_DMR_01
	{
		requiredAddons[] = {"A3_Weapons_F_LongRangeRifles_DMR_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPA_LongRangeRifles_GM6
	{
		requiredAddons[] = {"A3_Weapons_F_Beta_LongRangeRifles_GM6"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPA_Rifles_MX
	{
		requiredAddons[] = {"A3_Weapons_F_Gamma_Rifles_MX"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPB
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Adapt Episode - Weapons and Accessories";
		requiredAddons[] = {"A3_Weapons_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Weapons_F_EPB_Acc
	{
		addonRootClass = "A3_Weapons_F_EPB";
		requiredAddons[] = {"A3_Weapons_F_Acc", "A3_Weapons_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPB_Ammoboxes
	{
		addonRootClass = "A3_Weapons_F_EPB";
		requiredAddons[] = {"A3_Weapons_F_EPA_Ammoboxes", "A3_Weapons_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPB_LongRangeRifles_GM3
	{
		requiredAddons[] = {"A3_Weapons_F_EPB_LongRangeRifles_GM6"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPB_LongRangeRifles_GM6
	{
		addonRootClass = "A3_Weapons_F_EPB";
		requiredAddons[] = {"A3_Weapons_F_EPB", "A3_Weapons_F_LongRangeRifles_GM6"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPB_LongRangeRifles_M320
	{
		requiredAddons[] = {"A3_Weapons_F_Beta_LongRangeRifles_M320"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPB_Rifles_MX_Black
	{
		requiredAddons[] = {"A3_Weapons_F_Rifles_MX_Black"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_EPC
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Win Episode - Weapons and Accessories";
		requiredAddons[] = {"A3_Weapons_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Weapons_F_Exp
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Apex - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"Item_bipod_01_F_khk", "Item_Laserdesignator_01_khk_F", "Item_Laserdesignator_02_ghex_F", "Item_muzzle_snds_58_blk_F", "Item_muzzle_snds_58_wdm_F", "Item_muzzle_snds_65_TI_blk_F", "Item_muzzle_snds_65_TI_ghex_F", "Item_muzzle_snds_65_TI_hex_F", "Item_muzzle_snds_B_khk_F", "Item_muzzle_snds_B_snd_F", "Item_muzzle_snds_H_khk_F", "Item_muzzle_snds_H_MG_blk_F", "Item_muzzle_snds_H_MG_khk_F", "Item_muzzle_snds_m_khk_F", "Item_muzzle_snds_m_snd_F", "Item_NVGoggles_tna_F", "Item_NVGogglesB_blk_F", "Item_NVGogglesB_grn_F", "Item_NVGogglesB_gry_F", "Item_O_NVGoggles_ghex_F", "Item_O_NVGoggles_hex_F", "Item_O_NVGoggles_urb_F", "Item_optic_Arco_blk_F", "Item_optic_Arco_ghex_F", "Item_optic_DMS_ghex_F", "Item_optic_ERCO_blk_F", "Item_optic_ERCO_khk_F", "Item_optic_ERCO_snd_F", "Item_optic_Hamr_khk_F", "Item_optic_Holosight_blk_F", "Item_optic_Holosight_khk_F", "Item_optic_Holosight_smg_blk_F", "Item_optic_LRPS_ghex_F", "Item_optic_LRPS_tna_F", "Item_optic_SOS_khk_F", "Weapon_arifle_AK12_F", "Weapon_arifle_AK12_GL_F", "Weapon_arifle_AKM_F", "Weapon_arifle_AKS_F", "Weapon_arifle_ARX_blk_F", "Weapon_arifle_ARX_ghex_F", "Weapon_arifle_ARX_hex_F", "Weapon_arifle_CTAR_blk_F", "Weapon_arifle_CTAR_ghex_F", "Weapon_arifle_CTAR_GL_blk_F", "Weapon_arifle_CTAR_GL_ghex_F", "Weapon_arifle_CTAR_GL_hex_F", "Weapon_arifle_CTAR_hex_F", "Weapon_arifle_CTARS_blk_F", "Weapon_arifle_CTARS_ghex_F", "Weapon_arifle_CTARS_hex_F", "Weapon_arifle_MX_GL_khk_F", "Weapon_arifle_MX_khk_F", "Weapon_arifle_MX_SW_khk_F", "Weapon_arifle_MXC_khk_F", "Weapon_arifle_MXM_khk_F", "Weapon_arifle_SPAR_01_blk_F", "Weapon_arifle_SPAR_01_GL_blk_F", "Weapon_arifle_SPAR_01_GL_khk_F", "Weapon_arifle_SPAR_01_GL_snd_F", "Weapon_arifle_SPAR_01_khk_F", "Weapon_arifle_SPAR_01_snd_F", "Weapon_arifle_SPAR_02_blk_F", "Weapon_arifle_SPAR_02_khk_F", "Weapon_arifle_SPAR_02_snd_F", "Weapon_arifle_SPAR_03_blk_F", "Weapon_arifle_SPAR_03_khk_F", "Weapon_arifle_SPAR_03_snd_F", "Weapon_hgun_P07_khk_F", "Weapon_hgun_Pistol_01_F", "Weapon_launch_B_Titan_short_tna_F", "Weapon_launch_B_Titan_tna_F", "Weapon_launch_O_Titan_ghex_F", "Weapon_launch_O_Titan_short_ghex_F", "Weapon_launch_RPG32_ghex_F", "Weapon_launch_RPG7_F", "Weapon_LMG_03_F", "Weapon_SMG_05_F", "Weapon_srifle_DMR_07_blk_F", "Weapon_srifle_DMR_07_ghex_F", "Weapon_srifle_DMR_07_hex_F", "Weapon_srifle_GM6_ghex_F", "Weapon_srifle_LRR_tna_F"};
		url = "https://www.arma3.com";
		weapons[] = {"arifle_MX_GL_khk_ACO_F", "arifle_MX_GL_khk_F", "arifle_MX_GL_khk_Hamr_Pointer_F", "arifle_MX_GL_khk_Holo_Pointer_Snds_F", "arifle_MX_khk_ACO_Pointer_F", "arifle_MX_khk_ACO_Pointer_Snds_F", "arifle_MX_khk_F", "arifle_MX_khk_Hamr_Pointer_F", "arifle_MX_khk_Hamr_Pointer_Snds_F", "arifle_MX_khk_Holo_Pointer_F", "arifle_MX_khk_Pointer_F", "arifle_MX_SW_khk_F", "arifle_MX_SW_khk_Pointer_F", "arifle_MXC_khk_ACO_F", "arifle_MXC_khk_ACO_Pointer_Snds_F", "arifle_MXC_khk_F", "arifle_MXC_khk_Holo_Pointer_F", "arifle_MXM_khk_F", "arifle_MXM_khk_MOS_Pointer_Bipod_F", "arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F", "autocannon_40mm_VTOL_01", "bipod_01_F_khk", "cannon_105mm_VTOL_01", "gatling_20mm_VTOL_01", "gatling_30mm_VTOL_02", "hgun_P07_khk_F", "hgun_P07_khk_Snds_F", "HMG_127_LSV_01", "Laserdesignator_01_khk_F", "Laserdesignator_02_ghex_F", "missiles_Jian", "MMG_02_vehicle", "muzzle_snds_58_blk_F", "muzzle_snds_58_ghex_F", "muzzle_snds_58_hex_F", "muzzle_snds_58_wdm_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_65_TI_hex_F", "muzzle_snds_B_khk_F", "muzzle_snds_B_snd_F", "muzzle_snds_H_khk_F", "muzzle_snds_H_MG_blk_F", "muzzle_snds_H_MG_khk_F", "muzzle_snds_H_snd_F", "muzzle_snds_m_khk_F", "muzzle_snds_m_snd_F", "NVGoggles_tna_F", "NVGogglesB_blk_F", "NVGogglesB_grn_F", "NVGogglesB_gry_F", "O_NVGoggles_ghex_F", "O_NVGoggles_hex_F", "O_NVGoggles_urb_F", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_snd_F", "optic_Hamr_khk_F", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg_blk_F", "optic_Holosight_smg_khk_F", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_SOS_khk_F", "srifle_GM6_ghex_F", "srifle_GM6_ghex_LRPS_F", "srifle_LRR_tna_F", "srifle_LRR_tna_LRPS_F"};
	};
	class A3_Weapons_F_Exp_Launchers_RPG32
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_RPG32_ghex_F"};
	};
	class A3_Weapons_F_Exp_Launchers_RPG7
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_RPG7_F"};
	};
	class A3_Weapons_F_Exp_Launchers_Titan
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_B_Titan_short_tna_F", "launch_B_Titan_tna_F", "launch_O_Titan_ghex_F", "launch_O_Titan_short_ghex_F"};
	};
	class A3_Weapons_F_Exp_LongRangeRifles_DMR_07
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_DMR_07_blk_DMS_F", "srifle_DMR_07_blk_DMS_Snds_F", "srifle_DMR_07_blk_F", "srifle_DMR_07_ghex_F", "srifle_DMR_07_hex_F"};
	};
	class A3_Weapons_F_Exp_Machineguns_LMG_03
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"LMG_03_F", "LMG_03_Vehicle_F"};
	};
	class A3_Weapons_F_Exp_Pistols_Pistol_01
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"hgun_Pistol_01_F"};
	};
	class A3_Weapons_F_Exp_Rifles_AK12
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_AK12_F", "arifle_AK12_GL_F"};
	};
	class A3_Weapons_F_Exp_Rifles_AKM
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_AKM_F", "arifle_AKM_FL_F"};
	};
	class A3_Weapons_F_Exp_Rifles_AKS
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_AKS_F"};
	};
	class A3_Weapons_F_Exp_Rifles_ARX
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_ARX_blk_F", "arifle_ARX_ghex_ACO_Pointer_Snds_F", "arifle_ARX_ghex_ARCO_Pointer_Snds_F", "arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F", "arifle_ARX_ghex_F", "arifle_ARX_hex_ACO_Pointer_Snds_F", "arifle_ARX_hex_ARCO_Pointer_Snds_F", "arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F", "arifle_ARX_hex_F", "arifle_ARX_Viper_F", "arifle_ARX_Viper_hex_F"};
	};
	class A3_Weapons_F_Exp_Rifles_CTAR
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_CTAR_blk_ACO_F", "arifle_CTAR_blk_ACO_Pointer_F", "arifle_CTAR_blk_ACO_Pointer_Snds_F", "arifle_CTAR_blk_ARCO_F", "arifle_CTAR_blk_ARCO_Pointer_F", "arifle_CTAR_blk_ARCO_Pointer_Snds_F", "arifle_CTAR_blk_F", "arifle_CTAR_blk_Pointer_F", "arifle_CTAR_ghex_F", "arifle_CTAR_GL_blk_ACO_F", "arifle_CTAR_GL_blk_ACO_Pointer_Snds_F", "arifle_CTAR_GL_blk_ARCO_Pointer_F", "arifle_CTAR_GL_blk_F", "arifle_CTAR_GL_ghex_F", "arifle_CTAR_GL_hex_F", "arifle_CTAR_hex_F"};
	};
	class A3_Weapons_F_Exp_Rifles_CTARS
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_CTARS_blk_F", "arifle_CTARS_blk_Pointer_F", "arifle_CTARS_ghex_F", "arifle_CTARS_hex_F"};
	};
	class A3_Weapons_F_Exp_Rifles_SPAR_01
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F", "arifle_SPAR_01_blk_ERCO_Pointer_F", "arifle_SPAR_01_blk_F", "arifle_SPAR_01_GL_blk_ACO_Pointer_F", "arifle_SPAR_01_GL_blk_ERCO_Pointer_F", "arifle_SPAR_01_GL_blk_F", "arifle_SPAR_01_GL_khk_F", "arifle_SPAR_01_GL_snd_F", "arifle_SPAR_01_khk_F", "arifle_SPAR_01_snd_F"};
	};
	class A3_Weapons_F_Exp_Rifles_SPAR_02
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_SPAR_02_blk_ERCO_Pointer_F", "arifle_SPAR_02_blk_F", "arifle_SPAR_02_blk_Pointer_F", "arifle_SPAR_02_khk_F", "arifle_SPAR_02_snd_F"};
	};
	class A3_Weapons_F_Exp_Rifles_SPAR_03
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_SPAR_03_blk_F", "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F", "arifle_SPAR_03_khk_F", "arifle_SPAR_03_snd_F"};
	};
	class A3_Weapons_F_Exp_SMGs_SMG_05
	{
		addonRootClass = "A3_Weapons_F_Exp";
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"SMG_05_F"};
	};
	class A3_Weapons_F_Explosives
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {"APERSBoundingMine", "APERSMine", "APERSTripMine", "ATMine", "Claymore_F", "DemoCharge_F", "IEDLandBig_F", "IEDLandSmall_F", "IEDUrbanBig_F", "IEDUrbanSmall_F", "SatchelCharge_F", "SLAMDirectionalMine", "UnderwaterMine", "UnderwaterMineAB", "UnderwaterMinePDM"};
		weapons[] = {};
	};
	class A3_weapons_F_FIA
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Gamma
	{
		author = "Bohemia Interactive";
		name = "Arma 3 - Weapons and Accessories";
		requiredAddons[] = {"A3_Weapons_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Weapons_F_Gamma_Acc
	{
		addonRootClass = "A3_Weapons_F_Gamma";
		requiredAddons[] = {"A3_Weapons_F_Acc", "A3_Weapons_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Gamma_Ammoboxes
	{
		addonRootClass = "A3_Weapons_F_Gamma";
		requiredAddons[] = {"A3_Weapons_F_Beta_Ammoboxes", "A3_Weapons_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_gamma_Items
	{
		requiredAddons[] = {"A3_Drones_F_Weapons_F_Gamma_Items"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Gamma_LongRangeRifles_EBR
	{
		addonRootClass = "A3_Weapons_F_Gamma";
		requiredAddons[] = {"A3_Weapons_F_Gamma", "A3_Weapons_F_LongRangeRifles_EBR"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Gamma_Rifles_MX
	{
		addonRootClass = "A3_Weapons_F_Gamma";
		requiredAddons[] = {"A3_Weapons_F_Beta_Rifles_MX", "A3_Weapons_F_Gamma"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Headgear
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_ItemHolders
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Items
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"FirstAidKit", "Medikit", "ToolKit"};
	};
	class A3_Weapons_F_Jets
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Jets - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {"weapon_AGM_65Launcher", "weapon_AGM_KH25Launcher", "weapon_AMRAAMLauncher", "weapon_BIM9xLauncher", "weapon_Cannon_Phalanx", "weapon_Fighter_Gun20mm_AA", "weapon_Fighter_Gun_30mm", "weapon_GBU12Launcher", "weapon_KAB250Launcher", "weapon_R73Launcher", "weapon_R77Launcher", "weapon_rim116Launcher", "weapon_rim162Launcher"};
	};
	class A3_Weapons_F_Kart
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Karts - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {};
	};
	class A3_Weapons_F_Kart_Pistols_Pistol_Signal_F
	{
		addonRootClass = "A3_Weapons_F_Kart";
		requiredAddons[] = {"A3_Weapons_F_Kart"};
		requiredVersion = 0.1;
		units[] = {"Weapon_hgun_Pistol_Signal_F"};
		weapons[] = {"hgun_Pistol_Signal_F"};
	};
	class A3_Weapons_F_Launchers_LAW
	{
		requiredAddons[] = {"A3_Weapons_F_Launchers_RPG32"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Launchers_NLAW
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_NLAW_F"};
	};
	class A3_Weapons_F_Launchers_RPG32
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_RPG32_F"};
	};
	class A3_Weapons_F_Launchers_Titan
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_B_Titan_F", "launch_B_Titan_short_F", "launch_I_Titan_F", "launch_I_Titan_short_F", "launch_O_Titan_F", "launch_O_Titan_short_F", "launch_Titan_F", "launch_Titan_short_F"};
	};
	class A3_Weapons_F_LongRangeRifles_DMR_01
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_DMR_01_ACO_F", "srifle_DMR_01_ARCO_F", "srifle_DMR_01_DMS_F", "srifle_DMR_01_DMS_snds_F", "srifle_DMR_01_F", "srifle_DMR_01_MRCO_F", "srifle_DMR_01_SOS_F"};
	};
	class A3_Weapons_F_LongRangeRifles_EBR
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_EBR_ACO_F", "srifle_EBR_ARCO_pointer_F", "srifle_EBR_ARCO_pointer_snds_F", "srifle_EBR_DMS_F", "srifle_EBR_DMS_pointer_snds_F", "srifle_EBR_F", "srifle_EBR_Hamr_pointer_F", "srifle_EBR_MRCO_pointer_F", "srifle_EBR_SOS_F"};
	};
	class A3_Weapons_F_LongRangeRifles_GM6
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {"Weapon_srifle_GM6_camo_F"};
		weapons[] = {"srifle_GM6_camo_F", "srifle_GM6_camo_LRPS_F", "srifle_GM6_camo_SOS_F", "srifle_GM6_F", "srifle_GM6_LRPS_F", "srifle_GM6_SOS_F"};
	};
	class A3_Weapons_F_LongRangeRifles_M320
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {"Weapon_srifle_LRR_camo_F"};
		weapons[] = {"srifle_LRR_camo_F", "srifle_LRR_camo_LRPS_F", "srifle_LRR_camo_SOS_F", "srifle_LRR_F", "srifle_LRR_LRPS_F", "srifle_LRR_SOS_F"};
	};
	class A3_Weapons_F_Machineguns_M200
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"LMG_Mk200_F", "LMG_Mk200_MRCO_F", "LMG_Mk200_pointer_F"};
	};
	class A3_Weapons_F_Machineguns_Zafir
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"LMG_Zafir_ARCO_F", "LMG_Zafir_F", "LMG_Zafir_pointer_F"};
	};
	class A3_Weapons_F_Mark
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Marksmen - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {"FxCartridge_127x54_APDS", "FxCartridge_338_Ball", "FxCartridge_338_NM_Ball", "FxCartridge_93x64_Ball", "Item_bipod_01_F_blk", "Item_bipod_01_F_mtp", "Item_bipod_01_F_snd", "Item_bipod_02_F_blk", "Item_bipod_02_F_hex", "Item_bipod_02_F_tan", "Item_bipod_03_F_blk", "Item_bipod_03_F_oli", "Item_Laserdesignator_02", "Item_Laserdesignator_03", "Item_muzzle_snds_338_black", "Item_muzzle_snds_338_green", "Item_muzzle_snds_338_sand", "Item_muzzle_snds_93mmg", "Item_muzzle_snds_93mmg_tan", "Item_optic_AMS", "Item_optic_AMS_khk", "Item_optic_AMS_snd", "Item_optic_KHS_blk", "Item_optic_KHS_hex", "Item_optic_KHS_old", "Item_optic_KHS_tan", "Weapon_MMG_01_hex_F", "Weapon_MMG_01_tan_F", "Weapon_MMG_02_black_F", "Weapon_MMG_02_camo_F", "Weapon_MMG_02_sand_F", "Weapon_srifle_DMR_02_camo_F", "Weapon_srifle_DMR_02_F", "Weapon_srifle_DMR_02_sniper_F", "Weapon_srifle_DMR_03_F", "Weapon_srifle_DMR_03_khaki_F", "Weapon_srifle_DMR_03_multicam_F", "Weapon_srifle_DMR_03_tan_F", "Weapon_srifle_DMR_03_woodland_F", "Weapon_srifle_DMR_04_F", "Weapon_srifle_DMR_04_Tan_F", "Weapon_srifle_DMR_05_blk_F", "Weapon_srifle_DMR_05_hex_F", "Weapon_srifle_DMR_05_tan_f", "Weapon_srifle_DMR_06_camo_F", "Weapon_srifle_DMR_06_olive_F"};
		url = "https://www.arma3.com";
		weapons[] = {"Laserdesignator_02", "Laserdesignator_03"};
	};
	class A3_Weapons_F_Mark_Acc
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"bipod_01_F_blk", "bipod_01_F_mtp", "bipod_01_F_snd", "bipod_02_F_blk", "bipod_02_F_hex", "bipod_02_F_tan", "bipod_03_F_blk", "bipod_03_F_oli", "muzzle_snds_338_black", "muzzle_snds_338_green", "muzzle_snds_338_sand", "muzzle_snds_93mmg", "muzzle_snds_93mmg_tan", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan"};
	};
	class A3_Weapons_F_Mark_EBR
	{
		requiredAddons[] = {"A3_Weapons_F_Mark_LongRangeRifles_EBR"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_DMR_01
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_DMR_01_DMS_BI_F", "srifle_DMR_01_DMS_snds_BI_F"};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_DMR_02
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_DMR_02_ACO_F", "srifle_DMR_02_ARCO_F", "srifle_DMR_02_camo_AMS_LP_F", "srifle_DMR_02_camo_F", "srifle_DMR_02_DMS_F", "srifle_DMR_02_F", "srifle_DMR_02_MRCO_F", "srifle_DMR_02_sniper_AMS_LP_S_F", "srifle_DMR_02_sniper_F", "srifle_DMR_02_SOS_F"};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_DMR_03
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_DMR_03_ACO_F", "srifle_DMR_03_AMS_F", "srifle_DMR_03_ARCO_F", "srifle_DMR_03_DMS_F", "srifle_DMR_03_DMS_snds_F", "srifle_DMR_03_F", "srifle_DMR_03_khaki_F", "srifle_DMR_03_MRCO_F", "srifle_DMR_03_multicam_F", "srifle_DMR_03_SOS_F", "srifle_DMR_03_tan_AMS_LP_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_woodland_F"};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_DMR_04
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_DMR_04_ACO_F", "srifle_DMR_04_ARCO_F", "srifle_DMR_04_DMS_F", "srifle_DMR_04_F", "srifle_DMR_04_MRCO_F", "srifle_DMR_04_NS_LP_F", "srifle_DMR_04_SOS_F", "srifle_DMR_04_Tan_F"};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_DMR_05
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_DMR_05_ACO_F", "srifle_DMR_05_ARCO_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_DMS_F", "srifle_DMR_05_DMS_snds_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_KHS_LP_F", "srifle_DMR_05_MRCO_F", "srifle_DMR_05_SOS_F", "srifle_DMR_05_tan_f"};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_DMR_06
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_DMR_06_camo_F", "srifle_DMR_06_camo_khs_F", "srifle_DMR_06_olive_F"};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_EBR
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"srifle_EBR_MRCO_LP_BI_F"};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_GM6
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_GM6_Camo
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_M320
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mark_LongRangeRifles_M320_Camo
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark", "A3_Weapons_F_Mark_LongRangeRifles_M320"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mark_Machineguns_M200
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"LMG_Mk200_BI_F", "LMG_Mk200_LP_BI_F"};
	};
	class A3_Weapons_F_Mark_Machineguns_MMG_01
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"MMG_01_hex_ARCO_LP_F", "MMG_01_hex_F", "MMG_01_tan_F"};
	};
	class A3_Weapons_F_Mark_Machineguns_MMG_02
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"MMG_02_black_F", "MMG_02_black_RCO_BI_F", "MMG_02_camo_F", "MMG_02_sand_F", "MMG_02_sand_RCO_LP_F"};
	};
	class A3_Weapons_F_Mark_Machineguns_Zafir
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mark_Rifles_Khaybar
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mark_Rifles_MK20
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mark_Rifles_MX
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_MXM_DMS_LP_BI_snds_F", "arifle_MXM_Hamr_LP_BI_F"};
	};
	class A3_Weapons_F_Mark_Rifles_SDAR
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mark_Rifles_TRG20
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Mod
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Official Mod - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Mod"};
		requiredVersion = 0.1;
		units[] = {"Item_muzzle_snds_570", "Weapon_SMG_03_black", "Weapon_SMG_03_camo", "Weapon_SMG_03_hex", "Weapon_SMG_03_khaki", "Weapon_SMG_03_TR_black", "Weapon_SMG_03_TR_camo", "Weapon_SMG_03_TR_hex", "Weapon_SMG_03_TR_khaki", "Weapon_SMG_03C_black", "Weapon_SMG_03C_camo", "Weapon_SMG_03C_hex", "Weapon_SMG_03C_khaki", "Weapon_SMG_03C_TR_black", "Weapon_SMG_03C_TR_camo", "Weapon_SMG_03C_TR_hex", "Weapon_SMG_03C_TR_khaki"};
		url = "https://www.arma3.com";
		weapons[] = {"muzzle_snds_570"};
	};
	class A3_Weapons_F_Mod_SMGs_SMG_03
	{
		addonRootClass = "A3_Weapons_F_Mod";
		requiredAddons[] = {"A3_Weapons_F_Mod"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"SMG_03_black", "SMG_03_camo", "SMG_03_hex", "SMG_03_khaki", "SMG_03_TR_black", "SMG_03_TR_camo", "SMG_03_TR_hex", "SMG_03_TR_khaki", "SMG_03C_black", "SMG_03C_camo", "SMG_03C_hex", "SMG_03C_khaki", "SMG_03C_TR_black", "SMG_03C_TR_camo", "SMG_03C_TR_hex", "SMG_03C_TR_khaki"};
	};
	class A3_Weapons_F_NATO
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Orange
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Orange - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"Item_C_UavTerminal", "Leaflet_05_F", "Leaflet_05_New_F", "Leaflet_05_Old_F", "Leaflet_05_Stack_F"};
		url = "https://www.arma3.com";
		weapons[] = {"AmbulanceHorn", "Bomb_Leaflets", "BombCluster_01_F", "BombCluster_02_F", "BombCluster_03_F", "BombDemine_01_F", "PoliceHorn"};
	};
	class A3_Weapons_F_Orange_Explosives
	{
		addonRootClass = "A3_Weapons_F_Orange";
		requiredAddons[] = {"A3_Weapons_F_Orange"};
		requiredVersion = 0.1;
		units[] = {"APERSMineDispenser_F", "APERSMineDispenser_Mine_F", "BombCluster_01_UXO1_F", "BombCluster_01_UXO2_F", "BombCluster_01_UXO3_F", "BombCluster_01_UXO4_F", "BombCluster_02_UXO1_F", "BombCluster_02_UXO2_F", "BombCluster_02_UXO3_F", "BombCluster_02_UXO4_F", "BombCluster_03_UXO1_F", "BombCluster_03_UXO2_F", "BombCluster_03_UXO3_F", "BombCluster_03_UXO4_F", "ModuleAPERSMineDispenser_Mine_F", "ModuleBombCluster_01_UXO1_F", "ModuleBombCluster_01_UXO2_F", "ModuleBombCluster_01_UXO3_F", "ModuleBombCluster_01_UXO4_F", "ModuleBombCluster_02_UXO1_F", "ModuleBombCluster_02_UXO2_F", "ModuleBombCluster_02_UXO3_F", "ModuleBombCluster_02_UXO4_F", "ModuleBombCluster_03_UXO1_F", "ModuleBombCluster_03_UXO2_F", "ModuleBombCluster_03_UXO3_F", "ModuleBombCluster_03_UXO4_F", "ModuleExplosive_APERSMineDispenser_F", "ModuleTrainingMine_01_F", "TrainingMine_01_F", "TrainingMine_01_used_F"};
		weapons[] = {};
	};
	class A3_Weapons_F_Orange_Items
	{
		addonRootClass = "A3_Weapons_F_Orange";
		requiredAddons[] = {"A3_Weapons_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"C_UavTerminal"};
	};
	class A3_Weapons_F_Patrol
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Patrol - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {};
		url = "https://www.arma3.com";
		weapons[] = {"B_Patrol_Soldier_Autorifleman_weapon_F", "B_Patrol_Soldier_Carrier_weapon_F", "B_Patrol_Soldier_HeavyGunner_weapon_F", "B_Patrol_Soldier_Leader_weapon_F", "B_Patrol_Soldier_MachineGunner_weapon_F", "B_Patrol_Soldier_Marksman_weapon_F", "B_Patrol_Soldier_Medic_weapon_F", "B_Patrol_Soldier_Operator_weapon_F", "B_Patrol_Soldier_Pistol_F", "B_Patrol_Soldier_Specialist_weapon_F"};
	};
	class A3_Weapons_F_Pistols_ACPC2
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"hgun_ACPC2_F", "hgun_ACPC2_snds_F"};
	};
	class A3_Weapons_F_Pistols_P07
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"hgun_P07_F", "hgun_P07_snds_F"};
	};
	class A3_Weapons_F_Pistols_PDW2000
	{
		requiredAddons[] = {"A3_Weapons_F_SMGs_Pdw2000"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Pistols_Pistol_Heavy_01
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"hgun_Pistol_heavy_01_F", "hgun_Pistol_heavy_01_MRD_F", "hgun_Pistol_heavy_01_snds_F"};
	};
	class A3_Weapons_F_Pistols_Pistol_Heavy_02
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"hgun_Pistol_heavy_02_F", "hgun_Pistol_heavy_02_Yorris_F"};
	};
	class A3_Weapons_F_Pistols_Rook40
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"hgun_Rook40_F", "hgun_Rook40_snds_F"};
	};
	class A3_Weapons_F_Rifles_Khaybar
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_Katiba_ACO_F", "arifle_Katiba_ACO_pointer_F", "arifle_Katiba_ACO_pointer_snds_F", "arifle_Katiba_ARCO_F", "arifle_Katiba_ARCO_pointer_F", "arifle_Katiba_ARCO_pointer_snds_F", "arifle_Katiba_C_ACO_F", "arifle_Katiba_C_ACO_pointer_F", "arifle_Katiba_C_ACO_pointer_snds_F", "arifle_Katiba_C_F", "arifle_Katiba_F", "arifle_Katiba_GL_ACO_F", "arifle_Katiba_GL_ACO_pointer_F", "arifle_Katiba_GL_ACO_pointer_snds_F", "arifle_Katiba_GL_ARCO_pointer_F", "arifle_Katiba_GL_F", "arifle_Katiba_GL_Nstalker_pointer_F", "arifle_Katiba_pointer_F"};
	};
	class A3_Weapons_F_Rifles_MK20
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_Mk20_ACO_F", "arifle_Mk20_ACO_pointer_F", "arifle_Mk20_F", "arifle_Mk20_GL_ACO_F", "arifle_Mk20_GL_F", "arifle_Mk20_GL_MRCO_pointer_F", "arifle_Mk20_GL_plain_F", "arifle_Mk20_Holo_F", "arifle_Mk20_MRCO_F", "arifle_Mk20_MRCO_plain_F", "arifle_Mk20_MRCO_pointer_F", "arifle_Mk20_plain_F", "arifle_Mk20_pointer_F", "arifle_Mk20C_ACO_F", "arifle_Mk20C_ACO_pointer_F", "arifle_Mk20C_F", "arifle_Mk20C_plain_F"};
	};
	class A3_Weapons_F_Rifles_MX
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_MX_ACO_F", "arifle_MX_ACO_pointer_F", "arifle_MX_ACO_pointer_snds_F", "arifle_MX_F", "arifle_MX_GL_ACO_F", "arifle_MX_GL_ACO_pointer_F", "arifle_MX_GL_F", "arifle_MX_GL_Hamr_pointer_F", "arifle_MX_GL_Holo_pointer_snds_F", "arifle_MX_Hamr_pointer_F", "arifle_MX_Holo_pointer_F", "arifle_MX_pointer_F", "arifle_MX_RCO_pointer_snds_F", "arifle_MX_SW_F", "arifle_MX_SW_Hamr_pointer_F", "arifle_MX_SW_pointer_F", "arifle_MXC_ACO_F", "arifle_MXC_ACO_pointer_F", "arifle_MXC_ACO_pointer_snds_F", "arifle_MXC_F", "arifle_MXC_Holo_F", "arifle_MXC_Holo_pointer_F", "arifle_MXC_Holo_pointer_snds_F", "arifle_MXC_SOS_point_snds_F", "arifle_MXM_DMS_F", "arifle_MXM_F", "arifle_MXM_Hamr_pointer_F", "arifle_MXM_RCO_pointer_snds_F", "arifle_MXM_SOS_pointer_F"};
	};
	class A3_Weapons_F_Rifles_MX_Black
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Rifles_MX"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_MX_Black_F", "arifle_MX_Black_Hamr_pointer_F", "arifle_MX_GL_Black_F", "arifle_MX_GL_Black_Hamr_pointer_F", "arifle_MX_SW_Black_F", "arifle_MX_SW_Black_Hamr_pointer_F", "arifle_MXC_Black_F", "arifle_MXM_Black_F"};
	};
	class A3_Weapons_F_Rifles_SDAR
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_SDAR_F"};
	};
	class a3_weapons_f_rifles_SMG_02
	{
		requiredAddons[] = {"A3_Weapons_F_SMGs_SMG_02"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Rifles_TRG20
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"arifle_TRG20_ACO_F", "arifle_TRG20_ACO_Flash_F", "arifle_TRG20_ACO_pointer_F", "arifle_TRG20_F", "arifle_TRG20_Holo_F", "arifle_TRG21_ACO_pointer_F", "arifle_TRG21_ARCO_pointer_F", "arifle_TRG21_F", "arifle_TRG21_GL_ACO_pointer_F", "arifle_TRG21_GL_F", "arifle_TRG21_GL_MRCO_F", "arifle_TRG21_MRCO_F"};
	};
	class A3_Weapons_F_Rifles_Vector
	{
		requiredAddons[] = {"A3_Weapons_F_SMGs_SMG_01"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Sams
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Sams - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Sams"};
		requiredVersion = 0.1;
		units[] = {"B_Plane_Fighter_01_Prototype_F", "O_Plane_Fighter_02_Prototype_F"};
		url = "https://www.arma3.com";
		weapons[] = {"weapon_mim145Launcher", "weapon_s750Launcher", "weapon_HARMLauncher", "weapon_SDBLauncher", "weapon_KH58Launcher"};
	};
	class A3_Weapons_F_SMGs_Pdw2000
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"hgun_PDW2000_F", "hgun_PDW2000_Holo_F", "hgun_PDW2000_Holo_snds_F", "hgun_PDW2000_snds_F"};
	};
	class A3_Weapons_F_SMGs_SMG_01
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"SMG_01_ACO_F", "SMG_01_F", "SMG_01_Holo_F", "SMG_01_Holo_pointer_snds_F"};
	};
	class A3_Weapons_F_SMGs_SMG_02
	{
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"SMG_02_ACO_F", "SMG_02_ARCO_pointg_F", "SMG_02_F"};
	};
	class A3_Weapons_F_Tank
	{
		author = "Bohemia Interactive";
		name = "Arma 3 Tank - Weapons and Accessories";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"Weapon_launch_MRAWS_green_F", "Weapon_launch_MRAWS_green_rail_F", "Weapon_launch_MRAWS_olive_F", "Weapon_launch_MRAWS_olive_rail_F", "Weapon_launch_MRAWS_sand_F", "Weapon_launch_MRAWS_sand_rail_F", "Weapon_launch_O_Vorona_brown_F", "Weapon_launch_O_Vorona_green_F"};
		url = "https://www.arma3.com";
		weapons[] = {"autocannon_30mm_RCWS", "cannon_125mm_advanced", "cannon_20mm", "HMG_127_AFV", "launcher_SPG9", "missiles_Firefist", "missiles_SAAMI", "missiles_Vorona", "MMG_01_vehicle", "MMG_02_coax"};
	};
	class A3_Weapons_F_Tank_Bags
	{
		addonRootClass = "A3_Weapons_F_Tank";
		requiredAddons[] = {"A3_Weapons_F_Tank"};
		requiredVersion = 0.1;
		units[] = {"B_AssaultPack_rgr_BTLAT2_F", "B_AssaultPack_rgr_CTRGLAT2_F", "B_AssaultPack_rgr_LAT2", "B_Carryall_cbr_AHAT", "B_Carryall_ghex_OTAHAT_F", "B_FieldPack_cbr_HAT", "B_FieldPack_ghex_OTHAT_F", "G_FieldPack_LAT2", "I_Fieldpack_oli_LAT2"};
		weapons[] = {};
	};
	class A3_Weapons_F_Tank_Launchers_MRAWS
	{
		addonRootClass = "A3_Weapons_F_Tank";
		requiredAddons[] = {"A3_Weapons_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_MRAWS_green_F", "launch_MRAWS_green_rail_F", "launch_MRAWS_olive_F", "launch_MRAWS_olive_rail_F", "launch_MRAWS_sand_F", "launch_MRAWS_sand_rail_F"};
	};
	class A3_Weapons_F_Tank_Launchers_Vorona
	{
		addonRootClass = "A3_Weapons_F_Tank";
		requiredAddons[] = {"A3_Weapons_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"launch_O_Vorona_brown_F", "launch_O_Vorona_green_F"};
	};
	class A3_Weapons_F_Uniforms
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3_Weapons_F_Vests
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class A3Data
	{
		liteCA = "true";
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"FxWindGrass1", "FxWindGrass2", "FxWindRock1"};
		weapons[] = {};
	};
	class Core
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"ArtilleryTarget", "ArtilleryTargetW", "ArtilleryTargetE", "SuppressTarget", "PaperCar", "FireSectorTarget", "HeliH", "Land_VASICore", "AirportBase"};
		weapons[] = {"FakeWeapon"};
	};
	class CuratorOnly_Air_F_Beta_Heli_Attack_01
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_Heli_Attack_01_F"};
		weapons[] = {};
	};
	class CuratorOnly_Air_F_Beta_Heli_Attack_02
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"O_Heli_Attack_02_black_F", "O_Heli_Attack_02_F"};
		weapons[] = {};
	};
	class CuratorOnly_Air_F_Gamma_UAV_01
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_UAV_01_F", "I_UAV_01_F", "O_UAV_01_F"};
		weapons[] = {};
	};
	class CuratorOnly_Armor_F_AMV
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_APC_Wheeled_01_cannon_F"};
		weapons[] = {};
	};
	class CuratorOnly_armor_f_beta_APC_Tracked_02
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"O_APC_Tracked_02_AA_F", "O_APC_Tracked_02_cannon_F"};
		weapons[] = {};
	};
	class CuratorOnly_Armor_F_Marid
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"O_APC_Wheeled_02_rcws_F"};
		weapons[] = {};
	};
	class CuratorOnly_Armor_F_Panther
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_APC_Tracked_01_aa_F", "B_APC_Tracked_01_crv_F", "B_APC_Tracked_01_rcws_F"};
		weapons[] = {};
	};
	class CuratorOnly_Armor_F_Slammer
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_MBT_01_arty_F", "B_MBT_01_cannon_F", "B_MBT_01_mlrs_F"};
		weapons[] = {};
	};
	class CuratorOnly_Armor_F_T100K
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"O_MBT_02_arty_F", "O_MBT_02_cannon_F"};
		weapons[] = {};
	};
	class CuratorOnly_Boat_F_Boat_Armed_01
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_Boat_Armed_01_minigun_F", "O_Boat_Armed_01_hmg_F"};
		weapons[] = {};
	};
	class CuratorOnly_Characters_F_BLUFOR
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_crew_F", "B_diver_exp_F", "B_diver_F", "B_diver_TL_F", "B_engineer_F", "B_helicrew_F", "B_Helipilot_F", "B_medic_F", "B_officer_F", "B_Pilot_F", "B_RangeMaster_F", "B_recon_exp_F", "B_recon_F", "B_recon_JTAC_F", "B_recon_LAT_F", "B_recon_M_F", "B_recon_medic_F", "B_recon_TL_F", "B_sniper_F", "B_Soldier_02_f", "B_Soldier_03_f", "B_Soldier_A_F", "B_soldier_AA_F", "B_soldier_AAA_F", "B_soldier_AAR_F", "B_soldier_AAT_F", "B_soldier_AR_F", "B_soldier_AT_F", "B_soldier_exp_F", "B_Soldier_F", "B_Soldier_GL_F", "B_soldier_LAT_F", "B_Soldier_lite_F", "B_soldier_M_F", "B_soldier_repair_F", "B_Soldier_SL_F", "B_Soldier_TL_F", "B_spotter_F", "B_Story_Protagonist_F", "B_Story_SF_Captain_F", "B_support_AMG_F", "B_support_AMort_F", "B_support_GMG_F", "B_support_MG_F", "B_support_Mort_F"};
		weapons[] = {};
	};
	class CuratorOnly_Characters_F_Common
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_UAV_AI", "I_UAV_AI", "O_UAV_AI", "Underwear_F"};
		weapons[] = {};
	};
	class CuratorOnly_Characters_F_OPFOR
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"O_crew_F", "O_diver_exp_F", "O_diver_F", "O_diver_TL_F", "O_engineer_F", "O_helicrew_F", "O_helipilot_F", "O_medic_F", "O_officer_F", "O_Pilot_F", "O_recon_exp_F", "O_recon_F", "O_recon_JTAC_F", "O_recon_LAT_F", "O_recon_M_F", "O_recon_medic_F", "O_recon_TL_F", "O_sniper_F", "O_Soldier_A_F", "O_Soldier_AA_F", "O_Soldier_AAA_F", "O_Soldier_AAR_F", "O_Soldier_AAT_F", "O_Soldier_AR_F", "O_Soldier_AT_F", "O_soldier_exp_F", "O_Soldier_F", "O_Soldier_GL_F", "O_Soldier_LAT_F", "O_Soldier_lite_F", "O_soldier_M_F", "O_soldier_repair_F", "O_Soldier_SL_F", "O_Soldier_TL_F", "O_soldierU_AAR_F", "O_soldierU_AAT_F", "O_soldierU_AR_F", "O_soldierU_AT_F", "O_soldierU_F", "O_soldierU_LAT_F", "O_soldierU_TL_F", "O_spotter_F", "O_support_AMG_F", "O_support_AMort_F", "O_support_GMG_F", "O_support_MG_F", "O_support_Mort_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Animals
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"ModuleAnimals_F", "ModuleAnimalsButterflies_F", "ModuleAnimalsGoats_F", "ModuleAnimalsPoultry_F", "ModuleAnimalsSeagulls_F", "ModuleAnimalsSheep_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Chemlights
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"ModuleChemlight_F", "ModuleChemlightBlue_F", "ModuleChemlightGreen_F", "ModuleChemlightRed_F", "ModuleChemlightYellow_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Effects
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"ModuleIRGrenade_F", "ModuleMusic_F", "ModulePostprocess_F", "ModuleRadio_F", "ModuleSound_F", "ModuleTracers_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Environment
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"ModuleSkiptime_F", "ModuleDiary_F", "ModuleWeather_F", "ModuleTimeMultiplier_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Flares
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"ModuleFlare_F", "ModuleFlareGreen_F", "ModuleFlareRed_F", "ModuleFlareWhite_F", "ModuleFlareYellow_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Lightning
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"ModuleLightning_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Mines
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"Claymore_F", "DemoCharge_F", "IEDLandBig_F", "IEDLandSmall_F", "IEDUrbanBig_F", "IEDUrbanSmall_F", "ModuleExplosive_Claymore_F", "ModuleExplosive_DemoCharge_F", "ModuleExplosive_F", "ModuleExplosive_IEDLandBig_F", "ModuleExplosive_IEDLandSmall_F", "ModuleExplosive_IEDUrbanBig_F", "ModuleExplosive_IEDUrbanSmall_F", "ModuleExplosive_SatchelCharge_F", "ModuleMine_APERSBoundingMine_F", "ModuleMine_APERSMine_F", "ModuleMine_APERSTripMine_F", "ModuleMine_ATMine_F", "ModuleMine_F", "ModuleMine_SLAMDirectionalMine_F", "ModuleMine_UnderwaterMine_F", "ModuleMine_UnderwaterMineAB_F", "ModuleMine_UnderwaterMinePDM_F", "SatchelCharge_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Objectives
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"ModuleObjective_F", "ModuleObjectiveAttackDefend_F", "ModuleObjectiveGetIn_F", "ModuleObjectiveMove_F", "ModuleObjectiveNeutralize_F", "ModuleObjectiveProtect_F", "ModuleObjectiveSector_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Ordnance
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"ModuleOrdnance_F", "ModuleOrdnanceHowitzer_F", "ModuleOrdnanceMortar_F", "ModuleOrdnanceRocket_F"};
		weapons[] = {};
	};
	class CuratorOnly_Modules_F_Curator_Smokeshells
	{
		requiredAddons[] = {};
		requiredVersion = 1;
		units[] = {"ModuleSmoke_F", "ModuleSmokeBlue_F", "ModuleSmokeGreen_F", "ModuleSmokeOrange_F", "ModuleSmokePurple_F", "ModuleSmokeRed_F", "ModuleSmokeWhite_F", "ModuleSmokeYellow_F"};
		weapons[] = {};
	};
	class CuratorOnly_Signs_F
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"ArrowDesk_L_F", "ArrowDesk_R_F", "ArrowMarker_L_F", "ArrowMarker_R_F", "FlagChecked_F", "FlagSmall_F", "Land_Sign_Mines_F", "Land_Sign_WarningMilAreaSmall_F", "Land_Sign_WarningMilitaryArea_F", "Land_Sign_WarningMilitaryVehicles_F", "Land_Sign_WarningUnexplodedAmmo_F", "Pole_F", "RoadBarrier_F", "RoadBarrier_small_F", "RoadCone_F", "RoadCone_L_F", "Sign_Direction_F", "Sign_F", "TapeSign_F"};
		weapons[] = {};
	};
	class CuratorOnly_Soft_F_Crusher_UGV
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_UGV_01_F", "B_UGV_01_rcws_F", "I_UGV_01_F", "I_UGV_01_rcws_F", "O_UGV_01_F", "O_UGV_01_rcws_F"};
		weapons[] = {};
	};
	class CuratorOnly_Soft_F_MRAP_01
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_MRAP_01_F", "B_MRAP_01_gmg_F", "B_MRAP_01_hmg_F"};
		weapons[] = {};
	};
	class CuratorOnly_Soft_F_MRAP_02
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"O_MRAP_02_F", "O_MRAP_02_GMG_F", "O_MRAP_02_hmg_F"};
		weapons[] = {};
	};
	class CuratorOnly_Soft_F_Quadbike
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_Quadbike_01_F", "C_Quadbike_01_black_F", "C_Quadbike_01_blue_F", "C_Quadbike_01_F", "C_Quadbike_01_red_F", "C_Quadbike_01_white_F", "I_G_Quadbike_01_F", "I_Quadbike_01_F", "O_Quadbike_01_F"};
		weapons[] = {};
	};
	class CuratorOnly_Static_F_Gamma
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_GMG_01_A_F", "B_GMG_01_A_weapon_F", "B_GMG_01_F", "B_GMG_01_high_F", "B_GMG_01_high_weapon_F", "B_GMG_01_weapon_F", "B_HMG_01_A_F", "B_HMG_01_A_weapon_F", "B_HMG_01_F", "B_HMG_01_high_F", "B_HMG_01_high_weapon_F", "B_HMG_01_support_F", "B_HMG_01_support_high_F", "B_HMG_01_weapon_F", "I_GMG_01_A_F", "I_GMG_01_A_weapon_F", "I_GMG_01_F", "I_GMG_01_high_F", "I_GMG_01_high_weapon_F", "I_GMG_01_weapon_F", "I_HMG_01_A_F", "I_HMG_01_A_weapon_F", "I_HMG_01_F", "I_HMG_01_high_F", "I_HMG_01_high_weapon_F", "I_HMG_01_support_F", "I_HMG_01_support_high_F", "I_HMG_01_weapon_F", "O_G_Mortar_01_F", "O_GMG_01_A_F", "O_GMG_01_A_weapon_F", "O_GMG_01_F", "O_GMG_01_high_F", "O_GMG_01_high_weapon_F", "O_GMG_01_weapon_F", "O_HMG_01_A_F", "O_HMG_01_A_weapon_F", "O_HMG_01_F", "O_HMG_01_high_F", "O_HMG_01_high_weapon_F", "O_HMG_01_support_F", "O_HMG_01_support_high_F", "O_HMG_01_weapon_F"};
		weapons[] = {};
	};
	class CuratorOnly_Static_F_Mortar_01
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"B_Mortar_01_F", "B_Mortar_01_support_F", "B_Mortar_01_weapon_F", "I_G_Mortar_01_F", "I_Mortar_01_support_F", "I_Mortar_01_weapon_F", "O_Mortar_01_F", "O_Mortar_01_support_F", "O_Mortar_01_weapon_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Civ_Ancient
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_AncientPillar_damaged_F", "Land_AncientPillar_F", "Land_AncientPillar_fallen_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Civ_Camping
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Campfire_burning_F", "FirePlace_burning_F", "Land_Campfire_F", "Land_Camping_Light_off_F", "Land_CampingChair_V1_F", "Land_CampingChair_V1_folded_F", "Land_CampingChair_V2_F", "Land_CampingTable_F", "Land_CampingTable_small_F", "Land_FieldToilet_F", "Land_FirePlace_F", "Land_Ground_sheet_blue_F", "Land_Ground_sheet_F", "Land_Ground_sheet_folded_blue_F", "Land_Ground_sheet_folded_F", "Land_Ground_sheet_folded_khaki_F", "Land_Ground_sheet_folded_OPFOR_F", "Land_Ground_sheet_folded_yellow_F", "Land_Ground_sheet_khaki_F", "Land_Ground_sheet_OPFOR_F", "Land_Ground_sheet_yellow_F", "Land_Pillow_camouflage_F", "Land_Pillow_F", "Land_Pillow_grey_F", "Land_Pillow_old_F", "Land_Sleeping_bag_blue_F", "Land_Sleeping_bag_blue_folded_F", "Land_Sleeping_bag_brown_F", "Land_Sleeping_bag_brown_folded_F", "Land_Sleeping_bag_F", "Land_Sleeping_bag_folded_F", "Land_Sun_chair_F", "Land_Sun_chair_green_F", "Land_Sunshade_F", "Land_TentA_F", "Land_TentDome_F", "Land_ToiletBox_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Civ_Garbage
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Garbage_line_F", "Land_Garbage_square3_F", "Land_Garbage_square5_F", "Land_GarbageBags_F", "Land_GarbagePallet_F", "Land_GarbageWashingMachine_F", "Land_JunkPile_F", "Land_Tyre_F", "Land_Tyres_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_EPA_Civ_Constructions
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Pallets_stack_F", "Land_PortableLight_double_F", "Land_PortableLight_single_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_EPB_Civ_Dead
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Grave_dirt_F", "Land_Grave_forest_F", "Land_Grave_rocks_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Ind_Cargo
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo20_blue_F", "Land_Cargo20_brick_red_F", "Land_Cargo20_china_color_V1_ruins_F", "Land_Cargo20_china_color_V2_ruins_F", "Land_Cargo20_color_V1_ruins_F", "Land_Cargo20_color_V2_ruins_F", "Land_Cargo20_color_V3_ruins_F", "Land_Cargo20_cyan_F", "Land_Cargo20_grey_F", "Land_Cargo20_light_blue_F", "Land_Cargo20_light_green_F", "Land_Cargo20_military_green_F", "Land_Cargo20_military_ruins_F", "Land_Cargo20_orange_F", "Land_Cargo20_red_F", "Land_Cargo20_sand_F", "Land_Cargo20_white_F", "Land_Cargo20_yellow_F", "Land_Cargo40_blue_F", "Land_Cargo40_brick_red_F", "Land_Cargo40_china_color_V1_ruins_F", "Land_Cargo40_china_color_V2_ruins_F", "Land_Cargo40_color_V1_ruins_F", "Land_Cargo40_color_V2_ruins_F", "Land_Cargo40_color_V3_ruins_F", "Land_Cargo40_cyan_F", "Land_Cargo40_grey_F", "Land_Cargo40_light_blue_F", "Land_Cargo40_light_green_F", "Land_Cargo40_military_green_F", "Land_Cargo40_military_ruins_F", "Land_Cargo40_orange_F", "Land_Cargo40_red_F", "Land_Cargo40_sand_F", "Land_Cargo40_white_F", "Land_Cargo40_yellow_F", "Land_CargoBox_V1_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Ind_Crane
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Crane_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Ind_ReservoirTank
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_ReservoirTank_Airport_F", "Land_ReservoirTank_Airport_ruins_F", "Land_ReservoirTank_Rust_F", "Land_ReservoirTank_Rust_ruins_F", "Land_ReservoirTank_V1_F", "Land_ReservoirTank_V1_ruins_F", "Land_ReservoirTower_F", "Land_ReservoirTower_ruins_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Ind_Transmitter_Tower
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Communication_anchor_F", "Land_Communication_F", "Land_TBox_F", "Land_TBox_ruins_F", "Land_TTowerBig_1_F", "Land_TTowerBig_1_ruins_F", "Land_TTowerBig_2_F", "Land_TTowerBig_2_ruins_F", "Land_TTowerSmall_1_F", "Land_TTowerSmall_2_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Items_Vessels
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_BarrelEmpty_F", "Land_BarrelSand_F", "Land_BarrelTrash_F", "Land_BarrelWater_F", "Land_Bucket_clean_F", "Land_Bucket_F", "Land_Bucket_painted_F", "Land_BucketNavy_F", "Land_CanisterFuel_F", "Land_CanisterOil_F", "Land_CanisterPlastic_F", "Land_MetalBarrel_empty_F", "Land_MetalBarrel_F", "Land_WaterBarrel_F", "Land_WaterTank_F", "MetalBarrel_burning_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Mil_BagBunker
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_BagBunker_Large_F", "Land_BagBunker_Small_F", "Land_BagBunker_Tower_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Mil_BagFence
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_BagFence_Corner_F", "Land_BagFence_End_F", "Land_BagFence_Long_F", "Land_BagFence_Round_F", "Land_BagFence_Short_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Mil_Cargo
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Cargo_House_V1_F", "Land_Cargo_House_V1_ruins_F", "Land_Cargo_House_V2_F", "Land_Cargo_House_V2_ruins_F", "Land_Cargo_House_V3_F", "Land_Cargo_House_V3_ruins_F", "Land_Cargo_HQ_V1_F", "Land_Cargo_HQ_V1_ruins_F", "Land_Cargo_HQ_V2_F", "Land_Cargo_HQ_V2_ruins_F", "Land_Cargo_HQ_V3_F", "Land_Cargo_HQ_V3_ruins_F", "Land_Cargo_Patrol_V1_F", "Land_Cargo_Patrol_V1_ruins_F", "Land_Cargo_Patrol_V2_F", "Land_Cargo_Patrol_V2_ruins_F", "Land_Cargo_Patrol_V3_F", "Land_Cargo_Patrol_V3_ruins_F", "Land_Cargo_Tower_V1_F", "Land_Cargo_Tower_V1_No1_F", "Land_Cargo_Tower_V1_No2_F", "Land_Cargo_Tower_V1_No3_F", "Land_Cargo_Tower_V1_No4_F", "Land_Cargo_Tower_V1_No5_F", "Land_Cargo_Tower_V1_No6_F", "Land_Cargo_Tower_V1_No7_F", "Land_Cargo_Tower_V1_ruins_F", "Land_Cargo_Tower_V2_F", "Land_Cargo_Tower_V2_ruins_F", "Land_Cargo_Tower_V3_F", "Land_Cargo_Tower_V3_ruins_F", "Land_Medevac_house_V1_F", "Land_Medevac_house_V1_ruins_F", "Land_Medevac_HQ_V1_F", "Land_Medevac_HQ_V1_ruins_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Mil_Fortification
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_HBarrier_1_F", "Land_HBarrier_3_F", "Land_HBarrier_5_F", "Land_HBarrierBig_F", "Land_HBarrierTower_F", "Land_HBarrierWall4_F", "Land_HBarrierWall6_F", "Land_HBarrierWall_corner_F", "Land_HBarrierWall_corridor_F", "Land_Razorwire_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Mil_Radar
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Radar_F", "Land_Radar_ruins_F", "Land_Radar_Small_F", "Land_Radar_Small_ruins_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Mil_Shelters
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"CamoNet_BLUFOR_big_Curator_F", "CamoNet_BLUFOR_big_F", "CamoNet_BLUFOR_Curator_F", "CamoNet_BLUFOR_F", "CamoNet_BLUFOR_open_Curator_F", "CamoNet_BLUFOR_open_F", "CamoNet_INDP_big_Curator_F", "CamoNet_INDP_big_F", "CamoNet_INDP_Curator_F", "CamoNet_INDP_F", "CamoNet_INDP_open_Curator_F", "CamoNet_INDP_open_F", "CamoNet_OPFOR_big_Curator_F", "CamoNet_OPFOR_big_F", "CamoNet_OPFOR_Curator_F", "CamoNet_OPFOR_F", "CamoNet_OPFOR_open_Curator_F", "CamoNet_OPFOR_open_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Research
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Dome_Big_F", "Land_Dome_Small_F", "Land_Research_house_V1_ruins_F", "Land_Research_house_V1_F", "Land_Research_HQ_ruins_F", "Land_Research_HQ_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Walls
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_Ancient_Wall_4m_F", "Land_Ancient_Wall_8m_F", "Land_BarGate_F", "Land_Canal_Wall_10m_F", "Land_Canal_Wall_D_center_F", "Land_Canal_Wall_D_left_F", "Land_Canal_Wall_D_right_F", "Land_Canal_Wall_Stairs_F", "Land_Canal_WallSmall_10m_F", "Land_City2_4m_F", "Land_City2_8m_F", "Land_City2_8mD_F", "Land_City2_PillarD_F", "Land_City_4m_F", "Land_City_8m_F", "Land_City_8mD_F", "Land_City_Gate_F", "Land_City_Pillar_F", "Land_CncBarrier_F", "Land_CncBarrier_stripes_F", "Land_CncBarrierMedium4_F", "Land_CncBarrierMedium_F", "Land_CncShelter_F", "Land_CncWall1_F", "Land_CncWall4_F", "Land_Concrete_SmallWall_4m_F", "Land_Concrete_SmallWall_8m_F", "Land_Crash_barrier_F", "Land_IndFnc_3_D_F", "Land_IndFnc_3_F", "Land_IndFnc_3_Hole_F", "Land_IndFnc_9_F", "Land_IndFnc_Corner_F", "Land_IndFnc_Pole_F", "Land_Mil_ConcreteWall_F", "Land_Mil_WallBig_4m_F", "Land_Mil_WallBig_Corner_F", "Land_Mil_WallBig_Gate_F", "Land_Mil_WiredFence_F", "Land_Mil_WiredFence_Gate_F", "Land_Mil_WiredFenceD_F", "Land_Mound01_8m_F", "Land_Mound02_8m_F", "Land_Net_Fence_4m_F", "Land_Net_Fence_8m_F", "Land_Net_Fence_Gate_F", "Land_Net_Fence_pole_F", "Land_Net_FenceD_8m_F", "Land_New_WiredFence_10m_Dam_F", "Land_New_WiredFence_10m_F", "Land_New_WiredFence_5m_F", "Land_New_WiredFence_pole_F", "Land_Pipe_fence_4m_F", "Land_Pipe_fence_4mNoLC_F", "Land_PipeWall_concretel_8m_F", "Land_Rampart_F", "Land_RedWhitePole_F", "Land_Slums01_8m", "Land_Slums01_pole", "Land_Slums02_4m", "Land_Slums02_pole", "Land_SportGround_fence_F", "Land_Stone_4m_F", "Land_Stone_8m_F", "Land_Stone_8mD_F", "Land_Stone_Gate_F", "Land_Stone_pillar_F", "Land_Wall_IndCnc_2deco_F", "Land_Wall_IndCnc_4_D_F", "Land_Wall_IndCnc_4_F", "Land_Wall_IndCnc_End_2_F", "Land_Wall_IndCnc_Pole_F", "Land_Wall_Tin_4", "Land_Wall_Tin_4_2", "Land_Wall_Tin_Pole", "Land_Wired_Fence_4m_F", "Land_Wired_Fence_4mD_F", "Land_Wired_Fence_8m_F", "Land_Wired_Fence_8mD_F"};
		weapons[] = {};
	};
	class CuratorOnly_Structures_F_Wrecks
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {"Land_UWreck_FishingBoat_F", "Land_UWreck_Heli_Attack_02_F", "Land_UWreck_MV22_F", "Land_Wreck_BMP2_F", "Land_Wreck_BRDM2_F", "Land_Wreck_Car2_F", "Land_Wreck_Car3_F", "Land_Wreck_Car_F", "Land_Wreck_CarDismantled_F", "Land_Wreck_Heli_Attack_01_F", "Land_Wreck_Heli_Attack_02_F", "Land_Wreck_HMMWV_F", "Land_Wreck_Hunter_F", "Land_Wreck_Offroad2_F", "Land_Wreck_Offroad_F", "Land_Wreck_Plane_Transport_01_F", "Land_Wreck_Skodovka_F", "Land_Wreck_Slammer_F", "Land_Wreck_Slammer_hull_F", "Land_Wreck_Slammer_turret_F", "Land_Wreck_T72_hull_F", "Land_Wreck_T72_turret_F", "Land_Wreck_Traw2_F", "Land_Wreck_Traw_F", "Land_Wreck_Truck_dropside_F", "Land_Wreck_Truck_F", "Land_Wreck_UAZ_F", "Land_Wreck_Ural_F", "Land_Wreck_Van_F"};
		weapons[] = {};
	};
	class deleteClass
	{
		requiredAddons[] = {"A3_Weapons_F_Acc"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
	class Map_VR
	{
		requiredAddons[] = {"A3_Map_VR"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
