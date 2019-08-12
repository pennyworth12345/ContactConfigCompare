class CfgFiringDrills
{
	bonusShootingBox = 3;
	bonusStance = 1.5;
	bonusWeapon = 1;
	colorsMedals[] = {"#A0522D", "#C0C0C0", "#FFD700"};
	iconsMedals[] = {"A3\modules_f_beta\data\FiringDrills\medal_bronze_ca", "A3\modules_f_beta\data\FiringDrills\medal_silver_ca", "A3\modules_f_beta\data\FiringDrills\medal_gold_ca"};
	penaltyMissed = 25;
	penaltyNoShoot = 50;
	penaltyShootingBox = 5;
	penaltyStance = 2;
	penaltyWeapon = 3;
	pointTimeMultiplier = 0.1;
	class SP_FD01
	{
		color[] = {0.694118, 0.2, 0.223529, 1};
		colorName = "red";
		containersMagazines[] = {"BIS_ammoFD1_1", "BIS_ammoFD1_2", "BIS_ammoFD1_3", "BIS_ammoFD1_4"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_weaponsFD1"};
		decals[] = {{"BIS_decal1_1", "A3\Missions_F_Beta\data\img\decals\decal_lean_left1_ca", 2}, {"BIS_decal1_2", "a3\Missions_F_Beta\data\img\decals\decal_lean_right1_ca", 2}, {"BIS_decal1_3", "a3\Missions_F_Beta\data\img\decals\decal_watch_out1_ca", 2}, {"BIS_decal1_4", "a3\Missions_F_Beta\data\img\decals\decal_bonusB1_ca", 2}, {"BIS_decal1_5", "a3\Missions_F_Beta\data\img\decals\decal_crouch1_ca", 2}, {"BIS_decal1_6", "a3\Missions_F_Beta\data\img\decals\decal_bonusA1_ca", 1}, {"BIS_decal1_7", "a3\Missions_F_Beta\data\img\decals\decal_kneel1_ca", 3}, {"BIS_decal1_8", "a3\Missions_F_Beta\data\img\decals\decal_sidearm1_ca", 4}, {"BIS_decal1_9", "a3\Missions_F_Beta\data\img\decals\decal_sidearm1_ca", 4}};
		displayName = "CoF: Red 1";
		leaderboard = "1134240";
		magazines[] = {"30Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		magazinesCompetitor[] = {"30Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		objectCOF = "BIS_firingDrills1";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_recolor1_1", "BIS_recolor1_2", "BIS_recolor1_3", "BIS_recolor1_4", "BIS_recolor1_5", "BIS_recolor1_6", "BIS_recolor1_7", "BIS_recolor1_8", "BIS_recolor1_9", "BIS_recolor1_10", "BIS_recolor1_11", "BIS_recolor1_12", "BIS_recolor1_13", "BIS_recolor1_14", "BIS_recolor1_15", "BIS_recolor1_16", "BIS_recolor1_17", "BIS_recolor1_18", "BIS_recolor1_19", "BIS_recolor1_20", "BIS_recolor1_21", "BIS_recolor1_22", "BIS_recolor1_23", "BIS_recolor1_24", "BIS_recolor1_25", "BIS_recolor1_26", "BIS_recolor1_27", "BIS_recolor1_28", "BIS_recolor1_29", "BIS_recolor1_30", "BIS_recolor1_31", "BIS_recolor1_32", "BIS_recolor1_33", "BIS_recolor1_34", "BIS_recolor1_35", "BIS_recolor1_36", "BIS_recolor1_37", "BIS_recolor1_38", "BIS_recolor1_39", "BIS_recolor1_40", "BIS_recolor1_41", "BIS_recolor1_42", "BIS_recolor1_43", "BIS_recolor1_44", "BIS_recolor1_45", "BIS_recolor1_46", "BIS_recolor1_47", "BIS_recolor1_48", "BIS_recolor1_49", "BIS_recolor1_50", "BIS_recolor1_51", "BIS_recolor1_52", "BIS_recolor1_53", "BIS_recolor1_54", "BIS_recolor1_55", "BIS_recolor1_56", "BIS_recolor1_57", "BIS_recolor1_58", "BIS_recolor1_59", "BIS_recolor1_60", "BIS_recolor1_61", "BIS_recolor1_62"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD01";
		timesMedals[] = {78, 70.3, 65};
		weapons[] = {"SMG_02_ACO_F", "hgun_Rook40_F"};
		weaponsCompetitor[] = {"SMG_02_ACO_F", "hgun_Rook40_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP10
			{
				object = "BIS_FD_CP10";
				shootingBoxes[] = {"BIS_FD_CP10_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus9_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class T1
					{
						directions[] = {"BIS_target1_9_1A", "BIS_target1_9_1B", "BIS_target1_9_1C"};
						object = "BIS_target1_9_1";
						positions[] = {"BIS_target1_9_1A", "BIS_target1_9_1B", "BIS_target1_9_1C"};
						triggerTime = 0.5;
						type = "PopUp";
					};
					class T2
					{
						object = "BIS_target1_9_2";
						triggerTime = 0.7;
						type = "PopUp";
					};
					class T3
					{
						object = "BIS_target1_9_3";
						positionsMove[] = {"BIS_target1_9_3_WP1"};
						timesMove[] = {3};
						type = "PopUp";
					};
				};
			};
			class CP11
			{
				height = 9.5;
				object = "BIS_FD_CP11";
				shootingBoxes[] = {"BIS_FD_CP11_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_target1_10_1";
						type = "PopUp";
					};
					class T2
					{
						chance = 0.5;
						object = "BIS_target1_10_2";
						type = "PopUp";
					};
				};
			};
			class CP12
			{
				height = 9.5;
				object = "BIS_FD_CP12";
				shootingBoxes[] = {"BIS_FD_CP12_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus11_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus11_2";
					};
					class T1
					{
						object = "BIS_target1_11_1";
						type = "PopUp";
					};
					class T2
					{
						object = "BIS_target1_11_2";
						type = "PopUp";
					};
				};
			};
			class CP13
			{
				object = "BIS_FD_CP13";
				shootingBoxes[] = {"BIS_FD_CP13_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_target1_12_1";
						type = "PopUp_Acc1";
					};
				};
			};
			class CP14
			{
				object = "BIS_FD_CP14";
				shootingBoxes[] = {"BIS_FD_CP14_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_target1_13_1";
						positionsMove[] = {"BIS_target1_13_1_WP1"};
						timesMove[] = {1.5};
						type = "PopUp";
					};
					class T2
					{
						object = "BIS_target1_13_2";
						type = "PopUp";
					};
				};
			};
			class CP15
			{
				object = "BIS_FD_CP15";
				shootingBoxes[] = {"BIS_FD_CP15_Box"};
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_target1_14_1A", "BIS_target1_14_1B", "BIS_target1_14_1C", "BIS_target1_14_1D"};
						object = "BIS_target1_14_1";
						positions[] = {"BIS_target1_14_1A", "BIS_target1_14_1B", "BIS_target1_14_1C", "BIS_target1_14_1D"};
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_target1_14_2";
						type = "PopUp_Acc1";
					};
				};
			};
			class CP16
			{
				object = "BIS_FD_CP16";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				shootingBoxes[] = {"BIS_FD_CP2_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_target1_1_1";
						type = "PopUp";
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				shootingBoxes[] = {"BIS_FD_CP3_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_target1_2_1";
						type = "PopUp";
					};
				};
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				shootingBoxes[] = {"BIS_FD_CP4_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus3_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus3_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus3_3";
					};
					class T1
					{
						object = "BIS_target1_3_1";
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_target1_3_2";
						triggerChance = 0.8;
						triggerTime = 0.5;
						type = "PopUp_Acc1";
					};
					class T3
					{
						object = "BIS_target1_3_3";
						triggerChance = 0.5;
						type = "PopUp_Acc1";
					};
				};
			};
			class CP5
			{
				object = "BIS_FD_CP5";
				shootingBoxes[] = {"BIS_FD_CP5_Box"};
				weapons[] = {"hgun_Rook40_F"};
				class Targets
				{
					class NoShoot1
					{
						chance = 0.5;
						noShoot = 1;
						object = "BIS_noShoot1_4_1";
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus4_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class T1
					{
						object = "BIS_target1_4_1";
						type = "PopUp_Acc1";
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
				shootingBoxes[] = {"BIS_FD_CP6_Box"};
				weapons[] = {"hgun_Rook40_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_noShoot1_5_1";
					};
					class T1
					{
						directions[] = {"BIS_target1_5_1A", "BIS_target1_5_1B", "BIS_target1_5_1C"};
						object = "BIS_target1_5_1";
						positions[] = {"BIS_target1_5_1A", "BIS_target1_5_1B", "BIS_target1_5_1C"};
						type = "PopUp_Acc1";
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
				shootingBoxes[] = {"BIS_FD_CP7_Box"};
				stances[] = {"crouch"};
				weapons[] = {"hgun_Rook40_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target1_6_1";
						type = "PopUp";
					};
					class T2
					{
						object = "BIS_target1_6_2";
						type = "PopUp";
					};
					class T3
					{
						object = "BIS_target1_6_3";
						positionsMove[] = {"BIS_target1_6_3_WP1"};
						timesMove[] = {3.5};
						type = "PopUp";
						upTime = 3.5;
					};
				};
			};
			class CP8
			{
				object = "BIS_FD_CP8";
				shootingBoxes[] = {"BIS_FD_CP8_Box"};
				weapons[] = {"hgun_Rook40_F"};
				class Targets
				{
					class NoShoot1
					{
						chance = 0.8;
						noShoot = 1;
						object = "BIS_noShoot1_7_1";
					};
					class T1
					{
						object = "BIS_target1_7_1";
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_target1_7_2";
						type = "PopUp_Acc1";
					};
				};
			};
			class CP9
			{
				object = "BIS_FD_CP9";
				shootingBoxes[] = {"BIS_FD_CP9_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_target1_8_1";
						positionsMove[] = {"BIS_target1_8_1_WP1"};
						timesMove[] = {1.5};
						type = "PopUp";
						upTime = 1.5;
					};
				};
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {6466.29, 5383.4};
				script = "dyno_sp_fd01.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD02
	{
		color[] = {0.403922, 0.545098, 0.607843, 1};
		colorName = "blue";
		containersMagazines[] = {"BIS_ammoFD3_1", "BIS_ammoFD3_2", "BIS_ammoFD3_3"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_weaponsFD3"};
		decals[] = {{"BIS_decal3_1", "a3\Missions_F_Beta\data\img\decals\decal_lean_left4_ca", 2}, {"BIS_decal3_1", "a3\Missions_F_Beta\data\img\decals\decal_sidearm4_ca", 0}, {"BIS_decal3_2", "a3\Missions_F_Beta\data\img\decals\decal_crouch4_ca", 2}, {"BIS_decal3_3", "a3\Missions_F_Beta\data\img\decals\decal_crawl4_ca", 1}, {"BIS_decal3_4", "a3\Missions_F_Beta\data\img\decals\decal_kneel4_ca", 0}, {"BIS_decal3_5", "a3\Missions_F_Beta\data\img\decals\decal_crouch4_ca", 0}, {"BIS_decal3_6", "a3\Missions_F_Beta\data\img\decals\decal_crouch4_ca", 2}, {"BIS_decal3_6", "a3\Missions_F_Beta\data\img\decals\decal_rifle4_ca", 3}, {"BIS_decal3_7", "a3\Missions_F_Beta\data\img\decals\decal_lean_left4_ca", 2}, {"BIS_decal3_7", "a3\Missions_F_Beta\data\img\decals\decal_stand4_ca", 0}, {"BIS_decal3_8", "a3\Missions_F_Beta\data\img\decals\decal_lean_right4_ca", 1}, {"BIS_decal3_8", "a3\Missions_F_Beta\data\img\decals\decal_crouch4_ca", 3}, {"BIS_decal3_9", "a3\Missions_F_Beta\data\img\decals\decal_bonusD4_ca", 0}, {"BIS_decal3_10", "a3\Missions_F_Beta\data\img\decals\decal_sidearm4_ca", 1}, {"BIS_decal3_11", "a3\Missions_F_Beta\data\img\decals\decal_rifle4_ca", 1}};
		displayName = "CoF: Blue 1";
		leaderboard = "1134241";
		magazines[] = {"30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag"};
		magazinesCompetitor[] = {"30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag"};
		objectCOF = "BIS_firingDrills3";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_recolor3_1", "BIS_recolor3_2", "BIS_recolor3_3", "BIS_recolor3_4", "BIS_recolor3_5", "BIS_recolor3_6", "BIS_recolor3_7", "BIS_recolor3_8", "BIS_recolor3_9", "BIS_recolor3_10", "BIS_recolor3_11", "BIS_recolor3_12", "BIS_recolor3_13", "BIS_recolor3_14", "BIS_recolor3_15", "BIS_recolor3_16", "BIS_recolor3_17", "BIS_recolor3_18", "BIS_recolor3_19", "BIS_recolor3_20", "BIS_recolor3_21", "BIS_recolor3_22", "BIS_recolor3_23", "BIS_recolor3_24", "BIS_recolor3_25", "BIS_recolor3_26", "BIS_recolor3_27", "BIS_recolor3_28", "BIS_recolor3_29", "BIS_recolor3_30", "BIS_recolor3_31", "BIS_recolor3_32", "BIS_recolor3_33", "BIS_recolor3_34", "BIS_recolor3_35", "BIS_recolor3_36", "BIS_recolor3_37", "BIS_recolor3_38", "BIS_recolor3_39", "BIS_recolor3_40", "BIS_recolor3_41", "BIS_recolor3_42", "BIS_recolor3_43", "BIS_recolor3_44", "BIS_recolor3_45", "BIS_recolor3_46", "BIS_recolor3_47", "BIS_recolor3_48", "BIS_recolor3_49", "BIS_recolor3_50", "BIS_recolor3_51", "BIS_recolor3_52", "BIS_recolor3_53", "BIS_recolor3_54"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD02";
		timesMedals[] = {60, 56, 52.5};
		weapons[] = {"arifle_MXC_Holo_pointer_F", "hgun_P07_F"};
		weaponsCompetitor[] = {"arifle_MXC_Holo_pointer_F", "hgun_P07_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP10
			{
				object = "BIS_FD_CP10";
				shootingBoxes[] = {"BIS_FD_CP10_Box"};
				stances[] = {"stand"};
				weapons[] = {"arifle_MXC_Holo_pointer_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus9_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus9_2";
					};
					class T1
					{
						object = "BIS_target3_9_1";
						type = "PopUp";
					};
				};
			};
			class CP11
			{
				object = "BIS_FD_CP11";
				shootingBoxes[] = {"BIS_FD_CP11_Box"};
				stances[] = {"crouch"};
				weapons[] = {"arifle_MXC_Holo_pointer_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target3_10_1";
						type = "PopUp";
					};
				};
			};
			class CP12
			{
				object = "BIS_FD_CP12";
				shootingBoxes[] = {"BIS_FD_CP12_Box"};
				weapons[] = {"arifle_MXC_Holo_pointer_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus12_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus12_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus12_3";
					};
					class T1
					{
						object = "BIS_target3_11_1";
						type = "PopUp";
					};
					class T2
					{
						object = "BIS_target3_11_2";
						type = "PopUp";
					};
					class T3
					{
						object = "BIS_target3_11_3";
						type = "PopUp";
					};
					class T4
					{
						object = "BIS_target3_11_4";
						type = "PopUp";
					};
					class T5
					{
						object = "BIS_target3_11_5";
						positionsMove[] = {"BIS_target3_11_5_WP1"};
						timesMove[] = {6};
						type = "PopUp";
						upTime = 6;
					};
					class T6
					{
						object = "BIS_target3_11_6";
						positionsMove[] = {"BIS_target3_11_6_WP1"};
						timesMove[] = {8};
						type = "PopUp";
						upTime = 8;
					};
					class T7
					{
						chance = 0.5;
						object = "BIS_target3_11_7";
						type = "PopUp";
					};
				};
			};
			class CP13
			{
				object = "BIS_FD_CP13";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				shootingBoxes[] = {"BIS_FD_CP2_Box"};
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target3_1_1";
						type = "PopUp";
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				shootingBoxes[] = {"BIS_FD_CP3_Box"};
				stances[] = {"crouch"};
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target3_2_1";
						type = "PopUp";
					};
					class T2
					{
						chance = 0.5;
						object = "BIS_target3_2_2";
						type = "PopUp";
					};
				};
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				shootingBoxes[] = {"BIS_FD_CP4_Box"};
				stances[] = {"prone"};
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target3_3_1";
						type = "PopUp";
					};
				};
			};
			class CP5
			{
				object = "BIS_FD_CP5";
				shootingBoxes[] = {"BIS_FD_CP5_Box"};
				stances[] = {"crouch"};
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus4_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus4_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus4_3";
					};
					class T1
					{
						object = "BIS_target3_4_1";
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_target3_4_2";
						type = "PopUp_Acc1";
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
				shootingBoxes[] = {"BIS_FD_CP6_Box"};
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class NoShoot1
					{
						chance = 0.8;
						noShoot = 1;
						object = "BIS_noShoot3_5_1";
					};
					class T1
					{
						object = "BIS_target3_5_1";
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_target3_5_2";
						type = "PopUp";
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
				shootingBoxes[] = {"BIS_FD_CP7_Box"};
				stances[] = {"crouch"};
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target3_6_1";
						type = "PopUp";
					};
					class T2
					{
						object = "BIS_target3_6_2";
						type = "PopUp";
					};
				};
			};
			class CP8
			{
				object = "BIS_FD_CP8";
				shootingBoxes[] = {"BIS_FD_CP8_Box"};
				stances[] = {"crouch"};
				weapons[] = {"arifle_MXC_Holo_pointer_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target3_7_1";
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_target3_7_2";
						type = "PopUp_Acc1";
					};
					class T3
					{
						object = "BIS_target3_7_3";
						type = "PopUp_Acc1";
					};
				};
			};
			class CP9
			{
				object = "BIS_FD_CP9";
				shootingBoxes[] = {"BIS_FD_CP9_Box"};
				stances[] = {"stand"};
				weapons[] = {"arifle_MXC_Holo_pointer_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target3_8_1";
						type = "PopUp";
					};
				};
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {6365.36, 5411.85};
				script = "dyno_sp_fd02.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD03
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		containersMagazines[] = {"BIS_ammoFD2_1", "BIS_ammoFD2_2", "BIS_ammoFD2_3", "BIS_ammoFD2_4"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_weaponsFD2"};
		displayName = "CoF: Orange 1";
		leaderboard = "1134242";
		magazines[] = {"30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag"};
		magazinesCompetitor[] = {"30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag"};
		objectCOF = "BIS_firingDrills2";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_recolor2_1", "BIS_recolor2_2", "BIS_recolor2_3", "BIS_recolor2_4", "BIS_recolor2_5", "BIS_recolor2_6", "BIS_recolor2_7", "BIS_recolor2_8", "BIS_recolor2_9", "BIS_recolor2_10", "BIS_recolor2_11", "BIS_recolor2_12", "BIS_recolor2_13", "BIS_recolor2_14", "BIS_recolor2_15", "BIS_recolor2_16", "BIS_recolor2_17", "BIS_recolor2_18", "BIS_recolor2_19", "BIS_recolor2_20", "BIS_recolor2_21", "BIS_recolor2_22", "BIS_recolor2_23", "BIS_recolor2_24", "BIS_recolor2_25", "BIS_recolor2_26", "BIS_recolor2_27", "BIS_recolor2_28", "BIS_recolor2_29", "BIS_recolor2_30", "BIS_recolor2_31", "BIS_recolor2_32", "BIS_recolor2_33", "BIS_recolor2_34"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD03";
		timesMedals[] = {69, 61.7, 57.5};
		weapons[] = {"arifle_MX_Hamr_pointer_F", "hgun_P07_F"};
		weaponsCompetitor[] = {"arifle_MX_Hamr_pointer_F", "hgun_P07_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				shootingBoxes[] = {"BIS_FD_CP2_Box"};
				stances[] = {"crouch"};
				weapons[] = {"arifle_MX_Hamr_pointer_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_noShoot2_1_1";
					};
					class NoShoot2: NoShoot1
					{
						chance = 0.5;
						object = "BIS_noShoot2_1_2";
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus1_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus1_2";
					};
					class T1
					{
						object = "BIS_target2_1_1";
						type = "PopUp_Acc2";
					};
					class T2
					{
						directions[] = {"BIS_target2_1_2A", "BIS_target2_1_2B", "BIS_target2_1_2C"};
						object = "BIS_target2_1_2";
						positions[] = {"BIS_target2_1_2A", "BIS_target2_1_2B", "BIS_target2_1_2C"};
						type = "PopUp_Acc2";
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				shootingBoxes[] = {"BIS_FD_CP3_Box"};
				stances[] = {"crouch"};
				weapons[] = {"arifle_MX_Hamr_pointer_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target2_2_1";
						type = "PopUp_Acc2";
					};
					class T2
					{
						directions[] = {"BIS_target2_2_2A", "BIS_target2_2_2B", "BIS_target2_2_2C"};
						object = "BIS_target2_2_2";
						positions[] = {"BIS_target2_2_2A", "BIS_target2_2_2B", "BIS_target2_2_2C"};
						type = "PopUp_Acc2";
					};
				};
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				shootingBoxes[] = {"BIS_FD_CP4_Box"};
				stances[] = {"prone"};
				weapons[] = {"arifle_MX_Hamr_pointer_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus3_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus3_2";
					};
					class T1
					{
						object = "BIS_target2_3_1";
						type = "PopUp_Acc2";
					};
					class T2
					{
						object = "BIS_target2_3_2";
						type = "PopUp_Acc2";
					};
					class T3
					{
						object = "BIS_target2_3_3";
						type = "PopUp_Acc2";
					};
					class T4
					{
						object = "BIS_target2_3_4";
						positionsMove[] = {"BIS_target2_3_4_WP1"};
						timesMove[] = {6};
						type = "PopUp_Acc1";
					};
				};
			};
			class CP5
			{
				object = "BIS_FD_CP5";
				shootingBoxes[] = {"BIS_FD_CP5_Box"};
				stances[] = {"prone"};
				weapons[] = {"arifle_MX_Hamr_pointer_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_target2_4_1";
						type = "PopUp_Acc2";
					};
					class T2
					{
						chance = 0.5;
						object = "BIS_target2_4_2";
						type = "PopUp_Acc2";
					};
					class T3
					{
						object = "BIS_target2_4_3";
						type = "PopUp_Acc2";
					};
					class T4
					{
						object = "BIS_target2_4_4";
						positionsMove[] = {"BIS_target2_4_4_WP1"};
						timesMove[] = {3};
						triggerTime = 2;
						type = "PopUp_Acc1";
						upTime = 3;
					};
					class T5
					{
						object = "BIS_target2_4_5";
						triggerTime = 3;
						type = "PopUp_Acc2";
					};
				};
			};
			class CP6
			{
				height = 11.5;
				object = "BIS_FD_CP6";
				stances[] = {"stand"};
				weapons[] = {"arifle_MX_Hamr_pointer_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus6_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus6_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus6_3";
					};
					class Optional4: Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus6_4";
					};
					class T1
					{
						object = "BIS_target2_6_1";
						type = "PopUp_Acc2";
					};
					class T10
					{
						object = "BIS_target2_6_10";
						triggerTime = 4;
						type = "PopUp_Acc2";
					};
					class T11
					{
						chance = 0.5;
						object = "BIS_target2_6_11";
						triggerTime = 4;
						type = "PopUp_Acc2";
					};
					class T2
					{
						object = "BIS_target2_6_2";
						type = "PopUp_Acc2";
					};
					class T3
					{
						object = "BIS_target2_6_3";
						type = "PopUp_Acc2";
					};
					class T4
					{
						object = "BIS_target2_6_4";
						type = "PopUp_Acc2";
					};
					class T5
					{
						chance = 0.5;
						object = "BIS_target2_6_5";
						type = "PopUp_Acc2";
					};
					class T6
					{
						object = "BIS_target2_6_6";
						type = "PopUp_Acc2";
					};
					class T7
					{
						object = "BIS_target2_6_7";
						positionsMove[] = {"BIS_target2_6_7_WP1"};
						timesMove[] = {3.5};
						type = "PopUp_Acc1";
						upTime = 3.5;
					};
					class T8
					{
						object = "BIS_target2_6_8";
						positionsMove[] = {"BIS_target2_6_8_WP1"};
						timesMove[] = {13};
						triggerTime = 2;
						type = "PopUp_Acc1";
						upTime = 13;
					};
					class T9
					{
						object = "BIS_target2_6_9";
						positionsMove[] = {"BIS_target2_6_9_WP1"};
						timesMove[] = {15};
						triggerTime = 2;
						type = "PopUp_Acc1";
						upTime = 15;
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {6327.72, 5499.38};
				script = "dyno_sp_fd03.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD04
	{
		color[] = {0.678431, 0.74902, 0.513726, 1};
		colorName = "green";
		competitorStart = "BIS_rangeOfficer1A";
		containersMagazines[] = {"BIS_ammoFD1", "BIS_ammoFD2", "BIS_ammoFD3", "BIS_ammoFD4", "BIS_ammoFD5", "BIS_ammoFD6", "BIS_ammoFD7"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_weaponsFD1"};
		decals[] = {{"BIS_FD_decal1", "A3\Missions_F_Beta\data\img\decals\decal_rifle3_ca", 2}, {"BIS_FD_decal2", "A3\Missions_F_Beta\data\img\decals\decal_crouch3_ca", 1}, {"BIS_FD_decal2", "A3\Missions_F_Beta\data\img\decals\decal_sidearm3_ca", 2}, {"BIS_FD_decal3", "A3\Missions_F_Beta\data\img\decals\decal_prone3_ca", 1}, {"BIS_FD_decal4", "A3\Missions_F_Beta\data\img\decals\decal_bonusH3_ca", 1}, {"BIS_FD_decal5", "A3\Missions_F_Beta\data\img\decals\decal_watch_out3_ca", 3}, {"BIS_FD_decal6", "A3\Missions_F_Beta\data\img\decals\decal_sidearm3_ca", 1}, {"BIS_FD_decal7", "A3\Missions_F_Beta\data\img\decals\decal_crawl3_ca", 1}, {"BIS_FD_decal8", "A3\Missions_F_Beta\data\img\decals\decal_crouch3_ca", 2}};
		displayName = "CoF: Green";
		leaderboard = "1134243";
		magazines[] = {"30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag"};
		magazinesCompetitor[] = {"30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag"};
		objectCOF = "BIS_FD04";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_recolor12", "BIS_recolor13", "BIS_recolor14", "BIS_recolor15", "BIS_recolor16", "BIS_recolor17", "BIS_recolor18", "BIS_recolor19", "BIS_recolor20", "BIS_recolor21", "BIS_recolor22", "BIS_recolor23", "BIS_recolor24", "BIS_recolor25", "BIS_recolor26", "BIS_recolor27", "BIS_recolor28", "BIS_recolor29", "BIS_recolor30", "BIS_recolor31", "BIS_recolor32", "BIS_recolor33", "BIS_recolor34", "BIS_recolor35", "BIS_FD_recolor36", "BIS_FD_recolor37", "BIS_FD_recolor38", "BIS_FD_recolor39", "BIS_FD_recolor40", "BIS_FD_recolor41", "BIS_FD_recolor42", "BIS_FD_recolor43", "BIS_FD_recolor44"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD04";
		timesMedals[] = {193.5, 182, 172};
		weapons[] = {"arifle_Mk20_MRCO_plain_F", "hgun_ACPC2_F"};
		weaponsCompetitor[] = {"arifle_Mk20_MRCO_plain_F", "hgun_ACPC2_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP11
			{
				object = "BIS_FD_CP11";
				weapons[] = {"arifle_Mk20_MRCO_plain_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target10_1";
						type = "PopUp_Acc1";
					};
					class T2
					{
						directions[] = {"BIS_FD_target10_2A", "BIS_FD_target10_2B", "BIS_FD_target10_2C"};
						object = "BIS_FD_target10_2";
						positions[] = {"BIS_FD_target10_2A", "BIS_FD_target10_2B", "BIS_FD_target10_2C"};
						triggerTime = 0.8;
						type = "PopUp_Acc1";
					};
				};
			};
			class CP12
			{
				object = "BIS_FD_CP12";
				weapons[] = {"arifle_Mk20_MRCO_plain_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot11_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot11_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot11_3";
					};
					class T1
					{
						directions[] = {"BIS_FD_target11_1A", "BIS_FD_target11_1B", "BIS_FD_target11_1C"};
						object = "BIS_FD_target11_1";
						positions[] = {"BIS_FD_target11_1A", "BIS_FD_target11_1B", "BIS_FD_target11_1C"};
						positionsMove[] = {"BIS_FD_target11_1_WP1"};
						timesMove[] = {4};
						triggerTime = 1.5;
						type = "PopUp_Acc1";
						upTime = 4;
					};
				};
			};
			class CP13
			{
				object = "BIS_FD_CP13";
				weapons[] = {"arifle_Mk20_MRCO_plain_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus12_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus12_2";
					};
					class T1
					{
						directions[] = {"BIS_FD_target12_1A", "BIS_FD_target12_1B", "BIS_FD_target12_1C", "BIS_FD_target12_1D"};
						object = "BIS_FD_target12_1";
						positions[] = {"BIS_FD_target12_1A", "BIS_FD_target12_1B", "BIS_FD_target12_1C", "BIS_FD_target12_1D"};
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_FD_target12_2";
						positionsMove[] = {"BIS_FD_target12_2_WP1"};
						timesMove[] = {2.5};
						type = "PopUp_Acc1";
						upTime = 2.5;
					};
					class T3
					{
						chance = 0.6;
						object = "BIS_FD_target12_3";
						triggerTime = 1;
						type = "PopUp_Acc1";
					};
				};
			};
			class CP14
			{
				object = "BIS_FD_CP14";
				shootingBoxes[] = {"BIS_FD_CP14_Box"};
				weapons[] = {"arifle_Mk20_MRCO_plain_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus13_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus13_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus13_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus13_4";
					};
					class T1
					{
						object = "BIS_FD_target13_1";
						triggerTime = 0.5;
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_FD_target13_2";
						type = "PopUp_Acc1";
					};
				};
			};
			class CP15
			{
				object = "BIS_FD_CP15";
				shootingBoxes[] = {"BIS_FD_CP15_Box"};
				weapons[] = {"arifle_Mk20_MRCO_plain_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot14_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot14_2";
					};
					class T1
					{
						chance = 0.8;
						object = "BIS_FD_target14_1";
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_FD_target14_2";
						positionsMove[] = {"BIS_FD_target14_2_WP1"};
						timesMove[] = {1.5};
						type = "PopUp_Acc1";
					};
					class T3
					{
						object = "BIS_FD_target14_3";
						triggerTime = 1.5;
						type = "PopUp_Acc1";
					};
				};
			};
			class CP16
			{
				object = "BIS_FD_CP16";
			};
			class CP17
			{
				object = "BIS_FD_CP17";
				shootingBoxes[] = {"BIS_FD_CP17_Box"};
				stances[] = {"crouch"};
				weapons[] = {"hgun_ACPC2_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target16_1";
						type = "PopUp";
					};
				};
			};
			class CP18
			{
				object = "BIS_FD_CP18";
				shootingBoxes[] = {"BIS_FD_CP18_Box"};
				stances[] = {"prone"};
				weapons[] = {"hgun_ACPC2_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus17_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus17_2";
					};
					class T1
					{
						object = "BIS_FD_target17_1";
						triggerTime = 0.5;
						type = "PopUp";
						upTime = 2.5;
					};
					class T2
					{
						object = "BIS_FD_target17_2";
						triggerTime = 1.5;
						type = "PopUp";
						upTime = 2.2;
					};
				};
			};
			class CP19
			{
				object = "BIS_FD_CP19";
				shootingBoxes[] = {"BIS_FD_CP19_Box"};
				stances[] = {"crouch"};
				weapons[] = {"hgun_ACPC2_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot18_1";
					};
					class T1
					{
						object = "BIS_FD_target18_1";
						type = "PopUp_Acc1";
					};
				};
			};
			class CP2
			{
				object = "BIS_FD_CP2";
			};
			class CP20
			{
				object = "BIS_FD_CP20";
				shootingBoxes[] = {"BIS_FD_CP20_Box"};
				stances[] = {"stand"};
				weapons[] = {"hgun_ACPC2_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus19_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class T1
					{
						directions[] = {"BIS_FD_target19_1A", "BIS_FD_target19_1B"};
						object = "BIS_FD_target19_1";
						positions[] = {"BIS_FD_target19_1A", "BIS_FD_target19_1B"};
						type = "PopUp";
						upTime = 3;
					};
					class T2
					{
						directions[] = {"BIS_FD_target19_2A", "BIS_FD_target19_2B", "BIS_FD_target19_2C"};
						object = "BIS_FD_target19_2";
						positions[] = {"BIS_FD_target19_2A", "BIS_FD_target19_2B", "BIS_FD_target19_2C"};
						type = "PopUp";
						upTime = 3;
					};
					class T3
					{
						object = "BIS_FD_target19_3";
						type = "PopUp";
						upTime = 3;
					};
				};
			};
			class CP21
			{
				object = "BIS_FD_CP21";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target20_1";
						positionsMove[] = {"BIS_FD_target20_1_WP1"};
						timesMove[] = {2};
						type = "PopUp";
						upTime = 2;
					};
					class T2
					{
						object = "BIS_FD_target20_2";
						positionsMove[] = {"BIS_FD_target20_2_WP1"};
						timesMove[] = {2};
						type = "PopUp";
						upTime = 4;
					};
					class T3
					{
						object = "BIS_FD_target20_3";
						positionsMove[] = {"BIS_FD_target20_3_WP1"};
						timesMove[] = {1};
						type = "PopUp";
						upTime = 3;
					};
					class T4
					{
						object = "BIS_FD_target20_4";
						positionsMove[] = {"BIS_FD_target20_4_WP1"};
						timesMove[] = {1.5};
						type = "PopUp";
						upTime = 2;
					};
				};
			};
			class CP22
			{
				object = "BIS_FD_CP22";
			};
			class CP23
			{
				object = "BIS_FD_CP23";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target23_1";
						type = "PopUp";
					};
					class T2
					{
						chance = 0.5;
						object = "BIS_FD_target23_2";
						trigger = "BIS_FD_target23_1";
						type = "PopUp";
						upTime = 7;
					};
					class T3
					{
						object = "BIS_FD_target23_3";
						trigger = "BIS_FD_target23_1";
						type = "PopUp";
					};
					class T4
					{
						object = "BIS_FD_target23_4";
						positionsMove[] = {"BIS_FD_target23_4_WP1"};
						timesMove[] = {6};
						trigger = "BIS_FD_target23_3";
						type = "PopUp";
						upTime = 6;
					};
				};
			};
			class CP24
			{
				object = "BIS_FD_CP24";
				class Targets
				{
					class T1
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target24_1A", "BIS_FD_target24_1B", "BIS_FD_target24_1C"};
						object = "BIS_FD_target24_1";
						positions[] = {"BIS_FD_target24_1A", "BIS_FD_target24_1B", "BIS_FD_target24_1C"};
						type = "PopUp_Acc1";
					};
					class T2
					{
						chance = 0.8;
						object = "BIS_FD_target24_2";
						type = "PopUp_Acc1";
					};
					class T3
					{
						directions[] = {"BIS_FD_target24_3A", "BIS_FD_target24_3B"};
						object = "BIS_FD_target24_3";
						positions[] = {"BIS_FD_target24_3A", "BIS_FD_target24_3B"};
						type = "PopUp_Acc1";
					};
					class T4
					{
						object = "BIS_FD_target24_4";
						type = "PopUp_Acc2";
					};
				};
			};
			class CP25
			{
				object = "BIS_FD_CP25";
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus25_1";
						optional = 1;
						trigger = "BIS_FD_target25_1";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus25_2";
						trigger = "BIS_FD_target25_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus25_3";
						trigger = "BIS_FD_target25_3";
					};
					class Optional4
					{
						bonus = 10;
						object = "BIS_FD_bonus25_4";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional5: Optional4
					{
						object = "BIS_FD_bonus25_5";
					};
					class Optional6: Optional4
					{
						object = "BIS_FD_bonus25_6";
					};
					class Optional7: Optional4
					{
						object = "BIS_FD_bonus25_7";
					};
					class Optional8: Optional4
					{
						object = "BIS_FD_bonus25_8";
					};
					class Optional9: Optional4
					{
						object = "BIS_FD_bonus25_9";
					};
					class T1
					{
						object = "BIS_FD_target25_1";
						type = "PopUp_Oval";
					};
					class T2: T1
					{
						object = "BIS_FD_target25_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target25_3";
					};
					class T4
					{
						object = "BIS_FD_target25_4";
						type = "Steel_Plate";
					};
					class T5: T4
					{
						object = "BIS_FD_target25_5";
					};
					class T6: T4
					{
						object = "BIS_FD_target25_6";
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target3_1";
						type = "PopUp";
					};
				};
			};
			class CP5
			{
				object = "BIS_FD_CP5";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target4_1";
						triggerTime = 1.5;
						type = "PopUp";
						upTime = 3;
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target5_1";
						triggerTime = 1;
						type = "PopUp";
					};
					class T2
					{
						directions[] = {"BIS_FD_target5_2A", "BIS_FD_target5_2B", "BIS_FD_target5_2C"};
						object = "BIS_FD_target5_2";
						positions[] = {"BIS_FD_target5_2A", "BIS_FD_target5_2B", "BIS_FD_target5_2C"};
						type = "PopUp";
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target6_1";
						type = "PopUp";
						upTime = 6;
					};
					class T2
					{
						object = "BIS_FD_target6_2";
						type = "PopUp";
						upTime = 4.5;
					};
					class T3
					{
						directions[] = {"BIS_FD_target6_3A", "BIS_FD_target6_3B"};
						object = "BIS_FD_target6_3";
						positions[] = {"BIS_FD_target6_3A", "BIS_FD_target6_3B"};
						type = "PopUp";
						upTime = 6.5;
					};
				};
			};
			class CP8
			{
				object = "BIS_FD_CP8";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot7_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot7_2";
					};
					class T1
					{
						object = "BIS_FD_target7_1";
						type = "PopUp";
					};
				};
			};
			class CP9
			{
				object = "BIS_FD_CP9";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target8_1";
						positionsMove[] = {"BIS_FD_target8_1_WP1"};
						timesMove[] = {3.5};
						type = "PopUp";
						upTime = 3.5;
					};
				};
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {6396.84, 5364.3};
				script = "dyno_sp_fd04.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD05
	{
		color[] = {0.694118, 0.2, 0.223529, 1};
		colorName = "red";
		containersMagazines[] = {"BIS_ammoFD1_1", "BIS_ammoFD1_2", "BIS_ammoFD1_3", "BIS_ammoFD1_4"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_weaponsFD1"};
		decals[] = {};
		displayName = "CoF: Red 3";
		leaderboard = "1134244";
		magazines[] = {"30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag"};
		magazinesCompetitor[] = {"30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag"};
		objectCOF = "BIS_firingDrills1";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_FD_recolor12", "BIS_FD_recolor13", "BIS_FD_recolor14", "BIS_FD_recolor15", "BIS_FD_recolor16", "BIS_FD_recolor17", "BIS_FD_recolor18", "BIS_FD_recolor19", "BIS_FD_recolor20", "BIS_FD_recolor21", "BIS_FD_recolor22", "BIS_FD_recolor23", "BIS_FD_recolor24", "BIS_FD_recolor25", "BIS_FD_recolor26", "BIS_FD_recolor27", "BIS_FD_recolor28", "BIS_FD_recolor29", "BIS_FD_recolor30", "BIS_FD_recolor31", "BIS_FD_recolor32", "BIS_FD_recolor33", "BIS_FD_recolor34", "BIS_FD_recolor35", "BIS_FD_recolor36", "BIS_FD_recolor37", "BIS_FD_recolor38", "BIS_FD_recolor39", "BIS_FD_recolor40", "BIS_FD_recolor41", "BIS_FD_recolor42", "BIS_FD_recolor43", "BIS_FD_recolor44", "BIS_FD_recolor45", "BIS_FD_recolor46", "BIS_FD_recolor47", "BIS_FD_recolor48", "BIS_FD_recolor49", "BIS_FD_recolor50", "BIS_FD_recolor51", "BIS_FD_recolor52", "BIS_FD_recolor53", "BIS_FD_recolor54", "BIS_FD_recolor55", "BIS_FD_recolor56", "BIS_FD_recolor57", "BIS_FD_recolor58", "BIS_FD_recolor59", "BIS_FD_recolor60", "BIS_FD_recolor61", "BIS_FD_recolor62", "BIS_FD_recolor63", "BIS_FD_recolor64", "BIS_FD_recolor65"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD05";
		timesMedals[] = {264, 250.3, 241};
		weapons[] = {"arifle_MXM_Hamr_pointer_F", "hgun_P07_F"};
		weaponsCompetitor[] = {"arifle_MXM_Hamr_pointer_F", "hgun_P07_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP10
			{
				object = "BIS_FD_CP10";
				class Targets
				{
					class T1
					{
						chance = 0.3;
						object = "BIS_FD_target10_1";
						positionsMove[] = {"BIS_FD_target10_1_WP1"};
						timesMove[] = {2};
						type = "PopUp";
						upTime = 2;
					};
					class T2
					{
						object = "BIS_FD_target10_2";
						positionsMove[] = {"BIS_FD_target10_2_WP1"};
						timesMove[] = {3};
						triggerTime = 2;
						type = "PopUp";
						upTime = 5;
					};
					class T3
					{
						directions[] = {"BIS_FD_target10_3A", "BIS_FD_target10_3B"};
						object = "BIS_FD_target10_3";
						positions[] = {"BIS_FD_target10_3A", "BIS_FD_target10_3B"};
						triggerTime = 4;
						type = "PopUp";
					};
					class T4: T3
					{
						directions[] = {"BIS_FD_target10_4A", "BIS_FD_target10_4B"};
						object = "BIS_FD_target10_4";
						positions[] = {"BIS_FD_target10_4A", "BIS_FD_target10_4B"};
						upTime = 8;
					};
					class T5: T3
					{
						chance = 0.5;
						directions[] = {};
						object = "BIS_FD_target10_5";
						positions[] = {};
					};
					class T6: T3
					{
						directions[] = {"BIS_FD_target10_6A", "BIS_FD_target10_6B"};
						object = "BIS_FD_target10_6";
						positions[] = {"BIS_FD_target10_6A", "BIS_FD_target10_6B"};
						upTime = 9;
					};
				};
			};
			class CP11
			{
				object = "BIS_FD_CP11";
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot11_1";
					};
					class NoShoot2: NoShoot1
					{
						chance = 0.3;
						object = "BIS_FD_noShoot11_2";
					};
					class T1
					{
						chance = 0.3;
						object = "BIS_FD_target11_1";
						type = "PopUp_Acc1";
					};
					class T2
					{
						object = "BIS_FD_target11_2";
						type = "PopUp_Acc1";
						upTime = 6;
					};
					class T3: T2
					{
						directions[] = {"BIS_FD_target11_3A", "BIS_FD_target11_3B"};
						object = "BIS_FD_target11_3";
						positions[] = {"BIS_FD_target11_3A", "BIS_FD_target11_3B"};
						upTime = 4;
					};
					class T4: T2
					{
						object = "BIS_FD_target11_4";
						upTime = 8;
					};
					class T5: T2
					{
						object = "BIS_FD_target11_5";
						positionsMove[] = {"BIS_FD_target11_5_WP1"};
						timesMove[] = {2};
						trigger = "BIS_FD_target11_4";
						upTime = 3;
					};
				};
			};
			class CP12
			{
				object = "BIS_FD_CP12";
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class NoShoot1
					{
						chance = 0.5;
						noShoot = 1;
						object = "BIS_FD_noShoot12_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot12_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot12_3";
					};
					class NoShoot4: NoShoot1
					{
						object = "BIS_FD_noShoot12_4";
					};
					class T1
					{
						chance = 0.5;
						object = "BIS_FD_target12_1";
						type = "PopUp_Acc1";
						upTime = 3;
					};
					class T2: T1
					{
						chance = 1;
						object = "BIS_FD_target12_2";
						upTime = 4.5;
					};
				};
			};
			class CP13
			{
				object = "BIS_FD_CP13";
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class NoShoot1
					{
						chance = 0.7;
						noShoot = 1;
						object = "BIS_FD_noShoot13_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot13_2";
					};
					class T1
					{
						object = "BIS_FD_target13_1";
						type = "PopUp_Acc1";
						upTime = 5;
					};
					class T2: T1
					{
						object = "BIS_FD_target13_2";
						positionsMove[] = {"BIS_FD_target13_2_WP1"};
						timesMove[] = {1.5};
						upTime = 3;
					};
					class T3: T1
					{
						chance = 0.7;
						object = "BIS_FD_target13_3";
						positionsMove[] = {"BIS_FD_target13_3_WP1"};
						timesMove[] = {2};
						upTime = 4;
					};
					class T4: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target13_4A", "BIS_FD_target13_4B", "BIS_FD_target13_4C"};
						object = "BIS_FD_target13_4";
						positions[] = {"BIS_FD_target13_4A", "BIS_FD_target13_4B", "BIS_FD_target13_4C"};
						upTime = 9;
					};
				};
			};
			class CP14
			{
				object = "BIS_FD_CP14";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot14_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot14_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot14_3";
					};
					class NoShoot4: NoShoot1
					{
						object = "BIS_FD_noShoot14_4";
					};
					class NoShoot5: NoShoot1
					{
						object = "BIS_FD_noShoot14_5";
					};
					class NoShoot6: NoShoot1
					{
						object = "BIS_FD_noShoot14_6";
					};
					class T1
					{
						object = "BIS_FD_target14_1";
						positionsMove[] = {"BIS_FD_target14_1_WP1"};
						timesMove[] = {3.5};
						type = "PopUp";
					};
					class T10: T2
					{
						object = "BIS_FD_target14_10";
						positionsMove[] = {"BIS_FD_target14_10_WP1"};
						timesMove[] = {4.3};
					};
					class T11: T2
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target14_11A", "BIS_FD_target14_11B"};
						object = "BIS_FD_target14_11";
						positions[] = {"BIS_FD_target14_11A", "BIS_FD_target14_11B"};
						triggerTime = 10;
					};
					class T12: T2
					{
						chance = 0.5;
						object = "BIS_FD_target14_12";
						triggerTime = 10;
					};
					class T2
					{
						object = "BIS_FD_target14_2";
						type = "PopUp";
					};
					class T3: T2
					{
						object = "BIS_FD_target14_3";
						positionsMove[] = {"BIS_FD_target14_3_WP1"};
						timesMove[] = {4};
					};
					class T4: T2
					{
						object = "BIS_FD_target14_4";
					};
					class T5: T2
					{
						chance = 0.8;
						directions[] = {"BIS_FD_target14_5A", "BIS_FD_target14_5B", "BIS_FD_target14_5C"};
						object = "BIS_FD_target14_5";
						positions[] = {"BIS_FD_target14_5A", "BIS_FD_target14_5B", "BIS_FD_target14_5C"};
						triggerTime = 3;
					};
					class T6: T2
					{
						directions[] = {"BIS_FD_target14_6A", "BIS_FD_target14_6B"};
						object = "BIS_FD_target14_6";
						positions[] = {"BIS_FD_target14_6A", "BIS_FD_target14_6B"};
						triggerTime = 3;
					};
					class T7: T2
					{
						chance = 0.8;
						directions[] = {"BIS_FD_target14_7A", "BIS_FD_target14_7B", "BIS_FD_target14_7C"};
						object = "BIS_FD_target14_7";
						positions[] = {"BIS_FD_target14_7A", "BIS_FD_target14_7B", "BIS_FD_target14_7C"};
						triggerTime = 6;
					};
					class T8: T2
					{
						object = "BIS_FD_target14_8";
						positionsMove[] = {"BIS_FD_target14_8_WP1"};
						timesMove[] = {3.8};
					};
					class T9: T2
					{
						chance = 0.8;
						directions[] = {"BIS_FD_target14_9A", "BIS_FD_target14_9B", "BIS_FD_target14_9C"};
						object = "BIS_FD_target14_9";
						positions[] = {"BIS_FD_target14_9A", "BIS_FD_target14_9B", "BIS_FD_target14_9C"};
					};
				};
			};
			class CP15
			{
				object = "BIS_FD_CP15";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				shootingBoxes[] = {"BIS_FD_CP2_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus2_1";
						optional = 1;
						trigger = "BIS_FD_target2_1";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus2_2";
						trigger = "BIS_FD_target2_2";
					};
					class T1
					{
						object = "BIS_FD_target2_1";
						type = "PopUp_Oval";
					};
					class T2: T1
					{
						object = "BIS_FD_target2_2";
					};
					class T3
					{
						object = "BIS_FD_target2_3";
						type = "Steel_Plate";
					};
					class T4: T3
					{
						object = "BIS_FD_target2_4";
					};
					class T5: T3
					{
						object = "BIS_FD_target2_5";
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				shootingBoxes[] = {"BIS_FD_CP3_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus3_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus3_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus3_3";
					};
					class T1
					{
						object = "BIS_FD_target3_1";
						type = "PopUp_Oval";
					};
					class T2: T1
					{
						object = "BIS_FD_target3_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target3_3";
					};
					class T4
					{
						object = "BIS_FD_target3_4";
						type = "Steel_Plate";
					};
					class T5: T4
					{
						object = "BIS_FD_target3_5";
					};
					class T6: T4
					{
						object = "BIS_FD_target3_6";
					};
				};
			};
			class CP4
			{
				height = 335.5;
				object = "BIS_FD_CP4";
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus4_1";
						optional = 1;
						trigger = "BIS_FD_target4_1";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus4_2";
						trigger = "BIS_FD_target4_2";
					};
					class T1
					{
						directions[] = {"BIS_FD_target4_1A", "BIS_FD_target4_1B"};
						object = "BIS_FD_target4_1";
						positions[] = {"BIS_FD_target4_1A", "BIS_FD_target4_1B"};
						type = "PopUp";
						upTime = 5;
					};
					class T10: T3
					{
						directions[] = {"BIS_FD_target4_10A", "BIS_FD_target4_10B", "BIS_FD_target4_10C"};
						object = "BIS_FD_target4_10";
						positions[] = {"BIS_FD_target4_10A", "BIS_FD_target4_10B", "BIS_FD_target4_10C"};
						triggerTime = 3;
						upTime = 6;
					};
					class T11: T3
					{
						directions[] = {"BIS_FD_target4_11A", "BIS_FD_target4_11B"};
						object = "BIS_FD_target4_11";
						positions[] = {"BIS_FD_target4_11A", "BIS_FD_target4_11B"};
						trigger = "BIS_FD_target4_3";
						upTime = 8;
					};
					class T12: T3
					{
						chance = 0.5;
						object = "BIS_FD_target4_12";
						trigger = "BIS_FD_target4_3";
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target4_2A", "BIS_FD_target4_2B"};
						object = "BIS_FD_target4_2";
						positions[] = {"BIS_FD_target4_2A", "BIS_FD_target4_2B"};
						upTime = 7;
					};
					class T3
					{
						object = "BIS_FD_target4_3";
						type = "PopUp";
					};
					class T4: T3
					{
						object = "BIS_FD_target4_4";
					};
					class T5: T3
					{
						object = "BIS_FD_target4_5";
						positionsMove[] = {"BIS_FD_target4_5_WP1"};
						timesMove[] = {6.5};
						triggerTime = 4;
						upTime = 14;
					};
					class T6: T3
					{
						directions[] = {"BIS_FD_target4_6A", "BIS_FD_target4_6B", "BIS_FD_target4_6C"};
						object = "BIS_FD_target4_6";
						positions[] = {"BIS_FD_target4_6A", "BIS_FD_target4_6B", "BIS_FD_target4_6C"};
					};
					class T7: T3
					{
						chance = 0.8;
						object = "BIS_FD_target4_7";
					};
					class T8: T3
					{
						chance = 0.5;
						object = "BIS_FD_target4_8";
						triggerTime = 5;
					};
					class T9: T3
					{
						directions[] = {"BIS_FD_target4_9A", "BIS_FD_target4_9B"};
						object = "BIS_FD_target4_9";
						positions[] = {"BIS_FD_target4_9A", "BIS_FD_target4_9B"};
						triggerTime = 5.5;
					};
				};
			};
			class CP5
			{
				height = 337;
				object = "BIS_FD_CP5";
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus5_1";
						optional = 1;
						trigger = "BIS_FD_target5_2";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus5_2";
						trigger = "BIS_FD_target5_1";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus5_3";
						trigger = "BIS_FD_target5_3";
					};
					class T1
					{
						directions[] = {"BIS_FD_target5_1A", "BIS_FD_target5_1B"};
						object = "BIS_FD_target5_1";
						positions[] = {"BIS_FD_target5_1A", "BIS_FD_target5_1B"};
						type = "PopUp";
					};
					class T10: T1
					{
						chance = 0.6;
						directions[] = {};
						object = "BIS_FD_target5_10";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target5_10_WP1"};
						timesMove[] = {5};
					};
					class T11: T1
					{
						directions[] = {"BIS_FD_target5_11A", "BIS_FD_target5_11B"};
						object = "BIS_FD_target5_11";
						positions[] = {"BIS_FD_target5_11A", "BIS_FD_target5_11B"};
						triggerTime = 8;
					};
					class T12: T1
					{
						directions[] = {};
						object = "BIS_FD_target5_12";
						positions[] = {};
						triggerTime = 8;
						upTime = 7;
					};
					class T13: T1
					{
						chance = 0.5;
						directions[] = {};
						object = "BIS_FD_target5_13";
						positions[] = {};
						triggerTime = 8;
						upTime = 4;
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target5_2A", "BIS_FD_target5_2B"};
						object = "BIS_FD_target5_2";
						positions[] = {"BIS_FD_target5_2A", "BIS_FD_target5_2B"};
						triggerTime = 4;
						upTime = 6;
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target5_3";
						positions[] = {};
						triggerTime = 4;
						upTime = 5;
					};
					class T4: T1
					{
						directions[] = {};
						object = "BIS_FD_target5_4";
						positions[] = {};
					};
					class T5: T1
					{
						directions[] = {};
						object = "BIS_FD_target5_5";
						positions[] = {};
					};
					class T6: T1
					{
						directions[] = {};
						object = "BIS_FD_target5_6";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target5_6_WP1"};
						timesMove[] = {8};
						triggerTime = 6;
					};
					class T7: T1
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target5_7A", "BIS_FD_target5_7B", "BIS_FD_target5_7C"};
						object = "BIS_FD_target5_7";
						positions[] = {"BIS_FD_target5_7A", "BIS_FD_target5_7B", "BIS_FD_target5_7C"};
						upTime = 6;
					};
					class T8: T1
					{
						directions[] = {"BIS_FD_target5_8A", "BIS_FD_target5_8B", "BIS_FD_target5_8C"};
						object = "BIS_FD_target5_8";
						positions[] = {"BIS_FD_target5_8A", "BIS_FD_target5_8B", "BIS_FD_target5_8C"};
					};
					class T9: T1
					{
						directions[] = {};
						object = "BIS_FD_target5_9";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target5_9_WP1"};
						timesMove[] = {6};
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
				shootingBoxes[] = {"BIS_FD_CP6_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 14;
						object = "BIS_FD_bonus6_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus6_2";
					};
					class Optional3: Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus6_3";
					};
					class Optional4: Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus6_4";
					};
					class Optional5: Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus6_5";
					};
					class T1
					{
						object = "BIS_FD_target6_1";
						type = "Steel_Plate";
					};
					class T2: T1
					{
						object = "BIS_FD_target6_2";
					};
					class T3
					{
						object = "BIS_FD_target6_3";
						type = "PopUp_Oval";
					};
					class T4: T3
					{
						directions[] = {"BIS_FD_target6_4A", "BIS_FD_target6_4B"};
						object = "BIS_FD_target6_4";
						positions[] = {"BIS_FD_target6_4A", "BIS_FD_target6_4B"};
						trigger = "BIS_FD_target6_7";
					};
					class T5: T3
					{
						directions[] = {"BIS_FD_target6_5A", "BIS_FD_target6_5B"};
						object = "BIS_FD_target6_5";
						positions[] = {"BIS_FD_target6_5A", "BIS_FD_target6_5B"};
						trigger = "BIS_FD_target6_3";
					};
					class T6: T3
					{
						directions[] = {"BIS_FD_target6_6A", "BIS_FD_target6_6B"};
						object = "BIS_FD_target6_6";
						positions[] = {"BIS_FD_target6_6A", "BIS_FD_target6_6B"};
						trigger = "BIS_FD_target6_4";
					};
					class T7: T3
					{
						directions[] = {"BIS_FD_target6_7A", "BIS_FD_target6_7B"};
						object = "BIS_FD_target6_7";
						positions[] = {"BIS_FD_target6_7A", "BIS_FD_target6_7B"};
						trigger = "BIS_FD_target6_5";
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
				shootingBoxes[] = {"BIS_FD_CP7_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus7_4";
						optional = 1;
						trigger = "BIS_FD_target7_2";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus7_5";
						trigger = "BIS_FD_target7_3";
					};
					class Optional3
					{
						bonus = 10;
						object = "BIS_FD_bonus7_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional4: Optional3
					{
						object = "BIS_FD_bonus7_2";
					};
					class Optional5: Optional3
					{
						object = "BIS_FD_bonus7_3";
					};
					class T1
					{
						object = "BIS_FD_target7_1";
						type = "PopUp_Oval";
						upTime = 4;
					};
					class T2
					{
						object = "BIS_FD_target7_2";
						type = "PopUp_Oval";
					};
					class T3: T2
					{
						object = "BIS_FD_target7_3";
					};
					class T4: T2
					{
						object = "BIS_FD_target7_4";
						upTime = 4;
					};
				};
			};
			class CP8
			{
				height = 338;
				object = "BIS_FD_CP8";
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_FD_target8_1A", "BIS_FD_target8_1B"};
						object = "BIS_FD_target8_1";
						positions[] = {"BIS_FD_target8_1A", "BIS_FD_target8_1B"};
						type = "PopUp";
						upTime = 12;
					};
					class T2: T1
					{
						directions[] = {};
						object = "BIS_FD_target8_2";
						positions[] = {};
						upTime = 13;
					};
					class T3: T1
					{
						directions[] = {"BIS_FD_target8_3A", "BIS_FD_target8_3B"};
						object = "BIS_FD_target8_3";
						positions[] = {"BIS_FD_target8_3A", "BIS_FD_target8_3B"};
						upTime = 15;
					};
					class T4: T1
					{
						chance = 0.65;
						directions[] = {"BIS_FD_target8_4A", "BIS_FD_target8_4B", "BIS_FD_target8_4C"};
						object = "BIS_FD_target8_4";
						positions[] = {"BIS_FD_target8_4A", "BIS_FD_target8_4B", "BIS_FD_target8_4C"};
						upTime = 11;
					};
					class T5: T1
					{
						directions[] = {};
						object = "BIS_FD_target8_5";
						positions[] = {};
						upTime = 14;
					};
					class T6: T1
					{
						chance = 0.5;
						directions[] = {};
						object = "BIS_FD_target8_6";
						positions[] = {};
						upTime = 18;
					};
				};
			};
			class CP9
			{
				height = 344;
				object = "BIS_FD_CP9";
				class Targets
				{
					class T1
					{
						chance = 0;
						object = "BIS_FD_target9_1";
						type = "PopUp";
					};
					class T10: T8
					{
						chance = 0.5;
						object = "BIS_FD_target9_10";
					};
					class T11: T8
					{
						directions[] = {"BIS_FD_target9_11A", "BIS_FD_target9_11B", "BIS_FD_target9_11C"};
						object = "BIS_FD_target9_11";
						positions[] = {"BIS_FD_target9_11A", "BIS_FD_target9_11B", "BIS_FD_target9_11C"};
					};
					class T2: T1
					{
						object = "BIS_FD_target9_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target9_3";
					};
					class T4
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target9_4A", "BIS_FD_target9_4B"};
						object = "BIS_FD_target9_4";
						positions[] = {"BIS_FD_target9_4A", "BIS_FD_target9_4B"};
						triggerTime = 8;
						type = "PopUp";
					};
					class T5
					{
						object = "BIS_FD_target9_5";
						triggerTime = 8;
						type = "PopUp";
					};
					class T6
					{
						directions[] = {"BIS_FD_target9_6A", "BIS_FD_target9_6B"};
						object = "BIS_FD_target9_6";
						positions[] = {"BIS_FD_target9_6A", "BIS_FD_target9_6B"};
						triggerTime = 8;
						type = "PopUp";
						upTime = 8;
					};
					class T7
					{
						chance = 0.7;
						directions[] = {"BIS_FD_target9_7A", "BIS_FD_target9_7B"};
						object = "BIS_FD_target9_7";
						positions[] = {"BIS_FD_target9_7A", "BIS_FD_target9_7B"};
						type = "PopUp";
					};
					class T8
					{
						object = "BIS_FD_target9_8";
						type = "PopUp";
					};
					class T9: T8
					{
						directions[] = {"BIS_FD_target9_9A", "BIS_FD_target9_9B"};
						object = "BIS_FD_target9_9";
						positions[] = {"BIS_FD_target9_9A", "BIS_FD_target9_9B"};
					};
				};
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {4859.6, 22008.8};
				script = "dyno_sp_fd05.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD06
	{
		color[] = {0.694118, 0.2, 0.223529, 1};
		colorName = "red";
		containersMagazines[] = {"BIS_ammoFD1_1", "BIS_ammoFD1_2", "BIS_ammoFD1_3", "BIS_ammoFD1_4"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_weaponsFD1"};
		decals[] = {};
		displayName = "CoF: Red 2";
		leaderboard = "1134245";
		magazines[] = {"30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
		magazinesCompetitor[] = {"30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
		objectCOF = "BIS_firingDrills1";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_FD_recolor12", "BIS_FD_recolor13", "BIS_FD_recolor14", "BIS_FD_recolor15", "BIS_FD_recolor16", "BIS_FD_recolor17", "BIS_FD_recolor18", "BIS_FD_recolor19", "BIS_FD_recolor20", "BIS_FD_recolor21", "BIS_FD_recolor22", "BIS_FD_recolor23", "BIS_FD_recolor24", "BIS_FD_recolor25", "BIS_FD_recolor26", "BIS_FD_recolor27", "BIS_FD_recolor28", "BIS_FD_recolor29", "BIS_FD_recolor30"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD06";
		timesMedals[] = {179, 165.6, 152.8};
		weapons[] = {"arifle_Katiba_ACO_pointer_snds_F", "hgun_Rook40_snds_F"};
		weaponsCompetitor[] = {"arifle_Katiba_ACO_pointer_snds_F", "hgun_Rook40_snds_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP10
			{
				object = "BIS_FD_CP10";
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_FD_target9_1A", "BIS_FD_target9_1B", "BIS_FD_target9_1C"};
						object = "BIS_FD_target9_1";
						positions[] = {"BIS_FD_target9_1A", "BIS_FD_target9_1B", "BIS_FD_target9_1C"};
						type = "PopUp";
					};
					class T2: T1
					{
						directions[] = {};
						object = "BIS_FD_target9_2";
						positions[] = {};
						upTime = 7;
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target9_3";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target9_3_WP1"};
						timesMove[] = {5.5};
						upTime = 6;
					};
					class T4: T1
					{
						chance = 0.7;
						directions[] = {};
						object = "BIS_FD_target9_4";
						positions[] = {};
						triggerTime = 3;
					};
					class T5: T1
					{
						directions[] = {"BIS_FD_target9_5A", "BIS_FD_target9_5B", "BIS_FD_target9_5C"};
						object = "BIS_FD_target9_5";
						positions[] = {"BIS_FD_target9_5A", "BIS_FD_target9_5B", "BIS_FD_target9_5C"};
					};
					class T6: T1
					{
						directions[] = {"BIS_FD_target9_6A", "BIS_FD_target9_6B"};
						object = "BIS_FD_target9_6";
						positions[] = {"BIS_FD_target9_6A", "BIS_FD_target9_6B"};
						triggerTime = 2;
						upTime = 6;
					};
					class T7: T1
					{
						chance = 0.4;
						directions[] = {};
						object = "BIS_FD_target9_7";
						positions[] = {};
					};
				};
			};
			class CP11
			{
				object = "BIS_FD_CP11";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot10_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot10_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot10_3";
					};
					class T1
					{
						directions[] = {"BIS_FD_target10_1A", "BIS_FD_target10_1B", "BIS_FD_target10_1C"};
						object = "BIS_FD_target10_1";
						positions[] = {"BIS_FD_target10_1A", "BIS_FD_target10_1B", "BIS_FD_target10_1C"};
						type = "PopUp";
					};
					class T2: T1
					{
						chance = 0.5;
						directions[] = {};
						object = "BIS_FD_target10_2";
						positions[] = {};
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target10_3";
						positions[] = {};
					};
					class T4: T1
					{
						directions[] = {"BIS_FD_target10_4A", "BIS_FD_target10_4B"};
						object = "BIS_FD_target10_4";
						positions[] = {"BIS_FD_target10_4A", "BIS_FD_target10_4B"};
						triggerTime = 2;
					};
					class T5: T1
					{
						directions[] = {};
						object = "BIS_FD_target10_5";
						positions[] = {};
						trigger = "BIS_FD_target10_3";
					};
					class T6: T1
					{
						directions[] = {};
						object = "BIS_FD_target10_6";
						positions[] = {};
						trigger = "BIS_FD_target10_3";
					};
				};
			};
			class CP12
			{
				object = "BIS_FD_CP12";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				weapons[] = {"hgun_Rook40_snds_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus2_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus2_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus2_3";
					};
					class T1
					{
						object = "BIS_FD_target2_1";
						trigger = "BIS_FD_target2_6";
						type = "PopUp";
					};
					class T2: T1
					{
						object = "BIS_FD_target2_2";
						trigger = "BIS_FD_target2_7";
					};
					class T3
					{
						object = "BIS_FD_target2_3";
						type = "Steel_Plate";
					};
					class T4: T3
					{
						object = "BIS_FD_target2_4";
					};
					class T5: T3
					{
						object = "BIS_FD_target2_5";
					};
					class T6
					{
						object = "BIS_FD_target2_6";
						type = "PopUp_Oval";
					};
					class T7: T6
					{
						object = "BIS_FD_target2_7";
					};
					class T8
					{
						directions[] = {"BIS_FD_target2_8A", "BIS_FD_target2_8B", "BIS_FD_target2_8C"};
						object = "BIS_FD_target2_8";
						positions[] = {"BIS_FD_target2_8A", "BIS_FD_target2_8B", "BIS_FD_target2_8C"};
						triggerTime = 6.5;
						type = "PopUp";
					};
					class T9: T8
					{
						directions[] = {};
						object = "BIS_FD_target2_9";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target2_9_WP1"};
						timesMove[] = {2.5};
						triggerTime = 5;
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				onActivate = "CP3_onActivate.sqf";
				weapons[] = {"hgun_Rook40_snds_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot3_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot3_2";
					};
					class NoShoot3: NoShoot1
					{
						chance = 0.5;
						object = "BIS_FD_noShoot3_3";
					};
					class T1
					{
						object = "BIS_FD_target3_1";
						type = "PopUp_Zom_Acc1";
					};
				};
			};
			class CP4
			{
				height = 19.5;
				object = "BIS_FD_CP4";
				onActivate = "CP3_onActivate.sqf";
				weapons[] = {"hgun_Rook40_snds_F"};
				class Targets
				{
					class T10
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target4_10A", "BIS_FD_target4_10B", "BIS_FD_target4_10C", "BIS_FD_target4_10D", "BIS_FD_target4_10E"};
						object = "BIS_FD_target4_10";
						positions[] = {"BIS_FD_target4_10A", "BIS_FD_target4_10B", "BIS_FD_target4_10C", "BIS_FD_target4_10D", "BIS_FD_target4_10E"};
						triggerTime = 6;
						type = "PopUp_Zom_Acc1";
					};
					class T11
					{
						object = "BIS_FD_target4_11";
						positionsMove[] = {"BIS_FD_target4_11_WP1"};
						timesMove[] = {15};
						trigger = "BIS_FD_target4_4";
						type = "PopUp_Zom_Acc1";
					};
					class T12: T11
					{
						object = "BIS_FD_target4_12";
						positionsMove[] = {"BIS_FD_target4_12_WP1"};
						timesMove[] = {12};
						trigger = "BIS_FD_target4_3";
					};
					class T3
					{
						object = "BIS_FD_target4_3";
						type = "PopUp_Oval";
					};
					class T4: T3
					{
						object = "BIS_FD_target4_4";
					};
					class T5
					{
						object = "BIS_FD_target4_5";
						type = "Steel_Plate";
					};
					class T6: T5
					{
						object = "BIS_FD_target4_6";
					};
					class T7: T5
					{
						object = "BIS_FD_target4_7";
					};
					class T8: T5
					{
						object = "BIS_FD_target4_8";
					};
					class T9: T5
					{
						object = "BIS_FD_target4_9";
					};
				};
			};
			class CP5
			{
				height = 19.5;
				object = "BIS_FD_CP5";
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus5_1";
						optional = 1;
						trigger = "BIS_FD_target5_1";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus5_2";
						trigger = "BIS_FD_target5_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus5_3";
						trigger = "BIS_FD_target5_3";
					};
					class Optional4
					{
						bonus = 10;
						object = "BIS_FD_bonus5_4";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional5: Optional4
					{
						object = "BIS_FD_bonus5_5";
					};
					class Optional6: Optional4
					{
						object = "BIS_FD_bonus5_6";
					};
					class Optional7: Optional4
					{
						object = "BIS_FD_bonus5_7";
					};
					class Optional8: Optional4
					{
						object = "BIS_FD_bonus5_8";
					};
					class T1
					{
						object = "BIS_FD_target5_1";
						type = "PopUp_Oval";
					};
					class T2: T1
					{
						object = "BIS_FD_target5_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target5_3";
					};
					class T4
					{
						object = "BIS_FD_target5_4";
						type = "Steel_Plate";
					};
					class T5: T4
					{
						object = "BIS_FD_target5_5";
					};
					class T6: T4
					{
						object = "BIS_FD_target5_6";
					};
					class T7: T4
					{
						object = "BIS_FD_target5_7";
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
			};
			class CP7
			{
				object = "BIS_FD_CP7";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target6_1";
						positionsMove[] = {"BIS_FD_target6_1_WP1"};
						timesMove[] = {4};
						type = "PopUp";
						upTime = 6;
					};
					class T2: T1
					{
						object = "BIS_FD_target6_2";
						positionsMove[] = {"BIS_FD_target6_2_WP1"};
						timesMove[] = {4.5};
						triggerTime = 4;
						upTime = 6.5;
					};
					class T3: T1
					{
						object = "BIS_FD_target6_3";
						positionsMove[] = {"BIS_FD_target6_3_WP1"};
						timesMove[] = {3.8};
						triggerTime = 2;
						upTime = 6;
					};
					class T4
					{
						directions[] = {"BIS_FD_target6_4A", "BIS_FD_target6_4B"};
						object = "BIS_FD_target6_4";
						positions[] = {"BIS_FD_target6_4A", "BIS_FD_target6_4B"};
						triggerTime = 7;
						type = "PopUp";
					};
					class T5: T4
					{
						chance = 0.7;
						directions[] = {"BIS_FD_target6_5A", "BIS_FD_target6_5B"};
						object = "BIS_FD_target6_5";
						positions[] = {"BIS_FD_target6_5A", "BIS_FD_target6_5B"};
						upTime = 8;
					};
				};
			};
			class CP8
			{
				object = "BIS_FD_CP8";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target7_1";
						type = "PopUp";
					};
					class T2: T1
					{
						object = "BIS_FD_target7_2";
						triggerTime = 2;
					};
					class T3: T1
					{
						chance = 0.4;
						directions[] = {"BIS_FD_target7_3A", "BIS_FD_target7_3B", "BIS_FD_target7_3C"};
						object = "BIS_FD_target7_3";
						positions[] = {"BIS_FD_target7_3A", "BIS_FD_target7_3B", "BIS_FD_target7_3C"};
					};
					class T4: T1
					{
						directions[] = {"BIS_FD_target7_4A", "BIS_FD_target7_4B"};
						object = "BIS_FD_target7_4";
						positions[] = {"BIS_FD_target7_4A", "BIS_FD_target7_4B"};
					};
				};
			};
			class CP9
			{
				object = "BIS_FD_CP9";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target8_1";
						type = "PopUp";
					};
					class T2
					{
						object = "BIS_FD_target8_2";
						type = "PopUp_Acc1";
					};
					class T3: T1
					{
						chance = 0.6;
						object = "BIS_FD_target8_3";
					};
					class T4: T1
					{
						object = "BIS_FD_target8_4";
						positionsMove[] = {"BIS_FD_target8_4_WP1"};
						timesMove[] = {5};
						upTime = 8;
					};
					class T5: T1
					{
						object = "BIS_FD_target8_5";
						triggerTime = 3;
					};
					class T6: T1
					{
						object = "BIS_FD_target8_6";
						triggerTime = 3.5;
					};
				};
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {18253.5, 14259.7};
				script = "dyno_sp_fd06.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD07
	{
		color[] = {0.403922, 0.545098, 0.607843, 1};
		colorName = "blue";
		containersMagazines[] = {"BIS_ammoFD1_1", "BIS_ammoFD1_2"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_weaponsFD1"};
		decals[] = {};
		displayName = "CoF: Blue 2";
		leaderboard = "1134246";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag"};
		magazinesCompetitor[] = {"30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag"};
		nvgCompetitor = "NVGoggles";
		objectCOF = "BIS_firingDrills1";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_FD_recolor12", "BIS_FD_recolor13", "BIS_FD_recolor14", "BIS_FD_recolor15", "BIS_FD_recolor16", "BIS_FD_recolor17", "BIS_FD_recolor18", "BIS_FD_recolor19", "BIS_FD_recolor20", "BIS_FD_recolor21", "BIS_FD_recolor22", "BIS_FD_recolor23", "BIS_FD_recolor24", "BIS_FD_recolor25", "BIS_FD_recolor26", "BIS_FD_recolor27", "BIS_FD_recolor28", "BIS_FD_recolor29", "BIS_FD_recolor30", "BIS_FD_recolor31", "BIS_FD_recolor32", "BIS_FD_recolor33", "BIS_FD_recolor34", "BIS_FD_recolor35", "BIS_FD_recolor36", "BIS_FD_recolor37", "BIS_FD_recolor38", "BIS_FD_recolor39", "BIS_FD_recolor40", "BIS_FD_recolor41", "BIS_FD_recolor42", "BIS_FD_recolor43", "BIS_FD_recolor44", "BIS_FD_recolor45", "BIS_FD_recolor46"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD07";
		timesMedals[] = {140, 134.4, 127.6};
		weapons[] = {"arifle_TRG20_ACO_Flash_F", "arifle_TRG20_ACO_pointer_F", "hgun_ACPC2_F"};
		weaponsCompetitor[] = {"arifle_TRG20_ACO_Flash_F", "hgun_ACPC2_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP10
			{
				object = "BIS_FD_CP10";
				shootingBoxes[] = {"BIS_FD_CP10_Box"};
				stances[] = {"crouch"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus10_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus10_2";
					};
					class T1
					{
						object = "BIS_FD_target10_1";
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.6;
						object = "BIS_FD_target10_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target10_3";
						positionsMove[] = {"BIS_FD_target10_3_WP1"};
						timesMove[] = {6};
						triggerTime = 1;
						upTime = 6;
					};
				};
			};
			class CP11
			{
				object = "BIS_FD_CP11";
				shootingBoxes[] = {"BIS_FD_CP11_Box"};
				stances[] = {"stand"};
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_FD_target11_1A", "BIS_FD_target11_1B", "BIS_FD_target11_1C"};
						object = "BIS_FD_target11_1";
						positions[] = {"BIS_FD_target11_1A", "BIS_FD_target11_1B", "BIS_FD_target11_1C"};
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.8;
						directions[] = {"BIS_FD_target11_2A", "BIS_FD_target11_2B", "BIS_FD_target11_2C"};
						object = "BIS_FD_target11_2";
						positions[] = {"BIS_FD_target11_2A", "BIS_FD_target11_2B", "BIS_FD_target11_2C"};
					};
					class T3: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target11_3A", "BIS_FD_target11_3B", "BIS_FD_target11_3C"};
						object = "BIS_FD_target11_3";
						positions[] = {"BIS_FD_target11_3A", "BIS_FD_target11_3B", "BIS_FD_target11_3C"};
					};
					class T4: T1
					{
						directions[] = {};
						object = "BIS_FD_target11_4";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target11_4_WP1"};
						timesMove[] = {10.5};
						triggerTime = 2;
					};
					class T5: T1
					{
						directions[] = {};
						object = "BIS_FD_target11_5";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target11_5_WP1"};
						timesMove[] = {12};
					};
				};
			};
			class CP12
			{
				object = "BIS_FD_CP12";
				shootingBoxes[] = {"BIS_FD_CP12_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_target12_9";
						optional = 1;
						trigger = "BIS_FD_target12_8";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional2
					{
						bonus = 10;
						object = "BIS_FD_bonus12_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional3: Optional2
					{
						object = "BIS_FD_bonus12_2";
					};
					class Optional4: Optional2
					{
						object = "BIS_FD_bonus12_3";
					};
					class Optional5: Optional2
					{
						object = "BIS_FD_bonus12_4";
					};
					class Optional6: Optional2
					{
						object = "BIS_FD_bonus12_5";
					};
					class T1
					{
						object = "BIS_FD_target12_1";
						type = "Steel_Plate";
					};
					class T2: T1
					{
						object = "BIS_FD_target12_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target12_3";
					};
					class T4: T1
					{
						object = "BIS_FD_target12_4";
					};
					class T5: T1
					{
						object = "BIS_FD_target12_5";
						trigger = "BIS_FD_target12_8";
						type = "PopUp_Oval";
					};
					class T6: T5
					{
						object = "BIS_FD_target12_6";
					};
					class T7: T5
					{
						object = "BIS_FD_target12_7";
					};
					class T8
					{
						object = "BIS_FD_target12_8";
						type = "PopUp_Oval";
					};
				};
			};
			class CP13
			{
				object = "BIS_FD_CP13";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				shootingBoxes[] = {"BIS_FD_CP2_Box"};
				stances[] = {"stand"};
				weapons[] = {"hgun_ACPC2_F"};
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_FD_target2_1A", "BIS_FD_target2_1B", "BIS_FD_target2_1C"};
						object = "BIS_FD_target2_1";
						positions[] = {"BIS_FD_target2_1A", "BIS_FD_target2_1B", "BIS_FD_target2_1C"};
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.5;
						directions[] = {};
						object = "BIS_FD_target2_2";
						positions[] = {};
						triggerTime = 0.5;
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				shootingBoxes[] = {"BIS_FD_CP3_Box"};
				stances[] = {"crouch"};
				weapons[] = {"hgun_ACPC2_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_target3_5";
						optional = 1;
						trigger = "BIS_FD_target3_4";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional2
					{
						bonus = 10;
						object = "BIS_FD_bonus3_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional3: Optional2
					{
						object = "BIS_FD_bonus3_2";
					};
					class Optional4: Optional2
					{
						object = "BIS_FD_bonus3_3";
					};
					class T1
					{
						object = "BIS_FD_target3_1";
						type = "PopUp_Oval";
					};
					class T10: T6
					{
						object = "BIS_FD_target3_10";
					};
					class T11: T6
					{
						object = "BIS_FD_target3_11";
					};
					class T2: T1
					{
						object = "BIS_FD_target3_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target3_3";
					};
					class T4: T1
					{
						object = "BIS_FD_target3_4";
						triggerTime = 1;
					};
					class T6
					{
						object = "BIS_FD_target3_6";
						type = "Steel_Plate";
					};
					class T7: T6
					{
						object = "BIS_FD_target3_7";
					};
					class T8: T6
					{
						object = "BIS_FD_target3_8";
					};
					class T9: T6
					{
						object = "BIS_FD_target3_9";
					};
				};
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				shootingBoxes[] = {"BIS_FD_CP4_Box"};
				stances[] = {"crouch"};
				weapons[] = {"hgun_ACPC2_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus4_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus4_2";
					};
					class T1
					{
						object = "BIS_FD_target4_1";
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target4_2A", "BIS_FD_target4_2B", "BIS_FD_target4_2C"};
						object = "BIS_FD_target4_2";
						positions[] = {"BIS_FD_target4_2A", "BIS_FD_target4_2B", "BIS_FD_target4_2C"};
					};
					class T3: T1
					{
						chance = 0.8;
						object = "BIS_FD_target4_3";
						triggerTime = 2;
						upTime = 4;
					};
					class T4: T1
					{
						object = "BIS_FD_target4_4";
						positionsMove[] = {"BIS_FD_target4_4_WP1"};
						timesMove[] = {3};
						upTime = 6;
					};
				};
			};
			class CP5
			{
				height = 23.5;
				object = "BIS_FD_CP5";
				weapons[] = {"hgun_ACPC2_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target5_1";
						type = "PopUp_Acc1";
						upTime = 5;
					};
					class T2
					{
						chance = 0.5;
						object = "BIS_FD_target5_2";
						type = "PopUp_Acc1";
					};
					class T3
					{
						directions[] = {"BIS_FD_target5_3A", "BIS_FD_target5_3B"};
						object = "BIS_FD_target5_3";
						positions[] = {"BIS_FD_target5_3A", "BIS_FD_target5_3B"};
						type = "PopUp_Acc1";
					};
					class T4: T3
					{
						directions[] = {};
						object = "BIS_FD_target5_4";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target5_4_WP1"};
						timesMove[] = {3.8};
						upTime = 6;
					};
					class T5: T3
					{
						directions[] = {};
						object = "BIS_FD_target5_5";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target5_5_WP1"};
						timesMove[] = {8};
						triggerTime = 1.5;
						upTime = 12;
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
				shootingBoxes[] = {"BIS_FD_CP6_Box"};
				stances[] = {"crouch"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target6_1";
						type = "PopUp_Oval";
					};
					class T2: T1
					{
						object = "BIS_FD_target6_2";
						trigger = "BIS_FD_target6_3";
					};
					class T3: T1
					{
						object = "BIS_FD_target6_3";
					};
					class T4: T1
					{
						object = "BIS_FD_target6_4";
						trigger = "BIS_FD_target6_5";
					};
					class T5: T1
					{
						object = "BIS_FD_target6_5";
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
				onActivate = "CP7_onActivate.sqf";
				weapons[] = {"arifle_TRG20_ACO_Flash_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot7_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot7_2";
					};
					class T1
					{
						object = "BIS_FD_target7_1";
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						object = "BIS_FD_target7_2";
						positionsMove[] = {"BIS_FD_target7_2_WP1"};
						timesMove[] = {3.4};
						triggerTime = 1.5;
						upTime = 5.5;
					};
				};
			};
			class CP8
			{
				height = 27;
				object = "BIS_FD_CP8";
				weapons[] = {"arifle_TRG20_ACO_Flash_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target8_1";
						type = "PopUp_Acc1";
						upTime = 4;
					};
					class T2: T1
					{
						chance = 0.5;
						object = "BIS_FD_target8_2";
					};
					class T3
					{
						object = "BIS_FD_target8_3";
						type = "PopUp_Acc1";
					};
					class T4: T3
					{
						chance = 0.7;
						object = "BIS_FD_target8_4";
						triggerTime = 3;
					};
					class T5: T3
					{
						object = "BIS_FD_target8_5";
						triggerTime = 3;
					};
				};
			};
			class CP9
			{
				height = 28;
				object = "BIS_FD_CP9";
				weapons[] = {"arifle_TRG20_ACO_Flash_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus9_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus9_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus9_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus9_4";
					};
					class T1
					{
						object = "BIS_FD_target9_1";
						type = "Steel_Plate";
					};
					class T2: T1
					{
						object = "BIS_FD_target9_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target9_3";
					};
					class T4: T1
					{
						object = "BIS_FD_target9_4";
					};
					class T5: T1
					{
						object = "BIS_FD_target9_5";
					};
					class T6: T1
					{
						object = "BIS_FD_target9_6";
					};
					class T7: T1
					{
						object = "BIS_FD_target9_7";
					};
					class T8: T1
					{
						object = "BIS_FD_target9_8";
						triggerTime = 2;
						type = "PopUp_Oval";
					};
				};
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {13988.1, 18892.8};
				script = "dyno_sp_fd07.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD08
	{
		color[] = {0.403922, 0.545098, 0.607843, 1};
		colorName = "blue";
		containersMagazines[] = {"BIS_ammoFD1_1", "BIS_ammoFD1_2", "BIS_ammoFD1_3"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_weaponsFD1"};
		decals[] = {{"BIS_FD_decal1", "a3\Missions_F_Beta\data\img\decals\decal_bonusB4_ca", 1}, {"BIS_FD_decal3", "a3\Missions_F_Beta\data\img\decals\decal_rifle4_ca", 2}, {"BIS_FD_decal6", "a3\Missions_F_Beta\data\img\decals\decal_watch_out4_ca", 3}, {"BIS_FD_decal7", "a3\Missions_F_Beta\data\img\decals\decal_bonusH4_ca", 1}};
		displayName = "CoF: Blue 3";
		leaderboard = "1134247";
		magazines[] = {"30Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag"};
		magazinesCompetitor[] = {"30Rnd_9x21_Mag", "9Rnd_45ACP_Mag"};
		objectCOF = "BIS_firingDrills1";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_FD_recolor12", "BIS_FD_recolor13", "BIS_FD_recolor14", "BIS_FD_recolor15", "BIS_FD_recolor16", "BIS_FD_recolor17", "BIS_FD_recolor18", "BIS_FD_recolor19", "BIS_FD_recolor20", "BIS_FD_recolor21", "BIS_FD_recolor22", "BIS_FD_recolor23", "BIS_FD_recolor24", "BIS_FD_recolor25", "BIS_FD_recolor26", "BIS_FD_recolor27", "BIS_FD_recolor28", "BIS_FD_recolor29", "BIS_FD_recolor30", "BIS_FD_recolor31", "BIS_FD_recolor32", "BIS_FD_recolor33", "BIS_FD_recolor34", "BIS_FD_recolor35", "BIS_FD_recolor36", "BIS_FD_recolor37", "BIS_FD_recolor38", "BIS_FD_recolor39", "BIS_FD_recolor40", "BIS_FD_recolor41", "BIS_FD_recolor42", "BIS_FD_recolor43", "BIS_FD_recolor44", "BIS_FD_recolor45", "BIS_FD_recolor46", "BIS_FD_recolor47", "BIS_FD_recolor48", "BIS_FD_recolor49", "BIS_FD_recolor50"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD08";
		timesMedals[] = {158.6, 149, 140.1};
		weapons[] = {"hgun_PDW2000_F", "arifle_Mk20C_plain_F", "hgun_ACPC2_F"};
		weaponsCompetitor[] = {"hgun_PDW2000_F", "hgun_ACPC2_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP10
			{
				object = "BIS_FD_CP10";
				shootingBoxes[] = {"BIS_FD_CP10_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus10_1";
						optional = 1;
						trigger = "BIS_FD_target10_7";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional10: Optional5
					{
						object = "BIS_FD_bonus10_10";
					};
					class Optional11: Optional5
					{
						object = "BIS_FD_bonus10_11";
					};
					class Optional12: Optional5
					{
						object = "BIS_FD_bonus10_12";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus10_2";
						trigger = "BIS_FD_target10_8";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus10_3";
						trigger = "BIS_FD_target10_13";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus10_4";
						trigger = "BIS_FD_target10_14";
					};
					class Optional5
					{
						bonus = 10;
						object = "BIS_FD_bonus10_5";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional6: Optional5
					{
						object = "BIS_FD_bonus10_6";
					};
					class Optional7: Optional5
					{
						object = "BIS_FD_bonus10_7";
					};
					class Optional8: Optional5
					{
						object = "BIS_FD_bonus10_8";
					};
					class Optional9: Optional5
					{
						object = "BIS_FD_bonus10_9";
					};
					class T1
					{
						object = "BIS_FD_target10_1";
						type = "PopUp_Acc1";
					};
					class T10: T7
					{
						chance = 0;
						object = "BIS_FD_target10_10";
					};
					class T11: T7
					{
						object = "BIS_FD_target10_11";
					};
					class T12: T7
					{
						object = "BIS_FD_target10_12";
					};
					class T13: T7
					{
						object = "BIS_FD_target10_13";
						trigger = "BIS_FD_target10_1";
					};
					class T14: T7
					{
						object = "BIS_FD_target10_14";
						trigger = "BIS_FD_target10_1";
					};
					class T15: T7
					{
						object = "BIS_FD_target10_15";
					};
					class T16
					{
						chance = 0.5;
						object = "BIS_FD_target10_16";
						type = "Steel_Plate";
					};
					class T17
					{
						object = "BIS_FD_target10_17";
						type = "Steel_Plate";
					};
					class T18: T17
					{
						chance = 0;
						object = "BIS_FD_target10_18";
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target10_2A", "BIS_FD_target10_2B"};
						object = "BIS_FD_target10_2";
						positions[] = {"BIS_FD_target10_2A", "BIS_FD_target10_2B"};
						trigger = "BIS_FD_target10_15";
					};
					class T3: T1
					{
						object = "BIS_FD_target10_3";
						positionsMove[] = {"BIS_FD_target10_3_WP1"};
						timesMove[] = {6};
						trigger = "BIS_FD_target10_11";
						upTime = 8;
					};
					class T4: T1
					{
						object = "BIS_FD_target10_4";
						positionsMove[] = {"BIS_FD_target10_4_WP1"};
						timesMove[] = {7};
						trigger = "BIS_FD_target10_12";
						upTime = 9;
					};
					class T5: T1
					{
						object = "BIS_FD_target10_5";
						positionsMove[] = {"BIS_FD_target10_5_WP1"};
						timesMove[] = {6.5};
						trigger = "BIS_FD_target10_11";
						upTime = 8.5;
					};
					class T6: T1
					{
						object = "BIS_FD_target10_6";
						positionsMove[] = {"BIS_FD_target10_6_WP1"};
						timesMove[] = {9};
						trigger = "BIS_FD_target10_12";
						upTime = 11;
					};
					class T7
					{
						object = "BIS_FD_target10_7";
						type = "PopUp_Oval";
					};
					class T8: T7
					{
						object = "BIS_FD_target10_8";
					};
					class T9: T7
					{
						object = "BIS_FD_target10_9";
					};
				};
			};
			class CP11
			{
				object = "BIS_FD_CP11";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				shootingBoxes[] = {"BIS_FD_CP2_Box"};
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_FD_target2_1A", "BIS_FD_target2_1B", "BIS_FD_target2_1C"};
						object = "BIS_FD_target2_1";
						positions[] = {"BIS_FD_target2_1A", "BIS_FD_target2_1B", "BIS_FD_target2_1C"};
						triggerTime = 0.5;
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target2_2A", "BIS_FD_target2_2B", "BIS_FD_target2_2C"};
						object = "BIS_FD_target2_2";
						positions[] = {"BIS_FD_target2_2A", "BIS_FD_target2_2B", "BIS_FD_target2_2C"};
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target2_3";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target2_3_WP1"};
						timesMove[] = {4};
						triggerTime = 0;
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				shootingBoxes[] = {"BIS_FD_CP3_Box"};
				stances[] = {"crouch"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target3_1";
						triggerTime = 0.7;
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.5;
						object = "BIS_FD_target3_2";
					};
					class T3: T1
					{
						directions[] = {"BIS_FD_target3_3A", "BIS_FD_target3_3B", "BIS_FD_target3_3C"};
						object = "BIS_FD_target3_3";
						positions[] = {"BIS_FD_target3_3A", "BIS_FD_target3_3B", "BIS_FD_target3_3C"};
					};
					class T4: T1
					{
						object = "BIS_FD_target3_4";
						positionsMove[] = {"BIS_FD_target3_4_WP1"};
						timesMove[] = {2.5};
						triggerTime = 0;
						upTime = 2.5;
					};
				};
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				class Targets
				{
					class NoShoot1
					{
						directions[] = {"BIS_FD_noShoot4_1A", "BIS_FD_noShoot4_1B"};
						noShoot = 1;
						object = "BIS_FD_noShoot4_1";
						positions[] = {"BIS_FD_noShoot4_1A", "BIS_FD_noShoot4_1B"};
					};
					class NoShoot2: NoShoot1
					{
						directions[] = {"BIS_FD_noShoot4_2A", "BIS_FD_noShoot4_2B"};
						object = "BIS_FD_noShoot4_2";
						positions[] = {"BIS_FD_noShoot4_2A", "BIS_FD_noShoot4_2B"};
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus4_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus4_2";
					};
					class T1
					{
						object = "BIS_FD_target4_1";
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target4_2A", "BIS_FD_target4_2B", "BIS_FD_target4_2C"};
						object = "BIS_FD_target4_2";
						positions[] = {"BIS_FD_target4_2A", "BIS_FD_target4_2B", "BIS_FD_target4_2C"};
					};
					class T3: T1
					{
						directions[] = {"BIS_FD_target4_3A", "BIS_FD_target4_3B"};
						object = "BIS_FD_target4_3";
						positions[] = {"BIS_FD_target4_3A", "BIS_FD_target4_3B"};
					};
					class T4: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target4_4A", "BIS_FD_target4_4B", "BIS_FD_target4_4C", "BIS_FD_target4_4D"};
						object = "BIS_FD_target4_4";
						positions[] = {"BIS_FD_target4_4A", "BIS_FD_target4_4B", "BIS_FD_target4_4C", "BIS_FD_target4_4D"};
						triggerTime = 1;
						upTime = 6;
					};
					class T5: T1
					{
						chance = 0.4;
						object = "BIS_FD_target4_5";
					};
				};
			};
			class CP5
			{
				object = "BIS_FD_CP5";
				shootingBoxes[] = {"BIS_FD_CP5_Box"};
				stances[] = {"crouch"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus5_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus5_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus5_3";
					};
					class T1
					{
						object = "BIS_FD_target5_1";
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.7;
						directions[] = {"BIS_FD_target5_2A", "BIS_FD_target5_2B", "BIS_FD_target5_2C"};
						object = "BIS_FD_target5_2";
						positions[] = {"BIS_FD_target5_2A", "BIS_FD_target5_2B", "BIS_FD_target5_2C"};
					};
					class T3: T1
					{
						chance = 0.5;
						object = "BIS_FD_target5_3";
						triggerTime = 1.5;
						upTime = 5;
					};
					class T4: T1
					{
						directions[] = {"BIS_FD_target5_4A", "BIS_FD_target5_4B"};
						object = "BIS_FD_target5_4";
						positions[] = {"BIS_FD_target5_4A", "BIS_FD_target5_4B"};
					};
					class T5: T1
					{
						chance = 0.7;
						object = "BIS_FD_target5_5";
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
				shootingBoxes[] = {"BIS_FD_CP6_Box"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot6_1";
					};
					class NoShoot2: NoShoot1
					{
						chance = 0.5;
						object = "BIS_FD_noShoot6_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot6_3";
					};
					class NoShoot4: NoShoot1
					{
						chance = 0.7;
						object = "BIS_FD_noShoot6_4";
					};
					class NoShoot5: NoShoot1
					{
						directions[] = {"BIS_FD_noShoot6_5A", "BIS_FD_noShoot6_5B", "BIS_FD_noShoot6_5C"};
						object = "BIS_FD_noShoot6_5";
						positions[] = {"BIS_FD_noShoot6_5A", "BIS_FD_noShoot6_5B", "BIS_FD_noShoot6_5C"};
					};
					class T1
					{
						directions[] = {"BIS_FD_target6_1A", "BIS_FD_target6_1B", "BIS_FD_target6_1C"};
						object = "BIS_FD_target6_1";
						positions[] = {"BIS_FD_target6_1A", "BIS_FD_target6_1B", "BIS_FD_target6_1C"};
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.3;
						directions[] = {};
						object = "BIS_FD_target6_2";
						positions[] = {};
					};
					class T3: T1
					{
						directions[] = {"BIS_FD_target6_3A", "BIS_FD_target6_3B", "BIS_FD_target6_3C"};
						object = "BIS_FD_target6_3";
						positions[] = {"BIS_FD_target6_3A", "BIS_FD_target6_3B", "BIS_FD_target6_3C"};
					};
					class T4: T1
					{
						chance = 0.7;
						directions[] = {};
						object = "BIS_FD_target6_4";
						positions[] = {};
						triggerTime = 1;
						upTime = 6;
					};
					class T5: T1
					{
						directions[] = {};
						object = "BIS_FD_target6_5";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target6_5_WP1"};
						timesMove[] = {5.5};
						triggerTime = 1.5;
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
			};
			class CP8
			{
				object = "BIS_FD_CP8";
				shootingBoxes[] = {"BIS_FD_CP8_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target8_1";
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						object = "BIS_FD_target8_2";
						triggerTime = 1;
						upTime = 7;
					};
					class T3: T1
					{
						chance = 0.7;
						directions[] = {"BIS_FD_target8_3A", "BIS_FD_target8_3B", "BIS_FD_target8_3C"};
						object = "BIS_FD_target8_3";
						positions[] = {"BIS_FD_target8_3A", "BIS_FD_target8_3B", "BIS_FD_target8_3C"};
					};
					class T4: T1
					{
						object = "BIS_FD_target8_4";
					};
				};
			};
			class CP9
			{
				object = "BIS_FD_CP9";
				shootingBoxes[] = {"BIS_FD_CP9_Box"};
				stances[] = {"stand"};
				class Targets
				{
					class T1
					{
						chance = 0.5;
						object = "BIS_FD_target9_1";
						triggerTime = 0.5;
						type = "PopUp_Acc1";
					};
					class T2
					{
						directions[] = {"BIS_FD_target9_2A", "BIS_FD_target9_2B", "BIS_FD_target9_2C", "BIS_FD_target9_2D"};
						object = "BIS_FD_target9_2";
						positions[] = {"BIS_FD_target9_2A", "BIS_FD_target9_2B", "BIS_FD_target9_2C", "BIS_FD_target9_2D"};
						type = "PopUp_Acc1";
					};
					class T3: T1
					{
						object = "BIS_FD_target9_3";
					};
				};
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {9311.95, 21978.5};
				script = "dyno_sp_fd08.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD09
	{
		binocularCompetitor = "Rangefinder";
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		containersMagazines[] = {"BIS_ammoFD1_1", "BIS_ammoFD1_2", "BIS_ammoFD1_3", "BIS_ammoFD1_4", "BIS_ammoFD1_5"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_weaponsFD1"};
		decals[] = {};
		displayName = "CoF: Orange 2";
		leaderboard = "1134248";
		magazines[] = {"7Rnd_408_Mag", "16Rnd_9x21_Mag"};
		magazinesCompetitor[] = {"7Rnd_408_Mag", "16Rnd_9x21_Mag"};
		objectCOF = "BIS_firingDrills1";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_FD_recolor12", "BIS_FD_recolor13", "BIS_FD_recolor14", "BIS_FD_recolor15", "BIS_FD_recolor16", "BIS_FD_recolor17", "BIS_FD_recolor18", "BIS_FD_recolor19", "BIS_FD_recolor20", "BIS_FD_recolor21", "BIS_FD_recolor22", "BIS_FD_recolor23", "BIS_FD_recolor24", "BIS_FD_recolor25", "BIS_FD_recolor26", "BIS_FD_recolor27", "BIS_FD_recolor28", "BIS_FD_recolor29", "BIS_FD_recolor30", "BIS_FD_recolor31", "BIS_FD_recolor32"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD09";
		timesMedals[] = {272.5, 256, 245.8};
		weapons[] = {"srifle_LRR_LRPS_F", "hgun_P07_F"};
		weaponsCompetitor[] = {"srifle_LRR_LRPS_F", "hgun_P07_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_FD_target2_1A", "BIS_FD_target2_1B", "BIS_FD_target2_1C"};
						object = "BIS_FD_target2_1";
						positions[] = {"BIS_FD_target2_1A", "BIS_FD_target2_1B", "BIS_FD_target2_1C"};
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target2_2A", "BIS_FD_target2_2B"};
						object = "BIS_FD_target2_2";
						positions[] = {"BIS_FD_target2_2A", "BIS_FD_target2_2B"};
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target2_3";
						positions[] = {};
						upTime = 7;
					};
					class T4: T1
					{
						directions[] = {};
						object = "BIS_FD_target2_4";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target2_4_WP1"};
						timesMove[] = {3.5};
					};
					class T5: T1
					{
						directions[] = {};
						object = "BIS_FD_target2_5";
						positions[] = {};
						triggerTime = 1.5;
					};
					class T6: T1
					{
						chance = 0.4;
						directions[] = {};
						object = "BIS_FD_target2_6";
						positions[] = {};
						triggerTime = 1.5;
						upTime = 5;
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				weapons[] = {"hgun_P07_F"};
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_FD_target3_1A", "BIS_FD_target3_1B", "BIS_FD_target3_1C"};
						object = "BIS_FD_target3_1";
						positions[] = {"BIS_FD_target3_1A", "BIS_FD_target3_1B", "BIS_FD_target3_1C"};
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target3_2A", "BIS_FD_target3_2B", "BIS_FD_target3_2C"};
						object = "BIS_FD_target3_2";
						positions[] = {"BIS_FD_target3_2A", "BIS_FD_target3_2B", "BIS_FD_target3_2C"};
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target3_3";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target3_3_WP1"};
						timesMove[] = {4.8};
						triggerTime = 0.5;
					};
				};
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target4_1";
						type = "PopUp_Acc1";
					};
					class T2: T1
					{
						chance = 0.7;
						object = "BIS_FD_target4_2";
					};
					class T3: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target4_3A", "BIS_FD_target4_3B", "BIS_FD_target4_3C"};
						heights[] = {92.2152, 87.5056, 87.5661};
						object = "BIS_FD_target4_3";
						positions[] = {"BIS_FD_target4_3A", "BIS_FD_target4_3B", "BIS_FD_target4_3C"};
						upTime = 8;
					};
					class T4: T1
					{
						object = "BIS_FD_target4_4";
						upTime = 9;
					};
					class T5: T1
					{
						chance = 0.4;
						object = "BIS_FD_target4_5";
						trigger = "BIS_FD_target4_4";
						upTime = 6;
					};
					class T6: T1
					{
						object = "BIS_FD_target4_6";
						positionsMove[] = {"BIS_FD_target4_6_WP1"};
						timesMove[] = {7.5};
						triggerTime = 1.5;
					};
					class T7: T1
					{
						object = "BIS_FD_target4_7";
						positionsMove[] = {"BIS_FD_target4_7_WP1"};
						timesMove[] = {9};
					};
					class T8: T1
					{
						directions[] = {"BIS_FD_target4_8A", "BIS_FD_target4_8B", "BIS_FD_target4_8C"};
						object = "BIS_FD_target4_8";
						positions[] = {"BIS_FD_target4_8A", "BIS_FD_target4_8B", "BIS_FD_target4_8C"};
					};
					class T9: T1
					{
						chance = 0.3;
						directions[] = {"BIS_FD_target4_9A", "BIS_FD_target4_9B", "BIS_FD_target4_9C"};
						object = "BIS_FD_target4_9";
						positions[] = {"BIS_FD_target4_9A", "BIS_FD_target4_9B", "BIS_FD_target4_9C"};
					};
				};
			};
			class CP5
			{
				object = "BIS_FD_CP5";
				shootingBoxes[] = {"BIS_FD_CP5_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target5_1";
						type = "PopUp_Acc2";
					};
					class T2: T1
					{
						object = "BIS_FD_target5_2";
						trigger = "BIS_FD_target5_1";
					};
					class T3: T1
					{
						object = "BIS_FD_target5_3";
						trigger = "BIS_FD_target5_2";
					};
					class T4: T1
					{
						object = "BIS_FD_target5_4";
						trigger = "BIS_FD_target5_3";
					};
					class T5: T1
					{
						chance = 0.5;
						object = "BIS_FD_target5_5";
						trigger = "BIS_FD_target5_4";
					};
					class T6: T1
					{
						directions[] = {"BIS_FD_target5_6A", "BIS_FD_target5_6B", "BIS_FD_target5_6C"};
						object = "BIS_FD_target5_6";
						positions[] = {"BIS_FD_target5_6A", "BIS_FD_target5_6B", "BIS_FD_target5_6C"};
						trigger = "BIS_FD_target5_4";
					};
					class T7: T1
					{
						object = "BIS_FD_target5_7";
						trigger = "BIS_FD_target5_4";
					};
					class T8: T1
					{
						chance = 0.5;
						object = "BIS_FD_target5_8";
						trigger = "BIS_FD_target5_4";
					};
					class T9: T1
					{
						directions[] = {"BIS_FD_target5_9A", "BIS_FD_target5_9B"};
						object = "BIS_FD_target5_9";
						positions[] = {"BIS_FD_target5_9A", "BIS_FD_target5_9B"};
						trigger = "BIS_FD_target5_4";
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
				shootingBoxes[] = {"BIS_FD_CP6_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target6_1";
						type = "PopUp_Acc2";
					};
					class T2: T1
					{
						chance = 0.4;
						directions[] = {"BIS_FD_target6_2A", "BIS_FD_target6_2B"};
						object = "BIS_FD_target6_2";
						positions[] = {"BIS_FD_target6_2A", "BIS_FD_target6_2B"};
					};
					class T3: T1
					{
						chance = 0.5;
						object = "BIS_FD_target6_3";
					};
					class T4: T1
					{
						object = "BIS_FD_target6_4";
						positionsMove[] = {"BIS_FD_target6_4_WP1"};
						timesMove[] = {20};
						trigger = "BIS_FD_target6_1";
					};
					class T5: T1
					{
						directions[] = {"BIS_FD_target6_5A", "BIS_FD_target6_5B", "BIS_FD_target6_5C"};
						object = "BIS_FD_target6_5";
						positions[] = {"BIS_FD_target6_5A", "BIS_FD_target6_5B", "BIS_FD_target6_5C"};
					};
					class T6: T1
					{
						chance = 0.6;
						object = "BIS_FD_target6_6";
					};
					class T7: T1
					{
						object = "BIS_FD_target6_7";
						positionsMove[] = {"BIS_FD_target6_7_WP1"};
						timesMove[] = {26};
					};
					class T8: T1
					{
						object = "BIS_FD_target6_8";
					};
					class T9: T1
					{
						directions[] = {"BIS_FD_target6_9A", "BIS_FD_target6_9B", "BIS_FD_target6_9C"};
						object = "BIS_FD_target6_9";
						positions[] = {"BIS_FD_target6_9A", "BIS_FD_target6_9B", "BIS_FD_target6_9C"};
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
				shootingBoxes[] = {"BIS_FD_CP7_Box"};
				stances[] = {"prone"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target7_1";
						type = "PopUp_Acc2";
					};
					class T10: T1
					{
						object = "BIS_FD_target7_10";
						positionsMove[] = {"BIS_FD_target7_10_WP1"};
						timesMove[] = {28};
						trigger = "BIS_FD_target7_7";
						upTime = 35;
					};
					class T11: T1
					{
						object = "BIS_FD_target7_11";
						trigger = "BIS_FD_target7_5";
					};
					class T12: T1
					{
						directions[] = {"BIS_FD_target7_12A", "BIS_FD_target7_12B", "BIS_FD_target7_12C"};
						object = "BIS_FD_target7_12";
						positions[] = {"BIS_FD_target7_12A", "BIS_FD_target7_12B", "BIS_FD_target7_12C"};
						trigger = "BIS_FD_target7_5";
					};
					class T13: T1
					{
						chance = 0.5;
						object = "BIS_FD_target7_13";
						trigger = "BIS_FD_target7_5";
					};
					class T14: T1
					{
						directions[] = {"BIS_FD_target7_14A", "BIS_FD_target7_14B"};
						object = "BIS_FD_target7_14";
						positions[] = {"BIS_FD_target7_14A", "BIS_FD_target7_14B"};
						trigger = "BIS_FD_target7_5";
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target7_2A", "BIS_FD_target7_2B", "BIS_FD_target7_2C"};
						object = "BIS_FD_target7_2";
						positions[] = {"BIS_FD_target7_2A", "BIS_FD_target7_2B", "BIS_FD_target7_2C"};
					};
					class T3: T1
					{
						chance = 0.4;
						object = "BIS_FD_target7_3";
					};
					class T4: T1
					{
						directions[] = {"BIS_FD_target7_4A", "BIS_FD_target7_4B"};
						object = "BIS_FD_target7_4";
						positions[] = {"BIS_FD_target7_4A", "BIS_FD_target7_4B"};
						upTime = 15;
					};
					class T5: T1
					{
						chance = 0.5;
						object = "BIS_FD_target7_5";
						trigger = "BIS_FD_target7_4";
					};
					class T6: T1
					{
						object = "BIS_FD_target7_6";
						trigger = "BIS_FD_target7_4";
					};
					class T7: T1
					{
						directions[] = {"BIS_FD_target7_7A", "BIS_FD_target7_7B", "BIS_FD_target7_7C"};
						object = "BIS_FD_target7_7";
						positions[] = {"BIS_FD_target7_7A", "BIS_FD_target7_7B", "BIS_FD_target7_7C"};
						trigger = "BIS_FD_target7_4";
					};
					class T8: T1
					{
						object = "BIS_FD_target7_8";
						trigger = "BIS_FD_target7_4";
					};
					class T9: T1
					{
						object = "BIS_FD_target7_9";
						positionsMove[] = {"BIS_FD_target7_9_WP1"};
						timesMove[] = {22};
						trigger = "BIS_FD_target7_8";
						upTime = 30;
					};
				};
			};
			class CP8
			{
				object = "BIS_FD_CP8";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {12479.8, 16098.1};
				script = "dyno_sp_fd09.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD10
	{
		binocularCompetitor = "Rangefinder";
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		containersMagazines[] = {"BIS_ammoFD1_1", "BIS_ammoFD1_2", "BIS_ammoFD1_3", "BIS_ammoFD1_4"};
		containersMagazinesCount[] = {10, 10, 10};
		containersWeapons[] = {"BIS_weaponsFD1", "BIS_weaponsFD2"};
		decals[] = {};
		displayName = "CoF: Orange 3";
		leaderboard = "1134249";
		magazines[] = {"20Rnd_762x51_Mag", "5Rnd_127x108_Mag", "16Rnd_9x21_Mag"};
		magazinesCompetitor[] = {"20Rnd_762x51_Mag", "16Rnd_9x21_Mag"};
		objectCOF = "BIS_firingDrills1";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_FD_recolor12", "BIS_FD_recolor13", "BIS_FD_recolor14", "BIS_FD_recolor15", "BIS_FD_recolor16", "BIS_FD_recolor17", "BIS_FD_recolor18", "BIS_FD_recolor19", "BIS_FD_recolor20", "BIS_FD_recolor21", "BIS_FD_recolor22", "BIS_FD_recolor23", "BIS_FD_recolor24", "BIS_FD_recolor25", "BIS_FD_recolor26", "BIS_FD_recolor27", "BIS_FD_recolor28", "BIS_FD_recolor29", "BIS_FD_recolor30"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD10";
		timesMedals[] = {288, 261.5, 240};
		weapons[] = {"srifle_EBR_ARCO_pointer_F", "srifle_GM6_LRPS_F", "hgun_Rook40_F"};
		weaponsCompetitor[] = {"srifle_EBR_ARCO_pointer_F", "hgun_P07_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				shootingBoxes[] = {"BIS_FD_CP2_Box"};
				stances[] = {"crouch"};
				weapons[] = {"srifle_EBR_ARCO_pointer_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target2_1";
						type = "PopUp_Acc2";
					};
					class T10: T1
					{
						object = "BIS_FD_target2_10";
						trigger = "BIS_FD_target2_6";
						upTime = 10;
					};
					class T11: T1
					{
						object = "BIS_FD_target2_11";
						positionsMove[] = {"BIS_FD_target2_11_WP1"};
						timesMove[] = {18};
						trigger = "BIS_FD_target2_10";
					};
					class T2: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target2_2A", "BIS_FD_target2_2B", "BIS_FD_target2_2C"};
						object = "BIS_FD_target2_2";
						positions[] = {"BIS_FD_target2_2A", "BIS_FD_target2_2B", "BIS_FD_target2_2C"};
					};
					class T3: T1
					{
						directions[] = {"BIS_FD_target2_3A", "BIS_FD_target2_3B"};
						object = "BIS_FD_target2_3";
						positions[] = {"BIS_FD_target2_3A", "BIS_FD_target2_3B"};
					};
					class T4: T1
					{
						chance = 0.4;
						directions[] = {"BIS_FD_target2_4A", "BIS_FD_target2_4B"};
						object = "BIS_FD_target2_4";
						positions[] = {"BIS_FD_target2_4A", "BIS_FD_target2_4B"};
						trigger = "BIS_FD_target2_3";
					};
					class T5: T1
					{
						directions[] = {"BIS_FD_target2_5A", "BIS_FD_target2_5B"};
						object = "BIS_FD_target2_5";
						positions[] = {"BIS_FD_target2_5A", "BIS_FD_target2_5B"};
						trigger = "BIS_FD_target2_3";
					};
					class T6: T1
					{
						object = "BIS_FD_target2_6";
						trigger = "BIS_FD_target2_3";
					};
					class T7: T1
					{
						object = "BIS_FD_target2_7";
						positionsMove[] = {"BIS_FD_target2_7_WP1"};
						timesMove[] = {12};
						trigger = "BIS_FD_target2_8";
					};
					class T8: T1
					{
						object = "BIS_FD_target2_8";
						trigger = "BIS_FD_target2_6";
					};
					class T9: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target2_9A", "BIS_FD_target2_9B", "BIS_FD_target2_9C"};
						object = "BIS_FD_target2_9";
						positions[] = {"BIS_FD_target2_9A", "BIS_FD_target2_9B", "BIS_FD_target2_9C"};
						trigger = "BIS_FD_target2_6";
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				shootingBoxes[] = {"BIS_FD_CP3_Box"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target3_1";
						type = "PopUp_Acc2";
					};
					class T10: T1
					{
						chance = 0.5;
						object = "BIS_FD_target3_10";
					};
					class T11: T1
					{
						directions[] = {"BIS_FD_target3_11A", "BIS_FD_target3_11B", "BIS_FD_target3_11C"};
						object = "BIS_FD_target3_11";
						positions[] = {"BIS_FD_target3_11A", "BIS_FD_target3_11B", "BIS_FD_target3_11C"};
					};
					class T12: T1
					{
						chance = 0.5;
						object = "BIS_FD_target3_12";
					};
					class T2: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target3_2A", "BIS_FD_target3_2B"};
						object = "BIS_FD_target3_2";
						positions[] = {"BIS_FD_target3_2A", "BIS_FD_target3_2B"};
					};
					class T3: T1
					{
						object = "BIS_FD_target3_3";
					};
					class T4: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target3_4A", "BIS_FD_target3_4B", "BIS_FD_target3_4C"};
						object = "BIS_FD_target3_4";
						positions[] = {"BIS_FD_target3_4A", "BIS_FD_target3_4B", "BIS_FD_target3_4C"};
					};
					class T5: T1
					{
						object = "BIS_FD_target3_5";
					};
					class T6: T1
					{
						object = "BIS_FD_target3_6";
					};
					class T7: T1
					{
						object = "BIS_FD_target3_7";
					};
					class T8: T1
					{
						chance = 0.7;
						object = "BIS_FD_target3_8";
					};
					class T9: T1
					{
						object = "BIS_FD_target3_9";
					};
				};
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot4_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot4_2";
					};
					class NoShoot3: NoShoot1
					{
						chance = 0.5;
						object = "BIS_FD_noShoot4_3";
					};
					class T1
					{
						object = "BIS_FD_target4_1";
						type = "PopUp_Acc2";
					};
					class T2: T1
					{
						chance = 0.4;
						object = "BIS_FD_target4_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target4_3";
						positionsMove[] = {"BIS_FD_target4_3_WP1"};
						timesMove[] = {30};
					};
					class T4: T1
					{
						object = "BIS_FD_target4_4";
						positionsMove[] = {"BIS_FD_target4_4_WP1"};
						timesMove[] = {12};
						trigger = "BIS_FD_target4_3";
					};
					class T5: T1
					{
						object = "BIS_FD_target4_5";
						trigger = "BIS_FD_target4_3";
					};
					class T6: T1
					{
						object = "BIS_FD_target4_6";
						trigger = "BIS_FD_target4_3";
					};
				};
			};
			class CP5
			{
				object = "BIS_FD_CP5";
				shootingBoxes[] = {"BIS_FD_CP5_Box"};
				stances[] = {"prone"};
				weapons[] = {"srifle_GM6_LRPS_F"};
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_FD_target5_1A", "BIS_FD_target5_1B", "BIS_FD_target5_1C"};
						object = "BIS_FD_target5_1";
						positions[] = {"BIS_FD_target5_1A", "BIS_FD_target5_1B", "BIS_FD_target5_1C"};
						type = "PopUp_Acc2";
					};
					class T2: T1
					{
						chance = 0.6;
						directions[] = {};
						object = "BIS_FD_target5_2";
						positions[] = {};
						upTime = 10;
					};
					class T3: T1
					{
						directions[] = {"BIS_FD_target5_3A", "BIS_FD_target5_3B", "BIS_FD_target5_3C"};
						object = "BIS_FD_target5_3";
						positions[] = {"BIS_FD_target5_3A", "BIS_FD_target5_3B", "BIS_FD_target5_3C"};
					};
					class T4: T1
					{
						directions[] = {};
						object = "BIS_FD_target5_4";
						positions[] = {};
						triggerTime = 3;
						upTime = 10;
					};
					class T5: T1
					{
						chance = 0.7;
						directions[] = {};
						object = "BIS_FD_target5_5";
						positions[] = {};
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {11471.7, 8698.91};
				script = "dyno_sp_fd10.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD11
	{
		color[] = {0.690196, 0.25098, 0.654902, 1};
		colorName = "purple";
		containersMagazines[] = {"BIS_FD_ammo1", "BIS_FD_ammo2", "BIS_FD_ammo3", "BIS_FD_ammo4"};
		containersMagazinesCount[] = {10, 3, 5};
		containersWeapons[] = {"BIS_FD_weapons1"};
		decals[] = {};
		displayName = "CoF: Purple 1";
		leaderboard = "1134250";
		magazines[] = {"20Rnd_762x51_Mag", "130Rnd_338_Mag", "16Rnd_9x21_Mag"};
		magazinesCompetitor[] = {"20Rnd_762x51_Mag", "16Rnd_9x21_Mag"};
		objectCOF = "BIS_firingDrills1";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_FD_recolor12", "BIS_FD_recolor13", "BIS_FD_recolor14", "BIS_FD_recolor15", "BIS_FD_recolor16", "BIS_FD_recolor17", "BIS_FD_recolor18", "BIS_FD_recolor19", "BIS_FD_recolor20", "BIS_FD_recolor21", "BIS_FD_recolor22", "BIS_FD_recolor23", "BIS_FD_recolor24", "BIS_FD_recolor25", "BIS_FD_recolor26", "BIS_FD_recolor27", "BIS_FD_recolor28", "BIS_FD_recolor29", "BIS_FD_recolor30", "BIS_FD_recolor31", "BIS_FD_recolor32", "BIS_FD_recolor33", "BIS_FD_recolor34", "BIS_FD_recolor35", "BIS_FD_recolor36"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD11";
		timesMedals[] = {277.1, 238, 209.5};
		weapons[] = {"srifle_DMR_03_AMS_F", "MMG_02_black_RCO_BI_F", "hgun_P07_F"};
		weaponsCompetitor[] = {"srifle_DMR_03_AMS_F", "hgun_P07_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				shootingBoxes[] = {"BIS_FD_CP2_Box"};
				stances[] = {"stand"};
				weapons[] = {"srifle_DMR_03_AMS_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus2_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus2_2";
					};
					class T1
					{
						object = "BIS_FD_target2_1";
						type = "PopUp_Acc1";
						upTime = 4;
					};
					class T2: T1
					{
						object = "BIS_FD_target2_2";
						upTime = 5;
					};
					class T3: T1
					{
						object = "BIS_FD_target2_3";
						trigger[] = {"BIS_FD_target2_1", "BIS_FD_target2_2"};
						upTime = 6;
					};
					class T4: T3
					{
						directions[] = {"BIS_FD_target2_4A", "BIS_FD_target2_4B"};
						object = "BIS_FD_target2_4";
						positions[] = {"BIS_FD_target2_4A", "BIS_FD_target2_4B"};
						upTime = 6.5;
					};
					class T5: T3
					{
						directions[] = {"BIS_FD_target2_5A", "BIS_FD_target2_5B", "BIS_FD_target2_5C"};
						object = "BIS_FD_target2_5";
						positions[] = {"BIS_FD_target2_5A", "BIS_FD_target2_5B", "BIS_FD_target2_5C"};
						triggerTime = 2;
						upTime = 8;
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				shootingBoxes[] = {"BIS_FD_CP3_Box"};
				stances[] = {"crouch"};
				weapons[] = {"srifle_DMR_03_AMS_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus3_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional10: Optional8
					{
						object = "BIS_FD_bonus3_10";
					};
					class Optional11: Optional8
					{
						object = "BIS_FD_bonus3_11";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus3_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus3_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus3_4";
					};
					class Optional5: Optional1
					{
						object = "BIS_FD_bonus3_5";
					};
					class Optional6: Optional1
					{
						object = "BIS_FD_bonus3_6";
					};
					class Optional7: Optional1
					{
						object = "BIS_FD_bonus3_7";
					};
					class Optional8
					{
						bonus = 5;
						object = "BIS_FD_bonus3_8";
						optional = 1;
						type = "Balloon";
					};
					class Optional9: Optional8
					{
						object = "BIS_FD_bonus3_9";
					};
					class T1
					{
						object = "BIS_FD_target3_1";
						type = "PopUp_Acc1";
						upTime = 8;
					};
					class T10: T8
					{
						object = "BIS_FD_target3_10";
						triggerTime = 5;
						upTime = 12;
					};
					class T11: T8
					{
						object = "BIS_FD_target3_11";
						upTime = 10.5;
					};
					class T12: T8
					{
						directions[] = {"BIS_FD_target3_12A", "BIS_FD_target3_12B", "BIS_FD_target3_12C"};
						object = "BIS_FD_target3_12";
						positions[] = {"BIS_FD_target3_12A", "BIS_FD_target3_12B", "BIS_FD_target3_12C"};
						triggerTime = 5;
					};
					class T13
					{
						object = "BIS_FD_target3_13";
						trigger[] = {"BIS_FD_target3_8", "BIS_FD_target3_9", "BIS_FD_target3_10", "BIS_FD_target3_11", "BIS_FD_target3_12"};
						triggerTime = 2;
						type = "Swivel";
						upTime = 20;
					};
					class T14: T1
					{
						object = "BIS_FD_target3_14";
						positionsMove[] = {"BIS_FD_target3_14_WP1"};
						timesMove[] = {10};
						trigger[] = {"BIS_FD_target3_8", "BIS_FD_target3_9", "BIS_FD_target3_10", "BIS_FD_target3_11", "BIS_FD_target3_12"};
						triggerTime = 4;
						upTime = 10;
					};
					class T2: T1
					{
						object = "BIS_FD_target3_2";
					};
					class T3: T1
					{
						directions[] = {"BIS_FD_target3_3A", "BIS_FD_target3_3B"};
						object = "BIS_FD_target3_3";
						positions[] = {"BIS_FD_target3_3A", "BIS_FD_target3_3B"};
						upTime = 9;
					};
					class T4: T1
					{
						object = "BIS_FD_target3_4";
						positionsMove[] = {"BIS_FD_target3_4_WP1"};
						timesMove[] = {5};
						trigger[] = {"BIS_FD_target3_1", "BIS_FD_target3_2", "BIS_FD_target3_3"};
						triggerTime = 3;
						upTime = 5;
					};
					class T5: T4
					{
						object = "BIS_FD_target3_5";
						positionsMove[] = {"BIS_FD_target3_5_WP1"};
					};
					class T6: T4
					{
						directions[] = {"BIS_FD_target3_6A", "BIS_FD_target3_6B", "BIS_FD_target3_6C"};
						object = "BIS_FD_target3_6";
						positions[] = {"BIS_FD_target3_6A", "BIS_FD_target3_6B", "BIS_FD_target3_6C"};
						positionsMove[] = {};
						timesMove[] = {};
						triggerTime = 0;
						upTime = 9;
					};
					class T7: T4
					{
						directions[] = {"BIS_FD_target3_7A", "BIS_FD_target3_7B"};
						object = "BIS_FD_target3_7";
						positions[] = {"BIS_FD_target3_7A", "BIS_FD_target3_7B"};
						positionsMove[] = {};
						timesMove[] = {};
						triggerTime = 0;
						upTime = 10.5;
					};
					class T8: T1
					{
						object = "BIS_FD_target3_8";
						trigger[] = {"BIS_FD_target3_4", "BIS_FD_target3_5", "BIS_FD_target3_6", "BIS_FD_target3_7"};
						triggerTime = 3;
						upTime = 9.5;
					};
					class T9: T8
					{
						directions[] = {"BIS_FD_target3_9A", "BIS_FD_target3_9B"};
						object = "BIS_FD_target3_9";
						positions[] = {"BIS_FD_target3_9A", "BIS_FD_target3_9B"};
						upTime = 12;
					};
				};
			};
			class CP3A
			{
				object = "BIS_FD_CP3A";
				class Targets
				{
					class Optional12
					{
						bonus = 10;
						object = "BIS_FD_bonus3_12";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional13: Optional12
					{
						object = "BIS_FD_bonus3_13";
					};
					class Optional14: Optional12
					{
						object = "BIS_FD_bonus3_14";
					};
					class Optional15: Optional12
					{
						object = "BIS_FD_bonus3_15";
					};
					class Optional16: Optional12
					{
						object = "BIS_FD_bonus3_16";
					};
					class Optional17: Optional12
					{
						object = "BIS_FD_bonus3_17";
					};
					class Optional18
					{
						bonus = 5;
						object = "BIS_FD_bonus3_18";
						optional = 1;
						type = "Balloon";
					};
					class Optional19: Optional18
					{
						object = "BIS_FD_bonus3_19";
					};
					class Optional20: Optional18
					{
						object = "BIS_FD_bonus3_20";
					};
					class Optional21: Optional18
					{
						object = "BIS_FD_bonus3_21";
					};
					class Optional22: Optional18
					{
						object = "BIS_FD_bonus3_22";
					};
					class Optional23: Optional18
					{
						object = "BIS_FD_bonus3_23";
					};
					class Optional24: Optional12
					{
						object = "BIS_FD_bonus3_24";
					};
					class Optional25: Optional12
					{
						object = "BIS_FD_bonus3_25";
					};
					class Optional26: Optional12
					{
						object = "BIS_FD_bonus3_26";
					};
					class Optional27: Optional18
					{
						object = "BIS_FD_bonus3_27";
					};
					class Optional28: Optional18
					{
						object = "BIS_FD_bonus3_28";
					};
					class Optional29: Optional18
					{
						object = "BIS_FD_bonus3_29";
					};
				};
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				shootingBoxes[] = {"BIS_FD_CP4_Box"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus4_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus4_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus4_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus4_4";
					};
					class Optional5
					{
						bonus = 5;
						object = "BIS_FD_bonus4_5";
						optional = 1;
						type = "Balloon";
					};
					class Optional6: Optional5
					{
						object = "BIS_FD_bonus4_6";
					};
					class Optional7: Optional5
					{
						object = "BIS_FD_bonus4_7";
					};
					class Optional8: Optional5
					{
						object = "BIS_FD_bonus4_8";
					};
					class T1
					{
						directions[] = {"BIS_FD_target4_1A", "BIS_FD_target4_1B", "BIS_FD_target4_1C"};
						object = "BIS_FD_target4_1";
						positions[] = {"BIS_FD_target4_1A", "BIS_FD_target4_1B", "BIS_FD_target4_1C"};
						type = "PopUp";
						upTime = 30;
					};
					class T10: T7
					{
						object = "BIS_FD_target4_10";
					};
					class T11: T7
					{
						object = "BIS_FD_target4_11";
					};
					class T12: T7
					{
						object = "BIS_FD_target4_12";
					};
					class T13: T1
					{
						directions[] = {};
						object = "BIS_FD_target4_13";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target4_13_WP1"};
						timesMove[] = {26};
						trigger[] = {"BIS_FD_target4_7", "BIS_FD_target4_8", "BIS_FD_target4_9", "BIS_FD_target4_10", "BIS_FD_target4_11", "BIS_FD_target4_12"};
						triggerTime = 3;
						upTime = 36;
					};
					class T14: T13
					{
						object = "BIS_FD_target4_14";
						positionsMove[] = {"BIS_FD_target4_14_WP1"};
						timesMove[] = {24};
						upTime = 34;
					};
					class T15: T13
					{
						object = "BIS_FD_target4_15";
						positionsMove[] = {"BIS_FD_target4_15_WP1"};
						timesMove[] = {24};
						upTime = 34;
					};
					class T16: T13
					{
						object = "BIS_FD_target4_16";
						positionsMove[] = {"BIS_FD_target4_16_WP1"};
						timesMove[] = {29};
						upTime = 39;
					};
					class T17: T13
					{
						object = "BIS_FD_target4_17";
						positionsMove[] = {"BIS_FD_target4_17_WP1"};
						timesMove[] = {28.5};
						upTime = 38.5;
					};
					class T18: T13
					{
						object = "BIS_FD_target4_18";
						positionsMove[] = {"BIS_FD_target4_18_WP1"};
					};
					class T19: T13
					{
						object = "BIS_FD_target4_19";
						positionsMove[] = {"BIS_FD_target4_19_WP1"};
					};
					class T2: T1
					{
						directions[] = {};
						object = "BIS_FD_target4_2";
						positions[] = {};
					};
					class T20: T13
					{
						object = "BIS_FD_target4_20";
						positionsMove[] = {"BIS_FD_target4_20_WP1"};
						timesMove[] = {30};
						upTime = 40;
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target4_3";
						positions[] = {};
						upTime = 32;
					};
					class T4: T1
					{
						directions[] = {};
						object = "BIS_FD_target4_4";
						positions[] = {};
					};
					class T5: T1
					{
						directions[] = {"BIS_FD_target4_5A", "BIS_FD_target4_5B", "BIS_FD_target4_5C"};
						object = "BIS_FD_target4_5";
						positions[] = {"BIS_FD_target4_5A", "BIS_FD_target4_5B", "BIS_FD_target4_5C"};
						upTime = 30.5;
					};
					class T6: T1
					{
						directions[] = {};
						object = "BIS_FD_target4_6";
						positions[] = {};
					};
					class T7: T1
					{
						directions[] = {};
						object = "BIS_FD_target4_7";
						positions[] = {};
						trigger[] = {"BIS_FD_target4_1", "BIS_FD_target4_2", "BIS_FD_target4_3", "BIS_FD_target4_4", "BIS_FD_target4_5", "BIS_FD_target4_6"};
						triggerTime = 1;
						upTime = 22;
					};
					class T8: T7
					{
						object = "BIS_FD_target4_8";
					};
					class T9: T7
					{
						object = "BIS_FD_target4_9";
					};
				};
			};
			class CP5
			{
				object = "BIS_FD_CP5";
				shootingBoxes[] = {"BIS_FD_CP5_Box"};
				stances[] = {"crouch"};
				weapons[] = {"MMG_02_black_RCO_BI_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot5_1";
					};
					class NoShoot10: NoShoot6
					{
						object = "BIS_FD_noShoot5_10";
						positionsMove[] = {"BIS_FD_noShoot5_10_WP1"};
						timesMove[] = {26};
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot5_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot5_3";
					};
					class NoShoot4: NoShoot1
					{
						object = "BIS_FD_noShoot5_4";
					};
					class NoShoot5: NoShoot1
					{
						object = "BIS_FD_noShoot5_5";
					};
					class NoShoot6: NoShoot1
					{
						object = "BIS_FD_noShoot5_6";
						positionsMove[] = {"BIS_FD_noShoot5_6_WP1"};
						timesMove[] = {22};
						trigger = "BIS_FD_target5_5";
					};
					class NoShoot7: NoShoot6
					{
						object = "BIS_FD_noShoot5_7";
						positionsMove[] = {"BIS_FD_noShoot5_7_WP1"};
						timesMove[] = {24};
					};
					class NoShoot8: NoShoot6
					{
						object = "BIS_FD_noShoot5_8";
						positionsMove[] = {"BIS_FD_noShoot5_8_WP1"};
					};
					class NoShoot9: NoShoot6
					{
						object = "BIS_FD_noShoot5_9";
						positionsMove[] = {"BIS_FD_noShoot5_9_WP1"};
						timesMove[] = {26};
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus5_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional10: Optional3
					{
						object = "BIS_FD_bonus5_10";
					};
					class Optional11: Optional3
					{
						object = "BIS_FD_bonus5_11";
					};
					class Optional12: Optional3
					{
						object = "BIS_FD_bonus5_12";
					};
					class Optional13: Optional3
					{
						object = "BIS_FD_bonus5_13";
					};
					class Optional14: Optional3
					{
						object = "BIS_FD_bonus5_14";
					};
					class Optional15: Optional3
					{
						object = "BIS_FD_bonus5_15";
					};
					class Optional16: Optional3
					{
						object = "BIS_FD_bonus5_16";
					};
					class Optional17: Optional3
					{
						object = "BIS_FD_bonus5_17";
					};
					class Optional18: Optional3
					{
						object = "BIS_FD_bonus5_18";
					};
					class Optional19: Optional3
					{
						object = "BIS_FD_bonus5_19";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus5_2";
					};
					class Optional20: Optional3
					{
						object = "BIS_FD_bonus5_20";
					};
					class Optional21: Optional3
					{
						object = "BIS_FD_bonus5_22";
					};
					class Optional22: Optional3
					{
						object = "BIS_FD_bonus5_22";
					};
					class Optional23: Optional3
					{
						object = "BIS_FD_bonus5_23";
					};
					class Optional3
					{
						bonus = 5;
						object = "BIS_FD_bonus5_3";
						optional = 1;
						type = "Balloon";
					};
					class Optional4: Optional3
					{
						object = "BIS_FD_bonus5_4";
					};
					class Optional5: Optional3
					{
						object = "BIS_FD_bonus5_5";
					};
					class Optional6: Optional3
					{
						object = "BIS_FD_bonus5_6";
					};
					class Optional7: Optional3
					{
						object = "BIS_FD_bonus5_7";
					};
					class Optional8: Optional3
					{
						object = "BIS_FD_bonus5_8";
					};
					class Optional9: Optional3
					{
						object = "BIS_FD_bonus5_9";
					};
					class T1
					{
						object = "BIS_FD_target5_1";
						type = "PopUp";
						upTime = 9;
					};
					class T10: T6
					{
						directions[] = {"BIS_FD_target5_10A", "BIS_FD_target5_10B"};
						object = "BIS_FD_target5_10";
						positions[] = {"BIS_FD_target5_10A", "BIS_FD_target5_10B"};
					};
					class T11: T6
					{
						chance = 0.8;
						directions[] = {};
						object = "BIS_FD_target5_11";
						positions[] = {};
						upTime = 22.5;
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target5_2A", "BIS_FD_target5_2B"};
						object = "BIS_FD_target5_2";
						positions[] = {"BIS_FD_target5_2A", "BIS_FD_target5_2B"};
					};
					class T3: T1
					{
						object = "BIS_FD_target5_3";
						upTime = 10.5;
					};
					class T4: T1
					{
						object = "BIS_FD_target5_4";
						triggerTime = 4;
						upTime = 10;
					};
					class T5: T1
					{
						object = "BIS_FD_target5_5";
						triggerTime = 4;
					};
					class T6: T1
					{
						directions[] = {"BIS_FD_target5_6A", "BIS_FD_target5_6B"};
						object = "BIS_FD_target5_6";
						positions[] = {"BIS_FD_target5_6A", "BIS_FD_target5_6B"};
						trigger[] = {"BIS_FD_target5_1", "BIS_FD_target5_2", "BIS_FD_target5_3", "BIS_FD_target5_4", "BIS_FD_target5_5"};
						triggerTime = 2;
						upTime = 22;
					};
					class T7: T6
					{
						chance = 0.7;
						directions[] = {"BIS_FD_target5_7A", "BIS_FD_target5_7B"};
						object = "BIS_FD_target5_7";
						positions[] = {"BIS_FD_target5_7A", "BIS_FD_target5_7B"};
					};
					class T8: T6
					{
						directions[] = {};
						object = "BIS_FD_target5_8";
						positions[] = {};
						upTime = 24;
					};
					class T9: T6
					{
						directions[] = {};
						object = "BIS_FD_target5_9";
						positions[] = {};
						upTime = 24;
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
				shootingBoxes[] = {"BIS_FD_CP6_Box"};
				stances[] = {"prone"};
				weapons[] = {"MMG_02_black_RCO_BI_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot6_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot6_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot6_3";
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus6_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus6_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus6_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus6_4";
					};
					class Optional5: Optional1
					{
						object = "BIS_FD_bonus6_5";
					};
					class Optional6: Optional1
					{
						object = "BIS_FD_bonus6_6";
					};
					class Optional7
					{
						bonus = 5;
						object = "BIS_FD_bonus6_7";
						optional = 1;
						type = "Balloon";
					};
					class Optional8: Optional7
					{
						object = "BIS_FD_bonus6_8";
					};
					class T1
					{
						object = "BIS_FD_target6_1";
						positionsMove[] = {"BIS_FD_target6_1_WP1"};
						timesMove[] = {10};
						type = "PopUp";
						upTime = 10;
					};
					class T10: T8
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target6_10A", "BIS_FD_target6_10B"};
						object = "BIS_FD_target6_10";
						positions[] = {"BIS_FD_target6_10A", "BIS_FD_target6_10B"};
						positionsMove[] = {};
						timesMove[] = {};
						upTime = 24;
					};
					class T11: T8
					{
						chance = 0.3;
						object = "BIS_FD_target6_11";
						positionsMove[] = {};
						timesMove[] = {};
					};
					class T12: T8
					{
						object = "BIS_FD_target6_12";
						positionsMove[] = {};
						timesMove[] = {};
					};
					class T13: T8
					{
						chance = 0.8;
						object = "BIS_FD_target6_13";
						positionsMove[] = {};
						timesMove[] = {};
						upTime = 29;
					};
					class T14: T8
					{
						object = "BIS_FD_target6_14";
						positionsMove[] = {};
						timesMove[] = {};
						upTime = 28.5;
					};
					class T15: T8
					{
						directions[] = {"BIS_FD_target6_15A", "BIS_FD_target6_15B", "BIS_FD_target6_15C"};
						object = "BIS_FD_target6_15";
						positions[] = {"BIS_FD_target6_15A", "BIS_FD_target6_15B", "BIS_FD_target6_15C"};
						positionsMove[] = {};
						timesMove[] = {};
					};
					class T16: T8
					{
						chance = 0.6;
						object = "BIS_FD_target6_16";
						positionsMove[] = {};
						timesMove[] = {};
						triggerTime = 9;
					};
					class T17: T8
					{
						directions[] = {"BIS_FD_target6_17A", "BIS_FD_target6_17B"};
						object = "BIS_FD_target6_17";
						positions[] = {"BIS_FD_target6_17A", "BIS_FD_target6_17B"};
						positionsMove[] = {};
						timesMove[] = {};
						triggerTime = 9;
					};
					class T18: T8
					{
						object = "BIS_FD_target6_18";
						positionsMove[] = {"BIS_FD_target6_18_WP1"};
						timesMove[] = {16};
						triggerTime = 12;
						upTime = 23;
					};
					class T19: T8
					{
						directions[] = {"BIS_FD_target6_19A", "BIS_FD_target6_19B"};
						object = "BIS_FD_target6_19";
						positions[] = {"BIS_FD_target6_19A", "BIS_FD_target6_19B"};
						positionsMove[] = {};
						timesMove[] = {};
					};
					class T1A: T1
					{
						object = "BIS_FD_target6_1A";
						positionsMove[] = {"BIS_FD_target6_1A_WP1"};
						timesMove[] = {9};
						triggerTime = 4;
						upTime = 9;
					};
					class T2: T1
					{
						object = "BIS_FD_target6_2";
						positionsMove[] = {"BIS_FD_target6_2_WP1"};
					};
					class T20: T8
					{
						chance = 0.7;
						object = "BIS_FD_target6_20";
						positionsMove[] = {};
						timesMove[] = {};
					};
					class T21: T8
					{
						directions[] = {"BIS_FD_target6_21A", "BIS_FD_target6_21B"};
						object = "BIS_FD_target6_21";
						positions[] = {"BIS_FD_target6_21A", "BIS_FD_target6_21B"};
						positionsMove[] = {};
						timesMove[] = {};
						triggerTime = 15;
						upTime = 44;
					};
					class T22: T8
					{
						object = "BIS_FD_target6_22";
						positionsMove[] = {"BIS_FD_target6_22_WP1"};
						timesMove[] = {29};
						triggerTime = 15;
						upTime = 44;
					};
					class T2A: T1
					{
						object = "BIS_FD_target6_2A";
						positionsMove[] = {"BIS_FD_target6_2A_WP1"};
						timesMove[] = {9.5};
						triggerTime = 4;
						upTime = 9.5;
					};
					class T3: T1
					{
						object = "BIS_FD_target6_3";
						positionsMove[] = {"BIS_FD_target6_3_WP1"};
						timesMove[] = {12};
						triggerTime = 8;
						upTime = 12;
					};
					class T4: T1
					{
						object = "BIS_FD_target6_4";
						positionsMove[] = {"BIS_FD_target6_4_WP1"};
						timesMove[] = {12};
						triggerTime = 8;
						upTime = 12;
					};
					class T5: T1
					{
						object = "BIS_FD_target6_5";
						positionsMove[] = {"BIS_FD_target6_5_WP1"};
						timesMove[] = {11};
						triggerTime = 8;
						upTime = 11;
					};
					class T6: T1
					{
						object = "BIS_FD_target6_6";
						positionsMove[] = {"BIS_FD_target6_6_WP1"};
						timesMove[] = {12.5};
						triggerTime = 8.5;
						upTime = 12.5;
					};
					class T7: T1
					{
						object = "BIS_FD_target6_7";
						positionsMove[] = {"BIS_FD_target6_7_WP1"};
						timesMove[] = {13.5};
						triggerTime = 9;
						upTime = 13.5;
					};
					class T8: T1
					{
						object = "BIS_FD_target6_8";
						positionsMove[] = {"BIS_FD_target6_8_WP1"};
						timesMove[] = {20};
						trigger[] = {"BIS_FD_target6_1", "BIS_FD_target6_2", "BIS_FD_target6_3", "BIS_FD_target6_4", "BIS_FD_target6_5", "BIS_FD_target6_6", "BIS_FD_target6_7"};
						triggerTime = 5;
						upTime = 40;
					};
					class T9: T8
					{
						object = "BIS_FD_target6_9";
						positionsMove[] = {};
						timesMove[] = {};
						upTime = 32;
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor = "BIS_FD_DynO1Anchor";
				script = "dyno_sp_fd11.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD12
	{
		color[] = {0.690196, 0.25098, 0.654902, 1};
		colorName = "purple";
		containersMagazines[] = {"BIS_FD_ammo1", "BIS_FD_ammo2", "BIS_FD_ammo3", "BIS_FD_ammo4", "BIS_FD_ammo5", "BIS_FD_vehicle1", "BIS_FD_vehicle2"};
		containersMagazinesCount[] = {10, 10};
		containersWeapons[] = {"BIS_FD_weapons1"};
		decals[] = {{"BIS_FD_decal1", "a3\Missions_F_Beta\data\img\decals\decal_target_target5_ca", 2}, {"BIS_FD_decal1", "A3\Missions_F_Beta\data\img\decals\decal_penetrate5_ca", 3}, {"BIS_FD_decal3", "a3\Missions_F_Beta\data\img\decals\decal_target_noshoot5_ca", 2}, {"BIS_FD_decal3", "a3\Missions_F_Beta\data\img\decals\decal_watch_out5_ca", 3}, {"BIS_FD_decal3", "a3\Missions_F_Beta\data\img\decals\decal_penetrate5_ca", 5}, {"BIS_FD_decal4", "a3\Missions_F_Beta\data\img\decals\decal_watch_out5_ca", 4}, {"BIS_FD_decal4", "a3\Missions_F_Beta\data\img\decals\decal_penetrate5_ca", 5}, {"BIS_FD_decal4", "a3\Missions_F_Beta\data\img\decals\decal_target_right5_ca", 2}, {"BIS_FD_decal4", "a3\Missions_F_Beta\data\img\decals\decal_noshoot_target5_ca", 3}};
		displayName = "CoF: Purple 2";
		leaderboard = "1134251";
		magazines[] = {"20Rnd_762x51_Mag", "6Rnd_45ACP_Cylinder"};
		magazinesCompetitor[] = {"20Rnd_762x51_Mag", "6Rnd_45ACP_Cylinder"};
		objectCOF = "BIS_firingDrills1";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_FD_recolor12", "BIS_FD_recolor13", "BIS_FD_recolor14", "BIS_FD_recolor15", "BIS_FD_recolor16", "BIS_FD_recolor17", "BIS_FD_recolor18", "BIS_FD_recolor19", "BIS_FD_recolor20", "BIS_FD_recolor21", "BIS_FD_recolor22", "BIS_FD_recolor23", "BIS_FD_recolor24", "BIS_FD_recolor25", "BIS_FD_recolor26", "BIS_FD_recolor27", "BIS_FD_recolor28", "BIS_FD_recolor29", "BIS_FD_recolor30", "BIS_FD_recolor31", "BIS_FD_recolor32", "BIS_FD_recolor33", "BIS_FD_recolor34", "BIS_FD_recolor35", "BIS_FD_recolor36", "BIS_FD_recolor37", "BIS_FD_recolor38", "BIS_FD_recolor39", "BIS_FD_recolor40", "BIS_FD_recolor41", "BIS_FD_recolor42", "BIS_FD_recolor43", "BIS_FD_recolor44", "BIS_FD_recolor45", "BIS_FD_recolor46", "BIS_FD_recolor47", "BIS_FD_recolor48", "BIS_FD_recolor49", "BIS_FD_recolor50", "BIS_FD_recolor51", "BIS_FD_recolor52", "BIS_FD_recolor53", "BIS_FD_recolor54", "BIS_FD_recolor55", "BIS_FD_recolor56", "BIS_FD_recolor57", "BIS_FD_recolor58", "BIS_FD_recolor59", "BIS_FD_recolor60", "BIS_FD_recolor61", "BIS_FD_recolor62"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD12";
		timesMedals[] = {600, 520, 470.53};
		weapons[] = {"srifle_DMR_06_olive_F", "hgun_Pistol_heavy_02_Yorris_F"};
		weaponsCompetitor[] = {"srifle_DMR_06_olive_F", "hgun_Pistol_heavy_02_Yorris_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP2
			{
				object = "BIS_FD_CP2";
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus2_1";
						optional = 1;
						trigger = "BIS_FD_target2_11";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus2_2";
						trigger = "BIS_FD_target2_13";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus2_3";
						trigger = "BIS_FD_target2_15";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus2_4";
						trigger = "BIS_FD_target2_18";
					};
					class Optional5
					{
						bonus = 5;
						object = "BIS_FD_bonus2_5";
						optional = 1;
						type = "Balloon";
					};
					class Optional6: Optional5
					{
						object = "BIS_FD_bonus2_6";
					};
					class Optional7: Optional5
					{
						object = "BIS_FD_bonus2_7";
					};
					class Optional8: Optional5
					{
						object = "BIS_FD_bonus2_8";
					};
					class Optional9: Optional5
					{
						object = "BIS_FD_bonus2_9";
					};
					class T1
					{
						object = "BIS_FD_target2_1";
						type = "Steel_Plate";
					};
					class T10
					{
						object = "BIS_FD_target2_10";
						type = "Steel_Plate";
					};
					class T11
					{
						object = "BIS_FD_target2_11";
						trigger = "BIS_FD_target2_10";
						type = "PopUp_Oval";
					};
					class T12: T10
					{
						object = "BIS_FD_target2_12";
					};
					class T13: T11
					{
						object = "BIS_FD_target2_13";
						trigger = "BIS_FD_target2_12";
					};
					class T14: T10
					{
						object = "BIS_FD_target2_14";
					};
					class T15: T11
					{
						object = "BIS_FD_target2_15";
						trigger = "BIS_FD_target2_14";
					};
					class T16
					{
						object = "BIS_FD_target2_16";
						type = "Steel_Plate";
					};
					class T17: T16
					{
						object = "BIS_FD_target2_17";
					};
					class T18
					{
						object = "BIS_FD_target2_18";
						trigger[] = {"BIS_FD_target2_16", "BIS_FD_target2_17"};
						type = "PopUp_Oval";
					};
					class T2: T1
					{
						object = "BIS_FD_target2_2";
					};
					class T3: T1
					{
						object = "BIS_FD_target2_3";
					};
					class T4
					{
						object = "BIS_FD_target2_4";
						type = "Steel_Plate";
					};
					class T5: T4
					{
						object = "BIS_FD_target2_5";
					};
					class T6: T4
					{
						object = "BIS_FD_target2_6";
					};
					class T7
					{
						object = "BIS_FD_target2_7";
						type = "Steel_Plate";
					};
					class T8: T7
					{
						object = "BIS_FD_target2_8";
					};
					class T9: T7
					{
						object = "BIS_FD_target2_9";
					};
				};
			};
			class CP3
			{
				object = "BIS_FD_CP3";
				class Targets
				{
					class Optional1
					{
						bonus = 25;
						object = "BIS_FD_bonus3_1";
						optional = 1;
						trigger = "BIS_FD_target3_2";
						triggerTime = 0.5;
						type = "Skeet";
						upTime = 4;
					};
					class Optional10: Optional7
					{
						object = "BIS_FD_bonus3_10";
					};
					class Optional11
					{
						bonus = 5;
						object = "BIS_FD_bonus3_11";
						optional = 1;
						type = "Balloon";
					};
					class Optional12: Optional11
					{
						object = "BIS_FD_bonus3_12";
					};
					class Optional13: Optional11
					{
						object = "BIS_FD_bonus3_13";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus3_2";
						trigger = "BIS_FD_target3_3";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus3_3";
						trigger = "BIS_FD_target3_4";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus3_4";
						trigger = "BIS_FD_target3_6";
					};
					class Optional5: Optional1
					{
						object = "BIS_FD_bonus3_5";
						trigger = "BIS_FD_target3_7";
					};
					class Optional6: Optional1
					{
						object = "BIS_FD_bonus3_6";
						trigger = "BIS_FD_target3_9";
					};
					class Optional7: Optional1
					{
						object = "BIS_FD_bonus3_7";
						trigger = "BIS_FD_target3_20";
					};
					class Optional8: Optional7
					{
						object = "BIS_FD_bonus3_8";
					};
					class Optional9: Optional7
					{
						object = "BIS_FD_bonus3_9";
					};
					class T1
					{
						object = "BIS_FD_target3_1";
						type = "Steel_Plate";
					};
					class T10
					{
						object = "BIS_FD_target3_10";
						type = "PopUp_Oval";
					};
					class T11: T10
					{
						object = "BIS_FD_target3_11";
						trigger = "BIS_FD_target3_10";
					};
					class T12: T11
					{
						object = "BIS_FD_target3_12";
					};
					class T13: T10
					{
						object = "BIS_FD_target3_13";
						trigger[] = {"BIS_FD_target3_11", "BIS_FD_target3_12"};
					};
					class T14: T13
					{
						object = "BIS_FD_target3_14";
					};
					class T15: T13
					{
						object = "BIS_FD_target3_15";
					};
					class T16: T10
					{
						object = "BIS_FD_target3_16";
						trigger[] = {"BIS_FD_target3_13", "BIS_FD_target3_14", "BIS_FD_target3_15"};
					};
					class T17: T16
					{
						object = "BIS_FD_target3_17";
					};
					class T18: T16
					{
						object = "BIS_FD_target3_18";
					};
					class T19: T16
					{
						object = "BIS_FD_target3_19";
					};
					class T2
					{
						object = "BIS_FD_target3_2";
						trigger = "BIS_FD_target3_1";
						type = "PopUp_Oval";
					};
					class T20: T10
					{
						object = "BIS_FD_target3_20";
						trigger[] = {"BIS_FD_target3_16", "BIS_FD_target3_17", "BIS_FD_target3_18", "BIS_FD_target3_19"};
					};
					class T21
					{
						directions[] = {"BIS_FD_target3_21A", "BIS_FD_target3_21B"};
						object = "BIS_FD_target3_21";
						positions[] = {"BIS_FD_target3_21A", "BIS_FD_target3_21B"};
						type = "PopUp_Oval";
					};
					class T22: T21
					{
						directions[] = {"BIS_FD_target3_22A", "BIS_FD_target3_22B", "BIS_FD_target3_22C"};
						object = "BIS_FD_target3_22";
						positions[] = {"BIS_FD_target3_22A", "BIS_FD_target3_22B", "BIS_FD_target3_22C"};
						trigger = "BIS_FD_target3_26";
					};
					class T23: T21
					{
						directions[] = {};
						object = "BIS_FD_target3_23";
						positions[] = {};
						trigger = "BIS_FD_target3_24";
					};
					class T24: T21
					{
						directions[] = {"BIS_FD_target3_24A", "BIS_FD_target3_24B"};
						object = "BIS_FD_target3_24";
						positions[] = {"BIS_FD_target3_24A", "BIS_FD_target3_24B"};
						trigger = "BIS_FD_target3_22";
					};
					class T25: T21
					{
						directions[] = {"BIS_FD_target3_25A", "BIS_FD_target3_25B", "BIS_FD_target3_25C"};
						object = "BIS_FD_target3_25";
						positions[] = {"BIS_FD_target3_25A", "BIS_FD_target3_25B", "BIS_FD_target3_25C"};
						trigger = "BIS_FD_target3_23";
					};
					class T26: T21
					{
						directions[] = {};
						object = "BIS_FD_target3_26";
						positions[] = {};
						trigger = "BIS_FD_target3_21";
					};
					class T3: T2
					{
						object = "BIS_FD_target3_3";
					};
					class T4: T2
					{
						object = "BIS_FD_target3_4";
					};
					class T5
					{
						object = "BIS_FD_target3_5";
						type = "Steel_Plate";
					};
					class T6
					{
						object = "BIS_FD_target3_6";
						trigger = "BIS_FD_target3_5";
						type = "PopUp_Oval";
					};
					class T7: T6
					{
						object = "BIS_FD_target3_7";
					};
					class T8
					{
						object = "BIS_FD_target3_8";
						type = "Steel_Plate";
					};
					class T9
					{
						object = "BIS_FD_target3_9";
						trigger = "BIS_FD_target3_8";
						type = "PopUp_Oval";
					};
				};
			};
			class CP4
			{
				object = "BIS_FD_CP4";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot4_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot4_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot4_3";
					};
					class NoShoot4
					{
						noShoot = 1;
						object = "BIS_FD_noShoot4_4";
						positionsMove[] = {"BIS_FD_noShoot4_4_WP1"};
						timesMove[] = {12};
						trigger = "BIS_FD_target4_14";
					};
					class NoShoot5: NoShoot4
					{
						object = "BIS_FD_noShoot4_5";
						positionsMove[] = {"BIS_FD_noShoot4_5_WP1"};
					};
					class NoShoot6: NoShoot4
					{
						object = "BIS_FD_noShoot4_6";
						positionsMove[] = {"BIS_FD_noShoot4_6_WP1"};
						timesMove[] = {13};
					};
					class NoShoot7: NoShoot4
					{
						object = "BIS_FD_noShoot4_7";
						positionsMove[] = {"BIS_FD_noShoot4_7_WP1"};
					};
					class Optional1
					{
						bonus = 5;
						object = "BIS_FD_bonus4_1";
						optional = 1;
						type = "Balloon";
					};
					class Optional10: Optional1
					{
						object = "BIS_FD_bonus4_10";
					};
					class Optional11: Optional1
					{
						object = "BIS_FD_bonus4_11";
					};
					class Optional12: Optional1
					{
						object = "BIS_FD_bonus4_12";
					};
					class Optional13: Optional1
					{
						object = "BIS_FD_bonus4_13";
					};
					class Optional14
					{
						bonus = 10;
						object = "BIS_FD_bonus4_14";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional15: Optional14
					{
						object = "BIS_FD_bonus4_15";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus4_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus4_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus4_4";
					};
					class Optional5: Optional1
					{
						object = "BIS_FD_bonus4_5";
					};
					class Optional6: Optional1
					{
						object = "BIS_FD_bonus4_6";
					};
					class Optional7: Optional1
					{
						object = "BIS_FD_bonus4_7";
					};
					class Optional8: Optional1
					{
						object = "BIS_FD_bonus4_8";
					};
					class Optional9: Optional1
					{
						object = "BIS_FD_bonus4_9";
					};
					class T1
					{
						object = "BIS_FD_target4_1";
						type = "PopUp_Oval";
					};
					class T10
					{
						object = "BIS_FD_target4_10";
						trigger = "BIS_FD_target4_9";
						type = "Swivel";
						upTime = 9;
					};
					class T11
					{
						object = "BIS_FD_target4_11";
						trigger = "BIS_FD_target4_9";
						type = "PopUp_Acc1";
						upTime = 11;
					};
					class T12: T11
					{
						chance = 0.5;
						object = "BIS_FD_target4_12";
						upTime = 12.5;
					};
					class T13: T11
					{
						object = "BIS_FD_target4_13";
						type = "PopUp";
						upTime = 9.5;
					};
					class T14
					{
						object = "BIS_FD_target4_14";
						type = "PopUp_Oval";
					};
					class T15
					{
						directions[] = {"BIS_FD_target4_15A", "BIS_FD_target4_15B"};
						object = "BIS_FD_target4_15";
						positions[] = {"BIS_FD_target4_15A", "BIS_FD_target4_15B"};
						trigger = "BIS_FD_target4_14";
						triggerTime = 3;
						type = "PopUp_Acc1";
						upTime = 11;
					};
					class T16: T15
					{
						directions[] = {};
						object = "BIS_FD_target4_16";
						positions[] = {};
						upTime = 11.5;
					};
					class T17: T15
					{
						chance = 0.8;
						directions[] = {"BIS_FD_target4_17A", "BIS_FD_target4_17B"};
						object = "BIS_FD_target4_17";
						positions[] = {"BIS_FD_target4_17A", "BIS_FD_target4_17B"};
						triggerTime = 4;
						upTime = 10;
					};
					class T18: T15
					{
						directions[] = {};
						object = "BIS_FD_target4_18";
						positions[] = {};
						triggerTime = 4;
						upTime = 10;
					};
					class T19
					{
						object = "BIS_FD_target4_19";
						type = "PopUp_Oval";
					};
					class T2
					{
						object = "BIS_FD_target4_2";
						positionsMove[] = {"BIS_FD_target4_2_WP1"};
						timesMove[] = {9};
						trigger = "BIS_FD_target4_1";
						type = "PopUp_Acc1";
						upTime = 9;
					};
					class T20
					{
						directions[] = {"BIS_FD_target4_20A", "BIS_FD_target4_20B"};
						object = "BIS_FD_target4_20";
						positions[] = {"BIS_FD_target4_20A", "BIS_FD_target4_20B"};
						trigger = "BIS_FD_target4_19";
						type = "PopUp_Acc1";
						upTime = 10;
					};
					class T21: T20
					{
						chance = 0.7;
						directions[] = {};
						object = "BIS_FD_target4_21";
						positions[] = {};
						triggerTime = 2;
					};
					class T22: T20
					{
						directions[] = {};
						object = "BIS_FD_target4_22";
						positions[] = {};
						upTime = 11.5;
					};
					class T23: T20
					{
						chance = 0.8;
						directions[] = {"BIS_FD_target4_23A", "BIS_FD_target4_23B"};
						object = "BIS_FD_target4_23";
						positions[] = {"BIS_FD_target4_23A", "BIS_FD_target4_23B"};
						upTime = 11.5;
					};
					class T24: T20
					{
						directions[] = {"BIS_FD_target4_24A", "BIS_FD_target4_24B"};
						object = "BIS_FD_target4_24";
						positions[] = {"BIS_FD_target4_24A", "BIS_FD_target4_24B"};
						triggerTime = 5.5;
					};
					class T3: T2
					{
						object = "BIS_FD_target4_3";
						positionsMove[] = {"BIS_FD_target4_3_WP1"};
						timesMove[] = {8};
						upTime = 8;
					};
					class T4: T2
					{
						object = "BIS_FD_target4_4";
						positionsMove[] = {"BIS_FD_target4_4_WP1"};
					};
					class T5: T2
					{
						object = "BIS_FD_target4_5";
						positionsMove[] = {"BIS_FD_target4_5_WP1"};
						timesMove[] = {9.5};
						upTime = 9.5;
					};
					class T6
					{
						object = "BIS_FD_target4_6";
						type = "PopUp_Oval";
					};
					class T7
					{
						object = "BIS_FD_target4_7";
						positionsMove[] = {"BIS_FD_target4_7_WP1"};
						timesMove[] = {5};
						trigger = "BIS_FD_target4_6";
						type = "PopUp_Acc1";
						upTime = 5;
					};
					class T8: T7
					{
						object = "BIS_FD_target4_8";
						positionsMove[] = {"BIS_FD_target4_8_WP1"};
						timesMove[] = {7};
						trigger = "BIS_FD_target4_7";
						upTime = 7;
					};
					class T9
					{
						object = "BIS_FD_target4_9";
						type = "PopUp_Oval";
					};
				};
			};
			class CP5
			{
				object = "BIS_FD_CP5";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot5_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot5_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot5_3";
					};
					class NoShoot4: NoShoot1
					{
						object = "BIS_FD_noShoot5_4";
					};
					class NoShoot5: NoShoot1
					{
						object = "BIS_FD_noShoot5_5";
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus5_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional10: Optional8
					{
						object = "BIS_FD_bonus5_10";
					};
					class Optional11: Optional8
					{
						object = "BIS_FD_bonus5_11";
					};
					class Optional12: Optional8
					{
						object = "BIS_FD_bonus5_12";
					};
					class Optional13: Optional8
					{
						object = "BIS_FD_bonus5_13";
					};
					class Optional14: Optional8
					{
						object = "BIS_FD_bonus5_14";
					};
					class Optional15: Optional8
					{
						object = "BIS_FD_bonus5_15";
					};
					class Optional16: Optional8
					{
						object = "BIS_FD_bonus5_16";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus5_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus5_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus5_4";
					};
					class Optional5: Optional1
					{
						object = "BIS_FD_bonus5_5";
					};
					class Optional6: Optional1
					{
						object = "BIS_FD_bonus5_6";
					};
					class Optional7: Optional1
					{
						object = "BIS_FD_bonus5_7";
					};
					class Optional8
					{
						bonus = 5;
						object = "BIS_FD_bonus5_8";
						optional = 1;
						type = "Balloon";
					};
					class Optional9: Optional8
					{
						object = "BIS_FD_bonus5_9";
					};
					class T1
					{
						object = "BIS_FD_target5_1";
						type = "PopUp_Acc1";
					};
					class T10: T1
					{
						object = "BIS_FD_target5_10";
						type = "Swivel";
						upTime = 38;
					};
					class T11: T1
					{
						object = "BIS_FD_target5_11";
						upTime = 40;
					};
					class T12: T1
					{
						object = "BIS_FD_target5_12";
						upTime = 50;
					};
					class T13: T1
					{
						object = "BIS_FD_target5_13";
						upTime = 58;
					};
					class T14: T1
					{
						chance = 0.7;
						object = "BIS_FD_target5_14";
						upTime = 50;
					};
					class T2: T1
					{
						chance = 0.8;
						object = "BIS_FD_target5_2";
						type = "Swivel";
						upTime = 22;
					};
					class T3: T1
					{
						object = "BIS_FD_target5_3";
						upTime = 20;
					};
					class T4: T1
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target5_4A", "BIS_FD_target5_4B", "BIS_FD_target5_4C"};
						object = "BIS_FD_target5_4";
						positions[] = {"BIS_FD_target5_4A", "BIS_FD_target5_4B", "BIS_FD_target5_4C"};
					};
					class T5: T1
					{
						object = "BIS_FD_target5_5";
						type = "Swivel";
					};
					class T6: T1
					{
						object = "BIS_FD_target5_6";
						upTime = 44;
					};
					class T7: T1
					{
						object = "BIS_FD_target5_7";
						upTime = 49;
					};
					class T8: T1
					{
						directions[] = {"BIS_FD_target5_8A", "BIS_FD_target5_8B"};
						object = "BIS_FD_target5_8";
						positions[] = {"BIS_FD_target5_8A", "BIS_FD_target5_8B"};
						type = "Swivel";
					};
					class T9: T1
					{
						object = "BIS_FD_target5_9";
					};
				};
			};
			class CP6
			{
				object = "BIS_FD_CP6";
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus6_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional10: Optional7
					{
						object = "BIS_FD_bonus6_10";
					};
					class Optional11: Optional7
					{
						object = "BIS_FD_bonus6_11";
					};
					class Optional12: Optional7
					{
						object = "BIS_FD_bonus6_12";
					};
					class Optional13: Optional7
					{
						object = "BIS_FD_bonus6_13";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus6_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus6_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus6_4";
					};
					class Optional5: Optional1
					{
						object = "BIS_FD_bonus6_5";
					};
					class Optional6: Optional1
					{
						object = "BIS_FD_bonus6_6";
					};
					class Optional7
					{
						bonus = 5;
						object = "BIS_FD_bonus6_7";
						optional = 1;
						type = "Balloon";
					};
					class Optional8: Optional7
					{
						object = "BIS_FD_bonus6_8";
					};
					class Optional9: Optional7
					{
						object = "BIS_FD_bonus6_9";
					};
					class T1
					{
						object = "BIS_FD_target6_1";
						type = "PopUp_Acc1";
					};
					class T10: T1
					{
						object = "BIS_FD_target6_10";
						triggerTime = 25;
					};
					class T11: T1
					{
						chance = 0.7;
						object = "BIS_FD_target6_11";
						triggerTime = 25;
					};
					class T12: T1
					{
						object = "BIS_FD_target6_12";
						triggerTime = 27;
					};
					class T13: T1
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target6_13A", "BIS_FD_target6_13B", "BIS_FD_target6_13C"};
						object = "BIS_FD_target6_13";
						positions[] = {"BIS_FD_target6_13A", "BIS_FD_target6_13B", "BIS_FD_target6_13C"};
						triggerTime = 27;
					};
					class T14: T1
					{
						directions[] = {"BIS_FD_target6_14A", "BIS_FD_target6_14B"};
						object = "BIS_FD_target6_14";
						positions[] = {"BIS_FD_target6_14A", "BIS_FD_target6_14B"};
						triggerTime = 29;
					};
					class T15: T1
					{
						object = "BIS_FD_target6_15";
						positionsMove[] = {"BIS_FD_target6_15_WP1"};
						timesMove[] = {12};
						triggerTime = 29;
						upTime = 20;
					};
					class T16: T1
					{
						chance = 0.7;
						object = "BIS_FD_target6_16";
						triggerTime = 30.5;
					};
					class T17: T1
					{
						object = "BIS_FD_target6_17";
						triggerTime = 31;
					};
					class T18: T1
					{
						directions[] = {"BIS_FD_target6_18A", "BIS_FD_target6_18B"};
						object = "BIS_FD_target6_18";
						positions[] = {"BIS_FD_target6_18A", "BIS_FD_target6_18B"};
						triggerTime = 40;
					};
					class T19: T1
					{
						chance = 0.7;
						object = "BIS_FD_target6_19";
						triggerTime = 40;
					};
					class T2: T1
					{
						object = "BIS_FD_target6_2";
						triggerTime = 2;
						type = "Swivel";
					};
					class T20: T1
					{
						chance = 0.5;
						object = "BIS_FD_target6_20";
						triggerTime = 40.5;
					};
					class T21: T1
					{
						directions[] = {"BIS_FD_target6_21A", "BIS_FD_target6_21B"};
						object = "BIS_FD_target6_21";
						positions[] = {"BIS_FD_target6_21A", "BIS_FD_target6_21B"};
						triggerTime = 41.5;
					};
					class T22: T1
					{
						chance = 0.8;
						object = "BIS_FD_target6_22";
						triggerTime = 48;
					};
					class T23: T1
					{
						chance = 0.5;
						object = "BIS_FD_target6_23";
						triggerTime = 53;
					};
					class T24: T1
					{
						chance = 0.5;
						object = "BIS_FD_target6_24";
						triggerTime = 53;
					};
					class T25: T1
					{
						chance = 0.8;
						directions[] = {"BIS_FD_target6_25A", "BIS_FD_target6_25B", "BIS_FD_target6_25C"};
						object = "BIS_FD_target6_25";
						positions[] = {"BIS_FD_target6_25A", "BIS_FD_target6_25B", "BIS_FD_target6_25C"};
						triggerTime = 67.5;
					};
					class T26: T1
					{
						directions[] = {"BIS_FD_target6_26A", "BIS_FD_target6_26B"};
						object = "BIS_FD_target6_26";
						positions[] = {"BIS_FD_target6_26A", "BIS_FD_target6_26B"};
						triggerTime = 57.5;
					};
					class T27: T1
					{
						object = "BIS_FD_target6_27";
						triggerTime = 57.5;
					};
					class T28: T1
					{
						object = "BIS_FD_target6_28";
						triggerTime = 68;
					};
					class T29: T1
					{
						object = "BIS_FD_target6_29";
						triggerTime = 67;
					};
					class T3: T1
					{
						object = "BIS_FD_target6_3";
						type = "Swivel";
					};
					class T30: T1
					{
						object = "BIS_FD_target6_30";
						triggerTime = 67;
						type = "Swivel";
					};
					class T31: T1
					{
						directions[] = {"BIS_FD_target6_31A", "BIS_FD_target6_31B", "BIS_FD_target6_31C"};
						object = "BIS_FD_target6_31";
						positions[] = {"BIS_FD_target6_31A", "BIS_FD_target6_31B", "BIS_FD_target6_31C"};
						triggerTime = 70;
					};
					class T32: T1
					{
						object = "BIS_FD_target6_32";
						triggerTime = 70;
					};
					class T33: T1
					{
						chance = 0.5;
						object = "BIS_FD_target6_33";
						triggerTime = 70;
					};
					class T34: T1
					{
						object = "BIS_FD_target6_34";
						positionsMove[] = {"BIS_FD_target6_34_WP1"};
						timesMove[] = {13};
						triggerTime = 75;
					};
					class T35: T1
					{
						object = "BIS_FD_target6_35";
						positionsMove[] = {"BIS_FD_target6_35_WP1"};
						timesMove[] = {13};
						triggerTime = 75;
					};
					class T36: T1
					{
						object = "BIS_FD_target6_36";
						positionsMove[] = {"BIS_FD_target6_36_WP1"};
						timesMove[] = {13};
						triggerTime = 76;
					};
					class T37: T1
					{
						object = "BIS_FD_target6_37";
						positionsMove[] = {"BIS_FD_target6_37_WP1"};
						timesMove[] = {14};
						triggerTime = 76.5;
					};
					class T38: T1
					{
						object = "BIS_FD_target6_38";
						positionsMove[] = {"BIS_FD_target6_38_WP1"};
						timesMove[] = {14};
						triggerTime = 79;
					};
					class T39: T1
					{
						object = "BIS_FD_target6_39";
						triggerTime = 82;
					};
					class T4: T1
					{
						chance = 0.6;
						object = "BIS_FD_target6_4";
					};
					class T5: T1
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target6_5A", "BIS_FD_target6_5B"};
						object = "BIS_FD_target6_5";
						positions[] = {"BIS_FD_target6_5A", "BIS_FD_target6_5B"};
						triggerTime = 3;
					};
					class T6: T1
					{
						object = "BIS_FD_target6_6";
						positionsMove[] = {"BIS_FD_target6_6_WP1"};
						timesMove[] = {15};
						triggerTime = 10;
						upTime = 15;
					};
					class T7: T1
					{
						chance = 0.6;
						object = "BIS_FD_target6_7";
						triggerTime = 13;
					};
					class T8: T1
					{
						directions[] = {"BIS_FD_target6_8A", "BIS_FD_target6_8B"};
						object = "BIS_FD_target6_8";
						positions[] = {"BIS_FD_target6_8A", "BIS_FD_target6_8B"};
						triggerTime = 13;
					};
					class T9: T1
					{
						directions[] = {"BIS_FD_target6_9A", "BIS_FD_target6_9B"};
						object = "BIS_FD_target6_9";
						positions[] = {"BIS_FD_target6_9A", "BIS_FD_target6_9B"};
						triggerTime = 16;
					};
				};
			};
			class CP7
			{
				object = "BIS_FD_CP7";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor = "BIS_FD_DynO1Anchor";
				script = "dyno_sp_fd12.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class SP_FD13
	{
		color[] = {0.690196, 0.25098, 0.654902, 1};
		colorName = "purple";
		containersMagazines[] = {"BIS_FD_ammo1", "BIS_FD_ammo2", "BIS_FD_ammo3", "BIS_FD_ammo4"};
		containersMagazinesCount[] = {10, 10, 10};
		containersWeapons[] = {"BIS_FD_weapons1"};
		decals[] = {};
		displayName = "CoF: Purple 3";
		leaderboard = "1134252";
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01", "11Rnd_45ACP_Mag", "10Rnd_127x54_Mag"};
		magazinesCompetitor[] = {"30Rnd_45ACP_Mag_SMG_01", "11Rnd_45ACP_Mag"};
		objectCOF = "BIS_firingDrills1";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_FD_quitSelector1"};
		recolor[] = {"BIS_FD_recolor1", "BIS_FD_recolor2", "BIS_FD_recolor3", "BIS_FD_recolor4", "BIS_FD_recolor5", "BIS_FD_recolor6", "BIS_FD_recolor7", "BIS_FD_recolor8", "BIS_FD_recolor9", "BIS_FD_recolor10", "BIS_FD_recolor11", "BIS_FD_recolor12", "BIS_FD_recolor13", "BIS_FD_recolor14", "BIS_FD_recolor15", "BIS_FD_recolor16", "BIS_FD_recolor17", "BIS_FD_recolor18", "BIS_FD_recolor19", "BIS_FD_recolor20", "BIS_FD_recolor21", "BIS_FD_recolor22"};
		restartSelectors[] = {"BIS_FD_restartSelector1"};
		ruleSelectors[] = {"BIS_FD_ruleSelector1", "BIS_FD_ruleSelector2"};
		statistic = "FD13";
		timesMedals[] = {225, 203.5, 191};
		weapons[] = {"SMG_01_Holo_pointer_snds_F", "hgun_Pistol_heavy_01_snds_F", "srifle_DMR_04_ACO_F"};
		weaponsCompetitor[] = {"SMG_01_Holo_pointer_snds_F", "hgun_Pistol_heavy_01_snds_F"};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_FD_CP1";
			};
			class CP10
			{
				object = "BIS_FD_CP10";
				weapons[] = {"srifle_DMR_04_ACO_F"};
				class Targets
				{
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus10_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus10_2";
					};
					class T1
					{
						directions[] = {"BIS_FD_target10_1A", "BIS_FD_target10_1B"};
						object = "BIS_FD_target10_1";
						positions[] = {"BIS_FD_target10_1A", "BIS_FD_target10_1B"};
						type = "PopUp_Acc1";
						upTime = 12;
					};
					class T2: T1
					{
						directions[] = {};
						object = "BIS_FD_target10_2";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target10_2_WP1"};
						timesMove[] = {10};
						upTime = 10;
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target10_3";
						positions[] = {};
					};
					class T4: T1
					{
						directions[] = {"BIS_FD_target10_4A", "BIS_FD_target10_4B", "BIS_FD_target10_4C"};
						object = "BIS_FD_target10_4";
						positions[] = {"BIS_FD_target10_4A", "BIS_FD_target10_4B", "BIS_FD_target10_4C"};
						upTime = 14;
					};
					class T5: T1
					{
						chance = 0.7;
						directions[] = {};
						object = "BIS_FD_target10_5";
						positions[] = {};
						triggerTime = 2;
						upTime = 8;
					};
				};
			};
			class CP11
			{
				object = "BIS_FD_CP11";
				weapons[] = {"srifle_DMR_04_ACO_F"};
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target11_1";
						type = "PopUp_Acc1";
						upTime = 15;
					};
					class T2: T1
					{
						object = "BIS_FD_target11_2";
					};
					class T3: T1
					{
						directions[] = {"BIS_FD_target11_3A", "BIS_FD_target11_3B", "BIS_FD_target11_3C"};
						heights[] = {13.8414, 13.0329, 13.1316};
						object = "BIS_FD_target11_3";
						positions[] = {"BIS_FD_target11_3A", "BIS_FD_target11_3B", "BIS_FD_target11_3C"};
						triggerTime = 3;
						upTime = 8;
					};
					class T4: T1
					{
						directions[] = {"BIS_FD_target11_4A", "BIS_FD_target11_4B"};
						heights[] = {13.1498, 13.1694};
						object = "BIS_FD_target11_4";
						positions[] = {"BIS_FD_target11_4A", "BIS_FD_target11_4B"};
						triggerTime = 5;
					};
					class T5: T1
					{
						chance = 0.5;
						object = "BIS_FD_target11_5";
						triggerTime = 5;
						upTime = 18;
					};
					class T6: T1
					{
						object = "BIS_FD_target11_6";
						positionsMove[] = {"BIS_FD_target11_6_WP1"};
						timesMove[] = {10};
						trigger = "BIS_FD_target11_3";
						upTime = 13;
					};
					class T7: T1
					{
						object = "BIS_FD_target11_7";
						positionsMove[] = {"BIS_FD_target11_7_WP1"};
						timesMove[] = {10};
						trigger = "BIS_FD_target11_3";
						upTime = 13;
					};
					class T8: T1
					{
						object = "BIS_FD_target11_8";
						positionsMove[] = {"BIS_FD_target11_8_WP1"};
						timesMove[] = {15};
						trigger = "BIS_FD_target11_3";
						upTime = 20;
					};
					class T9: T1
					{
						object = "BIS_FD_target11_9";
						positionsMove[] = {"BIS_FD_target11_9_WP1"};
						timesMove[] = {10};
						trigger = "BIS_FD_target11_3";
					};
				};
			};
			class CP12
			{
				object = "BIS_FD_CP12";
				weapons[] = {"srifle_DMR_04_ACO_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot12_1";
					};
					class NoShoot2: NoShoot1
					{
						chance = 0.7;
						object = "BIS_FD_noShoot12_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot12_3";
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus12_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus12_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus12_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus12_4";
					};
					class T1
					{
						object = "BIS_FD_target12_1";
						type = "PopUp_Acc1";
						upTime = 10;
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target12_2A", "BIS_FD_target12_2B"};
						object = "BIS_FD_target12_2";
						positions[] = {"BIS_FD_target12_2A", "BIS_FD_target12_2B"};
					};
					class T3: T1
					{
						chance = 0.4;
						directions[] = {"BIS_FD_target12_3A", "BIS_FD_target12_3B", "BIS_FD_target12_3C"};
						object = "BIS_FD_target12_3";
						positions[] = {"BIS_FD_target12_3A", "BIS_FD_target12_3B", "BIS_FD_target12_3C"};
						triggerTime = 2;
						upTime = 8;
					};
					class T4: T1
					{
						chance = 0.5;
						object = "BIS_FD_target12_4";
						trigger = "BIS_FD_target12_3";
					};
					class T5: T1
					{
						chance = 0.5;
						object = "BIS_FD_target12_5";
						trigger = "BIS_FD_target12_3";
					};
				};
			};
			class CP13
			{
				object = "BIS_FD_CP13";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot13_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot13_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot13_3";
					};
					class NoShoot4: NoShoot1
					{
						object = "BIS_FD_noShoot13_4";
					};
					class T1
					{
						directions[] = {"BIS_FD_target13_1A", "BIS_FD_target13_1B", "BIS_FD_target13_1C", "BIS_FD_target13_1D"};
						object = "BIS_FD_target13_1";
						positions[] = {"BIS_FD_target13_1A", "BIS_FD_target13_1B", "BIS_FD_target13_1C", "BIS_FD_target13_1D"};
						type = "PopUp";
						upTime = 6;
					};
					class T2: T1
					{
						chance = 0.7;
						directions[] = {};
						object = "BIS_FD_target13_2";
						positions[] = {};
						triggerTime = 2;
						type = "Swivel";
						upTime = 12;
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target13_3";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target13_3_WP1"};
						timesMove[] = {10};
						trigger = "BIS_FD_target13_2";
						type = "PopUp_Acc1";
						upTime = 15;
					};
					class T4: T1
					{
						directions[] = {};
						object = "BIS_FD_target13_4";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target13_4_WP1"};
						timesMove[] = {20};
						type = "PopUp_Acc1";
						upTime = 15;
					};
					class T5: T1
					{
						directions[] = {};
						object = "BIS_FD_target13_5";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target13_5_WP1"};
						timesMove[] = {12};
						type = "PopUp_Acc1";
						upTime = 17;
					};
				};
			};
			class CP14
			{
				object = "BIS_FD_CP14";
			};
			class CP2
			{
				height = 29.0899;
				object = "BIS_FD_CP2";
				class Targets
				{
					class NoShoot1
					{
						directions[] = {"BIS_FD_noShoot2_1A", "BIS_FD_noShoot2_1B"};
						heights[] = {29.0937, 29.0914};
						noShoot = 1;
						object = "BIS_FD_noShoot2_1";
						positions[] = {"BIS_FD_noShoot2_1A", "BIS_FD_noShoot2_1B"};
					};
					class NoShoot2: NoShoot1
					{
						chance = 0.7;
						directions[] = {};
						object = "BIS_FD_noShoot2_2";
						positions[] = {};
					};
					class NoShoot3: NoShoot1
					{
						directions[] = {};
						object = "BIS_FD_noShoot2_3";
						positions[] = {};
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus2_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus2_2";
					};
					class T1
					{
						directions[] = {"BIS_FD_target2_1A", "BIS_FD_target2_1B", "BIS_FD_target2_1C"};
						heights[] = {29.0746, 29.0821, 29.0661};
						object = "BIS_FD_target2_1";
						positions[] = {"BIS_FD_target2_1A", "BIS_FD_target2_1B", "BIS_FD_target2_1C"};
						type = "PopUp_Acc1";
						upTime = 9;
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target2_2A", "BIS_FD_target2_2B"};
						heights[] = {29.2276, 29.254};
						object = "BIS_FD_target2_2";
						positions[] = {"BIS_FD_target2_2A", "BIS_FD_target2_2B"};
						upTime = 5;
					};
					class T3: T1
					{
						directions[] = {};
						object = "BIS_FD_target2_3";
						positions[] = {};
					};
					class T4: T1
					{
						directions[] = {};
						object = "BIS_FD_target2_4";
						positions[] = {};
						type = "Swivel";
						upTime = 5;
					};
					class T5: T1
					{
						chance = 0.7;
						directions[] = {"BIS_FD_target2_5A", "BIS_FD_target2_5B"};
						heights[] = {29.0533, 29.1043};
						object = "BIS_FD_target2_5";
						positions[] = {"BIS_FD_target2_5A", "BIS_FD_target2_5B"};
						upTime = 5;
					};
					class T6: T1
					{
						chance = 0.6;
						directions[] = {"BIS_FD_target2_6A", "BIS_FD_target2_6B"};
						heights[] = {33.6967, 33.458};
						object = "BIS_FD_target2_6";
						positions[] = {"BIS_FD_target2_6A", "BIS_FD_target2_6B"};
						triggerTime = 2;
						upTime = 8.5;
					};
				};
			};
			class CP3
			{
				height = 29.0899;
				object = "BIS_FD_CP3";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot3_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot3_2";
					};
					class NoShoot3: NoShoot1
					{
						directions[] = {"BIS_FD_noShoot3_3A", "BIS_FD_noShoot3_3B"};
						heights[] = {33.5254, 33.5253};
						object = "BIS_FD_noShoot3_3";
						positions[] = {"BIS_FD_noShoot3_3A", "BIS_FD_noShoot3_3B"};
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus3_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus3_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus3_3";
					};
					class Optional4: Optional1
					{
						object = "BIS_FD_bonus3_4";
					};
					class T1
					{
						directions[] = {"BIS_FD_target3_1A", "BIS_FD_target3_1B"};
						heights[] = {33.5293, 33.537};
						object = "BIS_FD_target3_1";
						positions[] = {"BIS_FD_target3_1A", "BIS_FD_target3_1B"};
						triggerTime = 1;
						type = "PopUp_Acc1";
						upTime = 8;
					};
					class T2: T1
					{
						directions[] = {};
						object = "BIS_FD_target3_2";
						positions[] = {};
						upTime = 9.5;
					};
				};
			};
			class CP4
			{
				height = 31.3366;
				object = "BIS_FD_CP4";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot4_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot4_2";
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus4_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class T1
					{
						object = "BIS_FD_target4_1";
						type = "PopUp_Acc1";
						upTime = 6;
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target4_2A", "BIS_FD_target4_2B"};
						heights[] = {29.1007, 29.0691};
						object = "BIS_FD_target4_2";
						positions[] = {"BIS_FD_target4_2A", "BIS_FD_target4_2B"};
						upTime = 6;
					};
					class T3: T1
					{
						chance = 0.5;
						directions[] = {"BIS_FD_target4_3A", "BIS_FD_target4_3B"};
						heights[] = {33.8721, 33.5504};
						object = "BIS_FD_target4_3";
						positions[] = {"BIS_FD_target4_3A", "BIS_FD_target4_3B"};
						upTime = 10;
					};
				};
			};
			class CP5
			{
				height = 31.3366;
				object = "BIS_FD_CP5";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot5_1";
						positionsMove[] = {"BIS_FD_noShoot5_1_WP1"};
						timesMove[] = {6};
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot5_2";
						positionsMove[] = {"BIS_FD_noShoot5_2_WP1"};
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot5_3";
						positionsMove[] = {"BIS_FD_noShoot5_3_WP1"};
					};
					class T1
					{
						object = "BIS_FD_target5_1";
						positionsMove[] = {"BIS_FD_target5_1_WP1"};
						timesMove[] = {6};
						type = "PopUp_Acc1";
						upTime = 6;
					};
					class T2: T1
					{
						object = "BIS_FD_target5_2";
						positionsMove[] = {"BIS_FD_target5_2_WP1"};
						timesMove[] = {7.5};
						upTime = 7.5;
					};
					class T3
					{
						directions[] = {"BIS_FD_target5_3A", "BIS_FD_target5_3B"};
						object = "BIS_FD_target5_3";
						positions[] = {"BIS_FD_target5_3A", "BIS_FD_target5_3B"};
						type = "PopUp_Acc1";
						upTime = 10;
					};
					class T4: T3
					{
						chance = 0.7;
						directions[] = {};
						object = "BIS_FD_target5_4";
						positions[] = {};
						triggerTime = 4;
						upTime = 11.5;
					};
					class T5: T3
					{
						chance = 0.9;
						directions[] = {"BIS_FD_target5_5A", "BIS_FD_target5_5B"};
						object = "BIS_FD_target5_5";
						positions[] = {"BIS_FD_target5_5A", "BIS_FD_target5_5B"};
						triggerTime = 4;
						upTime = 11.5;
					};
				};
			};
			class CP6
			{
				height = 34.0009;
				object = "BIS_FD_CP6";
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot6_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot6_2";
					};
					class NoShoot3: NoShoot1
					{
						chance = 0.5;
						object = "BIS_FD_noShoot6_3";
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus6_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus6_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus6_3";
					};
					class T1
					{
						directions[] = {"BIS_FD_target6_1A", "BIS_FD_target6_1B", "BIS_FD_target6_1C"};
						heights[] = {34.1106, 33.9606, 33.9816};
						object = "BIS_FD_target6_1";
						positions[] = {"BIS_FD_target6_1A", "BIS_FD_target6_1B", "BIS_FD_target6_1C"};
						type = "PopUp_Acc1";
						upTime = 7;
					};
					class T2: T1
					{
						directions[] = {};
						object = "BIS_FD_target6_2";
						positions[] = {};
						positionsMove[] = {"BIS_FD_target6_2_WP1"};
						timesMove[] = {5};
						upTime = 5;
					};
				};
			};
			class CP7
			{
				height = 33.5383;
				object = "BIS_FD_CP7";
				class Targets
				{
					class T1
					{
						directions[] = {"BIS_FD_target7_1A", "BIS_FD_target7_1B"};
						heights[] = {33.5464, 33.5475};
						object = "BIS_FD_target7_1";
						positions[] = {"BIS_FD_target7_1A", "BIS_FD_target7_1B"};
						type = "Swivel";
						upTime = 7;
					};
					class T2
					{
						object = "BIS_FD_target7_2";
						type = "PopUp_Acc1";
						upTime = 5;
					};
					class T3: T2
					{
						chance = 0.5;
						object = "BIS_FD_target7_3";
						triggerTime = 1;
						upTime = 8;
					};
				};
			};
			class CP8
			{
				height = 31.3644;
				object = "BIS_FD_CP8";
				class Targets
				{
					class T1
					{
						object = "BIS_FD_target8_1";
						type = "PopUp_Acc1";
						upTime = 6;
					};
					class T2: T1
					{
						directions[] = {"BIS_FD_target8_2A", "BIS_FD_target8_2B", "BIS_FD_target8_2C"};
						object = "BIS_FD_target8_2";
						positions[] = {"BIS_FD_target8_2A", "BIS_FD_target8_2B", "BIS_FD_target8_2C"};
					};
					class T3: T1
					{
						chance = 0.7;
						object = "BIS_FD_target8_3";
						upTime = 7.5;
					};
					class T4: T1
					{
						object = "BIS_FD_target8_4";
						positionsMove[] = {"BIS_FD_target8_4_WP1"};
						timesMove[] = {6};
						trigger[] = {"BIS_FD_target8_1", "BIS_FD_target8_2", "BIS_FD_target8_3"};
						upTime = 9;
					};
					class T5: T4
					{
						object = "BIS_FD_target8_5";
						positionsMove[] = {"BIS_FD_target8_5_WP1"};
						timesMove[] = {12};
						upTime = 15;
					};
				};
			};
			class CP9
			{
				height = 24.6527;
				object = "BIS_FD_CP9";
				weapons[] = {"srifle_DMR_04_ACO_F"};
				class Targets
				{
					class NoShoot1
					{
						noShoot = 1;
						object = "BIS_FD_noShoot9_1";
					};
					class NoShoot2: NoShoot1
					{
						object = "BIS_FD_noShoot9_2";
					};
					class NoShoot3: NoShoot1
					{
						object = "BIS_FD_noShoot9_3";
					};
					class Optional1
					{
						bonus = 10;
						object = "BIS_FD_bonus9_1";
						optional = 1;
						type = "Metal_Pole_Skeet";
					};
					class Optional2: Optional1
					{
						object = "BIS_FD_bonus9_2";
					};
					class Optional3: Optional1
					{
						object = "BIS_FD_bonus9_3";
					};
					class T1
					{
						directions[] = {"BIS_FD_target9_1A", "BIS_FD_target9_1B"};
						object = "BIS_FD_target9_1";
						positions[] = {"BIS_FD_target9_1A", "BIS_FD_target9_1B"};
						triggerTime = 10;
						type = "PopUp_Acc1";
						upTime = 8;
					};
					class T2
					{
						chance = 0.8;
						object = "BIS_FD_target9_2";
						type = "PopUp_Acc1";
						upTime = 12;
					};
					class T3: T2
					{
						chance = 1;
						directions[] = {"BIS_FD_target9_3A", "BIS_FD_target9_3B"};
						object = "BIS_FD_target9_3";
						positions[] = {"BIS_FD_target9_3A", "BIS_FD_target9_3B"};
						triggerTime = 2;
					};
					class T4: T2
					{
						chance = 1;
						directions[] = {"BIS_FD_target9_4A", "BIS_FD_target9_4B"};
						heights[] = {33.5961, 30.0827};
						object = "BIS_FD_target9_4";
						positions[] = {"BIS_FD_target9_4A", "BIS_FD_target9_4B"};
					};
					class T5: T2
					{
						chance = 1;
						object = "BIS_FD_target9_5";
						triggerTime = 7;
						upTime = 6;
					};
					class T6: T2
					{
						chance = 0.5;
						object = "BIS_FD_target9_6";
						triggerTime = 7;
						upTime = 6;
					};
				};
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor = "BIS_FD_DynO1Anchor";
				script = "dyno_sp_fd13.sqf";
			};
		};
		class RuleSets
		{
			competitive[] = {2, 0, 2, 2, 2, 1};
			training[] = {1, 2, 1, 1, 1, 0};
		};
	};
	class Targets
	{
		class Balloon
		{
			cameraFOV = 0.4;
			onActivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\balloon_onActivate.sqf";
			onDeactivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\balloon_onDeactivate.sqf";
			onHit = "A3\Modules_F_Beta\FiringDrills\scripts\targets\balloon_onHit.sqf";
			onReset = "A3\Modules_F_Beta\FiringDrills\scripts\targets\balloon_onReset.sqf";
		};
		class Metal_Pole_Skeet
		{
			cameraFOV = 0.2;
			cameraPos[] = {0, -1.5, 0.8};
			cameraTarget[] = {0, 0, 0.8};
			onDeactivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\metal_pole_skeet_onReset.sqf";
			onHit = "A3\Modules_F_Beta\FiringDrills\scripts\targets\metal_pole_skeet_onHit.sqf";
			onReset = "A3\Modules_F_Beta\FiringDrills\scripts\targets\metal_pole_skeet_onReset.sqf";
			selectionsHit[] = {"skeet"};
		};
		class PopUp
		{
			cameraFOV = 0.4;
			cameraPos[] = {0, -1.5, 0.5};
			cameraTarget[] = {0, 0, 1.3};
			onActivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\popup_onActivate.sqf";
			onHit = "A3\Modules_F_Beta\FiringDrills\scripts\targets\popup_onHit.sqf";
			onReset = "A3\Modules_F_Beta\FiringDrills\scripts\targets\popup_onReset.sqf";
			selectionsHit[] = {"target"};
		};
		class PopUp_Acc1: PopUp
		{
			cameraFOV = 0.35;
			cameraPos[] = {0, -1.5, 0.8};
			cameraTarget[] = {0, 0, 1.3};
			class Zones
			{
				class Head
				{
					bonuses[] = {8};
					center[] = {0, 0.17, 0.66};
					maxDistances[] = {0.06};
				};
				class Torso
				{
					bonuses[] = {6, 3};
					center[] = {0, 0.17, 0.18};
					maxDistances[] = {0.12, 0.25};
				};
			};
		};
		class PopUp_Acc2: PopUp
		{
			cameraFOV = 0.215;
			cameraPos[] = {0, -1.5, 0.6};
			cameraTarget[] = {0, 0, 0.9};
			downTime = 0.5;
			class Zones
			{
				class BullsEye
				{
					bonuses[] = {10, 4, 3, 2, 1};
					center[] = {0, 0.15, -0.02};
					maxDistances[] = {0.028, 0.055, 0.118, 0.178, 0.235};
				};
			};
		};
		class PopUp_Oval
		{
			cameraFOV = 0.3;
			onActivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\popup_oval_onActivate.sqf";
			onHit = "A3\Modules_F_Beta\FiringDrills\scripts\targets\popup_oval_onHit.sqf";
			onReset = "A3\Modules_F_Beta\FiringDrills\scripts\targets\popup_oval_onReset.sqf";
			selectionsHit[] = {"target", "pole_bottom", "pole_top", "pole_left", "pole_right"};
		};
		class PopUp_Zom_Acc1: PopUp
		{
			cameraFOV = 0.35;
			cameraPos[] = {0, -1.5, 0.8};
			cameraTarget[] = {0, 0, 1.3};
			class Zones
			{
				class Head
				{
					bonuses[] = {8};
					center[] = {0, 0.17, 0.66};
					maxDistances[] = {0.06};
				};
			};
		};
		class Skeet
		{
			cameraFOV = 0.2;
			onActivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\skeet_onActivate.sqf";
			onDeactivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\skeet_onDeactivate.sqf";
			onHit = "A3\Modules_F_Beta\FiringDrills\scripts\targets\skeet_onHit.sqf";
			onReset = "A3\Modules_F_Beta\FiringDrills\scripts\targets\skeet_onReset.sqf";
		};
		class Steel_Plate
		{
			cameraFOV = 0.3;
			onActivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\steel_plate_onActivate.sqf";
			onDeactivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\steel_plate_onReset.sqf";
			onHit = "A3\Modules_F_Beta\FiringDrills\scripts\targets\steel_plate_onHit.sqf";
			onReset = "A3\Modules_F_Beta\FiringDrills\scripts\targets\steel_plate_onReset.sqf";
		};
		class Swivel: PopUp
		{
			onActivate = "A3\Modules_F_Beta\FiringDrills\scripts\targets\swivel_onActivate.sqf";
			onHit = "A3\Modules_F_Beta\FiringDrills\scripts\targets\swivel_onHit.sqf";
			onReset = "A3\Modules_F_Beta\FiringDrills\scripts\targets\swivel_onReset.sqf";
			selectionsHit[] = {"plate"};
		};
	};
};
