class CfgFaces
{
	class AnimalHead
	{
		class Animal: Default {};
		class Default
		{
			author = "Bohemia Interactive";
			displayname = "animal";
			head = "";
			identityTypes[] = {"Animal"};
			material = "";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
		};
	};
	class Default
	{
		class Custom
		{
			back = "#(rgb,8,8,3)color(1,1,1,1)";
			front = "#(rgb,8,8,3)color(1,1,1,1)";
			head = "";
			identityTypes[] = {};
			material = "";
			materialHL = "";
			name = "";
			side = "#(rgb,8,8,3)color(1,1,1,1)";
			texture = "#(rgb,8,8,3)color(1,1,1,1)";
			textureHL = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
		};
		class Default
		{
			head = "";
			identityTypes[] = {"Default"};
			material = "";
			materialHL = "";
			name = "";
			texture = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
			textureHL = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
		};
	};
	class IG_Leader
	{
		class Default
		{
			disabled = 1;
			displayname = "Stavrou";
			head = "IG_Leader";
			identityTypes[] = {"IG_Leader"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			materialWounded1 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			materialWounded2 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader_co.paa";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
		};
		class IG_Leader: Default {};
	};
	class Kerry
	{
		class Default
		{
			disabled = 1;
			head = "KerryHead_A3";
			identityTypes[] = {"Kerry"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_A.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_A_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class Kerry: Default {};
		class Kerry_A_F: Default
		{
			identityTypes[] = {"Kerry_A"};
		};
		class kerry_B1_F: Default
		{
			identityTypes[] = {"kerry_B1"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B1_co.paa";
		};
		class kerry_B2_F: Default
		{
			identityTypes[] = {"kerry_B2"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B2_co.paa";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
		};
		class Kerry_C_F: Default
		{
			identityTypes[] = {"Kerry_C"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_C.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_C_co.paa";
		};
	};
	class Man_A3: Default
	{
		class AfricanHead_01: Default
		{
			author = "Bohemia Interactive";
			displayname = "Williams";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO", "Head_African"};
			material = "\A3\Characters_F\Heads\Data\m_african_01.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_african_01_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
		};
		class AfricanHead_02: AfricanHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Hasan";
			material = "\A3\Characters_F\Heads\Data\m_african_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_african_02_co.paa";
		};
		class AfricanHead_03: AfricanHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Jesus";
			material = "\A3\Characters_F\Heads\Data\m_african_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_african_03_co.paa";
		};
		class AsianHead_A3_01: Default
		{
			author = "Bohemia Interactive";
			displayname = "Ximi";
			head = "AsianHead_A3";
			identityTypes[] = {"Head_Asian"};
			material = "\A3\Characters_F\Heads\Data\m_Asian_01.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
		};
		class AsianHead_A3_02: AsianHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Jeong";
			material = "\A3\Characters_F\Heads\Data\m_Asian_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
		};
		class AsianHead_A3_03: AsianHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Tung";
			material = "\A3\Characters_F\Heads\Data\m_Asian_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
		};
		class AsianHead_A3_04: AsianHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Lee";
			DLC = "Expansion";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_04.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_04_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_04_co.paa";
		};
		class AsianHead_A3_05: AsianHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Chan";
			DLC = "Expansion";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_05.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_05_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_05_co.paa";
		};
		class AsianHead_A3_06: AsianHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Yeung";
			DLC = "Expansion";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_06.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_06_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_06_co.paa";
		};
		class AsianHead_A3_07: AsianHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Wong";
			DLC = "Expansion";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_07.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_07_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_07_co.paa";
		};
		class Barklem: AfricanHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Barklem";
			material = "\A3\Characters_F_Tacops\Heads\Data\m_Barklem.rvmat";
			texture = "\A3\Characters_F_Tacops\Heads\Data\m_Barklem_co.paa";
		};
		class CamoHead_African_01_F: AfricanHead_01
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_African_01";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_African_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_African_01_co.paa";
		};
		class CamoHead_African_02_F: AfricanHead_02
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_African_02";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_African_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_African_02_co.paa";
		};
		class CamoHead_African_03_F: AfricanHead_03
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_African_03";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_African_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_African_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_African_03_co.paa";
		};
		class CamoHead_Asian_01_F: AsianHead_A3_01
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Asian_01";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
		};
		class CamoHead_Asian_02_F: AsianHead_A3_02
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Asian_02";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
		};
		class CamoHead_Asian_03_F: AsianHead_A3_03
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Asian_03";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
		};
		class CamoHead_Greek_01_F: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Greek_01";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_01_co.paa";
		};
		class CamoHead_Greek_02_F: GreekHead_A3_02
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Greek_02";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_02_co.paa";
		};
		class CamoHead_Greek_03_F: GreekHead_A3_03
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Greek_03";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_03_co.paa";
		};
		class CamoHead_Greek_04_F: GreekHead_A3_04
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Greek_04";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_04.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Greek_04_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_04_co.paa";
		};
		class CamoHead_Greek_05_F: GreekHead_A3_05
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Greek_05";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
		};
		class CamoHead_Greek_06_F: GreekHead_A3_06
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Greek_06";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
		};
		class CamoHead_Greek_07_F: GreekHead_A3_07
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Greek_07";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
		};
		class CamoHead_Greek_08_F: GreekHead_A3_08
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Greek_08";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_04.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
		};
		class CamoHead_Greek_09_F: GreekHead_A3_09
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Greek_09";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush", "Head_Greek_camo_arid", "Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_05.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
		};
		class CamoHead_Persian_01_F: PersianHead_A3_01
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Persian_01";
			DLC = "Mark";
			identityTypes[] = {"Head_TK_camo_lush", "Head_TK_camo_arid", "Head_TK_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Persian_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Persian_01_co.paa";
		};
		class CamoHead_Persian_02_F: PersianHead_A3_02
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Persian_02";
			DLC = "Mark";
			identityTypes[] = {"Head_TK_camo_lush", "Head_TK_camo_arid", "Head_TK_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Persian_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Persian_02_co.paa";
		};
		class CamoHead_Persian_03_F: PersianHead_A3_03
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_Persian_03";
			DLC = "Mark";
			identityTypes[] = {"Head_TK_camo_lush", "Head_TK_camo_arid", "Head_TK_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_Persian_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_Persian_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Persian_03_co.paa";
		};
		class CamoHead_White_01_F: WhiteHead_01
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_01";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_01.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
		};
		class CamoHead_White_02_F: WhiteHead_02
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_02";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_02.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
		};
		class CamoHead_White_03_F: WhiteHead_03
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_03";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_03.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
		};
		class CamoHead_White_04_F: WhiteHead_04
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_04";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_04.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
		};
		class CamoHead_White_05_F: WhiteHead_05
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_05";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_05.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
		};
		class CamoHead_White_06_F: WhiteHead_06
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_06";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_06.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_06_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_06_co.paa";
		};
		class CamoHead_White_07_F: WhiteHead_07
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_07";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_07.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_07_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_07_co.paa";
		};
		class CamoHead_White_08_F: WhiteHead_08
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_08";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_08.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_08_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_08_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_08_co.paa";
		};
		class CamoHead_White_09_F: WhiteHead_09
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_09";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_09.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_09_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_09_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_09_co.paa";
		};
		class CamoHead_White_10_F: WhiteHead_10
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_10";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_10.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_10_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_10_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_10_co.paa";
		};
		class CamoHead_White_11_F: WhiteHead_11
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_11";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_11.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_11_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_11_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_11_co.paa";
		};
		class CamoHead_White_12_F: WhiteHead_12
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_12";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_12.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_12_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_12_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_12_co.paa";
		};
		class CamoHead_White_13_F: WhiteHead_13
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_13";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_13.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_13_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_13_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_13_co.paa";
		};
		class CamoHead_White_14_F: WhiteHead_14
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_14";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_14.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_14_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_14_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_14_co.paa";
		};
		class CamoHead_White_15_F: WhiteHead_15
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_15";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_15.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_15_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_15_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_15_co.paa";
		};
		class CamoHead_White_16_F: WhiteHead_16
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_16";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_16.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_16_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_16_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_16_co.paa";
		};
		class CamoHead_White_17_F: WhiteHead_17
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_17";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_17.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_17_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_17_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_17_co.paa";
		};
		class CamoHead_White_18_F: WhiteHead_18
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_18";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_18.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_18_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_18_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_18_co.paa";
		};
		class CamoHead_White_19_F: WhiteHead_19
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_19";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_19.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_19_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_19_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_19_co.paa";
		};
		class CamoHead_White_20_F: WhiteHead_20
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_20";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_20.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_20_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_20_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_20_co.paa";
		};
		class CamoHead_White_21_F: WhiteHead_21
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Camo_White_21";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush", "Head_NATO_camo_arid", "Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_camo_White_21.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_21_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_camo_White_21_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_White_21_co.paa";
		};
		class Custom: Custom
		{
			author = "Bohemia Interactive";
			displayname = "Custom face";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			texture = "#(argb,8,8,3)color(0.596,0.412,0.365,1)";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class Default
		{
			disabled = 0;
			displayname = "Default face";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class Dwarden: Default
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayname = "Dwarden";
			head = "Dwarden";
			identityTypes[] = {"Dwarden"};
			material = "\A3\Characters_F\Heads\Data\m_Dwarden.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Dwarden_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Dwarden_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Dwarden_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class GreekHead_A3_01: Default
		{
			author = "Bohemia Interactive";
			displayname = "Athanasiadis";
			head = "GreekHead_A3";
			identityTypes[] = {"Head_Greek"};
			material = "\A3\Characters_F\Heads\Data\m_Greek_01.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_01_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
		};
		class GreekHead_A3_02: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Baros";
			material = "\A3\Characters_F\Heads\Data\m_Greek_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_02_co.paa";
		};
		class GreekHead_A3_03: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Constantinou";
			identityTypes[] = {"Head_Greek", "Head_Rangemaster"};
			material = "\A3\Characters_F\Heads\Data\m_Greek_03.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_03_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
		};
		class GreekHead_A3_04: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Costas";
			material = "\A3\Characters_F\Heads\Data\m_Greek_04.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_old.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_04_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_04_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
		};
		class GreekHead_A3_05: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Doukas";
			identityTypes[] = {"Head_NATO", "Head_Greek"};
			material = "\A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
		};
		class GreekHead_A3_06: GreekHead_A3_05
		{
			author = "Bohemia Interactive";
			displayname = "Gikas";
			material = "\A3\Characters_F\Heads\Data\m_White_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
		};
		class GreekHead_A3_07: GreekHead_A3_05
		{
			author = "Bohemia Interactive";
			displayname = "Christou";
			material = "\A3\Characters_F\Heads\Data\m_White_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
		};
		class GreekHead_A3_08: GreekHead_A3_05
		{
			author = "Bohemia Interactive";
			displayname = "Kanelloupou";
			material = "\A3\Characters_F\Heads\Data\m_White_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
		};
		class GreekHead_A3_09: GreekHead_A3_05
		{
			author = "Bohemia Interactive";
			displayname = "Savalas";
			identityTypes[] = {"Head_NATO", "Head_Greek"};
			material = "\A3\Characters_F\Heads\Data\m_White_05.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
		};
		class GreekHead_A3_10_a: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Baros (Arid)";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_arid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_a.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_a_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_a_injury.rvmat";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_a_co.paa";
		};
		class GreekHead_A3_10_l: GreekHead_A3_10_a
		{
			author = "Bohemia Interactive";
			displayName = "Baros (Lush)";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_lush"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_l.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_l_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_l_injury.rvmat";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_l_co.paa";
		};
		class GreekHead_A3_10_sa: GreekHead_A3_10_a
		{
			author = "Bohemia Interactive";
			displayName = "Baros (Semi-Arid)";
			DLC = "Mark";
			identityTypes[] = {"Head_Greek_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa_injury.rvmat";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_Greek_10_sa_co.paa";
		};
		class GreekHead_A3_11: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Gavras";
			DLC = "Orange";
			identityTypes[] = {"Orange_Officer"};
			material = "a3\Characters_F_Orange\Heads\data\m_Greek_11.rvmat";
			materialWounded1 = "a3\Characters_F_Orange\Heads\data\m_Greek_11_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Orange\Heads\data\m_Greek_11_injury.rvmat";
			texture = "a3\Characters_F_Orange\Heads\data\m_Greek_11_co.paa";
		};
		class GreekHead_A3_12: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Markos";
			DLC = "Orange";
			identityTypes[] = {"Orange_Civilian"};
			material = "a3\Characters_F_Orange\Heads\data\m_Greek_12.rvmat";
			materialWounded1 = "a3\Characters_F_Orange\Heads\data\m_Greek_12_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Orange\Heads\data\m_Greek_12_injury.rvmat";
			texture = "a3\Characters_F_Orange\Heads\data\m_Greek_12_co.paa";
		};
		class GreekHead_A3_13: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Alexis";
			DLC = "Orange";
			identityTypes[] = {"Orange_FIA"};
			material = "a3\Characters_F_Orange\Heads\data\m_Greek_13.rvmat";
			materialWounded1 = "a3\Characters_F_Orange\Heads\data\m_Greek_13_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Orange\Heads\data\m_Greek_13_injury.rvmat";
			texture = "a3\Characters_F_Orange\Heads\data\m_Greek_13_co.paa";
		};
		class GreekHead_A3_14: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Dimitrou";
			DLC = "Orange";
			identityTypes[] = {"Orange_AAF"};
			material = "a3\Characters_F_Orange\Heads\data\m_Greek_14.rvmat";
			materialWounded1 = "a3\Characters_F_Orange\Heads\data\m_Greek_14_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Orange\Heads\data\m_Greek_14_injury.rvmat";
			texture = "a3\Characters_F_Orange\Heads\data\m_Greek_14_co.paa";
		};
		class Hladas: Default
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayname = "Dr. Hladík";
			head = "Hladas";
			identityTypes[] = {"Hladas"};
			material = "\A3\Characters_F\Heads\Data\m_Hladas.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Hladas_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Hladas_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Hladas_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class IG_Leader: Default
		{
			disabled = 1;
			displayname = "Stavrou";
			head = "IG_Leader";
			identityTypes[] = {"IG_Leader"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			materialWounded1 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			materialWounded2 = "A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader_co.paa";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
		};
		class Ioannou: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Ioannou";
			DLC = "Tank";
			material = "a3\Characters_F_Tank\Heads\data\m_Ioannou.rvmat";
			materialWounded1 = "a3\Characters_F_Tank\Heads\data\m_Ioannou_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Tank\Heads\data\m_Ioannou_injury.rvmat";
			texture = "a3\Characters_F_Tank\Heads\data\m_Ioannou_co.paa";
		};
		class Ivan: Default
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayname = "Ivan";
			head = "Ivan";
			identityTypes[] = {"Ivan"};
			material = "\A3\Characters_F\Heads\Data\m_Ivan.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Ivan_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Ivan_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Ivan_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class Jay: Default
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayname = "Jay";
			head = "Jay";
			identityTypes[] = {"Jay"};
			material = "\A3\Characters_F\Heads\Data\m_Jay.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Jay_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Jay_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Jay_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class Kerry: Default
		{
			disabled = 1;
			head = "KerryHead_A3";
			identityTypes[] = {"Kerry"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_A.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_A_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class Kerry_A_F: Kerry
		{
			identityTypes[] = {"Kerry_A"};
		};
		class kerry_B1_F: Kerry
		{
			identityTypes[] = {"kerry_B1"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B1.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b1_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b1_injury.rvmat";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B1_co.paa";
		};
		class kerry_B2_F: Kerry
		{
			identityTypes[] = {"kerry_B2"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b2_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_b2_injury.rvmat";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B2_co.paa";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
		};
		class Kerry_C_F: Kerry
		{
			identityTypes[] = {"Kerry_C"};
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_C.rvmat";
			materialWounded1 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
			materialWounded2 = "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_C_co.paa";
		};
		class LivonianHead_1: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Nowak";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_1.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_1_co.paa";
		};
		class LivonianHead_10: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Rabinowicz";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_10.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_10_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_10_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_10_co.paa";
		};
		class LivonianHead_2: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Górecki";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_2.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_2_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_2_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_2_co.paa";
		};
		class LivonianHead_3: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Kowalski";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_3.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_3_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_3_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_3_co.paa";
		};
		class LivonianHead_4: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Stolarski";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_4.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_4_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_4_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_4_co.paa";
		};
		class LivonianHead_5: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Burak";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_5.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_5_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_5_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_5_co.paa";
		};
		class LivonianHead_6: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Kawa";
			DLC = "Enoch";
			identityTypes[] = {"Head_Euro"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_6.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_6_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_6_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_6_co.paa";
		};
		class LivonianHead_7: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Janowski";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_7.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_7_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_7_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_7_co.paa";
		};
		class LivonianHead_8: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Sternik";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_8.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_8_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_8_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_8_co.paa";
		};
		class LivonianHead_9: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Zieliński";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_9.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_9_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_9_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_9_co.paa";
		};
		class Mavros: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Mavros";
			material = "\A3\Characters_F_Tacops\Heads\Data\m_Mavros.rvmat";
			texture = "\A3\Characters_F_Tacops\Heads\Data\m_Mavros_co.paa";
		};
		class Miller: Default
		{
			disabled = 1;
			displayname = "Miller";
			head = "Miller";
			identityTypes[] = {"Miller"};
			material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class Nikos: GreekHead_A3_01
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayname = "Nikos";
			head = "Nikos";
			identityTypes[] = {"Nikos"};
			material = "\A3\Characters_F\Heads\Data\m_nikos.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_nikos_co.paa";
		};
		class O_Colonel: Default
		{
			disabled = 1;
			displayname = "Namdar";
			head = "PersianHead_A3";
			identityTypes[] = {"O_Colonel"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
		};
		class PersianHead_A3_01: Default
		{
			author = "Bohemia Interactive";
			displayname = "Bahadur";
			head = "PersianHead_A3";
			identityTypes[] = {"Head_TK"};
			material = "\A3\Characters_F\Heads\Data\m_persian_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_persian_01_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
		};
		class PersianHead_A3_02: PersianHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Jalali";
			material = "\A3\Characters_F\Heads\Data\m_persian_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_persian_02_co.paa";
		};
		class PersianHead_A3_03: PersianHead_A3_01
		{
			author = "Bohemia Interactive";
			displayname = "Sabet";
			material = "\A3\Characters_F\Heads\Data\m_persian_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_persian_03_co.paa";
		};
		class PersianHead_A3_04_a: PersianHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Bahadur (Arid)";
			DLC = "Mark";
			head = "PersianHead_A3";
			identityTypes[] = {"Head_TK_camo_arid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_a.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_a_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_a_injury.rvmat";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_a_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_3_co.paa";
		};
		class PersianHead_A3_04_l: PersianHead_A3_04_a
		{
			author = "Bohemia Interactive";
			displayName = "Bahadur (Lush)";
			DLC = "Mark";
			identityTypes[] = {"Head_TK_camo_lush"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_l.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_l_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_l_injury.rvmat";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_l_co.paa";
		};
		class PersianHead_A3_04_sa: PersianHead_A3_04_a
		{
			author = "Bohemia Interactive";
			displayName = "Bahadur (Semi-Arid)";
			DLC = "Mark";
			identityTypes[] = {"Head_TK_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_injury.rvmat";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_persian_04_sa_co.paa";
		};
		class Pettka: Default
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayname = "Pettka";
			head = "Pettka";
			identityTypes[] = {"Pettka"};
			material = "\A3\Characters_F\Heads\Data\m_Pettka.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "\A3\Characters_F\Heads\Data\m_Pettka_injury.rvmat";
			materialWounded2 = "\A3\Characters_F\Heads\Data\m_Pettka_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Pettka_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class RussianHead_1: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Ivanov";
			DLC = "Enoch";
			identityTypes[] = {"Head_Russian"};
			material = "a3\Characters_F_Enoch\Heads\data\m_russianHead_1.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_1_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_1_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_russianHead_1_co.paa";
		};
		class RussianHead_2: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Petrenko";
			DLC = "Enoch";
			identityTypes[] = {"Head_Russian"};
			material = "a3\Characters_F_Enoch\Heads\data\m_russianHead_2.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_2_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_2_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_russianHead_2_co.paa";
		};
		class RussianHead_3: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Krupin";
			DLC = "Enoch";
			identityTypes[] = {"Head_Russian"};
			material = "a3\Characters_F_Enoch\Heads\data\m_russianHead_3.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_3_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_3_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_russianHead_3_co.paa";
		};
		class RussianHead_4: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Adamovich";
			DLC = "Enoch";
			identityTypes[] = {"Head_Russian"};
			material = "a3\Characters_F_Enoch\Heads\data\m_russianHead_4.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_4_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_4_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_russianHead_4_co.paa";
		};
		class RussianHead_5: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Yakhin";
			DLC = "Enoch";
			identityTypes[] = {"Head_Russian"};
			material = "a3\Characters_F_Enoch\Heads\data\m_russianHead_5.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_5_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_russianHead_5_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_russianHead_5_co.paa";
		};
		class Sturrock: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Sturrock";
			material = "\A3\Characters_F_Tacops\Heads\Data\m_Sturrock.rvmat";
			texture = "\A3\Characters_F_Tacops\Heads\Data\m_Sturrock_co.paa";
		};
		class TanoanBossHead: TanoanHead_A3_01
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayName = "Solomon Maru";
			DLC = "Expansion";
			identityTypes[] = {"Syndikat_Boss_F"};
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_boss.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_boss_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_boss_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_boss_co.paa";
		};
		class TanoanHead_A3_01: Default
		{
			author = "Bohemia Interactive";
			displayName = "Simo";
			DLC = "Expansion";
			head = "TanoanHead_A3";
			identityTypes[] = {"Head_Tanoan"};
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_01.rvmat";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL1 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_01_co.paa";
			textureHL = "\A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			textureHL2 = "\A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
		};
		class TanoanHead_A3_02: TanoanHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Adnet";
			DLC = "Expansion";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_02.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_02_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_02_co.paa";
		};
		class TanoanHead_A3_03: TanoanHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Cahun";
			DLC = "Expansion";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_03.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_03_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_03_co.paa";
		};
		class TanoanHead_A3_04: TanoanHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Ganio";
			DLC = "Expansion";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_04.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_04_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_04_co.paa";
		};
		class TanoanHead_A3_05: TanoanHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Malet";
			DLC = "Expansion";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_05.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_05_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_05_co.paa";
		};
		class TanoanHead_A3_06: TanoanHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Solé";
			DLC = "Expansion";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_06.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_06_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_06_co.paa";
		};
		class TanoanHead_A3_07: TanoanHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Mignard";
			DLC = "Expansion";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_07.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_07_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_07_co.paa";
		};
		class TanoanHead_A3_08: TanoanHead_A3_01
		{
			author = "Bohemia Interactive";
			displayName = "Thibaud";
			DLC = "Expansion";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_08.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_08_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_08_injury.rvmat";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_08_co.paa";
		};
		class WhiteHead_01: Default
		{
			author = "Bohemia Interactive";
			displayname = "Bayh";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_NATO", "Head_Euro"};
			material = "\A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
		};
		class WhiteHead_02: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Burr";
			material = "\A3\Characters_F\Heads\Data\m_White_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_02_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_02_co.paa";
		};
		class WhiteHead_03: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Coburn";
			material = "\A3\Characters_F\Heads\Data\m_White_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_03_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_03_co.paa";
		};
		class WhiteHead_04: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Collins";
			material = "\A3\Characters_F\Heads\Data\m_White_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
		};
		class WhiteHead_05: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Campbell";
			material = "\A3\Characters_F\Heads\Data\m_White_05.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
		};
		class WhiteHead_06: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Dayton";
			material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_06_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_06_co.paa";
		};
		class WhiteHead_07: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Dorgan";
			material = "\A3\Characters_F\Heads\Data\m_White_07.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_07_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_07_co.paa";
		};
		class WhiteHead_08: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Halliwell";
			material = "\A3\Characters_F\Heads\Data\m_White_08.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_08_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_08_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_08_co.paa";
		};
		class WhiteHead_09: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Johnson";
			material = "\A3\Characters_F\Heads\Data\m_White_09.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_09_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_09_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_09_co.paa";
		};
		class WhiteHead_10: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Martinez";
			material = "\A3\Characters_F\Heads\Data\m_White_10.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_10_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_10_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_10_co.paa";
		};
		class WhiteHead_11: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Kirby";
			material = "\A3\Characters_F\Heads\Data\m_White_11.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_11_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_11_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_11_co.paa";
		};
		class WhiteHead_12: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Reed";
			material = "\A3\Characters_F\Heads\Data\m_White_12.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_12_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_12_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_12_co.paa";
		};
		class WhiteHead_13: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Santorum";
			material = "\A3\Characters_F\Heads\Data\m_White_13.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_13_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_13_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_13_co.paa";
		};
		class WhiteHead_14: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Smith";
			material = "\A3\Characters_F\Heads\Data\m_White_14.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_14_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_14_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_14_co.paa";
		};
		class WhiteHead_15: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Snowe";
			material = "\A3\Characters_F\Heads\Data\m_White_15.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_15_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_15_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_White_15_co.paa";
		};
		class WhiteHead_16: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Kelly";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_16.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_16_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
		};
		class WhiteHead_17: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "O'Connor";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
		};
		class WhiteHead_18: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Byrne";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_18.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_18_co.paa";
		};
		class WhiteHead_19: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "O'Brien";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_19.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_19_co.paa";
		};
		class WhiteHead_20: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "Walsh";
			identityTypes[] = {"Head_NATO", "Head_Euro", "Tanker"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_20.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_20_co.paa";
		};
		class WhiteHead_21: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayname = "O'Sullivan";
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_21.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_21_co.paa";
		};
		class WhiteHead_22_a: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Kirby (Arid)";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_arid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_White_22_a.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_White_22_a_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_White_22_a_injury.rvmat";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_White_22_a_co.paa";
		};
		class WhiteHead_22_l: WhiteHead_22_a
		{
			author = "Bohemia Interactive";
			displayName = "Kirby (Lush)";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_lush"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_White_22_L.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_White_22_l_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_White_22_l_injury.rvmat";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_White_22_l_co.paa";
		};
		class WhiteHead_22_sa: WhiteHead_22_a
		{
			author = "Bohemia Interactive";
			displayName = "Kirby (Semi-Arid)";
			DLC = "Mark";
			identityTypes[] = {"Head_NATO_camo_semiarid"};
			material = "\A3\Characters_F_Mark\Heads\Data\m_White_22_sa.rvmat";
			materialWounded1 = "A3\Characters_F_Mark\Heads\Data\m_White_22_sa_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Mark\Heads\Data\m_White_22_sa_injury.rvmat";
			texture = "\A3\Characters_F_Mark\Heads\Data\m_White_22_sa_co.paa";
		};
		class WhiteHead_23: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Nathan";
			DLC = "Orange";
			identityTypes[] = {"Orange_EOD"};
			material = "a3\Characters_F_Orange\Heads\data\m_white_22.rvmat";
			materialWounded1 = "a3\Characters_F_Orange\Heads\data\m_white_22_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Orange\Heads\data\m_white_22_injury.rvmat";
			texture = "a3\Characters_F_Orange\Heads\data\m_white_22_co.paa";
		};
		class WhiteHead_24: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Čapek";
			DLC = "Enoch";
			identityTypes[] = {};
			material = "a3\Characters_F_Enoch\Heads\data\m_capek.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_capek_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_capek_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_capek_co.paa";
		};
		class WhiteHead_25: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Dillon";
			DLC = "Enoch";
			identityTypes[] = {};
			material = "a3\Characters_F_Enoch\Heads\data\m_dillon.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_dillon_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_dillon_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_dillon_co.paa";
		};
		class WhiteHead_26: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Homewood";
			DLC = "Enoch";
			identityTypes[] = {};
			material = "a3\Characters_F_Enoch\Heads\data\m_homewood.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_homewood_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_homewood_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_homewood_co.paa";
		};
		class WhiteHead_27: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Kesson";
			DLC = "Enoch";
			identityTypes[] = {};
			material = "a3\Characters_F_Enoch\Heads\data\m_kesson.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_kesson_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_kesson_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_kesson_co.paa";
		};
		class WhiteHead_28: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Kingsly";
			DLC = "Enoch";
			identityTypes[] = {};
			material = "a3\Characters_F_Enoch\Heads\data\m_kingsly.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_kingsly_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_kingsly_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_kingsly_co.paa";
		};
		class WhiteHead_29: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Severov";
			DLC = "Enoch";
			identityTypes[] = {};
			material = "a3\Characters_F_Enoch\Heads\data\m_kruglikov.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_kruglikov_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_kruglikov_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_kruglikov_co.paa";
		};
		class WhiteHead_30: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Smolko";
			DLC = "Enoch";
			identityTypes[] = {"Head_Enoch"};
			material = "a3\Characters_F_Enoch\Heads\data\m_smolko.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_smolko_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_smolko_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_smolko_co.paa";
		};
		class WhiteHead_31: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Stype";
			DLC = "Enoch";
			identityTypes[] = {};
			material = "a3\Characters_F_Enoch\Heads\data\m_stype.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_stype_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_stype_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_stype_co.paa";
		};
		class WhiteHead_32: WhiteHead_01
		{
			author = "Bohemia Interactive";
			displayName = "Rudwell";
			DLC = "Enoch";
			identityTypes[] = {};
			material = "a3\Characters_F_Enoch\Heads\data\m_rudwell.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_rudwell_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_rudwell_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_rudwell_co.paa";
		};
	};
	class Miller
	{
		class Default
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayname = "Miller";
			head = "Miller";
			identityTypes[] = {"Miller"};
			material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
		};
		class Miller: Default {};
	};
	class O_Colonel
	{
		class Default
		{
			disabled = 1;
			displayname = "Namdar";
			head = "PersianHead_A3";
			identityTypes[] = {"O_Colonel"};
			material = "\A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat";
			materialWounded1 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			materialWounded2 = "\A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_white_17_co.paa";
		};
		class O_Colonel: Default {};
	};
	class WomanHead_A3
	{
		class Default
		{
			author = "Bohemia Interactive";
			disabled = 1;
			displayname = "Default face";
			head = "WomanHead_A3";
			identityTypes[] = {"Woman"};
			material = "";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
		};
		class Woman_A3: Default {};
	};
};
