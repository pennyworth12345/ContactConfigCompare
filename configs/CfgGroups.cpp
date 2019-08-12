class CfgGroups
{
	class East
	{
		name = "OPFOR";
		side = 0;
		class OPF_F
		{
			name = "CSAT";
			class Armored
			{
				name = "Armor";
				class O_TankPlatoon_Heavy
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_MBT_04_command_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_04_cannon_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_04_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_MBT_04_cannon_F";
					};
				};
				class O_TankSection_Heavy
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Section (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_MBT_04_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_04_cannon_F";
					};
				};
				class OIA_SPGPlatoon_Scorcher
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery SPG Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_MBT_02_arty_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_02_arty_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_02_arty_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_MBT_02_arty_F";
					};
				};
				class OIA_SPGSection_Scorcher
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery SPG Section";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_MBT_02_arty_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_02_arty_F";
					};
				};
				class OIA_TankPlatoon
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_MBT_02_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_02_cannon_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_02_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_MBT_02_cannon_F";
					};
				};
				class OIA_TankPlatoon_AA
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon (Combined)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_MBT_02_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_APC_Tracked_02_AA_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_02_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_APC_Tracked_02_AA_F";
					};
				};
				class OIA_TankSection
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Section";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_MBT_02_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MBT_02_cannon_F";
					};
				};
			};
			class Infantry
			{
				name = "Infantry";
				class O_InfTeam_AT_Heavy
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Anti-Armor Team (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_HAT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_HAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AHAT_F";
					};
				};
				class OI_reconPatrol
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Patrol";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_F";
					};
				};
				class OI_reconSentry
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_recon_M_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_F";
					};
				};
				class OI_reconTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_recon_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_JTAC_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_exp_F";
					};
				};
				class OI_SniperTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Sniper Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_sniper_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_spotter_F";
					};
				};
				class OIA_InfAssault
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Assault Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_HeavyGunner_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_Soldier_AAR_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_Sharpshooter_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_Soldier_LAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_medic_F";
					};
				};
				class OIA_InfSentry
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_F";
					};
				};
				class OIA_InfSquad
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Rifle Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_medic_F";
					};
				};
				class OIA_InfSquad_Weapons
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Weapons Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_A_F";
					};
					class Unit6
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_medic_F";
					};
				};
				class OIA_InfTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Fire Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_LAT_F";
					};
				};
				class OIA_InfTeam_AA
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Air-defense Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AAA_F";
					};
				};
				class OIA_InfTeam_AT
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Anti-armor Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AAT_F";
					};
				};
				class OIA_ReconSquad
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_LAT_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_JTAC_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_exp_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_Pathfinder_F";
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class OIA_MechInf_AA
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Air-defense Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_APC_Tracked_02_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AA_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AA_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_AA_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AAA_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AAA_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AAA_F";
					};
				};
				class OIA_MechInf_AT
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Anti-armor Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_APC_Tracked_02_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_AT_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AAT_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AAT_F";
					};
				};
				class OIA_MechInf_Support
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Support Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_APC_Wheeled_02_rcws_v2_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_repair_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_engineer_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_medic_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_exp_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_A_F";
					};
				};
				class OIA_MechInfSquad
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Rifle Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_APC_Wheeled_02_rcws_v2_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_A_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_medic_F";
					};
				};
			};
			class Motorized_MTP
			{
				name = "Motorized Infantry";
				class O_MotInf_AssaultViperTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Viper Assault Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_LSV_02_armed_viper_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_V_Soldier_TL_hex_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_V_Soldier_JTAC_hex_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_M_hex_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Exp_hex_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_LAT_hex_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Medic_hex_F";
					};
				};
				class O_MotInf_ReconViperTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Viper Recon Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_LSV_02_unarmed_viper_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_V_Soldier_TL_hex_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_V_Soldier_JTAC_hex_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_M_hex_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Exp_hex_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_LAT_hex_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Medic_hex_F";
					};
				};
				class OIA_MotInf_AA
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Air-defense Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MRAP_02_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AAA_F";
					};
				};
				class OIA_MotInf_AT
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Anti-armor Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MRAP_02_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AAT_F";
					};
				};
				class OIA_MotInf_GMGTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MRAP_02_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_support_GMG_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_support_AMG_F";
					};
				};
				class OIA_MotInf_MGTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MRAP_02_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_support_MG_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_support_AMG_F";
					};
				};
				class OIA_MotInf_MortTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Mortar Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MRAP_02_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_support_Mort_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_support_AMort_F";
					};
				};
				class OIA_MotInf_Reinforce
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Reinforcements";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_Truck_03_transport_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_SL_F";
					};
					class Unit10
					{
						position[] = {-5, -2, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit11
					{
						position[] = {-5, -4, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_GL_F";
					};
					class Unit12
					{
						position[] = {-5, -6, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_LAT_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_M_F";
					};
					class Unit5
					{
						position[] = {5, -8, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {-5, -8, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_A_F";
					};
					class Unit8
					{
						position[] = {-5, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_medic_F";
					};
					class Unit9
					{
						position[] = {-5, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
				};
				class OIA_MotInf_Team
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_MRAP_02_GMG_F";
					};
					class Unit1
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_AT_F";
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
				class OI_AttackTeam_UAV
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Attack UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_UAV_02_CAS_F";
					};
				};
				class OI_AttackTeam_UGV
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Attack UGV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_UGV_01_rcws_F";
					};
				};
				class OI_diverTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Diver Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_diver_F";
					};
				};
				class OI_diverTeam_Boat
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Diver Team (Boat)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_diver_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_Boat_Transport_01_F";
					};
				};
				class OI_diverTeam_SDV
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Diver Team (SDV)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_diver_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_SDV_01_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_SDV_01_F";
					};
				};
				class OI_ReconTeam_UAV
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Recon UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_UAV_02_F";
					};
				};
				class OI_ReconTeam_UGV
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Recon UGV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_UGV_01_F";
					};
				};
				class OI_SmallTeam_UAV
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Small UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_UAV_01_F";
					};
				};
				class OI_ViperTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Viper Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_V_Soldier_TL_hex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_V_Soldier_JTAC_hex_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_M_hex_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Exp_hex_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_LAT_hex_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Medic_hex_F";
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class OI_recon_EOD
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Support Team (EOD)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_recon_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_recon_F";
					};
				};
				class OI_support_CLS
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (CLS)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_medic_F";
					};
				};
				class OI_support_ENG
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (Engineer)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_engineer_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_repair_F";
					};
				};
				class OI_support_EOD
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (EOD)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldier_exp_F";
					};
				};
				class OI_support_GMG
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_support_GMG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_support_AMG_F";
					};
				};
				class OI_support_MG
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_support_MG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_support_AMG_F";
					};
				};
				class OI_support_Mort
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
					name = "Mortar Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_support_Mort_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_support_AMort_F";
					};
				};
			};
			class UInfantry
			{
				name = "Guard Infantry";
				class OIA_GuardSentry
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Guard Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldierU_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldierU_F";
					};
				};
				class OIA_GuardSquad
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Guard Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldierU_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldierU_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldierU_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldierU_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldierU_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldierU_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldierU_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldierU_medic_F";
					};
				};
				class OIA_GuardTeam
				{
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Guard Patrol";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_soldierU_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_soldierU_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldierU_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_soldierU_LAT_F";
					};
				};
			};
		};
		class OPF_G_F
		{
			name = "FIA";
			class Infantry
			{
				name = "Infantry";
				class O_G_InfSquad_Assault
				{
					faction = "OPF_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Assault Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_G_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_G_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_G_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_G_soldier_LAT2_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_G_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_G_soldier_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_G_soldier_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_G_medic_F";
					};
				};
				class O_G_InfTeam_Light
				{
					faction = "OPF_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Patrol Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_G_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_G_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_G_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_G_soldier_LAT2_F";
					};
				};
			};
		};
		class OPF_R_F
		{
			name = "Spetsnaz";
			class SpecOps
			{
				name = "Infantry";
				class O_R_InfSentry
				{
					faction = "OPF_R_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_R_soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_soldier_M_F";
					};
				};
				class O_R_InfSquad
				{
					faction = "OPF_R_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Rifle Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_R_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_R_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_R_Soldier_GL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_R_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_soldier_LAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_soldier_M_F";
					};
				};
				class O_R_InfTeam
				{
					faction = "OPF_R_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Fire Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_R_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_R_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_soldier_M_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_Soldier_LAT_F";
					};
				};
				class O_R_reconSentry
				{
					faction = "OPF_R_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_R_recon_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_recon_M_F";
					};
				};
				class O_R_reconSquad
				{
					faction = "OPF_R_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_R_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_R_recon_JTAC_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_recon_exp_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_recon_GL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_recon_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_recon_M_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_R_recon_LAT_F";
					};
				};
				class O_R_reconTeam
				{
					faction = "OPF_R_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_R_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_R_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_R_recon_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_R_recon_LAT_F";
					};
				};
			};
		};
		class OPF_T_F
		{
			name = "CSAT (Pacific)";
			class Armored
			{
				name = "Armor";
				class O_T_SPGPlatoon_Scorcher
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery SPG Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
					};
				};
				class O_T_SPGSection_Scorcher
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery SPG Section";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
					};
				};
				class O_T_TankPlatoon
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
					};
				};
				class O_T_TankPlatoon_AA
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon (Combined)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_APC_Tracked_02_AA_ghex_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_APC_Tracked_02_AA_ghex_F";
					};
				};
				class O_T_TankPlatoon_Heavy
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_MBT_04_command_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_04_cannon_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_04_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_MBT_04_cannon_F";
					};
				};
				class O_T_TankSection
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Section";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
					};
				};
				class O_T_TankSection_Heavy
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Section (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_MBT_04_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MBT_04_cannon_F";
					};
				};
			};
			class Infantry
			{
				name = "Infantry";
				class O_T_InfSentry
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_F";
					};
				};
				class O_T_InfSquad
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Rifle Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_medic_F";
					};
				};
				class O_T_InfSquad_Weapons
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Weapons Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_A_F";
					};
					class Unit6
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_medic_F";
					};
				};
				class O_T_InfTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Fire Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
					};
				};
				class O_T_InfTeam_AA
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Air-defense Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
					};
				};
				class O_T_InfTeam_AT
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Anti-armor Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
					};
				};
				class O_T_InfTeam_AT_Heavy
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Anti-Armor Team (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_HAT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_HAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AHAT_F";
					};
				};
				class O_T_reconPatrol
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Patrol";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_recon_F";
					};
				};
				class O_T_reconSentry
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_recon_M_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_recon_F";
					};
				};
				class O_T_reconTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_recon_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_recon_JTAC_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_recon_exp_F";
					};
				};
				class O_T_SniperTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Sniper Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_sniper_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_spotter_F";
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class O_T_MechInf_AA
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Air-defense Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_APC_Tracked_02_cannon_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AA_F";
					};
					class Unit4
					{
						position[] = {-10, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AA_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_AA_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
					};
				};
				class O_T_MechInf_AT
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Anti-armor Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_APC_Tracked_02_cannon_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_AT_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
					};
				};
				class O_T_MechInf_Support
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Support Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_APC_Wheeled_02_rcws_v2_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_repair_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_engineer_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_medic_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_exp_F";
					};
					class Unit8
					{
						position[] = {-20, -2, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_A_F";
					};
				};
				class O_T_MechInfSquad
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Rifle Squad";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "O_T_APC_Wheeled_02_rcws_v2_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_A_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_medic_F";
					};
				};
			};
			class Motorized_MTP
			{
				name = "Motorized Infantry";
				class O_T_MotInf_AA
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Air-defense Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
					};
				};
				class O_T_MotInf_AssaultViperTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Viper Assault Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_LSV_02_armed_viper_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_V_Soldier_TL_ghex_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_V_Soldier_JTAC_ghex_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_M_ghex_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Exp_ghex_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_LAT_ghex_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Medic_ghex_F";
					};
				};
				class O_T_MotInf_AT
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Anti-armor Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
					};
				};
				class O_T_MotInf_GMGTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_support_GMG_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_support_AMG_F";
					};
				};
				class O_T_MotInf_MGTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_support_MG_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_support_AMG_F";
					};
				};
				class O_T_MotInf_MortTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Mortar Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_support_Mort_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_support_AMort_F";
					};
				};
				class O_T_MotInf_ReconViperTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Viper Recon Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_LSV_02_unarmed_viper_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_V_Soldier_TL_ghex_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_V_Soldier_JTAC_ghex_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_M_ghex_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Exp_ghex_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_LAT_ghex_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Medic_ghex_F";
					};
				};
				class O_T_MotInf_Reinforcements
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Reinforcements";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_Truck_03_transport_ghex_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_SL_F";
					};
					class Unit10
					{
						position[] = {-5, -2, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit11
					{
						position[] = {-5, -4, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_GL_F";
					};
					class Unit12
					{
						position[] = {-5, -6, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_M_F";
					};
					class Unit5
					{
						position[] = {5, -8, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5, -10, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {-5, -8, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_A_F";
					};
					class Unit8
					{
						position[] = {-5, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_medic_F";
					};
					class Unit9
					{
						position[] = {-5, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
				};
				class O_T_MotInf_Team
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_MRAP_02_gmg_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_AT_F";
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
				class O_T_AttackTeam_UAV
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Attack UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_UAV_02_CAS_F";
					};
				};
				class O_T_AttackTeam_UGV
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Attack UGV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_UGV_01_rcws_ghex_F";
					};
				};
				class O_T_diverTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Diver Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_diver_F";
					};
				};
				class O_T_diverTeam_Boat
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Diver Team (Boat)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_diver_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_Boat_Transport_01_F";
					};
				};
				class O_T_diverTeam_SDV
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Diver Team (SDV)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_diver_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_SDV_01_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_SDV_01_F";
					};
				};
				class O_T_ReconTeam_UAV
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Recon UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_UAV_02_F";
					};
				};
				class O_T_ReconTeam_UGV
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Recon UGV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_UGV_01_ghex_F";
					};
				};
				class O_T_SmallTeam_UAV
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Small UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_UAV_01_F";
					};
				};
				class O_T_ViperTeam
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Viper Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_V_Soldier_TL_ghex_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_V_Soldier_JTAC_ghex_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_M_ghex_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Exp_ghex_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_LAT_ghex_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_V_Soldier_Medic_ghex_F";
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class O_T_recon_EOD
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Support Team (EOD)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_recon_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_recon_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_recon_F";
					};
				};
				class O_T_support_CLS
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (CLS)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_medic_F";
					};
				};
				class O_T_support_ENG
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (Engineer)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_engineer_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_repair_F";
					};
				};
				class O_T_support_EOD
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (EOD)";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_soldier_exp_F";
					};
				};
				class O_T_support_GMG
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_support_GMG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_support_AMG_F";
					};
				};
				class O_T_support_MG
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_support_MG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_support_AMG_F";
					};
				};
				class O_T_support_Mort
				{
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
					name = "Mortar Team";
					side = 0;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "O_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "O_T_support_Mort_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "O_T_support_AMort_F";
					};
				};
			};
		};
	};
	class Empty
	{
		name = "Compositions";
		side = 8;
		class Civilian
		{
			name = "Civilian";
			class Checkpoints
			{
				name = "Check Points";
				class CheckpointLarge: CheckpointSmall
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Check Point (Large)";
					class Object0
					{
						dir = 0;
						position[] = {4.25, 0, 0};
						rank = "";
						side = 8;
						vehicle = "RoadCone_F";
					};
					class Object1
					{
						dir = 90;
						position[] = {4.5, 0, 0};
						rank = "";
						side = 8;
						vehicle = "ArrowDesk_L_F";
					};
					class Object2
					{
						dir = 0;
						position[] = {4.75, 0, 0};
						rank = "";
						side = 8;
						vehicle = "Flag_BI_F";
					};
					class Object3
					{
						dir = 0;
						position[] = {-4.25, 0, 0};
						rank = "";
						side = 8;
						vehicle = "RoadCone_F";
					};
					class Object4
					{
						dir = 270;
						position[] = {-4.5, 0, 0};
						rank = "";
						side = 8;
						vehicle = "ArrowDesk_R_F";
					};
					class Object5
					{
						dir = 180;
						position[] = {-4.75, 0, 0};
						rank = "";
						side = 8;
						vehicle = "Flag_BI_F";
					};
				};
				class CheckpointMedium: CheckpointSmall
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Check Point (Medium)";
					class Object0
					{
						dir = 0;
						position[] = {4.25, 0, 0};
						rank = "";
						side = 8;
						vehicle = "RoadCone_F";
					};
					class Object1
					{
						dir = 90;
						position[] = {4.5, 0, 0};
						rank = "";
						side = 8;
						vehicle = "ArrowDesk_L_F";
					};
					class Object2
					{
						dir = 0;
						position[] = {-4.25, 0, 0};
						rank = "";
						side = 8;
						vehicle = "RoadCone_F";
					};
					class Object3
					{
						dir = 270;
						position[] = {-4.5, 0, 0};
						rank = "";
						side = 8;
						vehicle = "ArrowDesk_R_F";
					};
				};
				class CheckpointSmall
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Check Point (Small)";
					side = 8;
					class Object0
					{
						dir = 0;
						position[] = {4.25, 0, 0};
						rank = "";
						side = 8;
						vehicle = "RoadCone_F";
					};
					class Object1
					{
						dir = 180;
						position[] = {4.25, 0.25, -0.4};
						rank = "";
						side = 8;
						vehicle = "FlagSmall_F";
					};
					class Object2
					{
						dir = 0;
						position[] = {-4.25, 0, 0};
						rank = "";
						side = 8;
						vehicle = "RoadCone_F";
					};
					class Object3
					{
						dir = 180;
						position[] = {-4.25, 0.25, -0.4};
						rank = "";
						side = 8;
						vehicle = "FlagSmall_F";
					};
				};
			};
		};
		class Guerrilla
		{
			name = "Guerrilla";
			class Camps
			{
				name = "Camps";
				class CampA
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Ant";
					side = 8;
					class Object0
					{
						dir = -223.998;
						position[] = {-4.25586, 10.9199, 0.001297};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object1
					{
						dir = 26.9091;
						position[] = {0.365234, 0.943359, -0.0300035};
						rank = "";
						side = 8;
						vehicle = "Land_Campfire_F";
					};
					class Object10
					{
						dir = -229.439;
						position[] = {1.9082, 9.74609, 1.19209e-005};
						rank = "";
						side = 8;
						vehicle = "Land_GasCooker_F";
					};
					class Object11
					{
						dir = -7.23993;
						position[] = {-0.414063, 10.0703, 2.26498e-005};
						rank = "";
						side = 8;
						vehicle = "Land_RiceBox_F";
					};
					class Object12
					{
						dir = 50.9521;
						position[] = {-0.601563, 10.3086, 2.0504e-005};
						rank = "";
						side = 8;
						vehicle = "Land_RiceBox_F";
					};
					class Object13
					{
						dir = -122.751;
						position[] = {0.648438, -0.617188, 0.00182009};
						rank = "";
						side = 8;
						vehicle = "Land_TinContainer_F";
					};
					class Object14
					{
						dir = -1.7554;
						position[] = {-1.44141, 11.3711, 0.00111127};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Long_F";
					};
					class Object15
					{
						dir = -1.7554;
						position[] = {1.47656, 11.4551, 0.000633478};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Long_F";
					};
					class Object16
					{
						dir = -241.8;
						position[] = {5.27539, -2.78516, 8.10623e-005};
						rank = "";
						side = 8;
						vehicle = "Land_TentA_F";
					};
					class Object17
					{
						dir = 76.3006;
						position[] = {0.236328, -1.07227, 0.481744};
						rank = "";
						side = 8;
						vehicle = "Land_Camping_Light_F";
					};
					class Object18
					{
						dir = -137.228;
						position[] = {4.22266, 11.0645, 0.00116634};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object19
					{
						dir = -260.421;
						position[] = {-3.39844, 9.73438, 3.83854e-005};
						rank = "";
						side = 8;
						vehicle = "Land_DuctTape_F";
					};
					class Object2
					{
						dir = 87.3948;
						position[] = {5.74219, 1.06055, -0.000133514};
						rank = "";
						side = 8;
						vehicle = "Land_TentA_F";
					};
					class Object20
					{
						dir = -100.759;
						position[] = {8.50781, -6.6875, 0.00101304};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Short_F";
					};
					class Object21
					{
						dir = -228.373;
						position[] = {8.07227, -8.12695, 0.000684023};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Short_F";
					};
					class Object22
					{
						dir = -198.221;
						position[] = {4.24805, -4.35547, 2.19345e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Basket_F";
					};
					class Object23
					{
						dir = 18.1445;
						position[] = {5.25195, -4.1543, -2.90871e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Sack_F";
					};
					class Object24
					{
						dir = 22.6568;
						position[] = {2.42578, 10.5117, 0.000141144};
						rank = "";
						side = 8;
						vehicle = "Land_Sacks_heap_F";
					};
					class Object25
					{
						dir = -116.15;
						position[] = {-3.56055, 10.4395, 9.53674e-007};
						rank = "";
						side = 8;
						vehicle = "Land_CanisterPlastic_F";
					};
					class Object26
					{
						dir = -163.539;
						position[] = {-4.02734, 9.54688, 9.53674e-007};
						rank = "";
						side = 8;
						vehicle = "Land_CanisterPlastic_F";
					};
					class Object27
					{
						dir = 17.2896;
						position[] = {3.56836, -2.95703, 4.17233e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Canteen_F";
					};
					class Object28
					{
						dir = -180.555;
						position[] = {6.54102, -8.89063, 0.000954866};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Short_F";
					};
					class Object29
					{
						dir = -224.81;
						position[] = {-1.35742, 2.63477, -1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WoodenBox_F";
					};
					class Object3
					{
						dir = 57.6576;
						position[] = {4.75195, 4.64453, -4.29153e-006};
						rank = "";
						side = 8;
						vehicle = "Land_TentA_F";
					};
					class Object30
					{
						dir = 92.0098;
						position[] = {0.347656, 10.0781, 0.000169277};
						rank = "";
						side = 8;
						vehicle = "Land_CerealsBox_F";
					};
					class Object31
					{
						dir = 67.7635;
						position[] = {0.164063, 10.1875, 0.000166416};
						rank = "";
						side = 8;
						vehicle = "Land_CerealsBox_F";
					};
					class Object32
					{
						dir = 73.7781;
						position[] = {-0.353516, 10.2949, -7.58171e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BottlePlastic_V2_F";
					};
					class Object33
					{
						dir = 37.7931;
						position[] = {-0.625, 10.0625, 4.31538e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BakedBeans_F";
					};
					class Object34
					{
						dir = -266.146;
						position[] = {-11.7969, -6.59961, 0.00115681};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object35
					{
						dir = 4.48306;
						position[] = {-10.1348, -8.61914, 0.00138569};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object4
					{
						dir = 1.20355;
						position[] = {-3.98242, -2.11719, 0.000212669};
						rank = "";
						side = 8;
						vehicle = "Land_WoodPile_F";
					};
					class Object5
					{
						dir = 77.2351;
						position[] = {0.292969, -0.992188, 0.000347853};
						rank = "";
						side = 8;
						vehicle = "Land_WoodenLog_F";
					};
					class Object6
					{
						dir = -111.978;
						position[] = {-3.07031, -1.79102, 0};
						rank = "";
						side = 8;
						vehicle = "Land_Axe_F";
					};
					class Object7
					{
						dir = 36.6354;
						position[] = {-2.82813, 10.0547, 0.0243175};
						rank = "";
						side = 8;
						vehicle = "Land_Shovel_F";
					};
					class Object8
					{
						dir = 35.8188;
						position[] = {-3.125, -2.88281, 8.65459e-005};
						rank = "";
						side = 8;
						vehicle = "Land_CanisterFuel_F";
					};
					class Object9
					{
						dir = -19.4859;
						position[] = {1.2207, 10.2578, 4.76837e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Canteen_F";
					};
				};
				class CampB
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Bear";
					side = 8;
					class Object0
					{
						dir = -150.11;
						position[] = {-1.89063, 0.367188, -0.0298777};
						rank = "";
						side = 8;
						vehicle = "Land_Campfire_F";
					};
					class Object1
					{
						dir = -82.2763;
						position[] = {1.90234, 1.66602, -0.000201225};
						rank = "";
						side = 8;
						vehicle = "Land_WoodPile_F";
					};
					class Object10
					{
						dir = -78.5489;
						position[] = {1.38086, -0.180664, -4.29153e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Sleeping_bag_brown_F";
					};
					class Object11
					{
						dir = 2.52763;
						position[] = {0.339844, -14.3086, 0.00121403};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object12
					{
						dir = 24.8774;
						position[] = {0.851563, 1.13574, 0};
						rank = "";
						side = 8;
						vehicle = "Land_Axe_F";
					};
					class Object13
					{
						dir = 96.2567;
						position[] = {-0.642578, 5.65918, 4.29153e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BakedBeans_F";
					};
					class Object14
					{
						dir = -31.0792;
						position[] = {-1.23047, 5.00098, 4.81606e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BakedBeans_F";
					};
					class Object15
					{
						dir = -150.962;
						position[] = {-5.01953, -2.1084, 4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_CanisterPlastic_F";
					};
					class Object16
					{
						dir = 171.781;
						position[] = {-0.914063, -2.65039, 1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_FMradio_F";
					};
					class Object17
					{
						dir = -90.5665;
						position[] = {-4.34766, -2.59863, 0.00181508};
						rank = "";
						side = 8;
						vehicle = "Land_TinContainer_F";
					};
					class Object18
					{
						dir = 78.4225;
						position[] = {-4.67188, -2.66992, 9.53674e-007};
						rank = "";
						side = 8;
						vehicle = "Land_CanisterPlastic_F";
					};
					class Object19
					{
						dir = -93.4648;
						position[] = {0.0292969, 1.22461, 4.17233e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BakedBeans_F";
					};
					class Object2
					{
						dir = -42.6505;
						position[] = {0.0585938, -2.04883, -2.67029e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Sleeping_bag_F";
					};
					class Object20
					{
						dir = -107.466;
						position[] = {-1.40625, 4.96582, 5.36442e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Can_V1_F";
					};
					class Object21
					{
						dir = 186.941;
						position[] = {-1.39844, 5.08691, 5.4121e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Can_V2_F";
					};
					class Object22
					{
						dir = 41.0899;
						position[] = {-1.22461, 5.16504, 4.36306e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Canteen_F";
					};
					class Object23
					{
						dir = -152.797;
						position[] = {0.683594, 2.88574, 4.07696e-005};
						rank = "";
						side = 8;
						vehicle = "Land_MetalWire_F";
					};
					class Object24
					{
						dir = -78.9678;
						position[] = {0.662109, 1.05273, -1.19209e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Gloves_F";
					};
					class Object25
					{
						dir = 137.141;
						position[] = {11.4336, 4.81738, 2.16961e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Basket_F";
					};
					class Object26
					{
						dir = 93.11;
						position[] = {-5.17969, 6.41992, 6.19888e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Sacks_heap_F";
					};
					class Object27
					{
						dir = -79.644;
						position[] = {-4.31055, 0.711914, 0.00312424};
						rank = "";
						side = 8;
						vehicle = "Land_CampingChair_V1_F";
					};
					class Object28
					{
						dir = -113.715;
						position[] = {2.15625, 5.00586, 7.29561e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Bucket_F";
					};
					class Object29
					{
						dir = -147.808;
						position[] = {-0.511719, 5.7666, 0.000158787};
						rank = "";
						side = 8;
						vehicle = "Land_CerealsBox_F";
					};
					class Object3
					{
						dir = -2.19107;
						position[] = {-1.82422, -3.01953, -0.000309467};
						rank = "";
						side = 8;
						vehicle = "Land_Sleeping_bag_F";
					};
					class Object30
					{
						dir = 161.764;
						position[] = {10.4551, 7.16504, 0.000163317};
						rank = "";
						side = 8;
						vehicle = "Land_CerealsBox_F";
					};
					class Object31
					{
						dir = -13.3173;
						position[] = {-2.27734, 2.97461, 0.00312304};
						rank = "";
						side = 8;
						vehicle = "Land_CampingChair_V1_F";
					};
					class Object32
					{
						dir = -43.775;
						position[] = {10.2422, -11.7207, -6.67572e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object33
					{
						dir = -75.4964;
						position[] = {14.9609, -5.49707, 7.72476e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object34
					{
						dir = 72.4305;
						position[] = {-15.7168, -1.95605, -2.19345e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object35
					{
						dir = 40.7091;
						position[] = {-12.2266, -8.96582, 0.00012207};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object36
					{
						dir = -44.8369;
						position[] = {2.30859, -13.1406, 0.000994921};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Short_F";
					};
					class Object37
					{
						dir = -135.669;
						position[] = {-1.53906, -12.9268, 0.0010407};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Short_F";
					};
					class Object38
					{
						dir = 99.8685;
						position[] = {2.23047, -12.001, 4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_CanisterPlastic_F";
					};
					class Object39
					{
						dir = -92.9744;
						position[] = {-2.06836, 8.66797, 1.43051e-005};
						rank = "";
						side = 8;
						vehicle = "Land_TentDome_F";
					};
					class Object4
					{
						dir = 195.967;
						position[] = {11.582, 7.99316, 0.00129223};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object40
					{
						dir = -79.2151;
						position[] = {2.25391, 8.04688, 2.19345e-005};
						rank = "";
						side = 8;
						vehicle = "Land_TentDome_F";
					};
					class Object41
					{
						dir = 189.408;
						position[] = {-0.785156, 0.709961, 0.000108957};
						rank = "";
						side = 8;
						vehicle = "Land_Garbage_square5_F";
					};
					class Object5
					{
						dir = -77.5248;
						position[] = {12.9688, 5.55762, 0.00129032};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object6
					{
						dir = 113.632;
						position[] = {-14.4219, 8.14844, 0.00129414};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object7
					{
						dir = 200.141;
						position[] = {-11.8477, 9.13574, 0.00129223};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object8
					{
						dir = 29.3423;
						position[] = {-13.6719, 5.52441, 0.00132179};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object9
					{
						dir = 178.63;
						position[] = {-3.78906, 1.35449, -0.000274181};
						rank = "";
						side = 8;
						vehicle = "Land_Camping_Light_F";
					};
				};
				class CampC
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Crow";
					side = 8;
					class Object0
					{
						dir = -316.283;
						position[] = {-11.4805, -1.93555, 0.00122738};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object1
					{
						dir = -228.691;
						position[] = {-11.5391, 0.832031, 0.00142479};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object10
					{
						dir = -332.58;
						position[] = {0.0683594, -0.123047, -0.0299625};
						rank = "";
						side = 8;
						vehicle = "Land_Campfire_F";
					};
					class Object11
					{
						dir = -239.828;
						position[] = {-1.45117, -3.02539, -1.00136e-005};
						rank = "";
						side = 8;
						vehicle = "Land_WoodPile_F";
					};
					class Object12
					{
						dir = -279.672;
						position[] = {-1.5918, 3.23633, -0.000163555};
						rank = "";
						side = 8;
						vehicle = "Land_Ammobox_rounds_F";
					};
					class Object13
					{
						dir = -323.236;
						position[] = {-1.19922, 3.18945, -0.000164032};
						rank = "";
						side = 8;
						vehicle = "Land_Ammobox_rounds_F";
					};
					class Object14
					{
						dir = -1.61444;
						position[] = {9.72656, 1.9043, 2.81334e-005};
						rank = "";
						side = 8;
						vehicle = "Land_CratesShabby_F";
					};
					class Object15
					{
						dir = -332.863;
						position[] = {8.21094, 1.97266, -0.000185013};
						rank = "";
						side = 8;
						vehicle = "Land_Sacks_heap_F";
					};
					class Object16
					{
						dir = 5.03946;
						position[] = {-0.505859, 0.722656, 4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Matches_F";
					};
					class Object17
					{
						dir = 4.21674;
						position[] = {-8.03906, -1.21289, 0.00011611};
						rank = "";
						side = 8;
						vehicle = "Land_ButaneCanister_F";
					};
					class Object18
					{
						dir = -149.584;
						position[] = {-8.00586, -1.8457, 4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_CanisterPlastic_F";
					};
					class Object19
					{
						dir = -286.576;
						position[] = {-2.50781, -0.783203, 4.48227e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Canteen_F";
					};
					class Object2
					{
						dir = 1.99292;
						position[] = {-9.31055, -2.42773, 0.00112081};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Short_F";
					};
					class Object20
					{
						dir = -326.443;
						position[] = {-2.17969, -0.820313, -4.1008e-005};
						rank = "";
						side = 8;
						vehicle = "Land_DuctTape_F";
					};
					class Object21
					{
						dir = -320.077;
						position[] = {-8.07617, -0.990234, 2.38419e-007};
						rank = "";
						side = 8;
						vehicle = "Land_GasCanister_F";
					};
					class Object22
					{
						dir = -26.2188;
						position[] = {0.0742188, -2.9707, 3.93391e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BakedBeans_F";
					};
					class Object23
					{
						dir = -329.417;
						position[] = {0.242188, -2.98633, 4.50611e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BakedBeans_F";
					};
					class Object24
					{
						dir = -316.878;
						position[] = {2.76953, 0.763672, 4.55379e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Canteen_F";
					};
					class Object25
					{
						dir = 5.04303;
						position[] = {2.64258, 1.02148, 0};
						rank = "";
						side = 8;
						vehicle = "Land_PainKillers_F";
					};
					class Object26
					{
						dir = -65.4825;
						position[] = {-7.89063, -0.974609, -1.90735e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Bandage_F";
					};
					class Object27
					{
						dir = -333.986;
						position[] = {-7.94531, -1.10547, -1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Bandage_F";
					};
					class Object28
					{
						dir = -354.173;
						position[] = {-1.93945, -2.12891, 0};
						rank = "";
						side = 8;
						vehicle = "Land_Axe_fire_F";
					};
					class Object29
					{
						dir = -69.6894;
						position[] = {8.45703, -1.0918, -1.19209e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WoodenBox_F";
					};
					class Object3
					{
						dir = -1.07822;
						position[] = {-9.36914, 1.25586, 0.00100207};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Short_F";
					};
					class Object30
					{
						dir = -109.799;
						position[] = {9.77148, -0.0878906, 0};
						rank = "";
						side = 8;
						vehicle = "Land_WoodenBox_F";
					};
					class Object31
					{
						dir = -161.179;
						position[] = {-0.121094, -2.19531, 0.000136375};
						rank = "";
						side = 8;
						vehicle = "Land_Garbage_square3_F";
					};
					class Object4
					{
						dir = -224.466;
						position[] = {-1.97852, 2.06836, 1.85966e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Sleeping_bag_brown_F";
					};
					class Object5
					{
						dir = -75.8623;
						position[] = {3.00391, -0.746094, 1.43051e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Sleeping_bag_brown_F";
					};
					class Object6
					{
						dir = -177.456;
						position[] = {0.283203, 2.81641, -2.52724e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Sleeping_bag_F";
					};
					class Object7
					{
						dir = -129.688;
						position[] = {2.32422, 1.69727, 5.24521e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Sleeping_bag_F";
					};
					class Object8
					{
						dir = -22.6388;
						position[] = {1.27148, -2.80273, -3.19481e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Sleeping_bag_F";
					};
					class Object9
					{
						dir = -268.895;
						position[] = {-2.73633, -0.0234375, 9.77516e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Sleeping_bag_brown_F";
					};
				};
				class CampD
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Deer";
					side = 8;
					class Object0
					{
						dir = -0.140376;
						position[] = {0.394531, -1.20703, 2.00272e-005};
						rank = "";
						side = 8;
						vehicle = "Land_d_Stone_HouseSmall_V1_F";
					};
					class Object1
					{
						dir = 310.013;
						position[] = {9.95117, -7.33789, 0.00132561};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object10
					{
						dir = 268.957;
						position[] = {1.22852, -5.01563, 0.00100636};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Short_F";
					};
					class Object11
					{
						dir = 269.072;
						position[] = {7.03125, 0.179688, 1.23943};
						rank = "";
						side = 8;
						vehicle = "Land_WoodenTable_large_F";
					};
					class Object12
					{
						dir = 343.942;
						position[] = {6.63672, 1.00781, 1.23769};
						rank = "";
						side = 8;
						vehicle = "Land_ChairWood_F";
					};
					class Object13
					{
						dir = 164.313;
						position[] = {7.42969, -0.742188, 1.2412};
						rank = "";
						side = 8;
						vehicle = "Land_ChairWood_F";
					};
					class Object14
					{
						dir = -0.105845;
						position[] = {2.36523, -4.88672, -0.000144482};
						rank = "";
						side = 8;
						vehicle = "Land_Sacks_heap_F";
					};
					class Object15
					{
						dir = 3.69589;
						position[] = {13.1172, -2.74609, -6.24657e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Cages_F";
					};
					class Object16
					{
						dir = -0.140376;
						position[] = {12.5449, -0.589844, -0.000153065};
						rank = "";
						side = 8;
						vehicle = "Land_CratesShabby_F";
					};
					class Object17
					{
						dir = 148.996;
						position[] = {13.4004, -1.31445, 2.95639e-005};
						rank = "";
						side = 8;
						vehicle = "Land_CratesShabby_F";
					};
					class Object18
					{
						dir = 28.5778;
						position[] = {3.61719, -4.59766, 6.05583e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BarrelWater_grey_F";
					};
					class Object19
					{
						dir = 29.8422;
						position[] = {9.25977, 1.93555, 1.24953};
						rank = "";
						side = 8;
						vehicle = "Land_FireExtinguisher_F";
					};
					class Object2
					{
						dir = 227.285;
						position[] = {12.1016, 5.9043, 0.00129128};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object20
					{
						dir = 131.966;
						position[] = {-13.5176, -9.80078, -0.00151205};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_Ural_F";
					};
					class Object21
					{
						dir = 236.568;
						position[] = {-11.3359, 11.3027, -2.3365e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_Offroad_F";
					};
					class Object22
					{
						dir = 221.857;
						position[] = {-7.80859, 12.6191, 6.19888e-005};
						rank = "";
						side = 8;
						vehicle = "Land_GarbagePallet_F";
					};
					class Object23
					{
						dir = 8.52355;
						position[] = {-15.8555, -6, -0.00592875};
						rank = "";
						side = 8;
						vehicle = "Land_GarbageBarrel_01_F";
					};
					class Object24
					{
						dir = 71.2717;
						position[] = {-15.6445, -5.17578, -0.00591803};
						rank = "";
						side = 8;
						vehicle = "Land_GarbageBarrel_01_F";
					};
					class Object25
					{
						dir = 168.241;
						position[] = {2.31445, -2.49023, 1.21734};
						rank = "";
						side = 8;
						vehicle = "Land_ShelvesWooden_khaki_F";
					};
					class Object3
					{
						dir = 180.888;
						position[] = {7.11914, -7.83984, 0.000886202};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Long_F";
					};
					class Object4
					{
						dir = 268.957;
						position[] = {10.2949, -5.08984, 0.000999689};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Short_F";
					};
					class Object5
					{
						dir = 147.685;
						position[] = {9.42969, 6.37109, 0.00155449};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object6
					{
						dir = 316.049;
						position[] = {11.9004, 3.14648, 0.00152111};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
					class Object7
					{
						dir = 6.77331;
						position[] = {10.2109, 5.66602, 1.28746e-005};
						rank = "";
						side = 8;
						vehicle = "MetalBarrel_burning_F";
					};
					class Object8
					{
						dir = 6.77331;
						position[] = {10.5039, 4.87305, -1.38283e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Garbage_square3_F";
					};
					class Object9
					{
						dir = 46.1806;
						position[] = {1.56445, -7.28906, 0.00133228};
						rank = "";
						side = 8;
						vehicle = "Land_BagFence_Round_F";
					};
				};
				class CampE
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Eagle";
					side = 8;
					class Object0
					{
						dir = -179.795;
						position[] = {-0.253906, 1.53516, 0};
						rank = "";
						side = 8;
						vehicle = "Land_Unfinished_Building_02_F";
					};
					class Object1
					{
						dir = 6.54897;
						position[] = {-12.3848, -1.55273, -0.000129223};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_Car3_F";
					};
					class Object10
					{
						dir = 89.8735;
						position[] = {-8.10352, 3.75781, -2.24113e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Wall_Stand_F";
					};
					class Object11
					{
						dir = 88.7147;
						position[] = {-8.08398, 1.75977, -1.52588e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Wall_Stand_F";
					};
					class Object12
					{
						dir = -0.05896;
						position[] = {-7.16406, -5.32813, 0.000293255};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Wall_Stand_F";
					};
					class Object13
					{
						dir = -0.05896;
						position[] = {-5.17969, -5.31641, 4.33922e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Wall_Stand_F";
					};
					class Object14
					{
						dir = 88.7147;
						position[] = {-8.26758, -4.41992, 0.000136852};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Wall_Stand_F";
					};
					class Object15
					{
						dir = 88.7147;
						position[] = {-2.15625, 6.5293, -6.67572e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Wall_Stand_F";
					};
					class Object16
					{
						dir = -179.795;
						position[] = {2.19922, 8.10742, -0.000145435};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Wall_Crouch_F";
					};
					class Object17
					{
						dir = -90.8123;
						position[] = {3.11328, 7.02148, -2.71797e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Wall_Crouch_F";
					};
					class Object18
					{
						dir = -179.795;
						position[] = {5.0293, 5.92969, 2.38419e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Wall_Long_F";
					};
					class Object19
					{
						dir = -179.795;
						position[] = {8.03906, 5.96484, 0.000116348};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Corner_F";
					};
					class Object2
					{
						dir = -90.2572;
						position[] = {2.33789, -6.06055, 0.0218618};
						rank = "";
						side = 8;
						vehicle = "Land_Scaffolding_F";
					};
					class Object20
					{
						dir = -87.5648;
						position[] = {-7.19336, 8.05078, -2.14577e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Bricks_V2_F";
					};
					class Object21
					{
						dir = 162.602;
						position[] = {-4.62109, 8.38281, -1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Bricks_V4_F";
					};
					class Object3
					{
						dir = 175.95;
						position[] = {-5.99414, 8.93945, 2.38419e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Bricks_V1_F";
					};
					class Object4
					{
						dir = -94.535;
						position[] = {10.7383, -4.16797, 0.000859022};
						rank = "";
						side = 8;
						vehicle = "Land_WheelCart_F";
					};
					class Object5
					{
						dir = -103.153;
						position[] = {8.73828, -6.83984, 5.98431e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BarrelSand_grey_F";
					};
					class Object6
					{
						dir = 128.839;
						position[] = {-3.20508, -0.541016, 3.73159};
						rank = "";
						side = 8;
						vehicle = "MetalBarrel_burning_F";
					};
					class Object7
					{
						dir = -72.0582;
						position[] = {-8.9082, -3.01367, 1.90735e-006};
						rank = "";
						side = 8;
						vehicle = "Land_CinderBlocks_F";
					};
					class Object8
					{
						dir = 178.704;
						position[] = {-8.44727, 0.162109, 0.0317602};
						rank = "";
						side = 8;
						vehicle = "Land_CinderBlocks_F";
					};
					class Object9
					{
						dir = 90.1112;
						position[] = {-8.14844, 5.75195, -4.72069e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Shoot_House_Corner_Stand_F";
					};
				};
				class CampF
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Falcon";
					side = 8;
					class Object0
					{
						dir = -351.591;
						position[] = {4.32813, 0.855469, -5.48363e-005};
						rank = "";
						side = 8;
						vehicle = "Land_d_Windmill01_F";
					};
					class Object1
					{
						dir = -351.591;
						position[] = {-10.1563, 4.45605, -5.96046e-005};
						rank = "";
						side = 8;
						vehicle = "Land_d_House_Small_02_V1_F";
					};
					class Object10
					{
						dir = -262.834;
						position[] = {4.33398, -4.9707, -0.000284195};
						rank = "";
						side = 8;
						vehicle = "Land_Sacks_heap_F";
					};
					class Object11
					{
						dir = -268.887;
						position[] = {1.83203, -6.95605, -0.000167847};
						rank = "";
						side = 8;
						vehicle = "Land_Sacks_heap_F";
					};
					class Object12
					{
						dir = -105.97;
						position[] = {2.9082, -6.66992, -0.000302792};
						rank = "";
						side = 8;
						vehicle = "Land_Sacks_heap_F";
					};
					class Object13
					{
						dir = 4.89426;
						position[] = {-8.48633, -4.81445, 5.62668e-005};
						rank = "";
						side = 8;
						vehicle = "Land_CratesShabby_F";
					};
					class Object14
					{
						dir = -169.364;
						position[] = {-7.55078, -0.314453, 0.000110149};
						rank = "";
						side = 8;
						vehicle = "Land_CratesWooden_F";
					};
					class Object15
					{
						dir = -0.0715027;
						position[] = {11.4141, -0.0742188, -0.00570154};
						rank = "";
						side = 8;
						vehicle = "Land_WoodenCart_F";
					};
					class Object16
					{
						dir = -81.5651;
						position[] = {-8.2793, -1.33203, 8.82149e-005};
						rank = "";
						side = 8;
						vehicle = "Land_CratesShabby_F";
					};
					class Object17
					{
						dir = -89.9724;
						position[] = {0.654297, 5.6582, 0.000133514};
						rank = "";
						side = 8;
						vehicle = "Land_CratesShabby_F";
					};
					class Object18
					{
						dir = -351.127;
						position[] = {-3.45703, 2.78906, -4.76837e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WoodenTable_large_F";
					};
					class Object19
					{
						dir = -296.207;
						position[] = {11.1504, 1.91895, 1.38283e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Sacks_heap_F";
					};
					class Object2
					{
						dir = -91.2836;
						position[] = {-1.01172, -6.76367, 4.81606e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_Truck_dropside_F";
					};
					class Object20
					{
						dir = -351.591;
						position[] = {-4.2168, -0.461914, -2.14577e-005};
						rank = "";
						side = 8;
						vehicle = "MetalBarrel_burning_F";
					};
					class Object3
					{
						dir = -249.029;
						position[] = {-6.25977, -6.44238, 6.67572e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_Car2_F";
					};
					class Object4
					{
						dir = -0.0708923;
						position[] = {-5.43164, -2.89258, -4.62532e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Garbage_line_F";
					};
					class Object5
					{
						dir = -1.11584;
						position[] = {-1.09375, 6.50488, 2.38419e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Pipes_large_F";
					};
					class Object6
					{
						dir = -262.717;
						position[] = {1.99023, 6.19922, 7.15256e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Pallets_stack_F";
					};
					class Object7
					{
						dir = -109.152;
						position[] = {3.5918, 5.57715, -1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WoodenBox_F";
					};
					class Object8
					{
						dir = -193.021;
						position[] = {2.50391, 4.59961, 0};
						rank = "";
						side = 8;
						vehicle = "Land_Pallets_stack_F";
					};
					class Object9
					{
						dir = -6.83047;
						position[] = {4.1875, -6.38281, 0.000222683};
						rank = "";
						side = 8;
						vehicle = "Land_Sacks_heap_F";
					};
				};
			};
		};
		class Military
		{
			name = "Military";
			class Outposts
			{
				name = "Outposts";
				class OutpostA
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Audacity";
					side = 8;
					class Object0
					{
						dir = -359.177;
						position[] = {17.293, -14.2617, 1.7643e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object1
					{
						dir = -359.177;
						position[] = {8.45313, -17.7617, -2.98023e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BagBunker_Large_F";
					};
					class Object10
					{
						dir = -87.9473;
						position[] = {-4.74023, -20.2266, -9.29832e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object11
					{
						dir = -87.6435;
						position[] = {-16.127, -18.0391, 2.14577e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object12
					{
						dir = -142.421;
						position[] = {-19.7246, -11.0469, 5.00679e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object13
					{
						dir = -87.6435;
						position[] = {-23.1738, -3.79102, -0.000211239};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object14
					{
						dir = -88.6155;
						position[] = {-29.2246, -2.21484, 6.34193e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object15
					{
						dir = -359.177;
						position[] = {-17.9238, -0.650391, 0.000105381};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object16
					{
						dir = -176.221;
						position[] = {-24.9395, -7.20703, 1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object17
					{
						dir = -87.0515;
						position[] = {-29.0703, 3.43945, 3.09944e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object18
					{
						dir = -181.317;
						position[] = {-18.0625, 23.3438, 0.000293255};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object19
					{
						dir = -181.317;
						position[] = {-9.3457, 27.1719, 0.00024581};
						rank = "";
						side = 8;
						vehicle = "Land_BagBunker_Large_F";
					};
					class Object2
					{
						dir = -359.177;
						position[] = {-9.91406, -20.0605, 8.10623e-006};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object20
					{
						dir = -181.317;
						position[] = {8.90234, 29.9688, 0.000283718};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object21
					{
						dir = -223.635;
						position[] = {-25.7168, 19.9902, 0.000350475};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object22
					{
						dir = -269.396;
						position[] = {-28.7285, 12.7754, 0.000489712};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object23
					{
						dir = -181.317;
						position[] = {8.00195, 31.584, 0.000148296};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object24
					{
						dir = -181.317;
						position[] = {13.543, 31.7109, 0.000327587};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object25
					{
						dir = -270.088;
						position[] = {3.73633, 30.125, 0.000182629};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object26
					{
						dir = -269.784;
						position[] = {15.207, 28.375, 0.00029707};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object27
					{
						dir = -324.562;
						position[] = {19.0488, 21.5059, 0.00032568};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object28
					{
						dir = -269.784;
						position[] = {22.7695, 14.3906, 6.4373e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object29
					{
						dir = -269.192;
						position[] = {28.6133, 11.5703, 0.000339031};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object3
					{
						dir = -269.714;
						position[] = {18.3789, 16.9707, 4.29153e-005};
						rank = "";
						side = 8;
						vehicle = "Land_ToiletBox_F";
					};
					class Object30
					{
						dir = -181.317;
						position[] = {17.6504, 11.0527, 0.000380993};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object31
					{
						dir = -358.362;
						position[] = {24.4961, 17.5547, 0.000277042};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object32
					{
						dir = -269.192;
						position[] = {28.4902, 5.93359, 0.000306606};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object33
					{
						dir = -179.344;
						position[] = {12.9531, 7.30664, 1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo20_military_green_F";
					};
					class Object34
					{
						dir = -226.972;
						position[] = {13.5508, -1.24023, 0};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo20_military_green_F";
					};
					class Object35
					{
						dir = -87.9473;
						position[] = {4.50391, -12.4336, -0.000194073};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object36
					{
						dir = -135.724;
						position[] = {4.6582, -6.69922, 2.71797e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object37
					{
						dir = -89.8261;
						position[] = {-5.44141, 17.5488, -0.000123501};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object38
					{
						dir = -131.234;
						position[] = {-2.50977, 12.9277, 4.43459e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object39
					{
						dir = -359.177;
						position[] = {-12.9004, -0.679688, 4.24385e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object4
					{
						dir = -1.1571;
						position[] = {-17.9082, -4.0918, -4.76837e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WaterTank_F";
					};
					class Object40
					{
						dir = 0.564758;
						position[] = {8.14063, 10.7969, 1.95503e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object41
					{
						dir = -269.714;
						position[] = {18.4258, 14.7832, 4.24385e-005};
						rank = "";
						side = 8;
						vehicle = "Land_ToiletBox_F";
					};
					class Object42
					{
						dir = -1.15741;
						position[] = {-17.9746, -7.32227, -5.48363e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WaterTank_F";
					};
					class Object43
					{
						dir = -170.348;
						position[] = {-8.47852, -2.16992, 7.39098e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WaterBarrel_F";
					};
					class Object44
					{
						dir = -45.1306;
						position[] = {-24.3457, 18.4219, 0.000153065};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object45
					{
						dir = -118.556;
						position[] = {-15.1074, -12.9922, 4.72069e-005};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object46
					{
						dir = -270.421;
						position[] = {25.0977, 0.388672, -6.67572e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo20_military_green_F";
					};
					class Object47
					{
						dir = -181.236;
						position[] = {9.38086, 28.5254, -1.57356e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_Patrol_V1_F";
					};
					class Object48
					{
						dir = 0.104889;
						position[] = {-10.2266, -18.4492, 8.53539e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_Patrol_V1_F";
					};
					class Object49
					{
						dir = -5.13113;
						position[] = {13.8574, 12.4707, 1.66893e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Pallets_F";
					};
					class Object5
					{
						dir = -339.361;
						position[] = {17.5156, -8.10742, 2.86102e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo20_military_green_F";
					};
					class Object50
					{
						dir = -85.4089;
						position[] = {-22.7402, 1.58984, 8.44002e-005};
						rank = "";
						side = 8;
						vehicle = "Land_PaperBox_closed_F";
					};
					class Object51
					{
						dir = -62.5624;
						position[] = {-8.33594, -3.24805, 4.62532e-005};
						rank = "";
						side = 8;
						vehicle = "Land_MetalBarrel_F";
					};
					class Object52
					{
						dir = -359.174;
						position[] = {-9.5, -3.68164, 6.12736e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BarrelEmpty_grey_F";
					};
					class Object53
					{
						dir = -353.066;
						position[] = {-8.76953, -3.85156, 5.96046e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BarrelTrash_grey_F";
					};
					class Object54
					{
						dir = -233.676;
						position[] = {-21.666, 4.33984, 4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_PaperBox_closed_F";
					};
					class Object55
					{
						dir = 0.82312;
						position[] = {-22.7129, 6.22656, -4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Pallets_stack_F";
					};
					class Object6
					{
						dir = -41.495;
						position[] = {25.0781, -11.1895, 7.48634e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object7
					{
						dir = -87.2553;
						position[] = {28.5352, -3.61133, 0.0002141};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object8
					{
						dir = -359.177;
						position[] = {-9.05469, -21.5039, -0.000127316};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object9
					{
						dir = -359.177;
						position[] = {-14.5977, -21.4395, 5.19753e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
				};
				class OutpostB
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Bravery";
					side = 8;
					class Object0
					{
						dir = 230.161;
						position[] = {-22.0176, -21.4414, -1.38283e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object1
					{
						dir = -91.1562;
						position[] = {-0.728516, 3.16211, 1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_Tower_V1_F";
					};
					class Object10
					{
						dir = 158.802;
						position[] = {-20.6113, 25.2637, -2.43187e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object11
					{
						dir = 135.998;
						position[] = {-13.5215, 30.1738, 0.000132084};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object12
					{
						dir = 246.759;
						position[] = {-31.834, 1.17383, 6.19888e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object13
					{
						dir = 90.0324;
						position[] = {-7.39258, 6.85156, -0.0449767};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object14
					{
						dir = 89.2487;
						position[] = {-7, -1.47656, -0.0677509};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object15
					{
						dir = 90.9827;
						position[] = {8, 7.33008, -0.0449634};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object16
					{
						dir = 90.9827;
						position[] = {8.22461, -1.10352, -0.0224957};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object17
					{
						dir = -67.6854;
						position[] = {28.0469, 5.7207, 9.77516e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object18
					{
						dir = -85.6178;
						position[] = {26.3672, -2.68945, 0.000254154};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object19
					{
						dir = 260.921;
						position[] = {-29.0703, -7.00391, 4.05312e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object2
					{
						dir = 129.284;
						position[] = {23.6758, -17.3516, -8.53539e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object20
					{
						dir = 88.9744;
						position[] = {-2.71875, -1.17383, 8.57841};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object21
					{
						dir = -88.948;
						position[] = {-0.265625, 7.10352, 4.66944};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object22
					{
						dir = 130.828;
						position[] = {29.0078, -20.5723, 0.000119209};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object23
					{
						dir = 63.3236;
						position[] = {33.127, 22.3242, -6.96182e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object24
					{
						dir = -6.03767;
						position[] = {-3.50977, 42.8574, -0.000144005};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object25
					{
						dir = -61.1947;
						position[] = {-39.8125, 16.3105, 9.53674e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object26
					{
						dir = 212.627;
						position[] = {-23.3418, -29.7461, 2.76566e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object27
					{
						dir = 177.922;
						position[] = {-6.7832, -34.4746, -0.000113487};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object28
					{
						dir = 175.731;
						position[] = {13.4668, -32.8359, -0.000113487};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object29
					{
						dir = 251.529;
						position[] = {-39.0469, -7.61523, 0.000110626};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object3
					{
						dir = 244.614;
						position[] = {28.0723, 16.666, -2.0504e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object30
					{
						dir = 142.909;
						position[] = {-20.5547, 35.6035, -0.000105858};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object31
					{
						dir = 214.404;
						position[] = {20.9648, 34.0801, 8.58307e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object32
					{
						dir = -80.4541;
						position[] = {34.4297, -0.890625, 0.000172615};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object33
					{
						dir = 263.779;
						position[] = {-15.543, 4.79883, -4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Pallets_stack_F";
					};
					class Object34
					{
						dir = -90.0552;
						position[] = {-6.7832, -12.8867, -1.57356e-005};
						rank = "";
						side = 8;
						vehicle = "Land_PaperBox_closed_F";
					};
					class Object35
					{
						dir = -0.542648;
						position[] = {11.9121, 4.45508, -4.52995e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WaterTank_F";
					};
					class Object36
					{
						dir = -0.542648;
						position[] = {12.041, 1.60938, -4.52995e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WaterTank_F";
					};
					class Object37
					{
						dir = -59.5887;
						position[] = {-7.95117, -14.6758, -0.000225067};
						rank = "";
						side = 8;
						vehicle = "Land_PaperBox_closed_F";
					};
					class Object38
					{
						dir = 225.143;
						position[] = {-15.5625, 7.18945, 2.38419e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Pallets_stack_F";
					};
					class Object39
					{
						dir = 129.284;
						position[] = {15.2715, -10.2324, -1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object4
					{
						dir = -61.616;
						position[] = {-31.7441, 13.9238, -9.20296e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object40
					{
						dir = 244.614;
						position[] = {16.8613, 10.2324, -0.000186443};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object41
					{
						dir = -2.40382;
						position[] = {-1.44336, 23.1914, -1.28746e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object42
					{
						dir = -61.616;
						position[] = {-19.1426, 8.78906, 5.19753e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object43
					{
						dir = 230.161;
						position[] = {-13.5508, -13.3164, -0.000157833};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object44
					{
						dir = -91.5242;
						position[] = {-2.99805, 5.31836, 7.48634e-005};
						rank = "";
						side = 8;
						vehicle = "Land_ToiletBox_F";
					};
					class Object45
					{
						dir = 179.126;
						position[] = {8.36523, 12.6465, -3.00407e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object46
					{
						dir = 178.494;
						position[] = {-3.36719, 12.0859, 5.57899e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object47
					{
						dir = 178.314;
						position[] = {8.84961, -6.19922, 0.000132084};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object48
					{
						dir = 178.861;
						position[] = {-2.56055, -6.61914, 9.01222e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object5
					{
						dir = -2.40382;
						position[] = {-1.75391, 35.998, 0.000109196};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object6
					{
						dir = 181.954;
						position[] = {-8.71484, -25.2441, 4.81606e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object7
					{
						dir = 178.689;
						position[] = {11.7109, -24.1133, 0.000204563};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object8
					{
						dir = 226.963;
						position[] = {11.5234, 31.4805, -8.91685e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object9
					{
						dir = 209.03;
						position[] = {18.4453, 26.4199, 6.7234e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
				};
				class OutpostC
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Courage";
					side = 8;
					class Object0
					{
						dir = -131.739;
						position[] = {-3.13086, 13.7285, 8.10623e-006};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object1
					{
						dir = -0.845581;
						position[] = {0.162109, 11.3379, 1.7643e-005};
						rank = "";
						side = 8;
						vehicle = "Land_ToiletBox_F";
					};
					class Object10
					{
						dir = 21.7148;
						position[] = {-11.8574, -14.4336, -0.000161648};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object11
					{
						dir = -5.38197;
						position[] = {-17.2734, -14.8867, -3.95775e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object12
					{
						dir = 93.7194;
						position[] = {21.5898, -10.373, -8.15392e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object13
					{
						dir = 91.2719;
						position[] = {21.707, -4.72852, 2.38419e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object14
					{
						dir = 133.912;
						position[] = {20.9102, -15.668, -0.000119686};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object15
					{
						dir = 43.2557;
						position[] = {8.38672, -15.5938, -2.43187e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object16
					{
						dir = 88.7307;
						position[] = {-18.4297, 2.04492, 6.19888e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object17
					{
						dir = 50.8217;
						position[] = {-21.4336, 6.0957, 0.000196934};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object18
					{
						dir = 88.1428;
						position[] = {-21.9102, 11.5762, -5.8651e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object19
					{
						dir = 108.365;
						position[] = {-20.5098, 17.0117, 0.000147343};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object2
					{
						dir = -45.9617;
						position[] = {16.5566, -14.2188, 1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_Patrol_V3_F";
					};
					class Object20
					{
						dir = -35.0778;
						position[] = {-6.92773, -15.8438, -3.19481e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object21
					{
						dir = -88.5967;
						position[] = {4.42773, 7.95508, -9.29832e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object22
					{
						dir = -117.121;
						position[] = {6.55469, 3.00781, 1.38283e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object23
					{
						dir = 177.693;
						position[] = {-4.35547, 18.0879, -1.66893e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object24
					{
						dir = 177.693;
						position[] = {-9.79688, 17.8008, -1.66893e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object25
					{
						dir = 177.693;
						position[] = {-15.3926, 17.5762, -3.57628e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object26
					{
						dir = 48.1373;
						position[] = {-21.0645, -11.041, 1.7643e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object27
					{
						dir = -128.789;
						position[] = {-25.0684, -0.458984, 6.19888e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object28
					{
						dir = -88.7266;
						position[] = {-25.0195, -5.5, 2.14577e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object29
					{
						dir = -89.1572;
						position[] = {-25.0625, -10.9629, -1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object3
					{
						dir = -92.6673;
						position[] = {-11.3809, 8.55078, 1.97887e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_HQ_V3_F";
					};
					class Object30
					{
						dir = 23.8596;
						position[] = {3.25586, -13.248, 0.000212193};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object31
					{
						dir = 179.263;
						position[] = {2.43164, -13.0957, -0.000215054};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object32
					{
						dir = -86.4784;
						position[] = {6.43945, -2.21289, 0.000174046};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object33
					{
						dir = -2.99341;
						position[] = {-4.28125, 2.95898, 0.000223637};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object34
					{
						dir = -48.4499;
						position[] = {18.1719, -15.8809, -0.000127316};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object35
					{
						dir = 107.837;
						position[] = {16.5254, 13.9688, -4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Pallets_stack_F";
					};
					class Object36
					{
						dir = -89.5618;
						position[] = {2.30078, 0.0449219, -4.29153e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WaterTank_F";
					};
					class Object37
					{
						dir = -89.3633;
						position[] = {21.3242, 6.44922, -1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object38
					{
						dir = 20.4457;
						position[] = {12.793, -8.28516, 0.000109196};
						rank = "";
						side = 8;
						vehicle = "Land_PaperBox_closed_F";
					};
					class Object39
					{
						dir = -157.397;
						position[] = {7.27344, 11.9043, -0.00664067};
						rank = "";
						side = 8;
						vehicle = "Land_Tyres_F";
					};
					class Object4
					{
						dir = -179.407;
						position[] = {4.66602, 13.7539, -1.4782e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object40
					{
						dir = -0.779358;
						position[] = {2.68164, 11.3594, 4.29153e-005};
						rank = "";
						side = 8;
						vehicle = "Land_ToiletBox_F";
					};
					class Object41
					{
						dir = 36.5702;
						position[] = {-18.082, -2.84766, -5.24521e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object42
					{
						dir = -30.9532;
						position[] = {2.22852, -5.32813, 2.90871e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object43
					{
						dir = -2.50154;
						position[] = {-3.23047, -5.82617, 0.000183582};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object44
					{
						dir = 177.704;
						position[] = {-23.043, 9.74023, -2.24113e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object45
					{
						dir = 88.5717;
						position[] = {-16.5449, 8.66406, 1.28746e-005};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object46
					{
						dir = 166.944;
						position[] = {10.8945, -9.42969, 0.000108242};
						rank = "";
						side = 8;
						vehicle = "Land_PaperBox_open_empty_F";
					};
					class Object47
					{
						dir = -179.407;
						position[] = {-21.5117, -10.873, -8.91685e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object48
					{
						dir = 158.176;
						position[] = {-2.41797, 7.22266, -5.96046e-005};
						rank = "";
						side = 8;
						vehicle = "Land_GarbageBags_F";
					};
					class Object49
					{
						dir = 168.535;
						position[] = {16.625, 12.0293, -7.15256e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Pallet_F";
					};
					class Object5
					{
						dir = -129.232;
						position[] = {-0.816406, 14.0254, -0.00010252};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object50
					{
						dir = -159.596;
						position[] = {-0.00585938, -3.39258, 5.98431e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BarrelSand_grey_F";
					};
					class Object51
					{
						dir = 143.945;
						position[] = {0.5625, -2.61328, 6.07967e-005};
						rank = "";
						side = 8;
						vehicle = "Land_BarrelEmpty_F";
					};
					class Object6
					{
						dir = -128.365;
						position[] = {21.127, 12.0488, -6.4373e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object7
					{
						dir = -119.066;
						position[] = {23.6973, 1.59961, -0.000169277};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object8
					{
						dir = 109.927;
						position[] = {23.5313, 0.519531, 0.000517368};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object9
					{
						dir = 1.98476;
						position[] = {12.4961, -19.0605, -7.77245e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
				};
				class OutpostD
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Defiance";
					side = 8;
					class Object0
					{
						dir = 0.0233765;
						position[] = {-5.32813, 19.4902, -0.000283241};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object1
					{
						dir = 2.05508;
						position[] = {11.4473, -9.95508, 2.00272e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object10
					{
						dir = 269.796;
						position[] = {21.2188, -3.41602, 0.000158787};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object11
					{
						dir = 269.796;
						position[] = {-16.1504, 1.61523, 0.000101566};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object12
					{
						dir = 269.796;
						position[] = {-16.1426, 7.18555, -1.66893e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object13
					{
						dir = 269.796;
						position[] = {-16.2188, 8.25977, 1.00136e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object14
					{
						dir = 270.541;
						position[] = {12.4746, 10.0117, 6.27041e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_HQ_V2_F";
					};
					class Object15
					{
						dir = 269.796;
						position[] = {4.68945, 2.59961, -1.85966e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object16
					{
						dir = 269.796;
						position[] = {4.69727, 8.16797, -0.000136852};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object17
					{
						dir = 269.796;
						position[] = {4.66016, 13.707, -0.000110149};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object18
					{
						dir = 130;
						position[] = {17.7324, -8.24805, -0.000190258};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object19
					{
						dir = 223.764;
						position[] = {-12.8496, -7.09375, 2.52724e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object2
					{
						dir = -52.7062;
						position[] = {18.3398, -7.55664, -0.000102043};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object20
					{
						dir = 46.4701;
						position[] = {-12.2227, -7.7793, -6.29425e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object21
					{
						dir = -54.2891;
						position[] = {-13.9648, 15.7344, -1.66893e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object22
					{
						dir = 128.417;
						position[] = {-14.584, 15.0469, -0.000104904};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object23
					{
						dir = 1.91972;
						position[] = {8.30273, -15.3906, -0.000153065};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_Patrol_V2_F";
					};
					class Object24
					{
						dir = 2.05508;
						position[] = {4.22852, -19.4824, -9.48906e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object25
					{
						dir = 2.05508;
						position[] = {4.51758, -9.63281, 9.20296e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object26
					{
						dir = 270.119;
						position[] = {4.74023, -8.31445, -3.00407e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object27
					{
						dir = 269.796;
						position[] = {-16.1777, -3.84766, -3.95775e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object28
					{
						dir = -58.4092;
						position[] = {8.58398, -7.67969, -0.0373197};
						rank = "";
						side = 8;
						vehicle = "Land_GarbageBags_F";
					};
					class Object29
					{
						dir = 92.4857;
						position[] = {4.52734, -15.9492, -0.000257015};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object3
					{
						dir = 0.0233765;
						position[] = {-10.8965, 19.5, -2.43187e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object30
					{
						dir = 269.796;
						position[] = {21.2188, 7.71875, 1.7643e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object31
					{
						dir = 269.796;
						position[] = {21.2266, 13.2891, -0.000100613};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object32
					{
						dir = 269.796;
						position[] = {21.1914, 2.25977, -0.000123501};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object33
					{
						dir = 180.674;
						position[] = {15.9316, 19.2031, 0.000122547};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object34
					{
						dir = 180.674;
						position[] = {10.3789, 19.3359, 4.29153e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object35
					{
						dir = 180.674;
						position[] = {21.3672, 19.0723, -1.85966e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object36
					{
						dir = 126.833;
						position[] = {-13.7207, 15.8359, 2.0504e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_Patrol_V2_F";
					};
					class Object37
					{
						dir = 265.634;
						position[] = {0.169922, 10.6855, -7.15256e-006};
						rank = "";
						side = 8;
						vehicle = "Land_ScrapHeap_1_F";
					};
					class Object38
					{
						dir = 85.4637;
						position[] = {0.0644531, 4.50586, 2.38419e-006};
						rank = "";
						side = 8;
						vehicle = "Land_ScrapHeap_2_F";
					};
					class Object39
					{
						dir = -70.7886;
						position[] = {12.9492, -2.63281, 0.000227451};
						rank = "";
						side = 8;
						vehicle = "MetalBarrel_burning_F";
					};
					class Object4
					{
						dir = 2.05508;
						position[] = {-10.5488, -9.43359, 7.48634e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object40
					{
						dir = 219.536;
						position[] = {13.459, -2.7793, -0.000142574};
						rank = "";
						side = 8;
						vehicle = "Land_Garbage_square5_F";
					};
					class Object41
					{
						dir = 270.784;
						position[] = {-9.64844, -2.5293, 8.10623e-006};
						rank = "";
						side = 8;
						vehicle = "Land_JunkPile_F";
					};
					class Object42
					{
						dir = 2.31973;
						position[] = {5.17188, -20.709, 0.000195503};
						rank = "";
						side = 8;
						vehicle = "Land_Sign_WarningMilitaryArea_F";
					};
					class Object43
					{
						dir = 44.6072;
						position[] = {-8.13867, -1.13477, -4.29153e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Pallets_stack_F";
					};
					class Object44
					{
						dir = 98.2682;
						position[] = {-3.33984, 4.32422, -0.00381589};
						rank = "";
						side = 8;
						vehicle = "Land_GarbageBarrel_01_F";
					};
					class Object45
					{
						dir = -88.1727;
						position[] = {4.40625, -12.7988, -0.000100613};
						rank = "";
						side = 8;
						vehicle = "Land_Garbage_square5_F";
					};
					class Object46
					{
						dir = -65.0075;
						position[] = {-1.46484, 6.89453, 7.29561e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Garbage_square5_F";
					};
					class Object47
					{
						dir = 161.852;
						position[] = {-8.34961, 0.382813, 5.8651e-005};
						rank = "";
						side = 8;
						vehicle = "Land_CratesShabby_F";
					};
					class Object48
					{
						dir = -88.1727;
						position[] = {9.62891, 3.94727, -5.60284e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Loudspeakers_F";
					};
					class Object5
					{
						dir = 270.667;
						position[] = {10.123, -14.1445, -6.4373e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object6
					{
						dir = 270.667;
						position[] = {10.0273, -19.8047, 0.00017786};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object7
					{
						dir = 270.667;
						position[] = {-4.99414, -13.8672, -3.19481e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object8
					{
						dir = 270.667;
						position[] = {-5.0332, -19.5215, -0.000182629};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object9
					{
						dir = 0.0233765;
						position[] = {0.328125, 19.4434, 4.81606e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
				};
				class OutpostE
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Endurance";
					side = 8;
					class Object0
					{
						dir = 268.147;
						position[] = {-11.2383, -7.875, 1.38283e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object1
					{
						dir = 227.148;
						position[] = {-7.93164, -11.8086, 0.000153065};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object10
					{
						dir = 267.76;
						position[] = {-6.76563, -3.45117, 0.000122547};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_House_V1_F";
					};
					class Object11
					{
						dir = 87.6723;
						position[] = {6.9082, 3.89648, -0.000207424};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_House_V1_F";
					};
					class Object12
					{
						dir = 178.557;
						position[] = {7.8418, -11.4277, 1.57356e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object13
					{
						dir = 178.557;
						position[] = {-3.16406, -11.7148, 6.7234e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object14
					{
						dir = 178.557;
						position[] = {2.08008, 11.7773, 2.38419e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object15
					{
						dir = 87.7722;
						position[] = {11.4141, 2.26758, 1.7643e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object16
					{
						dir = 87.9017;
						position[] = {-11.5723, 2.22852, -8.34465e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object17
					{
						dir = 314.574;
						position[] = {13.1992, -15.2813, -4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object18
					{
						dir = 226.447;
						position[] = {15.0996, 13.9824, 7.53403e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object19
					{
						dir = 226.555;
						position[] = {-12.6816, -16.0234, -0.000310898};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object2
					{
						dir = 267.546;
						position[] = {11.877, -7.82813, -0.000104427};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object20
					{
						dir = 265.407;
						position[] = {18.5879, -1.05078, 9.53674e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object21
					{
						dir = 177.222;
						position[] = {1.0918, 19.5195, -3.24249e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object22
					{
						dir = 265.407;
						position[] = {-18.377, -1.50781, -0.000226021};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object23
					{
						dir = 318.366;
						position[] = {-10.2305, -18.3535, 1.66893e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object24
					{
						dir = 318.366;
						position[] = {-16.9941, -11.0742, 0.000108242};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object25
					{
						dir = 355.469;
						position[] = {-17.957, -4.54492, -5.00679e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object26
					{
						dir = 355.469;
						position[] = {-18.834, 4.87891, -2.6226e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object27
					{
						dir = 86.9207;
						position[] = {-5.3418, 19.3066, -6.81877e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object28
					{
						dir = 86.9207;
						position[] = {4.29688, 19.8535, -2.38419e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object29
					{
						dir = 137.661;
						position[] = {10.7617, 18.7441, 4.29153e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object3
					{
						dir = 135.892;
						position[] = {11.6816, -8.07813, 0.000143528};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object30
					{
						dir = 137.661;
						position[] = {17.5117, 11.9082, -1.38283e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object31
					{
						dir = 173.384;
						position[] = {18.3086, 5.53711, 0.000102043};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object32
					{
						dir = 173.384;
						position[] = {19.084, -4.25195, -7.58171e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object33
					{
						dir = 224.613;
						position[] = {17.7988, -10.7266, 0.000120163};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object34
					{
						dir = 224.613;
						position[] = {11.0293, -17.6191, 0.000100136};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object35
					{
						dir = -1.19801;
						position[] = {-5.16016, -18.5176, -4.72069e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object36
					{
						dir = -1.19801;
						position[] = {3.46289, -18.2207, 4.81606e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object37
					{
						dir = 136.662;
						position[] = {9.20703, -8.76953, 7.15256e-006};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object38
					{
						dir = 340.729;
						position[] = {-3.72461, -10.2598, -7.00951e-005};
						rank = "";
						side = 8;
						vehicle = "Land_PortableLight_double_F";
					};
					class Object39
					{
						dir = 312.011;
						position[] = {-9.28711, 4.58984, -6.34193e-005};
						rank = "";
						side = 8;
						vehicle = "Land_PaperBox_closed_F";
					};
					class Object4
					{
						dir = 87.9017;
						position[] = {11.1582, 7.84375, 6.1512e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object40
					{
						dir = 69.6406;
						position[] = {-7.34961, 3.91406, -1.38283e-005};
						rank = "";
						side = 8;
						vehicle = "Land_PaperBox_closed_F";
					};
					class Object41
					{
						dir = 358.416;
						position[] = {-6.18555, -8.63086, -5.48363e-006};
						rank = "";
						side = 8;
						vehicle = "Land_WaterTank_F";
					};
					class Object42
					{
						dir = 88.4168;
						position[] = {9.3418, -0.900391, 3.19481e-005};
						rank = "";
						side = 8;
						vehicle = "Land_ToiletBox_F";
					};
					class Object43
					{
						dir = 42.7515;
						position[] = {-11.7148, 8.42188, 8.82149e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object44
					{
						dir = 48.1634;
						position[] = {-8.73242, 11.1992, -3.00407e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_1_F";
					};
					class Object45
					{
						dir = -1.19801;
						position[] = {6.01172, 0.574219, 0.00010252};
						rank = "";
						side = 8;
						vehicle = "Land_TTowerSmall_2_F";
					};
					class Object46
					{
						dir = 164.046;
						position[] = {8.9082, -4.83594, -0.00592184};
						rank = "";
						side = 8;
						vehicle = "Land_GarbageBarrel_01_F";
					};
					class Object47
					{
						dir = 88.4194;
						position[] = {9.42578, -3.4668, 4.29153e-005};
						rank = "";
						side = 8;
						vehicle = "Land_ToiletBox_F";
					};
					class Object48
					{
						dir = 305.431;
						position[] = {-16.3965, 9.6582, 8.10623e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object49
					{
						dir = 324.789;
						position[] = {-11.8965, 14.8945, 1.00136e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_3_F";
					};
					class Object5
					{
						dir = 178.557;
						position[] = {7.58984, 11.9668, -4.72069e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object6
					{
						dir = 46.9021;
						position[] = {7.84766, 11.7637, 0.000200748};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object7
					{
						dir = 356.646;
						position[] = {-7.9668, 11.3867, 5.19753e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object8
					{
						dir = 87.3005;
						position[] = {-11.8613, 7.76367, -5.67436e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrier_5_F";
					};
					class Object9
					{
						dir = 178.651;
						position[] = {-0.0917969, 11.5703, 0.000107288};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_Patrol_V1_F";
					};
				};
				class OutpostF
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Camp Fortitude";
					side = 8;
					class Object0
					{
						dir = 271.956;
						position[] = {18.8867, -10.7129, -0.000178814};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object1
					{
						dir = 181.89;
						position[] = {15.5234, 20.1484, -4.33922e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object10
					{
						dir = 269.14;
						position[] = {23.0723, 6.13867, 4.76837e-007};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object11
					{
						dir = 269.14;
						position[] = {22.9648, 13.9727, -0.000279903};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object12
					{
						dir = 269.14;
						position[] = {22.8242, 21.8457, -0.000375271};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object13
					{
						dir = 179.508;
						position[] = {19.2051, 25.4551, 0.000114918};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object14
					{
						dir = 179.508;
						position[] = {3.53125, 25.334, -0.00026083};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object15
					{
						dir = 179.508;
						position[] = {-4.3125, 25.2617, -0.000356197};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object16
					{
						dir = 179.508;
						position[] = {-19.9746, 25.127, 1.19209e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object17
					{
						dir = -0.30336;
						position[] = {13.7969, -14.0898, 0.000170231};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object18
					{
						dir = 89.3037;
						position[] = {-23.5098, 21.5137, -0.000194073};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object19
					{
						dir = 89.3037;
						position[] = {-23.1426, -1.98242, -0.00028944};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object2
					{
						dir = 179.046;
						position[] = {-7.02148, 9.3418, 0.000117064};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_HQ_V2_F";
					};
					class Object20
					{
						dir = 89.3037;
						position[] = {-23.2617, 5.82813, -0.00056982};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object21
					{
						dir = 89.3037;
						position[] = {-23.1445, -9.80273, -0.000665188};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object22
					{
						dir = 269.14;
						position[] = {23.3848, -17.3262, -5.29289e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object23
					{
						dir = 89.3037;
						position[] = {-23.0078, -17.6348, 0.000113964};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object24
					{
						dir = 271.956;
						position[] = {18.752, 16.8301, -7.77245e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object25
					{
						dir = 271.568;
						position[] = {-19.0566, 14.5117, -0.00013113};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object26
					{
						dir = 271.204;
						position[] = {-18.9551, -2.41211, 0.000273228};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object27
					{
						dir = 270.301;
						position[] = {18.8945, -2.18359, -0.000155926};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object28
					{
						dir = 269.14;
						position[] = {23.1719, -1.70898, -4.52995e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object29
					{
						dir = 179.244;
						position[] = {11.3574, 25.3691, -7.15256e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFenceD_F";
					};
					class Object3
					{
						dir = 271.054;
						position[] = {18.8164, 4.30859, 6.1512e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object30
					{
						dir = 0.102386;
						position[] = {19.8984, -20.8379, -7.00951e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object31
					{
						dir = -0.799965;
						position[] = {4.19922, -21.002, -0.000123501};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object32
					{
						dir = 0.102386;
						position[] = {12.0508, -20.8516, -0.000115871};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object33
					{
						dir = -0.799965;
						position[] = {-19.3438, -21.1387, -1.43051e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object34
					{
						dir = -0.108406;
						position[] = {2.35938, -21.8359, 3.33786e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Sign_WarningMilitaryArea_F";
					};
					class Object35
					{
						dir = 89.5986;
						position[] = {-23.4043, 13.6777, -0.000166416};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFenceD_F";
					};
					class Object36
					{
						dir = 181.375;
						position[] = {9.28906, 20.1992, 3.29018e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object37
					{
						dir = 89.1787;
						position[] = {12.5527, -6.87109, 2.28882e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Cargo_Tower_V2_ruins_F";
					};
					class Object38
					{
						dir = 158.359;
						position[] = {-1.63672, -13.8047, -0.00294423};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_UAZ_F";
					};
					class Object39
					{
						dir = 179.508;
						position[] = {-12.1445, 25.1816, 0.0002141};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object4
					{
						dir = 181.375;
						position[] = {0.666016, 20.0957, -3.57628e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object40
					{
						dir = -0.799965;
						position[] = {-11.4414, -21.0723, -3.38554e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
					class Object41
					{
						dir = 0.792412;
						position[] = {-13.2031, -14.127, -9.67979e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object42
					{
						dir = 181.375;
						position[] = {-15.998, 19.8477, -7.20024e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object43
					{
						dir = -8.11233;
						position[] = {12.2773, 13.7793, -0.00146294};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_Ural_F";
					};
					class Object44
					{
						dir = -78.1779;
						position[] = {-11.707, -8.69727, 1.90735e-006};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_T72_hull_F";
					};
					class Object45
					{
						dir = 269.338;
						position[] = {-13.6582, -0.628906, -0.0206404};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_BMP2_F";
					};
					class Object46
					{
						dir = 176.212;
						position[] = {-7.7832, -6.28906, -5.60284e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Wreck_T72_turret_F";
					};
					class Object47
					{
						dir = 252.593;
						position[] = {14.291, 4.70703, -2.0504e-005};
						rank = "";
						side = 8;
						vehicle = "Land_GarbageBags_F";
					};
					class Object48
					{
						dir = 177.115;
						position[] = {4.66211, 15.1641, -4.24385e-005};
						rank = "";
						side = 8;
						vehicle = "Land_JunkPile_F";
					};
					class Object49
					{
						dir = 245.996;
						position[] = {9.25195, 11.9648, 0.00119853};
						rank = "";
						side = 8;
						vehicle = "Land_Tyres_F";
					};
					class Object5
					{
						dir = 271.204;
						position[] = {-19.0313, 5.99219, -3.95775e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object6
					{
						dir = 181.375;
						position[] = {-3.52148, 20.0859, 3.29018e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object7
					{
						dir = 269.27;
						position[] = {-18.6719, -10.9805, -5.24521e-006};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object8
					{
						dir = 0.792412;
						position[] = {5.31055, -14.2695, -7.39098e-005};
						rank = "";
						side = 8;
						vehicle = "Land_HBarrierBig_F";
					};
					class Object9
					{
						dir = 269.14;
						position[] = {23.2461, -9.5, 9.58443e-005};
						rank = "";
						side = 8;
						vehicle = "Land_Mil_WiredFence_F";
					};
				};
			};
			class RoadBlocks
			{
				name = "Roadblocks";
				class RoadBlock1
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Hasty Roadblock";
					side = 8;
					class Object0
					{
						dir = -157.114;
						position[] = {2.44336, 12.3613, 0.00300884};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
					class Object1
					{
						dir = -175.146;
						position[] = {-2.07227, -2.45996, 0.000228882};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_stripes_F";
					};
					class Object2
					{
						dir = -86.4425;
						position[] = {-2.57422, -8.93555, -0.0177507};
						rank = "";
						side = 8;
						vehicle = "Land_Razorwire_F";
					};
					class Object3
					{
						dir = 31.2737;
						position[] = {-0.816406, -8.35059, 0.000106812};
						rank = "";
						side = 8;
						vehicle = "RoadCone_F";
					};
					class Object4
					{
						dir = 31.2748;
						position[] = {-0.800781, -5.61914, 8.96454e-005};
						rank = "";
						side = 8;
						vehicle = "RoadCone_F";
					};
					class Object5
					{
						dir = 31.2727;
						position[] = {-0.982422, -11.0762, 0.000135422};
						rank = "";
						side = 8;
						vehicle = "RoadCone_F";
					};
					class Object6
					{
						dir = -192.565;
						position[] = {4.97461, 12.165, 0.00276947};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
				};
				class RoadBlock2
				{
					icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
					name = "Roadblock";
					side = 8;
					class Object0
					{
						dir = 2.53815;
						position[] = {7.9043, 1.76563, -0.00354481};
						rank = "";
						side = 8;
						vehicle = "Land_BagBunker_Tower_F";
					};
					class Object1
					{
						dir = -178.674;
						position[] = {-7.41211, -3.91699, 0.00101042};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
					class Object10
					{
						dir = -182.682;
						position[] = {-5.05664, -6.01465, 0.00149727};
						rank = "";
						side = 8;
						vehicle = "RoadBarrier_F";
					};
					class Object2
					{
						dir = -178.892;
						position[] = {-4.77148, -3.95801, 0.0010643};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
					class Object3
					{
						dir = -134.671;
						position[] = {-9.68945, -2.9209, 0.00113869};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
					class Object4
					{
						dir = -86.6565;
						position[] = {-10.5527, -0.643555, 0.00142002};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
					class Object5
					{
						dir = -178.591;
						position[] = {6.11914, -4.46387, -0.00014925};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
					class Object6
					{
						dir = -178.815;
						position[] = {8.75977, -4.50098, 3.38554e-005};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
					class Object7
					{
						dir = -221.144;
						position[] = {11.0371, -3.64355, 3.76701e-005};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
					class Object8
					{
						dir = -269.167;
						position[] = {12.0469, -1.38086, 6.91414e-005};
						rank = "";
						side = 8;
						vehicle = "Land_CncBarrier_F";
					};
					class Object9
					{
						dir = -175.492;
						position[] = {6.34766, -6.3291, -0.00335217};
						rank = "";
						side = 8;
						vehicle = "RoadBarrier_F";
					};
				};
			};
		};
	};
	class Indep
	{
		name = "Independent";
		side = 2;
		class IND_C_F
		{
			name = "Syndikat";
			class Infantry
			{
				name = "Infantry";
				class BanditCombatGroup
				{
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Bandit Combat Group";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_4_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_3_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_7_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_5_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_6_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_2_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_8_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_1_F";
					};
				};
				class BanditFireTeam
				{
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Bandit Fire Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_4_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_3_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_5_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_1_F";
					};
				};
				class BanditShockTeam
				{
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Bandit Shock Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_6_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_2_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_7_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Bandit_8_F";
					};
				};
				class ParaCombatGroup
				{
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Paramilitary Combat Group";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_C_Soldier_Para_2_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Para_4_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_C_Soldier_Para_6_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_C_Soldier_Para_1_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_C_Soldier_Para_7_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Para_5_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Para_8_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Para_3_F";
					};
				};
				class ParaFireTeam
				{
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Paramilitary Fire Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_C_Soldier_Para_2_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Para_4_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_C_Soldier_Para_1_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Para_3_F";
					};
				};
				class ParaShockTeam
				{
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Paramilitary Shock Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_C_Soldier_Para_6_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Para_5_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_C_Soldier_Para_7_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_C_Soldier_Para_8_F";
					};
				};
			};
		};
		class IND_E_EMP_F
		{
			name = "LDF (EMP)";
			class Infantry_Deserters
			{
				name = "Infantry (Deserters)";
				class I_E_ParamilitarySquad
				{
					faction = "IND_E_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Militia Group";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_Militiaman_Leader_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_Militiaman_SMG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_Militiaman_Rifle_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_Deserter_Rifle_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_Deserter_AR_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_Deserter_GL_F";
					};
				};
			};
			class Infantry_EMP
			{
				name = "Infantry";
				class I_E_InfSentry
				{
					faction = "IND_E_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_GL_EMP_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_EMP_F";
					};
				};
				class I_E_InfSquad_E
				{
					faction = "IND_E_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_SL_EMP_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_RadioOperator_EMP_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_LAT2_EMP_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_M_EMP_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_EMP_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_EMP_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_EMP_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_medic_EMP_F";
					};
				};
				class I_E_InfTeam
				{
					faction = "IND_E_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_EMP_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_EMP_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_GL_EMP_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_RadioOperator_EMP_F";
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class I_E_MotInf_Reinforcements
				{
					faction = "IND_E_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Reinforcements";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_Truck_02_transport_EMP_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_SL_EMP_F";
					};
					class Unit10
					{
						position[] = {-5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_EMP_F";
					};
					class Unit11
					{
						position[] = {-5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_LAT2_EMP_F";
					};
					class Unit12
					{
						position[] = {-5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_M_EMP_F";
					};
					class Unit13
					{
						position[] = {-5, -8, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_EMP_F";
					};
					class Unit14
					{
						position[] = {-5, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_EMP_F";
					};
					class Unit15
					{
						position[] = {-5, -12, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_EMP_F";
					};
					class Unit16
					{
						position[] = {-5, -14, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_medic_EMP_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_EMP_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_LAT2_EMP_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_M_EMP_F";
					};
					class Unit5
					{
						position[] = {5, -8, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_EMP_F";
					};
					class Unit6
					{
						position[] = {5, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_EMP_F";
					};
					class Unit7
					{
						position[] = {5, -12, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_EMP_F";
					};
					class Unit8
					{
						position[] = {5, -14, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_medic_EMP_F";
					};
					class Unit9
					{
						position[] = {-5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_SL_EMP_F";
					};
				};
				class I_E_MotInf_Squad
				{
					faction = "IND_E_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Infantry Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_Truck_02_transport_EMP_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_SL_EMP_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_EMP_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_LAT2_EMP_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_M_EMP_F";
					};
					class Unit5
					{
						position[] = {5, -8, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_EMP_F";
					};
					class Unit6
					{
						position[] = {5, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_EMP_F";
					};
					class Unit7
					{
						position[] = {5, -12, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_EMP_F";
					};
					class Unit8
					{
						position[] = {5, -14, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_medic_EMP_F";
					};
				};
				class I_E_MotInf_Team
				{
					faction = "IND_E_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_Offroad_01_EMP_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_EMP_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_RadioOperator_EMP_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_Soldier_EMP_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_Soldier_AR_EMP_F";
					};
				};
			};
		};
		class IND_E_F
		{
			name = "LDF";
			class Infantry
			{
				name = "Infantry";
				class I_E_InfSentry
				{
					faction = "IND_E_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_F";
					};
				};
				class I_E_InfSquad
				{
					faction = "IND_E_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_RadioOperator_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_medic_F";
					};
				};
				class I_E_InfTeam
				{
					faction = "IND_E_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_RadioOperator_F";
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class I_E_MechInfSquad
				{
					faction = "IND_E_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Rifle Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_E_APC_tracked_03_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_RadioOperator_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_medic_F";
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class I_E_MotInf_Reinforcements
				{
					faction = "IND_E_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Reinforcements";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_Truck_02_transport_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_SL_F";
					};
					class Unit10
					{
						position[] = {-5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_F";
					};
					class Unit11
					{
						position[] = {-5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_LAT_F";
					};
					class Unit12
					{
						position[] = {-5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_M_F";
					};
					class Unit13
					{
						position[] = {-5, -8, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_F";
					};
					class Unit14
					{
						position[] = {-5, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_F";
					};
					class Unit15
					{
						position[] = {-5, -12, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_A_F";
					};
					class Unit16
					{
						position[] = {-5, -14, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_medic_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_M_F";
					};
					class Unit5
					{
						position[] = {5, -8, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {5, -12, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_A_F";
					};
					class Unit8
					{
						position[] = {5, -14, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_medic_F";
					};
					class Unit9
					{
						position[] = {-5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_SL_F";
					};
				};
				class I_E_MotInf_Squad
				{
					faction = "IND_E_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Infantry Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_Truck_02_transport_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_M_F";
					};
					class Unit5
					{
						position[] = {5, -8, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {5, -12, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_soldier_A_F";
					};
					class Unit8
					{
						position[] = {5, -14, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_medic_F";
					};
				};
				class I_E_MotInf_Team
				{
					faction = "IND_E_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_Offroad_01_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_E_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_RadioOperator_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_E_Soldier_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_E_Soldier_AR_F";
					};
				};
			};
		};
		class IND_F
		{
			name = "AAF";
			class Armored
			{
				name = "Armor";
				class HAF_TankPlatoon
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					name = "Tank Platoon";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_MBT_03_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_MBT_03_cannon_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_MBT_03_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_MBT_03_cannon_F";
					};
				};
				class HAF_TankPlatoon_AA
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					name = "Tank Platoon (Combined)";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_MBT_03_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_MBT_03_cannon_F";
					};
					class Unit10
					{
						position[] = {-15, -35, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAA_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_MBT_03_cannon_F";
					};
					class Unit3
					{
						position[] = {0, -15, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_APC_tracked_03_cannon_F";
					};
					class Unit4
					{
						position[] = {0, -20, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_SL_F";
					};
					class Unit5
					{
						position[] = {5, -25, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AA_F";
					};
					class Unit6
					{
						position[] = {-5, -25, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AA_F";
					};
					class Unit7
					{
						position[] = {10, -30, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AA_F";
					};
					class Unit8
					{
						position[] = {-10, -30, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAA_F";
					};
					class Unit9
					{
						position[] = {15, -35, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAA_F";
					};
				};
				class HAF_TankSection
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					name = "Tank Section";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_MBT_03_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_MBT_03_cannon_F";
					};
				};
				class I_LTankPlatoon_AA
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					name = "AWC Air-Defense Platoon";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_LT_01_scout_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_LT_01_AA_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_LT_01_AA_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_LT_01_AA_F";
					};
				};
				class I_LTankPlatoon_combined
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					name = "AWC Platoon (Combined)";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_LT_01_scout_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_LT_01_cannon_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_LT_01_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_LT_01_AT_F";
					};
				};
				class I_LTankSection_AA
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					name = "AWC Air-Defense Section";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_LT_01_AA_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_LT_01_AA_F";
					};
				};
				class I_LTankSection_Assault
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					name = "AWC Assault Section";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_LT_01_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_LT_01_cannon_F";
					};
				};
				class I_LTankSection_AT
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					name = "AWC Anti-Armor Section";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_LT_01_AT_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_LT_01_AT_F";
					};
				};
				class I_LTankSection_Recon
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					name = "AWC Recon Section";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_LT_01_scout_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_LT_01_cannon_F";
					};
				};
			};
			class Infantry
			{
				name = "Infantry";
				class HAF_InfSentry
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Sentry";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_Soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_F";
					};
				};
				class HAF_InfSquad
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Rifle Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_medic_F";
					};
				};
				class HAF_InfSquad_Weapons
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Weapons Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_A_F";
					};
					class Unit6
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_medic_F";
					};
				};
				class HAF_InfTeam
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Fire Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_LAT_F";
					};
				};
				class HAF_InfTeam_AA
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Air-defense Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_Soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_AAA_F";
					};
				};
				class HAF_InfTeam_AT
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Anti-armor Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_Soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_AAT_F";
					};
				};
				class HAF_SniperTeam
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					name = "Sniper Team";
					side = 2;
					class Unit1
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Sniper_F";
					};
					class Unit2
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_Spotter_F";
					};
				};
				class I_InfTeam_Light
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Fire Team (Light)";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_LAT2_F";
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class HAF_MechInf_AA
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					name = "Mechanized Air-defense Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_APC_tracked_03_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AA_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AA_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAT_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAA_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAA_F";
					};
				};
				class HAF_MechInf_AT
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					name = "Mechanized Anti-armor Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_APC_tracked_03_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAT_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_AAT_F";
					};
				};
				class HAF_MechInf_Support
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					name = "Mechanized Support Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_APC_Wheeled_03_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_repair_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_engineer_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_medic_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_exp_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_A_F";
					};
				};
				class HAF_MechInfSquad
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					name = "Mechanized Rifle Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 2;
						vehicle = "I_APC_Wheeled_03_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_A_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_medic_F";
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class HAF_MotInf_AA
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					name = "Motorized Air-defense Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_MRAP_03_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_Soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_AA_F";
					};
				};
				class HAF_MotInf_AT
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					name = "Motorized Anti-armor Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_MRAP_03_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_Soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_AT_F";
					};
				};
				class HAF_MotInf_GMGTeam
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					name = "Motorized GMG Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_MRAP_03_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_support_GMG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_support_AMG_F";
					};
				};
				class HAF_MotInf_MGTeam
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					name = "Motorized HMG Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_MRAP_03_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_support_MG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_support_AMG_F";
					};
				};
				class HAF_MotInf_MortTeam
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					name = "Motorized Mortar Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_MRAP_03_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_support_Mort_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_support_AMort_F";
					};
				};
				class HAF_MotInf_Reinforce
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					name = "Motorized Reinforcements";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Truck_02_transport_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_SL_F";
					};
					class Unit10
					{
						position[] = {-5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_F";
					};
					class Unit11
					{
						position[] = {-5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_LAT_F";
					};
					class Unit12
					{
						position[] = {-5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_M_F";
					};
					class Unit13
					{
						position[] = {-5, -8, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit14
					{
						position[] = {-5, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_AR_F";
					};
					class Unit15
					{
						position[] = {-5, -12, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_A_F";
					};
					class Unit16
					{
						position[] = {-5, -14, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_medic_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_M_F";
					};
					class Unit5
					{
						position[] = {5, -8, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5, -10, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {5, -12, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_soldier_A_F";
					};
					class Unit8
					{
						position[] = {5, -14, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_medic_F";
					};
					class Unit9
					{
						position[] = {-5, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_SL_F";
					};
				};
				class HAF_MotInf_Team
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					name = "Motorized Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_MRAP_03_gmg_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_Soldier_LAT_F";
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
				class HAF_AttackTeam_UAV
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Attack UAV Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_UAV_02_CAS_F";
					};
				};
				class HAF_AttackTeam_UGV
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Attack UGV Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_UGV_01_rcws_F";
					};
				};
				class HAF_DiverTeam
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Diver Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_diver_F";
					};
				};
				class HAF_DiverTeam_Boat
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Diver Team (Boat)";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_diver_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Boat_Transport_01_F";
					};
				};
				class HAF_DiverTeam_SDV
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Diver Team (SDV)";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_diver_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_SDV_01_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_SDV_01_F";
					};
				};
				class HAF_ReconTeam_UAV
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					name = "Recon UAV Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_UAV_02_F";
					};
				};
				class HAF_ReconTeam_UGV
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					name = "Recon UGV Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_UGV_01_F";
					};
				};
				class HAF_SmallTeam_UAV
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Small UAV Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_UAV_01_F";
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class HAF_Support_CLS
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Support Team (CLS)";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_medic_F";
					};
				};
				class HAF_Support_ENG
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Support Team (Engineer)";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_engineer_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_repair_F";
					};
				};
				class HAF_Support_EOD
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Support Team (EOD)";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_Soldier_exp_F";
					};
				};
				class HAF_Support_GMG
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "GMG Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_support_GMG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_support_AMG_F";
					};
				};
				class HAF_Support_MG
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "HMG Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_support_MG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_support_AMG_F";
					};
				};
				class HAF_Support_Mort
				{
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
					name = "Mortar Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_support_Mort_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_support_AMort_F";
					};
				};
			};
		};
		class IND_G_F
		{
			name = "FIA";
			class Infantry
			{
				name = "Infantry";
				class I_G_InfSquad_Assault
				{
					faction = "OPF_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Assault Squad";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_G_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_G_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_G_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_G_soldier_LAT2_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_G_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_G_soldier_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_G_soldier_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_G_medic_F";
					};
				};
				class I_G_InfTeam_Light
				{
					faction = "OPF_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name = "Patrol Team";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_G_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_G_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_G_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_G_soldier_LAT2_F";
					};
				};
			};
		};
		class IND_L_F
		{
			name = "Looters";
			class Infantry
			{
				name = "Infantry";
				class I_L_CriminalGang
				{
					faction = "IND_L_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Criminal Gang";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_L_Looter_Pistol_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_L_Looter_SG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_L_Looter_Rifle_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_L_Looter_SMG_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_L_Criminal_SG_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 2;
						vehicle = "I_L_Criminal_SMG_F";
					};
				};
				class I_L_LooterGang
				{
					faction = "IND_L_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Looter Gang";
					side = 2;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "I_L_Looter_Pistol_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_L_Looter_SG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "I_L_Looter_Rifle_F";
					};
				};
			};
		};
	};
	class West
	{
		name = "BLUFOR";
		side = 1;
		class BLU_CTRG_F
		{
			name = "CTRG";
			class Infantry
			{
				name = "Infantry";
				class B_CTRG_InfTeam_Light
				{
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team (Light)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_CTRG_soldier_TL_tna_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_CTRG_soldier_AR_tna_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_soldier_tna_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_soldier_LAT2_tna_F";
					};
				};
				class CTRG_InfSentry
				{
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_CTRG_Soldier_JTAC_tna_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_tna_F";
					};
				};
				class CTRG_InfSquad
				{
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_CTRG_Soldier_TL_tna_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_CTRG_Soldier_M_tna_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_Medic_tna_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_tna_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_CTRG_Soldier_JTAC_tna_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_Exp_tna_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
					};
				};
				class CTRG_InfTeam
				{
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_CTRG_Soldier_TL_tna_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_tna_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class CTRG_MotInf_AssaultTeam
				{
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Motorized Assault Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_LSV_01_armed_CTRG_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_CTRG_Soldier_Medic_tna_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_M_tna_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
					};
				};
				class CTRG_MotInf_ReconTeam
				{
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Motorized Recon Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_LSV_01_unarmed_CTRG_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_CTRG_Soldier_M_tna_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_Medic_tna_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_CTRG_Soldier_JTAC_tna_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_CTRG_Soldier_Exp_tna_F";
					};
				};
			};
		};
		class BLU_F
		{
			name = "NATO";
			class Armored
			{
				name = "Armor";
				class B_TankDestrSection_Rhino
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "Tank Destroyer Section";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_AFV_Wheeled_01_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_AFV_Wheeled_01_cannon_F";
					};
				};
				class B_TankDestrSection_RhinoUP
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "Tank Destroyer Section (UP)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_AFV_Wheeled_01_up_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_AFV_Wheeled_01_up_cannon_F";
					};
				};
				class BUS_SPGPlatoon_Scorcher
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "Artillery SPG Platoon";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_MBT_01_arty_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MBT_01_arty_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MBT_01_arty_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_MBT_01_arty_F";
					};
				};
				class BUS_SPGSection_MLRS
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "MLRS Section";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_MBT_01_mlrs_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MBT_01_mlrs_F";
					};
				};
				class BUS_SPGSection_Scorcher
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "Artillery SPG Section";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_MBT_01_arty_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MBT_01_arty_F";
					};
				};
				class BUS_TankPlatoon
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					name = "Tank Platoon";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_MBT_01_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MBT_01_cannon_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MBT_01_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_MBT_01_cannon_F";
					};
				};
				class BUS_TankPlatoon_AA
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					name = "Tank Platoon (Combined)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_MBT_01_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_APC_Tracked_01_aa_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MBT_01_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_APC_Tracked_01_aa_F";
					};
				};
				class BUS_TankSection
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					name = "Tank Section";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_MBT_01_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MBT_01_cannon_F";
					};
				};
			};
			class Infantry
			{
				name = "Infantry";
				class B_InfTeam_Light
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team (Light)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_LAT2_F";
					};
				};
				class BUS_InfAssault
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Assault Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_HeavyGunner_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAR_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_Sharpshooter_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_LAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_medic_F";
					};
				};
				class BUS_InfSentry
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_F";
					};
				};
				class BUS_InfSquad
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_medic_F";
					};
				};
				class BUS_InfSquad_Weapons
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_A_F";
					};
					class Unit6
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_medic_F";
					};
				};
				class BUS_InfTeam
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_LAT_F";
					};
				};
				class BUS_InfTeam_AA
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Air-defense Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAA_F";
					};
				};
				class BUS_InfTeam_AT
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Anti-armor Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAT_F";
					};
				};
				class BUS_ReconPatrol
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon Patrol";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_F";
					};
				};
				class BUS_ReconSentry
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_recon_M_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_F";
					};
				};
				class BUS_ReconSquad
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_LAT_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_JTAC_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_exp_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_Recon_Sharpshooter_F";
					};
				};
				class BUS_ReconTeam
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_recon_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_JTAC_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_exp_F";
					};
				};
				class BUS_SniperTeam
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit1
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_sniper_F";
					};
					class Unit2
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_spotter_F";
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class BUS_MechInf_AA
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Air-defense Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_APC_Tracked_01_aa_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AA_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AA_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_AA_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AAA_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAA_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAA_F";
					};
				};
				class BUS_MechInf_AT
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Anti-armor Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_APC_Tracked_01_rcws_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_AT_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAT_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAT_F";
					};
				};
				class BUS_MechInf_Support
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Support Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_APC_Wheeled_01_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_repair_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_engineer_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_medic_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_exp_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_A_F";
					};
				};
				class BUS_MechInfSquad
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_APC_Wheeled_01_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_A_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_medic_F";
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class BUS_MotInf_AA
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Air-defense Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAA_F";
					};
				};
				class BUS_MotInf_AT
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Anti-armor Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_AAT_F";
					};
				};
				class BUS_MotInf_GMGTeam
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized GMG Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_support_GMG_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_support_AMG_F";
					};
				};
				class BUS_MotInf_MGTeam
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized HMG Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_support_MG_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_support_AMG_F";
					};
				};
				class BUS_MotInf_MortTeam
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Mortar Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_support_Mort_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_support_AMort_F";
					};
				};
				class BUS_MotInf_Reinforce
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Reinforcements";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_Truck_01_transport_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_SL_F";
					};
					class Unit10
					{
						position[] = {-5, -2, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_F";
					};
					class Unit11
					{
						position[] = {-5, -4, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_LAT_F";
					};
					class Unit12
					{
						position[] = {-5, -6, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_M_F";
					};
					class Unit13
					{
						position[] = {-5, -8, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit14
					{
						position[] = {-5, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit15
					{
						position[] = {-5, -12, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_A_F";
					};
					class Unit16
					{
						position[] = {-5, -14, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_medic_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_M_F";
					};
					class Unit5
					{
						position[] = {5, -8, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {5, -12, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_A_F";
					};
					class Unit8
					{
						position[] = {5, -14, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_medic_F";
					};
					class Unit9
					{
						position[] = {-5, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_SL_F";
					};
				};
				class BUS_MotInf_Team
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_MRAP_01_gmg_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_LAT_F";
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
				class BUS_AttackTeam_UAV
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Attack UAV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_UAV_02_CAS_F";
					};
				};
				class BUS_AttackTeam_UGV
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Attack UGV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_UGV_01_rcws_F";
					};
				};
				class BUS_DiverTeam
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Diver Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_diver_F";
					};
				};
				class BUS_DiverTeam_Boat
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Diver Team (Boat)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_diver_F";
					};
					class Unit4
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_Boat_Transport_01_F";
					};
				};
				class BUS_DiverTeam_SDV
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Diver Team (SDV)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_diver_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_SDV_01_F";
					};
					class Unit5
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_SDV_01_F";
					};
				};
				class BUS_ReconTeam_UAV
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon UAV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_UAV_02_F";
					};
				};
				class BUS_ReconTeam_UGV
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon UGV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_UGV_01_F";
					};
				};
				class BUS_SmallTeam_UAV
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Small UAV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_UAV_01_F";
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class BUS_Recon_EOD
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Recon Support Team (EOD)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_recon_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_recon_F";
					};
				};
				class BUS_Support_CLS
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Support Team (CLS)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_medic_F";
					};
				};
				class BUS_Support_ENG
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Support Team (Engineer)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_engineer_F";
					};
					class Unit3
					{
						position[] = {10, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_repair_F";
					};
				};
				class BUS_Support_EOD
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Support Team (EOD)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_soldier_exp_F";
					};
				};
				class BUS_Support_GMG
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "GMG Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_support_GMG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_support_AMG_F";
					};
				};
				class BUS_Support_MG
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "HMG Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_support_MG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_support_AMG_F";
					};
				};
				class BUS_Support_Mort
				{
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
					name = "Mortar Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_support_Mort_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_support_AMort_F";
					};
				};
			};
		};
		class BLU_T_F
		{
			name = "NATO (Pacific)";
			class Armored
			{
				name = "Armor";
				class B_T_SPGPlatoon_Scorcher
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "Artillery SPG Platoon";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
					};
				};
				class B_T_SPGSection_MLRS
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "MLRS Section";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_MBT_01_mlrs_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MBT_01_mlrs_F";
					};
				};
				class B_T_SPGSection_Scorcher
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "Artillery SPG Section";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
					};
				};
				class B_T_TankDestrSection_Rhino
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "Tank Destroyer Section";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_AFV_Wheeled_01_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_AFV_Wheeled_01_cannon_F";
					};
				};
				class B_T_TankDestrSection_RhinoUP
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					name = "Tank Destroyer Section (UP)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_AFV_Wheeled_01_up_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_AFV_Wheeled_01_up_cannon_F";
					};
				};
				class B_T_TankPlatoon
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					name = "Tank Platoon";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
					};
				};
				class B_T_TankPlatoon_AA
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					name = "Tank Platoon (Combined)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_APC_Tracked_01_aa_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
					};
					class Unit3
					{
						position[] = {20, -20, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_APC_Tracked_01_aa_F";
					};
				};
				class B_T_TankSection
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					name = "Tank Section";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
					};
				};
			};
			class Infantry
			{
				name = "Infantry";
				class B_T_InfSentry
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_F";
					};
				};
				class B_T_InfSquad
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_medic_F";
					};
				};
				class B_T_InfSquad_Weapons
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_A_F";
					};
					class Unit6
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_medic_F";
					};
				};
				class B_T_InfTeam
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
					};
				};
				class B_T_InfTeam_AA
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Air-defense Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
					};
				};
				class B_T_InfTeam_AT
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Anti-armor Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
					};
				};
				class B_T_InfTeam_Light
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team (Light)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_LAT2_F";
					};
				};
				class B_T_ReconPatrol
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon Patrol";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_recon_F";
					};
				};
				class B_T_ReconSentry
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_recon_M_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_recon_F";
					};
				};
				class B_T_ReconTeam
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_recon_M_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_recon_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_recon_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_recon_JTAC_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_recon_exp_F";
					};
				};
				class B_T_SniperTeam
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit1
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_sniper_F";
					};
					class Unit2
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_spotter_F";
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class B_T_MechInf_AA
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Air-defense Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_APC_Tracked_01_aa_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AA_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AA_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_AA_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
					};
				};
				class B_T_MechInf_AT
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Anti-armor Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_APC_Tracked_01_rcws_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_AT_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
					};
				};
				class B_T_MechInf_Support
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Support Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_APC_Wheeled_01_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_repair_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_engineer_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_medic_F";
					};
					class Unit6
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_exp_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_A_F";
					};
				};
				class B_T_MechInfSquad
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_T_APC_Wheeled_01_cannon_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_A_F";
					};
					class Unit8
					{
						position[] = {-20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_medic_F";
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class B_T_MotInf_AA
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Air-defense Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
					};
				};
				class B_T_MotInf_AT
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Anti-armor Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
					};
				};
				class B_T_MotInf_GMGTeam
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized GMG Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_support_GMG_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_support_AMG_F";
					};
				};
				class B_T_MotInf_MGTeam
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized HMG Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_support_MG_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_support_AMG_F";
					};
				};
				class B_T_MotInf_MortTeam
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Mortar Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MRAP_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_support_Mort_F";
					};
					class Unit3
					{
						position[] = {0, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_support_AMort_F";
					};
				};
				class B_T_MotInf_Reinforcements
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Reinforcements";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_Truck_01_transport_F";
					};
					class Unit1
					{
						position[] = {5, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_SL_F";
					};
					class Unit10
					{
						position[] = {-5, -2, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_F";
					};
					class Unit11
					{
						position[] = {-5, -4, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
					};
					class Unit12
					{
						position[] = {-5, -6, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_M_F";
					};
					class Unit13
					{
						position[] = {-5, -8, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit14
					{
						position[] = {-5, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit15
					{
						position[] = {-5, -12, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_A_F";
					};
					class Unit16
					{
						position[] = {-5, -14, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_medic_F";
					};
					class Unit2
					{
						position[] = {5, -2, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_F";
					};
					class Unit3
					{
						position[] = {5, -4, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5, -6, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_M_F";
					};
					class Unit5
					{
						position[] = {5, -8, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit7
					{
						position[] = {5, -12, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_A_F";
					};
					class Unit8
					{
						position[] = {5, -14, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_medic_F";
					};
					class Unit9
					{
						position[] = {-5, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_SL_F";
					};
				};
				class B_T_MotInf_Team
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_MRAP_01_gmg_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
				class B_T_AttackTeam_UAV
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Attack UAV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_UAV_02_CAS_F";
					};
				};
				class B_T_AttackTeam_UGV
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Attack UGV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_UGV_01_rcws_olive_F";
					};
				};
				class B_T_DiverTeam
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Diver Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_diver_F";
					};
				};
				class B_T_DiverTeam_Boat
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Diver Team (Boat)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_diver_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_Boat_Transport_01_F";
					};
				};
				class B_T_DiverTeam_SDV
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Diver Team (SDV)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_diver_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_diver_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_diver_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_diver_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_SDV_01_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_SDV_01_F";
					};
				};
				class B_T_ReconTeam_UAV
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon UAV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_UAV_02_F";
					};
				};
				class B_T_ReconTeam_UGV
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon UGV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_UGV_01_olive_F";
					};
				};
				class B_T_SmallTeam_UAV
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Small UAV Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_UAV_01_F";
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class B_T_Recon_EOD
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Recon Support Team (EOD)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_recon_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_recon_exp_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_recon_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_recon_F";
					};
				};
				class B_T_Support_CLS
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Support Team (CLS)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_medic_F";
					};
				};
				class B_T_Support_ENG
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Support Team (Engineer)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_engineer_F";
					};
					class Unit3
					{
						position[] = {10, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_repair_F";
					};
				};
				class B_T_Support_EOD
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Support Team (EOD)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_soldier_exp_F";
					};
				};
				class B_T_Support_GMG
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "GMG Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_support_GMG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_support_AMG_F";
					};
				};
				class B_T_Support_MG
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "HMG Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_support_MG_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_support_AMG_F";
					};
				};
				class B_T_Support_Mort
				{
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
					name = "Mortar Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_T_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_T_support_Mort_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_T_support_AMort_F";
					};
				};
			};
		};
		class BLU_W_EMP_F
		{
			name = "NATO (Woodland, EMP)";
			class Infantry_EMP
			{
				name = "Infantry";
				class B_W_InfSentry
				{
					faction = "BLU_W_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_GL_EMP_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_EMP_F";
					};
				};
				class B_W_InfSquad
				{
					faction = "BLU_W_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_SL_EMP_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_Soldier_A_EMP_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_Soldier_EMP_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_M_EMP_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_TL_EMP_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_AR_EMP_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_Soldier_LAT2_EMP_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_medic_EMP_F";
					};
				};
				class B_W_InfTeam
				{
					faction = "BLU_W_EMP_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_TL_EMP_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_AR_EMP_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_GL_EMP_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_Soldier_LAT2_EMP_F";
					};
				};
			};
		};
		class BLU_W_F
		{
			name = "NATO (Woodland)";
			class Infantry
			{
				name = "Infantry";
				class B_W_InfSentry
				{
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_F";
					};
				};
				class B_W_InfSquad
				{
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_medic_F";
					};
				};
				class B_W_InfSquad_Weapons
				{
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_A_F";
					};
					class Unit6
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_medic_F";
					};
				};
				class B_W_InfTeam
				{
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_LAT_F";
					};
				};
				class B_W_InfTeam_AA
				{
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Air-defense Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_AAA_F";
					};
				};
				class B_W_InfTeam_AT
				{
					faction = "BLU_W_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Anti-armor Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_W_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_W_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_W_soldier_AAT_F";
					};
				};
			};
		};
		class Gendarmerie
		{
			name = "Gendarmerie";
			class Infantry
			{
				name = "Infantry";
				class GENDARME_Inf_Patrol
				{
					faction = "BLU_GEN_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Gendarmerie Patrol";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GEN_Commander_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_GEN_Soldier_F";
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class GENDARME_MotInf_Patrol
				{
					faction = "BLU_GEN_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Motorized Gendarmerie Patrol";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_GEN_Offroad_01_gen_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_GEN_Soldier_F";
					};
				};
			};
		};
		class Guerilla
		{
			name = "FIA";
			class Infantry
			{
				name = "Infantry";
				class B_G_InfSquad_Assault
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Assault Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_LAT2_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_M_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_soldier_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_medic_F";
					};
				};
				class B_G_InfTeam_Light
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Patrol Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_LAT2_F";
					};
				};
				class IRG_InfAssault
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Assault Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Sharpshooter_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_A_F";
					};
				};
				class IRG_InfSentry
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_F";
					};
				};
				class IRG_InfSquad
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_A_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_medic_F";
					};
				};
				class IRG_InfSquad_Weapons
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_soldier_LAT_F";
					};
					class Unit5
					{
						position[] = {-15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_A_F";
					};
					class Unit6
					{
						position[] = {15, -15, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_soldier_LAT_F";
					};
					class Unit7
					{
						position[] = {20, -20, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_medic_F";
					};
				};
				class IRG_InfTeam
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_LAT_F";
					};
				};
				class IRG_InfTeam_AT
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Anti-armor Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_LAT_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_LAT_F";
					};
				};
				class IRG_ReconSentry
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Recon Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_M_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_F";
					};
				};
				class IRG_SniperTeam_M
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Sharpshooter_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_M_F";
					};
				};
			};
			class Motorized_MTP
			{
				name = "Motorized Infantry";
				class IRG_MotInf_Team
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Motorized Patrol";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_G_Offroad_01_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_medic_F";
					};
					class Unit5
					{
						position[] = {15, -15, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_F";
					};
				};
				class IRG_Technicals
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					name = "Technicals";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "B_G_Offroad_01_armed_F";
					};
					class Unit1
					{
						position[] = {10, -10, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Offroad_01_armed_F";
					};
					class Unit2
					{
						position[] = {-10, -10, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Offroad_01_armed_F";
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class IRG_Support_CLS
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Support Team (CLS)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_medic_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_medic_F";
					};
				};
				class IRG_Support_ENG
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Support Team (Engineer)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_engineer_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_engineer_F";
					};
				};
				class IRG_Support_EOD
				{
					faction = "BLU_G_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Support Team (EOD)";
					side = 1;
					class Unit0
					{
						position[] = {0, 0, 0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_G_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5, -5, 0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_G_engineer_F";
					};
					class Unit2
					{
						position[] = {-5, -5, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_exp_F";
					};
					class Unit3
					{
						position[] = {10, -10, 0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_G_Soldier_exp_F";
					};
				};
			};
		};
	};
};
